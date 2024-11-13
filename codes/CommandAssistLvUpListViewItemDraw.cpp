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
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v18; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *icon; // x22
  EventCommandAssistEntity_o *v21; // x21
  __int64 v22; // x1
  System_String_o *v23; // x23
  UISprite_o *beforeIcon; // x22
  System_String_o *v25; // x0
  __int64 v26; // x1
  UILabel_o *levelLabel; // x22
  System_String_o *v28; // x23
  Il2CppObject *v29; // x0
  UILabel_o *beforeLevelLabel; // x22
  System_String_o *v31; // x23
  Il2CppObject *v32; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *Detail_k__BackingField; // x23
  System_String_o *v35; // x24
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  UILabel_o *beforeDetailLabel; // x22
  System_String_o *BeforeDetail_k__BackingField; // x23
  System_String_o *v41; // x24
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  int v45; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v46; // [xsp+8h] [xbp-58h] BYREF
  int v47; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B1A3C1 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, item, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_5660/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, v15, v16);
    byte_4B1A3C1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  v21 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v23 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
  AtlasManager__SetEventSprite(icon, v23, 0LL);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v25 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  AtlasManager__SetEventSprite(beforeIcon, v25, 0LL);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, 0LL);
  if ( !v21 )
    goto LABEL_18;
  v28 = (System_String_o *)Master_object;
  lv = v21->fields.lv;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v28, v29, 0LL);
  if ( !levelLabel )
    goto LABEL_18;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0LL);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
  v47 = v21->fields.lv - 1;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v31, v32, 0LL);
  if ( !beforeLevelLabel )
    goto LABEL_18;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_object, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
  v46 = v21->fields.lv;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
  v37 = (Il2CppObject *)System_String__Format(v35, v36, 0LL);
  v38 = System_String__Format(Detail_k__BackingField, v37, 0LL);
  WrapControlText__textAdjust(detailLabel, v38, 16, 0, 0, 0LL);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
  v45 = v21->fields.lv - 1;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v43 = (Il2CppObject *)System_String__Format(v41, v42, 0LL);
  v44 = System_String__Format(BeforeDetail_k__BackingField, v43, 0LL);
  WrapControlText__textAdjust(beforeDetailLabel, v44, 16, 0, 0, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_18:
    sub_1BCAA3C(Master_object, v18);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_object,
    !item->fields._IsLast_k__BackingField,
    0LL);
}