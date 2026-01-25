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
  System_String_o *v14; // x23
  Il2CppObject *v15; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v17; // x23
  Il2CppObject *v18; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v21; // x24
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v27; // x24
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int v31; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v32; // [xsp+8h] [xbp-58h] BYREF
  int v33; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CE8BBA & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8286/*"LEVEL_INFO"*/);
    sub_1C7BAE8(&StringLiteral_5566/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/);
    byte_4CE8BBA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5566/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, 0);
  if ( !v9 )
    goto LABEL_18;
  v14 = (System_String_o *)Master_object;
  lv = v9->fields.lv;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v14, v15, 0);
  if ( !levelLabel )
    goto LABEL_18;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8286/*"LEVEL_INFO"*/, 0);
  v33 = v9->fields.lv - 1;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v17, v18, 0);
  if ( !beforeLevelLabel )
    goto LABEL_18;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_object, 0);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8286/*"LEVEL_INFO"*/, 0);
  v32 = v9->fields.lv;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v23 = (Il2CppObject *)System_String__Format(v21, v22, 0);
  v24 = System_String__Format(Detail_k__BackingField, v23, 0);
  WrapControlText__textAdjust(detailLabel, v24, 16, 0, 0);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8286/*"LEVEL_INFO"*/, 0);
  v31 = v9->fields.lv - 1;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v29 = (Il2CppObject *)System_String__Format(v27, v28, 0);
  v30 = System_String__Format(BeforeDetail_k__BackingField, v29, 0);
  WrapControlText__textAdjust(beforeDetailLabel, v30, 16, 0, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_18:
    sub_1C7BD40(Master_object, v6);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, !item->fields._IsLast_k__BackingField, 0);
}