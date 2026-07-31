void CommandAssistLvUpListViewItemDraw___ctor(CommandAssistLvUpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommandAssistLvUpListViewItemDraw__UpdateUi(
        CommandAssistLvUpListViewItemDraw_o *this,
        CommandAssistLvUpListViewItem_o *item,
        const MethodInfo *method)
{
  int v5; // w8
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v7; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x21
  UISprite_o *icon; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *levelLabel; // x22
  System_String_o *v18; // x23
  Il2CppObject *v19; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v21; // x23
  Il2CppObject *v22; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v25; // x24
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v31; // x24
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  int v35; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v36; // [xsp+8h] [xbp-58h] BYREF
  int v37; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_5932932 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8598/*"LEVEL_INFO"*/);
    sub_21FFC50(&StringLiteral_5747/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/);
    byte_5932932 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  IconImageId_k__BackingField = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, method);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item || !Master_object )
    goto LABEL_18;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_object,
                    item->fields._EventId_k__BackingField,
                    item->fields._AssistId_k__BackingField,
                    -1,
                    0,
                    0);
  icon = this->fields.icon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v12 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
  AtlasManager__SetEventSprite(icon, v12, 0);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v14 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0);
  AtlasManager__SetEventSprite(beforeIcon, v14, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._Name_k__BackingField, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.beforeNameLabel;
  if ( !Master_object )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._BeforeName_k__BackingField, 0);
  levelLabel = this->fields.levelLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5747/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, 0);
  if ( !CurrentEntity )
    goto LABEL_18;
  v18 = (System_String_o *)Master_object;
  lv = CurrentEntity->fields.lv;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v18, v19, 0);
  if ( !levelLabel )
    goto LABEL_18;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8598/*"LEVEL_INFO"*/, 0);
  v37 = CurrentEntity->fields.lv - 1;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v37);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v21, v22, 0);
  if ( !beforeLevelLabel )
    goto LABEL_18;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_object, 0);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8598/*"LEVEL_INFO"*/, 0);
  v36 = CurrentEntity->fields.lv;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v36);
  v27 = (Il2CppObject *)System_String__Format(v25, v26, 0);
  v28 = System_String__Format(Detail_k__BackingField, v27, 0);
  WrapControlText__textAdjust(detailLabel, v28, 16, 0, 0);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8598/*"LEVEL_INFO"*/, 0);
  v35 = CurrentEntity->fields.lv - 1;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v35);
  v33 = (Il2CppObject *)System_String__Format(v31, v32, 0);
  v34 = System_String__Format(BeforeDetail_k__BackingField, v33, 0);
  WrapControlText__textAdjust(beforeDetailLabel, v34, 16, 0, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_18:
    sub_21FFECC(Master_object, v7);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, !item->fields._IsLast_k__BackingField, 0);
}