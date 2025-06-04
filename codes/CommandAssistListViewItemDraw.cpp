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
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v13; // x1
  EventCommandAssistMaster_o *v14; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x21
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  UISprite_o *icon; // x23
  EventCommandAssistEntity_o *v18; // x22
  System_String_o *v19; // x24
  System_String_o **v20; // x8
  UILabel_o *levelLabel; // x23
  System_String_o *v22; // x24
  System_String_o *v23; // x24
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x25
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v34; // x24
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  int32_t v41; // [xsp+8h] [xbp-58h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4AFC1DC & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&int_TypeInfo, v7);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_8183/*"LEVEL_INFO"*/, v9);
    sub_1BC3008(&StringLiteral_5506/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/, v10);
    sub_1BC3008(&StringLiteral_5505/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/, v11);
    byte_4AFC1DC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item )
    goto LABEL_19;
  v14 = Master_object;
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
                     v14,
                     item->fields._EventId_k__BackingField,
                     item->fields._AssistId_k__BackingField,
                     0LL);
  icon = this->fields.icon;
  v18 = MaxLevelEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v19 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v19, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._Name_k__BackingField, 0LL);
  if ( !CurrentEntity || !v18 )
    goto LABEL_19;
  v20 = (System_String_o **)&StringLiteral_5506/*"EVENT_COMMAND_ASSIST_DIALOG_MAX_LEVEL_FORMAT"*/;
  levelLabel = this->fields.levelLabel;
  if ( CurrentEntity->fields.lv != v18->fields.lv )
    v20 = (System_String_o **)&StringLiteral_5505/*"EVENT_COMMAND_ASSIST_DIALOG_LEVEL_FORMAT"*/;
  v22 = *v20;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get(v22, 0LL);
  lv = CurrentEntity->fields.lv;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v24, v25, v26);
  v42 = v18->fields.lv;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v28, v29, v30);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format_62389940(v23, v27, v31, 0LL);
  if ( !levelLabel )
    goto LABEL_19;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_8183/*"LEVEL_INFO"*/, 0LL);
  v41 = CurrentEntity->fields.lv;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v35, v36, v37);
  v39 = (Il2CppObject *)System_String__Format(v34, v38, 0LL);
  v40 = System_String__Format(Detail_k__BackingField, v39, 0LL);
  WrapControlText__textAdjust(detailLabel, v40, 16, 0, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_19:
    sub_1BC3264(Master_object, v13);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_object,
    !item->fields._IsLast_k__BackingField,
    0LL);
}