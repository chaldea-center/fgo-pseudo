void __fastcall MyRoomHelpListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_array *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v38; // x20
  const MethodInfo *v39; // x5
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v44; // x20
  const MethodInfo *v45; // x5
  __int64 v46; // x1
  __int64 v47; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v48; // x20
  const MethodInfo *v49; // x5
  __int64 v50; // x1
  __int64 v51; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v52; // x20
  const MethodInfo *v53; // x5
  __int64 v54; // x1
  __int64 v55; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v56; // x20
  const MethodInfo *v57; // x5
  __int64 v58; // x1
  __int64 v59; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v60; // x20
  const MethodInfo *v61; // x5
  __int64 v62; // x1
  __int64 v63; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v64; // x20
  const MethodInfo *v65; // x5
  __int64 v66; // x1
  __int64 v67; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v68; // x20
  const MethodInfo *v69; // x5
  __int64 v70; // x1
  __int64 v71; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v72; // x20
  const MethodInfo *v73; // x5
  __int64 v74; // x1
  __int64 v75; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v76; // x20
  const MethodInfo *v77; // x5
  __int64 v78; // x1
  __int64 v79; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v80; // x20
  const MethodInfo *v81; // x5
  __int64 v82; // x1
  __int64 v83; // x2
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v84; // x20
  const MethodInfo *v85; // x5
  System_Array_o *v86; // x0
  System_Array_o *v87; // x19
  struct MyRoomHelpListViewManager_StaticFields *static_fields; // x0
  struct MyRoomHelpListViewManager_StaticFields *v89; // x0
  struct MyRoomHelpListViewManager_StaticFields *v90; // x0
  struct MyRoomHelpListViewManager_StaticFields *v91; // x0
  struct MyRoomHelpListViewManager_StaticFields *v92; // x0
  __int64 v93; // x0
  System_RuntimeFieldHandle_o v94; // 0:w1.4

  if ( (byte_49F8006 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomHelpListViewManager_ItemKind___TypeInfo, v1);
    sub_1B640C8(&MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo, v2);
    sub_1B640C8(&MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo, v3);
    sub_1B640C8(&MyRoomHelpListViewManager_TypeInfo, v4);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__C23AC2580AD5AD3A854B769CA21B8644DE250D120C76F90562518C86407849BA,
      v5);
    sub_1B640C8(&StringLiteral_8760/*"MYROOM_MENU_NAME_3"*/, v6);
    sub_1B640C8(&StringLiteral_8743/*"MYROOM_HELP_HELP_EXPLANATION"*/, v7);
    sub_1B640C8(&StringLiteral_8741/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/, v8);
    sub_1B640C8(&StringLiteral_14526/*"Tutorial/tutorial_alpha"*/, v9);
    sub_1B640C8(&StringLiteral_8751/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/, v10);
    sub_1B640C8(&StringLiteral_8744/*"MYROOM_HELP_ITEM_EXPLANATION"*/, v11);
    sub_1B640C8(&StringLiteral_8742/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/, v12);
    sub_1B640C8(&StringLiteral_8745/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/, v13);
    sub_1B640C8(&StringLiteral_8754/*"MYROOM_MENU_NAME_1"*/, v14);
    sub_1B640C8(&StringLiteral_8748/*"MYROOM_HELP_OPTION_EXPLANATION"*/, v15);
    sub_1B640C8(&StringLiteral_8749/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/, v16);
    sub_1B640C8(&StringLiteral_8761/*"MYROOM_MENU_NAME_4"*/, v17);
    sub_1B640C8(&StringLiteral_24001/*"tutorial_0006"*/, v18);
    sub_1B640C8(&StringLiteral_8750/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/, v19);
    sub_1B640C8(&StringLiteral_8766/*"MYROOM_MENU_NAME_9"*/, v20);
    sub_1B640C8(&StringLiteral_8756/*"MYROOM_MENU_NAME_11"*/, v21);
    sub_1B640C8(&StringLiteral_8759/*"MYROOM_MENU_NAME_2"*/, v22);
    sub_1B640C8(&StringLiteral_20281/*"img_menuboard_01"*/, v23);
    sub_1B640C8(&StringLiteral_8762/*"MYROOM_MENU_NAME_5"*/, v24);
    sub_1B640C8(&StringLiteral_8765/*"MYROOM_MENU_NAME_8"*/, v25);
    sub_1B640C8(&StringLiteral_8757/*"MYROOM_MENU_NAME_12"*/, v26);
    sub_1B640C8(&StringLiteral_20362/*"img_shop_0"*/, v27);
    sub_1B640C8(&StringLiteral_14525/*"Tutorial/tutorial_0006"*/, v28);
    sub_1B640C8(&StringLiteral_8763/*"MYROOM_MENU_NAME_6"*/, v29);
    sub_1B640C8(&StringLiteral_1/*""*/, v30);
    sub_1B640C8(&StringLiteral_8746/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/, v31);
    sub_1B640C8(&StringLiteral_24002/*"tutorial_alpha"*/, v32);
    sub_1B640C8(&StringLiteral_8747/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/, v33);
    sub_1B640C8(&StringLiteral_8758/*"MYROOM_MENU_NAME_13"*/, v34);
    byte_49F8006 = 1;
  }
  v35 = (struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_array *)sub_1B64170(
                                                                       MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo,
                                                                       12LL);
  v38 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v36,
                                                            v37);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v38,
    1,
    (System_String_o *)StringLiteral_8746/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8756/*"MYROOM_MENU_NAME_11"*/,
    v39);
  if ( !v35 )
    sub_1B64324(v40);
  if ( v38 )
  {
    v40 = sub_1B64204(v38, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( !v35->max_length )
    goto LABEL_41;
  v35->m_Items[0] = v38;
  sub_1B6406C(v35->m_Items);
  v44 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v42,
                                                            v43);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v44,
    2,
    (System_String_o *)StringLiteral_8745/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8757/*"MYROOM_MENU_NAME_12"*/,
    v45);
  if ( v44 )
  {
    v40 = sub_1B64204(v44, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_41;
  v35->m_Items[1] = v44;
  sub_1B6406C(&v35->m_Items[1]);
  v48 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v46,
                                                            v47);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v48,
    3,
    (System_String_o *)StringLiteral_8744/*"MYROOM_HELP_ITEM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8754/*"MYROOM_MENU_NAME_1"*/,
    v49);
  if ( v48 )
  {
    v40 = sub_1B64204(v48, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_41;
  v35->m_Items[2] = v48;
  sub_1B6406C(&v35->m_Items[2]);
  v52 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v50,
                                                            v51);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v52,
    5,
    (System_String_o *)StringLiteral_8750/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8759/*"MYROOM_MENU_NAME_2"*/,
    v53);
  if ( v52 )
  {
    v40 = sub_1B64204(v52, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_41;
  v35->m_Items[3] = v52;
  sub_1B6406C(&v35->m_Items[3]);
  v56 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v54,
                                                            v55);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v56,
    6,
    (System_String_o *)StringLiteral_8747/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8760/*"MYROOM_MENU_NAME_3"*/,
    v57);
  if ( v56 )
  {
    v40 = sub_1B64204(v56, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 4 )
    goto LABEL_41;
  v35->m_Items[4] = v56;
  sub_1B6406C(&v35->m_Items[4]);
  v60 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v58,
                                                            v59);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v60,
    7,
    (System_String_o *)StringLiteral_8742/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8761/*"MYROOM_MENU_NAME_4"*/,
    v61);
  if ( v60 )
  {
    v40 = sub_1B64204(v60, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 5 )
    goto LABEL_41;
  v35->m_Items[5] = v60;
  sub_1B6406C(&v35->m_Items[5]);
  v64 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v62,
                                                            v63);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v64,
    8,
    (System_String_o *)StringLiteral_8743/*"MYROOM_HELP_HELP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8762/*"MYROOM_MENU_NAME_5"*/,
    v65);
  if ( v64 )
  {
    v40 = sub_1B64204(v64, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 6 )
    goto LABEL_41;
  v35->m_Items[6] = v64;
  sub_1B6406C(&v35->m_Items[6]);
  v68 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v66,
                                                            v67);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v68,
    9,
    (System_String_o *)StringLiteral_8748/*"MYROOM_HELP_OPTION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8763/*"MYROOM_MENU_NAME_6"*/,
    v69);
  if ( v68 )
  {
    v40 = sub_1B64204(v68, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 7 )
    goto LABEL_41;
  v35->m_Items[7] = v68;
  sub_1B6406C(&v35->m_Items[7]);
  v72 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v70,
                                                            v71);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v72,
    10,
    (System_String_o *)StringLiteral_8751/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8765/*"MYROOM_MENU_NAME_8"*/,
    v73);
  if ( v72 )
  {
    v40 = sub_1B64204(v72, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 8 )
    goto LABEL_41;
  v35->m_Items[8] = v72;
  sub_1B6406C(&v35->m_Items[8]);
  v76 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v74,
                                                            v75);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v76,
    11,
    (System_String_o *)StringLiteral_8741/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8758/*"MYROOM_MENU_NAME_13"*/,
    v77);
  if ( v76 )
  {
    v40 = sub_1B64204(v76, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 9 )
    goto LABEL_41;
  v35->m_Items[9] = v76;
  sub_1B6406C(&v35->m_Items[9]);
  v80 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v78,
                                                            v79);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v80,
    12,
    (System_String_o *)StringLiteral_8749/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20281/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8766/*"MYROOM_MENU_NAME_9"*/,
    v81);
  if ( v80 )
  {
    v40 = sub_1B64204(v80, v35->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 0xA )
    goto LABEL_41;
  v35->m_Items[10] = v80;
  sub_1B6406C(&v35->m_Items[10]);
  v84 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B64314(
                                                            MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo,
                                                            v82,
                                                            v83);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v84,
    13,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_20362/*"img_shop_0"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v85);
  if ( v84 )
  {
    v40 = sub_1B64204(v84, v35->obj.klass->_1.element_class);
    if ( !v40 )
    {
LABEL_42:
      v93 = sub_1B64348();
      sub_1B641F0(v93, 0LL);
    }
  }
  if ( v35->max_length <= 0xB )
LABEL_41:
    sub_1B6432C(v40, v41);
  v35->m_Items[11] = v84;
  sub_1B6406C(&v35->m_Items[11]);
  MyRoomHelpListViewManager_TypeInfo->static_fields->itemInfoList = v35;
  sub_1B6406C(MyRoomHelpListViewManager_TypeInfo->static_fields);
  v86 = (System_Array_o *)sub_1B64170(MyRoomHelpListViewManager_ItemKind___TypeInfo, 11LL);
  v94.fields.value = Field__PrivateImplementationDetails__C23AC2580AD5AD3A854B769CA21B8644DE250D120C76F90562518C86407849BA;
  v87 = v86;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v86, v94, 0LL);
  static_fields = MyRoomHelpListViewManager_TypeInfo->static_fields;
  static_fields->KindList = (struct MyRoomHelpListViewManager_ItemKind_array *)v87;
  sub_1B6406C(&static_fields->KindList);
  v89 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v89->HELP_BASE_SPRITE_PATH = (struct System_String_o *)StringLiteral_14525/*"Tutorial/tutorial_0006"*/;
  sub_1B6406C(&v89->HELP_BASE_SPRITE_PATH);
  v90 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v90->HELP_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_24001/*"tutorial_0006"*/;
  sub_1B6406C(&v90->HELP_BASE_SPRITE_NAME);
  v91 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v91->HELP_BASE_ALPHA_PATH = (struct System_String_o *)StringLiteral_14526/*"Tutorial/tutorial_alpha"*/;
  sub_1B6406C(&v91->HELP_BASE_ALPHA_PATH);
  v92 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v92->HELP_BASE_ALPHA_NAME = (struct System_String_o *)StringLiteral_24002/*"tutorial_alpha"*/;
  sub_1B6406C(&v92->HELP_BASE_ALPHA_NAME);
}


void __fastcall MyRoomHelpListViewManager___ctor(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall MyRoomHelpListViewManager__Callback(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1B6406C(&this->fields.callbackFunc);
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
  __int64 v5; // x1
  MyRoomHelpMenu_o *baseDialog; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  MyRoomHelpMenu_CallbackFunc_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49F8000 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomHelpMenu_CallbackFunc_TypeInfo, callback);
    sub_1B640C8(&Method_MyRoomHelpListViewManager_WaitFadeOut__, v5);
    byte_49F8000 = 1;
  }
  this->fields.callbackFunc2 = callback;
  sub_1B6406C(&this->fields.callbackFunc2);
  baseDialog = this->fields.baseDialog;
  v9 = (MyRoomHelpMenu_CallbackFunc_o *)sub_1B64314(MyRoomHelpMenu_CallbackFunc_TypeInfo, v7, v8);
  MyRoomHelpMenu_CallbackFunc___ctor(v9, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_WaitFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1B64324(v10);
  MyRoomHelpMenu__Close(baseDialog, v9, 0LL);
}


void __fastcall MyRoomHelpListViewManager__CreateList(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MyRoomHelpMenu_o *baseDialog; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *monitor; // x25
  __int64 v10; // x8
  unsigned __int64 v11; // x26
  int v12; // w20
  System_Collections_Generic_Dictionary_UIPanel__int__c *klass; // x9
  __int64 namespaze; // x8
  Il2CppType *p_byval_arg; // x9
  _DWORD *data; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v19; // x21
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49F7FFF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_1B640C8(&MyRoomHelpListViewItem_TypeInfo, v4);
    sub_1B640C8(&MyRoomHelpListViewManager_TypeInfo, v5);
    byte_49F7FFF = 1;
  }
  this->fields.callbackFunc2 = 0LL;
  sub_1B6406C(&this->fields.callbackFunc2);
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
  v10 = monitor[3];
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B6432C(baseDialog, v7);
      baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
      v12 = *((_DWORD *)monitor + v11 + 8);
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
            if ( data[4] == v12 )
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
        v19 = sub_1B64314(MyRoomHelpListViewItem_TypeInfo, v7, v8);
        ListViewItem___ctor_40370988((ListViewItem_o *)v19, size, 0LL);
        *(_QWORD *)(v19 + 112) = data;
        baseDialog = (MyRoomHelpMenu_o *)sub_1B6406C(v19 + 112);
        *(_BYTE *)(v19 + 120) = 1;
        items = itemList->fields._items;
        v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v22 = itemList->fields._size;
        if ( (unsigned int)v22 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v19,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + v22;
          itemList->fields._size = v22 + 1;
          v23[4] = (Il2CppClass *)v19;
          baseDialog = (MyRoomHelpMenu_o *)sub_1B6406C(v23 + 4);
        }
      }
LABEL_24:
      LODWORD(v10) = *((_DWORD *)monitor + 6);
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_25;
    }
LABEL_27:
    sub_1B64324(baseDialog);
  }
LABEL_25:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall MyRoomHelpListViewManager__DestroyList(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
MyRoomHelpListViewItem_o *__fastcall MyRoomHelpListViewManager__GetItem(
        MyRoomHelpListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  MyRoomHelpListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49F8001 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B640C8(&MyRoomHelpListViewItem_TypeInfo, v5);
    byte_49F8001 = 1;
  }
  result = (MyRoomHelpListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MyRoomHelpListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  MyRoomHelpListViewManager_c *v13; // x8
  System_String_array *monitor; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x21

  if ( (byte_49F7FFD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v4);
    sub_1B640C8(&MyRoomHelpListViewManager_TypeInfo, v5);
    sub_1B640C8(&string___TypeInfo, v6);
    sub_1B640C8(&Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__, v7);
    sub_1B640C8(&MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo, v8);
    byte_49F7FFD = 1;
  }
  v9 = (Il2CppObject *)sub_1B64314(MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo, method, v2);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  v9[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v9[1]);
  if ( this->fields.initMode )
    return;
  v10 = sub_1B64170(string___TypeInfo, 2LL);
  v12 = v10;
  v13 = MyRoomHelpListViewManager_TypeInfo;
  if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    v13 = MyRoomHelpListViewManager_TypeInfo;
  }
  if ( !v12 )
LABEL_13:
    sub_1B64324(v10);
  if ( !*(_DWORD *)(v12 + 24)
    || (*(_QWORD *)(v12 + 32) = v13->static_fields->HELP_BASE_SPRITE_PATH,
        v10 = sub_1B6406C(v12 + 32),
        *(_DWORD *)(v12 + 24) <= 1u) )
  {
    sub_1B6432C(v10, v11);
  }
  *(_QWORD *)(v12 + 40) = MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH;
  sub_1B6406C(v12 + 40);
  v9[1].monitor = (void *)v12;
  sub_1B6406C(&v9[1].monitor);
  this->fields.initMode = 1;
  monitor = (System_String_array *)v9[1].monitor;
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v17, v9, Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37484096(monitor, v17, 1, 0LL);
}


void __fastcall MyRoomHelpListViewManager__OnMoveEnd(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_49F8005 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8005 = 1;
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
        sub_1B64324(gameObject);
      }
    }
  }
}


void __fastcall MyRoomHelpListViewManager__ReleaseBaseSprite(
        MyRoomHelpListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  MyRoomHelpListViewManager_c *v5; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x20
  UnityEngine_GameObject_o *BaseWindow; // x0

  if ( (byte_49F7FFE & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, v3);
    sub_1B640C8(&MyRoomHelpListViewManager_TypeInfo, v4);
    byte_49F7FFE = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v5 = MyRoomHelpListViewManager_TypeInfo;
    if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
      v5 = MyRoomHelpListViewManager_TypeInfo;
    }
    HELP_BASE_SPRITE_PATH = v5->static_fields->HELP_BASE_SPRITE_PATH;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0LL);
    AssetManager__releaseAssetStorage(MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0LL);
    BaseWindow = this->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0LL)) == 0LL
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1B64324(BaseWindow);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F8003 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__, v11);
    sub_1B640C8(&Method_MyRoomHelpListViewManager_OnMoveEnd__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49F8003 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v20);
      MyRoomHelpListViewObject__Init_31385636((MyRoomHelpListViewObject_o *)current, mode, v19, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewManager__RequestListObject_31385720(
        MyRoomHelpListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F8004 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__, v9);
    sub_1B640C8(&Method_MyRoomHelpListViewManager_OnMoveEnd__, v10);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v11);
    byte_49F8004 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v18);
      MyRoomHelpListViewObject__Init_31386224((MyRoomHelpListViewObject_o *)current, mode, v17, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


void __fastcall MyRoomHelpListViewManager__SetObjectItem(
        MyRoomHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49F8002 & 1) == 0 )
  {
    this = (MyRoomHelpListViewManager_o *)sub_1B640C8(&MyRoomHelpListViewObject_TypeInfo, obj);
    byte_49F8002 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MyRoomHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MyRoomHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomHelpListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  MyRoomHelpListViewObject__Init_31385040((MyRoomHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void __fastcall MyRoomHelpListViewManager__WaitFadeOut(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_CallbackFunc2_o *callbackFunc2; // x19

  callbackFunc2 = this->fields.callbackFunc2;
  this->fields.callbackFunc2 = 0LL;
  sub_1B6406C(&this->fields.callbackFunc2);
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

  if ( (byte_49F7FF7 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F7FF7 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F7FF9 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, value);
    byte_49F7FF9 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B645E4(v7);
  MyRoomHelpListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MyRoomHelpListViewObject__o *__fastcall MyRoomHelpListViewManager__get_ClippingObjectList(
        MyRoomHelpListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49F7FFC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F7FFC = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v18 = Component_object;
      if ( !Component_object )
        sub_1B64324(0LL);
      Item = (ListViewItem_o *)MyRoomHelpListViewObject__GetItem((MyRoomHelpListViewObject_o *)Component_object, v17);
      if ( !Item )
        sub_1B64324(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_1B64324(v20);
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(v20);
          size = v12->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v18,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v12 )
          sub_1B64324(Item);
        items = v12->fields._items;
        v22 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B64324(Item);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v24 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v18;
        sub_1B6406C(v24 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MyRoomHelpListViewObject__o *)v12;
}


System_Collections_Generic_List_MyRoomHelpListViewObject__o *__fastcall MyRoomHelpListViewManager__get_ObjectList(
        MyRoomHelpListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49F7FFB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49F7FFB = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64324(v15);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v17 = Component_object;
      if ( !v12 )
        sub_1B64324(Component_object);
      items = v12->fields._items;
      v19 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(Component_object);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1B6406C(v21 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MyRoomHelpListViewObject__o *)v12;
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

  if ( (byte_49F7FF8 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F7FF8 = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F7FFA & 1) == 0 )
  {
    sub_1B640C8(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, value);
    byte_49F7FFA = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B645E4(v7);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A5AF0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A5AB0;
}


System_IAsyncResult_o *__fastcall MyRoomHelpListViewManager_CallbackFunc__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A5B44;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A5B04;
}


System_IAsyncResult_o *__fastcall MyRoomHelpListViewManager_CallbackFunc2__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc2__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.kind = kind;
  this->fields.textCode = textCode;
  sub_1B6406C(&this->fields.textCode);
  this->fields.imageName = imageName;
  sub_1B6406C(&this->fields.imageName);
  this->fields.itemName = itemName;
  sub_1B6406C(&this->fields.itemName);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct MyRoomHelpListViewManager_o *_4__this; // x8
  struct System_String_array *path; // x8
  System_String_o *v11; // x20
  AssetData_o *v12; // x20
  struct System_String_array *v13; // x8
  MyRoomHelpListViewManager___c__DisplayClass25_0_o *v14; // x20
  struct MyRoomHelpListViewManager_o *v15; // x8
  MyRoomHelpListViewManager___c__DisplayClass25_0_o *v16; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Shader_o *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Material_o *v21; // x22
  struct MyRoomHelpListViewManager_o *v22; // x8
  MyRoomHelpListViewManager_c *v23; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x19

  v2 = this;
  if ( (byte_49F8007 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UITexture___, v4);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v5);
    sub_1B640C8(&MyRoomHelpListViewManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v7);
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)sub_1B640C8(&StringLiteral_16198/*"_MaskTex"*/, v8);
    byte_49F8007 = 1;
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
    v11 = path->m_Items[0];
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetManager__getAssetStorage(v11, 0LL);
    v12 = (AssetData_o *)this;
    if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    if ( !v12 )
      goto LABEL_27;
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__48347676(
                                                                  v12,
                                                                  MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_SPRITE_NAME,
                                                                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
    v13 = v2->fields.path;
    if ( !v13 )
      goto LABEL_27;
    if ( v13->max_length <= 1 )
LABEL_28:
      sub_1B6432C(this, method);
    v14 = this;
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetManager__getAssetStorage(v13->m_Items[1], 0LL);
    if ( this )
    {
      this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__48347676(
                                                                    (AssetData_o *)this,
                                                                    MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_NAME,
                                                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
      v15 = v2->fields.__4__this;
      if ( v15 )
      {
        v16 = this;
        this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)v15->fields.BaseWindow;
        if ( this )
        {
          this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0LL);
          if ( this )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UITexture___);
            v18 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
            v21 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v19, v20);
            UnityEngine_Material___ctor(v21, v18, 0LL);
            if ( Component_object )
            {
              this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                                                                            Component_object,
                                                                            v21,
                                                                            Component_object->klass->vtable[26].methodPtr);
              if ( v21 )
              {
                UnityEngine_Material__set_mainTexture(v21, (UnityEngine_Texture_o *)v14, 0LL);
                UnityEngine_Material__SetTexture(
                  v21,
                  (System_String_o *)StringLiteral_16198/*"_MaskTex"*/,
                  (UnityEngine_Texture_o *)v16,
                  0LL);
                v22 = v2->fields.__4__this;
                if ( v22 )
                {
                  v22->fields.initMode = 2;
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1B64324(this);
  }
  v23 = MyRoomHelpListViewManager_TypeInfo;
  if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    v23 = MyRoomHelpListViewManager_TypeInfo;
  }
  HELP_BASE_SPRITE_PATH = v23->static_fields->HELP_BASE_SPRITE_PATH;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0LL);
  AssetManager__releaseAssetStorage(MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0LL);
}