void __fastcall PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
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
  ListViewSort_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_4186B72 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&ListViewSort_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_List_UISprite__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo, v11);
    byte_4186B72 = 1;
  }
  v12 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor(v12, 3, 0, 0LL);
  this->fields.presentBoxSortInfo = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.presentBoxSortInfo,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v19,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v19 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    0,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    9,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    10,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    11,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    12,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    14,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    13,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKindList,
    (System_Int32_array **)v19,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v28,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v28 )
LABEL_9:
    sub_B2C434(v20, v21);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v28,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v28,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v28,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v28,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v28,
    0,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v28;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rarityFilterKindList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.filterBtnSpriteList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__Callback(
        PresentBoxFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PresentBoxFilterSelectMenu_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PresentBoxFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_23526712(this, 0LL, v2);
}


void __fastcall PresentBoxFilterSelectMenu__Close_23526712(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4186B67 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PresentBoxFilterSelectMenu_EndClose__, v10);
    byte_4186B67 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__EndClose(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall PresentBoxFilterSelectMenu__EndOpen(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PresentBoxFilterSelectMenu__Init(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__InitDisp(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *categoryGrid; // x0
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  __int64 size; // x24
  __int64 v23; // x25
  __int64 v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UnityEngine_GameObject_o *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v32; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UISprite__o *filterBtnSpriteList; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v35; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x22
  EventDelegate_Callback_o *v37; // x23
  EventDelegate_o *v38; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v39; // x22
  UILabel_o *v40; // x20
  __int64 v41; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  __int64 v43; // x24
  __int64 v44; // x25
  __int64 v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct UnityEngine_GameObject_o *templateRarityButton; // x21
  UnityEngine_GameObject_o *v53; // x21
  UnityEngine_GameObject_o *v54; // x0
  struct System_Collections_Generic_List_UISprite__o *v55; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v56; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x22
  EventDelegate_Callback_o *v58; // x23
  EventDelegate_o *v59; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v60; // x22
  UILabel_o *v61; // x20
  __int64 v62; // x8

  if ( (byte_4186B68 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UILabel___, v3);
    sub_B2C35C(&EventDelegate_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__, v16);
    sub_B2C35C(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v17);
    sub_B2C35C(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__, v18);
    sub_B2C35C(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v19);
    byte_4186B68 = 1;
  }
  categoryGrid = this->fields.categoryGrid;
  if ( !categoryGrid )
    goto LABEL_57;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(categoryGrid, 0LL);
  if ( !categoryGrid )
    goto LABEL_57;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)categoryGrid,
                                               0LL);
  if ( !(_DWORD)categoryGrid )
  {
    categoryFilterKindList = this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_57;
    size = categoryFilterKindList->fields._size;
    if ( (int)size >= 1 )
    {
      v23 = 8LL;
      while ( 1 )
      {
        v24 = sub_B2C42C(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
        PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *)v24,
          0LL);
        if ( !v24 )
          break;
        *(_QWORD *)(v24 + 24) = this;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v24 + 24),
          (System_Int32_array **)this,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        templateCategoryButton = this->fields.templateCategoryButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)templateCategoryButton,
                                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v32 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_31331952(gameObject, this->fields.categoryGrid, 0LL);
        UnityEngine_GameObject__SetActive(v32, 1, 0LL);
        filterBtnSpriteList = this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v32,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)filterBtnSpriteList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)categoryGrid,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v35 = this->fields.categoryFilterKindList;
        if ( !v35 )
          break;
        if ( v23 - 8 >= (unsigned __int64)(unsigned int)v35->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        *(_DWORD *)(v24 + 16) = *((_DWORD *)&v35->fields._items->obj.klass + v23);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v32,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)categoryGrid[4].klass;
        v37 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v37,
          (Il2CppObject *)v24,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0LL);
        v38 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
        EventDelegate___ctor_29723424(v38, v37, 0LL);
        if ( !klass )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v32, 0, 0LL);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v39 = this->fields.categoryFilterKindList;
        if ( !v39 )
          break;
        v40 = (UILabel_o *)categoryGrid;
        if ( v23 - 8 >= (unsigned __int64)(unsigned int)v39->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     this->fields.operationSortInfo,
                                                     *((_DWORD *)&v39->fields._items->obj.klass + v23),
                                                     0LL);
        if ( !v40 )
          break;
        UILabel__set_text(v40, (System_String_o *)categoryGrid, 0LL);
        v41 = v23 - 7;
        ++v23;
        if ( v41 >= size )
          goto LABEL_27;
      }
LABEL_57:
      sub_B2C434(categoryGrid, method);
    }
LABEL_27:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_57;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 categoryGrid,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    if ( !categoryGrid )
      goto LABEL_57;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))categoryGrid->klass[1]._1.castClass)(
      categoryGrid,
      categoryGrid->klass[1]._1.declaringType);
  }
  categoryGrid = this->fields.rarityGrid;
  if ( !categoryGrid )
    goto LABEL_57;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(categoryGrid, 0LL);
  if ( !categoryGrid )
    goto LABEL_57;
  categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_childCount(
                                               (UnityEngine_Transform_o *)categoryGrid,
                                               0LL);
  if ( !(_DWORD)categoryGrid )
  {
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_57;
    v43 = rarityFilterKindList->fields._size;
    if ( (int)v43 >= 1 )
    {
      v44 = 8LL;
      do
      {
        v45 = sub_B2C42C(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
        PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *)v45,
          0LL);
        if ( !v45 )
          goto LABEL_57;
        *(_QWORD *)(v45 + 24) = this;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v45 + 24),
          (System_Int32_array **)this,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        templateRarityButton = this->fields.templateRarityButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)templateRarityButton,
                                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_57;
        v53 = categoryGrid;
        v54 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_31331952(v54, this->fields.rarityGrid, 0LL);
        UnityEngine_GameObject__SetActive(v53, 1, 0LL);
        v55 = this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v53,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v55 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v55,
          (EventMissionProgressRequest_Argument_ProgressData_o *)categoryGrid,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v56 = this->fields.rarityFilterKindList;
        if ( !v56 )
          goto LABEL_57;
        if ( v44 - 8 >= (unsigned __int64)(unsigned int)v56->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        *(_DWORD *)(v45 + 16) = *((_DWORD *)&v56->fields._items->obj.klass + v44);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v53,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_57;
        v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)categoryGrid[4].klass;
        v58 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v58,
          (Il2CppObject *)v45,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0LL);
        v59 = (EventDelegate_o *)sub_B2C42C(EventDelegate_TypeInfo);
        EventDelegate___ctor_29723424(v59, v58, 0LL);
        if ( !v57 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v57,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v53, 0, 0LL);
        if ( !categoryGrid )
          goto LABEL_57;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v60 = this->fields.rarityFilterKindList;
        if ( !v60 )
          goto LABEL_57;
        v61 = (UILabel_o *)categoryGrid;
        if ( v44 - 8 >= (unsigned __int64)(unsigned int)v60->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !this->fields.operationSortInfo )
          goto LABEL_57;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     this->fields.operationSortInfo,
                                                     *((_DWORD *)&v60->fields._items->obj.klass + v44),
                                                     0LL);
        if ( !v61 )
          goto LABEL_57;
        UILabel__set_text(v61, (System_String_o *)categoryGrid, 0LL);
        v62 = v44 - 7;
        ++v44;
      }
      while ( v62 < v43 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_57;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 categoryGrid,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    if ( !categoryGrid )
      goto LABEL_57;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))categoryGrid->klass[1]._1.castClass)(
      categoryGrid,
      categoryGrid->klass[1]._1.declaringType);
  }
}


bool __fastcall PresentBoxFilterSelectMenu__IsChangedStatus(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Boolean_array *v4; // x0
  __int64 v5; // x1
  struct System_Boolean_array *kindStatus; // x11
  __int64 v7; // x9
  unsigned __int64 v8; // x8
  bool *v9; // x11
  __int64 v11; // x0

  v4 = PresentBoxFilterSelectMenu__SetKindStatus(this, this->fields.operationSortInfo, v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
LABEL_10:
    sub_B2C434(v4, v5);
  v7 = *(_QWORD *)&kindStatus->max_length;
  if ( (int)v7 < 1 )
    return 0;
  v8 = 0LL;
  v9 = &kindStatus->m_Items[4];
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_10;
    if ( v8 >= v4->max_length )
    {
      v11 = sub_B2C460(v4);
      sub_B2C400(v11, 0LL);
    }
    if ( !v9[v8] == v4->m_Items[v8 + 4] )
      return 1;
    if ( (__int64)++v8 >= (int)v7 )
      return 0;
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickAllSelect(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x23
  signed __int64 size; // x21
  unsigned __int64 v11; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x23
  signed __int64 v13; // x21
  unsigned __int64 v14; // x22

  if ( (byte_4186B6C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4186B6C = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    categoryFilterKindList = this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_25;
    size = categoryFilterKindList->fields._size;
    if ( (int)size >= 1 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= (unsigned int)categoryFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_33937004(
          this->fields.operationSortInfo,
          categoryFilterKindList->fields._items->m_Items[++v11],
          1,
          0LL);
        if ( (__int64)v11 >= size )
          goto LABEL_17;
        categoryFilterKindList = this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_25:
      sub_B2C434(v7, v8);
    }
LABEL_17:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_25;
    v13 = rarityFilterKindList->fields._size;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( v14 >= (unsigned int)rarityFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_33937068(
          this->fields.operationSortInfo,
          rarityFilterKindList->fields._items->m_Items[++v14],
          1,
          0LL);
        if ( (__int64)v14 >= v13 )
          goto LABEL_26;
        rarityFilterKindList = this->fields.rarityFilterKindList;
      }
      while ( rarityFilterKindList );
      goto LABEL_25;
    }
LABEL_26:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v8);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickCancel(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4186B6B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186B6B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    PresentBoxFilterSelectMenu__Callback(this, 0, v3);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickDecide(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v2; // x19
  struct UIScrollView_o *filterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  const MethodInfo *v7; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4186B6A & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186B6A = 1;
  }
  if ( v2->fields.state == 2 )
  {
    filterScrollView = v2->fields.filterScrollView;
    if ( !filterScrollView )
      goto LABEL_13;
    this = *(PresentBoxFilterSelectMenu_o **)&filterScrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    PresentBoxFilterSelectMenu__SetButtonEnable(v2, 0, v5);
    v2->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (PresentBoxFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_B2C434(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    IsChangedStatus = PresentBoxFilterSelectMenu__IsChangedStatus(v2, v7);
    PresentBoxFilterSelectMenu__Callback(v2, IsChangedStatus, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu__OnClickFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4186B6E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_4186B6E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(0LL, v5);
    ListViewSort__SwitchFilter_33938112(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickInitialize(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x23
  signed __int64 size; // x21
  unsigned __int64 v11; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x23
  signed __int64 v13; // x21
  unsigned __int64 v14; // x22

  if ( (byte_4186B6D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4186B6D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    categoryFilterKindList = this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_25;
    size = categoryFilterKindList->fields._size;
    if ( (int)size >= 1 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= (unsigned int)categoryFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_33937004(
          this->fields.operationSortInfo,
          categoryFilterKindList->fields._items->m_Items[++v11],
          0,
          0LL);
        if ( (__int64)v11 >= size )
          goto LABEL_17;
        categoryFilterKindList = this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_25:
      sub_B2C434(v7, v8);
    }
LABEL_17:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_25;
    v13 = rarityFilterKindList->fields._size;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      do
      {
        if ( v14 >= (unsigned int)rarityFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_33937068(
          this->fields.operationSortInfo,
          rarityFilterKindList->fields._items->m_Items[++v14],
          0,
          0LL);
        if ( (__int64)v14 >= v13 )
          goto LABEL_26;
        rarityFilterKindList = this->fields.rarityFilterKindList;
      }
      while ( rarityFilterKindList );
      goto LABEL_25;
    }
LABEL_26:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu__OnClickRarityFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4186B6F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_4186B6F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(0LL, v5);
    ListViewSort__SwitchFilter_33938180(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4186B71 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    byte_4186B71 = 1;
  }
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_B2C434(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__Open(
        PresentBoxFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        PresentBoxFilterSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v6; // x19
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
  struct ListViewSort_o *presentBoxSortInfo; // x8
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  const MethodInfo *v32; // x2
  System_Int32_array **v33; // x1
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *categoryFilterTitle; // x21
  UILabel_o *rarityFilterTitle; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x2
  struct UIScrollView_o *filterScrollView; // x9
  System_Action_o *v61; // x20

  v6 = this;
  if ( (byte_4186B66 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, sort);
    sub_B2C35C(&ListViewSort_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_PresentBoxFilterSelectMenu_EndOpen__, v9);
    sub_B2C35C(&StringLiteral_11940/*"SERVANT_SORT_RESET"*/, v10);
    sub_B2C35C(&StringLiteral_10489/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/, v11);
    sub_B2C35C(&StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, v12);
    sub_B2C35C(&StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, v13);
    sub_B2C35C(&StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, v14);
    sub_B2C35C(&StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, v15);
    sub_B2C35C(&StringLiteral_10467/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v16);
    this = (PresentBoxFilterSelectMenu_o *)sub_B2C35C(&StringLiteral_10488/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, v17);
    byte_4186B66 = 1;
  }
  if ( !v6->fields.state )
  {
    presentBoxSortInfo = v6->fields.presentBoxSortInfo;
    if ( presentBoxSortInfo )
    {
      presentBoxSortInfo->fields.listViewKind = 4;
      this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v6->fields.callbackFunc = callback;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
          (System_Int32_array **)callback,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        if ( sort )
        {
          p_baseSortInfo = &v6->fields.baseSortInfo;
          v6->fields.baseSortInfo = sort;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v6->fields.baseSortInfo,
            (System_Int32_array **)sort,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
        }
        else
        {
          v33 = (System_Int32_array **)v6->fields.presentBoxSortInfo;
          p_baseSortInfo = &v6->fields.baseSortInfo;
          v6->fields.baseSortInfo = (struct ListViewSort_o *)v33;
          sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.baseSortInfo, v33, v25, v26, v27, v28, v29, v30);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_26;
          ListViewSort__Load((ListViewSort_o *)this, 0LL);
        }
        v34 = (System_Int32_array **)PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v32);
        v6->fields.kindStatus = (struct System_Boolean_array *)v34;
        sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.kindStatus, v34, v35, v36, v37, v38, v39, v40);
        baseSortInfo = v6->fields.baseSortInfo;
        v42 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
        ListViewSort___ctor_33914748(v42, baseSortInfo, 0LL);
        v6->fields.operationSortInfo = v42;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v6->fields.operationSortInfo,
          (System_Int32_array **)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        this = (PresentBoxFilterSelectMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          titleLabel = v6->fields.titleLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10467/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10488/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/,
                                                       0LL);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0LL);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10489/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0LL);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0LL);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0LL);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/,
                                                             0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0LL);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/,
                                                               0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0LL);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11940/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0LL);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v57);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v58);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v59);
                          filterScrollView = v6->fields.filterScrollView;
                          if ( filterScrollView )
                          {
                            if ( *p_baseSortInfo )
                            {
                              this = *(PresentBoxFilterSelectMenu_o **)&filterScrollView->fields.showScrollBars;
                              if ( this )
                              {
                                UIProgressBar__set_value(
                                  (UIProgressBar_o *)this,
                                  (*p_baseSortInfo)->fields.scrollBarValue,
                                  0LL);
                                v6->fields.state = 1;
                                v61 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v61,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)v6, v61, 0, 0LL);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_B2C434(this, sort);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu__SetButtonEnable(
        PresentBoxFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w21

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_7;
  v5 = isEnable;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, v5, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.categoryGrid) == 0LL) )
  {
LABEL_7:
    sub_B2C434(decideButton, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isEnable, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__SetButtonSelect(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_UISprite__o *filterBtnSpriteList; // x20
  signed __int64 size; // x22
  __int64 v12; // x24
  unsigned __int64 v13; // x23
  bool v14; // w28
  struct ListViewSort_o *operationSortInfo; // x21
  UISprite_o *v16; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v17; // x28
  __int64 *v18; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x28

  v2 = this;
  if ( (byte_4186B69 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite__get_Item__, v6);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v8);
    byte_4186B69 = 1;
  }
  categoryFilterKindList = v2->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_28;
  filterBtnSpriteList = v2->fields.filterBtnSpriteList;
  if ( !filterBtnSpriteList )
    goto LABEL_28;
  size = filterBtnSpriteList->fields._size;
  if ( (int)size >= 1 )
  {
    v12 = categoryFilterKindList->fields._size;
    v13 = 0LL;
    v14 = (int)v12 > 0;
    do
    {
      if ( v13 >= (unsigned int)filterBtnSpriteList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      operationSortInfo = v2->fields.operationSortInfo;
      v16 = filterBtnSpriteList->fields._items->m_Items[v13];
      if ( v14 )
      {
        v17 = v2->fields.categoryFilterKindList;
        if ( !v17 )
          break;
        if ( v13 >= (unsigned int)v17->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !operationSortInfo )
          break;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_33936092(
                                                 v2->fields.operationSortInfo,
                                                 v17->fields._items->m_Items[v13 + 1],
                                                 0LL);
        if ( !v16 )
          break;
        if ( ((unsigned __int8)this & 1) != 0 )
          v18 = &StringLiteral_16956/*"btn_bg_03"*/;
        else
          v18 = &StringLiteral_16957/*"btn_bg_04"*/;
      }
      else
      {
        rarityFilterKindList = v2->fields.rarityFilterKindList;
        if ( !rarityFilterKindList )
          break;
        if ( rarityFilterKindList->fields._size <= (unsigned int)(v13 - v12) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !operationSortInfo )
          break;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_33936152(
                                                 v2->fields.operationSortInfo,
                                                 rarityFilterKindList->fields._items->m_Items[(int)v13 - (int)v12 + 1],
                                                 0LL);
        if ( !v16 )
          break;
        if ( ((unsigned __int8)this & 1) != 0 )
          v18 = &StringLiteral_16956/*"btn_bg_03"*/;
        else
          v18 = &StringLiteral_16957/*"btn_bg_04"*/;
      }
      UISprite__set_spriteName(v16, (System_String_o *)*v18, 0LL);
      if ( (__int64)++v13 >= size )
        return;
      filterBtnSpriteList = v2->fields.filterBtnSpriteList;
      v14 = (__int64)v13 < v12;
    }
    while ( filterBtnSpriteList );
LABEL_28:
    sub_B2C434(this, method);
  }
}


System_Boolean_array *__fastcall PresentBoxFilterSelectMenu__SetKindStatus(
        PresentBoxFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x9
  signed __int64 size; // x23
  signed __int64 v12; // x22
  System_Boolean_array *v13; // x21
  unsigned __int64 v14; // x24
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v15; // x26
  unsigned __int64 v16; // x24
  signed __int64 i; // x25
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v18; // x27
  char *v19; // x9
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4186B70 & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_B2C35C(
                                             &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
                                             v8);
    byte_4186B70 = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_24;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_24;
  size = categoryFilterKindList->fields._size;
  v12 = rarityFilterKindList->fields._size;
  this = (PresentBoxFilterSelectMenu_o *)sub_B2C374(bool___TypeInfo, (unsigned int)(v12 + size));
  v13 = (System_Boolean_array *)this;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = v4->fields.categoryFilterKindList;
      if ( !v15 )
        break;
      if ( v14 >= (unsigned int)v15->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_33936092(
                                               sort,
                                               v15->fields._items->m_Items[v14 + 1],
                                               0LL);
      if ( !v13 )
        break;
      if ( v14 >= v13->max_length )
      {
LABEL_25:
        v21 = sub_B2C460(this);
        sub_B2C400(v21, 0LL);
      }
      v13->m_Items[v14++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v14 >= size )
        goto LABEL_14;
    }
LABEL_24:
    sub_B2C434(this, sort);
  }
LABEL_14:
  if ( (int)v12 >= 1 )
  {
    v16 = 0LL;
    for ( i = (unsigned __int64)(unsigned int)size << 32; ; i += 0x100000000LL )
    {
      v18 = v4->fields.rarityFilterKindList;
      if ( !v18 )
        break;
      if ( v16 >= (unsigned int)v18->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_33936152(
                                               sort,
                                               v18->fields._items->m_Items[v16 + 1],
                                               0LL);
      if ( !v13 )
        break;
      if ( (unsigned int)size + v16 >= v13->max_length )
        goto LABEL_25;
      ++v16;
      v19 = (char *)v13 + (i >> 32);
      v19[32] = (unsigned __int8)this & 1;
      if ( (__int64)v16 >= v12 )
        return v13;
    }
    goto LABEL_24;
  }
  return v13;
}


void __fastcall PresentBoxFilterSelectMenu__add_callbackFunc(
        PresentBoxFilterSelectMenu_o *this,
        PresentBoxFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PresentBoxFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentBoxFilterSelectMenu_o *v10; // x0
  PresentBoxFilterSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4186B64 & 1) == 0 )
  {
    sub_B2C35C(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4186B64 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v7->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_B2C728(v7);
  PresentBoxFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


void __fastcall PresentBoxFilterSelectMenu__remove_callbackFunc(
        PresentBoxFilterSelectMenu_o *this,
        PresentBoxFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PresentBoxFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentBoxFilterSelectMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4186B65 & 1) == 0 )
  {
    sub_B2C35C(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4186B65 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v7->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_B2C728(v7);
  PresentBoxFilterSelectMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu_CallbackFunc___ctor(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PresentBoxFilterSelectMenu_CallbackFunc__BeginInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_41852B4 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41852B4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__Invoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PresentBoxFilterSelectMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PresentBoxFilterSelectMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PresentBoxFilterSelectMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PresentBoxFilterSelectMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}


void __fastcall PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(
        PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu___c__DisplayClass38_0___InitDisp_b__0(
        PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  PresentBoxFilterSelectMenu__OnClickFilter(_4__this, this->fields.kind, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(
        PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu___c__DisplayClass38_1___InitDisp_b__1(
        PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(_4__this, this->fields.kind, 0LL);
}