void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_438ADB3 & 1) == 0 )
  {
    sub_B775C4(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    byte_438ADB3 = 1;
  }
  BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH = 115;
}


void __fastcall BlankEarthShortcutButtonListViewItemDraw___ctor(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


float __fastcall BlankEarthShortcutButtonListViewItemDraw__GetButtonWidth(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct UISprite_o *v7; // x8

  if ( (byte_438ADB1 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ADB1 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL);
  result = 0.0;
  if ( v4 )
  {
    v7 = this->fields.bgSprite;
    if ( !v7 )
      sub_B7769C(v4, v5);
    return (float)v7->fields.mWidth;
  }
  return result;
}


void __fastcall BlankEarthShortcutButtonListViewItemDraw__OnClickButton(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickAction, 0LL);
}


void __fastcall BlankEarthShortcutButtonListViewItemDraw__SetItem(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        BlankEarthShortcutButtonListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BlankEarthShortcutButtonListViewItem_o *v8; // x20
  BlankEarthShortcutButtonListViewItemDraw_o *v9; // x19
  System_Int32_array **OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  BlankEarthShortcutButtonListViewItemDraw_o **p_bgSprite; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **ComponentInParent_UIScrollView; // x0
  UnityEngine_Object_o **p_shortcutButton; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UISprite_o *onClickAction; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x22
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Object_o *v40; // x23
  UnityEngine_Object_o *v41; // x23
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_o *v48; // x21
  System_String_o *v49; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  BlankEarthShortcutButtonListViewItemDraw_o *v51; // x21
  UILabel_o *nameLabelUp; // x22
  BlankEarthShortcutButtonListViewItemDraw_c *v53; // x8
  BlankEarthShortcutButtonListViewItemDraw_o *nameLabelMiddle; // x21
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v58; // x21
  UIAtlas_o *v59; // x20
  __int64 v60; // x0
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v8 = item;
  v9 = this;
  if ( (byte_438ADB0 & 1) == 0 )
  {
    sub_B775C4(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UICommonButtonColor_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_70/*"\r\n"*/);
    sub_B775C4(&StringLiteral_17354/*"btn_shortcut"*/);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)sub_B775C4(&StringLiteral_18899/*"event_logo_shortcut_"*/);
    byte_438ADB0 = 1;
  }
  IconId_k__BackingField = 0;
  if ( !v8 )
    goto LABEL_63;
  OnClickAction_k__BackingField = (System_Int32_array **)v8->fields._OnClickAction_k__BackingField;
  v9->fields.onClickAction = (struct System_Action_o *)OnClickAction_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)&v9->fields.onClickAction,
    OnClickAction_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  p_bgSprite = (BlankEarthShortcutButtonListViewItemDraw_o **)&v9->fields.bgSprite;
  v9->fields.bgSprite = (struct UISprite_o *)Component_UIWidget;
  sub_B77560((BattleServantConfConponent_o *)&v9->fields.bgSprite, Component_UIWidget, v14, v15, v16, v17, v18, v19);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.bgSprite;
  if ( !this )
    goto LABEL_63;
  UISprite__set_atlas((UISprite_o *)this, v8->fields._CommonUiAtlas_k__BackingField, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_63;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17354/*"btn_shortcut"*/, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_63;
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  ComponentInParent_UIScrollView = (System_Int32_array **)UnityEngine_Component__GetComponentInParent_UIScrollView_(
                                                            (UnityEngine_Component_o *)v9,
                                                            (const MethodInfo_1C6D910 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  p_shortcutButton = (UnityEngine_Object_o **)&v9->fields.shortcutButton;
  v9->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_UIScrollView;
  sub_B77560(
    (BattleServantConfConponent_o *)&v9->fields.shortcutButton,
    ComponentInParent_UIScrollView,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.shortcutButton;
  if ( !this )
    goto LABEL_63;
  onClickAction = (struct UISprite_o *)v9->fields.onClickAction;
  this[1].fields.iconSprite = onClickAction;
  sub_B77560(
    (BattleServantConfConponent_o *)&this[1].fields.iconSprite,
    (System_Int32_array **)onClickAction,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_63;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !v35 )
    goto LABEL_63;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v35,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
  if ( !this )
    goto LABEL_63;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v35,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelUp;
  if ( !this )
    goto LABEL_63;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v35,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelBottom;
  if ( !this )
    goto LABEL_63;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v35,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelMiddle;
  if ( !this )
    goto LABEL_63;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v35,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v40 = *p_shortcutButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
    v41 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                                                           (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
    if ( !v41 )
      goto LABEL_63;
    v41[1].klass = (UnityEngine_Object_c *)this;
    sub_B77560((BattleServantConfConponent_o *)&v41[1], (System_Int32_array **)this, v42, v43, v44, v45, v46, v47);
    v48 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    }
    if ( !v48 )
      goto LABEL_63;
    *(_OWORD *)&v48[1].fields.m_CachedPtr = *(_OWORD *)&this[2].fields.iconSprite->klass;
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v8->fields._Name_k__BackingField;
  if ( !this )
    goto LABEL_63;
  if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
  {
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)v8->fields._Name_k__BackingField;
    if ( !this )
      goto LABEL_63;
    v49 = System_String__Replace_44909172(
            (System_String_o *)this,
            (System_String_o *)StringLiteral_70/*"\r\n"*/,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            0LL);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_63;
    item = (BlankEarthShortcutButtonListViewItem_o *)this;
    if ( !LODWORD(this->fields.iconSprite) )
    {
      v60 = sub_B776C8(this);
      sub_B77668(v60, 0LL);
    }
    LOWORD(this->fields.nameLabelUp) = 10;
    if ( !v49 )
      goto LABEL_63;
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v49, (System_Char_array *)this, 0LL);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v50,
                                                           (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this )
      goto LABEL_63;
    v51 = this;
    if ( !LODWORD(this->fields.iconSprite) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( !v9->fields.nameLabelUp )
      goto LABEL_63;
    UILabel__set_text(v9->fields.nameLabelUp, *(System_String_o **)(*(_QWORD *)&this->fields.m_CachedPtr + 32LL), 0LL);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelUp;
    if ( !this )
      goto LABEL_63;
    ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
    nameLabelUp = v9->fields.nameLabelUp;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
    if ( (BYTE3(BlankEarthShortcutButtonListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    }
    if ( !nameLabelUp )
      goto LABEL_63;
    UILabel__SetCondensedScale(
      nameLabelUp,
      BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
      0LL);
    if ( LODWORD(v51->fields.iconSprite) <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( !v9->fields.nameLabelBottom )
      goto LABEL_63;
    UILabel__set_text(
      v9->fields.nameLabelBottom,
      *(System_String_o **)(*(_QWORD *)&v51->fields.m_CachedPtr + 40LL),
      0LL);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelBottom;
    if ( !this )
      goto LABEL_63;
    ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelBottom;
    if ( !this )
      goto LABEL_63;
    v53 = BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
  }
  else
  {
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelMiddle;
    if ( !this )
      goto LABEL_63;
    UILabel__set_text((UILabel_o *)this, v8->fields._Name_k__BackingField, 0LL);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelMiddle;
    if ( !this )
      goto LABEL_63;
    ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
    nameLabelMiddle = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelMiddle;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
    if ( (BYTE3(BlankEarthShortcutButtonListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    }
    if ( !nameLabelMiddle )
      goto LABEL_63;
    v53 = BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
    this = nameLabelMiddle;
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v53->static_fields->NAME_LABEL_MAX_WIDTH, 0LL);
  IconId_k__BackingField = v8->fields._IconId_k__BackingField;
  v55 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v56 = System_String__Concat_44901936((System_String_o *)StringLiteral_18899/*"event_logo_shortcut_"*/, v55, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)v8->fields._IconAtlas_k__BackingField;
  v58 = v56;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                         IconAtlas_k__BackingField,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v59 = v8->fields._IconAtlas_k__BackingField;
    if ( !v59 )
      goto LABEL_63;
    if ( UIAtlas__GetSprite(v59, v58, 0LL) )
    {
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, v59, 0LL);
        this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
        if ( this )
        {
          UISprite__set_spriteName((UISprite_o *)this, v58, 0LL);
          goto LABEL_61;
        }
      }
LABEL_63:
      sub_B7769C(this, item);
    }
  }
LABEL_61:
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
  if ( !this )
    goto LABEL_63;
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
}


void __fastcall BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shortcutButton; // x21
  __int64 v6; // x1
  struct BlankEarthShortcutUIButton_o *v7; // x0
  _BOOL4 isLongPress; // w8

  if ( (byte_438ADB2 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438ADB2 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    if ( isEnable )
    {
      isLongPress = v7->fields.isLongPress;
      v7->fields.waitState = 1;
      if ( !isLongPress )
        UICommonButton__SetButtonEnable((UICommonButton_o *)v7, 1, 1, 0LL);
    }
    else
    {
      v7->fields.waitState = 2;
    }
  }
}