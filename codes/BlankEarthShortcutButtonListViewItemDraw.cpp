void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E85F3 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v1, v2, v3);
    byte_42E85F3 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *bgSprite; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  float result; // s0
  struct UISprite_o *v9; // x8

  if ( (byte_42E85F1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E85F1 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL);
  result = 0.0;
  if ( v6 )
  {
    v9 = this->fields.bgSprite;
    if ( !v9 )
      sub_B5D69C(v6, v7);
    return (float)v9->fields.mWidth;
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  System_Int32_array **OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  BlankEarthShortcutButtonListViewItemDraw_o **p_bgSprite; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **ComponentInParent_UIScrollView; // x0
  UnityEngine_Object_o **p_shortcutButton; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct UISprite_o *onClickAction; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v80; // x22
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_Object_o *v85; // x23
  UnityEngine_Object_o *v86; // x23
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  UnityEngine_Object_o *v93; // x21
  System_String_o *v94; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  BlankEarthShortcutButtonListViewItemDraw_o *v96; // x21
  UILabel_o *nameLabelUp; // x22
  BlankEarthShortcutButtonListViewItemDraw_c *v98; // x8
  BlankEarthShortcutButtonListViewItemDraw_o *nameLabelMiddle; // x21
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v103; // x21
  UIAtlas_o *v104; // x20
  __int64 v105; // x0
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v8 = item;
  v9 = this;
  if ( (byte_42E85F0 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&char___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, v16, v17, v18);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&UICommonButtonColor_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_69/*"\r\n"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_17224/*"btn_shortcut"*/, v49, v50, v51);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_18761/*"event_logo_shortcut_"*/, v52, v53, v54);
    byte_42E85F0 = 1;
  }
  IconId_k__BackingField = 0;
  if ( !v8 )
    goto LABEL_63;
  OnClickAction_k__BackingField = (System_Int32_array **)v8->fields._OnClickAction_k__BackingField;
  v9->fields.onClickAction = (struct System_Action_o *)OnClickAction_k__BackingField;
  sub_B5D560(
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
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  p_bgSprite = (BlankEarthShortcutButtonListViewItemDraw_o **)&v9->fields.bgSprite;
  v9->fields.bgSprite = (struct UISprite_o *)Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)&v9->fields.bgSprite, Component_UIWidget, v59, v60, v61, v62, v63, v64);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.bgSprite;
  if ( !this )
    goto LABEL_63;
  UISprite__set_atlas((UISprite_o *)this, v8->fields._CommonUiAtlas_k__BackingField, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_63;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17224/*"btn_shortcut"*/, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_63;
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  ComponentInParent_UIScrollView = (System_Int32_array **)UnityEngine_Component__GetComponentInParent_UIScrollView_(
                                                            (UnityEngine_Component_o *)v9,
                                                            (const MethodInfo_1ADE500 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  p_shortcutButton = (UnityEngine_Object_o **)&v9->fields.shortcutButton;
  v9->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_UIScrollView;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.shortcutButton,
    ComponentInParent_UIScrollView,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.shortcutButton;
  if ( !this )
    goto LABEL_63;
  onClickAction = (struct UISprite_o *)v9->fields.onClickAction;
  this[1].fields.iconSprite = onClickAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this[1].fields.iconSprite,
    (System_Int32_array **)onClickAction,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v80 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v80,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_63;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !v80 )
    goto LABEL_63;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v80,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
  if ( !this )
    goto LABEL_63;
  v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v80,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelUp;
  if ( !this )
    goto LABEL_63;
  v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v80,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelBottom;
  if ( !this )
    goto LABEL_63;
  v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v80,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelMiddle;
  if ( !this )
    goto LABEL_63;
  v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v80,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v84,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v85 = *p_shortcutButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v85, 0LL, 0LL) )
  {
    v86 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v80,
                                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
    if ( !v86 )
      goto LABEL_63;
    v86[1].klass = (UnityEngine_Object_c *)this;
    sub_B5D560((BattleServantConfConponent_o *)&v86[1], (System_Int32_array **)this, v87, v88, v89, v90, v91, v92);
    v93 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    }
    if ( !v93 )
      goto LABEL_63;
    *(_OWORD *)&v93[1].fields.m_CachedPtr = *(_OWORD *)&this[2].fields.iconSprite->klass;
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v8->fields._Name_k__BackingField;
  if ( !this )
    goto LABEL_63;
  if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
  {
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)v8->fields._Name_k__BackingField;
    if ( !this )
      goto LABEL_63;
    v94 = System_String__Replace_44585024(
            (System_String_o *)this,
            (System_String_o *)StringLiteral_69/*"\r\n"*/,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            0LL);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_63;
    item = (BlankEarthShortcutButtonListViewItem_o *)this;
    if ( !LODWORD(this->fields.iconSprite) )
    {
      v105 = sub_B5D6C8(this);
      sub_B5D668(v105, 0LL);
    }
    LOWORD(this->fields.nameLabelUp) = 10;
    if ( !v94 )
      goto LABEL_63;
    v95 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v94, (System_Char_array *)this, 0LL);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v95,
                                                           (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this )
      goto LABEL_63;
    v96 = this;
    if ( !LODWORD(this->fields.iconSprite) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
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
    if ( LODWORD(v96->fields.iconSprite) <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !v9->fields.nameLabelBottom )
      goto LABEL_63;
    UILabel__set_text(
      v9->fields.nameLabelBottom,
      *(System_String_o **)(*(_QWORD *)&v96->fields.m_CachedPtr + 40LL),
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
    v98 = BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
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
    v98 = BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
    this = nameLabelMiddle;
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v98->static_fields->NAME_LABEL_MAX_WIDTH, 0LL);
  IconId_k__BackingField = v8->fields._IconId_k__BackingField;
  v100 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v101 = System_String__Concat_44577788((System_String_o *)StringLiteral_18761/*"event_logo_shortcut_"*/, v100, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)v8->fields._IconAtlas_k__BackingField;
  v103 = v101;
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
    v104 = v8->fields._IconAtlas_k__BackingField;
    if ( !v104 )
      goto LABEL_63;
    if ( UIAtlas__GetSprite(v104, v103, 0LL) )
    {
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, v104, 0LL);
        this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
        if ( this )
        {
          UISprite__set_spriteName((UISprite_o *)this, v103, 0LL);
          goto LABEL_61;
        }
      }
LABEL_63:
      sub_B5D69C(this, item);
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
  __int64 v3; // x3
  UnityEngine_Object_o *shortcutButton; // x21
  __int64 v7; // x1
  struct BlankEarthShortcutUIButton_o *v8; // x0
  _BOOL4 isLongPress; // w8

  if ( (byte_42E85F2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isEnable, (_DWORD)method, v3);
    byte_42E85F2 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v8 = this->fields.shortcutButton;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    if ( isEnable )
    {
      isLongPress = v8->fields.isLongPress;
      v8->fields.waitState = 1;
      if ( !isLongPress )
        UICommonButton__SetButtonEnable((UICommonButton_o *)v8, 1, 1, 0LL);
    }
    else
    {
      v8->fields.waitState = 2;
    }
  }
}