void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2AAA9 & 1) == 0 )
  {
    sub_1B761C0(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v1);
    byte_4A2AAA9 = 1;
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

  if ( (byte_4A2AAA7 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2AAA7 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL);
  result = 0.0;
  if ( v4 )
  {
    v7 = this->fields.bgSprite;
    if ( !v7 )
      sub_1B7641C(v4, v5);
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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
  __int64 bgSprite; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *ComponentInParent_object; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Action_o *onClickAction; // x1
  System_Collections_Generic_List_object__o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  __int64 v43; // x1
  Il2CppClass **v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x1
  Il2CppClass **v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x1
  Il2CppClass **v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x1
  Il2CppClass **v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x1
  Il2CppClass **v72; // x0
  UnityEngine_Object_o *v73; // x23
  struct BlankEarthShortcutUIButton_o *v74; // x23
  int32_t v75; // w2
  int32_t v76; // w3
  struct BlankEarthShortcutUIButton_o *v77; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v80; // x21
  UILabel_o *v81; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v87; // x21
  UIAtlas_o *v88; // x22
  const MethodInfo *v89; // x2
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A2AAA5 & 1) == 0 )
  {
    sub_1B761C0(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, item);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___, v6);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToList_string___, v7);
    sub_1B761C0(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__ToArray__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_string__get_Item__, v12);
    sub_1B761C0(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v14);
    sub_1B761C0(&UICommonButtonColor_TypeInfo, v15);
    sub_1B761C0(&StringLiteral_43/*"\n"*/, v16);
    sub_1B761C0(&StringLiteral_89/*"\r\n"*/, v17);
    sub_1B761C0(&StringLiteral_17529/*"btn_shortcut"*/, v18);
    sub_1B761C0(&StringLiteral_19191/*"event_logo_shortcut_"*/, v19);
    byte_4A2AAA5 = 1;
  }
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.listViewItem, (int32_t)item, (int32_t)method, v3);
  if ( !item )
    goto LABEL_72;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  this->fields.onClickAction = OnClickAction_k__BackingField;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickAction,
    (int32_t)OnClickAction_k__BackingField,
    v22,
    v23);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2EB34A0 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.bgSprite, (int32_t)Component_object, v28, v29);
  bgSprite = (__int64)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_72;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0LL);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_72;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_17529/*"btn_shortcut"*/, 0LL);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_72;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_2E59568 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.shortcutButton,
    (int32_t)ComponentInParent_object,
    v32,
    v33);
  bgSprite = (__int64)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_72;
  onClickAction = this->fields.onClickAction;
  *(_QWORD *)(bgSprite + 112) = onClickAction;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(bgSprite + 112), (int32_t)onClickAction, v34, v35);
  v37 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_72;
  bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
  if ( !v37 )
    goto LABEL_72;
  items = v37->fields._items;
  v41 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v37->fields._version;
  if ( !items )
    goto LABEL_72;
  size = v37->fields._size;
  v43 = bgSprite;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)bgSprite,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    v37->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v43;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v44 + 4), v43, v38, v39);
  }
  bgSprite = (__int64)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_72;
  bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
  v47 = v37->fields._items;
  v48 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v37->fields._version;
  if ( !v47 )
    goto LABEL_72;
  v49 = v37->fields._size;
  v50 = bgSprite;
  if ( (unsigned int)v49 >= v47->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)bgSprite,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &v47->obj.klass + v49;
    v37->fields._size = v49 + 1;
    v51[4] = (Il2CppClass *)v50;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v51 + 4), v50, v45, v46);
  }
  bgSprite = (__int64)this->fields.nameLabelUp;
  if ( !bgSprite )
    goto LABEL_72;
  bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
  v54 = v37->fields._items;
  v55 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v37->fields._version;
  if ( !v54 )
    goto LABEL_72;
  v56 = v37->fields._size;
  v57 = bgSprite;
  if ( (unsigned int)v56 >= v54->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)bgSprite,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v54->obj.klass + v56;
    v37->fields._size = v56 + 1;
    v58[4] = (Il2CppClass *)v57;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v58 + 4), v57, v52, v53);
  }
  bgSprite = (__int64)this->fields.nameLabelBottom;
  if ( !bgSprite )
    goto LABEL_72;
  bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
  v61 = v37->fields._items;
  v62 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v37->fields._version;
  if ( !v61 )
    goto LABEL_72;
  v63 = v37->fields._size;
  v64 = bgSprite;
  if ( (unsigned int)v63 >= v61->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)bgSprite,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v61->obj.klass + v63;
    v37->fields._size = v63 + 1;
    v65[4] = (Il2CppClass *)v64;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v65 + 4), v64, v59, v60);
  }
  bgSprite = (__int64)this->fields.nameLabelMiddle;
  if ( !bgSprite )
    goto LABEL_72;
  bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
  v68 = v37->fields._items;
  v69 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v37->fields._version;
  if ( !v68 )
    goto LABEL_72;
  v70 = v37->fields._size;
  v71 = bgSprite;
  if ( (unsigned int)v70 >= v68->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)bgSprite,
      *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &v68->obj.klass + v70;
    v37->fields._size = v70 + 1;
    v72[4] = (Il2CppClass *)v71;
    sub_1B76164((ServantStatusBattleListViewItem_o *)(v72 + 4), v71, v66, v67);
  }
  v73 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
  {
    v74 = *p_shortcutButton;
    bgSprite = (__int64)System_Collections_Generic_List_object___ToArray(
                          v37,
                          (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
    if ( !v74 )
      goto LABEL_72;
    v74->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v74->fields.tweenTargets, bgSprite, v75, v76);
    v77 = *p_shortcutButton;
    bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    }
    if ( !v77 )
      goto LABEL_72;
    v77->fields.specifyDisabledColor = *(struct UnityEngine_Color_o *)*(_QWORD *)(bgSprite + 184);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_72;
  if ( !System_String__Contains((System_String_o *)bgSprite, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
  {
    bgSprite = (__int64)this->fields.nameLabelMiddle;
    if ( bgSprite )
    {
      UILabel__set_text((UILabel_o *)bgSprite, item->fields._Name_k__BackingField, 0LL);
      bgSprite = (__int64)this->fields.nameLabelMiddle;
      if ( bgSprite )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
          bgSprite,
          *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
        bgSprite = (__int64)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
        nameLabelMiddle = this->fields.nameLabelMiddle;
        if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
        if ( nameLabelMiddle )
          goto LABEL_61;
      }
    }
LABEL_72:
    sub_1B7641C(bgSprite, v21);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_72;
  bgSprite = (__int64)System_String__Replace_61554688(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_89/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0LL);
  if ( !bgSprite )
    goto LABEL_72;
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               (System_String_o *)bgSprite,
                                                               0xAu,
                                                               0,
                                                               0LL);
  bgSprite = (__int64)System_Linq_Enumerable__ToList_object_(
                        v78,
                        (const MethodInfo_2E9EAFC *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_72;
  nameLabelUp = this->fields.nameLabelUp;
  v80 = (System_Collections_Generic_List_object__o *)bgSprite;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelUp )
    goto LABEL_72;
  UILabel__set_text(nameLabelUp, (System_String_o *)bgSprite, 0LL);
  bgSprite = (__int64)this->fields.nameLabelUp;
  if ( !bgSprite )
    goto LABEL_72;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  bgSprite = (__int64)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
  v81 = this->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v81 )
    goto LABEL_72;
  UILabel__SetCondensedScale(
    v81,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0LL);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        v80,
                        1,
                        (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelBottom )
    goto LABEL_72;
  UILabel__set_text(nameLabelBottom, (System_String_o *)bgSprite, 0LL);
  bgSprite = (__int64)this->fields.nameLabelBottom;
  if ( !bgSprite )
    goto LABEL_72;
  bgSprite = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
               bgSprite,
               *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  nameLabelMiddle = this->fields.nameLabelBottom;
  if ( !nameLabelMiddle )
    goto LABEL_72;
LABEL_61:
  UILabel__SetCondensedScale(
    nameLabelMiddle,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0LL);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v84 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v85 = System_String__Concat_61535060((System_String_o *)StringLiteral_19191/*"event_logo_shortcut_"*/, v84, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v87 = v85;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0LL, 0LL);
  if ( (bgSprite & 1) != 0 )
  {
    v88 = item->fields._IconAtlas_k__BackingField;
    if ( !v88 )
      goto LABEL_72;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v87, 0LL) )
    {
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_72;
      UISprite__set_atlas((UISprite_o *)bgSprite, v88, 0LL);
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_72;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v87, 0LL);
    }
  }
  bgSprite = (__int64)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_72;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  bgSprite = (__int64)this->fields.optionComponent;
  if ( !bgSprite )
    goto LABEL_72;
  BlankEarthShortcutButtonOptionComponent__SetUpOptionInfo(
    (BlankEarthShortcutButtonOptionComponent_o *)bgSprite,
    item->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    v89);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shortcutButton; // x21
  __int64 v6; // x1
  struct BlankEarthShortcutUIButton_o *v7; // x0
  _BOOL4 isLongPress; // w8

  if ( (byte_4A2AAA8 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4A2AAA8 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_1B7641C(0LL, v6);
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


void __fastcall BlankEarthShortcutButtonListViewItemDraw__Update(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *optionComponent; // x20
  BlankEarthSpotNavimenuEntity_o *v4; // x1
  const MethodInfo *v5; // x2
  BlankEarthShortcutButtonOptionComponent_o *v6; // x0
  const MethodInfo *v7; // x2
  struct BlankEarthShortcutButtonListViewItem_o *listViewItem; // x8

  if ( (byte_4A2AAA6 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2AAA6 = 1;
  }
  optionComponent = (UnityEngine_Object_o *)this->fields.optionComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(optionComponent, 0LL, 0LL) && this->fields.listViewItem )
  {
    v6 = this->fields.optionComponent;
    if ( !v6 )
      goto LABEL_13;
    v6 = (BlankEarthShortcutButtonOptionComponent_o *)BlankEarthShortcutButtonOptionComponent__CheckUpdateText(
                                                        v6,
                                                        v4,
                                                        v5);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      listViewItem = this->fields.listViewItem;
      if ( listViewItem )
      {
        v6 = this->fields.optionComponent;
        if ( v6 )
        {
          BlankEarthShortcutButtonOptionComponent__SetUpOptionInfo(
            v6,
            listViewItem->fields._blankEarthSpotNavimenuEntity_k__BackingField,
            v7);
          return;
        }
      }
LABEL_13:
      sub_1B7641C(v6, v4);
    }
  }
}