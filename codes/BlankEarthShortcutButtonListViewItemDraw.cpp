void BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C23B55 & 1) == 0 )
  {
    sub_1C2D490(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    byte_4C23B55 = 1;
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
  __int64 v5; // x1
  float result; // s0
  struct UISprite_o *v7; // x8

  if ( (byte_4C23B53 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23B53 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(bgSprite, 0, 0);
  result = 0.0;
  if ( v4 )
  {
    v7 = this->fields.bgSprite;
    if ( !v7 )
      sub_1C2D6EC(v4, v5);
    return (float)v7->fields.mWidth;
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  char v16; // w24
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x27
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  Il2CppObject *ComponentInParent_object__51140572; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Action_o *onClickAction; // x1
  UnityEngine_Object_o *v31; // x23
  System_Collections_Generic_List_object__o *v32; // x23
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  __int64 v38; // x1
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x1
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x1
  Il2CppClass **v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x1
  Il2CppClass **v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x1
  Il2CppClass **v67; // x0
  struct BlankEarthShortcutUIButton_o *v68; // x21
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct BlankEarthShortcutUIButton_o *v71; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v74; // x21
  UILabel_o *v75; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v78; // x0
  System_String_o *v79; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v81; // x21
  UIAtlas_o *v82; // x22
  const MethodInfo *v83; // x3
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+0h] [xbp-A0h] BYREF
  int32_t IconId_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C23B51 & 1) == 0 )
  {
    sub_1C2D490(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UICommonButtonColor_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_87/*"\r\n"*/);
    sub_1C2D490(&StringLiteral_17511/*"btn_shortcut"*/);
    sub_1C2D490(&StringLiteral_19204/*"event_logo_shortcut_"*/);
    byte_4C23B51 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.listViewItem, (int32_t)item, (int32_t)method, v3);
  if ( !item )
    goto LABEL_101;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  this->fields.onClickAction = OnClickAction_k__BackingField;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickAction, (int32_t)OnClickAction_k__BackingField, v8, v9);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.bgSprite, (int32_t)Component_object, v14, v15);
  bgSprite = (__int64)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_101;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_101;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_17511/*"btn_shortcut"*/, 0);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_101;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
  if ( !bgSprite )
    goto LABEL_101;
  bgSprite = (__int64)WarMaster__GetEntityList((WarMaster_o *)bgSprite, 0);
  if ( !bgSprite )
    goto LABEL_101;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    (System_Collections_Generic_List_object__o *)bgSprite,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v16 = 0;
  v86 = v84;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v86,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v17 )
      break;
    current = v86.fields._current;
    if ( !v86.fields._current )
      sub_1C2D6EC(v17, v18);
    blankEarthSpotNavimenuEntity_k__BackingField = item->fields._blankEarthSpotNavimenuEntity_k__BackingField;
    if ( !blankEarthSpotNavimenuEntity_k__BackingField )
      sub_1C2D6EC(v17, v18);
    if ( HIDWORD(v86.fields._current[7].monitor) == blankEarthSpotNavimenuEntity_k__BackingField->fields.blankEarthSpotId )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !Master_object )
        sub_1C2D6EC(0, v22);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, (int32_t)current[1].klass, 0);
      if ( OpenEntity )
      {
        if ( WarReleaseEntity__IsClose(OpenEntity, 0) )
          v16 = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v86,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  ComponentInParent_object__51140572 = UnityEngine_Component__GetComponentInParent_object__51140572(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_30C57DC *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object__51140572;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.shortcutButton,
    (int32_t)ComponentInParent_object__51140572,
    v26,
    v27);
  bgSprite = (__int64)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_101;
  onClickAction = this->fields.onClickAction;
  *(_QWORD *)(bgSprite + 112) = onClickAction;
  sub_1C2D434((CGThumbnailListItem_o *)(bgSprite + 112), (int32_t)onClickAction, v28, v29);
  v31 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
    if ( (v16 & 1) == 0 )
    {
      v32 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      bgSprite = (__int64)*p_bgSprite;
      if ( !*p_bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      if ( !v32 )
        goto LABEL_101;
      items = v32->fields._items;
      v36 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v32->fields._version;
      if ( !items )
        goto LABEL_101;
      size = v32->fields._size;
      v38 = bgSprite;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v32->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v38;
        sub_1C2D434((CGThumbnailListItem_o *)(v39 + 4), v38, v33, v34);
      }
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v42 = v32->fields._items;
      v43 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v32->fields._version;
      if ( !v42 )
        goto LABEL_101;
      v44 = v32->fields._size;
      v45 = bgSprite;
      if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &v42->obj.klass + v44;
        v32->fields._size = v44 + 1;
        v46[4] = (Il2CppClass *)v45;
        sub_1C2D434((CGThumbnailListItem_o *)(v46 + 4), v45, v40, v41);
      }
      bgSprite = (__int64)this->fields.nameLabelUp;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v49 = v32->fields._items;
      v50 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v32->fields._version;
      if ( !v49 )
        goto LABEL_101;
      v51 = v32->fields._size;
      v52 = bgSprite;
      if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &v49->obj.klass + v51;
        v32->fields._size = v51 + 1;
        v53[4] = (Il2CppClass *)v52;
        sub_1C2D434((CGThumbnailListItem_o *)(v53 + 4), v52, v47, v48);
      }
      bgSprite = (__int64)this->fields.nameLabelBottom;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v56 = v32->fields._items;
      v57 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v32->fields._version;
      if ( !v56 )
        goto LABEL_101;
      v58 = v32->fields._size;
      v59 = bgSprite;
      if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &v56->obj.klass + v58;
        v32->fields._size = v58 + 1;
        v60[4] = (Il2CppClass *)v59;
        sub_1C2D434((CGThumbnailListItem_o *)(v60 + 4), v59, v54, v55);
      }
      bgSprite = (__int64)this->fields.nameLabelMiddle;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v63 = v32->fields._items;
      v64 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v32->fields._version;
      if ( !v63 )
        goto LABEL_101;
      v65 = v32->fields._size;
      v66 = bgSprite;
      if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v32,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &v63->obj.klass + v65;
        v32->fields._size = v65 + 1;
        v67[4] = (Il2CppClass *)v66;
        sub_1C2D434((CGThumbnailListItem_o *)(v67 + 4), v66, v61, v62);
      }
      v68 = *p_shortcutButton;
      bgSprite = (__int64)System_Collections_Generic_List_object___ToArray(
                            v32,
                            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
      if ( !v68 )
        goto LABEL_101;
      v68->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
      sub_1C2D434((CGThumbnailListItem_o *)&v68->fields.tweenTargets, bgSprite, v69, v70);
    }
    v71 = *p_shortcutButton;
    bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    }
    if ( !v71 )
      goto LABEL_101;
    v71->fields.specifyDisabledColor = *(struct UnityEngine_Color_o *)*(_QWORD *)(bgSprite + 184);
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
    sub_1C2D6EC(bgSprite, v7);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_101;
  bgSprite = (__int64)System_String__Replace_63504412(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_87/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0);
  if ( !bgSprite )
    goto LABEL_101;
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               (System_String_o *)bgSprite,
                                                               0xAu,
                                                               0,
                                                               0);
  bgSprite = (__int64)System_Linq_Enumerable__ToList_object_(
                        v72,
                        (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_101;
  nameLabelUp = this->fields.nameLabelUp;
  v74 = (System_Collections_Generic_List_object__o *)bgSprite;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v75 = this->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v75 )
    goto LABEL_101;
  UILabel__SetCondensedScale(
    v75,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        v74,
                        1,
                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v78 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v79 = System_String__Concat_63457864((System_String_o *)StringLiteral_19204/*"event_logo_shortcut_"*/, v78, 0);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v81 = v79;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0, 0);
  if ( (bgSprite & 1) != 0 )
  {
    v82 = item->fields._IconAtlas_k__BackingField;
    if ( !v82 )
      goto LABEL_101;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v81, 0) )
    {
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      UISprite__set_atlas((UISprite_o *)bgSprite, v82, 0);
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v81, 0);
    }
  }
  bgSprite = (__int64)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_101;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( (v16 & 1) != 0 )
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
    v83);
}


void BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shortcutButton; // x21
  __int64 v6; // x1
  struct BlankEarthShortcutUIButton_o *v7; // x0
  _BOOL4 isLongPress; // w8

  if ( (byte_4C23B54 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23B54 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0, 0) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    if ( isEnable )
    {
      isLongPress = v7->fields.isLongPress;
      v7->fields.waitState = 1;
      if ( !isLongPress )
        UICommonButton__SetButtonEnable((UICommonButton_o *)v7, 1, 1, 0);
    }
    else
    {
      v7->fields.waitState = 2;
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

  if ( (byte_4C23B52 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23B52 = 1;
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
      sub_1C2D6EC(v6, v4);
    }
  }
}