void ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  struct ServantStatusListViewItemDrawButton_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4E745F8 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&StringLiteral_12165/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_1D0F0B4(&StringLiteral_12163/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_1D0F0B4(&StringLiteral_12159/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_4E745F8 = 1;
  }
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DEFAULT_BATTLE_VOICE_TITLE_POSITION_Y = xmmword_D35F40;
  *(_QWORD *)&static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 0xC238000000000046LL;
  static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v2 = sub_1D0F15C(string___TypeInfo, 3);
  if ( !v2 )
    sub_1D0F30C(0, v3);
  v10 = v2;
  if ( !*(_DWORD *)(v2 + 24)
    || (v11 = StringLiteral_12163/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        *(_QWORD *)(v2 + 32) = StringLiteral_12163/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v2 + 32), v11, v4, v5, v6, v7, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u)
    || (v18 = StringLiteral_12159/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_12159/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v10 + 40), v18, v12, v13, v14, v15, v16, v17),
        *(_DWORD *)(v10 + 24) <= 2u) )
  {
    sub_1D0F314(v2);
  }
  v25 = StringLiteral_12165/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_12165/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v10 + 48), v25, v19, v20, v21, v22, v23, v24);
  v26 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  v26->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v26->TD_SPEED_LOCALIZATION_KEYS, v10, v27, v28, v29, v30, v31, v32);
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
  ServantStatusListViewItemDrawButton_c *v3; // x0
  struct System_String_array *TD_SPEED_LOCALIZATION_KEYS; // x8
  System_String_o *v5; // x19

  if ( (byte_4E745F6 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1D0F0B4(&string_TypeInfo);
    byte_4E745F6 = 1;
  }
  v3 = ServantStatusListViewItemDrawButton_TypeInfo;
  if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    v3 = ServantStatusListViewItemDrawButton_TypeInfo;
  }
  TD_SPEED_LOCALIZATION_KEYS = v3->static_fields->TD_SPEED_LOCALIZATION_KEYS;
  if ( !TD_SPEED_LOCALIZATION_KEYS )
    goto LABEL_14;
  if ( SLODWORD(TD_SPEED_LOCALIZATION_KEYS->max_length) <= index )
    return string_TypeInfo->static_fields->Empty;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_14:
      sub_1D0F30C(v3, method);
  }
  if ( LODWORD(TD_SPEED_LOCALIZATION_KEYS->max_length) <= index )
    sub_1D0F314(v3);
  v5 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v5, 0);
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
      sub_1D0F30C(v4, v5);
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
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v8; // x1
  struct UIRangeLabel_array *v9; // x8
  __int64 v10; // x20
  int max_length; // w9
  UIRangeLabel_o *v12; // x21
  struct UICommonButton_array *tdSpeedButtonList; // x8
  struct UICommonButton_array *v14; // x8
  UnityEngine_GameObject_o *v15; // x0
  struct UICommonButton_array *v16; // x8
  UnityEngine_GameObject_o *v17; // x0
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v19; // x21
  struct UIRangeLabel_array *v20; // x8
  UIRangeLabel_o *v21; // x21
  struct ServantEntity_o *svtEntity; // x8
  Il2CppObject *v23; // x0
  System_String_o *v24; // x20
  System_String_o *v25; // x0
  UILabel_o *explanationLabel; // x20
  struct UILabel_o *v27; // x8
  int mHeight; // w20
  float v29; // s9
  UnityEngine_BoxCollider_o *collider; // x20
  unsigned int size; // s0
  struct UISprite_o *baseSprite; // x8
  int v33; // s10
  float v34; // s8
  __int64 *v35; // x8
  UILabel_o *v36; // x20
  struct UISprite_o *v37; // x8
  int32_t v38; // w1
  float v39; // s8
  UnityEngine_GameObject_o *titleBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *buttonBase; // x20
  float v43; // s0
  UnityEngine_BoxCollider_o *v44; // x20
  unsigned int v45; // s0
  float v46; // s8
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // s9
  UnityEngine_GameObject_o *v48; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *resultText; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E745F7 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1D0F0B4(&StringLiteral_12081/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE_{0}"*/);
    sub_1D0F0B4(&StringLiteral_12078/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/);
    sub_1D0F0B4(&StringLiteral_21088/*"img_txt_npspeed"*/);
    sub_1D0F0B4(&StringLiteral_12080/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/);
    sub_1D0F0B4(&StringLiteral_21017/*"img_txt_battlevoice"*/);
    sub_1D0F0B4(&StringLiteral_12164/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_1D0F0B4(&StringLiteral_12079/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/);
    byte_4E745F7 = 1;
  }
  resultText = 0;
  ServantStatusListViewItemDrawButtonsBase__SetItem(
    (ServantStatusListViewItemDrawButtonsBase_o *)this,
    item,
    mode,
    method);
  if ( item && mode )
  {
    gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, const MethodInfo *))this->klass->vtable._4_GetKind.methodPtr)(
                                              this,
                                              this->klass->vtable._4_GetKind.method);
    if ( (_DWORD)gameObject == 17 )
    {
      tdSpeedButtonList = this->fields.tdSpeedButtonList;
      if ( !tdSpeedButtonList )
        goto LABEL_15;
      if ( LODWORD(tdSpeedButtonList->max_length) <= 2 )
        goto LABEL_63;
      gameObject = (UnityEngine_Component_o *)tdSpeedButtonList->m_Items[2];
      if ( !gameObject )
        goto LABEL_15;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v14 = this->fields.tdSpeedButtonList;
      if ( !v14 )
        goto LABEL_15;
      if ( !LODWORD(v14->max_length) )
        goto LABEL_63;
      gameObject = (UnityEngine_Component_o *)v14->m_Items[0];
      if ( !gameObject )
        goto LABEL_15;
      v15 = UnityEngine_Component__get_gameObject(gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v15, 95.0, 0);
      v16 = this->fields.tdSpeedButtonList;
      if ( !v16 )
        goto LABEL_15;
      if ( LODWORD(v16->max_length) <= 1 )
        goto LABEL_63;
      gameObject = (UnityEngine_Component_o *)v16->m_Items[1];
      if ( !gameObject )
        goto LABEL_15;
      v17 = UnityEngine_Component__get_gameObject(gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v17, -95.0, 0);
      tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
      if ( !tdSpeedRangeLabelList )
        goto LABEL_15;
      if ( !LODWORD(tdSpeedRangeLabelList->max_length) )
        goto LABEL_63;
      v19 = tdSpeedRangeLabelList->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12078/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0);
      if ( !v19 )
        goto LABEL_15;
      UIRangeLabel__Set(v19, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
      v20 = this->fields.tdSpeedRangeLabelList;
      if ( !v20 )
        goto LABEL_15;
      if ( LODWORD(v20->max_length) <= 1 )
LABEL_63:
        sub_1D0F314(gameObject);
      v21 = v20->m_Items[1];
      gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12079/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0);
      if ( !v21 )
        goto LABEL_15;
      UIRangeLabel__Set(v21, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
      svtEntity = item->fields.svtEntity;
      if ( !svtEntity )
        goto LABEL_15;
      id = svtEntity->fields.id;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &id);
      v24 = System_String__Format((System_String_o *)StringLiteral_12081/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE_{0}"*/, v23, 0);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12080/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0);
      LocalizationManager__TryGet(&resultText, v24, v25, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UILabel__set_overflowMethod((UILabel_o *)gameObject, 3, 0);
      explanationLabel = this->fields.explanationLabel;
      gameObject = (UnityEngine_Component_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
      if ( !explanationLabel )
        goto LABEL_15;
      UILabel__set_fontSize(
        explanationLabel,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_EXPLANATION_FONT_SIZE,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UILabel__set_text((UILabel_o *)gameObject, resultText, 0);
      v27 = this->fields.explanationLabel;
      if ( !v27 )
        goto LABEL_15;
      mHeight = v27->fields.mHeight;
      v29 = (float)mHeight * 0.5;
      GameObjectExtensions__SetLocalPositionY(
        this->fields.titleBase,
        v29 + (float)ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_TITLE_POSITION_Y,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.baseSprite;
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
      gameObject = (UnityEngine_Component_o *)this->fields.collider;
      if ( !gameObject )
        goto LABEL_15;
      v33 = baseSprite->fields.mHeight;
      v34 = *(float *)&size;
      v51 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
      v51.fields.y = (float)v33;
      v51.fields.x = v34;
      UnityEngine_BoxCollider__set_size(collider, v51, 0);
      GameObjectExtensions__SetLocalPositionY(
        this->fields.buttonBase,
        v29 + (float)ServantStatusListViewItemDrawButton_TypeInfo->static_fields->DEFAULT_BATTLE_VOICE_BUTTON_POSITION_Y,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v35 = &StringLiteral_21017/*"img_txt_battlevoice"*/;
    }
    else
    {
      if ( (_DWORD)gameObject != 16 )
        goto LABEL_60;
      v9 = this->fields.tdSpeedRangeLabelList;
      if ( !v9 )
        goto LABEL_15;
      v10 = 0;
      while ( 1 )
      {
        max_length = v9->max_length;
        if ( (int)v10 >= max_length )
          break;
        if ( (unsigned int)v10 >= max_length )
          goto LABEL_63;
        v12 = v9->m_Items[v10];
        if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        gameObject = (UnityEngine_Component_o *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v10, v8);
        if ( v12 )
        {
          UIRangeLabel__Set(v12, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
          v9 = this->fields.tdSpeedRangeLabelList;
          ++v10;
          if ( v9 )
            continue;
        }
        goto LABEL_15;
      }
      v36 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12164/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
      if ( !v36 )
        goto LABEL_15;
      UILabel__set_text(v36, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        gameObject = (UnityEngine_Component_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      }
      v37 = this->fields.baseSprite;
      if ( !v37 )
        goto LABEL_15;
      v38 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 24);
      v39 = (float)(v38 - v37->fields.mHeight) * 0.5;
      UIWidget__set_height((UIWidget_o *)this->fields.baseSprite, v38, 0);
      titleBase = this->fields.titleBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleBase, 0);
      GameObjectExtensions__SetLocalPositionY(titleBase, LocalPositionY + v39, 0);
      buttonBase = this->fields.buttonBase;
      v43 = GameObjectExtensions__GetLocalPositionY(buttonBase, 0);
      GameObjectExtensions__SetLocalPositionY(buttonBase, v39 + v43, 0);
      v44 = this->fields.collider;
      if ( !v44 )
        goto LABEL_15;
      v45 = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.collider;
      if ( !gameObject )
        goto LABEL_15;
      v46 = *(float *)&v45;
      TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v52 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
      v52.fields.y = (float)TD_SPEED_BASE_SPRITE_HEIGHT;
      v52.fields.x = v46;
      UnityEngine_BoxCollider__set_size(v44, v52, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      v48 = UnityEngine_Component__get_gameObject(gameObject, 0);
      GameObjectExtensions__SetLocalPositionY(
        v48,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v35 = &StringLiteral_21088/*"img_txt_npspeed"*/;
    }
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v35, 0);
LABEL_60:
    gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
    if ( gameObject )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
        gameObject,
        gameObject->klass[2]._1.generic_class);
      return;
    }
LABEL_15:
    sub_1D0F30C(gameObject, v8);
  }
}