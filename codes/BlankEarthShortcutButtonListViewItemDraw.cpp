void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418763F & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v1);
    byte_418763F = 1;
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

  if ( (byte_418763D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418763D = 1;
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
      sub_B2C434(v4, v5);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Int32_array **OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  BlankEarthShortcutButtonListViewItemDraw_o **p_bgSprite; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **ComponentInParent_UIScrollView; // x0
  UnityEngine_Object_o **p_shortcutButton; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UISprite_o *onClickAction; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x22
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Object_o *v55; // x23
  UnityEngine_Object_o *v56; // x23
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UnityEngine_Object_o *v63; // x21
  System_String_o *v64; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  BlankEarthShortcutButtonListViewItemDraw_o *v66; // x21
  UILabel_o *nameLabelUp; // x22
  BlankEarthShortcutButtonListViewItemDraw_c *v68; // x8
  BlankEarthShortcutButtonListViewItemDraw_o *nameLabelMiddle; // x21
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v73; // x21
  UIAtlas_o *v74; // x20
  __int64 v75; // x0
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  v8 = item;
  v9 = this;
  if ( (byte_418763C & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, item);
    sub_B2C35C(&char___TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_string___, v12);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__ToArray__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v17);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&UICommonButtonColor_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v21);
    sub_B2C35C(&StringLiteral_68/*"\r\n"*/, v22);
    sub_B2C35C(&StringLiteral_17015/*"btn_shortcut"*/, v23);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)sub_B2C35C(&StringLiteral_18531/*"event_logo_shortcut_"*/, v24);
    byte_418763C = 1;
  }
  IconId_k__BackingField = 0;
  if ( !v8 )
    goto LABEL_63;
  OnClickAction_k__BackingField = (System_Int32_array **)v8->fields._OnClickAction_k__BackingField;
  v9->fields.onClickAction = (struct System_Action_o *)OnClickAction_k__BackingField;
  sub_B2C2F8(
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
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  p_bgSprite = (BlankEarthShortcutButtonListViewItemDraw_o **)&v9->fields.bgSprite;
  v9->fields.bgSprite = (struct UISprite_o *)Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)&v9->fields.bgSprite, Component_UIWidget, v29, v30, v31, v32, v33, v34);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.bgSprite;
  if ( !this )
    goto LABEL_63;
  UISprite__set_atlas((UISprite_o *)this, v8->fields._CommonUiAtlas_k__BackingField, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_63;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17015/*"btn_shortcut"*/, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_63;
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  ComponentInParent_UIScrollView = (System_Int32_array **)UnityEngine_Component__GetComponentInParent_UIScrollView_(
                                                            (UnityEngine_Component_o *)v9,
                                                            (const MethodInfo_172DDF0 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  p_shortcutButton = (UnityEngine_Object_o **)&v9->fields.shortcutButton;
  v9->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_UIScrollView;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v9->fields.shortcutButton,
    ComponentInParent_UIScrollView,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.shortcutButton;
  if ( !this )
    goto LABEL_63;
  onClickAction = (struct UISprite_o *)v9->fields.onClickAction;
  this[1].fields.iconSprite = onClickAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[1].fields.iconSprite,
    (System_Int32_array **)onClickAction,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_63;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !v50 )
    goto LABEL_63;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v50,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
  if ( !this )
    goto LABEL_63;
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v50,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelUp;
  if ( !this )
    goto LABEL_63;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v50,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v52,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelBottom;
  if ( !this )
    goto LABEL_63;
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v50,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.nameLabelMiddle;
  if ( !this )
    goto LABEL_63;
  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v50,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v55 = *p_shortcutButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
  {
    v56 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v50,
                                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
    if ( !v56 )
      goto LABEL_63;
    v56[1].klass = (UnityEngine_Object_c *)this;
    sub_B2C2F8((BattleServantConfConponent_o *)&v56[1], (System_Int32_array **)this, v57, v58, v59, v60, v61, v62);
    v63 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    }
    if ( !v63 )
      goto LABEL_63;
    *(_OWORD *)&v63[1].fields.m_CachedPtr = *(_OWORD *)&this[2].fields.iconSprite->klass;
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v8->fields._Name_k__BackingField;
  if ( !this )
    goto LABEL_63;
  if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
  {
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)v8->fields._Name_k__BackingField;
    if ( !this )
      goto LABEL_63;
    v64 = System_String__Replace_44312768(
            (System_String_o *)this,
            (System_String_o *)StringLiteral_68/*"\r\n"*/,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            0LL);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_63;
    item = (BlankEarthShortcutButtonListViewItem_o *)this;
    if ( !LODWORD(this->fields.iconSprite) )
    {
      v75 = sub_B2C460(this);
      sub_B2C400(v75, 0LL);
    }
    LOWORD(this->fields.nameLabelUp) = 10;
    if ( !v64 )
      goto LABEL_63;
    v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v64, (System_Char_array *)this, 0LL);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           v65,
                                                           (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !this )
      goto LABEL_63;
    v66 = this;
    if ( !LODWORD(this->fields.iconSprite) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    if ( LODWORD(v66->fields.iconSprite) <= 1 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !v9->fields.nameLabelBottom )
      goto LABEL_63;
    UILabel__set_text(
      v9->fields.nameLabelBottom,
      *(System_String_o **)(*(_QWORD *)&v66->fields.m_CachedPtr + 40LL),
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
    v68 = BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
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
    v68 = BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
    this = nameLabelMiddle;
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v68->static_fields->NAME_LABEL_MAX_WIDTH, 0LL);
  IconId_k__BackingField = v8->fields._IconId_k__BackingField;
  v70 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v71 = System_String__Concat_44305532((System_String_o *)StringLiteral_18531/*"event_logo_shortcut_"*/, v70, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)v8->fields._IconAtlas_k__BackingField;
  v73 = v71;
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
    v74 = v8->fields._IconAtlas_k__BackingField;
    if ( !v74 )
      goto LABEL_63;
    if ( UIAtlas__GetSprite(v74, v73, 0LL) )
    {
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, v74, 0LL);
        this = (BlankEarthShortcutButtonListViewItemDraw_o *)v9->fields.iconSprite;
        if ( this )
        {
          UISprite__set_spriteName((UISprite_o *)this, v73, 0LL);
          goto LABEL_61;
        }
      }
LABEL_63:
      sub_B2C434(this, item);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shortcutButton; // x21
  __int64 v6; // x1
  BlankEarthShortcutUIButton_o *v7; // x0

  if ( (byte_418763E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isEnable);
    byte_418763E = 1;
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
      sub_B2C434(0LL, v6);
    BlankEarthShortcutUIButton__SetShortcutButtonEnable(v7, isEnable, 0LL);
  }
}