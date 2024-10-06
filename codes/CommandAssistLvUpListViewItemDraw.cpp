void __fastcall CommandAssistLvUpListViewItemDraw___ctor(
        CommandAssistLvUpListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandAssistLvUpListViewItemDraw__UpdateUi(
        CommandAssistLvUpListViewItemDraw_o *this,
        CommandAssistLvUpListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v12; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *icon; // x22
  EventCommandAssistEntity_o *v15; // x21
  System_String_o *v16; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v18; // x0
  UILabel_o *levelLabel; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_String_o *v23; // x23
  Il2CppObject *v24; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v33; // x24
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v42; // x24
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  int v49; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v50; // [xsp+8h] [xbp-58h] BYREF
  int v51; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A73EE8 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, item);
    sub_1B90010(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_1B90010(&DataManager_TypeInfo, v6);
    sub_1B90010(&int_TypeInfo, v7);
    sub_1B90010(&LocalizationManager_TypeInfo, v8);
    sub_1B90010(&StringLiteral_8240/*"LEVEL_INFO"*/, v9);
    sub_1B90010(&StringLiteral_5584/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, v10);
    byte_4A73EE8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item || !Master_object )
    goto LABEL_18;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_object,
                    item->fields._EventId_k__BackingField,
                    item->fields._AssistId_k__BackingField,
                    -1,
                    0,
                    0LL);
  icon = this->fields.icon;
  v15 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v16 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v16, 0LL);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v18 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  AtlasManager__SetEventSprite(beforeIcon, v18, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._Name_k__BackingField, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.beforeNameLabel;
  if ( !Master_object )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._BeforeName_k__BackingField, 0LL);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5584/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, 0LL);
  if ( !v15 )
    goto LABEL_18;
  v23 = (System_String_o *)Master_object;
  lv = v15->fields.lv;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v20, v21, v22);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v23, v24, 0LL);
  if ( !levelLabel )
    goto LABEL_18;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0LL);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8240/*"LEVEL_INFO"*/, 0LL);
  v51 = v15->fields.lv - 1;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v27, v28, v29);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v26, v30, 0LL);
  if ( !beforeLevelLabel )
    goto LABEL_18;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_object, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8240/*"LEVEL_INFO"*/, 0LL);
  v50 = v15->fields.lv;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v34, v35, v36);
  v38 = (Il2CppObject *)System_String__Format(v33, v37, 0LL);
  v39 = System_String__Format(Detail_k__BackingField, v38, 0LL);
  WrapControlText__textAdjust(detailLabel, v39, 16, 0, 0, 0LL);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8240/*"LEVEL_INFO"*/, 0LL);
  v49 = v15->fields.lv - 1;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v43, v44, v45);
  v47 = (Il2CppObject *)System_String__Format(v42, v46, 0LL);
  v48 = System_String__Format(BeforeDetail_k__BackingField, v47, 0LL);
  WrapControlText__textAdjust(beforeDetailLabel, v48, 16, 0, 0, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_18:
    sub_1B9026C(Master_object, v12);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_object,
    !item->fields._IsLast_k__BackingField,
    0LL);
}