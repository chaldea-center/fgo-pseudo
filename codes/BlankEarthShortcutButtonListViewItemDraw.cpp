void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F90EB & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v1);
    byte_40F90EB = 1;
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
  bool v4; // w0
  float result; // s0
  struct UISprite_o *v6; // x8

  if ( (byte_40F90E9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F90E9 = 1;
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
    v6 = this->fields.bgSprite;
    if ( !v6 )
      sub_B170D4();
    return (float)v6->fields.mWidth;
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
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  UISprite_o **p_bgSprite; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UISprite_o *bgSprite; // x0
  struct BlankEarthShortcutUIButton_o *ComponentInParent_UIScrollView; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct BlankEarthShortcutUIButton_o *shortcutButton; // x0
  System_Int32_array **onClickAction; // x1
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x22
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Component_o *iconSprite; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_Component_o *nameLabelUp; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_Component_o *nameLabelBottom; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Component_o *nameLabelMiddle; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_Object_o *v66; // x23
  struct BlankEarthShortcutUIButton_o *v67; // x23
  System_Int32_array **v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct BlankEarthShortcutUIButton_o *v75; // x21
  UICommonButtonColor_c *v76; // x0
  System_String_o *Name_k__BackingField; // x0
  System_String_o *v78; // x0
  System_String_o *v79; // x21
  __int64 v80; // x2
  System_Char_array *v81; // x0
  __int64 v82; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_List_TSource__o *v84; // x0
  System_Collections_Generic_List_TSource__o *v85; // x21
  struct UILabel_o *v86; // x0
  UILabel_o *v87; // x22
  struct UILabel_o *v88; // x0
  UILabel_o *v89; // x0
  BlankEarthShortcutButtonListViewItemDraw_c *v90; // x8
  UILabel_o *v91; // x0
  struct UILabel_o *v92; // x0
  struct UILabel_o *v93; // x21
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v97; // x21
  UIAtlas_o *v98; // x20
  UISprite_o *v99; // x0
  UISprite_o *v100; // x0
  struct UISprite_o *v101; // x0
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F90E8 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, item);
    sub_B16FFC(&char___TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_string___, v12);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v17);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&UICommonButtonColor_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v21);
    sub_B16FFC(&StringLiteral_68/*"\r\n"*/, v22);
    sub_B16FFC(&StringLiteral_16949/*"btn_shortcut"*/, v23);
    sub_B16FFC(&StringLiteral_18462/*"event_logo_shortcut_"*/, v24);
    byte_40F90E8 = 1;
  }
  IconId_k__BackingField = 0;
  if ( !item )
    goto LABEL_63;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  this->fields.onClickAction = OnClickAction_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickAction,
    (System_Int32_array **)OnClickAction_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  p_bgSprite = &this->fields.bgSprite;
  this->fields.bgSprite = (struct UISprite_o *)Component_UIWidget;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgSprite,
    (System_Int32_array **)Component_UIWidget,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_63;
  UISprite__set_atlas(bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0LL);
  if ( !*p_bgSprite )
    goto LABEL_63;
  UISprite__set_spriteName(*p_bgSprite, (System_String_o *)StringLiteral_16949/*"btn_shortcut"*/, 0LL);
  if ( !*p_bgSprite )
    goto LABEL_63;
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))(*p_bgSprite)->klass->vtable._33_MakePixelPerfect.method)(
    *p_bgSprite,
    (*p_bgSprite)->klass->vtable._34_get_minWidth.methodPtr);
  ComponentInParent_UIScrollView = (struct BlankEarthShortcutUIButton_o *)UnityEngine_Component__GetComponentInParent_UIScrollView_(
                                                                            (UnityEngine_Component_o *)this,
                                                                            (const MethodInfo_18BD688 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  p_shortcutButton = &this->fields.shortcutButton;
  this->fields.shortcutButton = ComponentInParent_UIScrollView;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.shortcutButton,
    (System_Int32_array **)ComponentInParent_UIScrollView,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  shortcutButton = this->fields.shortcutButton;
  if ( !shortcutButton )
    goto LABEL_63;
  onClickAction = (System_Int32_array **)this->fields.onClickAction;
  shortcutButton->fields.onPressedAction = (struct System_Action_o *)onClickAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&shortcutButton->fields.onPressedAction,
    onClickAction,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v52,
                                                                                                  v53,
                                                                                                  v54,
                                                                                                  v55);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !*p_bgSprite )
    goto LABEL_63;
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_bgSprite, 0LL);
  if ( !v56 )
    goto LABEL_63;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v56,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  iconSprite = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_63;
  v59 = UnityEngine_Component__get_gameObject(iconSprite, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v56,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  nameLabelUp = (UnityEngine_Component_o *)this->fields.nameLabelUp;
  if ( !nameLabelUp )
    goto LABEL_63;
  v61 = UnityEngine_Component__get_gameObject(nameLabelUp, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v56,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  nameLabelBottom = (UnityEngine_Component_o *)this->fields.nameLabelBottom;
  if ( !nameLabelBottom )
    goto LABEL_63;
  v63 = UnityEngine_Component__get_gameObject(nameLabelBottom, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v56,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  nameLabelMiddle = (UnityEngine_Component_o *)this->fields.nameLabelMiddle;
  if ( !nameLabelMiddle )
    goto LABEL_63;
  v65 = UnityEngine_Component__get_gameObject(nameLabelMiddle, 0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v56,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v66 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
  {
    v67 = *p_shortcutButton;
    v68 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v56,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
    if ( !v67 )
      goto LABEL_63;
    v67->fields.tweenTargets = (struct UnityEngine_GameObject_array *)v68;
    sub_B16F98((BattleServantConfConponent_o *)&v67->fields.tweenTargets, v68, v69, v70, v71, v72, v73, v74);
    v75 = *p_shortcutButton;
    v76 = UICommonButtonColor_TypeInfo;
    if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      v76 = UICommonButtonColor_TypeInfo;
    }
    if ( !v75 )
      goto LABEL_63;
    v75->fields.specifyDisabledColor = v76->static_fields->normal;
  }
  Name_k__BackingField = item->fields._Name_k__BackingField;
  if ( !Name_k__BackingField )
    goto LABEL_63;
  if ( System_String__Contains(Name_k__BackingField, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
  {
    v78 = item->fields._Name_k__BackingField;
    if ( !v78 )
      goto LABEL_63;
    v79 = System_String__Replace_43750968(
            v78,
            (System_String_o *)StringLiteral_68/*"\r\n"*/,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            0LL);
    v81 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v80);
    if ( !v81 )
      goto LABEL_63;
    if ( !v81->max_length )
    {
      sub_B17100(v81, v81, v82);
      sub_B170A0();
    }
    v81->m_Items[2] = 10;
    if ( !v79 )
      goto LABEL_63;
    v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v79, v81, 0LL);
    v84 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
            v83,
            (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_string___);
    if ( !v84 )
      goto LABEL_63;
    v85 = v84;
    if ( !v84->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !this->fields.nameLabelUp )
      goto LABEL_63;
    UILabel__set_text(this->fields.nameLabelUp, (System_String_o *)v84->fields._items->m_Items[0], 0LL);
    v86 = this->fields.nameLabelUp;
    if ( !v86 )
      goto LABEL_63;
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v86->klass->vtable._33_MakePixelPerfect.method)(
      v86,
      v86->klass->vtable._34_get_minWidth.methodPtr);
    v87 = this->fields.nameLabelUp;
    if ( (BYTE3(BlankEarthShortcutButtonListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    }
    if ( !v87 )
      goto LABEL_63;
    UILabel__SetCondensedScale(
      v87,
      BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
      0LL);
    if ( v85->fields._size <= 1u )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !this->fields.nameLabelBottom )
      goto LABEL_63;
    UILabel__set_text(this->fields.nameLabelBottom, (System_String_o *)v85->fields._items->m_Items[1], 0LL);
    v88 = this->fields.nameLabelBottom;
    if ( !v88 )
      goto LABEL_63;
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v88->klass->vtable._33_MakePixelPerfect.method)(
      v88,
      v88->klass->vtable._34_get_minWidth.methodPtr);
    v89 = this->fields.nameLabelBottom;
    if ( !v89 )
      goto LABEL_63;
    v90 = BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
  }
  else
  {
    v91 = this->fields.nameLabelMiddle;
    if ( !v91 )
      goto LABEL_63;
    UILabel__set_text(v91, item->fields._Name_k__BackingField, 0LL);
    v92 = this->fields.nameLabelMiddle;
    if ( !v92 )
      goto LABEL_63;
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v92->klass->vtable._33_MakePixelPerfect.method)(
      v92,
      v92->klass->vtable._34_get_minWidth.methodPtr);
    v93 = this->fields.nameLabelMiddle;
    if ( (BYTE3(BlankEarthShortcutButtonListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    }
    if ( !v93 )
      goto LABEL_63;
    v90 = BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
    v89 = v93;
  }
  UILabel__SetCondensedScale(v89, v90->static_fields->NAME_LABEL_MAX_WIDTH, 0LL);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v94 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v95 = System_String__Concat_43743732((System_String_o *)StringLiteral_18462/*"event_logo_shortcut_"*/, v94, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v97 = v95;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0LL, 0LL) )
  {
    v98 = item->fields._IconAtlas_k__BackingField;
    if ( !v98 )
      goto LABEL_63;
    if ( UIAtlas__GetSprite(v98, v97, 0LL) )
    {
      v99 = this->fields.iconSprite;
      if ( v99 )
      {
        UISprite__set_atlas(v99, v98, 0LL);
        v100 = this->fields.iconSprite;
        if ( v100 )
        {
          UISprite__set_spriteName(v100, v97, 0LL);
          goto LABEL_61;
        }
      }
LABEL_63:
      sub_B170D4();
    }
  }
LABEL_61:
  v101 = this->fields.iconSprite;
  if ( !v101 )
    goto LABEL_63;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v101->klass->vtable._33_MakePixelPerfect.method)(
    v101,
    v101->klass->vtable._34_get_minWidth.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shortcutButton; // x21
  BlankEarthShortcutUIButton_o *v6; // x0

  if ( (byte_40F90EA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isEnable);
    byte_40F90EA = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v6 = this->fields.shortcutButton;
    if ( !v6 )
      sub_B170D4();
    BlankEarthShortcutUIButton__SetShortcutButtonEnable(v6, isEnable, 0LL);
  }
}