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
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *icon; // x22
  EventCommandAssistEntity_o *v14; // x21
  System_String_o *v15; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v17; // x0
  UILabel_o *levelLabel; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v22; // x23
  Il2CppObject *v23; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v26; // x24
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v32; // x24
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  int v36; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v37; // [xsp+10h] [xbp-50h] BYREF
  int v38; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42147C2 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, item);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_8398/*"LEVEL_INFO"*/, v9);
    sub_B0D8A4(&StringLiteral_5607/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, v10);
    byte_42147C2 = 1;
  }
  IconImageId_k__BackingField = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  v14 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v15 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v15, 0LL);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v17 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  AtlasManager__SetEventSprite(beforeIcon, v17, 0LL);
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
                                                                   (System_String_o *)StringLiteral_5607/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/,
                                                                   0LL);
  if ( !v14 )
    goto LABEL_21;
  v19 = (System_String_o *)Master_WarQuestSelectionMaster;
  lv = v14->fields.lv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format(v19, v20, 0LL);
  if ( !levelLabel )
    goto LABEL_21;
  UILabel__set_text(levelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LEVEL_INFO"*/, 0LL);
  v38 = v14->fields.lv - 1;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format(v22, v23, 0LL);
  if ( !beforeLevelLabel )
    goto LABEL_21;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LEVEL_INFO"*/, 0LL);
  v37 = v14->fields.lv;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v28 = (Il2CppObject *)System_String__Format(v26, v27, 0LL);
  v29 = System_String__Format(Detail_k__BackingField, v28, 0LL);
  WrapControlText__textAdjust(detailLabel, v29, 16, 0, 0, 0LL);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LEVEL_INFO"*/, 0LL);
  v36 = v14->fields.lv - 1;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v34 = (Il2CppObject *)System_String__Format(v32, v33, 0LL);
  v35 = System_String__Format(BeforeDetail_k__BackingField, v34, 0LL);
  WrapControlText__textAdjust(beforeDetailLabel, v35, 16, 0, 0, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster,
    !item->fields._IsLast_k__BackingField,
    0LL);
}