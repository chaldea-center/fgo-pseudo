void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4BD8F8B & 1) == 0 )
  {
    sub_1C21E38(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    byte_4BD8F8B = 1;
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

  if ( (byte_4BD8F89 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8F89 = 1;
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
      sub_1C22094(v4, v5);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t bgSprite; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  WarReleaseEntity_o *v28; // x22
  char v29; // w24
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x27
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  Il2CppObject *Master_object; // x0
  __int64 v35; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  __int64 v37; // x1
  Il2CppObject *ComponentInParent_object; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct System_Action_o *onClickAction; // x1
  UnityEngine_Object_o *v53; // x23
  System_Collections_Generic_List_object__o *v54; // x23
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  int64_t v64; // x1
  Il2CppClass **v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  int64_t v75; // x1
  Il2CppClass **v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  int64_t v86; // x1
  Il2CppClass **v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  int64_t v97; // x1
  Il2CppClass **v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  int64_t v108; // x1
  Il2CppClass **v109; // x0
  struct BlankEarthShortcutUIButton_o *v110; // x21
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct BlankEarthShortcutUIButton_o *v117; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v120; // x21
  UILabel_o *v121; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v124; // x0
  System_String_o *v125; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v127; // x21
  UIAtlas_o *v128; // x22
  const MethodInfo *v129; // x3
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+0h] [xbp-A0h] BYREF
  int32_t IconId_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v132; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BD8F87 & 1) == 0 )
  {
    sub_1C21E38(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_UISprite___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UICommonButtonColor_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_89/*"\r\n"*/);
    sub_1C21E38(&StringLiteral_17828/*"btn_shortcut"*/);
    sub_1C21E38(&StringLiteral_19529/*"event_logo_shortcut_"*/);
    byte_4BD8F87 = 1;
  }
  memset(&v132, 0, sizeof(v132));
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.listViewItem,
    (int64_t)item,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !item )
    goto LABEL_104;
  OnClickAction_k__BackingField = item->fields._OnClickAction_k__BackingField;
  this->fields.onClickAction = OnClickAction_k__BackingField;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.onClickAction,
    (int64_t)OnClickAction_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.bgSprite,
    (int64_t)Component_object,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  bgSprite = (int64_t)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_104;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0LL);
  bgSprite = (int64_t)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_17828/*"btn_shortcut"*/, 0LL);
  bgSprite = (int64_t)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgSprite = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (int64_t)WarMaster__GetEntityList((WarMaster_o *)bgSprite, 0LL);
  if ( !bgSprite )
    goto LABEL_104;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v130,
    (System_Collections_Generic_List_object__o *)bgSprite,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v28 = 0LL;
  v29 = 0;
  v132 = v130;
  while ( 1 )
  {
    v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v132,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v30 )
      break;
    current = v132.fields._current;
    if ( !v132.fields._current )
      sub_1C22094(v30, v31);
    blankEarthSpotNavimenuEntity_k__BackingField = item->fields._blankEarthSpotNavimenuEntity_k__BackingField;
    if ( !blankEarthSpotNavimenuEntity_k__BackingField )
      sub_1C22094(v30, v31);
    if ( HIDWORD(v132.fields._current[7].monitor) == blankEarthSpotNavimenuEntity_k__BackingField->fields.blankEarthSpotId )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !Master_object )
        sub_1C22094(0LL, v35);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, (int32_t)current[1].klass, 0LL);
      if ( OpenEntity )
        v28 = OpenEntity;
      if ( OpenEntity )
      {
        if ( !v28 )
          sub_1C22094(OpenEntity, v37);
        if ( WarReleaseEntity__IsClose(v28, 0LL) )
          v29 = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v132,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_2FA6F64 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.shortcutButton,
    (int64_t)ComponentInParent_object,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  bgSprite = (int64_t)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_104;
  onClickAction = this->fields.onClickAction;
  *(_QWORD *)(bgSprite + 112) = onClickAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)(bgSprite + 112), (int64_t)onClickAction, v46, v47, v48, v49, v50, v51);
  v53 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
  {
    if ( (v29 & 1) == 0 )
    {
      v54 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v54,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      bgSprite = (int64_t)*p_bgSprite;
      if ( !*p_bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      if ( !v54 )
        goto LABEL_104;
      items = v54->fields._items;
      v62 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v54->fields._version;
      if ( !items )
        goto LABEL_104;
      size = v54->fields._size;
      v64 = bgSprite;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &items->obj.klass + size;
        v54->fields._size = size + 1;
        v65[4] = (Il2CppClass *)v64;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v65 + 4), v64, v55, v56, v57, v58, v59, v60);
      }
      bgSprite = (int64_t)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v72 = v54->fields._items;
      v73 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v54->fields._version;
      if ( !v72 )
        goto LABEL_104;
      v74 = v54->fields._size;
      v75 = bgSprite;
      if ( (unsigned int)v74 >= v72->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &v72->obj.klass + v74;
        v54->fields._size = v74 + 1;
        v76[4] = (Il2CppClass *)v75;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v76 + 4), v75, v66, v67, v68, v69, v70, v71);
      }
      bgSprite = (int64_t)this->fields.nameLabelUp;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v83 = v54->fields._items;
      v84 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v54->fields._version;
      if ( !v83 )
        goto LABEL_104;
      v85 = v54->fields._size;
      v86 = bgSprite;
      if ( (unsigned int)v85 >= v83->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = &v83->obj.klass + v85;
        v54->fields._size = v85 + 1;
        v87[4] = (Il2CppClass *)v86;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v87 + 4), v86, v77, v78, v79, v80, v81, v82);
      }
      bgSprite = (int64_t)this->fields.nameLabelBottom;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v94 = v54->fields._items;
      v95 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v54->fields._version;
      if ( !v94 )
        goto LABEL_104;
      v96 = v54->fields._size;
      v97 = bgSprite;
      if ( (unsigned int)v96 >= v94->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
      }
      else
      {
        v98 = &v94->obj.klass + v96;
        v54->fields._size = v96 + 1;
        v98[4] = (Il2CppClass *)v97;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v98 + 4), v97, v88, v89, v90, v91, v92, v93);
      }
      bgSprite = (int64_t)this->fields.nameLabelMiddle;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v105 = v54->fields._items;
      v106 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v54->fields._version;
      if ( !v105 )
        goto LABEL_104;
      v107 = v54->fields._size;
      v108 = bgSprite;
      if ( (unsigned int)v107 >= v105->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
      }
      else
      {
        v109 = &v105->obj.klass + v107;
        v54->fields._size = v107 + 1;
        v109[4] = (Il2CppClass *)v108;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v109 + 4), v108, v99, v100, v101, v102, v103, v104);
      }
      v110 = *p_shortcutButton;
      bgSprite = (int64_t)System_Collections_Generic_List_object___ToArray(
                            v54,
                            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
      if ( !v110 )
        goto LABEL_104;
      v110->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v110->fields.tweenTargets,
        bgSprite,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
    }
    v117 = *p_shortcutButton;
    bgSprite = (int64_t)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      bgSprite = (int64_t)UICommonButtonColor_TypeInfo;
    }
    if ( !v117 )
      goto LABEL_104;
    v117->fields.specifyDisabledColor = *(struct UnityEngine_Color_o *)*(_QWORD *)(bgSprite + 184);
  }
  bgSprite = (int64_t)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_104;
  if ( !System_String__Contains((System_String_o *)bgSprite, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
  {
    bgSprite = (int64_t)this->fields.nameLabelMiddle;
    if ( bgSprite )
    {
      UILabel__set_text((UILabel_o *)bgSprite, item->fields._Name_k__BackingField, 0LL);
      bgSprite = (int64_t)this->fields.nameLabelMiddle;
      if ( bgSprite )
      {
        (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
          bgSprite,
          *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
        bgSprite = (int64_t)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
        nameLabelMiddle = this->fields.nameLabelMiddle;
        if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
        if ( nameLabelMiddle )
          goto LABEL_81;
      }
    }
LABEL_104:
    sub_1C22094(bgSprite, v11);
  }
  bgSprite = (int64_t)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (int64_t)System_String__Replace_63135104(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_89/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0LL);
  if ( !bgSprite )
    goto LABEL_104;
  v118 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                (System_String_o *)bgSprite,
                                                                0xAu,
                                                                0,
                                                                0LL);
  bgSprite = (int64_t)System_Linq_Enumerable__ToList_object_(
                        v118,
                        (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_104;
  nameLabelUp = this->fields.nameLabelUp;
  v120 = (System_Collections_Generic_List_object__o *)bgSprite;
  bgSprite = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelUp )
    goto LABEL_104;
  UILabel__set_text(nameLabelUp, (System_String_o *)bgSprite, 0LL);
  bgSprite = (int64_t)this->fields.nameLabelUp;
  if ( !bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  bgSprite = (int64_t)BlankEarthShortcutButtonListViewItemDraw_TypeInfo;
  v121 = this->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v121 )
    goto LABEL_104;
  UILabel__SetCondensedScale(
    v121,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0LL);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v120,
                        1,
                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !nameLabelBottom )
    goto LABEL_104;
  UILabel__set_text(nameLabelBottom, (System_String_o *)bgSprite, 0LL);
  bgSprite = (int64_t)this->fields.nameLabelBottom;
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (*(__int64 (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
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
  v124 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v125 = System_String__Concat_63115476((System_String_o *)StringLiteral_19529/*"event_logo_shortcut_"*/, v124, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v127 = v125;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0LL, 0LL);
  if ( (bgSprite & 1) != 0 )
  {
    v128 = item->fields._IconAtlas_k__BackingField;
    if ( !v128 )
      goto LABEL_104;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v127, 0LL) )
    {
      bgSprite = (int64_t)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_atlas((UISprite_o *)bgSprite, v128, 0LL);
      bgSprite = (int64_t)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v127, 0LL);
    }
  }
  bgSprite = (int64_t)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( (v29 & 1) != 0 )
  {
    bgSprite = (int64_t)this->fields.bgSprite;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (int64_t)this->fields.iconSprite;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (int64_t)this->fields.nameLabelUp;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (int64_t)this->fields.nameLabelBottom;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (int64_t)this->fields.nameLabelMiddle;
    if ( !bgSprite )
      goto LABEL_104;
    UIWidget__set_color((UIWidget_o *)bgSprite, this->fields.closeWarShortCutBtnColor, 0LL);
    bgSprite = (int64_t)this->fields.nameLabelUp;
    if ( !bgSprite )
      goto LABEL_104;
    UILabel__set_effectColor((UILabel_o *)bgSprite, this->fields.closeWarShortCutBtnOutlineColor, 0LL);
    bgSprite = (int64_t)this->fields.nameLabelBottom;
    if ( !bgSprite )
      goto LABEL_104;
    UILabel__set_effectColor((UILabel_o *)bgSprite, this->fields.closeWarShortCutBtnOutlineColor, 0LL);
    bgSprite = (int64_t)this->fields.nameLabelMiddle;
    if ( !bgSprite )
      goto LABEL_104;
    UILabel__set_effectColor((UILabel_o *)bgSprite, this->fields.closeWarShortCutBtnOutlineColor, 0LL);
  }
  bgSprite = (int64_t)this->fields.optionComponent;
  if ( !bgSprite )
    goto LABEL_104;
  BlankEarthShortcutButtonOptionComponent__SetUpOptionInfo(
    (BlankEarthShortcutButtonOptionComponent_o *)bgSprite,
    item->fields._blankEarthSpotNavimenuEntity_k__BackingField,
    1,
    v129);
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

  if ( (byte_4BD8F8A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8F8A = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_1C22094(0LL, v6);
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

  if ( (byte_4BD8F88 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8F88 = 1;
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
      sub_1C22094(v6, v4);
    }
  }
}