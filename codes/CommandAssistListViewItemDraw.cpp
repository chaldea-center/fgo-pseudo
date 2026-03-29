void CommandAssistListViewItemDraw___ctor(CommandAssistListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommandAssistListViewItemDraw__UpdateUi(
        CommandAssistListViewItemDraw_o *this,
        CommandAssistListViewItem_o *item,
        const MethodInfo *method)
{
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v6; // x1
  EventCommandAssistMaster_o *v7; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x21
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  UISprite_o *icon; // x23
  EventCommandAssistEntity_o *v11; // x22
  System_String_o *v12; // x24
  System_String_o **v13; // x8
  UILabel_o *levelLabel; // x23
  System_String_o *v15; // x24
  System_String_o *v16; // x24
  Il2CppObject *v17; // x25
  Il2CppObject *v18; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v21; // x24
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int32_t v25; // [xsp+8h] [xbp-58h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4D2A546 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8311/*"LEVEL_INFO"*/);
    sub_1C93AD4(&StringLiteral_5579/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/);
    sub_1C93AD4(&StringLiteral_5578/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/);
    byte_4D2A546 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item )
    goto LABEL_19;
  v7 = Master_object;
  if ( !Master_object )
    goto LABEL_19;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_object,
                    item->fields._EventId_k__BackingField,
                    item->fields._AssistId_k__BackingField,
                    -1,
                    0,
                    0);
  MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(
                     v7,
                     item->fields._EventId_k__BackingField,
                     item->fields._AssistId_k__BackingField,
                     0);
  icon = this->fields.icon;
  v11 = MaxLevelEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v12 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v12, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._Name_k__BackingField, 0);
  if ( !CurrentEntity || !v11 )
    goto LABEL_19;
  v13 = (System_String_o **)&StringLiteral_5579/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/;
  levelLabel = this->fields.levelLabel;
  if ( CurrentEntity->fields.lv != v11->fields.lv )
    v13 = (System_String_o **)&StringLiteral_5578/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/;
  v15 = *v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get(v15, 0);
  lv = CurrentEntity->fields.lv;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  v26 = v11->fields.lv;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format_64467032(v16, v17, v18, 0);
  if ( !levelLabel )
    goto LABEL_19;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8311/*"LEVEL_INFO"*/, 0);
  v25 = CurrentEntity->fields.lv;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v23 = (Il2CppObject *)System_String__Format(v21, v22, 0);
  v24 = System_String__Format(Detail_k__BackingField, v23, 0);
  WrapControlText__textAdjust(detailLabel, v24, 16, 0, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_19:
    sub_1C93D2C(Master_object, v6);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, !item->fields._IsLast_k__BackingField, 0);
}