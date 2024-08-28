void __fastcall ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x8
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x19
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct ServantStatusListViewItemDrawButton_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A059EE & 1) == 0 )
  {
    sub_1B686D4(&ServantStatusListViewItemDrawButton_TypeInfo, v1);
    sub_1B686D4(&string___TypeInfo, v2);
    sub_1B686D4(&StringLiteral_11886/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v3);
    sub_1B686D4(&StringLiteral_11884/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v4);
    sub_1B686D4(&StringLiteral_11880/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v5);
    byte_4A059EE = 1;
  }
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 0xC238000000000046LL;
  static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v7 = sub_1B6877C(string___TypeInfo, 3LL);
  if ( !v7 )
    sub_1B68930(0LL, v8);
  v11 = v7;
  if ( !*(_DWORD *)(v7 + 24)
    || (v12 = StringLiteral_11884/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        *(_QWORD *)(v7 + 32) = StringLiteral_11884/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 32), v12, v9, v10),
        *(_DWORD *)(v11 + 24) <= 1u)
    || (v15 = StringLiteral_11880/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        *(_QWORD *)(v11 + 40) = StringLiteral_11880/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 40), v15, v13, v14),
        *(_DWORD *)(v11 + 24) <= 2u) )
  {
    sub_1B68938(v7, v8);
  }
  v18 = StringLiteral_11886/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_11886/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v11 + 48), v18, v16, v17);
  v19 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  v19->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v11;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v19->TD_SPEED_LOCALIZATION_KEYS, v11, v20, v21);
}


void __fastcall ServantStatusListViewItemDrawButton___ctor(
        ServantStatusListViewItemDrawButton_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawButton__Awake(
        ServantStatusListViewItemDrawButton_o *this,
        const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantStatusListViewItemDrawButton_c *v5; // x0
  struct System_String_array *TD_SPEED_LOCALIZATION_KEYS; // x8
  System_String_o *v7; // x19

  if ( (byte_4A059EC & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, method);
    sub_1B686D4(&ServantStatusListViewItemDrawButton_TypeInfo, v3);
    sub_1B686D4(&string_TypeInfo, v4);
    byte_4A059EC = 1;
  }
  v5 = ServantStatusListViewItemDrawButton_TypeInfo;
  if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    v5 = ServantStatusListViewItemDrawButton_TypeInfo;
  }
  TD_SPEED_LOCALIZATION_KEYS = v5->static_fields->TD_SPEED_LOCALIZATION_KEYS;
  if ( !TD_SPEED_LOCALIZATION_KEYS )
    goto LABEL_14;
  if ( (signed int)TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    return string_TypeInfo->static_fields->Empty;
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_14:
      sub_1B68930(v5, method);
  }
  if ( TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    sub_1B68938(v5, method);
  v7 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v7, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawButton__Selected(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1

  v4 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_GetKind.method)(
         this,
         this->klass->vtable._5_SetItem.methodPtr,
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
        return ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0LL);
LABEL_8:
      sub_1B68930(v4, v5);
    }
    return 0;
  }
}


void __fastcall ServantStatusListViewItemDrawButton__SetItem(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UICommonButton_o *gameObject; // x0
  const MethodInfo *v15; // x1
  struct UIRangeLabel_array *v16; // x8
  __int64 v17; // x20
  int max_length; // w9
  UIRangeLabel_o *v19; // x21
  struct UICommonButton_array *tdSpeedButtonList; // x8
  struct UICommonButton_array *v21; // x8
  UnityEngine_GameObject_o *v22; // x0
  struct UICommonButton_array *v23; // x8
  UnityEngine_GameObject_o *v24; // x0
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v26; // x20
  struct UIRangeLabel_array *v27; // x8
  UIRangeLabel_o *v28; // x20
  UILabel_o *explanationLabel; // x20
  __int64 *v30; // x8
  UILabel_o *v31; // x20
  struct UISprite_o *baseSprite; // x8
  int32_t v33; // w1
  float v34; // s8
  UnityEngine_GameObject_o *titleBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *buttonBase; // x20
  float v38; // s0
  UnityEngine_BoxCollider_o *collider; // x20
  unsigned int size; // s0
  float v41; // s8
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // s9
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A059ED & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, item);
    sub_1B686D4(&ServantStatusListViewItemDrawButton_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_11805/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, v8);
    sub_1B686D4(&StringLiteral_20494/*"img_txt_npspeed"*/, v9);
    sub_1B686D4(&StringLiteral_11807/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, v10);
    sub_1B686D4(&StringLiteral_20433/*"img_txt_battlevoice"*/, v11);
    sub_1B686D4(&StringLiteral_11885/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v12);
    sub_1B686D4(&StringLiteral_11806/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, v13);
    byte_4A059ED = 1;
  }
  ServantStatusListViewItemDrawButtonsBase__SetItem(
    (ServantStatusListViewItemDrawButtonsBase_o *)this,
    item,
    mode,
    method);
  if ( item && mode )
  {
    gameObject = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer))this->klass->vtable._4_GetKind.method)(
                                       this,
                                       this->klass->vtable._5_SetItem.methodPtr);
    if ( (_DWORD)gameObject == 17 )
    {
      tdSpeedButtonList = this->fields.tdSpeedButtonList;
      if ( !tdSpeedButtonList )
        goto LABEL_15;
      if ( tdSpeedButtonList->max_length <= 2 )
        goto LABEL_55;
      gameObject = tdSpeedButtonList->m_Items[2];
      if ( !gameObject )
        goto LABEL_15;
      gameObject = (UICommonButton_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v21 = this->fields.tdSpeedButtonList;
      if ( !v21 )
        goto LABEL_15;
      if ( !v21->max_length )
        goto LABEL_55;
      gameObject = v21->m_Items[0];
      if ( !gameObject )
        goto LABEL_15;
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v22, 95.0, 0LL);
      v23 = this->fields.tdSpeedButtonList;
      if ( !v23 )
        goto LABEL_15;
      if ( v23->max_length <= 1 )
        goto LABEL_55;
      gameObject = v23->m_Items[1];
      if ( !gameObject )
        goto LABEL_15;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v24, -95.0, 0LL);
      tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
      if ( !tdSpeedRangeLabelList )
        goto LABEL_15;
      if ( !tdSpeedRangeLabelList->max_length )
        goto LABEL_55;
      v26 = tdSpeedRangeLabelList->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0LL);
      if ( !v26 )
        goto LABEL_15;
      UIRangeLabel__Set(v26, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      v27 = this->fields.tdSpeedRangeLabelList;
      if ( !v27 )
        goto LABEL_15;
      if ( v27->max_length <= 1 )
LABEL_55:
        sub_1B68938(gameObject, v15);
      v28 = v27->m_Items[1];
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11806/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0LL);
      if ( !v28 )
        goto LABEL_15;
      UIRangeLabel__Set(v28, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UIWidget__set_height((UIWidget_o *)gameObject, 20, 0LL);
      explanationLabel = this->fields.explanationLabel;
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11807/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_15;
      UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 560, 0LL);
      gameObject = (UICommonButton_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v30 = &StringLiteral_20433/*"img_txt_battlevoice"*/;
    }
    else
    {
      if ( (_DWORD)gameObject != 16 )
        goto LABEL_53;
      v16 = this->fields.tdSpeedRangeLabelList;
      if ( !v16 )
        goto LABEL_15;
      v17 = 0LL;
      while ( 1 )
      {
        max_length = v16->max_length;
        if ( (int)v17 >= max_length )
          break;
        if ( (unsigned int)v17 >= max_length )
          goto LABEL_55;
        v19 = v16->m_Items[v17];
        if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v17, v15);
        if ( v19 )
        {
          UIRangeLabel__Set(v19, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
          v16 = this->fields.tdSpeedRangeLabelList;
          ++v17;
          if ( v16 )
            continue;
        }
        goto LABEL_15;
      }
      v31 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11885/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
      if ( !v31 )
        goto LABEL_15;
      UILabel__set_text(v31, (System_String_o *)gameObject, 0LL);
      gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      }
      baseSprite = this->fields.baseSprite;
      if ( !baseSprite )
        goto LABEL_15;
      v33 = *(_DWORD *)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + 8LL);
      v34 = (float)(v33 - baseSprite->fields.mHeight) * 0.5;
      UIWidget__set_height((UIWidget_o *)this->fields.baseSprite, v33, 0LL);
      titleBase = this->fields.titleBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(titleBase, LocalPositionY + v34, 0LL);
      buttonBase = this->fields.buttonBase;
      v38 = GameObjectExtensions__GetLocalPositionY(buttonBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(buttonBase, v34 + v38, 0LL);
      collider = this->fields.collider;
      if ( !collider )
        goto LABEL_15;
      size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
      gameObject = (UICommonButton_o *)this->fields.collider;
      if ( !gameObject )
        goto LABEL_15;
      v41 = *(float *)&size;
      TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v44 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0LL);
      v44.fields.y = (float)TD_SPEED_BASE_SPRITE_HEIGHT;
      v44.fields.x = v41;
      UnityEngine_BoxCollider__set_size(collider, v44, 0LL);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT,
        0LL);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v43,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
        0LL);
      gameObject = (UICommonButton_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v30 = &StringLiteral_20494/*"img_txt_npspeed"*/;
    }
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v30, 0LL);
LABEL_53:
    gameObject = (UICommonButton_o *)this->fields.titleSprite;
    if ( gameObject )
    {
      (*(void (__fastcall **)(UICommonButton_o *, _QWORD))&gameObject->klass[1]._2.thread_static_fields_offset)(
        gameObject,
        *(_QWORD *)&gameObject->klass[1]._2.token);
      return;
    }
LABEL_15:
    sub_1B68930(gameObject, v15);
  }
}