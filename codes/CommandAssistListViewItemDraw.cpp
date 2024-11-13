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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v20; // x1
  EventCommandAssistMaster_o *v21; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x21
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  UISprite_o *icon; // x23
  EventCommandAssistEntity_o *v25; // x22
  __int64 v26; // x1
  System_String_o *v27; // x24
  System_String_o **v28; // x8
  UILabel_o *levelLabel; // x23
  System_String_o *v30; // x24
  System_String_o *v31; // x24
  Il2CppObject *v32; // x25
  Il2CppObject *v33; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v36; // x24
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  int32_t v40; // [xsp+8h] [xbp-58h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B10DE5 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5656/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_5655/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/, v17, v18);
    byte_4B10DE5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item )
    goto LABEL_19;
  v21 = Master_object;
  if ( !Master_object )
    goto LABEL_19;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_object,
                    item->fields._EventId_k__BackingField,
                    item->fields._AssistId_k__BackingField,
                    -1,
                    0,
                    0LL);
  MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(
                     v21,
                     item->fields._EventId_k__BackingField,
                     item->fields._AssistId_k__BackingField,
                     0LL);
  icon = this->fields.icon;
  v25 = MaxLevelEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v27 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26);
  AtlasManager__SetEventSprite(icon, v27, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._Name_k__BackingField, 0LL);
  if ( !CurrentEntity || !v25 )
    goto LABEL_19;
  v28 = (System_String_o **)&StringLiteral_5656/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/;
  levelLabel = this->fields.levelLabel;
  if ( CurrentEntity->fields.lv != v25->fields.lv )
    v28 = (System_String_o **)&StringLiteral_5655/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/;
  v30 = *v28;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  v31 = LocalizationManager__Get(v30, 0LL);
  lv = CurrentEntity->fields.lv;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  v41 = v25->fields.lv;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format_62415592(v31, v32, v33, 0LL);
  if ( !levelLabel )
    goto LABEL_19;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
  v40 = CurrentEntity->fields.lv;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v38 = (Il2CppObject *)System_String__Format(v36, v37, 0LL);
  v39 = System_String__Format(Detail_k__BackingField, v38, 0LL);
  WrapControlText__textAdjust(detailLabel, v39, 16, 0, 0, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_19:
    sub_1BCAA3C(Master_object, v20);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_object,
    !item->fields._IsLast_k__BackingField,
    0LL);
}