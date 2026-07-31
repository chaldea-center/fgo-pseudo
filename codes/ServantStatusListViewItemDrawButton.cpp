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

  if ( (byte_5935145 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_12483/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_21FFC50(&StringLiteral_12481/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_21FFC50(&StringLiteral_12477/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_5935145 = 1;
  }
  v1 = string___TypeInfo;
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DEFAULT_BATTLE_VOICE_TITLE_POSITION_Y = xmmword_E93840;
  *(_QWORD *)&static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 0xC238000000000046LL;
  static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v3 = sub_21FFD10(v1, 3);
  if ( !v3 )
    sub_21FFECC(0, v4);
  v11 = v3;
  if ( !*(_DWORD *)(v3 + 24)
    || (v12 = StringLiteral_12481/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        *(_QWORD *)(v3 + 32) = StringLiteral_12481/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), v12, v5, v6, v7, v8, v9, v10),
        (*(_DWORD *)(v11 + 24) & 0xFFFFFFFE) == 0)
    || (v19 = StringLiteral_12477/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        *(_QWORD *)(v11 + 40) = StringLiteral_12477/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 40), v19, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v11 + 24) <= 2u) )
  {
    sub_21FFED4(v3);
  }
  v26 = StringLiteral_12483/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_12483/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 48), v26, v20, v21, v22, v23, v24, v25);
  v27 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  v27->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->TD_SPEED_LOCALIZATION_KEYS, v11, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_5935143 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItemDrawButton_TypeInfo);
    byte_5935143 = 1;
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
    return **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method, v2);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_14:
      sub_21FFECC(v4, method);
  }
  if ( LODWORD(TD_SPEED_LOCALIZATION_KEYS->max_length) <= index )
    sub_21FFED4(v4);
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
  if ( (_DWORD)v4 == 17 )
  {
    if ( !item )
      goto LABEL_8;
    return item->fields.changeVoiceFlag;
  }
  else
  {
    if ( (_DWORD)v4 == 16 )
    {
      if ( item )
        return ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0);
LABEL_8:
      sub_21FFECC(v4, v5);
    }
    return 0;
  }
}


void ServantStatusListViewItemDrawButton__SetItem(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UICommonButton_o *gameObject; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  struct UIRangeLabel_array *v10; // x8
  int32_t v11; // w20
  int32_t max_length; // w9
  UIRangeLabel_o *v13; // x21
  struct UICommonButton_array *tdSpeedButtonList; // x8
  struct UICommonButton_array *v15; // x8
  UnityEngine_GameObject_o *v16; // x0
  struct UICommonButton_array *v17; // x8
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x2
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v21; // x21
  struct UIRangeLabel_array *v22; // x8
  UIRangeLabel_o *v23; // x21
  struct ServantEntity_o *svtEntity; // x8
  Il2CppObject *v25; // x0
  System_String_o *v26; // x20
  System_String_o *v27; // x0
  __int64 v28; // x2
  UILabel_o *explanationLabel; // x20
  struct UILabel_o *v30; // x8
  unsigned int mHeight; // w20
  float v32; // s9
  UnityEngine_BoxCollider_o *collider; // x20
  unsigned int size; // s0
  struct UISprite_o *baseSprite; // x8
  int v36; // s10
  float v37; // s8
  __int64 *v38; // x8
  UILabel_o *v39; // x20
  __int64 v40; // x2
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // w1
  float v42; // s8
  UnityEngine_GameObject_o *titleBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *buttonBase; // x20
  float v46; // s0
  UnityEngine_BoxCollider_o *v47; // x20
  unsigned int v48; // s0
  float v49; // s8
  int32_t v50; // s9
  UnityEngine_GameObject_o *v51; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *resultText; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935144 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_21FFC50(&StringLiteral_12399/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE_{0}"*/);
    sub_21FFC50(&StringLiteral_12396/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/);
    sub_21FFC50(&StringLiteral_21652/*"img_txt_npspeed"*/);
    sub_21FFC50(&StringLiteral_12398/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_21578/*"img_txt_battlevoice"*/);
    sub_21FFC50(&StringLiteral_12482/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12397/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/);
    byte_5935144 = 1;
  }
  resultText = 0;
  ServantStatusListViewItemDrawButtonsBase__SetItem(
    (ServantStatusListViewItemDrawButtonsBase_o *)this,
    item,
    mode,
    method);
  if ( item && mode )
  {
    gameObject = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, const MethodInfo *))this->klass->vtable._4_GetKind.methodPtr)(
                                       this,
                                       this->klass->vtable._4_GetKind.method);
    if ( (_DWORD)gameObject == 17 )
    {
      tdSpeedButtonList = this->fields.tdSpeedButtonList;
      if ( !tdSpeedButtonList )
        goto LABEL_15;
      if ( LODWORD(tdSpeedButtonList->max_length) <= 2 )
        goto LABEL_63;
      gameObject = tdSpeedButtonList->m_Items[2];
      if ( !gameObject )
        goto LABEL_15;
      gameObject = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v15 = this->fields.tdSpeedButtonList;
      if ( !v15 )
        goto LABEL_15;
      if ( !LODWORD(v15->max_length) )
        goto LABEL_63;
      gameObject = v15->m_Items[0];
      if ( !gameObject )
        goto LABEL_15;
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v16, 95.0, 0);
      v17 = this->fields.tdSpeedButtonList;
      if ( !v17 )
        goto LABEL_15;
      if ( (v17->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_63;
      gameObject = v17->m_Items[1];
      if ( !gameObject )
        goto LABEL_15;
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v18, -95.0, 0);
      tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
      if ( !tdSpeedRangeLabelList )
        goto LABEL_15;
      if ( !LODWORD(tdSpeedRangeLabelList->max_length) )
        goto LABEL_63;
      v21 = tdSpeedRangeLabelList->m_Items[0];
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v19);
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12396/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0);
      if ( !v21 )
        goto LABEL_15;
      UIRangeLabel__Set(v21, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
      v22 = this->fields.tdSpeedRangeLabelList;
      if ( !v22 )
        goto LABEL_15;
      if ( (v22->max_length & 0xFFFFFFFE) == 0 )
LABEL_63:
        sub_21FFED4(gameObject);
      v23 = v22->m_Items[1];
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12397/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0);
      if ( !v23 )
        goto LABEL_15;
      UIRangeLabel__Set(v23, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
      svtEntity = item->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_15;
      id = svtEntity->fields.id;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &id);
      v26 = System_String__Format((System_String_o *)StringLiteral_12399/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE_{0}"*/, v25, 0);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12398/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0);
      LocalizationManager__TryGet(&resultText, v26, v27, 0);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 3, 0);
      explanationLabel = this->fields.explanationLabel;
      gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      if ( !*(&ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v8, v28);
      if ( !explanationLabel )
        goto LABEL_15;
      UILabel__set_fontSize(
        explanationLabel,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_EXPLANATION_FONT_SIZE,
        0);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UILabel__set_text((UILabel_o *)gameObject, resultText, 0);
      v30 = this->fields.explanationLabel;
      if ( !v30 )
        goto LABEL_15;
      mHeight = v30->fields.mHeight;
      v32 = vcvts_n_f32_s32(mHeight, 1u);
      GameObjectExtensions__SetLocalPositionY(
        this->fields.titleBase,
        v32 + (float)ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_TITLE_POSITION_Y,
        0);
      gameObject = (UICommonButton_o *)this->fields.baseSprite;
      if ( !gameObject )
        goto LABEL_15;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_BASE_SPRITE_SIZE_Y + mHeight,
        0);
      collider = this->fields.collider;
      if ( !collider )
        goto LABEL_15;
      size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
      baseSprite = this->fields.baseSprite;
      if ( !baseSprite )
        goto LABEL_15;
      gameObject = (UICommonButton_o *)this->fields.collider;
      if ( !gameObject )
        goto LABEL_15;
      v36 = baseSprite->fields.mHeight;
      v37 = *(float *)&size;
      v54 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
      v54.fields.y = (float)v36;
      v54.fields.x = v37;
      UnityEngine_BoxCollider__set_size(collider, v54, 0);
      GameObjectExtensions__SetLocalPositionY(
        this->fields.buttonBase,
        v32 + (float)ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_BUTTON_POSITION_Y,
        0);
      gameObject = (UICommonButton_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v38 = &StringLiteral_21578/*"img_txt_battlevoice"*/;
    }
    else
    {
      if ( (_DWORD)gameObject != 16 )
        goto LABEL_60;
      v10 = this->fields.tdSpeedRangeLabelList;
      if ( !v10 )
        goto LABEL_15;
      v11 = 0;
      while ( 1 )
      {
        max_length = v10->max_length;
        if ( v11 >= max_length )
          break;
        if ( v11 >= (unsigned int)max_length )
          goto LABEL_63;
        v13 = v10->m_Items[v11];
        if ( !*(&ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v8, v9);
        gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v11, v8);
        if ( v13 )
        {
          UIRangeLabel__Set(v13, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
          v10 = this->fields.tdSpeedRangeLabelList;
          ++v11;
          if ( v10 )
            continue;
        }
        goto LABEL_15;
      }
      v39 = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12482/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
      if ( !v39 )
        goto LABEL_15;
      UILabel__set_text(v39, (System_String_o *)gameObject, 0);
      if ( !*(&ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v8, v40);
      gameObject = (UICommonButton_o *)this->fields.baseSprite;
      if ( !gameObject )
        goto LABEL_15;
      TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v42 = vcvts_n_f32_s32(
              TD_SPEED_BASE_SPRITE_HEIGHT - LODWORD(gameObject[1].fields.specifyDisabledColor.fields.a),
              1u);
      UIWidget__set_height((UIWidget_o *)gameObject, TD_SPEED_BASE_SPRITE_HEIGHT, 0);
      titleBase = this->fields.titleBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleBase, 0);
      GameObjectExtensions__SetLocalPositionY(titleBase, LocalPositionY + v42, 0);
      buttonBase = this->fields.buttonBase;
      v46 = GameObjectExtensions__GetLocalPositionY(buttonBase, 0);
      GameObjectExtensions__SetLocalPositionY(buttonBase, v42 + v46, 0);
      v47 = this->fields.collider;
      if ( !v47 )
        goto LABEL_15;
      v48 = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
      gameObject = (UICommonButton_o *)this->fields.collider;
      if ( !gameObject )
        goto LABEL_15;
      v49 = *(float *)&v48;
      v50 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v55 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
      v55.fields.y = (float)v50;
      v55.fields.x = v49;
      UnityEngine_BoxCollider__set_size(v47, v55, 0);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT,
        0);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      GameObjectExtensions__SetLocalPositionY(
        v51,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
        0);
      gameObject = (UICommonButton_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v38 = &StringLiteral_21652/*"img_txt_npspeed"*/;
    }
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v38, 0);
LABEL_60:
    gameObject = (UICommonButton_o *)this->fields.titleSprite;
    if ( gameObject )
    {
      (*(void (__fastcall **)(UICommonButton_o *, _QWORD))&gameObject->klass[1]._2.element_size)(
        gameObject,
        *(_QWORD *)&gameObject->klass[1]._2.static_fields_size);
      return;
    }
LABEL_15:
    sub_21FFECC(gameObject, v8);
  }
}