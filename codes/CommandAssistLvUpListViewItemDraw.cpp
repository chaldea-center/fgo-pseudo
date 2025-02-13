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
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v6; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *icon; // x22
  EventCommandAssistEntity_o *v9; // x21
  System_String_o *v10; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v12; // x0
  UILabel_o *levelLabel; // x22
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_String_o *v17; // x23
  Il2CppObject *v18; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v27; // x24
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v36; // x24
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  int v43; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v44; // [xsp+8h] [xbp-58h] BYREF
  int v45; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BE081B & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_8415/*"LEVEL_INFO"*/);
    sub_1C21E38(&StringLiteral_5699/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/);
    byte_4BE081B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !item || !Master_object )
    goto LABEL_18;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    Master_object,
                    item->fields._EventId_k__BackingField,
                    item->fields._AssistId_k__BackingField,
                    -1,
                    0,
                    0LL);
  icon = this->fields.icon;
  v9 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v10 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v10, 0LL);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v12 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  AtlasManager__SetEventSprite(beforeIcon, v12, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._Name_k__BackingField, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.beforeNameLabel;
  if ( !Master_object )
    goto LABEL_18;
  UILabel__set_text((UILabel_o *)Master_object, item->fields._BeforeName_k__BackingField, 0LL);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5699/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, 0LL);
  if ( !v9 )
    goto LABEL_18;
  v17 = (System_String_o *)Master_object;
  lv = v9->fields.lv;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v14, v15, v16);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v17, v18, 0LL);
  if ( !levelLabel )
    goto LABEL_18;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0LL);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8415/*"LEVEL_INFO"*/, 0LL);
  v45 = v9->fields.lv - 1;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v21, v22, v23);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v20, v24, 0LL);
  if ( !beforeLevelLabel )
    goto LABEL_18;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_object, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8415/*"LEVEL_INFO"*/, 0LL);
  v44 = v9->fields.lv;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v28, v29, v30);
  v32 = (Il2CppObject *)System_String__Format(v27, v31, 0LL);
  v33 = System_String__Format(Detail_k__BackingField, v32, 0LL);
  WrapControlText__textAdjust(detailLabel, v33, 16, 0, 0LL);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8415/*"LEVEL_INFO"*/, 0LL);
  v43 = v9->fields.lv - 1;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v37, v38, v39);
  v41 = (Il2CppObject *)System_String__Format(v36, v40, 0LL);
  v42 = System_String__Format(BeforeDetail_k__BackingField, v41, 0LL);
  WrapControlText__textAdjust(beforeDetailLabel, v42, 16, 0, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_18:
    sub_1C22094(Master_object, v6);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_object,
    !item->fields._IsLast_k__BackingField,
    0LL);
}