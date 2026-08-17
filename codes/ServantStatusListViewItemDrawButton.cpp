void ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x8
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x19
  int32_t v12; // w1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  struct ServantStatusListViewItemDrawButton_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_596D331 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_12506/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_2213A60(&StringLiteral_12504/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_2213A60(&StringLiteral_12500/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_596D331 = 1;
  }
  v1 = string___TypeInfo;
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DEFAULT_BATTLE_VOICE_TITLE_POSITION_Y = xmmword_E9C9E0;
  *(_QWORD *)&static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 0xC238000000000046LL;
  static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v3 = sub_2213B20(v1, 3);
  if ( !v3 )
    sub_2213CDC(0, v4);
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24)
    || (v12 = StringLiteral_12504/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        *(_QWORD *)(v3 + 32) = StringLiteral_12504/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10),
        (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0)
    || (v19 = StringLiteral_12500/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        *(_QWORD *)(v11 + 40) = StringLiteral_12500/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v11 + 24) <= 2u) )
  {
    sub_2213CE4(v3);
  }
  v26 = StringLiteral_12506/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_12506/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  v27 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  v27->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->TD_SPEED_LOCALIZATION_KEYS, v11, v28, v29, v30, v31, v32, v33);
}


void ServantStatusListViewItemDrawButton___ctor(ServantStatusListViewItemDrawButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawButton__Awake(ServantStatusListViewItemDrawButton_o *this, const MethodInfo *method)
{
  ;
}


System_String_o *ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(int32_t index, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusListViewItemDrawButton_c *v4; // x0
  struct System_String_array *TD_SPEED_LOCALIZATION_KEYS; // x8
  System_String_o *v6; // x19

  if ( (byte_596D32F & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ServantStatusListViewItemDrawButton_TypeInfo);
    byte_596D32F = 1;
  }
  v4 = ServantStatusListViewItemDrawButton_TypeInfo;
  if ( !*(&ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, method, v2);
    v4 = ServantStatusListViewItemDrawButton_TypeInfo;
  }
  TD_SPEED_LOCALIZATION_KEYS = v4->static_fields->TD_SPEED_LOCALIZATION_KEYS;
  if ( !TD_SPEED_LOCALIZATION_KEYS )
    goto LABEL_14;
  if ( SLODWORD(TD_SPEED_LOCALIZATION_KEYS->max_length) <= index )
    return **(System_String_o ***)(qword_5984390 + 184);
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_14:
      sub_2213CDC(v4, method);
  }
  if ( LODWORD(TD_SPEED_LOCALIZATION_KEYS->max_length) <= index )
    sub_2213CE4(v4);
  v6 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  return LocalizationManager__Get(v6, 0);
}


int32_t ServantStatusListViewItemDrawButton__Selected(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1

  v4 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_GetKind.methodPtr)(
         this,
         this->klass->vtable._4_GetKind.method,
         method);
  switch ( (_DWORD)v4 )
  {
    case 0x15:
      if ( !item )
        goto LABEL_11;
      return ServantStatusListViewItem__get_VoiceEffectSelect(item, 0);
    case 0x11:
      if ( !item )
        goto LABEL_11;
      return item->fields.changeVoiceFlag;
    case 0x10:
      if ( item )
        return ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0);
LABEL_11:
      sub_2213CDC(v4, v5);
    default:
      return 0;
  }
}


void ServantStatusListViewItemDrawButton__SetItem(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UICommonButton_o *baseSprite; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  struct UIRangeLabel_array *v10; // x8
  int32_t v11; // w20
  int32_t max_length; // w9
  UIRangeLabel_o *v13; // x21
  struct UICommonButton_array *v14; // x8
  struct UICommonButton_array *v15; // x8
  UnityEngine_GameObject_o *v16; // x0
  struct UICommonButton_array *v17; // x8
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x2
  struct UIRangeLabel_array *v20; // x8
  UIRangeLabel_o *v21; // x21
  struct UIRangeLabel_array *v22; // x8
  UIRangeLabel_o *v23; // x21
  struct ServantEntity_o *svtEntity; // x8
  Il2CppObject *v25; // x0
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  __int64 v28; // x2
  UILabel_o *v29; // x20
  struct UILabel_o *v30; // x8
  unsigned int mHeight; // w20
  float v32; // s9
  UnityEngine_BoxCollider_o *v33; // x20
  unsigned int v34; // s0
  struct UISprite_o *v35; // x8
  int v36; // s10
  float v37; // s8
  __int64 *v38; // x8
  struct UICommonButton_array *tdSpeedButtonList; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_array *v41; // x8
  UnityEngine_GameObject_o *v42; // x0
  struct UICommonButton_array *v43; // x8
  __int64 v44; // x2
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v46; // x20
  struct UIRangeLabel_array *v47; // x8
  UIRangeLabel_o *v48; // x20
  float v49; // s8
  UnityEngine_GameObject_o *titleBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *buttonBase; // x20
  float v53; // s0
  UnityEngine_BoxCollider_o *collider; // x20
  unsigned int size; // s0
  float v56; // s8
  UILabel_o *explanationLabel; // x20
  UnityEngine_GameObject_o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  UISprite_o *titleSprite; // x20
  UILabel_o *v62; // x20
  __int64 v63; // x2
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // w1
  float v65; // s8
  UnityEngine_GameObject_o *v66; // x20
  float v67; // s0
  UnityEngine_GameObject_o *v68; // x20
  float v69; // s0
  UnityEngine_BoxCollider_o *v70; // x20
  unsigned int v71; // s0
  float v72; // s8
  int32_t v73; // s9
  UnityEngine_GameObject_o *v74; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *resultText; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596D330 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_2213A60(&StringLiteral_12422/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE_{0}"*/);
    sub_2213A60(&StringLiteral_12419/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/);
    sub_2213A60(&StringLiteral_21729/*"img_txt_voice_effect"*/);
    sub_2213A60(&StringLiteral_21693/*"img_txt_npspeed"*/);
    sub_2213A60(&StringLiteral_12421/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12513/*"SERVANT_STATUS_VOICE_EFFECT_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_21619/*"img_txt_battlevoice"*/);
    sub_2213A60(&StringLiteral_12505/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12420/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/);
    sub_2213A60(&StringLiteral_12515/*"SERVANT_STATUS_VOICE_EFFECT_ON"*/);
    sub_2213A60(&StringLiteral_12514/*"SERVANT_STATUS_VOICE_EFFECT_OFF"*/);
    byte_596D330 = 1;
  }
  resultText = 0;
  ServantStatusListViewItemDrawButtonsBase__SetItem(
    (ServantStatusListViewItemDrawButtonsBase_o *)this,
    item,
    mode,
    method);
  if ( item && mode )
  {
    baseSprite = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, const MethodInfo *))this->klass->vtable._4_GetKind.methodPtr)(
                                       this,
                                       this->klass->vtable._4_GetKind.method);
    switch ( (_DWORD)baseSprite )
    {
      case 0x15:
        tdSpeedButtonList = this->fields.tdSpeedButtonList;
        if ( !tdSpeedButtonList )
          goto LABEL_16;
        if ( LODWORD(tdSpeedButtonList->max_length) )
        {
          baseSprite = tdSpeedButtonList->m_Items[0];
          if ( !baseSprite )
            goto LABEL_16;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSprite, 0);
          GameObjectExtensions__SetLocalPositionX(gameObject, 95.0, 0);
          v41 = this->fields.tdSpeedButtonList;
          if ( !v41 )
            goto LABEL_16;
          if ( (v41->max_length & 0xFFFFFFFE) != 0 )
          {
            baseSprite = v41->m_Items[1];
            if ( !baseSprite )
              goto LABEL_16;
            v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSprite, 0);
            GameObjectExtensions__SetLocalPositionX(v42, -95.0, 0);
            v43 = this->fields.tdSpeedButtonList;
            if ( !v43 )
              goto LABEL_16;
            if ( LODWORD(v43->max_length) > 2 )
            {
              baseSprite = v43->m_Items[2];
              if ( !baseSprite )
                goto LABEL_16;
              baseSprite = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)baseSprite,
                                                 0);
              if ( !baseSprite )
                goto LABEL_16;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 0, 0);
              tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
              if ( !tdSpeedRangeLabelList )
                goto LABEL_16;
              if ( LODWORD(tdSpeedRangeLabelList->max_length) )
              {
                v46 = tdSpeedRangeLabelList->m_Items[0];
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v44);
                baseSprite = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12515/*"SERVANT_STATUS_VOICE_EFFECT_ON"*/, 0);
                if ( !v46 )
                  goto LABEL_16;
                UIRangeLabel__Set(v46, (System_String_o *)baseSprite, 0, 1, 0, 0, 0);
                v47 = this->fields.tdSpeedRangeLabelList;
                if ( !v47 )
                  goto LABEL_16;
                if ( (v47->max_length & 0xFFFFFFFE) != 0 )
                {
                  v48 = v47->m_Items[1];
                  baseSprite = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12514/*"SERVANT_STATUS_VOICE_EFFECT_OFF"*/, 0);
                  if ( !v48 )
                    goto LABEL_16;
                  UIRangeLabel__Set(v48, (System_String_o *)baseSprite, 0, 1, 0, 0, 0);
                  baseSprite = (UICommonButton_o *)this->fields.baseSprite;
                  if ( !baseSprite )
                    goto LABEL_16;
                  v49 = vcvts_n_f32_s32(154 - LODWORD(baseSprite[1].fields.specifyDisabledColor.fields.a), 1u);
                  UIWidget__set_height((UIWidget_o *)baseSprite, 154, 0);
                  titleBase = this->fields.titleBase;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleBase, 0);
                  GameObjectExtensions__SetLocalPositionY(titleBase, LocalPositionY + v49, 0);
                  buttonBase = this->fields.buttonBase;
                  v53 = GameObjectExtensions__GetLocalPositionY(buttonBase, 0);
                  GameObjectExtensions__SetLocalPositionY(buttonBase, v49 + v53, 0);
                  collider = this->fields.collider;
                  if ( !collider )
                    goto LABEL_16;
                  size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
                  baseSprite = (UICommonButton_o *)this->fields.collider;
                  if ( !baseSprite )
                    goto LABEL_16;
                  v56 = *(float *)&size;
                  v78 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)baseSprite, 0);
                  v78.fields.x = v56;
                  v78.fields.y = 154.0;
                  UnityEngine_BoxCollider__set_size(collider, v78, 0);
                  baseSprite = (UICommonButton_o *)this->fields.explanationLabel;
                  if ( !baseSprite )
                    goto LABEL_16;
                  UILabel__set_fontSize((UILabel_o *)baseSprite, 14, 0);
                  baseSprite = (UICommonButton_o *)this->fields.explanationLabel;
                  if ( !baseSprite )
                    goto LABEL_16;
                  UILabel__set_overflowMethod((UILabel_o *)baseSprite, 2, 0);
                  explanationLabel = this->fields.explanationLabel;
                  baseSprite = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12513/*"SERVANT_STATUS_VOICE_EFFECT_EXPLANATION"*/, 0);
                  if ( !explanationLabel )
                    goto LABEL_16;
                  UILabel__set_text(explanationLabel, (System_String_o *)baseSprite, 0);
                  baseSprite = (UICommonButton_o *)this->fields.explanationLabel;
                  if ( !baseSprite )
                    goto LABEL_16;
                  UILabel__SetCondensedScale((UILabel_o *)baseSprite, 532, 0, 0);
                  baseSprite = (UICommonButton_o *)this->fields.explanationLabel;
                  if ( !baseSprite )
                    goto LABEL_16;
                  v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSprite, 0);
                  GameObjectExtensions__SetLocalPositionY(v58, -45.0, 0);
                  titleSprite = this->fields.titleSprite;
                  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v59, v60);
                  AtlasManager__SetDownloadCommonSprite(titleSprite, (System_String_o *)StringLiteral_21729/*"img_txt_voice_effect"*/, 0);
                  goto LABEL_90;
                }
              }
            }
          }
        }
        break;
      case 0x11:
        v14 = this->fields.tdSpeedButtonList;
        if ( !v14 )
          goto LABEL_16;
        if ( LODWORD(v14->max_length) > 2 )
        {
          baseSprite = v14->m_Items[2];
          if ( !baseSprite )
            goto LABEL_16;
          baseSprite = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)baseSprite,
                                             0);
          if ( !baseSprite )
            goto LABEL_16;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSprite, 0, 0);
          v15 = this->fields.tdSpeedButtonList;
          if ( !v15 )
            goto LABEL_16;
          if ( LODWORD(v15->max_length) )
          {
            baseSprite = v15->m_Items[0];
            if ( !baseSprite )
              goto LABEL_16;
            v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSprite, 0);
            GameObjectExtensions__SetLocalPositionX(v16, 95.0, 0);
            v17 = this->fields.tdSpeedButtonList;
            if ( !v17 )
              goto LABEL_16;
            if ( (v17->max_length & 0xFFFFFFFE) != 0 )
            {
              baseSprite = v17->m_Items[1];
              if ( !baseSprite )
                goto LABEL_16;
              v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSprite, 0);
              GameObjectExtensions__SetLocalPositionX(v18, -95.0, 0);
              v20 = this->fields.tdSpeedRangeLabelList;
              if ( !v20 )
                goto LABEL_16;
              if ( LODWORD(v20->max_length) )
              {
                v21 = v20->m_Items[0];
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v19);
                baseSprite = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12419/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0);
                if ( !v21 )
                  goto LABEL_16;
                UIRangeLabel__Set(v21, (System_String_o *)baseSprite, 0, 1, 0, 0, 0);
                v22 = this->fields.tdSpeedRangeLabelList;
                if ( !v22 )
                  goto LABEL_16;
                if ( (v22->max_length & 0xFFFFFFFE) != 0 )
                {
                  v23 = v22->m_Items[1];
                  baseSprite = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12420/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0);
                  if ( !v23 )
                    goto LABEL_16;
                  UIRangeLabel__Set(v23, (System_String_o *)baseSprite, 0, 1, 0, 0, 0);
                  svtEntity = item->fields.svtEntity;
                  if ( !svtEntity )
                    goto LABEL_16;
                  id = svtEntity->fields.id;
                  v25 = (Il2CppObject *)j_il2cpp_value_box_0(
                                          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                          &id);
                  v26 = System_String__Format((System_String_o *)StringLiteral_12422/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE_{0}"*/, v25, 0);
                  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12421/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0);
                  LocalizationManager__TryGet(&resultText, v26, v27, 0);
                  baseSprite = (UICommonButton_o *)this->fields.explanationLabel;
                  if ( !baseSprite )
                    goto LABEL_16;
                  UILabel__set_overflowMethod((UILabel_o *)baseSprite, 3, 0);
                  v29 = this->fields.explanationLabel;
                  baseSprite = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
                  if ( !*(&ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v8, v28);
                  if ( !v29 )
                    goto LABEL_16;
                  UILabel__set_fontSize(
                    v29,
                    ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_EXPLANATION_FONT_SIZE,
                    0);
                  baseSprite = (UICommonButton_o *)this->fields.explanationLabel;
                  if ( !baseSprite )
                    goto LABEL_16;
                  UILabel__set_text((UILabel_o *)baseSprite, resultText, 0);
                  v30 = this->fields.explanationLabel;
                  if ( !v30 )
                    goto LABEL_16;
                  mHeight = v30->fields.mHeight;
                  v32 = vcvts_n_f32_s32(mHeight, 1u);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.titleBase,
                    v32
                  + (float)ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_TITLE_POSITION_Y,
                    0);
                  baseSprite = (UICommonButton_o *)this->fields.baseSprite;
                  if ( !baseSprite )
                    goto LABEL_16;
                  UIWidget__set_height(
                    (UIWidget_o *)baseSprite,
                    ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_BASE_SPRITE_SIZE_Y
                  + mHeight,
                    0);
                  v33 = this->fields.collider;
                  if ( !v33 )
                    goto LABEL_16;
                  v34 = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
                  v35 = this->fields.baseSprite;
                  if ( !v35 )
                    goto LABEL_16;
                  baseSprite = (UICommonButton_o *)this->fields.collider;
                  if ( !baseSprite )
                    goto LABEL_16;
                  v36 = v35->fields.mHeight;
                  v37 = *(float *)&v34;
                  v77 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)baseSprite, 0);
                  v77.fields.y = (float)v36;
                  v77.fields.x = v37;
                  UnityEngine_BoxCollider__set_size(v33, v77, 0);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.buttonBase,
                    v32
                  + (float)ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_BUTTON_POSITION_Y,
                    0);
                  baseSprite = (UICommonButton_o *)this->fields.titleSprite;
                  if ( !baseSprite )
                    goto LABEL_16;
                  v38 = &StringLiteral_21619/*"img_txt_battlevoice"*/;
                  goto LABEL_89;
                }
              }
            }
          }
        }
        break;
      case 0x10:
        v10 = this->fields.tdSpeedRangeLabelList;
        if ( !v10 )
          goto LABEL_16;
        v11 = 0;
        while ( 1 )
        {
          max_length = v10->max_length;
          if ( v11 >= max_length )
            break;
          if ( v11 >= (unsigned int)max_length )
            goto LABEL_93;
          v13 = v10->m_Items[v11];
          if ( !*(&ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v8, v9);
          baseSprite = (UICommonButton_o *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v11, v8);
          if ( v13 )
          {
            UIRangeLabel__Set(v13, (System_String_o *)baseSprite, 0, 1, 0, 0, 0);
            v10 = this->fields.tdSpeedRangeLabelList;
            ++v11;
            if ( v10 )
              continue;
          }
          goto LABEL_16;
        }
        v62 = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
        baseSprite = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12505/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
        if ( !v62 )
          goto LABEL_16;
        UILabel__set_text(v62, (System_String_o *)baseSprite, 0);
        if ( !*(&ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v8, v63);
        baseSprite = (UICommonButton_o *)this->fields.baseSprite;
        if ( !baseSprite )
          goto LABEL_16;
        TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
        v65 = vcvts_n_f32_s32(
                TD_SPEED_BASE_SPRITE_HEIGHT - LODWORD(baseSprite[1].fields.specifyDisabledColor.fields.a),
                1u);
        UIWidget__set_height((UIWidget_o *)baseSprite, TD_SPEED_BASE_SPRITE_HEIGHT, 0);
        v66 = this->fields.titleBase;
        v67 = GameObjectExtensions__GetLocalPositionY(v66, 0);
        GameObjectExtensions__SetLocalPositionY(v66, v67 + v65, 0);
        v68 = this->fields.buttonBase;
        v69 = GameObjectExtensions__GetLocalPositionY(v68, 0);
        GameObjectExtensions__SetLocalPositionY(v68, v65 + v69, 0);
        v70 = this->fields.collider;
        if ( !v70 )
          goto LABEL_16;
        v71 = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
        baseSprite = (UICommonButton_o *)this->fields.collider;
        if ( !baseSprite )
          goto LABEL_16;
        v72 = *(float *)&v71;
        v73 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
        v79 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)baseSprite, 0);
        v79.fields.y = (float)v73;
        v79.fields.x = v72;
        UnityEngine_BoxCollider__set_size(v70, v79, 0);
        baseSprite = (UICommonButton_o *)this->fields.explanationLabel;
        if ( !baseSprite )
          goto LABEL_16;
        UIWidget__set_height(
          (UIWidget_o *)baseSprite,
          ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT,
          0);
        baseSprite = (UICommonButton_o *)this->fields.explanationLabel;
        if ( !baseSprite )
          goto LABEL_16;
        v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSprite, 0);
        GameObjectExtensions__SetLocalPositionY(
          v74,
          ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
          0);
        baseSprite = (UICommonButton_o *)this->fields.titleSprite;
        if ( !baseSprite )
          goto LABEL_16;
        v38 = &StringLiteral_21693/*"img_txt_npspeed"*/;
LABEL_89:
        UISprite__set_spriteName((UISprite_o *)baseSprite, (System_String_o *)*v38, 0);
LABEL_90:
        baseSprite = (UICommonButton_o *)this->fields.titleSprite;
        if ( baseSprite )
        {
          (*(void (__fastcall **)(UICommonButton_o *, _QWORD))&baseSprite->klass[1]._2.element_size)(
            baseSprite,
            *(_QWORD *)&baseSprite->klass[1]._2.static_fields_size);
          return;
        }
LABEL_16:
        sub_2213CDC(baseSprite, v8);
      default:
        goto LABEL_90;
    }
LABEL_93:
    sub_2213CE4(baseSprite);
  }
}