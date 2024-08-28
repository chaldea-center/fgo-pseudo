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
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v36; // x20
  const MethodInfo *v37; // x5
  __int64 v38; // x0
  __int64 v39; // x1
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v40; // x20
  const MethodInfo *v41; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v42; // x20
  const MethodInfo *v43; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v44; // x20
  const MethodInfo *v45; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v46; // x20
  const MethodInfo *v47; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v48; // x20
  const MethodInfo *v49; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v50; // x20
  const MethodInfo *v51; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v52; // x20
  const MethodInfo *v53; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v54; // x20
  const MethodInfo *v55; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v56; // x20
  const MethodInfo *v57; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v58; // x20
  const MethodInfo *v59; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v60; // x20
  const MethodInfo *v61; // x5
  System_Array_o *v62; // x0
  System_Array_o *v63; // x19
  struct MyRoomHelpListViewManager_StaticFields *static_fields; // x0
  struct MyRoomHelpListViewManager_StaticFields *v65; // x0
  struct MyRoomHelpListViewManager_StaticFields *v66; // x0
  struct MyRoomHelpListViewManager_StaticFields *v67; // x0
  struct MyRoomHelpListViewManager_StaticFields *v68; // x0
  __int64 v69; // x0
  System_RuntimeFieldHandle_o v70; // 0:w1.4

  if ( (byte_4A04805 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomHelpListViewManager_ItemKind___TypeInfo, v1);
    sub_1B686D4(&MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo, v2);
    sub_1B686D4(&MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo, v3);
    sub_1B686D4(&MyRoomHelpListViewManager_TypeInfo, v4);
    sub_1B686D4(
      &Field__PrivateImplementationDetails__C23AC2580AD5AD3A854B769CA21B8644DE250D120C76F90562518C86407849BA,
      v5);
    sub_1B686D4(&StringLiteral_8765/*"MYROOM_MENU_NAME_3"*/, v6);
    sub_1B686D4(&StringLiteral_8748/*"MYROOM_HELP_HELP_EXPLANATION"*/, v7);
    sub_1B686D4(&StringLiteral_8746/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/, v8);
    sub_1B686D4(&StringLiteral_14532/*"Tutorial/tutorial_alpha"*/, v9);
    sub_1B686D4(&StringLiteral_8756/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/, v10);
    sub_1B686D4(&StringLiteral_8749/*"MYROOM_HELP_ITEM_EXPLANATION"*/, v11);
    sub_1B686D4(&StringLiteral_8747/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/, v12);
    sub_1B686D4(&StringLiteral_8750/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/, v13);
    sub_1B686D4(&StringLiteral_8759/*"MYROOM_MENU_NAME_1"*/, v14);
    sub_1B686D4(&StringLiteral_8753/*"MYROOM_HELP_OPTION_EXPLANATION"*/, v15);
    sub_1B686D4(&StringLiteral_8754/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/, v16);
    sub_1B686D4(&StringLiteral_8766/*"MYROOM_MENU_NAME_4"*/, v17);
    sub_1B686D4(&StringLiteral_24017/*"tutorial_0006"*/, v18);
    sub_1B686D4(&StringLiteral_8755/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/, v19);
    sub_1B686D4(&StringLiteral_8771/*"MYROOM_MENU_NAME_9"*/, v20);
    sub_1B686D4(&StringLiteral_8761/*"MYROOM_MENU_NAME_11"*/, v21);
    sub_1B686D4(&StringLiteral_8764/*"MYROOM_MENU_NAME_2"*/, v22);
    sub_1B686D4(&StringLiteral_20291/*"img_menuboard_01"*/, v23);
    sub_1B686D4(&StringLiteral_8767/*"MYROOM_MENU_NAME_5"*/, v24);
    sub_1B686D4(&StringLiteral_8770/*"MYROOM_MENU_NAME_8"*/, v25);
    sub_1B686D4(&StringLiteral_8762/*"MYROOM_MENU_NAME_12"*/, v26);
    sub_1B686D4(&StringLiteral_20372/*"img_shop_0"*/, v27);
    sub_1B686D4(&StringLiteral_14531/*"Tutorial/tutorial_0006"*/, v28);
    sub_1B686D4(&StringLiteral_8768/*"MYROOM_MENU_NAME_6"*/, v29);
    sub_1B686D4(&StringLiteral_1/*""*/, v30);
    sub_1B686D4(&StringLiteral_8751/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/, v31);
    sub_1B686D4(&StringLiteral_24018/*"tutorial_alpha"*/, v32);
    sub_1B686D4(&StringLiteral_8752/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/, v33);
    sub_1B686D4(&StringLiteral_8763/*"MYROOM_MENU_NAME_13"*/, v34);
    byte_4A04805 = 1;
  }
  v35 = (struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_array *)sub_1B6877C(
                                                                       MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo,
                                                                       12LL);
  v36 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v36,
    1,
    (System_String_o *)StringLiteral_8751/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8761/*"MYROOM_MENU_NAME_11"*/,
    v37);
  if ( !v35 )
    sub_1B68930(v38, v39);
  if ( v36 )
  {
    v38 = sub_1B68810(v36, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( !v35->max_length )
    goto LABEL_41;
  v35->m_Items[0] = v36;
  sub_1B68678(v35->m_Items);
  v40 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v40,
    2,
    (System_String_o *)StringLiteral_8750/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8762/*"MYROOM_MENU_NAME_12"*/,
    v41);
  if ( v40 )
  {
    v38 = sub_1B68810(v40, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_41;
  v35->m_Items[1] = v40;
  sub_1B68678(&v35->m_Items[1]);
  v42 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v42,
    3,
    (System_String_o *)StringLiteral_8749/*"MYROOM_HELP_ITEM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8759/*"MYROOM_MENU_NAME_1"*/,
    v43);
  if ( v42 )
  {
    v38 = sub_1B68810(v42, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_41;
  v35->m_Items[2] = v42;
  sub_1B68678(&v35->m_Items[2]);
  v44 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v44,
    5,
    (System_String_o *)StringLiteral_8755/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8764/*"MYROOM_MENU_NAME_2"*/,
    v45);
  if ( v44 )
  {
    v38 = sub_1B68810(v44, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 3 )
    goto LABEL_41;
  v35->m_Items[3] = v44;
  sub_1B68678(&v35->m_Items[3]);
  v46 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v46,
    6,
    (System_String_o *)StringLiteral_8752/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8765/*"MYROOM_MENU_NAME_3"*/,
    v47);
  if ( v46 )
  {
    v38 = sub_1B68810(v46, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 4 )
    goto LABEL_41;
  v35->m_Items[4] = v46;
  sub_1B68678(&v35->m_Items[4]);
  v48 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v48,
    7,
    (System_String_o *)StringLiteral_8747/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8766/*"MYROOM_MENU_NAME_4"*/,
    v49);
  if ( v48 )
  {
    v38 = sub_1B68810(v48, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 5 )
    goto LABEL_41;
  v35->m_Items[5] = v48;
  sub_1B68678(&v35->m_Items[5]);
  v50 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v50,
    8,
    (System_String_o *)StringLiteral_8748/*"MYROOM_HELP_HELP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8767/*"MYROOM_MENU_NAME_5"*/,
    v51);
  if ( v50 )
  {
    v38 = sub_1B68810(v50, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 6 )
    goto LABEL_41;
  v35->m_Items[6] = v50;
  sub_1B68678(&v35->m_Items[6]);
  v52 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v52,
    9,
    (System_String_o *)StringLiteral_8753/*"MYROOM_HELP_OPTION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8768/*"MYROOM_MENU_NAME_6"*/,
    v53);
  if ( v52 )
  {
    v38 = sub_1B68810(v52, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 7 )
    goto LABEL_41;
  v35->m_Items[7] = v52;
  sub_1B68678(&v35->m_Items[7]);
  v54 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v54,
    10,
    (System_String_o *)StringLiteral_8756/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8770/*"MYROOM_MENU_NAME_8"*/,
    v55);
  if ( v54 )
  {
    v38 = sub_1B68810(v54, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 8 )
    goto LABEL_41;
  v35->m_Items[8] = v54;
  sub_1B68678(&v35->m_Items[8]);
  v56 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v56,
    11,
    (System_String_o *)StringLiteral_8746/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8763/*"MYROOM_MENU_NAME_13"*/,
    v57);
  if ( v56 )
  {
    v38 = sub_1B68810(v56, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 9 )
    goto LABEL_41;
  v35->m_Items[9] = v56;
  sub_1B68678(&v35->m_Items[9]);
  v58 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v58,
    12,
    (System_String_o *)StringLiteral_8754/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20291/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8771/*"MYROOM_MENU_NAME_9"*/,
    v59);
  if ( v58 )
  {
    v38 = sub_1B68810(v58, v35->obj.klass->_1.element_class);
    if ( !v38 )
      goto LABEL_42;
  }
  if ( v35->max_length <= 0xA )
    goto LABEL_41;
  v35->m_Items[10] = v58;
  sub_1B68678(&v35->m_Items[10]);
  v60 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1B68920(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v60,
    13,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_20372/*"img_shop_0"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v61);
  if ( v60 )
  {
    v38 = sub_1B68810(v60, v35->obj.klass->_1.element_class);
    if ( !v38 )
    {
LABEL_42:
      v69 = sub_1B68954();
      sub_1B687FC(v69, 0LL);
    }
  }
  if ( v35->max_length <= 0xB )
LABEL_41:
    sub_1B68938(v38, v39);
  v35->m_Items[11] = v60;
  sub_1B68678(&v35->m_Items[11]);
  MyRoomHelpListViewManager_TypeInfo->static_fields->itemInfoList = v35;
  sub_1B68678(MyRoomHelpListViewManager_TypeInfo->static_fields);
  v62 = (System_Array_o *)sub_1B6877C(MyRoomHelpListViewManager_ItemKind___TypeInfo, 11LL);
  v70.fields.value = Field__PrivateImplementationDetails__C23AC2580AD5AD3A854B769CA21B8644DE250D120C76F90562518C86407849BA;
  v63 = v62;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61327548(v62, v70, 0LL);
  static_fields = MyRoomHelpListViewManager_TypeInfo->static_fields;
  static_fields->KindList = (struct MyRoomHelpListViewManager_ItemKind_array *)v63;
  sub_1B68678(&static_fields->KindList);
  v65 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v65->HELP_BASE_SPRITE_PATH = (struct System_String_o *)StringLiteral_14531/*"Tutorial/tutorial_0006"*/;
  sub_1B68678(&v65->HELP_BASE_SPRITE_PATH);
  v66 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v66->HELP_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_24017/*"tutorial_0006"*/;
  sub_1B68678(&v66->HELP_BASE_SPRITE_NAME);
  v67 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v67->HELP_BASE_ALPHA_PATH = (struct System_String_o *)StringLiteral_14532/*"Tutorial/tutorial_alpha"*/;
  sub_1B68678(&v67->HELP_BASE_ALPHA_PATH);
  v68 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v68->HELP_BASE_ALPHA_NAME = (struct System_String_o *)StringLiteral_24018/*"tutorial_alpha"*/;
  sub_1B68678(&v68->HELP_BASE_ALPHA_NAME);
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
  sub_1B68678(&this->fields.callbackFunc);
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
  MyRoomHelpMenu_CallbackFunc_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A047FF & 1) == 0 )
  {
    sub_1B686D4(&MyRoomHelpMenu_CallbackFunc_TypeInfo, callback);
    sub_1B686D4(&Method_MyRoomHelpListViewManager_WaitFadeOut__, v5);
    byte_4A047FF = 1;
  }
  this->fields.callbackFunc2 = callback;
  sub_1B68678(&this->fields.callbackFunc2);
  baseDialog = this->fields.baseDialog;
  v7 = (MyRoomHelpMenu_CallbackFunc_o *)sub_1B68920(MyRoomHelpMenu_CallbackFunc_TypeInfo);
  MyRoomHelpMenu_CallbackFunc___ctor(v7, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_WaitFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1B68930(v8, v9);
  MyRoomHelpMenu__Close(baseDialog, v7, 0LL);
}


void __fastcall MyRoomHelpListViewManager__CreateList(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MyRoomHelpMenu_o *baseDialog; // x0
  _QWORD *monitor; // x25
  __int64 v9; // x8
  unsigned __int64 v10; // x26
  int v11; // w20
  System_Collections_Generic_Dictionary_UIPanel__int__c *klass; // x9
  __int64 namespaze; // x8
  Il2CppType *p_byval_arg; // x9
  _DWORD *data; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v18; // x21
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A047FE & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__Add__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_1B686D4(&MyRoomHelpListViewItem_TypeInfo, v4);
    sub_1B686D4(&MyRoomHelpListViewManager_TypeInfo, v5);
    byte_4A047FE = 1;
  }
  this->fields.callbackFunc2 = 0LL;
  sub_1B68678(&this->fields.callbackFunc2);
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
  v9 = monitor[3];
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
        sub_1B68938(baseDialog, v6);
      baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
      v11 = *((_DWORD *)monitor + v10 + 8);
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
            if ( data[4] == v11 )
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
        v18 = sub_1B68920(MyRoomHelpListViewItem_TypeInfo);
        ListViewItem___ctor_40440732((ListViewItem_o *)v18, size, 0LL);
        *(_QWORD *)(v18 + 112) = data;
        baseDialog = (MyRoomHelpMenu_o *)sub_1B68678(v18 + 112);
        *(_BYTE *)(v18 + 120) = 1;
        items = itemList->fields._items;
        v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v21 = itemList->fields._size;
        if ( (unsigned int)v21 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v18,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v21;
          itemList->fields._size = v21 + 1;
          v22[4] = (Il2CppClass *)v18;
          baseDialog = (MyRoomHelpMenu_o *)sub_1B68678(v22 + 4);
        }
      }
LABEL_24:
      LODWORD(v9) = *((_DWORD *)monitor + 6);
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_25;
    }
LABEL_27:
    sub_1B68930(baseDialog, v6);
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

  if ( (byte_4A04800 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B686D4(&MyRoomHelpListViewItem_TypeInfo, v5);
    byte_4A04800 = 1;
  }
  result = (MyRoomHelpListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MyRoomHelpListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  MyRoomHelpListViewManager_c *v12; // x8
  System_String_array *monitor; // x19
  System_Action_o *v14; // x21

  if ( (byte_4A047FC & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&AssetManager_TypeInfo, v3);
    sub_1B686D4(&MyRoomHelpListViewManager_TypeInfo, v4);
    sub_1B686D4(&string___TypeInfo, v5);
    sub_1B686D4(&Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__, v6);
    sub_1B686D4(&MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo, v7);
    byte_4A047FC = 1;
  }
  v8 = (Il2CppObject *)sub_1B68920(MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_13;
  v8[1].klass = (Il2CppClass *)this;
  sub_1B68678(&v8[1]);
  if ( this->fields.initMode )
    return;
  v9 = sub_1B6877C(string___TypeInfo, 2LL);
  v11 = v9;
  v12 = MyRoomHelpListViewManager_TypeInfo;
  if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    v12 = MyRoomHelpListViewManager_TypeInfo;
  }
  if ( !v11 )
LABEL_13:
    sub_1B68930(v9, v10);
  if ( !*(_DWORD *)(v11 + 24)
    || (*(_QWORD *)(v11 + 32) = v12->static_fields->HELP_BASE_SPRITE_PATH,
        v9 = sub_1B68678(v11 + 32),
        *(_DWORD *)(v11 + 24) <= 1u) )
  {
    sub_1B68938(v9, v10);
  }
  *(_QWORD *)(v11 + 40) = MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH;
  sub_1B68678(v11 + 40);
  v8[1].monitor = (void *)v11;
  sub_1B68678(&v8[1].monitor);
  this->fields.initMode = 1;
  monitor = (System_String_array *)v8[1].monitor;
  v14 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v14, v8, Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37546076(monitor, v14, 1, 0LL);
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

  if ( (byte_4A04804 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A04804 = 1;
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
        sub_1B68930(gameObject, v7);
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
  __int64 v7; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0

  if ( (byte_4A047FD & 1) == 0 )
  {
    sub_1B686D4(&AssetManager_TypeInfo, method);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UITexture___, v3);
    sub_1B686D4(&MyRoomHelpListViewManager_TypeInfo, v4);
    byte_4A047FD = 1;
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
                                                     (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1B68930(BaseWindow, v7);
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A04802 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__, v11);
    sub_1B686D4(&Method_MyRoomHelpListViewManager_OnMoveEnd__, v12);
    sub_1B686D4(&StringLiteral_9894/*"OnMoveEnd"*/, v13);
    byte_4A04802 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B68930(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9894/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B68930(v19, v20);
      MyRoomHelpListViewObject__Init_31416224((MyRoomHelpListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewManager__RequestListObject_31416308(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A04803 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__, v9);
    sub_1B686D4(&Method_MyRoomHelpListViewManager_OnMoveEnd__, v10);
    sub_1B686D4(&StringLiteral_9894/*"OnMoveEnd"*/, v11);
    byte_4A04803 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B68930(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9894/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B68930(v17, v18);
      MyRoomHelpListViewObject__Init_31416812((MyRoomHelpListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


void __fastcall MyRoomHelpListViewManager__SetObjectItem(
        MyRoomHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A04801 & 1) == 0 )
  {
    this = (MyRoomHelpListViewManager_o *)sub_1B686D4(&MyRoomHelpListViewObject_TypeInfo, obj);
    byte_4A04801 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MyRoomHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MyRoomHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomHelpListViewObject_TypeInfo )
  {
    sub_1B68930(this, obj);
  }
  MyRoomHelpListViewObject__Init_31415628((MyRoomHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void __fastcall MyRoomHelpListViewManager__WaitFadeOut(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_CallbackFunc2_o *callbackFunc2; // x19

  callbackFunc2 = this->fields.callbackFunc2;
  this->fields.callbackFunc2 = 0LL;
  sub_1B68678(&this->fields.callbackFunc2);
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

  if ( (byte_4A047F6 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A047F6 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B68BF0(v7);
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

  if ( (byte_4A047F8 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, value);
    byte_4A047F8 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B68BF0(v7);
  MyRoomHelpListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_MyRoomHelpListViewObject__o *__fastcall MyRoomHelpListViewManager__get_ClippingObjectList(
        MyRoomHelpListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A047FB & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    byte_4A047FB = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B68930(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B68930(0LL, v18);
      Item = (ListViewItem_o *)MyRoomHelpListViewObject__GetItem((MyRoomHelpListViewObject_o *)Component_object, v18);
      if ( !Item )
        sub_1B68930(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_40459252((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_1B68930(v22, v23);
          items = v11->fields._items;
          v25 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B68930(v22, v23);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B68930(Item, v21);
        items = v11->fields._items;
        v25 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B68930(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v27 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1B68678(v27 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MyRoomHelpListViewObject__o *)v11;
}


System_Collections_Generic_List_MyRoomHelpListViewObject__o *__fastcall MyRoomHelpListViewManager__get_ObjectList(
        MyRoomHelpListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A047FA & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B686D4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__, v8);
    sub_1B686D4(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo, v9);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v10);
    byte_4A047FA = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B68930(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_323A820 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B68930(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1B68930(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B68930(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34BC278 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1B68678(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_323A81C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MyRoomHelpListViewObject__o *)v11;
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

  if ( (byte_4A047F7 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A047F7 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B68BF0(v7);
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

  if ( (byte_4A047F9 & 1) == 0 )
  {
    sub_1B686D4(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, value);
    byte_4A047F9 = 1;
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
    v8 = sub_1BA3BC4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1B68BF0(v7);
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
  sub_1B68678(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AA090;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AA050;
}


System_IAsyncResult_o *__fastcall MyRoomHelpListViewManager_CallbackFunc__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B68688(this, &v5, callback, object);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
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
  sub_1B68678(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AA0E4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AA0A4;
}


System_IAsyncResult_o *__fastcall MyRoomHelpListViewManager_CallbackFunc2__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B68688(this, &v5, callback, object);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc2__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
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
  sub_1B68678(&this->fields.textCode);
  this->fields.imageName = imageName;
  sub_1B68678(&this->fields.imageName);
  this->fields.itemName = itemName;
  sub_1B68678(&this->fields.itemName);
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
  UnityEngine_Material_o *v19; // x22
  struct MyRoomHelpListViewManager_o *v20; // x8
  MyRoomHelpListViewManager_c *v21; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x19

  v2 = this;
  if ( (byte_4A04806 & 1) == 0 )
  {
    sub_1B686D4(&Method_AssetData_GetObject_Texture2D____75755216, method);
    sub_1B686D4(&AssetManager_TypeInfo, v3);
    sub_1B686D4(&Method_UnityEngine_Component_GetComponent_UITexture___, v4);
    sub_1B686D4(&UnityEngine_Material_TypeInfo, v5);
    sub_1B686D4(&MyRoomHelpListViewManager_TypeInfo, v6);
    sub_1B686D4(&StringLiteral_4951/*"Custom/SpriteWithMask"*/, v7);
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)sub_1B686D4(&StringLiteral_16200/*"_MaskTex"*/, v8);
    byte_4A04806 = 1;
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
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__48415484(
                                                                  v12,
                                                                  MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_SPRITE_NAME,
                                                                  (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_Texture2D____75755216);
    v13 = v2->fields.path;
    if ( !v13 )
      goto LABEL_27;
    if ( v13->max_length <= 1 )
LABEL_28:
      sub_1B68938(this, method);
    v14 = this;
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetManager__getAssetStorage(v13->m_Items[1], 0LL);
    if ( this )
    {
      this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__48415484(
                                                                    (AssetData_o *)this,
                                                                    MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_NAME,
                                                                    (const MethodInfo_2E2C2FC *)Method_AssetData_GetObject_Texture2D____75755216);
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
                                 (const MethodInfo_2E407F4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
            v18 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4951/*"Custom/SpriteWithMask"*/, 0LL);
            v19 = (UnityEngine_Material_o *)sub_1B68920(UnityEngine_Material_TypeInfo);
            UnityEngine_Material___ctor(v19, v18, 0LL);
            if ( Component_object )
            {
              this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, Il2CppMethodPointer))Component_object->klass->vtable[25].method)(
                                                                            Component_object,
                                                                            v19,
                                                                            Component_object->klass->vtable[26].methodPtr);
              if ( v19 )
              {
                UnityEngine_Material__set_mainTexture(v19, (UnityEngine_Texture_o *)v14, 0LL);
                UnityEngine_Material__SetTexture(
                  v19,
                  (System_String_o *)StringLiteral_16200/*"_MaskTex"*/,
                  (UnityEngine_Texture_o *)v16,
                  0LL);
                v20 = v2->fields.__4__this;
                if ( v20 )
                {
                  v20->fields.initMode = 2;
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1B68930(this, method);
  }
  v21 = MyRoomHelpListViewManager_TypeInfo;
  if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    v21 = MyRoomHelpListViewManager_TypeInfo;
  }
  HELP_BASE_SPRITE_PATH = v21->static_fields->HELP_BASE_SPRITE_PATH;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0LL);
  AssetManager__releaseAssetStorage(MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0LL);
}