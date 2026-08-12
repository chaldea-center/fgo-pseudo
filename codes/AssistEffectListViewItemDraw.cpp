void AssistEffectListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_5969E47 & 1) == 0 )
  {
    sub_2213A60(&AssistEffectListViewItemDraw_TypeInfo);
    byte_5969E47 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  void **p_monitor; // x20
  AssistMaster_o *v9; // x22
  DataManager_o *v10; // x21
  AssistEntity_o *MaxLevelEntity; // x22
  System_Action_o *v12; // x24
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x2
  UILabel_o *nameLabel; // x23
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *levelLabel; // x23
  System_String_o *v20; // x24
  Il2CppObject *v21; // x25
  Il2CppObject *v22; // x0
  UILabel_o *detailLabel; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int v29; // [xsp+Ch] [xbp-54h] BYREF
  int32_t lv; // [xsp+18h] [xbp-48h] BYREF
  int v31; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_5969E46 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssistEffectListViewItemDraw_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_AssistEffectListViewItemDraw___c__DisplayClass6_0__UpdateUi_b__0__);
    sub_2213A60(&AssistEffectListViewItemDraw___c__DisplayClass6_0_TypeInfo);
    sub_2213A60(&StringLiteral_8611/*"LEVEL_INFO"*/);
    sub_2213A60(&StringLiteral_5721/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_LEVEL_FORMAT"*/);
    byte_5969E46 = 1;
  }
  v5 = (Il2CppObject *)sub_2213CCC(AssistEffectListViewItemDraw___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_24;
  v5[1].klass = (Il2CppClass *)this;
  sub_2213A04(&v5[1], this);
  v5[1].monitor = item;
  p_monitor = &v5[1].monitor;
  sub_2213A04(&v5[1].monitor, item);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !*p_monitor )
    goto LABEL_24;
  v9 = (AssistMaster_o *)Instance;
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)AssistMaster__GetCurrentLevelEntity(
                                (AssistMaster_o *)Instance,
                                *((_DWORD *)*p_monitor + 31),
                                0);
  if ( !*p_monitor )
    goto LABEL_24;
  v10 = Instance;
  MaxLevelEntity = AssistMaster__GetMaxLevelEntity(v9, *((_DWORD *)*p_monitor + 31), 0);
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, v5, Method_AssistEffectListViewItemDraw___c__DisplayClass6_0__UpdateUi_b__0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
  AtlasManager__LoadEventUI(v12, 1, 0);
  if ( !*p_monitor )
    goto LABEL_24;
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)Instance, *((System_String_o **)*p_monitor + 17), 0);
  Instance = (DataManager_o *)AssistEffectListViewItemDraw_TypeInfo;
  nameLabel = this->fields.nameLabel;
  if ( !*(&AssistEffectListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssistEffectListViewItemDraw_TypeInfo, v7, v15);
  if ( !nameLabel )
    goto LABEL_24;
  UILabel__SetCondensedScale(
    nameLabel,
    AssistEffectListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0);
  levelLabel = this->fields.levelLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5721/*"EVENT_ASSIST_SKILL_CONFIRM_DIALOG_LEVEL_FORMAT"*/, 0);
  if ( !v10 )
    goto LABEL_24;
  v20 = (System_String_o *)Instance;
  v31 = *(_DWORD *)&v10->fields._DispLog;
  Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &v31);
  if ( !MaxLevelEntity )
    goto LABEL_24;
  v21 = (Il2CppObject *)Instance;
  lv = MaxLevelEntity->fields.lv;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &lv);
  Instance = (DataManager_o *)System_String__Format_75697880(v20, v21, v22, 0);
  if ( !levelLabel )
    goto LABEL_24;
  UILabel__set_text(levelLabel, (System_String_o *)Instance, 0);
  if ( !*p_monitor )
    goto LABEL_24;
  detailLabel = this->fields.detailLabel;
  v24 = (System_String_o *)*((_QWORD *)*p_monitor + 18);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8611/*"LEVEL_INFO"*/, 0);
  v29 = *(_DWORD *)&v10->fields._DispLog;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v29);
  v27 = (Il2CppObject *)System_String__Format(v25, v26, 0);
  v28 = System_String__Format(v24, v27, 0);
  Instance = (DataManager_o *)WrapControlText__textAdjust(detailLabel, v28, 16, 0, 0);
  if ( !*p_monitor || (Instance = (DataManager_o *)this->fields.line) == 0 )
LABEL_24:
    sub_2213CDC(Instance, v7);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x20
  int32_t IconImageId_k__BackingField; // [xsp+8h] [xbp-38h] BYREF
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_5969E48 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    this = (AssistEffectListViewItemDraw___c__DisplayClass6_0_o *)sub_2213A60(&StringLiteral_20167/*"event_skill_icon_{0}{1:D2}"*/);
    byte_5969E48 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (icon = _4__this->fields.icon,
        EventId_k__BackingField = item->fields._EventId_k__BackingField,
        this = (AssistEffectListViewItemDraw___c__DisplayClass6_0_o *)j_il2cpp_value_box_0(
                                                                        qword_5984348,
                                                                        &EventId_k__BackingField),
        (v6 = v2->fields.item) == 0) )
  {
    sub_2213CDC(this, method);
  }
  v7 = (Il2CppObject *)this;
  IconImageId_k__BackingField = v6->fields._IconImageId_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &IconImageId_k__BackingField);
  v11 = System_String__Format_75697880((System_String_o *)StringLiteral_20167/*"event_skill_icon_{0}{1:D2}"*/, v7, v8, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  AtlasManager__SetEventUI(icon, v11, 0);
}