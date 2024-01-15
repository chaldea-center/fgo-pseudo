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
  UILabel_o *nameLabel; // x0
  UILabel_o *beforeNameLabel; // x0
  UILabel_o *levelLabel; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x23
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v26; // x23
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v31; // x24
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v37; // x24
  Il2CppObject *v38; // x0
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  UnityEngine_Behaviour_o *line; // x0
  int v42; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v43; // [xsp+10h] [xbp-50h] BYREF
  int v44; // [xsp+14h] [xbp-4Ch] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_40FA537 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_8348/*"LEVEL_INFO"*/, v9);
    sub_B16FFC(&StringLiteral_5576/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, v10);
    byte_40FA537 = 1;
  }
  IconImageId_k__BackingField = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_21;
  UILabel__set_text(nameLabel, item->fields._Name_k__BackingField, 0LL);
  beforeNameLabel = this->fields.beforeNameLabel;
  if ( !beforeNameLabel )
    goto LABEL_21;
  UILabel__set_text(beforeNameLabel, item->fields._BeforeName_k__BackingField, 0LL);
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5576/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, 0LL);
  if ( !v14 )
    goto LABEL_21;
  v22 = v21;
  lv = v14->fields.lv;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  v24 = System_String__Format(v22, v23, 0LL);
  if ( !levelLabel )
    goto LABEL_21;
  UILabel__set_text(levelLabel, v24, 0LL);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8348/*"LEVEL_INFO"*/, 0LL);
  v44 = v14->fields.lv - 1;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v28 = System_String__Format(v26, v27, 0LL);
  if ( !beforeLevelLabel )
    goto LABEL_21;
  UILabel__set_text(beforeLevelLabel, v28, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8348/*"LEVEL_INFO"*/, 0LL);
  v43 = v14->fields.lv;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v33 = (Il2CppObject *)System_String__Format(v31, v32, 0LL);
  v34 = System_String__Format(Detail_k__BackingField, v33, 0LL);
  WrapControlText__textAdjust(detailLabel, v34, 16, 0, 0, 0LL);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8348/*"LEVEL_INFO"*/, 0LL);
  v42 = v14->fields.lv - 1;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v39 = (Il2CppObject *)System_String__Format(v37, v38, 0LL);
  v40 = System_String__Format(BeforeDetail_k__BackingField, v39, 0LL);
  WrapControlText__textAdjust(beforeDetailLabel, v40, 16, 0, 0, 0LL);
  line = (UnityEngine_Behaviour_o *)this->fields.line;
  if ( !line )
LABEL_21:
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(line, !item->fields._IsLast_k__BackingField, 0LL);
}