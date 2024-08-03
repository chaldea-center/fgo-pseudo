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
  EventCommandAssistMaster_o *Master_object; // x0
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
  int v36; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v37; // [xsp+8h] [xbp-58h] BYREF
  int v38; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int32_t IconImageId_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A003E3 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, item);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_8198/*"LEVEL_INFO"*/, v9);
    sub_1B640C8(&StringLiteral_5557/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, v10);
    byte_4A003E3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
  v14 = CurrentEntity;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v15 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(icon, v15, 0LL);
  beforeIcon = this->fields.beforeIcon;
  IconImageId_k__BackingField = item->fields._IconImageId_k__BackingField;
  v17 = System_Int32__ToString((int32_t)&IconImageId_k__BackingField, 0LL);
  AtlasManager__SetEventSprite(beforeIcon, v17, 0LL);
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
  Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5557/*"EVENT_COMMAND_ASSIST_LEVEL_UP_FORMAT"*/, 0LL);
  if ( !v14 )
    goto LABEL_18;
  v19 = (System_String_o *)Master_object;
  lv = v14->fields.lv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v19, v20, 0LL);
  if ( !levelLabel )
    goto LABEL_18;
  UILabel__set_text(levelLabel, (System_String_o *)Master_object, 0LL);
  beforeLevelLabel = this->fields.beforeLevelLabel;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8198/*"LEVEL_INFO"*/, 0LL);
  v38 = v14->fields.lv - 1;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  Master_object = (EventCommandAssistMaster_o *)System_String__Format(v22, v23, 0LL);
  if ( !beforeLevelLabel )
    goto LABEL_18;
  UILabel__set_text(beforeLevelLabel, (System_String_o *)Master_object, 0LL);
  detailLabel = this->fields.detailLabel;
  Detail_k__BackingField = item->fields._Detail_k__BackingField;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8198/*"LEVEL_INFO"*/, 0LL);
  v37 = v14->fields.lv;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v28 = (Il2CppObject *)System_String__Format(v26, v27, 0LL);
  v29 = System_String__Format(Detail_k__BackingField, v28, 0LL);
  WrapControlText__textAdjust(detailLabel, v29, 16, 0, 0, 0LL);
  beforeDetailLabel = this->fields.beforeDetailLabel;
  BeforeDetail_k__BackingField = item->fields._BeforeDetail_k__BackingField;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8198/*"LEVEL_INFO"*/, 0LL);
  v36 = v14->fields.lv - 1;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v34 = (Il2CppObject *)System_String__Format(v32, v33, 0LL);
  v35 = System_String__Format(BeforeDetail_k__BackingField, v34, 0LL);
  WrapControlText__textAdjust(beforeDetailLabel, v35, 16, 0, 0, 0LL);
  Master_object = (EventCommandAssistMaster_o *)this->fields.line;
  if ( !Master_object )
LABEL_18:
    sub_1B64324(Master_object);
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)Master_object,
    !item->fields._IsLast_k__BackingField,
    0LL);
}