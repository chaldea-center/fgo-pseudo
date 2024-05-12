void __fastcall CommandAssistListViewItemDraw___ctor(CommandAssistListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandAssistListViewItemDraw__UpdateUi(
        CommandAssistListViewItemDraw_o *this,
        CommandAssistListViewItem_o *item,
        const MethodInfo *method)
{
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  EventCommandAssistMaster_o *v7; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x21
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  UISprite_o *icon; // x23
  EventCommandAssistEntity_o *v11; // x22
  System_String_o *v12; // x24
  UILabel_o *levelLabel; // x23
  System_String_o **v14; // x8
  System_String_o *v15; // x24
  System_String_o *v16; // x24
  __int64 v17; // x2
  Il2CppObject *v18; // x25
  __int64 v19; // x2
  Il2CppObject *v20; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v23; // x24
  __int64 v24; // x2
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  int32_t v28; // [xsp+0h] [xbp-50h] BYREF
  int32_t v29; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438DEC1 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8532/*"LEVEL_INFO"*/);
    sub_B775C4(&StringLiteral_5730/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/);
    sub_B775C4(&StringLiteral_5729/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/);
    byte_438DEC1 = 1;
  }
  IconImageId_k__BackingField = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item )
    goto LABEL_23;
  v7 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_WarQuestSelectionMaster,
                    item->fields._EventId_k__BackingField,
                    item->fields._AssistId_k__BackingField,
                    -1,
                    0,
                    0LL);
  MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(
                     v7,
                     item->fields._EventId_k__BackingField,
                     item->fields._AssistId_k__BackingField,
                     0LL);
  icon = this->fields.icon;
  v11 = MaxLevelEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v12 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v12, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, item->fields._Name_k__BackingField, 0LL);
  if ( !CurrentEntity || !v11 )
    goto LABEL_23;
  levelLabel = this->fields.levelLabel;
  v14 = (System_String_o **)(CurrentEntity->fields.lv == v11->fields.lv ? &StringLiteral_5730/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/ : &StringLiteral_5729/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/);
  v15 = *v14;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get(v15, 0LL);
  lv = CurrentEntity->fields.lv;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v17);
  v29 = v11->fields.lv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v19);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format_44897472(v16, v18, v20, 0LL);
  if ( !levelLabel )
    goto LABEL_23;
  UILabel__set_text(levelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8532/*"LEVEL_INFO"*/, 0LL);
  v28 = CurrentEntity->fields.lv;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v24);
  v26 = (Il2CppObject *)System_String__Format(v23, v25, 0LL);
  v27 = System_String__Format(Detail_k__BackingField, v26, 0LL);
  WrapControlText__textAdjust(detailLabel, v27, 16, 0, 0, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster,
    !item->fields._IsLast_k__BackingField,
    0LL);
}