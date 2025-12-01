void BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4CC3C0E & 1) == 0 )
  {
    sub_1C713B0(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    byte_4CC3C0E = 1;
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

  if ( (byte_4CC3C0C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3C0C = 1;
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
      sub_1C71608(v4, v5);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 bgSprite; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  char v28; // w24
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x27
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  Il2CppObject *Master_object; // x0
  __int64 v34; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  Il2CppObject *ComponentInParent_object__51650456; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Action_o *onClickAction; // x1
  UnityEngine_Object_o *v51; // x23
  System_Collections_Generic_List_object__o *v52; // x23
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  __int64 v62; // x1
  Il2CppClass **v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x1
  Il2CppClass **v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  __int64 v84; // x1
  Il2CppClass **v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x1
  Il2CppClass **v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  __int64 v106; // x1
  Il2CppClass **v107; // x0
  struct BlankEarthShortcutUIButton_o *v108; // x21
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  struct BlankEarthShortcutUIButton_o *v115; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v118; // x21
  UILabel_o *v119; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v122; // x0
  System_String_o *v123; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v125; // x21
  UIAtlas_o *v126; // x22
  const MethodInfo *v127; // x3
  System_Collections_Generic_List_Enumerator_object__o v128; // [xsp+0h] [xbp-A0h] BYREF
  int32_t IconId_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CC3C0A & 1) == 0 )
  {
    sub_1C713B0(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
    sub_1C713B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_1C713B0(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICommonButtonColor_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_87/*"\r\n"*/);
    sub_1C713B0(&StringLiteral_17539/*"btn_shortcut"*/);
    sub_1C713B0(&StringLiteral_19278/*"event_logo_shortcut_"*/);
    byte_4CC3C0A = 1;
  }
  memset(&v130, 0, sizeof(v130));
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.listViewItem,
    (int32_t)item,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !item )
    goto LABEL_101;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  this->fields.onClickAction = OnClickAction_k__BackingField;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClickAction,
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
                       (const MethodInfo_31A49B8 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.bgSprite,
    (int32_t)Component_object,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  bgSprite = (__int64)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_101;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_101;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_17539/*"btn_shortcut"*/, 0);
  bgSprite = (__int64)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_101;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgSprite = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !bgSprite )
    goto LABEL_101;
  bgSprite = (__int64)WarMaster__GetEntityList((WarMaster_o *)bgSprite, 0);
  if ( !bgSprite )
    goto LABEL_101;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v128,
    (System_Collections_Generic_List_object__o *)bgSprite,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v28 = 0;
  v130 = v128;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v130,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v29 )
      break;
    current = v130.fields._current;
    if ( !v130.fields._current )
      sub_1C71608(v29, v30);
    blankEarthSpotNavimenuEntity_k__BackingField = item->fields._blankEarthSpotNavimenuEntity_k__BackingField;
    if ( !blankEarthSpotNavimenuEntity_k__BackingField )
      sub_1C71608(v29, v30);
    if ( HIDWORD(v130.fields._current[7].monitor) == blankEarthSpotNavimenuEntity_k__BackingField->fields.blankEarthSpotId )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !Master_object )
        sub_1C71608(0, v34);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, (int32_t)current[1].klass, 0);
      if ( OpenEntity )
      {
        if ( WarReleaseEntity__IsClose(OpenEntity, 0) )
          v28 = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v130,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  ComponentInParent_object__51650456 = UnityEngine_Component__GetComponentInParent_object__51650456(
                                         (UnityEngine_Component_o *)this,
                                         (const MethodInfo_3141F98 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object__51650456;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.shortcutButton,
    (int32_t)ComponentInParent_object__51650456,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  bgSprite = (__int64)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_101;
  onClickAction = this->fields.onClickAction;
  *(_QWORD *)(bgSprite + 112) = onClickAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(bgSprite + 112), (int32_t)onClickAction, v44, v45, v46, v47, v48, v49);
  v51 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
  {
    if ( (v28 & 1) == 0 )
    {
      v52 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      bgSprite = (__int64)*p_bgSprite;
      if ( !*p_bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      if ( !v52 )
        goto LABEL_101;
      items = v52->fields._items;
      v60 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v52->fields._version;
      if ( !items )
        goto LABEL_101;
      size = v52->fields._size;
      v62 = bgSprite;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        v52->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v62;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v63 + 4), v62, v53, v54, v55, v56, v57, v58);
      }
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v70 = v52->fields._items;
      v71 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v52->fields._version;
      if ( !v70 )
        goto LABEL_101;
      v72 = v52->fields._size;
      v73 = bgSprite;
      if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = &v70->obj.klass + v72;
        v52->fields._size = v72 + 1;
        v74[4] = (Il2CppClass *)v73;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v74 + 4), v73, v64, v65, v66, v67, v68, v69);
      }
      bgSprite = (__int64)this->fields.nameLabelUp;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v81 = v52->fields._items;
      v82 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v52->fields._version;
      if ( !v81 )
        goto LABEL_101;
      v83 = v52->fields._size;
      v84 = bgSprite;
      if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &v81->obj.klass + v83;
        v52->fields._size = v83 + 1;
        v85[4] = (Il2CppClass *)v84;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v85 + 4), v84, v75, v76, v77, v78, v79, v80);
      }
      bgSprite = (__int64)this->fields.nameLabelBottom;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v92 = v52->fields._items;
      v93 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v52->fields._version;
      if ( !v92 )
        goto LABEL_101;
      v94 = v52->fields._size;
      v95 = bgSprite;
      if ( (unsigned int)v94 >= LODWORD(v92->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v96 = &v92->obj.klass + v94;
        v52->fields._size = v94 + 1;
        v96[4] = (Il2CppClass *)v95;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v96 + 4), v95, v86, v87, v88, v89, v90, v91);
      }
      bgSprite = (__int64)this->fields.nameLabelMiddle;
      if ( !bgSprite )
        goto LABEL_101;
      bgSprite = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0);
      v103 = v52->fields._items;
      v104 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v52->fields._version;
      if ( !v103 )
        goto LABEL_101;
      v105 = v52->fields._size;
      v106 = bgSprite;
      if ( (unsigned int)v105 >= LODWORD(v103->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v52,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
      }
      else
      {
        v107 = &v103->obj.klass + v105;
        v52->fields._size = v105 + 1;
        v107[4] = (Il2CppClass *)v106;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v107 + 4), v106, v97, v98, v99, v100, v101, v102);
      }
      v108 = *p_shortcutButton;
      bgSprite = (__int64)System_Collections_Generic_List_object___ToArray(
                            v52,
                            (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
      if ( !v108 )
        goto LABEL_101;
      v108->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v108->fields.tweenTargets,
        bgSprite,
        v109,
        v110,
        v111,
        v112,
        v113,
        v114);
    }
    v115 = *p_shortcutButton;
    bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      bgSprite = (__int64)UICommonButtonColor_TypeInfo;
    }
    if ( !v115 )
      goto LABEL_101;
    v115->fields.specifyDisabledColor = *(struct UnityEngine_Color_o *)*(_QWORD *)(bgSprite + 184);
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
    sub_1C71608(bgSprite, v11);
  }
  bgSprite = (__int64)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_101;
  bgSprite = (__int64)System_String__Replace_64078288(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_87/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0);
  if ( !bgSprite )
    goto LABEL_101;
  v116 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                (System_String_o *)bgSprite,
                                                                0xAu,
                                                                0,
                                                                0);
  bgSprite = (__int64)System_Linq_Enumerable__ToList_object_(
                        v116,
                        (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_101;
  nameLabelUp = this->fields.nameLabelUp;
  v118 = (System_Collections_Generic_List_object__o *)bgSprite;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v119 = this->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v119 )
    goto LABEL_101;
  UILabel__SetCondensedScale(
    v119,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (__int64)System_Collections_Generic_List_object___get_Item(
                        v118,
                        1,
                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v122 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0);
  v123 = System_String__Concat_64031724((System_String_o *)StringLiteral_19278/*"event_logo_shortcut_"*/, v122, 0);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v125 = v123;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0, 0);
  if ( (bgSprite & 1) != 0 )
  {
    v126 = item->fields._IconAtlas_k__BackingField;
    if ( !v126 )
      goto LABEL_101;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v125, 0) )
    {
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      UISprite__set_atlas((UISprite_o *)bgSprite, v126, 0);
      bgSprite = (__int64)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_101;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v125, 0);
    }
  }
  bgSprite = (__int64)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_101;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( (v28 & 1) != 0 )
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
    v127);
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

  if ( (byte_4CC3C0D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3C0D = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0, 0) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_1C71608(0, v6);
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

  if ( (byte_4CC3C0B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC3C0B = 1;
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
      sub_1C71608(v6, v4);
    }
  }
}