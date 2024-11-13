void __fastcall ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x8
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x19
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct ServantStatusListViewItemDrawButton_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B131ED & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawButton_TypeInfo, v1, v2);
    sub_1BCA7E0(&string___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_12074/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_12072/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_12068/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v9, v10);
    byte_4B131ED = 1;
  }
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 0xC238000000000046LL;
  static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v12 = sub_1BCA888(string___TypeInfo, 3LL);
  if ( !v12 )
    sub_1BCAA3C(0LL, v13);
  v20 = v12;
  if ( !*(_DWORD *)(v12 + 24)
    || (v21 = StringLiteral_12072/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        *(_QWORD *)(v12 + 32) = StringLiteral_12072/*"SERVANT_STATUS_TD_SPEED_FREE"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 32), v21, v14, v15, v16, v17, v18, v19),
        *(_DWORD *)(v20 + 24) <= 1u)
    || (v28 = StringLiteral_12068/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        *(_QWORD *)(v20 + 40) = StringLiteral_12068/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 40), v28, v22, v23, v24, v25, v26, v27),
        *(_DWORD *)(v20 + 24) <= 2u) )
  {
    sub_1BCAA44(v12, v13);
  }
  v35 = StringLiteral_12074/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  *(_QWORD *)(v20 + 48) = StringLiteral_12074/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 48), v35, v29, v30, v31, v32, v33, v34);
  v36 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  v36->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&v36->TD_SPEED_LOCALIZATION_KEYS, v20, v37, v38, v39, v40, v41, v42);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ServantStatusListViewItemDrawButton_c *v8; // x0
  struct System_String_array *TD_SPEED_LOCALIZATION_KEYS; // x8
  System_String_o *v10; // x19

  if ( (byte_4B131EB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantStatusListViewItemDrawButton_TypeInfo, v4, v5);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    byte_4B131EB = 1;
  }
  v8 = ServantStatusListViewItemDrawButton_TypeInfo;
  if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, method);
    v8 = ServantStatusListViewItemDrawButton_TypeInfo;
  }
  TD_SPEED_LOCALIZATION_KEYS = v8->static_fields->TD_SPEED_LOCALIZATION_KEYS;
  if ( !TD_SPEED_LOCALIZATION_KEYS )
    goto LABEL_14;
  if ( (signed int)TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    return string_TypeInfo->static_fields->Empty;
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, method);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_14:
      sub_1BCAA3C(v8, method);
  }
  if ( TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    sub_1BCAA44(v8, method);
  v10 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  return LocalizationManager__Get(v10, 0LL);
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
      sub_1BCAA3C(v4, v5);
    }
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawButton__SetItem(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UICommonButton_o *gameObject; // x0
  const MethodInfo *v22; // x1
  struct UIRangeLabel_array *v23; // x8
  __int64 v24; // x20
  int max_length; // w9
  UIRangeLabel_o *v26; // x21
  struct UICommonButton_array *tdSpeedButtonList; // x8
  struct UICommonButton_array *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  struct UICommonButton_array *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  struct UIRangeLabel_array *tdSpeedRangeLabelList; // x8
  UIRangeLabel_o *v33; // x20
  struct UIRangeLabel_array *v34; // x8
  UIRangeLabel_o *v35; // x20
  UILabel_o *explanationLabel; // x20
  __int64 *v37; // x8
  UILabel_o *v38; // x20
  struct UISprite_o *baseSprite; // x8
  int32_t v40; // w1
  float v41; // s8
  UnityEngine_GameObject_o *titleBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *buttonBase; // x20
  float v45; // s0
  UnityEngine_BoxCollider_o *collider; // x20
  unsigned int size; // s0
  float v48; // s8
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // s9
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B131EC & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&ServantStatusListViewItemDrawButton_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_11993/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20787/*"img_txt_npspeed"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11995/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20726/*"img_txt_battlevoice"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11994/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, v19, v20);
    byte_4B131EC = 1;
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
      v28 = this->fields.tdSpeedButtonList;
      if ( !v28 )
        goto LABEL_15;
      if ( !v28->max_length )
        goto LABEL_55;
      gameObject = v28->m_Items[0];
      if ( !gameObject )
        goto LABEL_15;
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v29, 95.0, 0LL);
      v30 = this->fields.tdSpeedButtonList;
      if ( !v30 )
        goto LABEL_15;
      if ( v30->max_length <= 1 )
        goto LABEL_55;
      gameObject = v30->m_Items[1];
      if ( !gameObject )
        goto LABEL_15;
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionX(v31, -95.0, 0LL);
      tdSpeedRangeLabelList = this->fields.tdSpeedRangeLabelList;
      if ( !tdSpeedRangeLabelList )
        goto LABEL_15;
      if ( !tdSpeedRangeLabelList->max_length )
        goto LABEL_55;
      v33 = tdSpeedRangeLabelList->m_Items[0];
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11993/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0LL);
      if ( !v33 )
        goto LABEL_15;
      UIRangeLabel__Set(v33, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      v34 = this->fields.tdSpeedRangeLabelList;
      if ( !v34 )
        goto LABEL_15;
      if ( v34->max_length <= 1 )
LABEL_55:
        sub_1BCAA44(gameObject, v22);
      v35 = v34->m_Items[1];
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0LL);
      if ( !v35 )
        goto LABEL_15;
      UIRangeLabel__Set(v35, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
      gameObject = (UICommonButton_o *)this->fields.explanationLabel;
      if ( !gameObject )
        goto LABEL_15;
      UIWidget__set_height((UIWidget_o *)gameObject, 20, 0LL);
      explanationLabel = this->fields.explanationLabel;
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0LL);
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
      v37 = &StringLiteral_20726/*"img_txt_battlevoice"*/;
    }
    else
    {
      if ( (_DWORD)gameObject != 16 )
        goto LABEL_53;
      v23 = this->fields.tdSpeedRangeLabelList;
      if ( !v23 )
        goto LABEL_15;
      v24 = 0LL;
      while ( 1 )
      {
        max_length = v23->max_length;
        if ( (int)v24 >= max_length )
          break;
        if ( (unsigned int)v24 >= max_length )
          goto LABEL_55;
        v26 = v23->m_Items[v24];
        if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v22);
        gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v24, v22);
        if ( v26 )
        {
          UIRangeLabel__Set(v26, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
          v23 = this->fields.tdSpeedRangeLabelList;
          ++v24;
          if ( v23 )
            continue;
        }
        goto LABEL_15;
      }
      v38 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
      gameObject = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
      if ( !v38 )
        goto LABEL_15;
      UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
      gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      if ( !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo, v22);
        gameObject = (UICommonButton_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      }
      baseSprite = this->fields.baseSprite;
      if ( !baseSprite )
        goto LABEL_15;
      v40 = *(_DWORD *)(*(_QWORD *)&gameObject[1].fields.specifyHoverColor.fields.b + 8LL);
      v41 = (float)(v40 - baseSprite->fields.mHeight) * 0.5;
      UIWidget__set_height((UIWidget_o *)this->fields.baseSprite, v40, 0LL);
      titleBase = this->fields.titleBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(titleBase, LocalPositionY + v41, 0LL);
      buttonBase = this->fields.buttonBase;
      v45 = GameObjectExtensions__GetLocalPositionY(buttonBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(buttonBase, v41 + v45, 0LL);
      collider = this->fields.collider;
      if ( !collider )
        goto LABEL_15;
      size = (unsigned int)UnityEngine_BoxCollider__get_size(this->fields.collider, 0LL);
      gameObject = (UICommonButton_o *)this->fields.collider;
      if ( !gameObject )
        goto LABEL_15;
      v48 = *(float *)&size;
      TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v51 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0LL);
      v51.fields.y = (float)TD_SPEED_BASE_SPRITE_HEIGHT;
      v51.fields.x = v48;
      UnityEngine_BoxCollider__set_size(collider, v51, 0LL);
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
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        v50,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
        0LL);
      gameObject = (UICommonButton_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_15;
      v37 = &StringLiteral_20787/*"img_txt_npspeed"*/;
    }
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v37, 0LL);
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
    sub_1BCAA3C(gameObject, v22);
  }
}