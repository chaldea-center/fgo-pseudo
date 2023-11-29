void __fastcall ServantStatusListViewItemDrawButton___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusListViewItemDrawButton_c *v7; // x8
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x19
  __int64 v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ServantStatusListViewItemDrawButton_StaticFields *static_fields; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40FDE88 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusListViewItemDrawButton_TypeInfo, v1);
    sub_B16FFC(&string___TypeInfo, v3);
    sub_B16FFC(&StringLiteral_11991, v4);
    sub_B16FFC(&StringLiteral_11989, v5);
    sub_B16FFC(&StringLiteral_11985, v6);
    byte_40FDE88 = 1;
  }
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TITLE_LABEL_BASE_WIDTH = 120;
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT = 70;
  v7 = ServantStatusListViewItemDrawButton_TypeInfo;
  ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y = -46.0;
  v7->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT = 184;
  v8 = sub_B17014(string___TypeInfo, 3LL, v2);
  if ( !v8 )
    sub_B170D4();
  v15 = (System_Int32_array **)v8;
  v16 = StringLiteral_11989;
  if ( StringLiteral_11989 )
  {
    v16 = sub_B170BC(StringLiteral_11989, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( !v16 )
      goto LABEL_21;
    v17 = (System_Int32_array **)StringLiteral_11989;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !*((_DWORD *)v15 + 6) )
    goto LABEL_20;
  v15[4] = (System_Int32_array *)v17;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 4), v17, v9, v10, v11, v12, v13, v14);
  v16 = StringLiteral_11985;
  if ( StringLiteral_11985 )
  {
    v16 = sub_B170BC(StringLiteral_11985, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( !v16 )
      goto LABEL_21;
    v17 = (System_Int32_array **)StringLiteral_11985;
  }
  else
  {
    v17 = 0LL;
  }
  if ( *((_DWORD *)v15 + 6) <= 1u )
    goto LABEL_20;
  v15[5] = (System_Int32_array *)v17;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 5), v17, v9, v18, v19, v20, v21, v22);
  v16 = StringLiteral_11991;
  if ( StringLiteral_11991 )
  {
    v16 = sub_B170BC(StringLiteral_11991, *(_QWORD *)&(*v15)->m_Items[9]);
    if ( v16 )
    {
      v17 = (System_Int32_array **)StringLiteral_11991;
      goto LABEL_18;
    }
LABEL_21:
    sub_B170F4(v16);
    sub_B170A0();
  }
  v17 = 0LL;
LABEL_18:
  if ( *((_DWORD *)v15 + 6) <= 2u )
  {
LABEL_20:
    sub_B17100(v16, v17, v9);
    sub_B170A0();
  }
  v15[6] = (System_Int32_array *)v17;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 6), v17, v9, v23, v24, v25, v26, v27);
  static_fields = ServantStatusListViewItemDrawButton_TypeInfo->static_fields;
  static_fields->TD_SPEED_LOCALIZATION_KEYS = (struct System_String_array *)v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->TD_SPEED_LOCALIZATION_KEYS,
    v15,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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

  if ( (byte_40FDE86 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&ServantStatusListViewItemDrawButton_TypeInfo, v4);
    sub_B16FFC(&string_TypeInfo, v5);
    byte_40FDE86 = 1;
  }
  v6 = ServantStatusListViewItemDrawButton_TypeInfo;
  if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
    v6 = ServantStatusListViewItemDrawButton_TypeInfo;
  }
  TD_SPEED_LOCALIZATION_KEYS = v6->static_fields->TD_SPEED_LOCALIZATION_KEYS;
  if ( !TD_SPEED_LOCALIZATION_KEYS )
    goto LABEL_17;
  if ( (signed int)TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
    return string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    TD_SPEED_LOCALIZATION_KEYS = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_LOCALIZATION_KEYS;
    if ( !TD_SPEED_LOCALIZATION_KEYS )
LABEL_17:
      sub_B170D4();
  }
  if ( TD_SPEED_LOCALIZATION_KEYS->max_length <= index )
  {
    sub_B17100(v6, method, v2);
    sub_B170A0();
  }
  v8 = TD_SPEED_LOCALIZATION_KEYS->m_Items[index];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(v8, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawButton__Selected(
        ServantStatusListViewItemDrawButton_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  int v4; // w0

  v4 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_GetKind.method)(
         this,
         this->klass->vtable._5_SetItem.methodPtr,
         method);
  if ( v4 == 17 )
  {
    if ( !item )
      goto LABEL_8;
    return item->fields.changeVoiceFlag;
  }
  else
  {
    if ( v4 == 16 )
    {
      if ( item )
        return ServantStatusListViewItem__get_TreasureDeviceSpeedSelect(item, 0LL);
LABEL_8:
      sub_B170D4();
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
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  struct UISprite_array *v20; // x8
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  struct UISprite_array *v23; // x8
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  struct UICommonButton_array *v26; // x8
  UIRangeLabel_o *v27; // x20
  System_String_o *v28; // x0
  struct UICommonButton_array *v29; // x8
  UIRangeLabel_o *v30; // x20
  System_String_o *v31; // x0
  UIWidget_o *v32; // x0
  UILabel_o *v33; // x20
  System_String_o *v34; // x0
  UILabel_o *v35; // x0
  UISprite_o *v36; // x0
  int32_t *p_kind; // x19
  UISprite_o *v38; // t1
  __int64 *v39; // x8
  struct UICommonButton_array *tdSpeedButtonList; // x8
  __int64 v41; // x20
  int max_length; // w9
  UIRangeLabel_o *v43; // x21
  System_String_o *TDSpeedLocalization; // x0
  UILabel_o *tdSpeedRangeLabelList; // x20
  System_String_o *v46; // x0
  ServantStatusListViewItemDrawButton_c *v47; // x0
  struct UILabel_o *explanationLabel; // x8
  int32_t TD_SPEED_BASE_SPRITE_HEIGHT; // w1
  float v50; // s8
  UnityEngine_GameObject_o *buttonBase; // x20
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *baseSprite; // x20
  float v54; // s0
  struct UnityEngine_GameObject_o *titleBase; // x20
  unsigned int size; // s0
  struct UnityEngine_GameObject_o *v57; // x0
  float v58; // s8
  int32_t v59; // s9
  UIWidget_o *v60; // x0
  UnityEngine_Component_o *v61; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v63; // t1
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDE87 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&ServantStatusListViewItemDrawButton_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_11908, v8);
    sub_B16FFC(&StringLiteral_19649, v9);
    sub_B16FFC(&StringLiteral_11910, v10);
    sub_B16FFC(&StringLiteral_19588, v11);
    sub_B16FFC(&StringLiteral_11990, v12);
    sub_B16FFC(&StringLiteral_11909, v13);
    byte_40FDE87 = 1;
  }
  ServantStatusListViewItemDrawButtonsBase__SetItem(
    (ServantStatusListViewItemDrawButtonsBase_o *)this,
    item,
    mode,
    method);
  if ( item && mode )
  {
    v14 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButton_o *, Il2CppMethodPointer))this->klass->vtable._4_GetKind.method)(
            this,
            this->klass->vtable._5_SetItem.methodPtr);
    if ( (_DWORD)v14 == 16 )
    {
      tdSpeedButtonList = this->fields.tdSpeedButtonList;
      if ( !tdSpeedButtonList )
        goto LABEL_41;
      v41 = 0LL;
      while ( 1 )
      {
        max_length = tdSpeedButtonList->max_length;
        if ( (int)v41 >= max_length )
          break;
        if ( (unsigned int)v41 >= max_length )
          goto LABEL_60;
        v43 = (UIRangeLabel_o *)tdSpeedButtonList->m_Items[v41];
        if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        }
        TDSpeedLocalization = ServantStatusListViewItemDrawButton__GetTDSpeedLocalization(v41, v15);
        if ( v43 )
        {
          UIRangeLabel__Set(v43, TDSpeedLocalization, 0LL, 1, 0, 0LL);
          tdSpeedButtonList = this->fields.tdSpeedButtonList;
          ++v41;
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
      v46 = LocalizationManager__Get((System_String_o *)StringLiteral_11990, 0LL);
      if ( !tdSpeedRangeLabelList )
        goto LABEL_41;
      UILabel__set_text(tdSpeedRangeLabelList, v46, 0LL);
      v47 = ServantStatusListViewItemDrawButton_TypeInfo;
      if ( (BYTE3(ServantStatusListViewItemDrawButton_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantStatusListViewItemDrawButton_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawButton_TypeInfo);
        v47 = ServantStatusListViewItemDrawButton_TypeInfo;
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !explanationLabel )
        goto LABEL_41;
      TD_SPEED_BASE_SPRITE_HEIGHT = v47->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v50 = (float)(TD_SPEED_BASE_SPRITE_HEIGHT - explanationLabel->fields.mHeight) * 0.5;
      UIWidget__set_height((UIWidget_o *)this->fields.explanationLabel, TD_SPEED_BASE_SPRITE_HEIGHT, 0LL);
      buttonBase = this->fields.buttonBase;
      LocalPositionY = GameObjectExtensions__GetLocalPositionY(buttonBase, 0LL);
      GameObjectExtensions__SetLocalPositionY(buttonBase, LocalPositionY + v50, 0LL);
      baseSprite = (UnityEngine_GameObject_o *)this->fields.baseSprite;
      v54 = GameObjectExtensions__GetLocalPositionY(baseSprite, 0LL);
      GameObjectExtensions__SetLocalPositionY(baseSprite, v50 + v54, 0LL);
      titleBase = this->fields.titleBase;
      if ( !titleBase )
        goto LABEL_41;
      size = (unsigned int)UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this->fields.titleBase, 0LL);
      v57 = this->fields.titleBase;
      if ( !v57 )
        goto LABEL_41;
      v58 = *(float *)&size;
      v59 = ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_BASE_SPRITE_HEIGHT;
      v64 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v57, 0LL);
      v64.fields.y = (float)v59;
      v64.fields.x = v58;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)titleBase, v64, 0LL);
      v60 = (UIWidget_o *)this->fields.tdSpeedRangeLabelList;
      if ( !v60 )
        goto LABEL_41;
      UIWidget__set_height(
        v60,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_HEIGHT,
        0LL);
      v61 = (UnityEngine_Component_o *)this->fields.tdSpeedRangeLabelList;
      if ( !v61 )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject(v61, 0LL);
      GameObjectExtensions__SetLocalPositionY(
        gameObject,
        ServantStatusListViewItemDrawButton_TypeInfo->static_fields->TD_SPEED_EXPLANATION_LABEL_POS_Y,
        0LL);
      v63 = *(UISprite_o **)&this->fields.kind;
      p_kind = &this->fields.kind;
      v36 = v63;
      if ( !v63 )
        goto LABEL_41;
      v39 = &StringLiteral_19649;
    }
    else
    {
      if ( (_DWORD)v14 != 17 )
      {
        p_kind = &this->fields.kind;
        goto LABEL_58;
      }
      tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
      if ( !tdSpeedButtonSpriteList )
        goto LABEL_41;
      if ( tdSpeedButtonSpriteList->max_length <= 2 )
        goto LABEL_60;
      v18 = (UnityEngine_Component_o *)tdSpeedButtonSpriteList->m_Items[2];
      if ( !v18 )
        goto LABEL_41;
      v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( !v19 )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive(v19, 0, 0LL);
      v20 = this->fields.tdSpeedButtonSpriteList;
      if ( !v20 )
        goto LABEL_41;
      if ( !v20->max_length )
        goto LABEL_60;
      v21 = (UnityEngine_Component_o *)v20->m_Items[0];
      if ( !v21 )
        goto LABEL_41;
      v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
      GameObjectExtensions__SetLocalPositionX(v22, 95.0, 0LL);
      v23 = this->fields.tdSpeedButtonSpriteList;
      if ( !v23 )
        goto LABEL_41;
      if ( v23->max_length <= 1 )
        goto LABEL_60;
      v24 = (UnityEngine_Component_o *)v23->m_Items[1];
      if ( !v24 )
        goto LABEL_41;
      v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
      GameObjectExtensions__SetLocalPositionX(v25, -95.0, 0LL);
      v26 = this->fields.tdSpeedButtonList;
      if ( !v26 )
        goto LABEL_41;
      if ( !v26->max_length )
        goto LABEL_60;
      v27 = (UIRangeLabel_o *)v26->m_Items[0];
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11908, 0LL);
      if ( !v27 )
        goto LABEL_41;
      UIRangeLabel__Set(v27, v28, 0LL, 1, 0, 0LL);
      v29 = this->fields.tdSpeedButtonList;
      if ( !v29 )
        goto LABEL_41;
      if ( v29->max_length <= 1 )
      {
LABEL_60:
        sub_B17100(v14, v15, v16);
        sub_B170A0();
      }
      v30 = (UIRangeLabel_o *)v29->m_Items[1];
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_11909, 0LL);
      if ( !v30 )
        goto LABEL_41;
      UIRangeLabel__Set(v30, v31, 0LL, 1, 0, 0LL);
      v32 = (UIWidget_o *)this->fields.tdSpeedRangeLabelList;
      if ( !v32 )
        goto LABEL_41;
      UIWidget__set_height(v32, 20, 0LL);
      v33 = (UILabel_o *)this->fields.tdSpeedRangeLabelList;
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_11910, 0LL);
      if ( !v33 )
        goto LABEL_41;
      UILabel__set_text(v33, v34, 0LL);
      v35 = (UILabel_o *)this->fields.tdSpeedRangeLabelList;
      if ( !v35 )
        goto LABEL_41;
      UILabel__SetCondensedScale(v35, 560, 0LL);
      v38 = *(UISprite_o **)&this->fields.kind;
      p_kind = &this->fields.kind;
      v36 = v38;
      if ( !v38 )
        goto LABEL_41;
      v39 = &StringLiteral_19588;
    }
    UISprite__set_spriteName(v36, (System_String_o *)*v39, 0LL);
LABEL_58:
    if ( *(_QWORD *)p_kind )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)p_kind + 840LL))(
        *(_QWORD *)p_kind,
        *(_QWORD *)(**(_QWORD **)p_kind + 848LL));
      return;
    }
LABEL_41:
    sub_B170D4();
  }
}