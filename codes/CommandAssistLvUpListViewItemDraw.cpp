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
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *icon; // x22
  EventCommandAssistEntity_o *v15; // x21
  System_String_o *v16; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v18; // x0
  UILabel_o *levelLabel; // x22
  System_String_o *v20; // x23
  Il2CppObject *v21; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v23; // x23
  Il2CppObject *v24; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v27; // x24
  Il2CppObject *v28; // x0
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v33; // x24
  Il2CppObject *v34; // x0
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  int v37; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v38; // [xsp+10h] [xbp-50h] BYREF
  int v39; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4188080 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_8377/*"LEVEL_INFO"*/, v9);
    sub_B2C35C(&StringLiteral_5591/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, v10);
    byte_4188080 = 1;
  }
  IconImageId_k__BackingField = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item || !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_WarQuestSelectionMaster,
                    item->fields._EventId_k__BackingField,
                    item->fields._AssistId_k__BackingField,
                    -1,
                    0,
                    0LL);
  icon = this->fields.icon;
  v15 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v16 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v16, 0LL);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v18 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  AtlasManager__SetEventSprite(beforeIcon, v18, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, item->fields._Name_k__BackingField, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.beforeNameLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, item->fields._BeforeName_k__BackingField, 0LL);
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_5591/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/,
                                                                   0LL);
  if ( !v15 )
    goto LABEL_21;
  v20 = (System_String_o *)Master_WarQuestSelectionMaster;
  lv = v15->fields.lv;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format(v20, v21, 0LL);
  if ( !levelLabel )
    goto LABEL_21;
  UILabel__set_text(levelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8377/*"LEVEL_INFO"*/, 0LL);
  v39 = v15->fields.lv - 1;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format(v23, v24, 0LL);
  if ( !beforeLevelLabel )
    goto LABEL_21;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8377/*"LEVEL_INFO"*/, 0LL);
  v38 = v15->fields.lv;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v29 = (Il2CppObject *)System_String__Format(v27, v28, 0LL);
  v30 = System_String__Format(Detail_k__BackingField, v29, 0LL);
  WrapControlText__textAdjust(detailLabel, v30, 16, 0, 0, 0LL);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8377/*"LEVEL_INFO"*/, 0LL);
  v37 = v15->fields.lv - 1;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v35 = (Il2CppObject *)System_String__Format(v33, v34, 0LL);
  v36 = System_String__Format(BeforeDetail_k__BackingField, v35, 0LL);
  WrapControlText__textAdjust(beforeDetailLabel, v36, 16, 0, 0, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster,
    !item->fields._IsLast_k__BackingField,
    0LL);
}