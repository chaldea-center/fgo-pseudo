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
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *icon; // x22
  EventCommandAssistEntity_o *v28; // x21
  System_String_o *v29; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v31; // x0
  UILabel_o *levelLabel; // x22
  System_String_o *v33; // x23
  Il2CppObject *v34; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v36; // x23
  Il2CppObject *v37; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v40; // x24
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v46; // x24
  Il2CppObject *v47; // x0
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  int v50; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v51; // [xsp+10h] [xbp-50h] BYREF
  int v52; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42E8B6B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8461/*"LEVEL_INFO"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5668/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, v21, v22, v23);
    byte_42E8B6B = 1;
  }
  IconImageId_k__BackingField = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  v28 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v29 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v29, 0LL);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v31 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  AtlasManager__SetEventSprite(beforeIcon, v31, 0LL);
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
                                                                   (System_String_o *)StringLiteral_5668/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/,
                                                                   0LL);
  if ( !v28 )
    goto LABEL_21;
  v33 = (System_String_o *)Master_WarQuestSelectionMaster;
  lv = v28->fields.lv;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format(v33, v34, 0LL);
  if ( !levelLabel )
    goto LABEL_21;
  UILabel__set_text(levelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
  v52 = v28->fields.lv - 1;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format(v36, v37, 0LL);
  if ( !beforeLevelLabel )
    goto LABEL_21;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
  v51 = v28->fields.lv;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v42 = (Il2CppObject *)System_String__Format(v40, v41, 0LL);
  v43 = System_String__Format(Detail_k__BackingField, v42, 0LL);
  WrapControlText__textAdjust(detailLabel, v43, 16, 0, 0, 0LL);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
  v50 = v28->fields.lv - 1;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v48 = (Il2CppObject *)System_String__Format(v46, v47, 0LL);
  v49 = System_String__Format(BeforeDetail_k__BackingField, v48, 0LL);
  WrapControlText__textAdjust(beforeDetailLabel, v49, 16, 0, 0, 0LL);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_WarQuestSelectionMaster )
LABEL_21:
    sub_B5D69C(Master_WarQuestSelectionMaster, v25);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_WarQuestSelectionMaster,
    !item->fields._IsLast_k__BackingField,
    0LL);
}