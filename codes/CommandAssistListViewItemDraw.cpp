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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x25
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v27; // x24
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  int32_t v34; // [xsp+8h] [xbp-58h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C211CC & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8256/*"LEVEL_INFO"*/);
    sub_1C2D490(&StringLiteral_5546/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/);
    sub_1C2D490(&StringLiteral_5545/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/);
    byte_4C211CC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  v13 = (System_String_o **)&StringLiteral_5546/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/;
  levelLabel = this->fields.levelLabel;
  if ( CurrentEntity->fields.lv != v11->fields.lv )
    v13 = (System_String_o **)&StringLiteral_5545/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/;
  v15 = *v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get(v15, 0);
  lv = CurrentEntity->fields.lv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v17, v18, v19);
  v35 = v11->fields.lv;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v21, v22, v23);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format_63499156(v16, v20, v24, 0);
  if ( !levelLabel )
    goto LABEL_19;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8256/*"LEVEL_INFO"*/, 0);
  v34 = CurrentEntity->fields.lv;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v28, v29, v30);
  v32 = (Il2CppObject *)System_String__Format(v27, v31, 0);
  v33 = System_String__Format(Detail_k__BackingField, v32, 0);
  WrapControlText__textAdjust(detailLabel, v33, 16, 0, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_19:
    sub_1C2D6EC(Master_object, v6);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, !item->fields._IsLast_k__BackingField, 0);
}