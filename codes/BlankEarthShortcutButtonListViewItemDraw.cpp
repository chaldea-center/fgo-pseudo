void BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_5934CF6 & 1) == 0 )
  {
    sub_21FFC50(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    byte_5934CF6 = 1;
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
  __int64 v2; // x2
  UnityEngine_Object_o *bgSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct UISprite_o *v8; // x8

  if ( (byte_5934CF4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934CF4 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(bgSprite, 0, 0);
  result = 0.0;
  if ( v5 )
  {
    v8 = this->fields.bgSprite;
    if ( !v8 )
      sub_21FFECC(v5, v6);
    return (float)v8->fields.mWidth;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 bgSprite; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  struct System_Action_o **p_onClickAction; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  __int64 v30; // x2
  char v31; // w24
  _BOOL8 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *current; // x27
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  Il2CppObject *Master_object; // x0
  __int64 v38; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  Il2CppObject *ComponentInParent_object__58645868; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x23
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Action_o *v54; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_Object_o *v57; // x22
  __int64 v58; // x2
  System_Collections_Generic_List_object__o *v59; // x22
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  __int64 v69; // x1
  Il2CppClass **v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x1
  Il2CppClass **v81; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x1
  Il2CppClass **v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x1
  Il2CppClass **v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  __int64 v113; // x1
  Il2CppClass **v114; // x0
  struct BlankEarthShortcutUIButton_o *v115; // x21
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  struct UnityEngine_Color_o *v122; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v123; // x0
  System_Collections_Generic_List_object__o *v124; // x21
  UILabel_o *nameLabelUp; // x22
  __int64 v126; // x2
  UILabel_o *v127; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  __int64 v130; // x2
  System_String_o *v131; // x0
  System_String_o *v132; // x0
  __int64 v133; // x1
  __int64 v134; // x2
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v136; // x21
  UIAtlas_o *v137; // x22
  const MethodInfo *v138; // x3
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+0h] [xbp-A0h] BYREF
  int32_t IconId_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v141; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5934CF2 & 1) == 0 )
  {
    sub_21FFC50(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICommonButtonColor_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_87/*"\r\n"*/);
    sub_21FFC50(&StringLiteral_18247/*"btn_shortcut"*/);
    sub_21FFC50(&StringLiteral_20068/*"event_logo_shortcut_"*/);
    byte_5934CF2 = 1;
  }
  memset(&v141, 0, sizeof(v141));
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listViewItem,
    (int32_t)item,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !item )
    goto LABEL_101;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  this->fields.onClickAction = OnClickAction_k__BackingField;
  p_onClickAction = &this->fields.onClickAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickAction,
    (int32_t)OnClickAction_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bgSprite,
    (int32_t)Component_object,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  bgSprite = (__int64)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_101;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_101;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_18247/*"btn_shortcut"*/, 0);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_101;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v30);
  bgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !bgSprite )
    goto LABEL_101;
  bgSprite = (__int64)WarMaster__GetEntityList((WarMaster_o *)bgSprite, 0);
  if ( !bgSprite )
    goto LABEL_101;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v139,
    (System_Collections_Generic_List_object__o *)bgSprite,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v31 = 0;
  v141 = v139;
  v139.fields._list = 0;
  *(_QWORD *)&v139.fields._index = &v141;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v141,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v32 )
      break;
    current = v141.fields._current;
    if ( !v141.fields._current )
      sub_21FFECC(v32, v33);
    blankEarthSpotNavimenuEntity_k__BackingField = item->fields._blankEarthSpotNavimenuEntity_k__BackingField;
    if ( !blankEarthSpotNavimenuEntity_k__BackingField )
      sub_21FFECC(v32, v33);
    if ( HIDWORD(v141.fields._current[7].monitor) == blankEarthSpotNavimenuEntity_k__BackingField->fields.blankEarthSpotId )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33, v34);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !Master_object )
        sub_21FFECC(0, v38);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, (int32_t)current[1].klass, 0);
      if ( OpenEntity )
      {
        if ( WarReleaseEntity__IsClose(OpenEntity, 0) )
          v31 = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v141,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  ComponentInParent_object__58645868 = UnityEngine_Component__GetComponentInParent_object__58645868(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_37EDD6C *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object__58645868;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.shortcutButton,
    (int32_t)ComponentInParent_object__58645868,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  bgSprite = (__int64)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_101;
  v54 = *p_onClickAction;
  *(_QWORD *)(bgSprite + 112) = *p_onClickAction;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(bgSprite + 112), (int32_t)v54, v48, v49, v50, v51, v52, v53);
  v57 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55, v56);
  if ( UnityEngine_Object__op_Inequality(v57, 0, 0) )
  {
    if ( (v31 & 1) == 0 )
    {
      v59 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v59,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      bgSprite = (__int64)*p_bgSprite;
      if ( !*p_bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      if ( !v59 )
        goto LABEL_101;
      items = v59->fields._items;
      v67 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v59->fields._version;
      if ( !items )
        goto LABEL_101;
      size = v59->fields._size;
      v69 = bgSprite;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &items->obj.klass + size;
        v59->fields._size = size + 1;
        v70[4] = (Il2CppClass *)v69;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v70 + 4), v69, v60, v61, v62, v63, v64, v65);
      }
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v77 = v59->fields._items;
      v78 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v59->fields._version;
      if ( !v77 )
        goto LABEL_101;
      v79 = v59->fields._size;
      v80 = bgSprite;
      if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = &v77->obj.klass + v79;
        v59->fields._size = v79 + 1;
        v81[4] = (Il2CppClass *)v80;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 4), v80, v71, v72, v73, v74, v75, v76);
      }
      bgSprite = (__int64)this->fields.nameLabelUp;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v88 = v59->fields._items;
      v89 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v59->fields._version;
      if ( !v88 )
        goto LABEL_101;
      v90 = v59->fields._size;
      v91 = bgSprite;
      if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v92 = &v88->obj.klass + v90;
        v59->fields._size = v90 + 1;
        v92[4] = (Il2CppClass *)v91;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v92 + 4), v91, v82, v83, v84, v85, v86, v87);
      }
      bgSprite = (__int64)this->fields.nameLabelBottom;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v99 = v59->fields._items;
      v100 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v59->fields._version;
      if ( !v99 )
        goto LABEL_101;
      v101 = v59->fields._size;
      v102 = bgSprite;
      if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
      }
      else
      {
        v103 = &v99->obj.klass + v101;
        v59->fields._size = v101 + 1;
        v103[4] = (Il2CppClass *)v102;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v103 + 4), v102, v93, v94, v95, v96, v97, v98);
      }
      bgSprite = (__int64)this->fields.nameLabelMiddle;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v110 = v59->fields._items;
      v111 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v59->fields._version;
      if ( !v110 )
        goto LABEL_101;
      v112 = v59->fields._size;
      v113 = bgSprite;
      if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v59,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v114 = &v110->obj.klass + v112;
        v59->fields._size = v112 + 1;
        v114[4] = (Il2CppClass *)v113;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v114 + 4), v113, v104, v105, v106, v107, v108, v109);
      }
      v115 = *p_shortcutButton;
      bgSprite = (__int64)System_Collections_Generic_List_object___ToArray(
                            v59,
                            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
      if ( !v115 )
        goto LABEL_101;
      v115->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v115->fields.tweenTargets,
        bgSprite,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
    }
    v122 = (struct UnityEngine_Color_o *)*p_shortcutButton;
    bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v11, v58);
    if ( !v122 )
      goto LABEL_101;
    v122[3] = UICommonButtonColor_TypeInfo->static_fields->normal;
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
        if ( !*(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v11, v130);
        if ( nameLabelMiddle )
          goto LABEL_78;
      }
    }
LABEL_101:
    sub_21FFECC(bgSprite, v11);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_101;
  bgSprite = (__int64)System_String__Replace_75490096(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_87/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0);
  if ( !bgSprite )
    goto LABEL_101;
  v123 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                (System_String_o *)bgSprite,
                                                                0xAu,
                                                                0,
                                                                0);
  bgSprite = (__int64)System_Linq_Enumerable__ToList_object_(
                        v123,
                        (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_101;
  v124 = (System_Collections_Generic_List_object__o *)bgSprite;
  nameLabelUp = this->fields.nameLabelUp;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v127 = this->fields.nameLabelUp;
  if ( !*(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v11, v126);
  if ( !v127 )
    goto LABEL_101;
  UILabel__SetCondensedScale(
    v127,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        v124,
                        1,
                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v131 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v132 = System_String__Concat_75438412((System_String_o *)StringLiteral_20068/*"event_logo_shortcut_"*/, v131, 0);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v136 = v132;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v133, v134);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0, 0);
  if ( (bgSprite & 1) != 0 )
  {
    v137 = item->fields._IconAtlas_k__BackingField;
    if ( !v137 )
      goto LABEL_101;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v136, 0) )
    {
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      UISprite__set_atlas((UISprite_o *)bgSprite, v137, 0);
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v136, 0);
    }
  }
  bgSprite = (__int64)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_101;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( (v31 & 1) != 0 )
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
    v138);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthShortcutButtonListViewItemDraw__SetShortcutButtonEnable(
        BlankEarthShortcutButtonListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shortcutButton; // x21
  __int64 v6; // x1
  struct BlankEarthShortcutUIButton_o *v7; // x0
  _BOOL4 isLongPress; // w8

  if ( (byte_5934CF5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934CF5 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0, 0) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_21FFECC(0, v6);
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
  __int64 v2; // x2
  UnityEngine_Object_o *optionComponent; // x20
  BlankEarthSpotNavimenuEntity_o *v5; // x1
  const MethodInfo *v6; // x2
  BlankEarthShortcutButtonOptionComponent_o *v7; // x0
  const MethodInfo *v8; // x3
  struct BlankEarthShortcutButtonListViewItem_o *listViewItem; // x8

  if ( (byte_5934CF3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934CF3 = 1;
  }
  optionComponent = (UnityEngine_Object_o *)this->fields.optionComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(optionComponent, 0, 0) && this->fields.listViewItem )
  {
    v7 = this->fields.optionComponent;
    if ( !v7 )
      goto LABEL_13;
    v7 = (BlankEarthShortcutButtonOptionComponent_o *)BlankEarthShortcutButtonOptionComponent__CheckUpdateText(
                                                        v7,
                                                        v5,
                                                        v6);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      listViewItem = this->fields.listViewItem;
      if ( listViewItem )
      {
        v7 = this->fields.optionComponent;
        if ( v7 )
        {
          BlankEarthShortcutButtonOptionComponent__SetUpOptionInfo(
            v7,
            listViewItem->fields._blankEarthSpotNavimenuEntity_k__BackingField,
            0,
            v8);
          return;
        }
      }
LABEL_13:
      sub_21FFECC(v7, v5);
    }
  }
}