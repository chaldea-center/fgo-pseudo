void ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  __int64 v6; // x19
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct ServantStatusListViewItemDrawButton_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C53901 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_11996/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_1C3E564(&StringLiteral_11994/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_1C3E564(&StringLiteral_11990/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_4C53901 = 1;
  }
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 0xC238000000000046LL;
  static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v2 = sub_1C3E60C(string___TypeInfo, 3);
  if ( !v2 )
    sub_1C3E7C0(0, v3);
  v6 = v2;
  if ( !*(_DWORD *)(v2 + 24)
    || (v7 = StringLiteral_11994/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        *(_QWORD *)(v2 + 32) = StringLiteral_11994/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v2 + 32), v7, v4, v5),
        *(_DWORD *)(v6 + 24) <= 1u)
    || (v10 = StringLiteral_11990/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        *(_QWORD *)(v6 + 40) = StringLiteral_11990/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), v10, v8, v9),
        *(_DWORD *)(v6 + 24) <= 2u) )
  {
    sub_1C3E7C8(v2, v3);
  }
  v13 = StringLiteral_11996/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  *(_QWORD *)(v6 + 48) = StringLiteral_11996/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 48), v13, v11, v12);
  v14 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  v14->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&v14->TD_SPEED_LOCALIZATION_KEYS, v6, v15, v16);
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

  if ( (byte_4C538FF & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    byte_4C538FF = 1;
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
      sub_1C3E7C0(v3, method);
  }
  if ( LODWORD(TD_SPEED_LOCALIZATION_KEYS->max_length) <= index )
    sub_1C3E7C8(v3, method);
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
      sub_1C3E7C0(v4, v5);
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
  UIRangeLabel_o *v19; // x20
  struct UIRangeLabel_array *v20; // x8
  UIRangeLabel_o *v21; // x20
  UILabel_o *explanationLabel; // x20
  __int64 *v23; // x8
  UILabel_o *v24; // x20
  struct UISprite_o *baseSprite; // x8
  int32_t v26; // w1
  float v27; // s8
  UnityEngine_GameObject_o *titleBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *buttonBase; // x20
  float v31; // s0
  UnityEngine_BoxCollider_o *collider; // x20
  unsigned int size; // s0
  float v34; // s8
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // s9
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C53900 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1C3E564(&StringLiteral_11910/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/);
    sub_1C3E564(&StringLiteral_20713/*"img_txt_npspeed"*/);
    sub_1C3E564(&StringLiteral_11912/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_20643/*"img_txt_battlevoice"*/);
    sub_1C3E564(&StringLiteral_11995/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_11911/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/);
    byte_4C53900 = 1;
  }
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
        goto LABEL_55;
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
        goto LABEL_55;
      gameObject = (UnityEngine_Component_o *)v14->m_Items[0];
      if ( !gameObject )
        goto LABEL_15;
      v15 = UnityEngine_Component__get_gameObject(gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v15, 95.0, 0);
      v16 = this->fields.tdSpeedButtonList;
      if ( !v16 )
        goto LABEL_15;
      if ( LODWORD(v16->max_length) <= 1 )
        goto LABEL_55;
      gameObject = (UnityEngine_Component_o *)v16->m_Items[1];
      if ( !gameObject )
        goto LABEL_15;
      v17 = UnityEngine_Component__get_gameObject(gameObject, 0);
      GameObjectExtensions__SetLocalPositionX(v17, -95.0, 0);
      tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
      if ( !tdSpeedRangeLabelList )
        goto LABEL_15;
      if ( !LODWORD(tdSpeedRangeLabelList->max_length) )
        goto LABEL_55;
      v19 = tdSpeedRangeLabelList->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11910/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0);
      if ( !v19 )
        goto LABEL_15;
      UIRangeLabel__Set(v19, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
      v20 = this->fields.tdSpeedRangeLabelList;
      if ( !v20 )
        goto LABEL_15;
      if ( LODWORD(v20->max_length) <= 1 )
LABEL_55:
        sub_1C3E7C8(gameObject, v8);
      v21 = v20->m_Items[1];
      gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11911/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0);
      if ( !v21 )
        goto LABEL_15;
      UIRangeLabel__Set(v21, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UIWidget__set_height((UIWidget_o *)gameObject, 20, 0);
      explanationLabel = this->fields.explanationLabel;
      gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11912/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0);
      if ( !explanationLabel )
        goto LABEL_15;
      UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 560, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v23 = &StringLiteral_20643/*"img_txt_battlevoice"*/;
    }
    else
    {
      if ( (_DWORD)gameObject != 16 )
        goto LABEL_53;
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
          goto LABEL_55;
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
      v24 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
      if ( !v24 )
        goto LABEL_15;
      UILabel__set_text(v24, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        gameObject = (UnityEngine_Component_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      }
      baseSprite = this->fields.baseSprite;
      if ( !baseSprite )
        goto LABEL_15;
      v26 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 8);
      v27 = (float)(v26 - baseSprite->fields.mHeight) * 0.5;
      UIWidget__set_height((UIWidget_o *)this->fields.baseSprite, v26, 0);
      titleBase = this->fields.titleBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleBase, 0);
      GameObjectExtensions__SetLocalPositionY(titleBase, LocalPositionY + v27, 0);
      buttonBase = this->fields.buttonBase;
      v31 = GameObjectExtensions__GetLocalPositionY(buttonBase, 0);
      GameObjectExtensions__SetLocalPositionY(buttonBase, v27 + v31, 0);
      collider = this->fields.collider;
      if ( !collider )
        goto LABEL_15;
      size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.collider;
      if ( !gameObject )
        goto LABEL_15;
      v34 = *(float *)&size;
      TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v37 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
      v37.fields.y = (float)TD_SPEED_BASE_SPRITE_HEIGHT;
      v37.fields.x = v34;
      UnityEngine_BoxCollider__set_size(collider, v37, 0);
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
      v36 = UnityEngine_Component__get_gameObject(gameObject, 0);
      GameObjectExtensions__SetLocalPositionY(
        v36,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v23 = &StringLiteral_20713/*"img_txt_npspeed"*/;
    }
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v23, 0);
LABEL_53:
    gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
    if ( gameObject )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
        gameObject,
        gameObject->klass[2]._1.generic_class);
      return;
    }
LABEL_15:
    sub_1C3E7C0(gameObject, v8);
  }
}