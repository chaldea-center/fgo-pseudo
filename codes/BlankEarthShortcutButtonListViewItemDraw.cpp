void __fastcall BlankEarthShortcutButtonListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB1142 & 1) == 0 )
  {
    sub_1C13D24(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, v1);
    byte_4BB1142 = 1;
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

  if ( (byte_4BB1140 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB1140 = 1;
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
      sub_1C13F80(v4, v5);
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  int64_t bgSprite; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Action_o *OnClickAction_k__BackingField; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  struct UISprite_o **p_bgSprite; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  WarReleaseEntity_o *v49; // x22
  char v50; // w24
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppObject *current; // x27
  struct BlankEarthSpotNavimenuEntity_o *blankEarthSpotNavimenuEntity_k__BackingField; // x8
  Il2CppObject *Master_object; // x0
  __int64 v56; // x1
  WarReleaseEntity_o *OpenEntity; // x0
  __int64 v58; // x1
  Il2CppObject *ComponentInParent_object; // x0
  struct BlankEarthShortcutUIButton_o **p_shortcutButton; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Action_o *onClickAction; // x1
  UnityEngine_Object_o *v74; // x23
  System_Collections_Generic_List_object__o *v75; // x23
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  int64_t v85; // x1
  Il2CppClass **v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  int64_t v96; // x1
  Il2CppClass **v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  int64_t v107; // x1
  Il2CppClass **v108; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  int64_t v118; // x1
  Il2CppClass **v119; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  int64_t v129; // x1
  Il2CppClass **v130; // x0
  struct BlankEarthShortcutUIButton_o *v131; // x21
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  struct BlankEarthShortcutUIButton_o *v138; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v139; // x0
  UILabel_o *nameLabelUp; // x22
  System_Collections_Generic_List_object__o *v141; // x21
  UILabel_o *v142; // x22
  UILabel_o *nameLabelBottom; // x22
  UILabel_o *nameLabelMiddle; // x21
  System_String_o *v145; // x0
  System_String_o *v146; // x0
  UnityEngine_Object_o *IconAtlas_k__BackingField; // x22
  System_String_o *v148; // x21
  UIAtlas_o *v149; // x22
  const MethodInfo *v150; // x3
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+0h] [xbp-A0h] BYREF
  int32_t IconId_k__BackingField; // [xsp+1Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v153; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB113E & 1) == 0 )
  {
    sub_1C13D24(&BlankEarthShortcutButtonListViewItemDraw_TypeInfo, item);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___, v10);
    sub_1C13D24(&Method_DataManager_GetMaster_WarMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMaster_WarReleaseMaster___, v12);
    sub_1C13D24(&DataManager_TypeInfo, v13);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_string___, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_WarEntity__get_Current__, v17);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_UISprite___, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v19);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarEntity__GetEnumerator__, v20);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__ToArray__, v21);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, v23);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v24);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v25);
    sub_1C13D24(&UICommonButtonColor_TypeInfo, v26);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v27);
    sub_1C13D24(&StringLiteral_89/*"\r\n"*/, v28);
    sub_1C13D24(&StringLiteral_17801/*"btn_message_on"*/, v29);
    sub_1C13D24(&StringLiteral_19500/*"event_gauge_front_complete"*/, v30);
    byte_4BB113E = 1;
  }
  memset(&v153, 0, sizeof(v153));
  IconId_k__BackingField = 0;
  this->fields.listViewItem = item;
  sub_1C13CC8(
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
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.onClickAction,
    (int64_t)OnClickAction_k__BackingField,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_UISprite___);
  this->fields.bgSprite = (struct UISprite_o *)Component_object;
  p_bgSprite = &this->fields.bgSprite;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.bgSprite,
    (int64_t)Component_object,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  bgSprite = (int64_t)this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_104;
  UISprite__set_atlas((UISprite_o *)bgSprite, item->fields._CommonUiAtlas_k__BackingField, 0LL);
  bgSprite = (int64_t)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  UISprite__set_spriteName((UISprite_o *)bgSprite, (System_String_o *)StringLiteral_17801/*"btn_message_on"*/, 0LL);
  bgSprite = (int64_t)*p_bgSprite;
  if ( !*p_bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bgSprite = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarMaster___);
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (int64_t)WarMaster__GetEntityList((WarMaster_o *)bgSprite, 0LL);
  if ( !bgSprite )
    goto LABEL_104;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v151,
    (System_Collections_Generic_List_object__o *)bgSprite,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_WarEntity__GetEnumerator__);
  v49 = 0LL;
  v50 = 0;
  v153 = v151;
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v153,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__MoveNext__);
    if ( !v51 )
      break;
    current = v153.fields._current;
    if ( !v153.fields._current )
      sub_1C13F80(v51, v52);
    blankEarthSpotNavimenuEntity_k__BackingField = item->fields._blankEarthSpotNavimenuEntity_k__BackingField;
    if ( !blankEarthSpotNavimenuEntity_k__BackingField )
      sub_1C13F80(v51, v52);
    if ( HIDWORD(v153.fields._current[7].monitor) == blankEarthSpotNavimenuEntity_k__BackingField->fields.blankEarthSpotId )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarReleaseMaster___);
      if ( !Master_object )
        sub_1C13F80(0LL, v56);
      OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, (int32_t)current[1].klass, 0LL);
      if ( OpenEntity )
        v49 = OpenEntity;
      if ( OpenEntity )
      {
        if ( !v49 )
          sub_1C13F80(OpenEntity, v58);
        if ( WarReleaseEntity__IsClose(v49, 0LL) )
          v50 = 1;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v153,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_WarEntity__Dispose__);
  ComponentInParent_object = UnityEngine_Component__GetComponentInParent_object_(
                               (UnityEngine_Component_o *)this,
                               (const MethodInfo_2F865CC *)Method_UnityEngine_Component_GetComponentInParent_BlankEarthShortcutUIButton___);
  this->fields.shortcutButton = (struct BlankEarthShortcutUIButton_o *)ComponentInParent_object;
  p_shortcutButton = &this->fields.shortcutButton;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.shortcutButton,
    (int64_t)ComponentInParent_object,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  bgSprite = (int64_t)this->fields.shortcutButton;
  if ( !bgSprite )
    goto LABEL_104;
  onClickAction = this->fields.onClickAction;
  *(_QWORD *)(bgSprite + 112) = onClickAction;
  sub_1C13CC8((PartyOrganizationUtility_o *)(bgSprite + 112), (int64_t)onClickAction, v67, v68, v69, v70, v71, v72);
  v74 = (UnityEngine_Object_o *)*p_shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
  {
    if ( (v50 & 1) == 0 )
    {
      v75 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v75,
        (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      bgSprite = (int64_t)*p_bgSprite;
      if ( !*p_bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      if ( !v75 )
        goto LABEL_104;
      items = v75->fields._items;
      v83 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v75->fields._version;
      if ( !items )
        goto LABEL_104;
      size = v75->fields._size;
      v85 = bgSprite;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v75,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v86 = &items->obj.klass + size;
        v75->fields._size = size + 1;
        v86[4] = (Il2CppClass *)v85;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v86 + 4), v85, v76, v77, v78, v79, v80, v81);
      }
      bgSprite = (int64_t)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v93 = v75->fields._items;
      v94 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v75->fields._version;
      if ( !v93 )
        goto LABEL_104;
      v95 = v75->fields._size;
      v96 = bgSprite;
      if ( (unsigned int)v95 >= v93->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v75,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
      }
      else
      {
        v97 = &v93->obj.klass + v95;
        v75->fields._size = v95 + 1;
        v97[4] = (Il2CppClass *)v96;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v97 + 4), v96, v87, v88, v89, v90, v91, v92);
      }
      bgSprite = (int64_t)this->fields.nameLabelUp;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v104 = v75->fields._items;
      v105 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v75->fields._version;
      if ( !v104 )
        goto LABEL_104;
      v106 = v75->fields._size;
      v107 = bgSprite;
      if ( (unsigned int)v106 >= v104->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v75,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
      }
      else
      {
        v108 = &v104->obj.klass + v106;
        v75->fields._size = v106 + 1;
        v108[4] = (Il2CppClass *)v107;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v108 + 4), v107, v98, v99, v100, v101, v102, v103);
      }
      bgSprite = (int64_t)this->fields.nameLabelBottom;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v115 = v75->fields._items;
      v116 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v75->fields._version;
      if ( !v115 )
        goto LABEL_104;
      v117 = v75->fields._size;
      v118 = bgSprite;
      if ( (unsigned int)v117 >= v115->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v75,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
      }
      else
      {
        v119 = &v115->obj.klass + v117;
        v75->fields._size = v117 + 1;
        v119[4] = (Il2CppClass *)v118;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v119 + 4), v118, v109, v110, v111, v112, v113, v114);
      }
      bgSprite = (int64_t)this->fields.nameLabelMiddle;
      if ( !bgSprite )
        goto LABEL_104;
      bgSprite = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgSprite, 0LL);
      v126 = v75->fields._items;
      v127 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v75->fields._version;
      if ( !v126 )
        goto LABEL_104;
      v128 = v75->fields._size;
      v129 = bgSprite;
      if ( (unsigned int)v128 >= v126->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v75,
          (Il2CppObject *)bgSprite,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v130 = &v126->obj.klass + v128;
        v75->fields._size = v128 + 1;
        v130[4] = (Il2CppClass *)v129;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v130 + 4), v129, v120, v121, v122, v123, v124, v125);
      }
      v131 = *p_shortcutButton;
      bgSprite = (int64_t)System_Collections_Generic_List_object___ToArray(
                            v75,
                            (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
      if ( !v131 )
        goto LABEL_104;
      v131->fields.tweenTargets = (struct UnityEngine_GameObject_array *)bgSprite;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v131->fields.tweenTargets,
        bgSprite,
        v132,
        v133,
        v134,
        v135,
        v136,
        v137);
    }
    v138 = *p_shortcutButton;
    bgSprite = (int64_t)UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      bgSprite = (int64_t)UICommonButtonColor_TypeInfo;
    }
    if ( !v138 )
      goto LABEL_104;
    v138->fields.specifyDisabledColor = *(struct UnityEngine_Color_o *)*(_QWORD *)(bgSprite + 184);
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
    sub_1C13F80(bgSprite, v32);
  }
  bgSprite = (int64_t)item->fields._Name_k__BackingField;
  if ( !bgSprite )
    goto LABEL_104;
  bgSprite = (int64_t)System_String__Replace_62987572(
                        (System_String_o *)bgSprite,
                        (System_String_o *)StringLiteral_89/*"\r\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0LL);
  if ( !bgSprite )
    goto LABEL_104;
  v139 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                (System_String_o *)bgSprite,
                                                                0xAu,
                                                                0,
                                                                0LL);
  bgSprite = (int64_t)System_Linq_Enumerable__ToList_object_(
                        v139,
                        (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !bgSprite )
    goto LABEL_104;
  nameLabelUp = this->fields.nameLabelUp;
  v141 = (System_Collections_Generic_List_object__o *)bgSprite;
  bgSprite = (int64_t)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)bgSprite,
                        0,
                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v142 = this->fields.nameLabelUp;
  if ( !BlankEarthShortcutButtonListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BlankEarthShortcutButtonListViewItemDraw_TypeInfo);
  if ( !v142 )
    goto LABEL_104;
  UILabel__SetCondensedScale(
    v142,
    BlankEarthShortcutButtonListViewItemDraw_TypeInfo->static_fields->NAME_LABEL_MAX_WIDTH,
    0,
    0LL);
  nameLabelBottom = this->fields.nameLabelBottom;
  bgSprite = (int64_t)System_Collections_Generic_List_object___get_Item(
                        v141,
                        1,
                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
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
  v145 = System_Int32__ToString((int32_t)&IconId_k__BackingField, 0LL);
  v146 = System_String__Concat_62967944((System_String_o *)StringLiteral_19500/*"event_gauge_front_complete"*/, v145, 0LL);
  IconAtlas_k__BackingField = (UnityEngine_Object_o *)item->fields._IconAtlas_k__BackingField;
  v148 = v146;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgSprite = UnityEngine_Object__op_Inequality(IconAtlas_k__BackingField, 0LL, 0LL);
  if ( (bgSprite & 1) != 0 )
  {
    v149 = item->fields._IconAtlas_k__BackingField;
    if ( !v149 )
      goto LABEL_104;
    if ( UIAtlas__GetSprite(item->fields._IconAtlas_k__BackingField, v148, 0LL) )
    {
      bgSprite = (int64_t)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_atlas((UISprite_o *)bgSprite, v149, 0LL);
      bgSprite = (int64_t)this->fields.iconSprite;
      if ( !bgSprite )
        goto LABEL_104;
      UISprite__set_spriteName((UISprite_o *)bgSprite, v148, 0LL);
    }
  }
  bgSprite = (int64_t)this->fields.iconSprite;
  if ( !bgSprite )
    goto LABEL_104;
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)bgSprite + 840LL))(
    bgSprite,
    *(_QWORD *)(*(_QWORD *)bgSprite + 848LL));
  if ( (v50 & 1) != 0 )
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
    v150);
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

  if ( (byte_4BB1141 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4BB1141 = 1;
  }
  shortcutButton = (UnityEngine_Object_o *)this->fields.shortcutButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shortcutButton, 0LL, 0LL) )
  {
    v7 = this->fields.shortcutButton;
    if ( !v7 )
      sub_1C13F80(0LL, v6);
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

  if ( (byte_4BB113F & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB113F = 1;
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
      sub_1C13F80(v6, v4);
    }
  }
}