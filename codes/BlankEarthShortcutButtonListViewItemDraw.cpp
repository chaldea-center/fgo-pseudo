void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12CB7 & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v1, v2);
    byte_4B12CB7 = 1;
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
  __int64 v2; // x2
  UnityEngine_Object_o *bgSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct UISprite_o *v8; // x8

  if ( (byte_4B12CB5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12CB5 = 1;
  }
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL);
  result = 0.0;
  if ( v5 )
  {
    v8 = this->fields.bgSprite;
    if ( !v8 )
      sub_1BCAA3C(v5, v6);
    return (float)v8->fields.mWidth;
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  int64_t bgSprite; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  WarReleaseEntity_o *v71; // x22
  char v72; // w24
  _BOOL8 v73; // x0
  __int64 v74; // x1
  Il2CppObject *current; // x27
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  Il2CppObject *Master_object; // x0
  __int64 v78; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  __int64 v80; // x1
  Il2CppObject *ComponentInParent_object; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x22
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct System_Action_o *onClickAction; // x1
  __int64 v96; // x1
  UnityEngine_Object_o *v97; // x23
  __int64 v98; // x2
  __int64 v99; // x3
  System_Collections_Generic_List_object__o *v100; // x23
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  int64_t v110; // x1
  Il2CppClass **v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  int64_t v121; // x1
  Il2CppClass **v122; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  int64_t v132; // x1
  Il2CppClass **v133; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  int64_t v143; // x1
  Il2CppClass **v144; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  int64_t v154; // x1
  Il2CppClass **v155; // x0
  struct BlankEarthShortcutUIButton_o *v156; // x21
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  struct BlankEarthShortcutUIButton_o *v163; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v164; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v166; // x21
  UILabel_o *v167; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v170; // x0
  System_String_o *v171; // x0
  __int64 v172; // x1
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v174; // x21
  UIAtlas_o *v175; // x22
  const MethodInfo *v176; // x3
  System_Collections_Generic_List_Enumerator_object__o v177; // [xsp+0h] [xbp-A0h] BYREF
  int32_t IconId_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v179; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12CB3 & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, item, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarReleaseMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__, v24, v25);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ToArray__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v38, v39);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v40, v41);
    sub_1BCA7E0(&UICommonButtonColor_TypeInfo, v42, v43);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_88/*"\r\n"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_17712/*"btn_shortcut"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_19398/*"event_logo_shortcut_"*/, v50, v51);
    byte_4B12CB3 = 1;
  }
  memset(&v179, 0, sizeof(v179));
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClickAction,
    (int64_t)OnClickAction_k__BackingField,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.bgSprite,
    (int64_t)Component_object,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  bgSprite = (int64_t)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_104;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0LL);
  bgSprite = (int64_t)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_17712/*"btn_shortcut"*/, 0LL);
  bgSprite = (int64_t)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v70);
  bgSprite = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (int64_t)WarMaster__GetEntityList((WarMaster_o *)bgSprite, 0LL);
  if ( !bgSprite )
    goto LABEL_104;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v177,
    (System_Collections_Generic_List_object__o *)bgSprite,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v71 = 0LL;
  v72 = 0;
  v179 = v177;
  while ( 1 )
  {
    v73 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v179,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v73 )
      break;
    current = v179.fields._current;
    if ( !v179.fields._current )
      sub_1BCAA3C(v73, v74);
    blankEarthSpotNavimenuEntity_k__BackingField = item->fields._blankEarthSpotNavimenuEntity_k__BackingField;
    if ( !blankEarthSpotNavimenuEntity_k__BackingField )
      sub_1BCAA3C(v73, v74);
    if ( HIDWORD(v179.fields._current[7].monitor) == blankEarthSpotNavimenuEntity_k__BackingField->fields.blankEarthSpotId )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v74);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !Master_object )
        sub_1BCAA3C(0LL, v78);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, (int32_t)current[1].klass, 0LL);
      if ( OpenEntity )
        v71 = OpenEntity;
      if ( OpenEntity )
      {
        if ( !v71 )
          sub_1BCAA3C(OpenEntity, v80);
        if ( WarReleaseEntity__IsClose(v71, 0LL) )
          v72 = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v179,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_2F09DF0 *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.shortcutButton,
    (int64_t)ComponentInParent_object,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  bgSprite = (int64_t)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_104;
  onClickAction = this->fields.onClickAction;
  *(_QWORD *)(bgSprite + 112) = onClickAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(bgSprite + 112), (int64_t)onClickAction, v89, v90, v91, v92, v93, v94);
  v97 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v96);
  if ( UnityEngine_Object__op_Inequality(v97, 0LL, 0LL) )
  {
    if ( (v72 & 1) == 0 )
    {
      v100 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_GameObject__TypeInfo,
                                                            v53,
                                                            v98,
                                                            v99);
      System_Collections_Generic_List_object____ctor(
        v100,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      bgSprite = (int64_t)*p_bgSprite;
      if ( !*p_bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      if ( !v100 )
        goto LABEL_104;
      items = v100->fields._items;
      v108 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v100->fields._version;
      if ( !items )
        goto LABEL_104;
      size = v100->fields._size;
      v110 = bgSprite;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v100,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v111 = &items->obj.klass + size;
        v100->fields._size = size + 1;
        v111[4] = (Il2CppClass *)v110;
        sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 4), v110, v101, v102, v103, v104, v105, v106);
      }
      bgSprite = (int64_t)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v118 = v100->fields._items;
      v119 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v100->fields._version;
      if ( !v118 )
        goto LABEL_104;
      v120 = v100->fields._size;
      v121 = bgSprite;
      if ( (unsigned int)v120 >= v118->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v100,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
      }
      else
      {
        v122 = &v118->obj.klass + v120;
        v100->fields._size = v120 + 1;
        v122[4] = (Il2CppClass *)v121;
        sub_1BCA784((PartyOrganizationUtility_o *)(v122 + 4), v121, v112, v113, v114, v115, v116, v117);
      }
      bgSprite = (int64_t)this->fields.nameLabelUp;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v129 = v100->fields._items;
      v130 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v100->fields._version;
      if ( !v129 )
        goto LABEL_104;
      v131 = v100->fields._size;
      v132 = bgSprite;
      if ( (unsigned int)v131 >= v129->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v100,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
      }
      else
      {
        v133 = &v129->obj.klass + v131;
        v100->fields._size = v131 + 1;
        v133[4] = (Il2CppClass *)v132;
        sub_1BCA784((PartyOrganizationUtility_o *)(v133 + 4), v132, v123, v124, v125, v126, v127, v128);
      }
      bgSprite = (int64_t)this->fields.nameLabelBottom;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v140 = v100->fields._items;
      v141 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v100->fields._version;
      if ( !v140 )
        goto LABEL_104;
      v142 = v100->fields._size;
      v143 = bgSprite;
      if ( (unsigned int)v142 >= v140->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v100,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
      }
      else
      {
        v144 = &v140->obj.klass + v142;
        v100->fields._size = v142 + 1;
        v144[4] = (Il2CppClass *)v143;
        sub_1BCA784((PartyOrganizationUtility_o *)(v144 + 4), v143, v134, v135, v136, v137, v138, v139);
      }
      bgSprite = (int64_t)this->fields.nameLabelMiddle;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v151 = v100->fields._items;
      v152 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v100->fields._version;
      if ( !v151 )
        goto LABEL_104;
      v153 = v100->fields._size;
      v154 = bgSprite;
      if ( (unsigned int)v153 >= v151->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v100,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
      }
      else
      {
        v155 = &v151->obj.klass + v153;
        v100->fields._size = v153 + 1;
        v155[4] = (Il2CppClass *)v154;
        sub_1BCA784((PartyOrganizationUtility_o *)(v155 + 4), v154, v145, v146, v147, v148, v149, v150);
      }
      v156 = *p_shortcutButton;
      bgSprite = (int64_t)System_Collections_Generic_List_object___ToArray(
                            v100,
                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
      if ( !v156 )
        goto LABEL_104;
      v156->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v156->fields.tweenTargets,
        bgSprite,
        v157,
        v158,
        v159,
        v160,
        v161,
        v162);
    }
    v163 = *p_shortcutButton;
    bgSprite = (int64_t)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v53);
      bgSprite = (int64_t)UICommonButtonColor_TypeInfo;
    }
    if ( !v163 )
      goto LABEL_104;
    v163->fields.specifyDisabledColor = *(struct UnityEngine_Color_o *)*(_QWORD *)(bgSprite + 184);
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
          j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v53);
        if ( nameLabelMiddle )
          goto LABEL_81;
      }
    }
LABEL_104:
    sub_1BCAA3C(bgSprite, v53);
  }
  bgSprite = (int64_t)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (int64_t)System_String__Replace_62420848(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_88/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0LL);
  if ( !bgSprite )
    goto LABEL_104;
  v164 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                (System_String_o *)bgSprite,
                                                                0xAu,
                                                                0,
                                                                0LL);
  bgSprite = (int64_t)System_Linq_Enumerable__ToList_object_(
                        v164,
                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_104;
  nameLabelUp = this->fields.nameLabelUp;
  v166 = (System_Collections_Generic_List_object__o *)bgSprite;
  bgSprite = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v167 = this->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v53);
  if ( !v167 )
    goto LABEL_104;
  UILabel__SetCondensedScale(
    v167,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0LL);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v166,
                        1,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
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
    0LL);
  IconId_k__BackingField = item->fields._IconId_k__BackingField;
  v170 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v171 = System_String__Concat_62401220((System_String_o *)StringLiteral_19398/*"event_logo_shortcut_"*/, v170, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v174 = v171;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v172);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0LL, 0LL);
  if ( (bgSprite & 1) != 0 )
  {
    v175 = item->fields._IconAtlas_k__BackingField;
    if ( !v175 )
      goto LABEL_104;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v174, 0LL) )
    {
      bgSprite = (int64_t)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_atlas((UISprite_o *)bgSprite, v175, 0LL);
      bgSprite = (int64_t)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v174, 0LL);
    }
  }
  bgSprite = (int64_t)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( (v72 & 1) != 0 )
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
    v176);
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

  if ( (byte_4B12CB6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isEnable, method);
    byte_4B12CB6 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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
  __int64 v2; // x2
  UnityEngine_Object_o *optionComponent; // x20
  BlankEarthSpotNavimenuEntity_o *v5; // x1
  const MethodInfo *v6; // x2
  BlankEarthShortcutButtonOptionComponent_o *v7; // x0
  const MethodInfo *v8; // x3
  struct BlankEarthShortcutButtonListViewItem_o *listViewItem; // x8

  if ( (byte_4B12CB4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12CB4 = 1;
  }
  optionComponent = (UnityEngine_Object_o *)this->fields.optionComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(optionComponent, 0LL, 0LL) && this->fields.listViewItem )
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
      sub_1BCAA3C(v7, v5);
    }
  }
}