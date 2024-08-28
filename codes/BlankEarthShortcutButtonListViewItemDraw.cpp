void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A057DF & 1) == 0 )
  {
    sub_1B686D4(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v1);
    byte_4A057DF = 1;
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

  if ( (byte_4A057DD & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A057DD = 1;
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
      sub_1B68930(v4, v5);
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
  BlankEarthShortcutButtonListViewItemDraw_o *v5; // x19
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
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  BlankEarthShortcutButtonListViewItemDraw_o **p_bgSprite; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *ComponentInParent_object; // x0
  UnityEngine_Object_o **p_shortcutButton; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Threading_CancellationTokenSource_o *onClickAction; // x1
  System_Collections_Generic_List_object__o *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v39; // x1
  Il2CppClass **v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v46; // x1
  Il2CppClass **v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v53; // x1
  Il2CppClass **v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v60; // x1
  Il2CppClass **v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v67; // x1
  Il2CppClass **v68; // x0
  UnityEngine_Object_o *v69; // x23
  UnityEngine_Object_o *v70; // x23
  int32_t v71; // w2
  int32_t v72; // w3
  UnityEngine_Object_o *v73; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  UILabel_o *nameLabelUp; // x22
  BlankEarthShortcutButtonListViewItemDraw_o *v76; // x21
  UILabel_o *v77; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v83; // x21
  UIAtlas_o *v84; // x20
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_4A057DC & 1) == 0 )
  {
    sub_1B686D4(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, item);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___, v6);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToList_string___, v7);
    sub_1B686D4(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_List_string__get_Item__, v12);
    sub_1B686D4(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v14);
    sub_1B686D4(&UICommonButtonColor_TypeInfo, v15);
    sub_1B686D4(&StringLiteral_43/*"\n"*/, v16);
    sub_1B686D4(&StringLiteral_89/*"\r\n"*/, v17);
    sub_1B686D4(&StringLiteral_17470/*"btn_shortcut"*/, v18);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)sub_1B686D4(&StringLiteral_19129/*"event_logo_shortcut_"*/, v19);
    byte_4A057DC = 1;
  }
  IconId_k__BackingField = 0;
  if ( !item )
    goto LABEL_71;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  v5->fields.onClickAction = OnClickAction_k__BackingField;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v5->fields.onClickAction,
    (int32_t)OnClickAction_k__BackingField,
    (int32_t)method,
    v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E9A438 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  v5->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = (BlankEarthShortcutButtonListViewItemDraw_o **)&v5->fields.bgSprite;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v5->fields.bgSprite, (int32_t)Component_object, v24, v25);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.bgSprite;
  if ( !this )
    goto LABEL_71;
  UISprite__set_atlas((UISprite_o *)this, item->fields._CommonUiAtlas_k__BackingField, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_71;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17470/*"btn_shortcut"*/, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_71;
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)v5,
                               (const MethodInfo_2E40EB0 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  v5->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object;
  p_shortcutButton = (UnityEngine_Object_o **)&v5->fields.shortcutButton;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&v5->fields.shortcutButton,
    (int32_t)ComponentInParent_object,
    v28,
    v29);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.shortcutButton;
  if ( !this )
    goto LABEL_71;
  onClickAction = (struct System_Threading_CancellationTokenSource_o *)v5->fields.onClickAction;
  this[1].fields.m_CancellationTokenSource = onClickAction;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this[1].fields.m_CancellationTokenSource,
    (int32_t)onClickAction,
    v30,
    v31);
  v33 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !v33 )
    goto LABEL_71;
  items = v33->fields._items;
  v37 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v33->fields._version;
  if ( !items )
    goto LABEL_71;
  size = v33->fields._size;
  v39 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)this,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v39;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v39, v34, v35);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.iconSprite;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  v43 = v33->fields._items;
  v44 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v33->fields._version;
  if ( !v43 )
    goto LABEL_71;
  v45 = v33->fields._size;
  v46 = this;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)this,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &v43->obj.klass + v45;
    v33->fields._size = v45 + 1;
    v47[4] = (Il2CppClass *)v46;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v46, v41, v42);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelUp;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  v50 = v33->fields._items;
  v51 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v33->fields._version;
  if ( !v50 )
    goto LABEL_71;
  v52 = v33->fields._size;
  v53 = this;
  if ( (unsigned int)v52 >= v50->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)this,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &v50->obj.klass + v52;
    v33->fields._size = v52 + 1;
    v54[4] = (Il2CppClass *)v53;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v53, v48, v49);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelBottom;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  v57 = v33->fields._items;
  v58 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v33->fields._version;
  if ( !v57 )
    goto LABEL_71;
  v59 = v33->fields._size;
  v60 = this;
  if ( (unsigned int)v59 >= v57->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)this,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = &v57->obj.klass + v59;
    v33->fields._size = v59 + 1;
    v61[4] = (Il2CppClass *)v60;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v60, v55, v56);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelMiddle;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  v64 = v33->fields._items;
  v65 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v33->fields._version;
  if ( !v64 )
    goto LABEL_71;
  v66 = v33->fields._size;
  v67 = this;
  if ( (unsigned int)v66 >= v64->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      (Il2CppObject *)this,
      *(const MethodInfo_34BC278 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v68 = &v64->obj.klass + v66;
    v33->fields._size = v66 + 1;
    v68[4] = (Il2CppClass *)v67;
    sub_1B68678((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v67, v62, v63);
  }
  v69 = *p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v69, 0LL, 0LL) )
  {
    v70 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                           v33,
                                                           (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
    if ( !v70 )
      goto LABEL_71;
    v70[1].monitor = this;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v70[1].monitor, (int32_t)this, v71, v72);
    v73 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    }
    if ( !v73 )
      goto LABEL_71;
    *(_OWORD *)&v73[2].klass = *(_OWORD *)this[2].monitor;
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)item->fields._Name_k__BackingField;
  if ( !this )
    goto LABEL_71;
  if ( !System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
  {
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelMiddle;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, item->fields._Name_k__BackingField, 0LL);
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelMiddle;
      if ( this )
      {
        ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
          this,
          this->klass[2]._1.interopData);
        this = (BlankEarthShortcutButtonListViewItemDraw_o *)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
        nameLabelMiddle = v5->fields.nameLabelMiddle;
        if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
        if ( nameLabelMiddle )
          goto LABEL_61;
      }
    }
LABEL_71:
    sub_1B68930(this, item);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)item->fields._Name_k__BackingField;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_String__Replace_61439096(
                                                         (System_String_o *)this,
                                                         (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                                         (System_String_o *)StringLiteral_43/*"\n"*/,
                                                         0LL);
  if ( !this )
    goto LABEL_71;
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split((System_String_o *)this, 0xAu, 0, 0LL);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Linq_Enumerable__ToList_object_(
                                                         v74,
                                                         (const MethodInfo_2E85A94 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !this )
    goto LABEL_71;
  nameLabelUp = v5->fields.nameLabelUp;
  v76 = this;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)this,
                                                         0,
                                                         (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelUp )
    goto LABEL_71;
  UILabel__set_text(nameLabelUp, (System_String_o *)this, 0LL);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelUp;
  if ( !this )
    goto LABEL_71;
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
  v77 = v5->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v77 )
    goto LABEL_71;
  UILabel__SetCondensedScale(
    v77,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0LL);
  nameLabelBottom = v5->fields.nameLabelBottom;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)v76,
                                                         1,
                                                         (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelBottom )
    goto LABEL_71;
  UILabel__set_text(nameLabelBottom, (System_String_o *)this, 0LL);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelBottom;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)((__int64 (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
                                                         this,
                                                         this->klass[2]._1.interopData);
  nameLabelMiddle = v5->fields.nameLabelBottom;
  if ( !nameLabelMiddle )
    goto LABEL_71;
LABEL_61:
  UILabel__SetCondensedScale(
    nameLabelMiddle,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0LL);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v80 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v81 = System_String__Concat_61419468((System_String_o *)StringLiteral_19129/*"event_logo_shortcut_"*/, v80, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v83 = v81;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                         IconAtlas_k__BackingField,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v84 = item->fields._IconAtlas_k__BackingField;
    if ( !v84 )
      goto LABEL_71;
    if ( UIAtlas__GetSprite(v84, v83, 0LL) )
    {
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.iconSprite;
      if ( !this )
        goto LABEL_71;
      UISprite__set_atlas((UISprite_o *)this, v84, 0LL);
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.iconSprite;
      if ( !this )
        goto LABEL_71;
      UISprite__set_spriteName((UISprite_o *)this, v83, 0LL);
    }
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.iconSprite;
  if ( !this )
    goto LABEL_71;
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
  struct BlankEarthShortcutUIButton_o *v7; // x0
  _BOOL4 isLongPress; // w8

  if ( (byte_4A057DE & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4A057DE = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_1B68930(0LL, v6);
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