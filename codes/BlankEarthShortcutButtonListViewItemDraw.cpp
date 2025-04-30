void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4ADE8 & 1) == 0 )
  {
    sub_1B863B8(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v1);
    byte_4A4ADE8 = 1;
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

  if ( (byte_4A4ADE6 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4ADE6 = 1;
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
      sub_1B86614(v4, v5);
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
  const MethodInfo *v3; // x3
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 bgSprite; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  WarReleaseEntity_o *v37; // x22
  char v38; // w24
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x27
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  Il2CppObject *Master_object; // x0
  __int64 v44; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  __int64 v46; // x1
  Il2CppObject *ComponentInParent_object; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x22
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Action_o *onClickAction; // x1
  UnityEngine_Object_o *v54; // x23
  System_Collections_Generic_List_object__o *v55; // x23
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  __int64 v61; // x1
  Il2CppClass **v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x1
  Il2CppClass **v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x1
  Il2CppClass **v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x1
  Il2CppClass **v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x1
  Il2CppClass **v90; // x0
  struct BlankEarthShortcutUIButton_o *v91; // x21
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct BlankEarthShortcutUIButton_o *v94; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v97; // x21
  UILabel_o *v98; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v101; // x0
  System_String_o *v102; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v104; // x21
  UIAtlas_o *v105; // x22
  const MethodInfo *v106; // x3
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+0h] [xbp-A0h] BYREF
  int32_t IconId_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A4ADE4 & 1) == 0 )
  {
    sub_1B863B8(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, item);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___, v6);
    sub_1B863B8(&Method_DataManager_GetMaster_WarMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_WarReleaseMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_string___, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__, v13);
    sub_1B863B8(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__ToArray__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject___ctor__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Item__, v19);
    sub_1B863B8(&System_Collections_Generic_List_GameObject__TypeInfo, v20);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B863B8(&UICommonButtonColor_TypeInfo, v22);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v23);
    sub_1B863B8(&StringLiteral_89/*"\r\n"*/, v24);
    sub_1B863B8(&StringLiteral_17297/*"btn_shortcut"*/, v25);
    sub_1B863B8(&StringLiteral_18977/*"event_logo_shortcut_"*/, v26);
    byte_4A4ADE4 = 1;
  }
  memset(&v109, 0, sizeof(v109));
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.listViewItem, (int32_t)item, (int32_t)method, v3);
  if ( !item )
    goto LABEL_104;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  this->fields.onClickAction = OnClickAction_k__BackingField;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.onClickAction, (int32_t)OnClickAction_k__BackingField, v29, v30);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FC28D8 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bgSprite, (int32_t)Component_object, v35, v36);
  bgSprite = (__int64)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_104;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0LL);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_17297/*"btn_shortcut"*/, 0LL);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (__int64)WarMaster__GetEntityList((WarMaster_o *)bgSprite, 0LL);
  if ( !bgSprite )
    goto LABEL_104;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v107,
    (System_Collections_Generic_List_object__o *)bgSprite,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v37 = 0LL;
  v38 = 0;
  v109 = v107;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v109,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v39 )
      break;
    current = v109.fields._current;
    if ( !v109.fields._current )
      sub_1B86614(v39, v40);
    blankEarthSpotNavimenuEntity_k__BackingField = item->fields._blankEarthSpotNavimenuEntity_k__BackingField;
    if ( !blankEarthSpotNavimenuEntity_k__BackingField )
      sub_1B86614(v39, v40);
    if ( HIDWORD(v109.fields._current[7].monitor) == blankEarthSpotNavimenuEntity_k__BackingField->fields.blankEarthSpotId )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !Master_object )
        sub_1B86614(0LL, v44);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, (int32_t)current[1].klass, 0LL);
      if ( OpenEntity )
        v37 = OpenEntity;
      if ( OpenEntity )
      {
        if ( !v37 )
          sub_1B86614(OpenEntity, v46);
        if ( WarReleaseEntity__IsClose(v37, 0LL) )
          v38 = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v109,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_2F64D7C *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.shortcutButton, (int32_t)ComponentInParent_object, v49, v50);
  bgSprite = (__int64)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_104;
  onClickAction = this->fields.onClickAction;
  *(_QWORD *)(bgSprite + 112) = onClickAction;
  sub_1B8635C((CGThumbnailListItem_o *)(bgSprite + 112), (int32_t)onClickAction, v51, v52);
  v54 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
  {
    if ( (v38 & 1) == 0 )
    {
      v55 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v55,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      bgSprite = (__int64)*p_bgSprite;
      if ( !*p_bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      if ( !v55 )
        goto LABEL_104;
      items = v55->fields._items;
      v59 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v55->fields._version;
      if ( !items )
        goto LABEL_104;
      size = v55->fields._size;
      v61 = bgSprite;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v55,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &items->obj.klass + size;
        v55->fields._size = size + 1;
        v62[4] = (Il2CppClass *)v61;
        sub_1B8635C((CGThumbnailListItem_o *)(v62 + 4), v61, v56, v57);
      }
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v65 = v55->fields._items;
      v66 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v55->fields._version;
      if ( !v65 )
        goto LABEL_104;
      v67 = v55->fields._size;
      v68 = bgSprite;
      if ( (unsigned int)v67 >= v65->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v55,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &v65->obj.klass + v67;
        v55->fields._size = v67 + 1;
        v69[4] = (Il2CppClass *)v68;
        sub_1B8635C((CGThumbnailListItem_o *)(v69 + 4), v68, v63, v64);
      }
      bgSprite = (__int64)this->fields.nameLabelUp;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v72 = v55->fields._items;
      v73 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v55->fields._version;
      if ( !v72 )
        goto LABEL_104;
      v74 = v55->fields._size;
      v75 = bgSprite;
      if ( (unsigned int)v74 >= v72->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v55,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &v72->obj.klass + v74;
        v55->fields._size = v74 + 1;
        v76[4] = (Il2CppClass *)v75;
        sub_1B8635C((CGThumbnailListItem_o *)(v76 + 4), v75, v70, v71);
      }
      bgSprite = (__int64)this->fields.nameLabelBottom;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v79 = v55->fields._items;
      v80 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v55->fields._version;
      if ( !v79 )
        goto LABEL_104;
      v81 = v55->fields._size;
      v82 = bgSprite;
      if ( (unsigned int)v81 >= v79->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v55,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v83 = &v79->obj.klass + v81;
        v55->fields._size = v81 + 1;
        v83[4] = (Il2CppClass *)v82;
        sub_1B8635C((CGThumbnailListItem_o *)(v83 + 4), v82, v77, v78);
      }
      bgSprite = (__int64)this->fields.nameLabelMiddle;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v86 = v55->fields._items;
      v87 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v55->fields._version;
      if ( !v86 )
        goto LABEL_104;
      v88 = v55->fields._size;
      v89 = bgSprite;
      if ( (unsigned int)v88 >= v86->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v55,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = &v86->obj.klass + v88;
        v55->fields._size = v88 + 1;
        v90[4] = (Il2CppClass *)v89;
        sub_1B8635C((CGThumbnailListItem_o *)(v90 + 4), v89, v84, v85);
      }
      v91 = *p_shortcutButton;
      bgSprite = (__int64)System_Collections_Generic_List_object___ToArray(
                            v55,
                            (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
      if ( !v91 )
        goto LABEL_104;
      v91->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
      sub_1B8635C((CGThumbnailListItem_o *)&v91->fields.tweenTargets, bgSprite, v92, v93);
    }
    v94 = *p_shortcutButton;
    bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    }
    if ( !v94 )
      goto LABEL_104;
    v94->fields.specifyDisabledColor = *(struct UnityEngine_Color_o *)*(_QWORD *)(bgSprite + 184);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_104;
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
          goto LABEL_81;
      }
    }
LABEL_104:
    sub_1B86614(bgSprite, v28);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (__int64)System_String__Replace_61691724(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_89/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0LL);
  if ( !bgSprite )
    goto LABEL_104;
  v95 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               (System_String_o *)bgSprite,
                                                               0xAu,
                                                               0,
                                                               0LL);
  bgSprite = (__int64)System_Linq_Enumerable__ToList_object_(
                        v95,
                        (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_104;
  nameLabelUp = this->fields.nameLabelUp;
  v97 = (System_Collections_Generic_List_object__o *)bgSprite;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelUp )
    goto LABEL_104;
  UILabel__set_text(nameLabelUp, (System_String_o *)bgSprite, 0LL);
  bgSprite = (__int64)this->fields.nameLabelUp;
  if ( !bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  bgSprite = (__int64)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
  v98 = this->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v98 )
    goto LABEL_104;
  UILabel__SetCondensedScale(
    v98,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0LL);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        v97,
                        1,
                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelBottom )
    goto LABEL_104;
  UILabel__set_text(nameLabelBottom, (System_String_o *)bgSprite, 0LL);
  bgSprite = (__int64)this->fields.nameLabelBottom;
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
               bgSprite,
               *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  nameLabelMiddle = this->fields.nameLabelBottom;
  if ( !nameLabelMiddle )
    goto LABEL_104;
LABEL_81:
  UILabel__SetCondensedScale(
    nameLabelMiddle,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0LL);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v101 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v102 = System_String__Concat_61645176((System_String_o *)StringLiteral_18977/*"event_logo_shortcut_"*/, v101, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v104 = v102;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0LL, 0LL);
  if ( (bgSprite & 1) != 0 )
  {
    v105 = item->fields._IconAtlas_k__BackingField;
    if ( !v105 )
      goto LABEL_104;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v104, 0LL) )
    {
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_atlas((UISprite_o *)bgSprite, v105, 0LL);
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v104, 0LL);
    }
  }
  bgSprite = (__int64)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( (v38 & 1) != 0 )
  {
    bgSprite = (__int64)this->fields.bgSprite;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (__int64)this->fields.iconSprite;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (__int64)this->fields.nameLabelUp;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (__int64)this->fields.nameLabelBottom;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (__int64)this->fields.nameLabelMiddle;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (__int64)this->fields.nameLabelUp;
    if ( !bgSprite )
      goto LABEL_104;
    UILabel__set_effectColor((UILabel_o *)bgSprite, this->fields.closeWarShortCutBtnOutlineColor, 0LL);
    bgSprite = (__int64)this->fields.nameLabelBottom;
    if ( !bgSprite )
      goto LABEL_104;
    UILabel__set_effectColor((UILabel_o *)bgSprite, this->fields.closeWarShortCutBtnOutlineColor, 0LL);
    bgSprite = (__int64)this->fields.nameLabelMiddle;
    if ( !bgSprite )
      goto LABEL_104;
    UILabel__set_effectColor((UILabel_o *)bgSprite, this->fields.closeWarShortCutBtnOutlineColor, 0LL);
  }
  bgSprite = (__int64)this->fields.optionComponent;
  if ( !bgSprite )
    goto LABEL_104;
  BlankEarthShortcutButtonOptionComponent__SetUpOptionInfo(
    (BlankEarthShortcutButtonOptionComponent_o *)bgSprite,
    item->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    1,
    v106);
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

  if ( (byte_4A4ADE7 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4A4ADE7 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_1B86614(0LL, v6);
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
  const MethodInfo *v7; // x3
  struct BlankEarthShortcutButtonListViewItem_o *listViewItem; // x8

  if ( (byte_4A4ADE5 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4ADE5 = 1;
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
            0,
            v7);
          return;
        }
      }
LABEL_13:
      sub_1B86614(v6, v4);
    }
  }
}