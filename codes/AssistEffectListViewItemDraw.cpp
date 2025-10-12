void AssistEffectListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C31767 & 1) == 0 )
  {
    sub_1C32C20(&AssistEffectListViewItemDraw_TypeInfo);
    byte_4C31767 = 1;
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
  void **p_monitor; // x20
  AssistMaster_o *v8; // x22
  __int64 v9; // x21
  AssistEntity_o *MaxLevelEntity; // x22
  System_Action_o *v11; // x24
  UILabel_o *nameLabel; // x23
  UILabel_o *levelLabel; // x23
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  System_String_o *v20; // x24
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x25
  Il2CppObject *v28; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v30; // x23
  System_String_o *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x0
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  int v41; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int v43; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C31766 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AssistEffectListViewItemDraw_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_AssistEffectListViewItemDraw___c__DisplayClass6_0__UpdateUi_b__0__);
    sub_1C32C20(&AssistEffectListViewItemDraw___c__DisplayClass6_0_TypeInfo);
    sub_1C32C20(&StringLiteral_8262/*"LEVEL_INFO"*/);
    sub_1C32C20(&StringLiteral_5520/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_LEVEL_FORMAT"*/);
    byte_4C31766 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(AssistEffectListViewItemDraw___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_24;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v5[1], this);
  v5[1].monitor = item;
  p_monitor = &v5[1].monitor;
  sub_1C32BC4(&v5[1].monitor, item);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !*p_monitor )
    goto LABEL_24;
  v8 = (AssistMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  Instance = (__int64)AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, *((_DWORD *)*p_monitor + 31), 0);
  if ( !*p_monitor )
    goto LABEL_24;
  v9 = Instance;
  MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v8, *((_DWORD *)*p_monitor + 31), 0);
  v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v11, v5, Method_AssistEffectListViewItemDraw___c__DisplayClass6_0__UpdateUi_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v11, 1, 0);
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
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5520/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_LEVEL_FORMAT"*/, 0);
  if ( !v9 )
    goto LABEL_24;
  v20 = (System_String_o *)Instance;
  v43 = *(_DWORD *)(v9 + 32);
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v43, v14, v15, v16, v17, v18, v19);
  if ( !MaxLevelEntity )
    goto LABEL_24;
  v27 = (Il2CppObject *)Instance;
  lv = MaxLevelEntity->fields.lv;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v21, v22, v23, v24, v25, v26);
  Instance = (__int64)System_String__Format_63559836(v20, v27, v28, 0);
  if ( !levelLabel )
    goto LABEL_24;
  UILabel__set_text(levelLabel, (System_String_o *)Instance, 0);
  if ( !*p_monitor )
    goto LABEL_24;
  detailLabel = this->fields.detailLabel;
  v30 = (System_String_o *)*((_QWORD *)*p_monitor + 18);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8262/*"LEVEL_INFO"*/, 0);
  v41 = *(_DWORD *)(v9 + 32);
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v32, v33, v34, v35, v36, v37);
  v39 = (Il2CppObject *)System_String__Format(v31, v38, 0);
  v40 = System_String__Format(v30, v39, 0);
  Instance = WrapControlText__textAdjust(detailLabel, v40, 16, 0, 0);
  if ( !*p_monitor || (Instance = (__int64)this->fields.line) == 0 )
LABEL_24:
    sub_1C32E7C(Instance);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  AssistEffectListViewItemDraw___c__DisplayClass6_0_o *v8; // x20
  struct AssistEffectListViewItemDraw_o *_4__this; // x8
  struct AssistEffectListViewItem_o *item; // x9
  UISprite_o *icon; // x19
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  struct AssistEffectListViewItem_o *v18; // x8
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  int32_t IconImageId_k__BackingField; // [xsp+8h] [xbp-28h] BYREF
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v8 = this;
  if ( (byte_4C31768 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    this = (AssistEffectListViewItemDraw___c__DisplayClass6_0_o *)sub_1C32C20(&StringLiteral_19272/*"event_skill_icon_{0}{1:D2}"*/);
    byte_4C31768 = 1;
  }
  _4__this = v8->fields.__4__this;
  if ( !_4__this
    || (item = v8->fields.item) == 0
    || (icon = _4__this->fields.icon,
        EventId_k__BackingField = item->fields._EventId_k__BackingField,
        this = (AssistEffectListViewItemDraw___c__DisplayClass6_0_o *)j_il2cpp_value_box_0(
                                                                        int_TypeInfo,
                                                                        &EventId_k__BackingField,
                                                                        v2,
                                                                        v3,
                                                                        v4,
                                                                        v5,
                                                                        v6,
                                                                        v7),
        (v18 = v8->fields.item) == 0) )
  {
    sub_1C32E7C(this);
  }
  v19 = (Il2CppObject *)this;
  IconImageId_k__BackingField = v18->fields._IconImageId_k__BackingField;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &IconImageId_k__BackingField, v12, v13, v14, v15, v16, v17);
  v21 = System_String__Format_63559836((System_String_o *)StringLiteral_19272/*"event_skill_icon_{0}{1:D2}"*/, v19, v20, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(icon, v21, 0);
}