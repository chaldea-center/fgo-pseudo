void __fastcall ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  ServantStatusListViewItemDrawButton_c *v1; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x19
  __int64 v11; // x0
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0
  __int64 v35; // x0

  if ( (byte_439296E & 1) == 0 )
  {
    sub_B775C4(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_12273/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_B775C4(&StringLiteral_12271/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_B775C4(&StringLiteral_12267/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_439296E = 1;
  }
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH = 120;
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 70;
  v1 = ServantStatusListViewItemDrawButton_TypeInfo;
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y = -46.0;
  v1->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v2 = sub_B775DC(string___TypeInfo, 3LL);
  if ( !v2 )
    sub_B7769C(0LL, v3);
  v10 = (System_Int32_array **)v2;
  v11 = StringLiteral_12271/*"SERVANT_STATUS_TD_SPEED_FREE"*/;
  if ( StringLiteral_12271/*"SERVANT_STATUS_TD_SPEED_FREE"*/ )
  {
    v11 = sub_B77684(StringLiteral_12271/*"SERVANT_STATUS_TD_SPEED_FREE"*/, *(_QWORD *)&(*v10)->m_Items[9]);
    if ( !v11 )
      goto LABEL_21;
    v12 = (System_Int32_array **)StringLiteral_12271/*"SERVANT_STATUS_TD_SPEED_FREE"*/;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !*((_DWORD *)v10 + 6) )
    goto LABEL_20;
  v10[4] = (System_Int32_array *)v12;
  sub_B77560((BattleServantConfConponent_o *)(v10 + 4), v12, v4, v5, v6, v7, v8, v9);
  v11 = StringLiteral_12267/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/;
  if ( StringLiteral_12267/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/ )
  {
    v11 = sub_B77684(StringLiteral_12267/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, *(_QWORD *)&(*v10)->m_Items[9]);
    if ( !v11 )
      goto LABEL_21;
    v19 = (System_Int32_array **)StringLiteral_12267/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( *((_DWORD *)v10 + 6) <= 1u )
    goto LABEL_20;
  v10[5] = (System_Int32_array *)v19;
  sub_B77560((BattleServantConfConponent_o *)(v10 + 5), v19, v13, v14, v15, v16, v17, v18);
  v11 = StringLiteral_12273/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  if ( StringLiteral_12273/*"SERVANT_STATUS_TD_SPEED_TWICE"*/ )
  {
    v11 = sub_B77684(StringLiteral_12273/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, *(_QWORD *)&(*v10)->m_Items[9]);
    if ( v11 )
    {
      v26 = (System_Int32_array **)StringLiteral_12273/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
      goto LABEL_18;
    }
LABEL_21:
    v35 = sub_B776BC(v11);
    sub_B77668(v35, 0LL);
  }
  v26 = 0LL;
LABEL_18:
  if ( *((_DWORD *)v10 + 6) <= 2u )
  {
LABEL_20:
    v34 = sub_B776C8(v11);
    sub_B77668(v34, 0LL);
  }
  v10[6] = (System_Int32_array *)v26;
  sub_B77560((BattleServantConfConponent_o *)(v10 + 6), v26, v20, v21, v22, v23, v24, v25);
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  static_fields->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&static_fields->TD_SPEED_LOCALIZATION_KEYS,
    v10,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  __int64 v7; // x0

  if ( (byte_439296C & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    byte_439296C = 1;
  }
  v3 = ServantStatusListViewItemDrawButton_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    v3 = ServantStatusListViewItemDrawButton_TypeInfo;
  }
  TD_SPEED_LOCALIZATION_KEYS = v3->static_fields->TD_SPEED_LOCALIZATION_KEYS;
  if ( !TD_SPEED_LOCALIZATION_KEYS )
    goto LABEL_17;
  if ( (signed int)TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    return string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_17:
      sub_B7769C(v3, method);
  }
  if ( TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
  {
    v7 = sub_B776C8(v3);
    sub_B77668(v7, 0LL);
  }
  v5 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v5, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawButton__Selected(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t svtCommonFlag; // w8

  v4 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_GetKind.method)(
         this,
         this->klass->vtable._5_SetItem.methodPtr,
         method);
  if ( (_DWORD)v4 == 17 )
  {
    if ( item )
      return item->fields.changeVoiceFlag;
LABEL_11:
    sub_B7769C(v4, v5);
  }
  if ( (_DWORD)v4 != 16 )
    return 0;
  if ( !item )
    goto LABEL_11;
  svtCommonFlag = item->fields.svtCommonFlag;
  if ( (svtCommonFlag & 2) == 0 )
    return 0;
  if ( (~(svtCommonFlag << 29 >> 31) & 3) != 0 )
    return 1;
  else
    return 2;
}


void __fastcall ServantStatusListViewItemDrawButton__SetItem(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *TDSpeedLocalization; // x0
  const MethodInfo *v8; // x1
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  struct UISprite_array *v10; // x8
  UnityEngine_GameObject_o *v11; // x0
  struct UISprite_array *v12; // x8
  UnityEngine_GameObject_o *v13; // x0
  struct UICommonButton_array *v14; // x8
  UIRangeLabel_o *v15; // x20
  struct UICommonButton_array *v16; // x8
  UIRangeLabel_o *v17; // x20
  UILabel_o *v18; // x20
  int32_t *p_kind; // x19
  UISprite_o *v20; // t1
  __int64 *v21; // x8
  struct UICommonButton_array *tdSpeedButtonList; // x8
  __int64 v23; // x20
  int max_length; // w9
  UIRangeLabel_o *v25; // x21
  UILabel_o *tdSpeedRangeLabelList; // x20
  struct UILabel_o *explanationLabel; // x8
  int32_t monitor_high; // w1
  float v29; // s8
  UnityEngine_GameObject_o *buttonBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *baseSprite; // x20
  float v33; // s0
  struct UnityEngine_GameObject_o *titleBase; // x20
  unsigned int size; // s0
  float v36; // s8
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v39; // t1
  __int64 v40; // x0
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_439296D & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&ServantStatusListViewItemDrawButton_TypeInfo);
    sub_B775C4(&StringLiteral_12192/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/);
    sub_B775C4(&StringLiteral_20126/*"img_txt_npspeed"*/);
    sub_B775C4(&StringLiteral_12194/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/);
    sub_B775C4(&StringLiteral_20065/*"img_txt_battlevoice"*/);
    sub_B775C4(&StringLiteral_12272/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12193/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/);
    byte_439296D = 1;
  }
  ServantStatusListViewItemDrawButtonsBase__SetItem(
    (ServantStatusListViewItemDrawButtonsBase_o *)this,
    item,
    mode,
    method);
  if ( item && mode )
  {
    TDSpeedLocalization = (UISprite_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer))this->klass->vtable._4_GetKind.method)(
                                          this,
                                          this->klass->vtable._5_SetItem.methodPtr);
    if ( (_DWORD)TDSpeedLocalization == 16 )
    {
      tdSpeedButtonList = this->fields.tdSpeedButtonList;
      if ( !tdSpeedButtonList )
        goto LABEL_41;
      v23 = 0LL;
      while ( 1 )
      {
        max_length = tdSpeedButtonList->max_length;
        if ( (int)v23 >= max_length )
          break;
        if ( (unsigned int)v23 >= max_length )
          goto LABEL_60;
        v25 = (UIRangeLabel_o *)tdSpeedButtonList->m_Items[v23];
        if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        }
        TDSpeedLocalization = (UISprite_o *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v23, v8);
        if ( v25 )
        {
          UIRangeLabel__Set(v25, (System_String_o *)TDSpeedLocalization, 0LL, 1, 0, 0LL);
          tdSpeedButtonList = this->fields.tdSpeedButtonList;
          ++v23;
          if ( tdSpeedButtonList )
            continue;
        }
        goto LABEL_41;
      }
      tdSpeedRangeLabelList = (UILabel_o *)this->fields.tdSpeedRangeLabelList;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      TDSpeedLocalization = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12272/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
      if ( !tdSpeedRangeLabelList )
        goto LABEL_41;
      UILabel__set_text(tdSpeedRangeLabelList, (System_String_o *)TDSpeedLocalization, 0LL);
      TDSpeedLocalization = (UISprite_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        TDSpeedLocalization = (UISprite_o *)ServantStatusListViewItemDrawButton_TypeInfo;
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !explanationLabel )
        goto LABEL_41;
      monitor_high = HIDWORD(TDSpeedLocalization->fields.onPostFill->monitor);
      v29 = (float)(monitor_high - explanationLabel->fields.mHeight) * 0.5;
      UIWidget__set_height((UIWidget_o *)this->fields.explanationLabel, monitor_high, 0LL);
      buttonBase = this->fields.buttonBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(buttonBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(buttonBase, LocalPositionY + v29, 0LL);
      baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
      v33 = GameObjectExtensions__GetLocalPositionY(baseSprite, 0LL);
      GameObjectExtensions__SetLocalPositionY(baseSprite, v29 + v33, 0LL);
      titleBase = this->fields.titleBase;
      if ( !titleBase )
        goto LABEL_41;
      size = (unsigned int)UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this->fields.titleBase, 0LL);
      TDSpeedLocalization = (UISprite_o *)this->fields.titleBase;
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      v36 = *(float *)&size;
      TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v41 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)TDSpeedLocalization, 0LL);
      v41.fields.y = (float)TD_SPEED_BASE_SPRITE_HEIGHT;
      v41.fields.x = v36;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleBase, v41, 0LL);
      TDSpeedLocalization = (UISprite_o *)this->fields.tdSpeedRangeLabelList;
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      UIWidget__set_height(
        (UIWidget_o *)TDSpeedLocalization,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT,
        0LL);
      TDSpeedLocalization = (UISprite_o *)this->fields.tdSpeedRangeLabelList;
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TDSpeedLocalization, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        gameObject,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
        0LL);
      v39 = *(UISprite_o **)&this->fields.kind;
      p_kind = &this->fields.kind;
      TDSpeedLocalization = v39;
      if ( !v39 )
        goto LABEL_41;
      v21 = &StringLiteral_20126/*"img_txt_npspeed"*/;
    }
    else
    {
      if ( (_DWORD)TDSpeedLocalization != 17 )
      {
        p_kind = &this->fields.kind;
        goto LABEL_58;
      }
      tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
      if ( !tdSpeedButtonSpriteList )
        goto LABEL_41;
      if ( tdSpeedButtonSpriteList->max_length <= 2 )
        goto LABEL_60;
      TDSpeedLocalization = tdSpeedButtonSpriteList->m_Items[2];
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      TDSpeedLocalization = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)TDSpeedLocalization,
                                            0LL);
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TDSpeedLocalization, 0, 0LL);
      v10 = this->fields.tdSpeedButtonSpriteList;
      if ( !v10 )
        goto LABEL_41;
      if ( !v10->max_length )
        goto LABEL_60;
      TDSpeedLocalization = v10->m_Items[0];
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TDSpeedLocalization, 0LL);
      GameObjectExtensions__SetLocalPositionX(v11, 95.0, 0LL);
      v12 = this->fields.tdSpeedButtonSpriteList;
      if ( !v12 )
        goto LABEL_41;
      if ( v12->max_length <= 1 )
        goto LABEL_60;
      TDSpeedLocalization = v12->m_Items[1];
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TDSpeedLocalization, 0LL);
      GameObjectExtensions__SetLocalPositionX(v13, -95.0, 0LL);
      v14 = this->fields.tdSpeedButtonList;
      if ( !v14 )
        goto LABEL_41;
      if ( !v14->max_length )
        goto LABEL_60;
      v15 = (UIRangeLabel_o *)v14->m_Items[0];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      TDSpeedLocalization = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12192/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0LL);
      if ( !v15 )
        goto LABEL_41;
      UIRangeLabel__Set(v15, (System_String_o *)TDSpeedLocalization, 0LL, 1, 0, 0LL);
      v16 = this->fields.tdSpeedButtonList;
      if ( !v16 )
        goto LABEL_41;
      if ( v16->max_length <= 1 )
      {
LABEL_60:
        v40 = sub_B776C8(TDSpeedLocalization);
        sub_B77668(v40, 0LL);
      }
      v17 = (UIRangeLabel_o *)v16->m_Items[1];
      TDSpeedLocalization = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12193/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0LL);
      if ( !v17 )
        goto LABEL_41;
      UIRangeLabel__Set(v17, (System_String_o *)TDSpeedLocalization, 0LL, 1, 0, 0LL);
      TDSpeedLocalization = (UISprite_o *)this->fields.tdSpeedRangeLabelList;
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      UIWidget__set_height((UIWidget_o *)TDSpeedLocalization, 20, 0LL);
      v18 = (UILabel_o *)this->fields.tdSpeedRangeLabelList;
      TDSpeedLocalization = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12194/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0LL);
      if ( !v18 )
        goto LABEL_41;
      UILabel__set_text(v18, (System_String_o *)TDSpeedLocalization, 0LL);
      TDSpeedLocalization = (UISprite_o *)this->fields.tdSpeedRangeLabelList;
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      UILabel__SetCondensedScale((UILabel_o *)TDSpeedLocalization, 560, 0LL);
      v20 = *(UISprite_o **)&this->fields.kind;
      p_kind = &this->fields.kind;
      TDSpeedLocalization = v20;
      if ( !v20 )
        goto LABEL_41;
      v21 = &StringLiteral_20065/*"img_txt_battlevoice"*/;
    }
    UISprite__set_spriteName(TDSpeedLocalization, (System_String_o *)*v21, 0LL);
LABEL_58:
    TDSpeedLocalization = *(UISprite_o **)p_kind;
    if ( *(_QWORD *)p_kind )
    {
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))TDSpeedLocalization->klass->vtable._33_MakePixelPerfect.method)(
        TDSpeedLocalization,
        TDSpeedLocalization->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_41:
    sub_B7769C(TDSpeedLocalization, v8);
  }
}