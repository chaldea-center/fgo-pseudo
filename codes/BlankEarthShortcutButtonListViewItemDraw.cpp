void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4A57CB4 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    byte_4A57CB4 = 1;
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

  if ( (byte_4A57CB2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CB2 = 1;
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
      sub_1B8880C(v4, v5);
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
  __int64 bgSprite; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  WarReleaseEntity_o *v16; // x22
  char v17; // w24
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x27
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  Il2CppObject *Master_object; // x0
  __int64 v23; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  __int64 v25; // x1
  Il2CppObject *ComponentInParent_object; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Action_o *onClickAction; // x1
  UnityEngine_Object_o *v33; // x23
  System_Collections_Generic_List_object__o *v34; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  __int64 v40; // x1
  Il2CppClass **v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x1
  Il2CppClass **v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x1
  Il2CppClass **v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x1
  Il2CppClass **v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x1
  Il2CppClass **v69; // x0
  struct BlankEarthShortcutUIButton_o *v70; // x21
  int32_t v71; // w2
  int32_t v72; // w3
  struct BlankEarthShortcutUIButton_o *v73; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v76; // x21
  UILabel_o *v77; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v83; // x21
  UIAtlas_o *v84; // x22
  const MethodInfo *v85; // x2
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+0h] [xbp-A0h] BYREF
  int32_t IconId_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A57CB0 & 1) == 0 )
  {
    sub_1B885B0(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UICommonButtonColor_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_89/*"\r\n"*/);
    sub_1B885B0(&StringLiteral_17535/*"btn_shortcut"*/);
    sub_1B885B0(&StringLiteral_19197/*"event_logo_shortcut_"*/);
    byte_4A57CB0 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listViewItem, (int32_t)item, (int32_t)method, v3);
  if ( !item )
    goto LABEL_104;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  this->fields.onClickAction = OnClickAction_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickAction,
    (int32_t)OnClickAction_k__BackingField,
    v8,
    v9);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bgSprite, (int32_t)Component_object, v14, v15);
  bgSprite = (__int64)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_104;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0LL);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_17535/*"btn_shortcut"*/, 0LL);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (__int64)WarMaster__GetEntityList((WarMaster_o *)bgSprite, 0LL);
  if ( !bgSprite )
    goto LABEL_104;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    (System_Collections_Generic_List_object__o *)bgSprite,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v16 = 0LL;
  v17 = 0;
  v88 = v86;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v18 )
      break;
    current = v88.fields._current;
    if ( !v88.fields._current )
      sub_1B8880C(v18, v19);
    blankEarthSpotNavimenuEntity_k__BackingField = item->fields._blankEarthSpotNavimenuEntity_k__BackingField;
    if ( !blankEarthSpotNavimenuEntity_k__BackingField )
      sub_1B8880C(v18, v19);
    if ( HIDWORD(v88.fields._current[7].monitor) == blankEarthSpotNavimenuEntity_k__BackingField->fields.blankEarthSpotId )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !Master_object )
        sub_1B8880C(0LL, v23);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, (int32_t)current[1].klass, 0LL);
      if ( OpenEntity )
        v16 = OpenEntity;
      if ( OpenEntity )
      {
        if ( !v16 )
          sub_1B8880C(OpenEntity, v25);
        if ( WarReleaseEntity__IsClose(v16, 0LL) )
          v17 = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_2E76A68 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.shortcutButton,
    (int32_t)ComponentInParent_object,
    v28,
    v29);
  bgSprite = (__int64)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_104;
  onClickAction = this->fields.onClickAction;
  *(_QWORD *)(bgSprite + 112) = onClickAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(bgSprite + 112), (int32_t)onClickAction, v30, v31);
  v33 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
  {
    if ( (v17 & 1) == 0 )
    {
      v34 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v34,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      bgSprite = (__int64)*p_bgSprite;
      if ( !*p_bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      if ( !v34 )
        goto LABEL_104;
      items = v34->fields._items;
      v38 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v34->fields._version;
      if ( !items )
        goto LABEL_104;
      size = v34->fields._size;
      v40 = bgSprite;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v40;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), v40, v35, v36);
      }
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v44 = v34->fields._items;
      v45 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v34->fields._version;
      if ( !v44 )
        goto LABEL_104;
      v46 = v34->fields._size;
      v47 = bgSprite;
      if ( (unsigned int)v46 >= v44->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &v44->obj.klass + v46;
        v34->fields._size = v46 + 1;
        v48[4] = (Il2CppClass *)v47;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 4), v47, v42, v43);
      }
      bgSprite = (__int64)this->fields.nameLabelUp;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v51 = v34->fields._items;
      v52 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v34->fields._version;
      if ( !v51 )
        goto LABEL_104;
      v53 = v34->fields._size;
      v54 = bgSprite;
      if ( (unsigned int)v53 >= v51->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &v51->obj.klass + v53;
        v34->fields._size = v53 + 1;
        v55[4] = (Il2CppClass *)v54;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 4), v54, v49, v50);
      }
      bgSprite = (__int64)this->fields.nameLabelBottom;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v58 = v34->fields._items;
      v59 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v34->fields._version;
      if ( !v58 )
        goto LABEL_104;
      v60 = v34->fields._size;
      v61 = bgSprite;
      if ( (unsigned int)v60 >= v58->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &v58->obj.klass + v60;
        v34->fields._size = v60 + 1;
        v62[4] = (Il2CppClass *)v61;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v62 + 4), v61, v56, v57);
      }
      bgSprite = (__int64)this->fields.nameLabelMiddle;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v65 = v34->fields._items;
      v66 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v34->fields._version;
      if ( !v65 )
        goto LABEL_104;
      v67 = v34->fields._size;
      v68 = bgSprite;
      if ( (unsigned int)v67 >= v65->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &v65->obj.klass + v67;
        v34->fields._size = v67 + 1;
        v69[4] = (Il2CppClass *)v68;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 4), v68, v63, v64);
      }
      v70 = *p_shortcutButton;
      bgSprite = (__int64)System_Collections_Generic_List_object___ToArray(
                            v34,
                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
      if ( !v70 )
        goto LABEL_104;
      v70->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v70->fields.tweenTargets, bgSprite, v71, v72);
    }
    v73 = *p_shortcutButton;
    bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    }
    if ( !v73 )
      goto LABEL_104;
    v73->fields.specifyDisabledColor = *(struct UnityEngine_Color_o *)*(_QWORD *)(bgSprite + 184);
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
    sub_1B8880C(bgSprite, v7);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (__int64)System_String__Replace_61726660(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_89/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0LL);
  if ( !bgSprite )
    goto LABEL_104;
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                               (System_String_o *)bgSprite,
                                                               0xAu,
                                                               0,
                                                               0LL);
  bgSprite = (__int64)System_Linq_Enumerable__ToList_object_(
                        v74,
                        (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_104;
  nameLabelUp = this->fields.nameLabelUp;
  v76 = (System_Collections_Generic_List_object__o *)bgSprite;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v77 = this->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v77 )
    goto LABEL_104;
  UILabel__SetCondensedScale(
    v77,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0LL);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        v76,
                        1,
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
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
    0LL);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v80 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v81 = System_String__Concat_61707032((System_String_o *)StringLiteral_19197/*"event_logo_shortcut_"*/, v80, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v83 = v81;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0LL, 0LL);
  if ( (bgSprite & 1) != 0 )
  {
    v84 = item->fields._IconAtlas_k__BackingField;
    if ( !v84 )
      goto LABEL_104;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v83, 0LL) )
    {
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_atlas((UISprite_o *)bgSprite, v84, 0LL);
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v83, 0LL);
    }
  }
  bgSprite = (__int64)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( (v17 & 1) != 0 )
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
    v85);
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

  if ( (byte_4A57CB3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CB3 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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

  if ( (byte_4A57CB1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57CB1 = 1;
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
      sub_1B8880C(v6, v4);
    }
  }
}