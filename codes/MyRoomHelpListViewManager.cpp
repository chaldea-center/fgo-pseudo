void __fastcall MyRoomHelpListViewManager___cctor(const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_array *v1; // x19
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v6; // x20
  const MethodInfo *v7; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v8; // x20
  const MethodInfo *v9; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v10; // x20
  const MethodInfo *v11; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v12; // x20
  const MethodInfo *v13; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v14; // x20
  const MethodInfo *v15; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v16; // x20
  const MethodInfo *v17; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v18; // x20
  const MethodInfo *v19; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v20; // x20
  const MethodInfo *v21; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v22; // x20
  const MethodInfo *v23; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v24; // x20
  const MethodInfo *v25; // x5
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v26; // x20
  const MethodInfo *v27; // x5
  System_Array_o *v28; // x0
  System_Array_o *v29; // x19
  struct MyRoomHelpListViewManager_StaticFields *static_fields; // x0
  __int64 v31; // x1
  struct MyRoomHelpListViewManager_StaticFields *v32; // x0
  __int64 v33; // x1
  struct MyRoomHelpListViewManager_StaticFields *v34; // x0
  __int64 v35; // x1
  struct MyRoomHelpListViewManager_StaticFields *v36; // x0
  __int64 v37; // x1
  struct MyRoomHelpListViewManager_StaticFields *v38; // x0
  __int64 v39; // x0
  System_RuntimeFieldHandle_o v40; // 0:w1.4

  if ( (byte_4BD7F56 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomHelpListViewManager_ItemKind___TypeInfo);
    sub_1C21E38(&MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo);
    sub_1C21E38(&MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
    sub_1C21E38(&MyRoomHelpListViewManager_TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__C23AC2580AD5AD3A854B769CA21B8644DE250D120C76F90562518C86407849BA);
    sub_1C21E38(&StringLiteral_8993/*"MYROOM_MENU_NAME_3"*/);
    sub_1C21E38(&StringLiteral_8974/*"MYROOM_HELP_HELP_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_8972/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_14858/*"Tutorial/tutorial_alpha"*/);
    sub_1C21E38(&StringLiteral_8982/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_8975/*"MYROOM_HELP_ITEM_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_8973/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_8976/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_8986/*"MYROOM_MENU_NAME_1"*/);
    sub_1C21E38(&StringLiteral_8979/*"MYROOM_HELP_OPTION_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_8980/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_8994/*"MYROOM_MENU_NAME_4"*/);
    sub_1C21E38(&StringLiteral_24534/*"tutorial_0006"*/);
    sub_1C21E38(&StringLiteral_8981/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_8999/*"MYROOM_MENU_NAME_9"*/);
    sub_1C21E38(&StringLiteral_8988/*"MYROOM_MENU_NAME_11"*/);
    sub_1C21E38(&StringLiteral_8992/*"MYROOM_MENU_NAME_2"*/);
    sub_1C21E38(&StringLiteral_20726/*"img_menuboard_01"*/);
    sub_1C21E38(&StringLiteral_8995/*"MYROOM_MENU_NAME_5"*/);
    sub_1C21E38(&StringLiteral_8998/*"MYROOM_MENU_NAME_8"*/);
    sub_1C21E38(&StringLiteral_8989/*"MYROOM_MENU_NAME_12"*/);
    sub_1C21E38(&StringLiteral_20811/*"img_shop_0"*/);
    sub_1C21E38(&StringLiteral_14857/*"Tutorial/tutorial_0006"*/);
    sub_1C21E38(&StringLiteral_8996/*"MYROOM_MENU_NAME_6"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_8977/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_24535/*"tutorial_alpha"*/);
    sub_1C21E38(&StringLiteral_8978/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/);
    sub_1C21E38(&StringLiteral_8990/*"MYROOM_MENU_NAME_13"*/);
    byte_4BD7F56 = 1;
  }
  v1 = (struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_array *)sub_1C21EE0(
                                                                      MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo,
                                                                      12LL);
  v2 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v2,
    1,
    (System_String_o *)StringLiteral_8977/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8988/*"MYROOM_MENU_NAME_11"*/,
    v3);
  if ( !v1 )
    sub_1C22094(v4, v5);
  if ( v2 )
  {
    v4 = sub_1C21F74(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( !v1->max_length )
    goto LABEL_41;
  v1->m_Items[0] = v2;
  sub_1C21DDC(v1->m_Items, v2);
  v6 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v6,
    2,
    (System_String_o *)StringLiteral_8976/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8989/*"MYROOM_MENU_NAME_12"*/,
    v7);
  if ( v6 )
  {
    v4 = sub_1C21F74(v6, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 1 )
    goto LABEL_41;
  v1->m_Items[1] = v6;
  sub_1C21DDC(&v1->m_Items[1], v6);
  v8 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v8,
    3,
    (System_String_o *)StringLiteral_8975/*"MYROOM_HELP_ITEM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8986/*"MYROOM_MENU_NAME_1"*/,
    v9);
  if ( v8 )
  {
    v4 = sub_1C21F74(v8, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 2 )
    goto LABEL_41;
  v1->m_Items[2] = v8;
  sub_1C21DDC(&v1->m_Items[2], v8);
  v10 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v10,
    5,
    (System_String_o *)StringLiteral_8981/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8992/*"MYROOM_MENU_NAME_2"*/,
    v11);
  if ( v10 )
  {
    v4 = sub_1C21F74(v10, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 3 )
    goto LABEL_41;
  v1->m_Items[3] = v10;
  sub_1C21DDC(&v1->m_Items[3], v10);
  v12 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v12,
    6,
    (System_String_o *)StringLiteral_8978/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8993/*"MYROOM_MENU_NAME_3"*/,
    v13);
  if ( v12 )
  {
    v4 = sub_1C21F74(v12, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 4 )
    goto LABEL_41;
  v1->m_Items[4] = v12;
  sub_1C21DDC(&v1->m_Items[4], v12);
  v14 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v14,
    7,
    (System_String_o *)StringLiteral_8973/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8994/*"MYROOM_MENU_NAME_4"*/,
    v15);
  if ( v14 )
  {
    v4 = sub_1C21F74(v14, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 5 )
    goto LABEL_41;
  v1->m_Items[5] = v14;
  sub_1C21DDC(&v1->m_Items[5], v14);
  v16 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v16,
    8,
    (System_String_o *)StringLiteral_8974/*"MYROOM_HELP_HELP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8995/*"MYROOM_MENU_NAME_5"*/,
    v17);
  if ( v16 )
  {
    v4 = sub_1C21F74(v16, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 6 )
    goto LABEL_41;
  v1->m_Items[6] = v16;
  sub_1C21DDC(&v1->m_Items[6], v16);
  v18 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v18,
    9,
    (System_String_o *)StringLiteral_8979/*"MYROOM_HELP_OPTION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8996/*"MYROOM_MENU_NAME_6"*/,
    v19);
  if ( v18 )
  {
    v4 = sub_1C21F74(v18, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 7 )
    goto LABEL_41;
  v1->m_Items[7] = v18;
  sub_1C21DDC(&v1->m_Items[7], v18);
  v20 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v20,
    10,
    (System_String_o *)StringLiteral_8982/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8998/*"MYROOM_MENU_NAME_8"*/,
    v21);
  if ( v20 )
  {
    v4 = sub_1C21F74(v20, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 8 )
    goto LABEL_41;
  v1->m_Items[8] = v20;
  sub_1C21DDC(&v1->m_Items[8], v20);
  v22 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v22,
    11,
    (System_String_o *)StringLiteral_8972/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8990/*"MYROOM_MENU_NAME_13"*/,
    v23);
  if ( v22 )
  {
    v4 = sub_1C21F74(v22, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 9 )
    goto LABEL_41;
  v1->m_Items[9] = v22;
  sub_1C21DDC(&v1->m_Items[9], v22);
  v24 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v24,
    12,
    (System_String_o *)StringLiteral_8980/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_20726/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_8999/*"MYROOM_MENU_NAME_9"*/,
    v25);
  if ( v24 )
  {
    v4 = sub_1C21F74(v24, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_42;
  }
  if ( v1->max_length <= 0xA )
    goto LABEL_41;
  v1->m_Items[10] = v24;
  sub_1C21DDC(&v1->m_Items[10], v24);
  v26 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_1C22084(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v26,
    13,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_20811/*"img_shop_0"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v27);
  if ( v26 )
  {
    v4 = sub_1C21F74(v26, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_42:
      v39 = sub_1C220B8();
      sub_1C21F60(v39, 0LL);
    }
  }
  if ( v1->max_length <= 0xB )
LABEL_41:
    sub_1C2209C(v4, v5);
  v1->m_Items[11] = v26;
  sub_1C21DDC(&v1->m_Items[11], v26);
  MyRoomHelpListViewManager_TypeInfo->static_fields->itemInfoList = v1;
  sub_1C21DDC(MyRoomHelpListViewManager_TypeInfo->static_fields, v1);
  v28 = (System_Array_o *)sub_1C21EE0(MyRoomHelpListViewManager_ItemKind___TypeInfo, 11LL);
  v40.fields.value = Field__PrivateImplementationDetails__C23AC2580AD5AD3A854B769CA21B8644DE250D120C76F90562518C86407849BA;
  v29 = v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v28, v40, 0LL);
  static_fields = MyRoomHelpListViewManager_TypeInfo->static_fields;
  static_fields->KindList = (struct MyRoomHelpListViewManager_ItemKind_array *)v29;
  sub_1C21DDC(&static_fields->KindList, v29);
  v31 = StringLiteral_14857/*"Tutorial/tutorial_0006"*/;
  v32 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v32->HELP_BASE_SPRITE_PATH = (struct System_String_o *)StringLiteral_14857/*"Tutorial/tutorial_0006"*/;
  sub_1C21DDC(&v32->HELP_BASE_SPRITE_PATH, v31);
  v33 = StringLiteral_24534/*"tutorial_0006"*/;
  v34 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v34->HELP_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_24534/*"tutorial_0006"*/;
  sub_1C21DDC(&v34->HELP_BASE_SPRITE_NAME, v33);
  v35 = StringLiteral_14858/*"Tutorial/tutorial_alpha"*/;
  v36 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v36->HELP_BASE_ALPHA_PATH = (struct System_String_o *)StringLiteral_14858/*"Tutorial/tutorial_alpha"*/;
  sub_1C21DDC(&v36->HELP_BASE_ALPHA_PATH, v35);
  v37 = StringLiteral_24535/*"tutorial_alpha"*/;
  v38 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v38->HELP_BASE_ALPHA_NAME = (struct System_String_o *)StringLiteral_24535/*"tutorial_alpha"*/;
  sub_1C21DDC(&v38->HELP_BASE_ALPHA_NAME, v37);
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
  sub_1C21DDC(&this->fields.callbackFunc, 0LL);
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
  MyRoomHelpMenu_o *baseDialog; // x20
  MyRoomHelpMenu_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BD7F50 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomHelpMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_MyRoomHelpListViewManager_WaitFadeOut__);
    byte_4BD7F50 = 1;
  }
  this->fields.callbackFunc2 = callback;
  sub_1C21DDC(&this->fields.callbackFunc2, callback);
  baseDialog = this->fields.baseDialog;
  v6 = (MyRoomHelpMenu_CallbackFunc_o *)sub_1C22084(MyRoomHelpMenu_CallbackFunc_TypeInfo);
  MyRoomHelpMenu_CallbackFunc___ctor(v6, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_WaitFadeOut__, 0LL);
  if ( !baseDialog )
    sub_1C22094(v7, v8);
  MyRoomHelpMenu__Close(baseDialog, v6, 0LL);
}


void __fastcall MyRoomHelpListViewManager__CreateList(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpMenu_o *baseDialog; // x0
  _QWORD *monitor; // x25
  __int64 v6; // x8
  unsigned __int64 v7; // x26
  int v8; // w20
  System_Collections_Generic_Dictionary_UIPanel__int__c *klass; // x9
  __int64 namespaze; // x8
  Il2CppType *p_byval_arg; // x9
  _DWORD *data; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v15; // x21
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4BD7F4F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C21E38(&MyRoomHelpListViewItem_TypeInfo);
    sub_1C21E38(&MyRoomHelpListViewManager_TypeInfo);
    byte_4BD7F4F = 1;
  }
  this->fields.callbackFunc2 = 0LL;
  sub_1C21DDC(&this->fields.callbackFunc2, 0LL);
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
  v6 = monitor[3];
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v6 )
        sub_1C2209C(baseDialog, v3);
      baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
      v8 = *((_DWORD *)monitor + v7 + 8);
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
            if ( data[4] == v8 )
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
        v15 = sub_1C22084(MyRoomHelpListViewItem_TypeInfo);
        ListViewItem___ctor_41996612((ListViewItem_o *)v15, size, 0LL);
        *(_QWORD *)(v15 + 112) = data;
        baseDialog = (MyRoomHelpMenu_o *)sub_1C21DDC(v15 + 112, data);
        *(_BYTE *)(v15 + 120) = 1;
        items = itemList->fields._items;
        v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v18 = itemList->fields._size;
        if ( (unsigned int)v18 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v15,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v18;
          itemList->fields._size = v18 + 1;
          v19[4] = (Il2CppClass *)v15;
          baseDialog = (MyRoomHelpMenu_o *)sub_1C21DDC(v19 + 4, v15);
        }
      }
LABEL_24:
      LODWORD(v6) = *((_DWORD *)monitor + 6);
      if ( (__int64)++v7 >= (int)v6 )
        goto LABEL_25;
    }
LABEL_27:
    sub_1C22094(baseDialog, v3);
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

  if ( (byte_4BD7F51 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C21E38(&MyRoomHelpListViewItem_TypeInfo);
    byte_4BD7F51 = 1;
  }
  result = (MyRoomHelpListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MyRoomHelpListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  Il2CppObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x21
  MyRoomHelpListViewManager_c *v7; // x8
  struct System_String_o *HELP_BASE_SPRITE_PATH; // x1
  struct System_String_o *HELP_BASE_ALPHA_PATH; // x1
  System_String_array *monitor; // x19
  System_Action_o *v11; // x21

  if ( (byte_4BD7F4D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&MyRoomHelpListViewManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__);
    sub_1C21E38(&MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo);
    byte_4BD7F4D = 1;
  }
  v3 = (Il2CppObject *)sub_1C22084(MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_13;
  v3[1].klass = (Il2CppClass *)this;
  sub_1C21DDC(&v3[1], this);
  if ( this->fields.initMode )
    return;
  v4 = sub_1C21EE0(string___TypeInfo, 2LL);
  v6 = v4;
  v7 = MyRoomHelpListViewManager_TypeInfo;
  if ( !MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo);
    v7 = MyRoomHelpListViewManager_TypeInfo;
  }
  if ( !v6 )
LABEL_13:
    sub_1C22094(v4, v5);
  if ( !*(_DWORD *)(v6 + 24)
    || (HELP_BASE_SPRITE_PATH = v7->static_fields->HELP_BASE_SPRITE_PATH,
        *(_QWORD *)(v6 + 32) = HELP_BASE_SPRITE_PATH,
        v4 = sub_1C21DDC(v6 + 32, HELP_BASE_SPRITE_PATH),
        *(_DWORD *)(v6 + 24) <= 1u) )
  {
    sub_1C2209C(v4, v5);
  }
  HELP_BASE_ALPHA_PATH = MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH;
  *(_QWORD *)(v6 + 40) = HELP_BASE_ALPHA_PATH;
  sub_1C21DDC(v6 + 40, HELP_BASE_ALPHA_PATH);
  v3[1].monitor = (void *)v6;
  sub_1C21DDC(&v3[1].monitor, v6);
  this->fields.initMode = 1;
  monitor = (System_String_array *)v3[1].monitor;
  v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v11, v3, Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39041504(monitor, v11, 1, 0LL);
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

  if ( (byte_4BD7F55 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F55 = 1;
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
        sub_1C22094(gameObject, v7);
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

  if ( (byte_4BD7F4E & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C21E38(&MyRoomHelpListViewManager_TypeInfo);
    byte_4BD7F4E = 1;
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
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0LL )
    {
      sub_1C22094(BaseWindow, v5);
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

  if ( (byte_4BD7F53 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__);
    sub_1C21E38(&Method_MyRoomHelpListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD7F53 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C22094(v12, v13);
      MyRoomHelpListViewObject__Init_32728752((MyRoomHelpListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewManager__RequestListObject_32728836(
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

  if ( (byte_4BD7F54 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__);
    sub_1C21E38(&Method_MyRoomHelpListViewManager_OnMoveEnd__);
    sub_1C21E38(&StringLiteral_10133/*"OnMoveEnd"*/);
    byte_4BD7F54 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C22094(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10133/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C22094(v10, v11);
      MyRoomHelpListViewObject__Init_32729340((MyRoomHelpListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


void __fastcall MyRoomHelpListViewManager__SetObjectItem(
        MyRoomHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4BD7F52 & 1) == 0 )
  {
    this = (MyRoomHelpListViewManager_o *)sub_1C21E38(&MyRoomHelpListViewObject_TypeInfo);
    byte_4BD7F52 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(MyRoomHelpListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (MyRoomHelpListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != MyRoomHelpListViewObject_TypeInfo )
  {
    sub_1C22094(this, obj);
  }
  MyRoomHelpListViewObject__Init_32728156((MyRoomHelpListViewObject_o *)obj, 2, (const MethodInfo *)item);
}


void __fastcall MyRoomHelpListViewManager__WaitFadeOut(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_CallbackFunc2_o *callbackFunc2; // x19

  callbackFunc2 = this->fields.callbackFunc2;
  this->fields.callbackFunc2 = 0LL;
  sub_1C21DDC(&this->fields.callbackFunc2, 0LL);
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

  if ( (byte_4BD7F47 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo);
    byte_4BD7F47 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1C22354(v7);
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

  if ( (byte_4BD7F49 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
    byte_4BD7F49 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1C22354(v7);
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
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BD7F4C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F4C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C22094(0LL, v10);
      Item = (ListViewItem_o *)MyRoomHelpListViewObject__GetItem((MyRoomHelpListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C22094(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_42012552((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C22094(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C22094(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C22094(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C22094(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C21DDC(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BD7F4B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7F4B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C22094(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1C22094(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C22094(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C21DDC(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4BD7F48 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo);
    byte_4BD7F48 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1C22354(v7);
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

  if ( (byte_4BD7F4A & 1) == 0 )
  {
    sub_1C21E38(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
    byte_4BD7F4A = 1;
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
    v8 = sub_1C5D328(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MyRoomHelpListViewManager_o *)sub_1C22354(v7);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5CC84;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5CC44;
}


System_IAsyncResult_o *__fastcall MyRoomHelpListViewManager_CallbackFunc__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v5, callback, object);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5CCD8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5CC98;
}


System_IAsyncResult_o *__fastcall MyRoomHelpListViewManager_CallbackFunc2__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v5, callback, object);
}


void __fastcall MyRoomHelpListViewManager_CallbackFunc2__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  sub_1C21DDC(&this->fields.textCode, textCode);
  this->fields.imageName = imageName;
  sub_1C21DDC(&this->fields.imageName, imageName);
  this->fields.itemName = itemName;
  sub_1C21DDC(&this->fields.itemName, itemName);
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
  if ( (byte_4BD7F57 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&MyRoomHelpListViewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5081/*"Custom/SpriteWithMask"*/);
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)sub_1C21E38(&StringLiteral_16545/*"_MaskTex"*/);
    byte_4BD7F57 = 1;
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
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__49880776(
                                                                  v6,
                                                                  MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_SPRITE_NAME,
                                                                  (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
    v7 = v2->fields.path;
    if ( !v7 )
      goto LABEL_27;
    if ( v7->max_length <= 1 )
LABEL_28:
      sub_1C2209C(this, method);
    v8 = this;
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetManager__getAssetStorage(v7->m_Items[1], 0LL);
    if ( this )
    {
      this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__49880776(
                                                                    (AssetData_o *)this,
                                                                    MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_NAME,
                                                                    (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
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
                                 (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
            v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5081/*"Custom/SpriteWithMask"*/, 0LL);
            v13 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
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
                  (System_String_o *)StringLiteral_16545/*"_MaskTex"*/,
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
    sub_1C22094(this, method);
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