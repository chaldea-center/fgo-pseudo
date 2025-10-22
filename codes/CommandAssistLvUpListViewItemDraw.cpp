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
  __int64 v6; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *icon; // x22
  EventCommandAssistEntity_o *v9; // x21
  System_String_o *v10; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v12; // x0
  UILabel_o *levelLabel; // x22
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  System_String_o *v20; // x23
  Il2CppObject *v21; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v23; // x23
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v33; // x24
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v45; // x24
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x5
  __int64 v50; // x6
  __int64 v51; // x7
  Il2CppObject *v52; // x0
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  int v55; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v56; // [xsp+8h] [xbp-58h] BYREF
  int v57; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C513AE & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_8263/*"LEVEL_INFO"*/);
    sub_1C3E564(&StringLiteral_5559/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/);
    byte_4C513AE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  v9 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v10 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v10, 0);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v12 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0);
  AtlasManager__SetEventSprite(beforeIcon, v12, 0);
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
  Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5559/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, 0);
  if ( !v9 )
    goto LABEL_18;
  v20 = (System_String_o *)Master_object;
  lv = v9->fields.lv;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v14, v15, v16, v17, v18, v19);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v20, v21, 0);
  if ( !levelLabel )
    goto LABEL_18;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8263/*"LEVEL_INFO"*/, 0);
  v57 = v9->fields.lv - 1;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v24, v25, v26, v27, v28, v29);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v23, v30, 0);
  if ( !beforeLevelLabel )
    goto LABEL_18;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_object, 0);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8263/*"LEVEL_INFO"*/, 0);
  v56 = v9->fields.lv;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v34, v35, v36, v37, v38, v39);
  v41 = (Il2CppObject *)System_String__Format(v33, v40, 0);
  v42 = System_String__Format(Detail_k__BackingField, v41, 0);
  WrapControlText__textAdjust(detailLabel, v42, 16, 0, 0);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_8263/*"LEVEL_INFO"*/, 0);
  v55 = v9->fields.lv - 1;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v46, v47, v48, v49, v50, v51);
  v53 = (Il2CppObject *)System_String__Format(v45, v52, 0);
  v54 = System_String__Format(BeforeDetail_k__BackingField, v53, 0);
  WrapControlText__textAdjust(beforeDetailLabel, v54, 16, 0, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_18:
    sub_1C3E7C0(Master_object, v6);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, !item->fields._IsLast_k__BackingField, 0);
}