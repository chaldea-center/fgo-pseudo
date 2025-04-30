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
  DataManager_o *Instance; // x0
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
  int32_t num; // [xsp+0h] [xbp-50h] BYREF
  int v49; // [xsp+4h] [xbp-4Ch] BYREF
  UserItemEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A522E2 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, ent);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1B863B8(&int_TypeInfo, v7);
    sub_1B863B8(&LocalizationManager_TypeInfo, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_5499/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, v11);
    sub_1B863B8(&StringLiteral_5502/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, v12);
    sub_1B863B8(&StringLiteral_3751/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v13);
    sub_1B863B8(&StringLiteral_24769/*"{0:#,0}"*/, v14);
    sub_1B863B8(&StringLiteral_5500/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, v15);
    sub_1B863B8(&StringLiteral_5501/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, v16);
    sub_1B863B8(&StringLiteral_5498/*"EVENT_COMBINE_COSTUME_ITEM"*/, v17);
    byte_4A522E2 = 1;
  }
  entity = 0LL;
  v49 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !ent || !Instance )
    goto LABEL_35;
  DataMasterBase_object__object__int___GetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    ent->fields.eventId,
    (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  title = this->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3751/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !title )
    goto LABEL_35;
  UILabel__set_text(title, (System_String_o *)Instance, 0LL);
  subTitle = this->fields.subTitle;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5502/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_TITLE"*/, 0LL);
  v23 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5498/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (DataManager_o *)System_String__Format(v22, v23, 0LL);
  if ( !subTitle )
    goto LABEL_35;
  UILabel__set_text(subTitle, (System_String_o *)Instance, 0LL);
  reqItemLabel = this->fields.reqItemLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5501/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_REQ"*/, 0LL);
  v26 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5498/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (DataManager_o *)System_String__Format(v25, v26, 0LL);
  if ( !reqItemLabel )
    goto LABEL_35;
  UILabel__set_text(reqItemLabel, (System_String_o *)Instance, 0LL);
  haveItemLabel = this->fields.haveItemLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5500/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG_HAVE"*/, 0LL);
  v29 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5498/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (DataManager_o *)System_String__Format(v28, v29, 0LL);
  if ( !haveItemLabel )
    goto LABEL_35;
  UILabel__set_text(haveItemLabel, (System_String_o *)Instance, 0LL);
  msg = this->fields.msg;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5499/*"EVENT_COMBINE_COSTUME_ITEM_CONFIRM_DIALOG"*/, 0LL);
  v32 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5498/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
  Instance = (DataManager_o *)System_String__Format(v31, v32, 0LL);
  if ( !msg )
    goto LABEL_35;
  UILabel__set_text(msg, (System_String_o *)Instance, 0LL);
  itemNums = ent->fields.itemNums;
  if ( !itemNums )
    goto LABEL_35;
  if ( !itemNums->max_length )
    goto LABEL_36;
  reqItemCountLabel = this->fields.reqItemCountLabel;
  num = itemNums->m_Items[1];
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v33, v34, v35);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24769/*"{0:#,0}"*/, v38, 0LL);
  if ( !reqItemCountLabel )
    goto LABEL_35;
  UILabel__set_text(reqItemCountLabel, (System_String_o *)Instance, 0LL);
  haveItemCountLabel = this->fields.haveItemCountLabel;
  v49 = 0;
  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v49, 0LL);
  if ( !haveItemCountLabel )
    goto LABEL_35;
  UILabel__set_text(haveItemCountLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v19);
    byte_4A48C25 = 1;
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
  if ( !itemIds->max_length )
    goto LABEL_36;
  if ( !MasterData_object )
    goto LABEL_35;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity(
                                (UserItemMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                itemIds->m_Items[1],
                                0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_31;
  if ( !entity
    || (v45 = this->fields.haveItemCountLabel,
        num = entity->fields.num,
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v42, v43, v44),
        Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_24769/*"{0:#,0}"*/, v46, 0LL),
        !v45) )
  {
LABEL_35:
    sub_1B86614(Instance, v19);
  }
  UILabel__set_text(v45, (System_String_o *)Instance, 0LL);
LABEL_31:
  v47 = ent->fields.itemIds;
  if ( !v47 )
    goto LABEL_35;
  if ( !v47->max_length )
LABEL_36:
    sub_1B8661C(Instance, v19);
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_35;
  LimitCntUpItemComponent__SetItemIcon((LimitCntUpItemComponent_o *)Instance, v47->m_Items[1], 0LL);
}