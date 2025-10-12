void CommandAssistLvUpListViewItemDraw___ctor(CommandAssistLvUpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommandAssistLvUpListViewItemDraw__UpdateUi(
        CommandAssistLvUpListViewItemDraw_o *this,
        CommandAssistLvUpListViewItem_o *item,
        const MethodInfo *method)
{
  EventCommandAssistMaster_o *Master_object; // x0
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *icon; // x22
  EventCommandAssistEntity_o *v8; // x21
  System_String_o *v9; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v11; // x0
  UILabel_o *levelLabel; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  Il2CppObject *v29; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v32; // x24
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  Il2CppObject *v39; // x0
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v44; // x24
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  Il2CppObject *v51; // x0
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  int v54; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v55; // [xsp+8h] [xbp-58h] BYREF
  int v56; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C32044 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_8262/*"LEVEL_INFO"*/);
    sub_1C32C20(&StringLiteral_5558/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/);
    byte_4C32044 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item || !Master_object )
    goto LABEL_18;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_object,
                    item->fields._EventId_k__BackingField,
                    item->fields._AssistId_k__BackingField,
                    -1,
                    0,
                    0);
  icon = this->fields.icon;
  v8 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v9 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v9, 0);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v11 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0);
  AtlasManager__SetEventSprite(beforeIcon, v11, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._Name_k__BackingField, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.beforeNameLabel;
  if ( !Master_object )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._BeforeName_k__BackingField, 0);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5558/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, 0);
  if ( !v8 )
    goto LABEL_18;
  v19 = (System_String_o *)Master_object;
  lv = v8->fields.lv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v13, v14, v15, v16, v17, v18);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v19, v20, 0);
  if ( !levelLabel )
    goto LABEL_18;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8262/*"LEVEL_INFO"*/, 0);
  v56 = v8->fields.lv - 1;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v23, v24, v25, v26, v27, v28);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v22, v29, 0);
  if ( !beforeLevelLabel )
    goto LABEL_18;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_object, 0);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8262/*"LEVEL_INFO"*/, 0);
  v55 = v8->fields.lv;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v33, v34, v35, v36, v37, v38);
  v40 = (Il2CppObject *)System_String__Format(v32, v39, 0);
  v41 = System_String__Format(Detail_k__BackingField, v40, 0);
  WrapControlText__textAdjust(detailLabel, v41, 16, 0, 0);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8262/*"LEVEL_INFO"*/, 0);
  v54 = v8->fields.lv - 1;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v45, v46, v47, v48, v49, v50);
  v52 = (Il2CppObject *)System_String__Format(v44, v51, 0);
  v53 = System_String__Format(BeforeDetail_k__BackingField, v52, 0);
  WrapControlText__textAdjust(beforeDetailLabel, v53, 16, 0, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_18:
    sub_1C32E7C(Master_object);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, !item->fields._IsLast_k__BackingField, 0);
}