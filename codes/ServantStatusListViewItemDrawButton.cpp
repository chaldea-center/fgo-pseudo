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
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  __int64 v11; // x19
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct ServantStatusListViewItemDrawButton_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B193D2 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusListViewItemDrawButton_TypeInfo, v1);
    sub_1BCAFF8(&string___TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_11889/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v3);
    sub_1BCAFF8(&StringLiteral_11887/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v4);
    sub_1BCAFF8(&StringLiteral_11883/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v5);
    byte_4B193D2 = 1;
  }
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 0xC238000000000046LL;
  static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v7 = sub_1BCB0A0(string___TypeInfo, 3LL);
  if ( !v7 )
    sub_1BCB254(0LL, v8);
  v11 = v7;
  if ( !*(_DWORD *)(v7 + 24)
    || (v12 = StringLiteral_11887/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        *(_QWORD *)(v7 + 32) = StringLiteral_11887/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), v12, v9, v10),
        *(_DWORD *)(v11 + 24) <= 1u)
    || (v14 = StringLiteral_11883/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        *(_QWORD *)(v11 + 40) = StringLiteral_11883/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 40), v14, v9, v13),
        *(_DWORD *)(v11 + 24) <= 2u) )
  {
    sub_1BCB25C(v7, v8, v9);
  }
  v16 = StringLiteral_11889/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  *(_QWORD *)(v11 + 48) = StringLiteral_11889/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 48), v16, v9, v15);
  v17 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  v17->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v17->TD_SPEED_LOCALIZATION_KEYS, v11, v18, v19);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusListViewItemDrawButton_c *v6; // x0
  struct System_String_array *TD_SPEED_LOCALIZATION_KEYS; // x8
  System_String_o *v8; // x19

  if ( (byte_4B193D0 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, method);
    sub_1BCAFF8(&ServantStatusListViewItemDrawButton_TypeInfo, v4);
    sub_1BCAFF8(&string_TypeInfo, v5);
    byte_4B193D0 = 1;
  }
  v6 = ServantStatusListViewItemDrawButton_TypeInfo;
  if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    v6 = ServantStatusListViewItemDrawButton_TypeInfo;
  }
  TD_SPEED_LOCALIZATION_KEYS = v6->static_fields->TD_SPEED_LOCALIZATION_KEYS;
  if ( !TD_SPEED_LOCALIZATION_KEYS )
    goto LABEL_14;
  if ( (signed int)TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    return string_TypeInfo->static_fields->Empty;
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_14:
      sub_1BCB254(v6, method);
  }
  if ( TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    sub_1BCB25C(v6, method, v2);
  v8 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v8, 0LL);
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
      sub_1BCB254(v4, v5);
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
  __int64 v16; // x2
  struct UIRangeLabel_array *v17; // x8
  __int64 v18; // x20
  int max_length; // w9
  UIRangeLabel_o *v20; // x21
  struct UICommonButton_array *tdSpeedButtonList; // x8
  struct UICommonButton_array *v22; // x8
  UnityEngine_GameObject_o *v23; // x0
  struct UICommonButton_array *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v27; // x20
  struct UIRangeLabel_array *v28; // x8
  UIRangeLabel_o *v29; // x20
  UILabel_o *explanationLabel; // x20
  __int64 *v31; // x8
  UILabel_o *v32; // x20
  struct UISprite_o *baseSprite; // x8
  int32_t v34; // w1
  float v35; // s8
  UnityEngine_GameObject_o *titleBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *buttonBase; // x20
  float v39; // s0
  UnityEngine_BoxCollider_o *collider; // x20
  unsigned int size; // s0
  float v42; // s8
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // s9
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B193D1 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, item);
    sub_1BCAFF8(&ServantStatusListViewItemDrawButton_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_11803/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, v8);
    sub_1BCAFF8(&StringLiteral_20508/*"img_txt_npspeed"*/, v9);
    sub_1BCAFF8(&StringLiteral_11805/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, v10);
    sub_1BCAFF8(&StringLiteral_20439/*"img_txt_battlevoice"*/, v11);
    sub_1BCAFF8(&StringLiteral_11888/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v12);
    sub_1BCAFF8(&StringLiteral_11804/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, v13);
    byte_4B193D1 = 1;
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
      v22 = this->fields.tdSpeedButtonList;
      if ( !v22 )
        goto LABEL_15;
      if ( !v22->max_length )
        goto LABEL_55;
      gameObject = v22->m_Items[0];
      if ( !gameObject )
        goto LABEL_15;
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v23, 95.0, 0LL);
      v24 = this->fields.tdSpeedButtonList;
      if ( !v24 )
        goto LABEL_15;
      if ( v24->max_length <= 1 )
        goto LABEL_55;
      gameObject = v24->m_Items[1];
      if ( !gameObject )
        goto LABEL_15;
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v25, -95.0, 0LL);
      tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
      if ( !tdSpeedRangeLabelList )
        goto LABEL_15;
      if ( !tdSpeedRangeLabelList->max_length )
        goto LABEL_55;
      v27 = tdSpeedRangeLabelList->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11803/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0LL);
      if ( !v27 )
        goto LABEL_15;
      UIRangeLabel__Set(v27, (System_String_o *)gameObject, 0LL, 1, 0, 0, 0LL);
      v28 = this->fields.tdSpeedRangeLabelList;
      if ( !v28 )
        goto LABEL_15;
      if ( v28->max_length <= 1 )
LABEL_55:
        sub_1BCB25C(gameObject, v15, v16);
      v29 = v28->m_Items[1];
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11804/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0LL);
      if ( !v29 )
        goto LABEL_15;
      UIRangeLabel__Set(v29, (System_String_o *)gameObject, 0LL, 1, 0, 0, 0LL);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UIWidget__set_height((UIWidget_o *)gameObject, 20, 0LL);
      explanationLabel = this->fields.explanationLabel;
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_15;
      UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UILabel__SetCondensedScale((UILabel_o *)gameObject, 560, 0, 0LL);
      gameObject = (UICommonButton_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v31 = &StringLiteral_20439/*"img_txt_battlevoice"*/;
    }
    else
    {
      if ( (_DWORD)gameObject != 16 )
        goto LABEL_53;
      v17 = this->fields.tdSpeedRangeLabelList;
      if ( !v17 )
        goto LABEL_15;
      v18 = 0LL;
      while ( 1 )
      {
        max_length = v17->max_length;
        if ( (int)v18 >= max_length )
          break;
        if ( (unsigned int)v18 >= max_length )
          goto LABEL_55;
        v20 = v17->m_Items[v18];
        if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v18, v15);
        if ( v20 )
        {
          UIRangeLabel__Set(v20, (System_String_o *)gameObject, 0LL, 1, 0, 0, 0LL);
          v17 = this->fields.tdSpeedRangeLabelList;
          ++v18;
          if ( v17 )
            continue;
        }
        goto LABEL_15;
      }
      v32 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11888/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
      if ( !v32 )
        goto LABEL_15;
      UILabel__set_text(v32, (System_String_o *)gameObject, 0LL);
      gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      }
      baseSprite = this->fields.baseSprite;
      if ( !baseSprite )
        goto LABEL_15;
      v34 = *(_DWORD *)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + 8LL);
      v35 = (float)(v34 - baseSprite->fields.mHeight) * 0.5;
      UIWidget__set_height((UIWidget_o *)this->fields.baseSprite, v34, 0LL);
      titleBase = this->fields.titleBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(titleBase, LocalPositionY + v35, 0LL);
      buttonBase = this->fields.buttonBase;
      v39 = GameObjectExtensions__GetLocalPositionY(buttonBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(buttonBase, v35 + v39, 0LL);
      collider = this->fields.collider;
      if ( !collider )
        goto LABEL_15;
      size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
      gameObject = (UICommonButton_o *)this->fields.collider;
      if ( !gameObject )
        goto LABEL_15;
      v42 = *(float *)&size;
      TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v45 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0LL);
      v45.fields.y = (float)TD_SPEED_BASE_SPRITE_HEIGHT;
      v45.fields.x = v42;
      UnityEngine_BoxCollider__set_size(collider, v45, 0LL);
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
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v44,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
        0LL);
      gameObject = (UICommonButton_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v31 = &StringLiteral_20508/*"img_txt_npspeed"*/;
    }
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v31, 0LL);
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
    sub_1BCB254(gameObject, v15);
  }
}