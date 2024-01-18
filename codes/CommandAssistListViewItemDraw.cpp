void __fastcall CommandAssistListViewItemDraw___ctor(CommandAssistListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandAssistListViewItemDraw__UpdateUi(
        CommandAssistListViewItemDraw_o *this,
        CommandAssistListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  EventCommandAssistMaster_o *v14; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x21
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  UISprite_o *icon; // x23
  EventCommandAssistEntity_o *v18; // x22
  System_String_o *v19; // x24
  UILabel_o *levelLabel; // x23
  System_String_o **v21; // x8
  System_String_o *v22; // x24
  System_String_o *v23; // x24
  Il2CppObject *v24; // x25
  Il2CppObject *v25; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v28; // x24
  Il2CppObject *v29; // x0
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  int32_t v32; // [xsp+0h] [xbp-50h] BYREF
  int32_t v33; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4188076 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_8377/*"LEVEL_INFO"*/, v9);
    sub_B2C35C(&StringLiteral_5587/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/, v10);
    sub_B2C35C(&StringLiteral_5586/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/, v11);
    byte_4188076 = 1;
  }
  IconImageId_k__BackingField = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item )
    goto LABEL_23;
  v14 = Master_WarQuestSelectionMaster;
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
                     v14,
                     item->fields._EventId_k__BackingField,
                     item->fields._AssistId_k__BackingField,
                     0LL);
  icon = this->fields.icon;
  v18 = MaxLevelEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v19 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v19, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, item->fields._Name_k__BackingField, 0LL);
  if ( !CurrentEntity || !v18 )
    goto LABEL_23;
  levelLabel = this->fields.levelLabel;
  v21 = (System_String_o **)(CurrentEntity->fields.lv == v18->fields.lv ? &StringLiteral_5587/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/ : &StringLiteral_5586/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/);
  v22 = *v21;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v23 = LocalizationManager__Get(v22, 0LL);
  lv = CurrentEntity->fields.lv;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  v33 = v18->fields.lv;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format_44301068(v23, v24, v25, 0LL);
  if ( !levelLabel )
    goto LABEL_23;
  UILabel__set_text(levelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8377/*"LEVEL_INFO"*/, 0LL);
  v32 = CurrentEntity->fields.lv;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v30 = (Il2CppObject *)System_String__Format(v28, v29, 0LL);
  v31 = System_String__Format(Detail_k__BackingField, v30, 0LL);
  WrapControlText__textAdjust(detailLabel, v31, 16, 0, 0, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster,
    !item->fields._IsLast_k__BackingField,
    0LL);
}