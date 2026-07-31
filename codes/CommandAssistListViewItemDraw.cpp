void CommandAssistListViewItemDraw___ctor(CommandAssistListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommandAssistListViewItemDraw__UpdateUi(
        CommandAssistListViewItemDraw_o *this,
        CommandAssistListViewItem_o *item,
        const MethodInfo *method)
{
  int v5; // w8
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v7; // x1
  EventCommandAssistMaster_o *v8; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x21
  EventCommandAssistEntity_o *MaxLevelEntity; // x22
  UISprite_o *icon; // x23
  __int64 v12; // x1
  __int64 v13; // x2
  System_String_o *v14; // x24
  __int64 v15; // x2
  System_String_o **v16; // x8
  UILabel_o *levelLabel; // x23
  System_String_o *v18; // x24
  System_String_o *v19; // x24
  Il2CppObject *v20; // x25
  Il2CppObject *v21; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v24; // x24
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  int32_t v28; // [xsp+8h] [xbp-58h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_5931D3D & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8598/*"LEVEL_INFO"*/);
    sub_21FFC50(&StringLiteral_5743/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/);
    sub_21FFC50(&StringLiteral_5742/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/);
    byte_5931D3D = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  IconImageId_k__BackingField = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, method);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item )
    goto LABEL_19;
  v8 = Master_object;
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
                     v8,
                     item->fields._EventId_k__BackingField,
                     item->fields._AssistId_k__BackingField,
                     0);
  icon = this->fields.icon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v14 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
  AtlasManager__SetEventSprite(icon, v14, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._Name_k__BackingField, 0);
  if ( !CurrentEntity || !MaxLevelEntity )
    goto LABEL_19;
  v16 = (System_String_o **)&StringLiteral_5743/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/;
  levelLabel = this->fields.levelLabel;
  if ( CurrentEntity->fields.lv != MaxLevelEntity->fields.lv )
    v16 = (System_String_o **)&StringLiteral_5742/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/;
  v18 = *v16;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v15);
  v19 = LocalizationManager__Get(v18, 0);
  lv = CurrentEntity->fields.lv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
  v29 = MaxLevelEntity->fields.lv;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v29);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format_75484576(v19, v20, v21, 0);
  if ( !levelLabel )
    goto LABEL_19;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8598/*"LEVEL_INFO"*/, 0);
  v28 = CurrentEntity->fields.lv;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v28);
  v26 = (Il2CppObject *)System_String__Format(v24, v25, 0);
  v27 = System_String__Format(Detail_k__BackingField, v26, 0);
  WrapControlText__textAdjust(detailLabel, v27, 16, 0, 0);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_19:
    sub_21FFECC(Master_object, v7);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, !item->fields._IsLast_k__BackingField, 0);
}