void BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C34226 & 1) == 0 )
  {
    sub_1C32C20(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    byte_4C34226 = 1;
  }
  BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH = 115;
}


void BlankEarthShortcutButtonListViewItemDraw___ctor(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float BlankEarthShortcutButtonListViewItemDraw__GetButtonWidth(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgSprite; // x20
  _BOOL8 v4; // x0
  float result; // s0
  struct UISprite_o *v6; // x8

  if ( (byte_4C34224 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34224 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bgSprite, 0, 0);
  result = 0.0;
  if ( v4 )
  {
    v6 = this->fields.bgSprite;
    if ( !v6 )
      sub_1C32E7C(v4);
    return (float)v6->fields.mWidth;
  }
  return result;
}


void BlankEarthShortcutButtonListViewItemDraw__OnClickButton(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickAction, 0);
}


void BlankEarthShortcutButtonListViewItemDraw__SetItem(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        BlankEarthShortcutButtonListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 bgSprite; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  char v15; // w24
  _BOOL8 v16; // x0
  Il2CppObject *current; // x27
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  Il2CppObject *Master_object; // x0
  WarReleaseEntity_o *OpenEntity; // x0
  Il2CppObject *ComponentInParent_object__51200636; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Action_o *onClickAction; // x1
  UnityEngine_Object_o *v28; // x23
  System_Collections_Generic_List_object__o *v29; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  __int64 v35; // x1
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x1
  Il2CppClass **v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x1
  Il2CppClass **v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x1
  Il2CppClass **v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x1
  Il2CppClass **v64; // x0
  struct BlankEarthShortcutUIButton_o *v65; // x21
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct BlankEarthShortcutUIButton_o *v68; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v71; // x21
  UILabel_o *v72; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v78; // x21
  UIAtlas_o *v79; // x22
  const MethodInfo *v80; // x3
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+0h] [xbp-A0h] BYREF
  int32_t IconId_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C34222 & 1) == 0 )
  {
    sub_1C32C20(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICommonButtonColor_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_87/*"\r\n"*/);
    sub_1C32C20(&StringLiteral_17515/*"btn_shortcut"*/);
    sub_1C32C20(&StringLiteral_19215/*"event_logo_shortcut_"*/);
    byte_4C34222 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.listViewItem, (int32_t)item, (int32_t)method, v3);
  if ( !item )
    goto LABEL_101;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  this->fields.onClickAction = OnClickAction_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickAction, (int32_t)OnClickAction_k__BackingField, v7, v8);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgSprite, (int32_t)Component_object, v13, v14);
  bgSprite = (__int64)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_101;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_101;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_17515/*"btn_shortcut"*/, 0);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_101;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !bgSprite )
    goto LABEL_101;
  bgSprite = (__int64)WarMaster__GetEntityList((WarMaster_o *)bgSprite, 0);
  if ( !bgSprite )
    goto LABEL_101;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v81,
    (System_Collections_Generic_List_object__o *)bgSprite,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v15 = 0;
  v83 = v81;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v16 )
      break;
    current = v83.fields._current;
    if ( !v83.fields._current )
      sub_1C32E7C(v16);
    blankEarthSpotNavimenuEntity_k__BackingField = item->fields._blankEarthSpotNavimenuEntity_k__BackingField;
    if ( !blankEarthSpotNavimenuEntity_k__BackingField )
      sub_1C32E7C(v16);
    if ( HIDWORD(v83.fields._current[7].monitor) == blankEarthSpotNavimenuEntity_k__BackingField->fields.blankEarthSpotId )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !Master_object )
        sub_1C32E7C(0);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, (int32_t)current[1].klass, 0);
      if ( OpenEntity )
      {
        if ( WarReleaseEntity__IsClose(OpenEntity, 0) )
          v15 = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  ComponentInParent_object__51200636 = UnityEngine_Component__GetComponentInParent_object__51200636(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30D427C *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object__51200636;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.shortcutButton,
    (int32_t)ComponentInParent_object__51200636,
    v23,
    v24);
  bgSprite = (__int64)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_101;
  onClickAction = this->fields.onClickAction;
  *(_QWORD *)(bgSprite + 112) = onClickAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(bgSprite + 112), (int32_t)onClickAction, v25, v26);
  v28 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
  {
    if ( (v15 & 1) == 0 )
    {
      v29 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v29,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      bgSprite = (__int64)*p_bgSprite;
      if ( !*p_bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      if ( !v29 )
        goto LABEL_101;
      items = v29->fields._items;
      v33 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v29->fields._version;
      if ( !items )
        goto LABEL_101;
      size = v29->fields._size;
      v35 = bgSprite;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v35;
        sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 4), v35, v30, v31);
      }
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v39 = v29->fields._items;
      v40 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v29->fields._version;
      if ( !v39 )
        goto LABEL_101;
      v41 = v29->fields._size;
      v42 = bgSprite;
      if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &v39->obj.klass + v41;
        v29->fields._size = v41 + 1;
        v43[4] = (Il2CppClass *)v42;
        sub_1C32BC4((CGThumbnailListItem_o *)(v43 + 4), v42, v37, v38);
      }
      bgSprite = (__int64)this->fields.nameLabelUp;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v46 = v29->fields._items;
      v47 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v29->fields._version;
      if ( !v46 )
        goto LABEL_101;
      v48 = v29->fields._size;
      v49 = bgSprite;
      if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &v46->obj.klass + v48;
        v29->fields._size = v48 + 1;
        v50[4] = (Il2CppClass *)v49;
        sub_1C32BC4((CGThumbnailListItem_o *)(v50 + 4), v49, v44, v45);
      }
      bgSprite = (__int64)this->fields.nameLabelBottom;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v53 = v29->fields._items;
      v54 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v29->fields._version;
      if ( !v53 )
        goto LABEL_101;
      v55 = v29->fields._size;
      v56 = bgSprite;
      if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &v53->obj.klass + v55;
        v29->fields._size = v55 + 1;
        v57[4] = (Il2CppClass *)v56;
        sub_1C32BC4((CGThumbnailListItem_o *)(v57 + 4), v56, v51, v52);
      }
      bgSprite = (__int64)this->fields.nameLabelMiddle;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v60 = v29->fields._items;
      v61 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v29->fields._version;
      if ( !v60 )
        goto LABEL_101;
      v62 = v29->fields._size;
      v63 = bgSprite;
      if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &v60->obj.klass + v62;
        v29->fields._size = v62 + 1;
        v64[4] = (Il2CppClass *)v63;
        sub_1C32BC4((CGThumbnailListItem_o *)(v64 + 4), v63, v58, v59);
      }
      v65 = *p_shortcutButton;
      bgSprite = (__int64)System_Collections_Generic_List_object___ToArray(
                            v29,
                            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
      if ( !v65 )
        goto LABEL_101;
      v65->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
      sub_1C32BC4((CGThumbnailListItem_o *)&v65->fields.tweenTargets, bgSprite, v66, v67);
    }
    v68 = *p_shortcutButton;
    bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    }
    if ( !v68 )
      goto LABEL_101;
    v68->fields.specifyDisabledColor = *(struct UnityEngine_Color_o *)*(_QWORD *)(bgSprite + 184);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_101;
  if ( !System_String__Contains((System_String_o *)bgSprite, (System_String_o *)StringLiteral_43/*"\n"*/, 0) )
  {
    bgSprite = (__int64)this->fields.nameLabelMiddle;
    if ( bgSprite )
    {
      UILabel__set_text((UILabel_o *)bgSprite, item->fields._Name_k__BackingField, 0);
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
          goto LABEL_78;
      }
    }
LABEL_101:
    sub_1C32E7C(bgSprite);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_101;
  bgSprite = (__int64)System_String__Replace_63565092(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_87/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0);
  if ( !bgSprite )
    goto LABEL_101;
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               (System_String_o *)bgSprite,
                                                               0xAu,
                                                               0,
                                                               0);
  bgSprite = (__int64)System_Linq_Enumerable__ToList_object_(
                        v69,
                        (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_101;
  nameLabelUp = this->fields.nameLabelUp;
  v71 = (System_Collections_Generic_List_object__o *)bgSprite;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelUp )
    goto LABEL_101;
  UILabel__set_text(nameLabelUp, (System_String_o *)bgSprite, 0);
  bgSprite = (__int64)this->fields.nameLabelUp;
  if ( !bgSprite )
    goto LABEL_101;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  bgSprite = (__int64)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
  v72 = this->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v72 )
    goto LABEL_101;
  UILabel__SetCondensedScale(
    v72,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        v71,
                        1,
                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelBottom )
    goto LABEL_101;
  UILabel__set_text(nameLabelBottom, (System_String_o *)bgSprite, 0);
  bgSprite = (__int64)this->fields.nameLabelBottom;
  if ( !bgSprite )
    goto LABEL_101;
  bgSprite = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
               bgSprite,
               *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  nameLabelMiddle = this->fields.nameLabelBottom;
  if ( !nameLabelMiddle )
    goto LABEL_101;
LABEL_78:
  UILabel__SetCondensedScale(
    nameLabelMiddle,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v75 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v76 = System_String__Concat_63518544((System_String_o *)StringLiteral_19215/*"event_logo_shortcut_"*/, v75, 0);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v78 = v76;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0, 0);
  if ( (bgSprite & 1) != 0 )
  {
    v79 = item->fields._IconAtlas_k__BackingField;
    if ( !v79 )
      goto LABEL_101;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v78, 0) )
    {
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      UISprite__set_atlas((UISprite_o *)bgSprite, v79, 0);
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v78, 0);
    }
  }
  bgSprite = (__int64)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_101;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( (v15 & 1) != 0 )
  {
    bgSprite = (__int64)this->fields.bgSprite;
    if ( !bgSprite )
      goto LABEL_101;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0);
    bgSprite = (__int64)this->fields.iconSprite;
    if ( !bgSprite )
      goto LABEL_101;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0);
    bgSprite = (__int64)this->fields.nameLabelUp;
    if ( !bgSprite )
      goto LABEL_101;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0);
    bgSprite = (__int64)this->fields.nameLabelBottom;
    if ( !bgSprite )
      goto LABEL_101;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0);
    bgSprite = (__int64)this->fields.nameLabelMiddle;
    if ( !bgSprite )
      goto LABEL_101;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0);
    bgSprite = (__int64)this->fields.nameLabelUp;
    if ( !bgSprite )
      goto LABEL_101;
    UILabel__set_effectColor((UILabel_o *)bgSprite, this->fields.closeWarShortCutBtnOutlineColor, 0);
    bgSprite = (__int64)this->fields.nameLabelBottom;
    if ( !bgSprite )
      goto LABEL_101;
    UILabel__set_effectColor((UILabel_o *)bgSprite, this->fields.closeWarShortCutBtnOutlineColor, 0);
    bgSprite = (__int64)this->fields.nameLabelMiddle;
    if ( !bgSprite )
      goto LABEL_101;
    UILabel__set_effectColor((UILabel_o *)bgSprite, this->fields.closeWarShortCutBtnOutlineColor, 0);
  }
  bgSprite = (__int64)this->fields.optionComponent;
  if ( !bgSprite )
    goto LABEL_101;
  BlankEarthShortcutButtonOptionComponent__SetUpOptionInfo(
    (BlankEarthShortcutButtonOptionComponent_o *)bgSprite,
    item->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    1,
    v80);
}


void BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shortcutButton; // x21
  struct BlankEarthShortcutUIButton_o *v6; // x0
  _BOOL4 isLongPress; // w8

  if ( (byte_4C34225 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34225 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0, 0) )
  {
    v6 = this->fields.shortcutButton;
    if ( !v6 )
      sub_1C32E7C(0);
    if ( isEnable )
    {
      isLongPress = v6->fields.isLongPress;
      v6->fields.waitState = 1;
      if ( !isLongPress )
        UICommonButton__SetButtonEnable((UICommonButton_o *)v6, 1, 1, 0);
    }
    else
    {
      v6->fields.waitState = 2;
    }
  }
}


void BlankEarthShortcutButtonListViewItemDraw__Update(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *optionComponent; // x20
  BlankEarthSpotNavimenuEntity_o *v4; // x1
  const MethodInfo *v5; // x2
  BlankEarthShortcutButtonOptionComponent_o *v6; // x0
  const MethodInfo *v7; // x3
  struct BlankEarthShortcutButtonListViewItem_o *listViewItem; // x8

  if ( (byte_4C34223 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34223 = 1;
  }
  optionComponent = (UnityEngine_Object_o *)this->fields.optionComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(optionComponent, 0, 0) && this->fields.listViewItem )
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
            0,
            v7);
          return;
        }
      }
LABEL_13:
      sub_1C32E7C(v6);
    }
  }
}