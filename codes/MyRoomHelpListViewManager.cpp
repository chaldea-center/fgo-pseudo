void __fastcall MyRoomHelpListViewManager___cctor(const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_array *v1; // x19
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v8; // x20
  const MethodInfo *v9; // x5
  int32_t v10; // w2
  int32_t v11; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v12; // x20
  const MethodInfo *v13; // x5
  int32_t v14; // w2
  int32_t v15; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v16; // x20
  const MethodInfo *v17; // x5
  int32_t v18; // w2
  int32_t v19; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v20; // x20
  const MethodInfo *v21; // x5
  int32_t v22; // w2
  int32_t v23; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v24; // x20
  const MethodInfo *v25; // x5
  int32_t v26; // w2
  int32_t v27; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v28; // x20
  const MethodInfo *v29; // x5
  int32_t v30; // w2
  int32_t v31; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v32; // x20
  const MethodInfo *v33; // x5
  int32_t v34; // w2
  int32_t v35; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v36; // x20
  const MethodInfo *v37; // x5
  int32_t v38; // w2
  int32_t v39; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v40; // x20
  const MethodInfo *v41; // x5
  int32_t v42; // w2
  int32_t v43; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v44; // x20
  const MethodInfo *v45; // x5
  int32_t v46; // w2
  int32_t v47; // w3
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v48; // x20
  const MethodInfo *v49; // x5
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w2
  int32_t v53; // w3
  System_Array_o *v54; // x0
  System_Array_o *v55; // x19
  struct MyRoomHelpListViewManager_StaticFields *static_fields; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w1
  struct MyRoomHelpListViewManager_StaticFields *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w1
  struct MyRoomHelpListViewManager_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w1
  struct MyRoomHelpListViewManager_StaticFields *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w1
  struct MyRoomHelpListViewManager_StaticFields *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x0
  System_RuntimeFieldHandle_o v76; // 0:w1.4

  if ( (byte_4A56E0F & 1) == 0 )
  {
    sub_1B885B0(&MyRoomHelpListViewManager_ItemKind___TypeInfo);
    sub_1B885B0(&MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo);
    sub_1B885B0(&MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
    sub_1B885B0(&MyRoomHelpListViewManager_TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__C23AC2580AD5AD3A854B769CA21B8644DE250D120C76F90562518C86407849BA);
    sub_1B885B0(&StringLiteral_8802/*"MYROOM_MENU_NAME_3"*/);
    sub_1B885B0(&StringLiteral_8785/*"MYROOM_HELP_HELP_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_8783/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_14597/*"Tutorial/tutorial_alpha"*/);
    sub_1B885B0(&StringLiteral_8793/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_8786/*"MYROOM_HELP_ITEM_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_8784/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_8787/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_8796/*"MYROOM_MENU_NAME_1"*/);
    sub_1B885B0(&StringLiteral_8790/*"MYROOM_HELP_OPTION_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_8791/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_8803/*"MYROOM_MENU_NAME_4"*/);
    sub_1B885B0(&StringLiteral_24100/*"tutorial_0006"*/);
    sub_1B885B0(&StringLiteral_8792/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_8808/*"MYROOM_MENU_NAME_9"*/);
    sub_1B885B0(&StringLiteral_8798/*"MYROOM_MENU_NAME_11"*/);
    sub_1B885B0(&StringLiteral_8801/*"MYROOM_MENU_NAME_2"*/);
    sub_1B885B0(&StringLiteral_20361/*"img_menuboard_01"*/);
    sub_1B885B0(&StringLiteral_8804/*"MYROOM_MENU_NAME_5"*/);
    sub_1B885B0(&StringLiteral_8807/*"MYROOM_MENU_NAME_8"*/);
    sub_1B885B0(&StringLiteral_8799/*"MYROOM_MENU_NAME_12"*/);
    sub_1B885B0(&StringLiteral_20443/*"img_shop_0"*/);
    sub_1B885B0(&StringLiteral_14596/*"Tutorial/tutorial_0006"*/);
    sub_1B885B0(&StringLiteral_8805/*"MYROOM_MENU_NAME_6"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_8788/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_24101/*"tutorial_alpha"*/);
    sub_1B885B0(&StringLiteral_8789/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/);
    sub_1B885B0(&StringLiteral_8800/*"MYROOM_MENU_NAME_13"*/);
    byte_4A56E0F = 1;
  }
  v1 = (struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_array *)sub_1B88658(
                                                                      MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo,
                                                                      12LL);
  v2 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v2,
    1,
    (System_String_o *)StringLiteral_8788/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8798/*"MYROOM_MENU_NAME_11"*/,
    v3);
  if ( !v1 )
    sub_1B8880C(v4, v5);
  if ( v2 )
  {
    v4 = sub_1B886EC(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( !v1->max_length )
    goto LABEL_41;
  v1->m_Items[0] = v2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v1->m_Items, (int32_t)v2, v6, v7);
  v8 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v8,
    2,
    (System_String_o *)StringLiteral_8787/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8799/*"MYROOM_MENU_NAME_12"*/,
    v9);
  if ( v8 )
  {
    v4 = sub_1B886EC(v8, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 1 )
    goto LABEL_41;
  v1->m_Items[1] = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[1], (int32_t)v8, v10, v11);
  v12 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v12,
    3,
    (System_String_o *)StringLiteral_8786/*"MYROOM_HELP_ITEM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8796/*"MYROOM_MENU_NAME_1"*/,
    v13);
  if ( v12 )
  {
    v4 = sub_1B886EC(v12, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 2 )
    goto LABEL_41;
  v1->m_Items[2] = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[2], (int32_t)v12, v14, v15);
  v16 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v16,
    5,
    (System_String_o *)StringLiteral_8792/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8801/*"MYROOM_MENU_NAME_2"*/,
    v17);
  if ( v16 )
  {
    v4 = sub_1B886EC(v16, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 3 )
    goto LABEL_41;
  v1->m_Items[3] = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[3], (int32_t)v16, v18, v19);
  v20 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v20,
    6,
    (System_String_o *)StringLiteral_8789/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8802/*"MYROOM_MENU_NAME_3"*/,
    v21);
  if ( v20 )
  {
    v4 = sub_1B886EC(v20, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 4 )
    goto LABEL_41;
  v1->m_Items[4] = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[4], (int32_t)v20, v22, v23);
  v24 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v24,
    7,
    (System_String_o *)StringLiteral_8784/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8803/*"MYROOM_MENU_NAME_4"*/,
    v25);
  if ( v24 )
  {
    v4 = sub_1B886EC(v24, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 5 )
    goto LABEL_41;
  v1->m_Items[5] = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[5], (int32_t)v24, v26, v27);
  v28 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v28,
    8,
    (System_String_o *)StringLiteral_8785/*"MYROOM_HELP_HELP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8804/*"MYROOM_MENU_NAME_5"*/,
    v29);
  if ( v28 )
  {
    v4 = sub_1B886EC(v28, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 6 )
    goto LABEL_41;
  v1->m_Items[6] = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[6], (int32_t)v28, v30, v31);
  v32 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v32,
    9,
    (System_String_o *)StringLiteral_8790/*"MYROOM_HELP_OPTION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8805/*"MYROOM_MENU_NAME_6"*/,
    v33);
  if ( v32 )
  {
    v4 = sub_1B886EC(v32, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 7 )
    goto LABEL_41;
  v1->m_Items[7] = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[7], (int32_t)v32, v34, v35);
  v36 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v36,
    10,
    (System_String_o *)StringLiteral_8793/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8807/*"MYROOM_MENU_NAME_8"*/,
    v37);
  if ( v36 )
  {
    v4 = sub_1B886EC(v36, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 8 )
    goto LABEL_41;
  v1->m_Items[8] = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[8], (int32_t)v36, v38, v39);
  v40 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v40,
    11,
    (System_String_o *)StringLiteral_8783/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8800/*"MYROOM_MENU_NAME_13"*/,
    v41);
  if ( v40 )
  {
    v4 = sub_1B886EC(v40, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 9 )
    goto LABEL_41;
  v1->m_Items[9] = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[9], (int32_t)v40, v42, v43);
  v44 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v44,
    12,
    (System_String_o *)StringLiteral_8791/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20361/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8808/*"MYROOM_MENU_NAME_9"*/,
    v45);
  if ( v44 )
  {
    v4 = sub_1B886EC(v44, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 0xA )
    goto LABEL_41;
  v1->m_Items[10] = v44;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[10], (int32_t)v44, v46, v47);
  v48 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B887FC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v48,
    13,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_20443/*"img_shop_0"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v49);
  if ( v48 )
  {
    v4 = sub_1B886EC(v48, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_42:
      v75 = sub_1B88830();
      sub_1B886D8(v75, 0LL);
    }
  }
  if ( v1->max_length <= 0xB )
LABEL_41:
    sub_1B88814(v4, v5);
  v1->m_Items[11] = v48;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v1->m_Items[11], (int32_t)v48, v50, v51);
  MyRoomHelpListViewManager_TypeInfo->static_fields->itemInfoList = v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)MyRoomHelpListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v52,
    v53);
  v54 = (System_Array_o *)sub_1B88658(MyRoomHelpListViewManager_ItemKind___TypeInfo, 11LL);
  v76.fields.value = Field__PrivateImplementationDetails__C23AC2580AD5AD3A854B769CA21B8644DE250D120C76F90562518C86407849BA;
  v55 = v54;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v54, v76, 0LL);
  static_fields = MyRoomHelpListViewManager_TypeInfo->static_fields;
  static_fields->KindList = (struct MyRoomHelpListViewManager_ItemKind_array *)v55;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->KindList, (int32_t)v55, v57, v58);
  v59 = StringLiteral_14596/*"Tutorial/tutorial_0006"*/;
  v60 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v60->HELP_BASE_SPRITE_PATH = (struct System_String_o *)StringLiteral_14596/*"Tutorial/tutorial_0006"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v60->HELP_BASE_SPRITE_PATH, v59, v61, v62);
  v63 = StringLiteral_24100/*"tutorial_0006"*/;
  v64 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v64->HELP_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_24100/*"tutorial_0006"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v64->HELP_BASE_SPRITE_NAME, v63, v65, v66);
  v67 = StringLiteral_14597/*"Tutorial/tutorial_alpha"*/;
  v68 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v68->HELP_BASE_ALPHA_PATH = (struct System_String_o *)StringLiteral_14597/*"Tutorial/tutorial_alpha"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v68->HELP_BASE_ALPHA_PATH, v67, v69, v70);
  v71 = StringLiteral_24101/*"tutorial_alpha"*/;
  v72 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v72->HELP_BASE_ALPHA_NAME = (struct System_String_o *)StringLiteral_24101/*"tutorial_alpha"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v72->HELP_BASE_ALPHA_NAME, v71, v73, v74);
}


void __fastcall MyRoomHelpListViewManager___ctor(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MyRoomHelpListViewManager__Callback(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct MyRoomHelpListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall MyRoomHelpListViewManager__CloseHelpDialog(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc2_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  MyRoomHelpMenu_o *baseDialog; // x20
  MyRoomHelpMenu_CallbackFunc_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A56E09 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomHelpMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_MyRoomHelpListViewManager_WaitFadeOut__);
    byte_4A56E09 = 1;
  }
  this->fields.callbackFunc2 = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)method, v3);
  baseDialog = this->fields.baseDialog;
  v7 = (MyRoomHelpMenu_CallbackFunc_o *)sub_1B887FC(MyRoomHelpMenu_CallbackFunc_TypeInfo);
  MyRoomHelpMenu_CallbackFunc___ctor(v7, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_WaitFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1B8880C(v8, v9);
  MyRoomHelpMenu__Close(baseDialog, v7, 0LL);
}


void __fastcall MyRoomHelpListViewManager__CreateList(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  MyRoomHelpMenu_o *baseDialog; // x0
  _QWORD *monitor; // x25
  __int64 v8; // x8
  unsigned __int64 v9; // x26
  int v10; // w20
  System_Collections_Generic_Dictionary_UIPanel__int__c *klass; // x9
  __int64 namespaze; // x8
  Il2CppType *p_byval_arg; // x9
  _DWORD *data; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4A56E08 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&MyRoomHelpListViewItem_TypeInfo);
    sub_1B885B0(&MyRoomHelpListViewManager_TypeInfo);
    byte_4A56E08 = 1;
  }
  this->fields.callbackFunc2 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v2, v3);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_27;
  MyRoomHelpMenu__Open(baseDialog, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
  if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
  }
  monitor = baseDialog[1].fields.panelDepthList->monitor;
  if ( !monitor )
    goto LABEL_27;
  v8 = monitor[3];
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1B88814(baseDialog, v5);
      baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
      v10 = *((_DWORD *)monitor + v9 + 8);
      if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
        baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
      }
      klass = baseDialog[1].fields.panelDepthList->klass;
      if ( !klass )
        break;
      if ( (int)klass->_1.namespaze >= 1 )
      {
        namespaze = (unsigned int)klass->_1.namespaze;
        p_byval_arg = &klass->_1.byval_arg;
        while ( 1 )
        {
          data = p_byval_arg->data;
          if ( p_byval_arg->data )
          {
            if ( data[4] == v10 )
              break;
          }
          --namespaze;
          p_byval_arg = (Il2CppType *)((char *)p_byval_arg + 8);
          if ( !namespaze )
            goto LABEL_24;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        size = itemList->fields._size;
        v17 = sub_1B887FC(MyRoomHelpListViewItem_TypeInfo);
        ListViewItem___ctor_40706472((ListViewItem_o *)v17, size, 0LL);
        *(_QWORD *)(v17 + 112) = data;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 112), (int32_t)data, v18, v19);
        *(_BYTE *)(v17 + 120) = 1;
        items = itemList->fields._items;
        v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v24 = itemList->fields._size;
        if ( (unsigned int)v24 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v17,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + v24;
          itemList->fields._size = v24 + 1;
          v25[4] = (Il2CppClass *)v17;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), v17, v20, v21);
        }
      }
LABEL_24:
      LODWORD(v8) = *((_DWORD *)monitor + 6);
      if ( (__int64)++v9 >= (int)v8 )
        goto LABEL_25;
    }
LABEL_27:
    sub_1B8880C(baseDialog, v5);
  }
LABEL_25:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall MyRoomHelpListViewManager__DestroyList(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


MyRoomHelpListViewItem_o *__fastcall MyRoomHelpListViewManager__GetItem(
        MyRoomHelpListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A56E0A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&MyRoomHelpListViewItem_TypeInfo);
    byte_4A56E0A = 1;
  }
  result = (MyRoomHelpListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MyRoomHelpListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(MyRoomHelpListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MyRoomHelpListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomHelpListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall MyRoomHelpListViewManager__LoadBaseSprite(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x21
  MyRoomHelpListViewManager_c *v11; // x8
  struct System_String_o *HELP_BASE_SPRITE_PATH; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_String_o *HELP_BASE_ALPHA_PATH; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_array *v18; // x19
  System_Action_o *v19; // x21

  if ( (byte_4A56E06 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&MyRoomHelpListViewManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__);
    sub_1B885B0(&MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo);
    byte_4A56E06 = 1;
  }
  v3 = sub_1B887FC(MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  if ( this->fields.initMode )
    return;
  v4 = sub_1B88658(string___TypeInfo, 2LL);
  v10 = v4;
  v11 = MyRoomHelpListViewManager_TypeInfo;
  if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    v11 = MyRoomHelpListViewManager_TypeInfo;
  }
  if ( !v10 )
LABEL_13:
    sub_1B8880C(v4, v5);
  if ( !*(_DWORD *)(v10 + 24)
    || (HELP_BASE_SPRITE_PATH = v11->static_fields->HELP_BASE_SPRITE_PATH,
        *(_QWORD *)(v10 + 32) = HELP_BASE_SPRITE_PATH,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)HELP_BASE_SPRITE_PATH, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u) )
  {
    sub_1B88814(v4, v5);
  }
  HELP_BASE_ALPHA_PATH = MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH;
  *(_QWORD *)(v10 + 40) = HELP_BASE_ALPHA_PATH;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), (int32_t)HELP_BASE_ALPHA_PATH, v13, v14);
  *(_QWORD *)(v3 + 24) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), v10, v16, v17);
  this->fields.initMode = 1;
  v18 = *(System_String_array **)(v3 + 24);
  v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v3,
    Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37797288(v18, v19, 1, 0LL);
}


void __fastcall MyRoomHelpListViewManager__OnMoveEnd(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_4A56E0E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56E0E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject )
          goto LABEL_17;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_17;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.castClass)(
            gameObject,
            1LL,
            gameObject->klass[1]._1.declaringType);
          return;
        }
LABEL_17:
        sub_1B8880C(gameObject, v7);
      }
    }
  }
}


void __fastcall MyRoomHelpListViewManager__ReleaseBaseSprite(
        MyRoomHelpListViewManager_o *this,
        const MethodInfo *method)
{
  MyRoomHelpListViewManager_c *v3; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0

  if ( (byte_4A56E07 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1B885B0(&MyRoomHelpListViewManager_TypeInfo);
    byte_4A56E07 = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v3 = MyRoomHelpListViewManager_TypeInfo;
    if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
      v3 = MyRoomHelpListViewManager_TypeInfo;
    }
    HELP_BASE_SPRITE_PATH = v3->static_fields->HELP_BASE_SPRITE_PATH;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0LL);
    AssetManager__releaseAssetStorage(MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0LL);
    BaseWindow = this->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1B8880C(BaseWindow, v5);
    }
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))BaseWindow->klass[2]._1.gc_desc)(
      BaseWindow,
      0LL,
      BaseWindow->klass[2]._1.name);
  }
  this->fields.initMode = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewManager__RequestListObject(
        MyRoomHelpListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A56E0C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__);
    sub_1B885B0(&Method_MyRoomHelpListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56E0C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      MyRoomHelpListViewObject__Init_31782276((MyRoomHelpListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewManager__RequestListObject_31782360(
        MyRoomHelpListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A56E0D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__);
    sub_1B885B0(&Method_MyRoomHelpListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56E0D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      MyRoomHelpListViewObject__Init_31782864((MyRoomHelpListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


void __fastcall MyRoomHelpListViewManager__SetObjectItem(
        MyRoomHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A56E0B & 1) == 0 )
  {
    this = (MyRoomHelpListViewManager_o *)sub_1B885B0(&MyRoomHelpListViewObject_TypeInfo);
    byte_4A56E0B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MyRoomHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MyRoomHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomHelpListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  MyRoomHelpListViewObject__Init_31781680((MyRoomHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void __fastcall MyRoomHelpListViewManager__WaitFadeOut(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct MyRoomHelpListViewManager_CallbackFunc2_o *callbackFunc2; // x19

  callbackFunc2 = this->fields.callbackFunc2;
  this->fields.callbackFunc2 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v2, v3);
  if ( callbackFunc2 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
      callbackFunc2->fields.original_method_info,
      *(_QWORD *)&callbackFunc2->fields.extra_arg);
}


void __fastcall MyRoomHelpListViewManager__add_callbackFunc(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MyRoomHelpListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MyRoomHelpListViewManager_o *v10; // x0
  MyRoomHelpListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A56E00 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo);
    byte_4A56E00 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MyRoomHelpListViewManager_CallbackFunc_c *)v7->klass != MyRoomHelpListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B88ACC(v7);
  MyRoomHelpListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall MyRoomHelpListViewManager__add_callbackFunc2(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc2_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct MyRoomHelpListViewManager_CallbackFunc2_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MyRoomHelpListViewManager_o *v10; // x0
  MyRoomHelpListViewManager_CallbackFunc2_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A56E02 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
    byte_4A56E02 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MyRoomHelpListViewManager_CallbackFunc2_c *)v7->klass != MyRoomHelpListViewManager_CallbackFunc2_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B88ACC(v7);
  MyRoomHelpListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MyRoomHelpListViewObject__o *__fastcall MyRoomHelpListViewManager__get_ClippingObjectList(
        MyRoomHelpListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A56E05 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56E05 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)MyRoomHelpListViewObject__GetItem((MyRoomHelpListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MyRoomHelpListViewObject__o *)v3;
}


System_Collections_Generic_List_MyRoomHelpListViewObject__o *__fastcall MyRoomHelpListViewManager__get_ObjectList(
        MyRoomHelpListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A56E04 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56E04 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MyRoomHelpListViewObject__o *)v3;
}


void __fastcall MyRoomHelpListViewManager__remove_callbackFunc(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MyRoomHelpListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MyRoomHelpListViewManager_o *v10; // x0
  MyRoomHelpListViewManager_CallbackFunc2_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A56E01 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo);
    byte_4A56E01 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MyRoomHelpListViewManager_CallbackFunc_c *)v7->klass != MyRoomHelpListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B88ACC(v7);
  MyRoomHelpListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall MyRoomHelpListViewManager__remove_callbackFunc2(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc2_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct MyRoomHelpListViewManager_CallbackFunc2_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MyRoomHelpListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A56E03 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
    byte_4A56E03 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MyRoomHelpListViewManager_CallbackFunc2_c *)v7->klass != MyRoomHelpListViewManager_CallbackFunc2_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B88ACC(v7);
  MyRoomHelpListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewManager_CallbackFunc___ctor(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C86C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8688;
}


System_IAsyncResult_o *__fastcall MyRoomHelpListViewManager_CallbackFunc__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc__Invoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewManager_CallbackFunc2___ctor(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C871C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C86DC;
}


System_IAsyncResult_o *__fastcall MyRoomHelpListViewManager_CallbackFunc2__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc2__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc2__Invoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
        MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        System_String_o *itemName,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.kind = kind;
  this->fields.textCode = textCode;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.textCode, (int32_t)textCode, v11, v12);
  this->fields.imageName = imageName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.imageName, (int32_t)imageName, v13, v14);
  this->fields.itemName = itemName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemName, (int32_t)itemName, v15, v16);
}


void __fastcall MyRoomHelpListViewManager___c__DisplayClass25_0___ctor(
        MyRoomHelpListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomHelpListViewManager___c__DisplayClass25_0___LoadBaseSprite_b__0(
        MyRoomHelpListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  MyRoomHelpListViewManager___c__DisplayClass25_0_o *v2; // x19
  struct MyRoomHelpListViewManager_o *_4__this; // x8
  struct System_String_array *path; // x8
  System_String_o *v5; // x20
  AssetData_o *v6; // x20
  struct System_String_array *v7; // x8
  MyRoomHelpListViewManager___c__DisplayClass25_0_o *v8; // x20
  struct MyRoomHelpListViewManager_o *v9; // x8
  MyRoomHelpListViewManager___c__DisplayClass25_0_o *v10; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Shader_o *v12; // x24
  UnityEngine_Material_o *v13; // x22
  struct MyRoomHelpListViewManager_o *v14; // x8
  MyRoomHelpListViewManager_c *v15; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x19

  v2 = this;
  if ( (byte_4A56E10 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&MyRoomHelpListViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A56E10 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  if ( _4__this->fields.initMode == 1 )
  {
    path = v2->fields.path;
    if ( !path )
      goto LABEL_27;
    if ( !path->max_length )
      goto LABEL_28;
    v5 = path->m_Items[0];
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetManager__getAssetStorage(v5, 0LL);
    v6 = (AssetData_o *)this;
    if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    if ( !v6 )
      goto LABEL_27;
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__48635516(
                                                                  v6,
                                                                  MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_SPRITE_NAME,
                                                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
    v7 = v2->fields.path;
    if ( !v7 )
      goto LABEL_27;
    if ( v7->max_length <= 1 )
LABEL_28:
      sub_1B88814(this, method);
    v8 = this;
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetManager__getAssetStorage(v7->m_Items[1], 0LL);
    if ( this )
    {
      this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__48635516(
                                                                    (AssetData_o *)this,
                                                                    MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_NAME,
                                                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
      v9 = v2->fields.__4__this;
      if ( v9 )
      {
        v10 = this;
        this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)v9->fields.BaseWindow;
        if ( this )
        {
          this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0LL);
          if ( this )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UITexture___);
            v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
            v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
            UnityEngine_Material___ctor(v13, v12, 0LL);
            if ( Component_object )
            {
              this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                                                                            Component_object,
                                                                            v13,
                                                                            Component_object->klass->vtable[26].methodPtr);
              if ( v13 )
              {
                UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)v8, 0LL);
                UnityEngine_Material__SetTexture(
                  v13,
                  (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
                  (UnityEngine_Texture_o *)v10,
                  0LL);
                v14 = v2->fields.__4__this;
                if ( v14 )
                {
                  v14->fields.initMode = 2;
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1B8880C(this, method);
  }
  v15 = MyRoomHelpListViewManager_TypeInfo;
  if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    v15 = MyRoomHelpListViewManager_TypeInfo;
  }
  HELP_BASE_SPRITE_PATH = v15->static_fields->HELP_BASE_SPRITE_PATH;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0LL);
  AssetManager__releaseAssetStorage(MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0LL);
}