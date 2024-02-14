void __fastcall ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ServantStatusListViewItemDrawButton_c *v6; // x8
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x19
  __int64 v15; // x0
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x0

  if ( (byte_4219D64 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawButton_TypeInfo, v1);
    sub_B0D8A4(&string___TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_12079/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v3);
    sub_B0D8A4(&StringLiteral_12077/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v4);
    sub_B0D8A4(&StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v5);
    byte_4219D64 = 1;
  }
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH = 120;
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 70;
  v6 = ServantStatusListViewItemDrawButton_TypeInfo;
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y = -46.0;
  v6->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v7 = sub_B0D8BC(string___TypeInfo, 3LL);
  if ( !v7 )
    sub_B0D97C(0LL);
  v14 = (System_Int32_array **)v7;
  v15 = StringLiteral_12077/*"SERVANT_STATUS_TD_SPEED_FREE"*/;
  if ( StringLiteral_12077/*"SERVANT_STATUS_TD_SPEED_FREE"*/ )
  {
    v15 = sub_B0D964(StringLiteral_12077/*"SERVANT_STATUS_TD_SPEED_FREE"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_21;
    v16 = (System_Int32_array **)StringLiteral_12077/*"SERVANT_STATUS_TD_SPEED_FREE"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !*((_DWORD *)v14 + 6) )
    goto LABEL_20;
  v14[4] = (System_Int32_array *)v16;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 4), v16, v8, v9, v10, v11, v12, v13);
  v15 = StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/;
  if ( StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/ )
  {
    v15 = sub_B0D964(StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_21;
    v23 = (System_Int32_array **)StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( *((_DWORD *)v14 + 6) <= 1u )
    goto LABEL_20;
  v14[5] = (System_Int32_array *)v23;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 5), v23, v17, v18, v19, v20, v21, v22);
  v15 = StringLiteral_12079/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  if ( StringLiteral_12079/*"SERVANT_STATUS_TD_SPEED_TWICE"*/ )
  {
    v15 = sub_B0D964(StringLiteral_12079/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( v15 )
    {
      v30 = (System_Int32_array **)StringLiteral_12079/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
      goto LABEL_18;
    }
LABEL_21:
    v39 = sub_B0D99C(v15);
    sub_B0D948(v39, 0LL);
  }
  v30 = 0LL;
LABEL_18:
  if ( *((_DWORD *)v14 + 6) <= 2u )
  {
LABEL_20:
    v38 = sub_B0D9A8(v15);
    sub_B0D948(v38, 0LL);
  }
  v14[6] = (System_Int32_array *)v30;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 6), v30, v24, v25, v26, v27, v28, v29);
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  static_fields->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->TD_SPEED_LOCALIZATION_KEYS,
    v14,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  __int64 v9; // x0

  if ( (byte_4219D62 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&ServantStatusListViewItemDrawButton_TypeInfo, v3);
    sub_B0D8A4(&string_TypeInfo, v4);
    byte_4219D62 = 1;
  }
  v5 = ServantStatusListViewItemDrawButton_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    v5 = ServantStatusListViewItemDrawButton_TypeInfo;
  }
  TD_SPEED_LOCALIZATION_KEYS = v5->static_fields->TD_SPEED_LOCALIZATION_KEYS;
  if ( !TD_SPEED_LOCALIZATION_KEYS )
    goto LABEL_17;
  if ( (signed int)TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    return string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_17:
      sub_B0D97C(v5);
  }
  if ( TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
  {
    v9 = sub_B0D9A8(v5);
    sub_B0D948(v9, 0LL);
  }
  v7 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v7, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawButton__Selected(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x0
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
    sub_B0D97C(v4);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UISprite_o *TDSpeedLocalization; // x0
  const MethodInfo *v15; // x1
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  struct UISprite_array *v17; // x8
  UnityEngine_GameObject_o *v18; // x0
  struct UISprite_array *v19; // x8
  UnityEngine_GameObject_o *v20; // x0
  struct UICommonButton_array *v21; // x8
  UIRangeLabel_o *v22; // x20
  struct UICommonButton_array *v23; // x8
  UIRangeLabel_o *v24; // x20
  UILabel_o *v25; // x20
  int32_t *p_kind; // x19
  UISprite_o *v27; // t1
  __int64 *v28; // x8
  struct UICommonButton_array *tdSpeedButtonList; // x8
  __int64 v30; // x20
  int max_length; // w9
  UIRangeLabel_o *v32; // x21
  UILabel_o *tdSpeedRangeLabelList; // x20
  struct UILabel_o *explanationLabel; // x8
  int32_t monitor_high; // w1
  float v36; // s8
  UnityEngine_GameObject_o *buttonBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *baseSprite; // x20
  float v40; // s0
  struct UnityEngine_GameObject_o *titleBase; // x20
  unsigned int size; // s0
  float v43; // s8
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v46; // t1
  __int64 v47; // x0
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4219D63 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&ServantStatusListViewItemDrawButton_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_11995/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, v8);
    sub_B0D8A4(&StringLiteral_19785/*"img_txt_npspeed"*/, v9);
    sub_B0D8A4(&StringLiteral_11997/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, v10);
    sub_B0D8A4(&StringLiteral_19724/*"img_txt_battlevoice"*/, v11);
    sub_B0D8A4(&StringLiteral_12078/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v12);
    sub_B0D8A4(&StringLiteral_11996/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, v13);
    byte_4219D63 = 1;
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
      v30 = 0LL;
      while ( 1 )
      {
        max_length = tdSpeedButtonList->max_length;
        if ( (int)v30 >= max_length )
          break;
        if ( (unsigned int)v30 >= max_length )
          goto LABEL_60;
        v32 = (UIRangeLabel_o *)tdSpeedButtonList->m_Items[v30];
        if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        }
        TDSpeedLocalization = (UISprite_o *)ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v30, v15);
        if ( v32 )
        {
          UIRangeLabel__Set(v32, (System_String_o *)TDSpeedLocalization, 0LL, 1, 0, 0LL);
          tdSpeedButtonList = this->fields.tdSpeedButtonList;
          ++v30;
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
      TDSpeedLocalization = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12078/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
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
      v36 = (float)(monitor_high - explanationLabel->fields.mHeight) * 0.5;
      UIWidget__set_height((UIWidget_o *)this->fields.explanationLabel, monitor_high, 0LL);
      buttonBase = this->fields.buttonBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(buttonBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(buttonBase, LocalPositionY + v36, 0LL);
      baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
      v40 = GameObjectExtensions__GetLocalPositionY(baseSprite, 0LL);
      GameObjectExtensions__SetLocalPositionY(baseSprite, v36 + v40, 0LL);
      titleBase = this->fields.titleBase;
      if ( !titleBase )
        goto LABEL_41;
      size = (unsigned int)UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this->fields.titleBase, 0LL);
      TDSpeedLocalization = (UISprite_o *)this->fields.titleBase;
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      v43 = *(float *)&size;
      TD_SPEED_BASE_SPRITE_HEIGHT = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v48 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)TDSpeedLocalization, 0LL);
      v48.fields.y = (float)TD_SPEED_BASE_SPRITE_HEIGHT;
      v48.fields.x = v43;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleBase, v48, 0LL);
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
      v46 = *(UISprite_o **)&this->fields.kind;
      p_kind = &this->fields.kind;
      TDSpeedLocalization = v46;
      if ( !v46 )
        goto LABEL_41;
      v28 = &StringLiteral_19785/*"img_txt_npspeed"*/;
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
      v17 = this->fields.tdSpeedButtonSpriteList;
      if ( !v17 )
        goto LABEL_41;
      if ( !v17->max_length )
        goto LABEL_60;
      TDSpeedLocalization = v17->m_Items[0];
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TDSpeedLocalization, 0LL);
      GameObjectExtensions__SetLocalPositionX(v18, 95.0, 0LL);
      v19 = this->fields.tdSpeedButtonSpriteList;
      if ( !v19 )
        goto LABEL_41;
      if ( v19->max_length <= 1 )
        goto LABEL_60;
      TDSpeedLocalization = v19->m_Items[1];
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TDSpeedLocalization, 0LL);
      GameObjectExtensions__SetLocalPositionX(v20, -95.0, 0LL);
      v21 = this->fields.tdSpeedButtonList;
      if ( !v21 )
        goto LABEL_41;
      if ( !v21->max_length )
        goto LABEL_60;
      v22 = (UIRangeLabel_o *)v21->m_Items[0];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      TDSpeedLocalization = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0LL);
      if ( !v22 )
        goto LABEL_41;
      UIRangeLabel__Set(v22, (System_String_o *)TDSpeedLocalization, 0LL, 1, 0, 0LL);
      v23 = this->fields.tdSpeedButtonList;
      if ( !v23 )
        goto LABEL_41;
      if ( v23->max_length <= 1 )
      {
LABEL_60:
        v47 = sub_B0D9A8(TDSpeedLocalization);
        sub_B0D948(v47, 0LL);
      }
      v24 = (UIRangeLabel_o *)v23->m_Items[1];
      TDSpeedLocalization = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0LL);
      if ( !v24 )
        goto LABEL_41;
      UIRangeLabel__Set(v24, (System_String_o *)TDSpeedLocalization, 0LL, 1, 0, 0LL);
      TDSpeedLocalization = (UISprite_o *)this->fields.tdSpeedRangeLabelList;
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      UIWidget__set_height((UIWidget_o *)TDSpeedLocalization, 20, 0LL);
      v25 = (UILabel_o *)this->fields.tdSpeedRangeLabelList;
      TDSpeedLocalization = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0LL);
      if ( !v25 )
        goto LABEL_41;
      UILabel__set_text(v25, (System_String_o *)TDSpeedLocalization, 0LL);
      TDSpeedLocalization = (UISprite_o *)this->fields.tdSpeedRangeLabelList;
      if ( !TDSpeedLocalization )
        goto LABEL_41;
      UILabel__SetCondensedScale((UILabel_o *)TDSpeedLocalization, 560, 0LL);
      v27 = *(UISprite_o **)&this->fields.kind;
      p_kind = &this->fields.kind;
      TDSpeedLocalization = v27;
      if ( !v27 )
        goto LABEL_41;
      v28 = &StringLiteral_19724/*"img_txt_battlevoice"*/;
    }
    UISprite__set_spriteName(TDSpeedLocalization, (System_String_o *)*v28, 0LL);
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
    sub_B0D97C(TDSpeedLocalization);
  }
}