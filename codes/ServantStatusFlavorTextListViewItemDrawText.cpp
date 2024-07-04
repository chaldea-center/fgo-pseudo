void __fastcall ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48DF188 & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v1);
    byte_48DF188 = 1;
  }
  *ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields = (struct ServantStatusFlavorTextListViewItemDrawText_StaticFields)0xFFFFFFAD0000009ALL;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___ctor(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
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
  int32_t v27; // w1
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_List_object__o *v46; // x20
  __int64 v47; // x0
  Il2CppObject *v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_Collections_Generic_List_object__o *v75; // x20
  int32_t v76; // w2
  int32_t v77; // w3
  _QWORD *v78; // x9
  struct System_Object_array *v79; // x8
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  System_Collections_Generic_List_object__o *v108; // x20
  int32_t v109; // w2
  int32_t v110; // w3
  _QWORD *v111; // x9
  struct System_Object_array *v112; // x8
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  struct System_Object_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  Il2CppClass **v126; // x0
  int32_t v127; // w2
  int32_t v128; // w3
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3

  if ( (byte_48DF187 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_16929/*"bg(Clone)/bg10500"*/, v7);
    sub_1B00CCC(&StringLiteral_12857/*"SummonBgRoot"*/, v8);
    sub_1B00CCC(&StringLiteral_13015/*"SystemUICamera"*/, v9);
    sub_1B00CCC(&StringLiteral_3228/*"Bg/10500"*/, v10);
    sub_1B00CCC(&StringLiteral_6011/*"EquipGraphListMenuPrefab(Clone)"*/, v11);
    sub_1B00CCC(&StringLiteral_12435/*"ServantStatusDialogPrefab(Clone)"*/, v12);
    sub_1B00CCC(&StringLiteral_3308/*"BtnBg"*/, v13);
    sub_1B00CCC(&StringLiteral_14315/*"TouchCamera"*/, v14);
    sub_1B00CCC(&StringLiteral_4416/*"ChoiceButton"*/, v15);
    sub_1B00CCC(&StringLiteral_3231/*"BgCamera"*/, v16);
    sub_1B00CCC(&StringLiteral_4587/*"CommonUI"*/, v17);
    sub_1B00CCC(&StringLiteral_6785/*"FrontCommonUICamera"*/, v18);
    sub_1B00CCC(&StringLiteral_16928/*"bg"*/, v19);
    sub_1B00CCC(&StringLiteral_4594/*"CommonUICamera"*/, v20);
    sub_1B00CCC(&StringLiteral_12873/*"SupportServantEquipListMenuPrefab(Clone)"*/, v21);
    sub_1B00CCC(&StringLiteral_8374/*"LockButton"*/, v22);
    sub_1B00CCC(&StringLiteral_12419/*"ServantEquipStatusDialogPrefab(Clone)"*/, v23);
    sub_1B00CCC(&StringLiteral_12769/*"StatusButton"*/, v24);
    sub_1B00CCC(&StringLiteral_20051/*"img_index_02"*/, v25);
    sub_1B00CCC(&StringLiteral_7005/*"Ground/Field/bg(Clone)"*/, v26);
    byte_48DF187 = 1;
  }
  v27 = StringLiteral_20051/*"img_index_02"*/;
  this->fields.TITLE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20051/*"img_index_02"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.TITLE_SPRITE_NAME, v27, v2, v3);
  this->fields.MESSAGE_LABEL_ADD_POS_Y = -45.0;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = 0xC25C0000C2080000LL;
  v28 = StringLiteral_4587/*"CommonUI"*/;
  this->fields.COMMON_UI = (struct System_String_o *)StringLiteral_4587/*"CommonUI"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.COMMON_UI, v28, v29, v30);
  v31 = StringLiteral_7005/*"Ground/Field/bg(Clone)"*/;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_7005/*"Ground/Field/bg(Clone)"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.BATTLE_BG_OBJECT, v31, v32, v33);
  v34 = StringLiteral_16929/*"bg(Clone)/bg10500"*/;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_16929/*"bg(Clone)/bg10500"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.SUMMON_BG_OBJECT, v34, v35, v36);
  v37 = StringLiteral_12857/*"SummonBgRoot"*/;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_12857/*"SummonBgRoot"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.SUMMON_BG_ROOT, v37, v38, v39);
  v40 = StringLiteral_3228/*"Bg/10500"*/;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_3228/*"Bg/10500"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.SUMMON_BG_ASSET_NAME, v40, v41, v42);
  v43 = StringLiteral_16928/*"bg"*/;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_16928/*"bg"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v43, v44, v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v46 )
    goto LABEL_59;
  v48 = (Il2CppObject *)StringLiteral_12435/*"ServantStatusDialogPrefab(Clone)"*/;
  items = v46->fields._items;
  v52 = Method_System_Collections_Generic_List_string__Add__;
  ++v46->fields._version;
  if ( !items )
    goto LABEL_59;
  size = v46->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v46,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &items->obj.klass + size;
    v46->fields._size = size + 1;
    v54[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v48, v49, v50);
  }
  v48 = (Il2CppObject *)StringLiteral_12419/*"ServantEquipStatusDialogPrefab(Clone)"*/;
  v57 = v46->fields._items;
  v58 = Method_System_Collections_Generic_List_string__Add__;
  ++v46->fields._version;
  if ( !v57 )
    goto LABEL_59;
  v59 = v46->fields._size;
  if ( (unsigned int)v59 >= v57->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v46,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &v57->obj.klass + v59;
    v46->fields._size = v59 + 1;
    v60[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v48, v55, v56);
  }
  v48 = (Il2CppObject *)StringLiteral_6011/*"EquipGraphListMenuPrefab(Clone)"*/;
  v63 = v46->fields._items;
  v64 = Method_System_Collections_Generic_List_string__Add__;
  ++v46->fields._version;
  if ( !v63 )
    goto LABEL_59;
  v65 = v46->fields._size;
  if ( (unsigned int)v65 >= v63->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v46,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &v63->obj.klass + v65;
    v46->fields._size = v65 + 1;
    v66[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v66 + 4), (int32_t)v48, v61, v62);
  }
  v48 = (Il2CppObject *)StringLiteral_12873/*"SupportServantEquipListMenuPrefab(Clone)"*/;
  v69 = v46->fields._items;
  v70 = Method_System_Collections_Generic_List_string__Add__;
  ++v46->fields._version;
  if ( !v69 )
    goto LABEL_59;
  v71 = v46->fields._size;
  if ( (unsigned int)v71 >= v69->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v46,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = &v69->obj.klass + v71;
    v46->fields._size = v71 + 1;
    v72[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)v48, v67, v68);
  }
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)v46;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.INACTIVE_PREFABS, (int32_t)v46, v73, v74);
  v75 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v75 )
    goto LABEL_59;
  v78 = Method_System_Collections_Generic_List_string__Add__;
  v48 = (Il2CppObject *)StringLiteral_3231/*"BgCamera"*/;
  v79 = v75->fields._items;
  ++v75->fields._version;
  if ( !v79 )
    goto LABEL_59;
  v80 = v75->fields._size;
  if ( (unsigned int)v80 >= v79->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &v79->obj.klass + v80;
    v75->fields._size = v80 + 1;
    v81[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v48, v76, v77);
  }
  v48 = (Il2CppObject *)StringLiteral_4594/*"CommonUICamera"*/;
  v84 = v75->fields._items;
  v85 = Method_System_Collections_Generic_List_string__Add__;
  ++v75->fields._version;
  if ( !v84 )
    goto LABEL_59;
  v86 = v75->fields._size;
  if ( (unsigned int)v86 >= v84->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = &v84->obj.klass + v86;
    v75->fields._size = v86 + 1;
    v87[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v87 + 4), (int32_t)v48, v82, v83);
  }
  v48 = (Il2CppObject *)StringLiteral_6785/*"FrontCommonUICamera"*/;
  v90 = v75->fields._items;
  v91 = Method_System_Collections_Generic_List_string__Add__;
  ++v75->fields._version;
  if ( !v90 )
    goto LABEL_59;
  v92 = v75->fields._size;
  if ( (unsigned int)v92 >= v90->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = &v90->obj.klass + v92;
    v75->fields._size = v92 + 1;
    v93[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v93 + 4), (int32_t)v48, v88, v89);
  }
  v48 = (Il2CppObject *)StringLiteral_13015/*"SystemUICamera"*/;
  v96 = v75->fields._items;
  v97 = Method_System_Collections_Generic_List_string__Add__;
  ++v75->fields._version;
  if ( !v96 )
    goto LABEL_59;
  v98 = v75->fields._size;
  if ( (unsigned int)v98 >= v96->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
  }
  else
  {
    v99 = &v96->obj.klass + v98;
    v75->fields._size = v98 + 1;
    v99[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v99 + 4), (int32_t)v48, v94, v95);
  }
  v48 = (Il2CppObject *)StringLiteral_14315/*"TouchCamera"*/;
  v102 = v75->fields._items;
  v103 = Method_System_Collections_Generic_List_string__Add__;
  ++v75->fields._version;
  if ( !v102 )
    goto LABEL_59;
  v104 = v75->fields._size;
  if ( (unsigned int)v104 >= v102->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
  }
  else
  {
    v105 = &v102->obj.klass + v104;
    v75->fields._size = v104 + 1;
    v105[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v105 + 4), (int32_t)v48, v100, v101);
  }
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v75;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.SCRIPT_CAMERAS, (int32_t)v75, v106, v107);
  v108 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v108 )
    goto LABEL_59;
  v111 = Method_System_Collections_Generic_List_string__Add__;
  v48 = (Il2CppObject *)StringLiteral_3308/*"BtnBg"*/;
  v112 = v108->fields._items;
  ++v108->fields._version;
  if ( !v112 )
    goto LABEL_59;
  v113 = v108->fields._size;
  if ( (unsigned int)v113 >= v112->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v108,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = &v112->obj.klass + v113;
    v108->fields._size = v113 + 1;
    v114[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v114 + 4), (int32_t)v48, v109, v110);
  }
  v48 = (Il2CppObject *)StringLiteral_12769/*"StatusButton"*/;
  v117 = v108->fields._items;
  v118 = Method_System_Collections_Generic_List_string__Add__;
  ++v108->fields._version;
  if ( !v117 )
    goto LABEL_59;
  v119 = v108->fields._size;
  if ( (unsigned int)v119 >= v117->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v108,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
  }
  else
  {
    v120 = &v117->obj.klass + v119;
    v108->fields._size = v119 + 1;
    v120[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v120 + 4), (int32_t)v48, v115, v116);
  }
  v48 = (Il2CppObject *)StringLiteral_8374/*"LockButton"*/;
  v123 = v108->fields._items;
  v124 = Method_System_Collections_Generic_List_string__Add__;
  ++v108->fields._version;
  if ( !v123 )
    goto LABEL_59;
  v125 = v108->fields._size;
  if ( (unsigned int)v125 >= v123->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v108,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
  }
  else
  {
    v126 = &v123->obj.klass + v125;
    v108->fields._size = v125 + 1;
    v126[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v126 + 4), (int32_t)v48, v121, v122);
  }
  v48 = (Il2CppObject *)StringLiteral_4416/*"ChoiceButton"*/;
  v129 = v108->fields._items;
  v130 = Method_System_Collections_Generic_List_string__Add__;
  ++v108->fields._version;
  if ( !v129 )
LABEL_59:
    sub_1B00F28(v47, v48);
  v131 = v108->fields._size;
  if ( (unsigned int)v131 >= v129->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v108,
      v48,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
  }
  else
  {
    v132 = &v129->obj.klass + v131;
    v108->fields._size = v131 + 1;
    v132[4] = (Il2CppClass *)v48;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v132 + 4), (int32_t)v48, v127, v128);
  }
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v108;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.TARGET_BUTTON_NAME, (int32_t)v108, v133, v134);
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__Awake(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText__GetKind(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__OnClickPlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v20; // x20
  System_Collections_Generic_List_object__o *INACTIVE_PREFABS; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  unsigned int allCamerasCount; // w0
  UnityEngine_Camera_array *v28; // x22
  System_Collections_Generic_List_object__o *v29; // x23
  System_Collections_Generic_List_GameObject__o **v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  UnityEngine_GameObject_o *v33; // x23
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_List_object__o *v38; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  System_Collections_Generic_List_object__o *v43; // x24
  System_Collections_Generic_List_Camera__o **v44; // x23
  int32_t v45; // w2
  int32_t v46; // w3
  int max_length; // w8
  unsigned int v48; // w26
  Il2CppClass **v49; // x8
  UnityEngine_Behaviour_o *v50; // x24
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x8
  UnityEngine_GameObject_o *v57; // x22
  struct UnityEngine_GameObject_o *Deep; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  UnityEngine_Object_o *summonBgRoot; // x22
  struct UnityEngine_GameObject_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  UnityEngine_Object_o *v65; // x22
  const MethodInfo *v66; // x3
  UnityEngine_Object_o *summonBg; // x22
  System_String_o *SUMMON_BG_ASSET_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v69; // x21
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48DF184 & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Camera___TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Camera__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Camera___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1B00CCC(&System_Collections_Generic_List_Camera__TypeInfo, v14);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v16);
    sub_1B00CCC(&Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__, v17);
    sub_1B00CCC(
      &Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
      v18);
    sub_1B00CCC(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo, v19);
    byte_48DF184 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  v20 = sub_1B00F18(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_53;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v23, v24);
  if ( this->fields.svtId && !this->fields.isScriptPlaying )
  {
    this->fields.isScriptPlaying = 1;
    v25 = Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__;
    if ( (*((_BYTE *)Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B00CE4(Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__);
    v26 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 8, 0LL);
    allCamerasCount = UnityEngine_Camera__get_allCamerasCount(0LL);
    v28 = (UnityEngine_Camera_array *)sub_1B00D74(UnityEngine_Camera___TypeInfo, allCamerasCount);
    UnityEngine_Camera__GetAllCameras(v28, 0LL);
    v29 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v20 + 32) = v29;
    v30 = (System_Collections_Generic_List_GameObject__o **)(v20 + 32);
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)v29, v31, v32);
    INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.INACTIVE_PREFABS;
    if ( !INACTIVE_PREFABS )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v70,
      INACTIVE_PREFABS,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v71 = v70;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v71,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v33 = UnityEngine_GameObject__Find((System_String_o *)v71.fields._current, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v33, 0, v34);
        v38 = (System_Collections_Generic_List_object__o *)*v30;
        if ( !*v30 )
          sub_1B00F28(0LL, v35);
        items = v38->fields._items;
        v40 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v38->fields._version;
        if ( !items )
          sub_1B00F28(v38, v35);
        size = v38->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v38,
            (Il2CppObject *)v33,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v38->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v33;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v33, v36, v37);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v71,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v43 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_Camera__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v43,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v20 + 24) = v43;
    v44 = (System_Collections_Generic_List_Camera__o **)(v20 + 24);
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)v43, v45, v46);
    if ( !v28 )
      goto LABEL_53;
    max_length = v28->max_length;
    if ( max_length >= 1 )
    {
      v48 = 0;
      while ( 1 )
      {
        if ( v48 >= max_length )
          sub_1B00F30(INACTIVE_PREFABS, v22);
        v49 = &v28->obj.klass + (int)v48;
        v50 = (UnityEngine_Behaviour_o *)v49[4];
        if ( !v50 )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v49[4],
                                                                          0LL);
        if ( !INACTIVE_PREFABS )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Object__get_name(
                                                                          (UnityEngine_Object_o *)INACTIVE_PREFABS,
                                                                          0LL);
        if ( !this->fields.SCRIPT_CAMERAS )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                                          (System_Collections_Generic_List_object__o *)this->fields.SCRIPT_CAMERAS,
                                                                          (Il2CppObject *)INACTIVE_PREFABS,
                                                                          (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)INACTIVE_PREFABS & 1) == 0 )
        {
          UnityEngine_Behaviour__set_enabled(v50, 0, 0LL);
          INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)*v44;
          if ( !*v44 )
            break;
          v53 = INACTIVE_PREFABS->fields._items;
          v54 = Method_System_Collections_Generic_List_Camera__Add__;
          ++INACTIVE_PREFABS->fields._version;
          if ( !v53 )
            break;
          v55 = INACTIVE_PREFABS->fields._size;
          if ( (unsigned int)v55 >= v53->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              INACTIVE_PREFABS,
              (Il2CppObject *)v50,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &v53->obj.klass + v55;
            INACTIVE_PREFABS->fields._size = v55 + 1;
            v56[4] = (Il2CppClass *)v50;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v50, v51, v52);
          }
        }
        max_length = v28->max_length;
        if ( (int)++v48 >= max_length )
          goto LABEL_33;
      }
LABEL_53:
      sub_1B00F28(INACTIVE_PREFABS, v22);
    }
LABEL_33:
    v57 = UnityEngine_GameObject__Find(this->fields.COMMON_UI, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0LL, 0LL) )
    {
      Deep = GameObjectExtensions__FindDeep(v57, this->fields.SUMMON_BG_ROOT, 1, 0LL);
      this->fields.summonBgRoot = Deep;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.summonBgRoot, (int32_t)Deep, v59, v60);
    }
    summonBgRoot = (UnityEngine_Object_o *)this->fields.summonBgRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBgRoot, 0LL, 0LL) )
    {
      INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.summonBgRoot;
      if ( !INACTIVE_PREFABS )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)INACTIVE_PREFABS, 1, 0LL);
    }
    v62 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0LL);
    this->fields.battleBg = v62;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.battleBg, (int32_t)v62, v63, v64);
    v65 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
      goto LABEL_48;
    summonBg = (UnityEngine_Object_o *)this->fields.summonBg;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL) )
    {
LABEL_48:
      ServantStatusFlavorTextListViewItemDrawText__PlayScript(this, *v44, *v30, v66);
    }
    else
    {
      SUMMON_BG_ASSET_NAME = this->fields.SUMMON_BG_ASSET_NAME;
      v69 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v69,
        (Il2CppObject *)v20,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(SUMMON_BG_ASSET_NAME, v69, 1, 0LL);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v21; // x8
  CommonUI_o *v22; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_48DF185 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, inactiveCameras);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B00CCC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__, v9);
    sub_1B00CCC(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo, v10);
    byte_48DF185 = 1;
  }
  v11 = sub_1B00F18(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = inactivePrefabs;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)inactivePrefabs, v16, v17);
  *(_QWORD *)(v11 + 32) = inactiveCameras;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)inactiveCameras, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  v22 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__,
    0LL);
  if ( !v22 )
LABEL_8:
    sub_1B00F28(v12, v13);
  CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v24, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v21; // x8
  CommonUI_o *v22; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_48DF186 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, inactiveCameras);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B00CCC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__, v9);
    sub_1B00CCC(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo, v10);
    byte_48DF186 = 1;
  }
  v11 = sub_1B00F18(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = inactiveCameras;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)inactiveCameras, v16, v17);
  *(_QWORD *)(v11 + 32) = inactivePrefabs;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)inactivePrefabs, v18, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = AvalonSceneManager_TypeInfo;
  v22 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v21 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__,
    0LL);
  if ( !v22 )
LABEL_8:
    sub_1B00F28(v12, v13);
  CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v24, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_string__o *TARGET_BUTTON_NAME; // x0
  UnityEngine_Object_o *Deep; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_48DF183 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, gameObject);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v9);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v12);
    byte_48DF183 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  TARGET_BUTTON_NAME = this->fields.TARGET_BUTTON_NAME;
  if ( !TARGET_BUTTON_NAME )
    sub_1B00F28(0LL, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)TARGET_BUTTON_NAME,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = (UnityEngine_Object_o *)GameObjectExtensions__FindDeep(
                                     gameObject,
                                     (System_String_o *)v24.fields._current,
                                     1,
                                     0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality(Deep, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !Deep )
        sub_1B00F28(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Deep,
                           (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v18 )
      {
        if ( !Component_object )
          sub_1B00F28(v18, v19);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
          Component_object,
          isEnable,
          Component_object->klass->vtable[6].methodPtr);
      }
      v20 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)Deep,
              (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
      if ( v21 )
      {
        if ( !v20 )
          sub_1B00F28(v21, v22);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))v20->klass->vtable[5].method)(
          v20,
          isEnable,
          v20->klass->vtable[6].methodPtr);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *titleServantBase; // x0
  Il2CppObject *Component_object; // x21
  float v11; // s8
  UIWidget_o *titleName; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v15; // s8
  float v16; // s8
  UILabel_o *v17; // x19

  if ( (byte_48DF182 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, title);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v6);
    sub_1B00CCC(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_1/*""*/, v8);
    byte_48DF182 = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( Component_object )
      {
        UISprite__set_spriteName(
          (UISprite_o *)Component_object,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
LABEL_45:
      sub_1B00F28(titleServantBase, title);
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( !Component_object )
        goto LABEL_45;
      UISprite__set_spriteName(
        (UISprite_o *)Component_object,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0LL);
    }
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 2, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_alignment((UILabel_o *)titleServantBase, 2, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, title, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleServantBase->klass[2]._1.typeMetadataHandle)(
      titleServantBase,
      titleServantBase->klass[2]._1.interopData);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    LODWORD(v11) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleServantBase->klass[1]._2.naturalAligment)(
                       titleServantBase,
                       titleServantBase->klass[1].vtable._0_Equals.methodPtr));
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    if ( v11 >= (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0LL);
      if ( !titleServantBase )
        goto LABEL_45;
      LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localScale(
                                     (UnityEngine_Transform_o *)titleServantBase,
                                     0LL);
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      v16 = (float)(1.0 - v15)
          * (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = v16
                          + (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 0, 0LL);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      UILabel__set_alignment((UILabel_o *)titleServantBase, 1, 0LL);
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
      titleName = (UIWidget_o *)this->fields.titleName;
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      if ( !titleName )
        goto LABEL_45;
      UIWidget__set_width(
        titleName,
        ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0LL);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
    v17 = this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    if ( !v17 )
      goto LABEL_45;
    UILabel__SetCondensedScale(
      v17,
      ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetItem(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *messageLabel; // x0
  int v19; // w28
  UILabel_o *v20; // x25
  UnityEngine_GameObject_o *mainPrefab; // x26
  UnityEngine_GameObject_o *rubyPrefab; // x27
  RubyLabelHelper_o *v23; // x24
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w21
  Il2CppObject *Master_object; // x24
  const MethodInfo *v27; // x1
  int32_t SvtId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  ServantVoiceEntity_o *v30; // x24
  _BOOL4 v31; // w26
  UnityEngine_Object_o *baseCollider; // x24
  int v33; // w27
  int v34; // s0
  float v35; // s1
  float v37; // s1
  UnityEngine_Object_o *baseSprite; // x24
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v40; // w27
  _BOOL4 v41; // w24
  float v42; // s0
  float v43; // s2
  float v44; // s9
  float v45; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v47; // s1
  float v48; // s8
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  float v51; // s0
  float v52; // s2
  float v53; // s8
  float v54; // s9
  UnityEngine_Object_o *newIcon; // x21
  Il2CppObject *Component_object; // x23
  float v57; // s0
  float v58; // s3
  float v59; // s1
  float v60; // s2
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DF181 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantVoiceMaster___, item);
    sub_1B00CCC(&DataManager_TypeInfo, v14);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v15);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v16);
    sub_1B00CCC(&RubyLabelHelper_TypeInfo, v17);
    byte_48DF181 = 1;
  }
  this->fields.dispMode = mode;
  if ( !item || !mode || !this->fields.isFirst )
    return;
  messageLabel = this->fields.messageLabel;
  this->fields.isFirst = 0;
  if ( !messageLabel )
    goto LABEL_86;
  if ( !text )
    goto LABEL_86;
  v19 = *((_DWORD *)messageLabel + 43);
  UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 106) * text->fields._stringLength, 0LL);
  v20 = this->fields.messageLabel;
  rubyPrefab = this->fields.rubyPrefab;
  mainPrefab = this->fields.mainPrefab;
  v23 = (RubyLabelHelper_o *)sub_1B00F18(RubyLabelHelper_TypeInfo);
  RubyLabelHelper___ctor(v23, v20, mainPrefab, rubyPrefab, 0LL);
  if ( !v23 )
    goto LABEL_86;
  RubyLabelHelper__SetText(v23, text, 0LL);
  Size = RubyLabelHelper__get_Size(v23, 0LL);
  if ( Size.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)Size.fields.y;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v27);
  messageLabel = (void *)ServantVoiceMaster__getSvtVoiceId(SvtId, 0LL);
  this->fields.svtId = (int)messageLabel;
  if ( !Master_object )
    goto LABEL_86;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                          (ServantVoiceMaster_o *)Master_object,
                          (int32_t)messageLabel,
                          0LL);
  v31 = item->fields.svtEntity
     && (v30 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0LL))
     && v30 != 0LL;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v33 = y - v19;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)messageLabel, 0LL);
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    v37 = v35 + (float)v33;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)messageLabel, *(UnityEngine_Vector3_o *)&v34, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + v33, 0LL);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v40 = 0;
  else
    v40 = v31;
  if ( commandCodeEntity )
  {
    messageLabel = this->fields.titleCommandCodeBase;
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
    messageLabel = this->fields.titleServantBase;
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    goto LABEL_46;
  }
  messageLabel = item->fields.svtEntity;
  if ( !messageLabel
    || ((messageLabel = (void *)ServantEntity__get_IsServantEquip((ServantEntity_o *)messageLabel, 0LL),
         ((unsigned __int8)messageLabel & 1) == 0)
      ? (v41 = v40)
      : (v41 = 0),
        !this->fields.titleServantBase) )
  {
LABEL_86:
    sub_1B00F28(messageLabel, item);
  }
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.titleServantBase, 0, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( messageLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
      messageLabel = this->fields.titleCommandCodeBase;
      if ( messageLabel )
      {
LABEL_46:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
        goto LABEL_47;
      }
    }
    goto LABEL_86;
  }
  UnityEngine_GameObject__SetActive(this->fields.titleServantBase, 1, 0LL);
  messageLabel = this->fields.titleEquipBase;
  if ( !messageLabel )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = this->fields.titleCommandCodeBase;
  if ( !messageLabel )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = this->fields.titleServantBase;
  if ( !messageLabel )
    goto LABEL_86;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)messageLabel,
                       (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v31 = v40;
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
    goto LABEL_47;
  v57 = 0.5;
  if ( isOpen )
    v57 = 1.0;
  if ( !Component_object )
    goto LABEL_86;
  v58 = 1.0;
  v59 = v57;
  v60 = v57;
  UIWidget__set_color((UIWidget_o *)Component_object, *(UnityEngine_Color_o *)&v57, 0LL);
  v31 = v41;
LABEL_47:
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)messageLabel,
                                     0LL);
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  v44 = v42;
  v45 = v43;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  v61.fields.x = v44;
  v61.fields.y = (float)(Size.fields.y * 0.5) + 20.0;
  v61.fields.z = v45;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v61, 0LL);
  if ( v31 )
  {
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(
      gameObject,
      (float)((float)(Size.fields.y * 0.5) + 20.0) + this->fields.SCRIPT_BUTTON_ADD_POS_Y,
      0LL);
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)(&v47 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)messageLabel,
                                             0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v48 = v47;
    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v49, v48 + this->fields.MESSAGE_LABEL_ADD_POS_Y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v50, this->fields.BASE_SPRITE_ADD_POS_Y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + 64, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)messageLabel,
                     (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !messageLabel )
      goto LABEL_86;
    UISprite__set_spriteName((UISprite_o *)messageLabel, this->fields.TITLE_SPRITE_NAME, 0LL);
  }
  else
  {
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)messageLabel,
                                       0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v53 = v51;
    v54 = v52;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    v62.fields.y = (float)(Size.fields.y * 0.5) + -14.0;
    v62.fields.x = v53;
    v62.fields.z = v54;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v62, 0LL);
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
  {
    messageLabel = this->fields.newIcon;
    if ( !messageLabel )
      goto LABEL_86;
    ShiningIconComponent__Set_37022720((ShiningIconComponent_o *)messageLabel, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DF189 & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1);
    byte_48DF189 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewItemDrawText___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___PlayScript_b__41_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___RefreshUI_b__42_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___OnClickPlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  Il2CppObject *Object_object__47470892; // x21
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v12; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v13; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v14; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v15; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v16; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v17; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v18; // x20
  const MethodInfo *v19; // x3

  v4 = this;
  if ( (byte_48DF18A & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObject_GameObject____74577936, data);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1B00CCC(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    v6);
    byte_48DF18A = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_24;
  Object_object__47470892 = AssetData__GetObject_object__47470892(
                              data,
                              _4__this->fields.SUMMON_BG_OBJECT_NAME,
                              (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         Object_object__47470892,
         (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBg = (struct UnityEngine_GameObject_o *)v9;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&_4__this->fields.summonBg, (int32_t)v9, v10, v11);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v12->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_24;
  v14 = this;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v13->fields.summonBgRoot;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  if ( !v14 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v14, (UnityEngine_Transform_o *)this, 0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v15->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v16 = this;
  if ( !byte_48DD9F1 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1B00CCC(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    data);
    byte_48DD9F1 = 1;
  }
  if ( !v16 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v17->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v18 = this;
  if ( !byte_48DD9F6 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1B00CCC(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    data);
    byte_48DD9F6 = 1;
  }
  if ( !v18
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v18,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_24:
    sub_1B00F28(this, data);
  }
  ServantStatusFlavorTextListViewItemDrawText__PlayScript(
    (ServantStatusFlavorTextListViewItemDrawText_o *)this,
    v4->fields.inactiveCameras,
    v4->fields.inactivePrefabs,
    v19);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  void *inactivePrefabs; // x0
  __int64 v16; // x1
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v21; // x8
  UnityEngine_Object_o *battleBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v23; // x8
  __int64 v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v28; // x8
  CommonUI_o *v29; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21
  Il2CppObject *v32; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v36; // x8
  int32_t svtId; // w20
  System_Action_o *_9__2; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48DF18B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B00CCC(&ScriptManager_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B00CCC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, v11);
    sub_1B00CCC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__, v12);
    sub_1B00CCC(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v13);
    byte_48DF18B = 1;
  }
  memset(&v42, 0, sizeof(v42));
  _4__this = this->fields.__4__this;
  *(UnityEngine_Color_o *)&v17 = UnityEngine_RenderSettings__get_ambientLight(0LL);
  if ( !_4__this )
    goto LABEL_34;
  _4__this->fields.ambientLight.fields.r = v17;
  _4__this->fields.ambientLight.fields.g = v18;
  _4__this->fields.ambientLight.fields.b = v19;
  _4__this->fields.ambientLight.fields.a = v20;
  v43.fields.r = 1.0;
  v43.fields.g = 1.0;
  v43.fields.b = 1.0;
  v43.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v43, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_34;
  battleBg = (UnityEngine_Object_o *)v21->fields.battleBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  inactivePrefabs = (void *)UnityEngine_Object__op_Inequality(battleBg, 0LL, 0LL);
  if ( ((unsigned __int8)inactivePrefabs & 1) != 0 )
  {
    v23 = this->fields.__4__this;
    if ( !v23 )
      goto LABEL_34;
    inactivePrefabs = v23->fields.battleBg;
    if ( !inactivePrefabs )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inactivePrefabs, 0, 0LL);
  }
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)inactivePrefabs,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v42.fields._current )
      sub_1B00F28(0LL, v24);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v42.fields._current, 0LL);
    if ( !gameObject )
      sub_1B00F28(0LL, v26);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = AvalonSceneManager_TypeInfo;
  v29 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v28 = AvalonSceneManager_TypeInfo;
  }
  inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  v31 = *(System_Action_o **)(*((_QWORD *)inactivePrefabs + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)inactivePrefabs + 56) )
    {
      j_il2cpp_runtime_class_init_0(inactivePrefabs);
      inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)inactivePrefabs + 23);
    v31 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v31, v32, Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__41_1 = v31;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_1, (int32_t)v31, v34, v35);
  }
  if ( !v29
    || (inactivePrefabs = (void *)CommonUI__maskFadein(v29, DEFAULT_FADE_TIME, v31, 0LL),
        (v36 = this->fields.__4__this) == 0LL) )
  {
LABEL_34:
    sub_1B00F28(inactivePrefabs, v16);
  }
  svtId = v36->fields.svtId;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v39, v40);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayGacha(svtId, 0, 0, _9__2, 0, -1, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__2(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1B00F28(this, method);
  ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
    this->fields.__4__this,
    this->fields.inactiveCameras,
    this->fields.inactivePrefabs,
    v2);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___RefreshUI_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v17; // x8
  UnityEngine_Object_o *monitor; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v19; // x8
  UnityEngine_Object_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v23; // x8
  System_String_o *_4__this; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v25; // x8
  UnityEngine_Object_o *v26; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v27; // x8
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_Color_o *v30; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v31; // x8
  UnityEngine_Object_o *klass; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v33; // x8
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  ServantStatusFlavorTextListViewItemDrawText_o *v39; // x0
  Il2CppObject *current; // x20
  __int64 v41; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v45; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v47; // x8
  CommonUI_o *v48; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *items; // x20
  Il2CppObject *v51; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-80h] BYREF

  v2 = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **)this;
  if ( (byte_48DF18C & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AssetManager_TypeInfo, v3);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Camera__GetEnumerator__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B00CCC(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, v15);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)sub_1B00CCC(
                                                                                    &ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo,
                                                                                    v16);
    byte_48DF18C = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v56, 0, sizeof(v56));
  v17 = v2[2];
  if ( !v17 )
    goto LABEL_59;
  monitor = (UnityEngine_Object_o *)v17[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  monitor,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = v2[2];
    if ( !v19 )
      goto LABEL_59;
    v20 = (UnityEngine_Object_o *)v19[2].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(v20, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].monitor = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this[2].monitor, 0, v21, v22);
  }
  v23 = v2[2];
  if ( !v23 )
    goto LABEL_59;
  _4__this = (System_String_o *)v23[3].fields.__4__this;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(_4__this, 0LL);
  v25 = v2[2];
  if ( !v25 )
    goto LABEL_59;
  v26 = (UnityEngine_Object_o *)v25[2].fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  v26,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v27 = v2[2];
    if ( !v27 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v27[2].fields.__4__this;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].fields.__4__this = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this[2].fields, 0, v28, v29);
  }
  v30 = (UnityEngine_Color_o *)v2[2];
  if ( !v30 )
    goto LABEL_59;
  UnityEngine_RenderSettings__set_ambientLight(v30[4], 0LL);
  v31 = v2[2];
  if ( !v31 )
    goto LABEL_59;
  klass = (UnityEngine_Object_o *)v31[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  klass,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v33 = v2[2];
    if ( !v33 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v33[2].klass;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].klass = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this[2], 0, v34, v35);
  }
  this = v2[3];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v55;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1B00F28(0LL, v36);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  this = v2[4];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v56 = v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v39 = (ServantStatusFlavorTextListViewItemDrawText_o *)v2[2];
    if ( !v39 )
      sub_1B00F28(0LL, v37);
    current = v56.fields._current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v39,
      (UnityEngine_GameObject_o *)v56.fields._current,
      1,
      v38);
    if ( !current )
      sub_1B00F28(v41, v42);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0LL);
    if ( !gameObject )
      sub_1B00F28(0LL, v44);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v45 = v2[2];
  if ( !v45 )
    goto LABEL_59;
  BYTE4(v45[1].fields.__4__this) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v47 = AvalonSceneManager_TypeInfo;
  v48 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v47 = AvalonSceneManager_TypeInfo;
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v47->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  items = (System_Action_o *)this[4].fields.inactiveCameras->fields._items;
  if ( !items )
  {
    if ( !LODWORD(this[5].fields.inactiveCameras) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v51 = (Il2CppObject *)this[4].fields.inactiveCameras->klass;
    items = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(items, v51, Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__42_1 = items;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_1, (int32_t)items, v53, v54);
  }
  if ( !v48 )
LABEL_59:
    sub_1B00F28(this, method);
  CommonUI__maskFadein(v48, DEFAULT_FADE_TIME, items, 0LL);
}