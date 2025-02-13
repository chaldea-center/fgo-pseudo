void __fastcall ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x19
  int64_t v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  struct ServantStatusListViewItemDrawButton_StaticFields *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4BD94C0 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_12155/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_1C21E38(&StringLiteral_12153/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_1C21E38(&StringLiteral_12149/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_4BD94C0 = 1;
  }
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 0xC238000000000046LL;
  static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v2 = sub_1C21EE0(string___TypeInfo, 3LL);
  if ( !v2 )
    sub_1C22094(0LL, v3);
  v10 = v2;
  if ( !*(_DWORD *)(v2 + 24)
    || (v11 = StringLiteral_12153/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        *(_QWORD *)(v2 + 32) = StringLiteral_12153/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v2 + 32), v11, v4, v5, v6, v7, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u)
    || (v18 = StringLiteral_12149/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_12149/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 40), v18, v12, v13, v14, v15, v16, v17),
        *(_DWORD *)(v10 + 24) <= 2u) )
  {
    sub_1C2209C(v2, v3);
  }
  v25 = StringLiteral_12155/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_12155/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 48), v25, v19, v20, v21, v22, v23, v24);
  v26 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  v26->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v26->TD_SPEED_LOCALIZATION_KEYS, v10, v27, v28, v29, v30, v31, v32);
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
  ServantStatusListViewItemDrawButton_c *v3; // x0
  struct System_String_array *TD_SPEED_LOCALIZATION_KEYS; // x8
  System_String_o *v5; // x19

  if ( (byte_4BD94BE & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    byte_4BD94BE = 1;
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
  if ( (signed int)TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    return string_TypeInfo->static_fields->Empty;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_14:
      sub_1C22094(v3, method);
  }
  if ( TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    sub_1C2209C(v3, method);
  v5 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(v5, 0LL);
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
      sub_1C22094(v4, v5);
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
  UICommonButton_o *gameObject; // x0
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

  if ( (byte_4BD94BF & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_1C21E38(&StringLiteral_12074/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/);
    sub_1C21E38(&StringLiteral_20937/*"img_txt_npspeed"*/);
    sub_1C21E38(&StringLiteral_12076/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_20876/*"img_txt_battlevoice"*/);
    sub_1C21E38(&StringLiteral_12154/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_12075/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/);
    byte_4BD94BF = 1;
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
      v14 = this->fields.tdSpeedButtonList;
      if ( !v14 )
        goto LABEL_15;
      if ( !v14->max_length )
        goto LABEL_55;
      gameObject = v14->m_Items[0];
      if ( !gameObject )
        goto LABEL_15;
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v15, 95.0, 0LL);
      v16 = this->fields.tdSpeedButtonList;
      if ( !v16 )
        goto LABEL_15;
      if ( v16->max_length <= 1 )
        goto LABEL_55;
      gameObject = v16->m_Items[1];
      if ( !gameObject )
        goto LABEL_15;
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v17, -95.0, 0LL);
      tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
      if ( !tdSpeedRangeLabelList )
        goto LABEL_15;
      if ( !tdSpeedRangeLabelList->max_length )
        goto LABEL_55;
      v19 = tdSpeedRangeLabelList->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12074/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0LL);
      if ( !v19 )
        goto LABEL_15;
      UIRangeLabel__Set(v19, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      v20 = this->fields.tdSpeedRangeLabelList;
      if ( !v20 )
        goto LABEL_15;
      if ( v20->max_length <= 1 )
LABEL_55:
        sub_1C2209C(gameObject, v8);
      v21 = v20->m_Items[1];
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12075/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0LL);
      if ( !v21 )
        goto LABEL_15;
      UIRangeLabel__Set(v21, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UIWidget__set_height((UIWidget_o *)gameObject, 20, 0LL);
      explanationLabel = this->fields.explanationLabel;
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12076/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0LL);
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
      v23 = &StringLiteral_20876/*"img_txt_battlevoice"*/;
    }
    else
    {
      if ( (_DWORD)gameObject != 16 )
        goto LABEL_53;
      v9 = this->fields.tdSpeedRangeLabelList;
      if ( !v9 )
        goto LABEL_15;
      v10 = 0LL;
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
        gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v10, v8);
        if ( v12 )
        {
          UIRangeLabel__Set(v12, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
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
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12154/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
      if ( !v24 )
        goto LABEL_15;
      UILabel__set_text(v24, (System_String_o *)gameObject, 0LL);
      gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      }
      baseSprite = this->fields.baseSprite;
      if ( !baseSprite )
        goto LABEL_15;
      v26 = *(_DWORD *)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + 8LL);
      v27 = (float)(v26 - baseSprite->fields.mHeight) * 0.5;
      UIWidget__set_height((UIWidget_o *)this->fields.baseSprite, v26, 0LL);
      titleBase = this->fields.titleBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(titleBase, LocalPositionY + v27, 0LL);
      buttonBase = this->fields.buttonBase;
      v31 = GameObjectExtensions__GetLocalPositionY(buttonBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(buttonBase, v27 + v31, 0LL);
      collider = this->fields.collider;
      if ( !collider )
        goto LABEL_15;
      size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
      gameObject = (UICommonButton_o *)this->fields.collider;
      if ( !gameObject )
        goto LABEL_15;
      v34 = *(float *)&size;
      TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v37 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0LL);
      v37.fields.y = (float)TD_SPEED_BASE_SPRITE_HEIGHT;
      v37.fields.x = v34;
      UnityEngine_BoxCollider__set_size(collider, v37, 0LL);
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
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v36,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
        0LL);
      gameObject = (UICommonButton_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v23 = &StringLiteral_20937/*"img_txt_npspeed"*/;
    }
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v23, 0LL);
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
    sub_1C22094(gameObject, v8);
  }
}