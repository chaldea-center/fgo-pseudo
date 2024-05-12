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
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *icon; // x22
  EventCommandAssistEntity_o *v9; // x21
  System_String_o *v10; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v12; // x0
  UILabel_o *levelLabel; // x22
  __int64 v14; // x2
  System_String_o *v15; // x23
  Il2CppObject *v16; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v18; // x23
  __int64 v19; // x2
  Il2CppObject *v20; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v23; // x24
  __int64 v24; // x2
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v30; // x24
  __int64 v31; // x2
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  int v35; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v36; // [xsp+10h] [xbp-50h] BYREF
  int v37; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_438DECB & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8532/*"LEVEL_INFO"*/);
    sub_B775C4(&StringLiteral_5734/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/);
    byte_438DECB = 1;
  }
  IconImageId_k__BackingField = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  v9 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v10 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v10, 0LL);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v12 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  AtlasManager__SetEventSprite(beforeIcon, v12, 0LL);
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
                                                                   (System_String_o *)StringLiteral_5734/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/,
                                                                   0LL);
  if ( !v9 )
    goto LABEL_21;
  v15 = (System_String_o *)Master_WarQuestSelectionMaster;
  lv = v9->fields.lv;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v14);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format(v15, v16, 0LL);
  if ( !levelLabel )
    goto LABEL_21;
  UILabel__set_text(levelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8532/*"LEVEL_INFO"*/, 0LL);
  v37 = v9->fields.lv - 1;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v19);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format(v18, v20, 0LL);
  if ( !beforeLevelLabel )
    goto LABEL_21;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8532/*"LEVEL_INFO"*/, 0LL);
  v36 = v9->fields.lv;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v24);
  v26 = (Il2CppObject *)System_String__Format(v23, v25, 0LL);
  v27 = System_String__Format(Detail_k__BackingField, v26, 0LL);
  WrapControlText__textAdjust(detailLabel, v27, 16, 0, 0, 0LL);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8532/*"LEVEL_INFO"*/, 0LL);
  v35 = v9->fields.lv - 1;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v31);
  v33 = (Il2CppObject *)System_String__Format(v30, v32, 0LL);
  v34 = System_String__Format(BeforeDetail_k__BackingField, v33, 0LL);
  WrapControlText__textAdjust(beforeDetailLabel, v34, 16, 0, 0, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster,
    !item->fields._IsLast_k__BackingField,
    0LL);
}