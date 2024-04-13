void __fastcall ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  ServantStatusListViewItemDrawButton_c *v16; // x8
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x19
  __int64 v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x0

  if ( (byte_42ED35A & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusListViewItemDrawButton_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_12188/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_12186/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12182/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v13, v14, v15);
    byte_42ED35A = 1;
  }
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH = 120;
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 70;
  v16 = ServantStatusListViewItemDrawButton_TypeInfo;
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y = -46.0;
  v16->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v17 = sub_B5D5DC(string___TypeInfo, 3LL);
  if ( !v17 )
    sub_B5D69C(0LL, v18);
  v25 = (System_Int32_array **)v17;
  v26 = StringLiteral_12186/*"SERVANT_STATUS_TD_SPEED_FREE"*/;
  if ( StringLiteral_12186/*"SERVANT_STATUS_TD_SPEED_FREE"*/ )
  {
    v26 = sub_B5D684(StringLiteral_12186/*"SERVANT_STATUS_TD_SPEED_FREE"*/, *(_QWORD *)&(*v25)->m_Items[9]);
    if ( !v26 )
      goto LABEL_21;
    v27 = (System_Int32_array **)StringLiteral_12186/*"SERVANT_STATUS_TD_SPEED_FREE"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !*((_DWORD *)v25 + 6) )
    goto LABEL_20;
  v25[4] = (System_Int32_array *)v27;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 4), v27, v19, v20, v21, v22, v23, v24);
  v26 = StringLiteral_12182/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/;
  if ( StringLiteral_12182/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/ )
  {
    v26 = sub_B5D684(StringLiteral_12182/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, *(_QWORD *)&(*v25)->m_Items[9]);
    if ( !v26 )
      goto LABEL_21;
    v34 = (System_Int32_array **)StringLiteral_12182/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v25 + 6) <= 1u )
    goto LABEL_20;
  v25[5] = (System_Int32_array *)v34;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 5), v34, v28, v29, v30, v31, v32, v33);
  v26 = StringLiteral_12188/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
  if ( StringLiteral_12188/*"SERVANT_STATUS_TD_SPEED_TWICE"*/ )
  {
    v26 = sub_B5D684(StringLiteral_12188/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, *(_QWORD *)&(*v25)->m_Items[9]);
    if ( v26 )
    {
      v41 = (System_Int32_array **)StringLiteral_12188/*"SERVANT_STATUS_TD_SPEED_TWICE"*/;
      goto LABEL_18;
    }
LABEL_21:
    v50 = sub_B5D6BC(v26);
    sub_B5D668(v50, 0LL);
  }
  v41 = 0LL;
LABEL_18:
  if ( *((_DWORD *)v25 + 6) <= 2u )
  {
LABEL_20:
    v49 = sub_B5D6C8(v26);
    sub_B5D668(v49, 0LL);
  }
  v25[6] = (System_Int32_array *)v41;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 6), v41, v35, v36, v37, v38, v39, v40);
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  static_fields->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->TD_SPEED_LOCALIZATION_KEYS,
    v25,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantStatusListViewItemDrawButton_c *v11; // x0
  struct System_String_array *TD_SPEED_LOCALIZATION_KEYS; // x8
  System_String_o *v13; // x19
  __int64 v15; // x0

  if ( (byte_42ED358 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusListViewItemDrawButton_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&string_TypeInfo, v8, v9, v10);
    byte_42ED358 = 1;
  }
  v11 = ServantStatusListViewItemDrawButton_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    v11 = ServantStatusListViewItemDrawButton_TypeInfo;
  }
  TD_SPEED_LOCALIZATION_KEYS = v11->static_fields->TD_SPEED_LOCALIZATION_KEYS;
  if ( !TD_SPEED_LOCALIZATION_KEYS )
    goto LABEL_17;
  if ( (signed int)TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    return string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_17:
      sub_B5D69C(v11, method);
  }
  if ( TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
  {
    v15 = sub_B5D6C8(v11);
    sub_B5D668(v15, 0LL);
  }
  v13 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v13, 0LL);
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
    sub_B5D69C(v4, v5);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_String_o *TDSpeedLocalization; // x0
  const MethodInfo *v29; // x1
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  struct UISprite_array *v31; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *v33; // x8
  UnityEngine_GameObject_o *v34; // x0
  struct UICommonButton_array *v35; // x8
  UIRangeLabel_o *v36; // x20
  struct UICommonButton_array *v37; // x8
  UIRangeLabel_o *v38; // x20
  UILabel_o *tdSpeedRangeLabelList; // x20
  int32_t *p_kind; // x19
  System_String_o *v41; // t1
  struct UICommonButton_array *tdSpeedButtonList; // x8
  __int64 v43; // x20
  int max_length; // w9
  UIRangeLabel_o *v45; // x21
  __int64 v46; // x0

  if ( (byte_42ED359 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&ServantStatusListViewItemDrawButton_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_12107/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19972/*"img_txt_npspeed"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12109/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_19911/*"img_txt_battlevoice"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_12187/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12108/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, v25, v26, v27);
    byte_42ED359 = 1;
  }
  ServantStatusListViewItemDrawButtonsBase__SetItem(
    (ServantStatusListViewItemDrawButtonsBase_o *)this,
    item,
    mode,
    method);
  if ( item && mode )
  {
    TDSpeedLocalization = (System_String_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer))this->klass->vtable._4_GetKind.method)(
                                               this,
                                               this->klass->vtable._5_SetItem.methodPtr);
    if ( (_DWORD)TDSpeedLocalization == 16 )
    {
      tdSpeedButtonList = this->fields.tdSpeedButtonList;
      if ( !tdSpeedButtonList )
        goto LABEL_41;
      v43 = 0LL;
      while ( 1 )
      {
        max_length = tdSpeedButtonList->max_length;
        if ( (int)v43 >= max_length )
          JUMPOUT(0x20C6F54LL);
        if ( (unsigned int)v43 >= max_length )
          break;
        v45 = (UIRangeLabel_o *)tdSpeedButtonList->m_Items[v43];
        if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        }
        TDSpeedLocalization = ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v43, v29);
        if ( v45 )
        {
          UIRangeLabel__Set(v45, TDSpeedLocalization, 0LL, 1, 0, 0LL);
          tdSpeedButtonList = this->fields.tdSpeedButtonList;
          ++v43;
          if ( tdSpeedButtonList )
            continue;
        }
        goto LABEL_41;
      }
    }
    else
    {
      if ( (_DWORD)TDSpeedLocalization != 17 )
      {
        p_kind = &this->fields.kind;
LABEL_44:
        TDSpeedLocalization = *(System_String_o **)p_kind;
        if ( *(_QWORD *)p_kind )
        {
          ((void (__fastcall *)(System_String_o *, void *))TDSpeedLocalization->klass[1]._1.typeMetadataHandle)(
            TDSpeedLocalization,
            TDSpeedLocalization->klass[1]._1.interopData);
          return;
        }
LABEL_41:
        sub_B5D69C(TDSpeedLocalization, v29);
      }
      tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
      if ( !tdSpeedButtonSpriteList )
        goto LABEL_41;
      if ( tdSpeedButtonSpriteList->max_length > 2 )
      {
        TDSpeedLocalization = (System_String_o *)tdSpeedButtonSpriteList->m_Items[2];
        if ( !TDSpeedLocalization )
          goto LABEL_41;
        TDSpeedLocalization = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)TDSpeedLocalization,
                                                   0LL);
        if ( !TDSpeedLocalization )
          goto LABEL_41;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TDSpeedLocalization, 0, 0LL);
        v31 = this->fields.tdSpeedButtonSpriteList;
        if ( !v31 )
          goto LABEL_41;
        if ( v31->max_length )
        {
          TDSpeedLocalization = (System_String_o *)v31->m_Items[0];
          if ( !TDSpeedLocalization )
            goto LABEL_41;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TDSpeedLocalization, 0LL);
          GameObjectExtensions__SetLocalPositionX(gameObject, 95.0, 0LL);
          v33 = this->fields.tdSpeedButtonSpriteList;
          if ( !v33 )
            goto LABEL_41;
          if ( v33->max_length > 1 )
          {
            TDSpeedLocalization = (System_String_o *)v33->m_Items[1];
            if ( !TDSpeedLocalization )
              goto LABEL_41;
            v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TDSpeedLocalization, 0LL);
            GameObjectExtensions__SetLocalPositionX(v34, -95.0, 0LL);
            v35 = this->fields.tdSpeedButtonList;
            if ( !v35 )
              goto LABEL_41;
            if ( v35->max_length )
            {
              v36 = (UIRangeLabel_o *)v35->m_Items[0];
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              TDSpeedLocalization = LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SERVANT_STATUS_BATTLE_VOICE_AFTER"*/, 0LL);
              if ( !v36 )
                goto LABEL_41;
              UIRangeLabel__Set(v36, TDSpeedLocalization, 0LL, 1, 0, 0LL);
              v37 = this->fields.tdSpeedButtonList;
              if ( !v37 )
                goto LABEL_41;
              if ( v37->max_length > 1 )
              {
                v38 = (UIRangeLabel_o *)v37->m_Items[1];
                TDSpeedLocalization = LocalizationManager__Get((System_String_o *)StringLiteral_12108/*"SERVANT_STATUS_BATTLE_VOICE_BEFORE"*/, 0LL);
                if ( !v38 )
                  goto LABEL_41;
                UIRangeLabel__Set(v38, TDSpeedLocalization, 0LL, 1, 0, 0LL);
                TDSpeedLocalization = (System_String_o *)this->fields.tdSpeedRangeLabelList;
                if ( !TDSpeedLocalization )
                  goto LABEL_41;
                UIWidget__set_height((UIWidget_o *)TDSpeedLocalization, 20, 0LL);
                tdSpeedRangeLabelList = (UILabel_o *)this->fields.tdSpeedRangeLabelList;
                TDSpeedLocalization = LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SERVANT_STATUS_BATTLE_VOICE_MESSAGE"*/, 0LL);
                if ( !tdSpeedRangeLabelList )
                  goto LABEL_41;
                UILabel__set_text(tdSpeedRangeLabelList, TDSpeedLocalization, 0LL);
                TDSpeedLocalization = (System_String_o *)this->fields.tdSpeedRangeLabelList;
                if ( !TDSpeedLocalization )
                  goto LABEL_41;
                UILabel__SetCondensedScale((UILabel_o *)TDSpeedLocalization, 560, 0LL);
                v41 = *(System_String_o **)&this->fields.kind;
                p_kind = &this->fields.kind;
                TDSpeedLocalization = v41;
                if ( !v41 )
                  goto LABEL_41;
                UISprite__set_spriteName((UISprite_o *)TDSpeedLocalization, (System_String_o *)StringLiteral_19911/*"img_txt_battlevoice"*/, 0LL);
                goto LABEL_44;
              }
            }
          }
        }
      }
    }
    v46 = sub_B5D6C8(TDSpeedLocalization);
    sub_B5D668(v46, 0LL);
  }
}