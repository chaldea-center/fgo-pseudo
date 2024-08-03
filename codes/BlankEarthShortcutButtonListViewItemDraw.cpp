void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F8FD2 & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v1);
    byte_49F8FD2 = 1;
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
  float result; // s0
  struct UISprite_o *v6; // x8

  if ( (byte_49F8FD0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8FD0 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL);
  result = 0.0;
  if ( v4 )
  {
    v6 = this->fields.bgSprite;
    if ( !v6 )
      sub_1B64324(v4);
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
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v41; // x1
  Il2CppClass **v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v48; // x1
  Il2CppClass **v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v55; // x1
  Il2CppClass **v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v62; // x1
  Il2CppClass **v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  BlankEarthShortcutButtonListViewItemDraw_o *v69; // x1
  Il2CppClass **v70; // x0
  UnityEngine_Object_o *v71; // x23
  UnityEngine_Object_o *v72; // x23
  int32_t v73; // w2
  int32_t v74; // w3
  UnityEngine_Object_o *v75; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  UILabel_o *nameLabelUp; // x22
  BlankEarthShortcutButtonListViewItemDraw_o *v78; // x21
  UILabel_o *v79; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v85; // x21
  UIAtlas_o *v86; // x20
  int32_t IconId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_49F8FCF & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, item);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, v7);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&UICommonButtonColor_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v16);
    sub_1B640C8(&StringLiteral_89/*"\r\n"*/, v17);
    sub_1B640C8(&StringLiteral_17465/*"btn_shortcut"*/, v18);
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)sub_1B640C8(&StringLiteral_19121/*"event_logo_shortcut_"*/, v19);
    byte_49F8FCF = 1;
  }
  IconId_k__BackingField = 0;
  if ( !item )
    goto LABEL_71;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  v5->fields.onClickAction = OnClickAction_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v5->fields.onClickAction,
    (int32_t)OnClickAction_k__BackingField,
    (int32_t)method,
    v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  v5->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = (BlankEarthShortcutButtonListViewItemDraw_o **)&v5->fields.bgSprite;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.bgSprite, (int32_t)Component_object, v24, v25);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.bgSprite;
  if ( !this )
    goto LABEL_71;
  UISprite__set_atlas((UISprite_o *)this, item->fields._CommonUiAtlas_k__BackingField, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_71;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17465/*"btn_shortcut"*/, 0LL);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_71;
  ((void (__fastcall *)(BlankEarthShortcutButtonListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)v5,
                               (const MethodInfo_2E3054C *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  v5->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object;
  p_shortcutButton = (UnityEngine_Object_o **)&v5->fields.shortcutButton;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v5->fields.shortcutButton,
    (int32_t)ComponentInParent_object,
    v28,
    v29);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.shortcutButton;
  if ( !this )
    goto LABEL_71;
  onClickAction = (struct System_Threading_CancellationTokenSource_o *)v5->fields.onClickAction;
  this[1].fields.m_CancellationTokenSource = onClickAction;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this[1].fields.m_CancellationTokenSource,
    (int32_t)onClickAction,
    v30,
    v31);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this = *p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  if ( !v35 )
    goto LABEL_71;
  items = v35->fields._items;
  v39 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v35->fields._version;
  if ( !items )
    goto LABEL_71;
  size = v35->fields._size;
  v41 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)this,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v35->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v41;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v41, v36, v37);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.iconSprite;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  v45 = v35->fields._items;
  v46 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v35->fields._version;
  if ( !v45 )
    goto LABEL_71;
  v47 = v35->fields._size;
  v48 = this;
  if ( (unsigned int)v47 >= v45->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)this,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v45->obj.klass + v47;
    v35->fields._size = v47 + 1;
    v49[4] = (Il2CppClass *)v48;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v48, v43, v44);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelUp;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  v52 = v35->fields._items;
  v53 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v35->fields._version;
  if ( !v52 )
    goto LABEL_71;
  v54 = v35->fields._size;
  v55 = this;
  if ( (unsigned int)v54 >= v52->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)this,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v52->obj.klass + v54;
    v35->fields._size = v54 + 1;
    v56[4] = (Il2CppClass *)v55;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v55, v50, v51);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelBottom;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  v59 = v35->fields._items;
  v60 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v35->fields._version;
  if ( !v59 )
    goto LABEL_71;
  v61 = v35->fields._size;
  v62 = this;
  if ( (unsigned int)v61 >= v59->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)this,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &v59->obj.klass + v61;
    v35->fields._size = v61 + 1;
    v63[4] = (Il2CppClass *)v62;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v62, v57, v58);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.nameLabelMiddle;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
  v66 = v35->fields._items;
  v67 = Method_System_Collections_Generic_List_GameObject__Add__;
  ++v35->fields._version;
  if ( !v66 )
    goto LABEL_71;
  v68 = v35->fields._size;
  v69 = this;
  if ( (unsigned int)v68 >= v66->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)this,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = &v66->obj.klass + v68;
    v35->fields._size = v68 + 1;
    v70[4] = (Il2CppClass *)v69;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v69, v64, v65);
  }
  v71 = *p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
  {
    v72 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                           v35,
                                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
    if ( !v72 )
      goto LABEL_71;
    v72[1].monitor = this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v72[1].monitor, (int32_t)this, v73, v74);
    v75 = *p_shortcutButton;
    this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)UICommonButtonColor_TypeInfo;
    }
    if ( !v75 )
      goto LABEL_71;
    *(_OWORD *)&v75[2].klass = *(_OWORD *)this[2].monitor;
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
    sub_1B64324(this);
  }
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)item->fields._Name_k__BackingField;
  if ( !this )
    goto LABEL_71;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_String__Replace_61395016(
                                                         (System_String_o *)this,
                                                         (System_String_o *)StringLiteral_89/*"\r\n"*/,
                                                         (System_String_o *)StringLiteral_43/*"\n"*/,
                                                         0LL);
  if ( !this )
    goto LABEL_71;
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split((System_String_o *)this, 0xAu, 0, 0LL);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Linq_Enumerable__ToList_object_(
                                                         v76,
                                                         (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !this )
    goto LABEL_71;
  nameLabelUp = v5->fields.nameLabelUp;
  v78 = this;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)this,
                                                         0,
                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v79 = v5->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v79 )
    goto LABEL_71;
  UILabel__SetCondensedScale(
    v79,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0LL);
  nameLabelBottom = v5->fields.nameLabelBottom;
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                         (System_Collections_Generic_List_object__o *)v78,
                                                         1,
                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v82 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v83 = System_String__Concat_61375396((System_String_o *)StringLiteral_19121/*"event_logo_shortcut_"*/, v82, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v85 = v83;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BlankEarthShortcutButtonListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                         IconAtlas_k__BackingField,
                                                         0LL,
                                                         0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v86 = item->fields._IconAtlas_k__BackingField;
    if ( !v86 )
      goto LABEL_71;
    if ( UIAtlas__GetSprite(v86, v85, 0LL) )
    {
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.iconSprite;
      if ( !this )
        goto LABEL_71;
      UISprite__set_atlas((UISprite_o *)this, v86, 0LL);
      this = (BlankEarthShortcutButtonListViewItemDraw_o *)v5->fields.iconSprite;
      if ( !this )
        goto LABEL_71;
      UISprite__set_spriteName((UISprite_o *)this, v85, 0LL);
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
  struct BlankEarthShortcutUIButton_o *v6; // x0
  _BOOL4 isLongPress; // w8

  if ( (byte_49F8FD1 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isEnable);
    byte_49F8FD1 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v6 = this->fields.shortcutButton;
    if ( !v6 )
      sub_1B64324(0LL);
    if ( isEnable )
    {
      isLongPress = v6->fields.isLongPress;
      v6->fields.waitState = 1;
      if ( !isLongPress )
        UICommonButton__SetButtonEnable((UICommonButton_o *)v6, 1, 1, 0LL);
    }
    else
    {
      v6->fields.waitState = 2;
    }
  }
}