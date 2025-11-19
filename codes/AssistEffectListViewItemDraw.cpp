void AssistEffectListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4CAFF7F & 1) == 0 )
  {
    sub_1C6BA08(&AssistEffectListViewItemDraw_TypeInfo);
    byte_4CAFF7F = 1;
  }
  AssistEffectListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH = 280;
}


void AssistEffectListViewItemDraw___ctor(AssistEffectListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AssistEffectListViewItemDraw__UpdateUi(
        AssistEffectListViewItemDraw_o *this,
        AssistEffectListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x23
  __int64 Instance; // x0
  __int64 v7; // x1
  void **p_monitor; // x20
  AssistMaster_o *v9; // x22
  __int64 v10; // x21
  AssistEntity_o *MaxLevelEntity; // x22
  System_Action_o *v12; // x24
  UILabel_o *nameLabel; // x23
  UILabel_o *levelLabel; // x23
  System_String_o *v15; // x24
  Il2CppObject *v16; // x25
  Il2CppObject *v17; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v19; // x23
  System_String_o *v20; // x24
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int v24; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int v26; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CAFF7E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssistEffectListViewItemDraw_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_AssistEffectListViewItemDraw___c__DisplayClass6_0__UpdateUi_b__0__);
    sub_1C6BA08(&AssistEffectListViewItemDraw___c__DisplayClass6_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_8260/*"LEVEL_INFO"*/);
    sub_1C6BA08(&StringLiteral_5511/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_LEVEL_FORMAT"*/);
    byte_4CAFF7E = 1;
  }
  v5 = (Il2CppObject *)sub_1C6BC54(AssistEffectListViewItemDraw___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_24;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C6B9AC(&v5[1], this);
  v5[1].monitor = item;
  p_monitor = &v5[1].monitor;
  sub_1C6B9AC(&v5[1].monitor, item);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !*p_monitor )
    goto LABEL_24;
  v9 = (AssistMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  Instance = (__int64)AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, *((_DWORD *)*p_monitor + 31), 0);
  if ( !*p_monitor )
    goto LABEL_24;
  v10 = Instance;
  MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v9, *((_DWORD *)*p_monitor + 31), 0);
  v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v12, v5, Method_AssistEffectListViewItemDraw___c__DisplayClass6_0__UpdateUi_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v12, 1, 0);
  if ( !*p_monitor )
    goto LABEL_24;
  Instance = (__int64)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)Instance, *((System_String_o **)*p_monitor + 17), 0);
  Instance = (__int64)AssistEffectListViewItemDraw_TypeInfo;
  nameLabel = this->fields.nameLabel;
  if ( !AssistEffectListViewItemDraw_TypeInfo->_2.cctor_finished )
    Instance = j_il2cpp_runtime_class_init_0(AssistEffectListViewItemDraw_TypeInfo);
  if ( !nameLabel )
    goto LABEL_24;
  UILabel__SetCondensedScale(
    nameLabel,
    AssistEffectListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5511/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_LEVEL_FORMAT"*/, 0);
  if ( !v10 )
    goto LABEL_24;
  v15 = (System_String_o *)Instance;
  v26 = *(_DWORD *)(v10 + 32);
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v26);
  if ( !MaxLevelEntity )
    goto LABEL_24;
  v16 = (Il2CppObject *)Instance;
  lv = MaxLevelEntity->fields.lv;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  Instance = (__int64)System_String__Format_64008100(v15, v16, v17, 0);
  if ( !levelLabel )
    goto LABEL_24;
  UILabel__set_text(levelLabel, (System_String_o *)Instance, 0);
  if ( !*p_monitor )
    goto LABEL_24;
  detailLabel = this->fields.detailLabel;
  v19 = (System_String_o *)*((_QWORD *)*p_monitor + 18);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8260/*"LEVEL_INFO"*/, 0);
  v24 = *(_DWORD *)(v10 + 32);
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v22 = (Il2CppObject *)System_String__Format(v20, v21, 0);
  v23 = System_String__Format(v19, v22, 0);
  Instance = WrapControlText__textAdjust(detailLabel, v23, 16, 0, 0);
  if ( !*p_monitor || (Instance = (__int64)this->fields.line) == 0 )
LABEL_24:
    sub_1C6BC60(Instance, v7);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, *((_BYTE *)*p_monitor + 152) == 0, 0);
}


void AssistEffectListViewItemDraw___c__DisplayClass6_0___ctor(
        AssistEffectListViewItemDraw___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssistEffectListViewItemDraw___c__DisplayClass6_0___UpdateUi_b__0(
        AssistEffectListViewItemDraw___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  AssistEffectListViewItemDraw___c__DisplayClass6_0_o *v2; // x20
  struct AssistEffectListViewItemDraw_o *_4__this; // x8
  struct AssistEffectListViewItem_o *item; // x9
  UISprite_o *icon; // x19
  struct AssistEffectListViewItem_o *v6; // x8
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  int32_t IconImageId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4CAFF80 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    this = (AssistEffectListViewItemDraw___c__DisplayClass6_0_o *)sub_1C6BA08(&StringLiteral_19324/*"event_skill_icon_{0}{1:D2}"*/);
    byte_4CAFF80 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (icon = _4__this->fields.icon,
        EventId_k__BackingField = item->fields._EventId_k__BackingField,
        this = (AssistEffectListViewItemDraw___c__DisplayClass6_0_o *)j_il2cpp_value_box_0(
                                                                        int_TypeInfo,
                                                                        &EventId_k__BackingField),
        (v6 = v2->fields.item) == 0) )
  {
    sub_1C6BC60(this, method);
  }
  v7 = (Il2CppObject *)this;
  IconImageId_k__BackingField = v6->fields._IconImageId_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &IconImageId_k__BackingField);
  v9 = System_String__Format_64008100((System_String_o *)StringLiteral_19324/*"event_skill_icon_{0}{1:D2}"*/, v7, v8, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(icon, v9, 0);
}