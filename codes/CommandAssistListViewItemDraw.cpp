void __fastcall CommandAssistListViewItemDraw___ctor(CommandAssistListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandAssistListViewItemDraw__UpdateUi(
        CommandAssistListViewItemDraw_o *this,
        CommandAssistListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  EventCommandAssistMaster_o *v29; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x21
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  UISprite_o *icon; // x23
  EventCommandAssistEntity_o *v33; // x22
  System_String_o *v34; // x24
  UILabel_o *levelLabel; // x23
  System_String_o **v36; // x8
  System_String_o *v37; // x24
  System_String_o *v38; // x24
  Il2CppObject *v39; // x25
  Il2CppObject *v40; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v43; // x24
  Il2CppObject *v44; // x0
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  int32_t v47; // [xsp+0h] [xbp-50h] BYREF
  int32_t v48; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t lv; // [xsp+8h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E8B61 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8461/*"LEVEL_INFO"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5664/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_5663/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/, v24, v25, v26);
    byte_42E8B61 = 1;
  }
  IconImageId_k__BackingField = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item )
    goto LABEL_23;
  v29 = Master_WarQuestSelectionMaster;
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
                     v29,
                     item->fields._EventId_k__BackingField,
                     item->fields._AssistId_k__BackingField,
                     0LL);
  icon = this->fields.icon;
  v33 = MaxLevelEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v34 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v34, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, item->fields._Name_k__BackingField, 0LL);
  if ( !CurrentEntity || !v33 )
    goto LABEL_23;
  levelLabel = this->fields.levelLabel;
  v36 = (System_String_o **)(CurrentEntity->fields.lv == v33->fields.lv ? &StringLiteral_5664/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/ : &StringLiteral_5663/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/);
  v37 = *v36;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v38 = LocalizationManager__Get(v37, 0LL);
  lv = CurrentEntity->fields.lv;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  v48 = v33->fields.lv;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format_44573324(v38, v39, v40, 0LL);
  if ( !levelLabel )
    goto LABEL_23;
  UILabel__set_text(levelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
  v47 = CurrentEntity->fields.lv;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v45 = (Il2CppObject *)System_String__Format(v43, v44, 0LL);
  v46 = System_String__Format(Detail_k__BackingField, v45, 0LL);
  WrapControlText__textAdjust(detailLabel, v46, 16, 0, 0, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v28);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster,
    !item->fields._IsLast_k__BackingField,
    0LL);
}