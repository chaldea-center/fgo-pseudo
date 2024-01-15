void __fastcall PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  ListViewSort_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_40F8FD7 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&ListViewSort_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_List_UISprite__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo, v14);
    byte_40F8FD7 = 1;
  }
  v15 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, method, v2, v3, v4);
  ListViewSort___ctor(v15, 3, 0, 0LL);
  this->fields.presentBoxSortInfo = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.presentBoxSortInfo,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v26 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo,
                                                                   v22,
                                                                   v23,
                                                                   v24,
                                                                   v25);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v26,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v26 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    0,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    9,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    10,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    11,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    12,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    14,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    13,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKindList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v37 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo,
                                                                   v33,
                                                                   v34,
                                                                   v35,
                                                                   v36);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v37,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v37 )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v37,
    0,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rarityFilterKindList,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UISprite__TypeInfo,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46,
                                                                                                  v47);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.filterBtnSpriteList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PresentBoxFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_23355808(this, 0LL, v2);
}


void __fastcall PresentBoxFilterSelectMenu__Close_23355808(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F8FCC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PresentBoxFilterSelectMenu_EndClose__, v10);
    byte_40F8FCC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__EndClose(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  __int64 size; // x24
  __int64 v28; // x25
  __int64 v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UnityEngine_GameObject_o *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UISprite__o *filterBtnSpriteList; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v42; // x22
  srcLineSprite_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x22
  EventDelegate_Callback_o *v49; // x23
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  EventDelegate_o *v54; // x20
  UnityEngine_Component_o *Child; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v57; // x22
  UILabel_o *v58; // x20
  System_String_o *PresentBoxFilterKindText; // x0
  __int64 v60; // x8
  UnityEngine_GameObject_o *v61; // x0
  srcLineSprite_o *v62; // x0
  UnityEngine_GameObject_o *rarityGrid; // x0
  UnityEngine_Transform_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  __int64 v70; // x24
  __int64 v71; // x25
  __int64 v72; // x20
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct UnityEngine_GameObject_o *templateRarityButton; // x21
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x21
  UnityEngine_GameObject_o *v82; // x0
  struct System_Collections_Generic_List_UISprite__o *v83; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v84; // x0
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v85; // x22
  srcLineSprite_o *v86; // x0
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v91; // x22
  EventDelegate_Callback_o *v92; // x23
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  EventDelegate_o *v97; // x20
  UnityEngine_Component_o *v98; // x0
  WebViewObject_o *v99; // x0
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v100; // x22
  UILabel_o *v101; // x20
  System_String_o *PresentBoxRarityFilterKindText; // x0
  __int64 v103; // x8
  UnityEngine_GameObject_o *v104; // x0
  srcLineSprite_o *v105; // x0

  if ( (byte_40F8FCD & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UILabel___, v3);
    sub_B16FFC(&EventDelegate_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__, v16);
    sub_B16FFC(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v17);
    sub_B16FFC(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__, v18);
    sub_B16FFC(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v19);
    byte_40F8FCD = 1;
  }
  categoryGrid = this->fields.categoryGrid;
  if ( !categoryGrid )
    goto LABEL_57;
  transform = UnityEngine_GameObject__get_transform(categoryGrid, 0LL);
  if ( !transform )
    goto LABEL_57;
  if ( !UnityEngine_Transform__get_childCount(transform, 0LL) )
  {
    categoryFilterKindList = this->fields.categoryFilterKindList;
    if ( !categoryFilterKindList )
      goto LABEL_57;
    size = categoryFilterKindList->fields._size;
    if ( (int)size >= 1 )
    {
      v28 = 8LL;
      while ( 1 )
      {
        v29 = sub_B170CC(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v22, v23, v24, v25);
        PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *)v29,
          0LL);
        if ( !v29 )
          break;
        *(_QWORD *)(v29 + 24) = this;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v29 + 24),
          (System_Int32_array **)this,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        templateCategoryButton = this->fields.templateCategoryButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v37 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)templateCategoryButton,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v37 )
          break;
        v38 = v37;
        gameObject = UnityEngine_GameObject__get_gameObject(v37, 0LL);
        GameObjectExtensions__SafeSetParent_27425996(gameObject, this->fields.categoryGrid, 0LL);
        UnityEngine_GameObject__SetActive(v38, 1, 0LL);
        filterBtnSpriteList = this->fields.filterBtnSpriteList;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v38,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)filterBtnSpriteList,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v42 = this->fields.categoryFilterKindList;
        if ( !v42 )
          break;
        if ( v28 - 8 >= (unsigned __int64)(unsigned int)v42->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        *(_DWORD *)(v29 + 16) = *((_DWORD *)&v42->fields._items->obj.klass + v28);
        v43 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                v38,
                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !v43 )
          break;
        v48 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v43->fields.mcTo.fields.y;
        v49 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v44, v45, v46, v47);
        EventDelegate_Callback___ctor(
          v49,
          (Il2CppObject *)v29,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0LL);
        v54 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v50, v51, v52, v53);
        EventDelegate___ctor_29412484(v54, v49, 0LL);
        if ( !v48 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v48,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v38, 0, 0LL);
        if ( !Child )
          break;
        Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                    Child,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v57 = this->fields.categoryFilterKindList;
        if ( !v57 )
          break;
        v58 = (UILabel_o *)Component_WebViewObject;
        if ( v28 - 8 >= (unsigned __int64)(unsigned int)v57->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        PresentBoxFilterKindText = ListViewSort__GetPresentBoxFilterKindText(
                                     this->fields.operationSortInfo,
                                     *((_DWORD *)&v57->fields._items->obj.klass + v28),
                                     0LL);
        if ( !v58 )
          break;
        UILabel__set_text(v58, PresentBoxFilterKindText, 0LL);
        v60 = v28 - 7;
        ++v28;
        if ( v60 >= size )
          goto LABEL_27;
      }
LABEL_57:
      sub_B170D4();
    }
LABEL_27:
    v61 = this->fields.categoryGrid;
    if ( !v61 )
      goto LABEL_57;
    v62 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            v61,
            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    if ( !v62 )
      goto LABEL_57;
    ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *))v62->klass[1]._1.castClass)(
      v62,
      v62->klass[1]._1.declaringType);
  }
  rarityGrid = this->fields.rarityGrid;
  if ( !rarityGrid )
    goto LABEL_57;
  v64 = UnityEngine_GameObject__get_transform(rarityGrid, 0LL);
  if ( !v64 )
    goto LABEL_57;
  if ( !UnityEngine_Transform__get_childCount(v64, 0LL) )
  {
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_57;
    v70 = rarityFilterKindList->fields._size;
    if ( (int)v70 >= 1 )
    {
      v71 = 8LL;
      do
      {
        v72 = sub_B170CC(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v65, v66, v67, v68);
        PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *)v72,
          0LL);
        if ( !v72 )
          goto LABEL_57;
        *(_QWORD *)(v72 + 24) = this;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v72 + 24),
          (System_Int32_array **)this,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
        templateRarityButton = this->fields.templateRarityButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v80 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)templateRarityButton,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v80 )
          goto LABEL_57;
        v81 = v80;
        v82 = UnityEngine_GameObject__get_gameObject(v80, 0LL);
        GameObjectExtensions__SafeSetParent_27425996(v82, this->fields.rarityGrid, 0LL);
        UnityEngine_GameObject__SetActive(v81, 1, 0LL);
        v83 = this->fields.filterBtnSpriteList;
        v84 = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v81,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v83 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v83,
          v84,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v85 = this->fields.rarityFilterKindList;
        if ( !v85 )
          goto LABEL_57;
        if ( v71 - 8 >= (unsigned __int64)(unsigned int)v85->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        *(_DWORD *)(v72 + 16) = *((_DWORD *)&v85->fields._items->obj.klass + v71);
        v86 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                v81,
                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !v86 )
          goto LABEL_57;
        v91 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v86->fields.mcTo.fields.y;
        v92 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v87, v88, v89, v90);
        EventDelegate_Callback___ctor(
          v92,
          (Il2CppObject *)v72,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0LL);
        v97 = (EventDelegate_o *)sub_B170CC(EventDelegate_TypeInfo, v93, v94, v95, v96);
        EventDelegate___ctor_29412484(v97, v92, 0LL);
        if ( !v91 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v91,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v97,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        v98 = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v81, 0, 0LL);
        if ( !v98 )
          goto LABEL_57;
        v99 = UnityEngine_Component__GetComponent_WebViewObject_(
                v98,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v100 = this->fields.rarityFilterKindList;
        if ( !v100 )
          goto LABEL_57;
        v101 = (UILabel_o *)v99;
        if ( v71 - 8 >= (unsigned __int64)(unsigned int)v100->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !this->fields.operationSortInfo )
          goto LABEL_57;
        PresentBoxRarityFilterKindText = ListViewSort__GetPresentBoxRarityFilterKindText(
                                           this->fields.operationSortInfo,
                                           *((_DWORD *)&v100->fields._items->obj.klass + v71),
                                           0LL);
        if ( !v101 )
          goto LABEL_57;
        UILabel__set_text(v101, PresentBoxRarityFilterKindText, 0LL);
        v103 = v71 - 7;
        ++v71;
      }
      while ( v103 < v70 );
    }
    v104 = this->fields.rarityGrid;
    if ( !v104 )
      goto LABEL_57;
    v105 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v104,
             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    if ( !v105 )
      goto LABEL_57;
    ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *))v105->klass[1]._1.castClass)(
      v105,
      v105->klass[1]._1.declaringType);
  }
}


bool __fastcall PresentBoxFilterSelectMenu__IsChangedStatus(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Boolean_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Boolean_array *kindStatus; // x11
  __int64 v8; // x9
  unsigned __int64 v9; // x8
  bool *v10; // x11

  v4 = PresentBoxFilterSelectMenu__SetKindStatus(this, this->fields.operationSortInfo, v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
LABEL_10:
    sub_B170D4();
  v8 = *(_QWORD *)&kindStatus->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = 0LL;
  v10 = &kindStatus->m_Items[4];
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_10;
    if ( v9 >= v4->max_length )
    {
      sub_B17100(v4, v5, v6);
      sub_B170A0();
    }
    if ( !v10[v9] == v4->m_Items[v9 + 4] )
      return 1;
    if ( (__int64)++v9 >= (int)v8 )
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
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x23
  signed __int64 size; // x21
  unsigned __int64 v10; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x23
  signed __int64 v12; // x21
  unsigned __int64 v13; // x22

  if ( (byte_40F8FD1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F8FD1 = 1;
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
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)categoryFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_30230788(
          this->fields.operationSortInfo,
          categoryFilterKindList->fields._items->m_Items[++v10],
          1,
          0LL);
        if ( (__int64)v10 >= size )
          goto LABEL_17;
        categoryFilterKindList = this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_25:
      sub_B170D4();
    }
LABEL_17:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_25;
    v12 = rarityFilterKindList->fields._size;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( v13 >= (unsigned int)rarityFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_30230852(
          this->fields.operationSortInfo,
          rarityFilterKindList->fields._items->m_Items[++v13],
          1,
          0LL);
        if ( (__int64)v13 >= v12 )
          goto LABEL_26;
        rarityFilterKindList = this->fields.rarityFilterKindList;
      }
      while ( rarityFilterKindList );
      goto LABEL_25;
    }
LABEL_26:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickCancel(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F8FD0 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8FD0 = 1;
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
  struct UIScrollView_o *filterScrollView; // x8
  UIProgressBar_o *v4; // x0
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x2
  float value; // s0
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v9; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v11; // x2

  if ( (byte_40F8FCF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8FCF = 1;
  }
  if ( this->fields.state == 2 )
  {
    filterScrollView = this->fields.filterScrollView;
    if ( !filterScrollView )
      goto LABEL_13;
    v4 = *(UIProgressBar_o **)&filterScrollView->fields.showScrollBars;
    if ( !v4 )
      goto LABEL_13;
    operationSortInfo = this->fields.operationSortInfo;
    value = UIProgressBar__get_value(v4, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    PresentBoxFilterSelectMenu__SetButtonEnable(this, 0, v6);
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo )
LABEL_13:
      sub_B170D4();
    ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL);
    IsChangedStatus = PresentBoxFilterSelectMenu__IsChangedStatus(this, v9);
    PresentBoxFilterSelectMenu__Callback(this, IsChangedStatus, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu__OnClickFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40F8FD3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_40F8FD3 = 1;
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
      sub_B170D4();
    ListViewSort__SwitchFilter_30231888(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v6);
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
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x23
  signed __int64 size; // x21
  unsigned __int64 v10; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x23
  signed __int64 v12; // x21
  unsigned __int64 v13; // x22

  if ( (byte_40F8FD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F8FD2 = 1;
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
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)categoryFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_30230788(
          this->fields.operationSortInfo,
          categoryFilterKindList->fields._items->m_Items[++v10],
          0,
          0LL);
        if ( (__int64)v10 >= size )
          goto LABEL_17;
        categoryFilterKindList = this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_25:
      sub_B170D4();
    }
LABEL_17:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_25;
    v12 = rarityFilterKindList->fields._size;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      do
      {
        if ( v13 >= (unsigned int)rarityFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_30230852(
          this->fields.operationSortInfo,
          rarityFilterKindList->fields._items->m_Items[++v13],
          0,
          0LL);
        if ( (__int64)v13 >= v12 )
          goto LABEL_26;
        rarityFilterKindList = this->fields.rarityFilterKindList;
      }
      while ( rarityFilterKindList );
      goto LABEL_25;
    }
LABEL_26:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu__OnClickRarityFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40F8FD4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_40F8FD4 = 1;
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
      sub_B170D4();
    ListViewSort__SwitchFilter_30231956(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v6);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_40F8FD6 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    byte_40F8FD6 = 1;
  }
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  const MethodInfo *v33; // x2
  struct ListViewSort_o *v34; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  ListViewSort_o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  ListViewSort_o *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_GameObject_o *v55; // x0
  UILabel_o *titleLabel; // x21
  System_String_o *v57; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o *v59; // x0
  UILabel_o *categoryFilterTitle; // x21
  System_String_o *v61; // x0
  UILabel_o *rarityFilterTitle; // x21
  System_String_o *v63; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v65; // x0
  UILabel_o *clearLabel; // x21
  System_String_o *v67; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v69; // x0
  UILabel_o *initializeLabel; // x21
  System_String_o *v71; // x0
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x2
  struct UIScrollView_o *filterScrollView; // x9
  UIProgressBar_o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  System_Action_o *v81; // x20

  if ( (byte_40F8FCB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_PresentBoxFilterSelectMenu_EndOpen__, v9);
    sub_B16FFC(&StringLiteral_11890/*"SERVANT_SORT_RESET"*/, v10);
    sub_B16FFC(&StringLiteral_10456/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/, v11);
    sub_B16FFC(&StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, v12);
    sub_B16FFC(&StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, v13);
    sub_B16FFC(&StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, v14);
    sub_B16FFC(&StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, v15);
    sub_B16FFC(&StringLiteral_10434/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v16);
    sub_B16FFC(&StringLiteral_10455/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, v17);
    byte_40F8FCB = 1;
  }
  if ( !this->fields.state )
  {
    presentBoxSortInfo = this->fields.presentBoxSortInfo;
    if ( presentBoxSortInfo )
    {
      presentBoxSortInfo->fields.listViewKind = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        this->fields.callbackFunc = callback;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.callbackFunc,
          (System_Int32_array **)callback,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        if ( sort )
        {
          p_baseSortInfo = &this->fields.baseSortInfo;
          this->fields.baseSortInfo = sort;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
            (System_Int32_array **)sort,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
        }
        else
        {
          v34 = this->fields.presentBoxSortInfo;
          p_baseSortInfo = &this->fields.baseSortInfo;
          this->fields.baseSortInfo = v34;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
            (System_Int32_array **)v34,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          baseSortInfo = this->fields.baseSortInfo;
          if ( !baseSortInfo )
            goto LABEL_26;
          ListViewSort__Load(baseSortInfo, 0LL);
        }
        v36 = PresentBoxFilterSelectMenu__SetKindStatus(this, sort, v33);
        this->fields.kindStatus = v36;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.kindStatus,
          (System_Int32_array **)v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        v43 = this->fields.baseSortInfo;
        v48 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v44, v45, v46, v47);
        ListViewSort___ctor_30209040(v48, v43, 0LL);
        this->fields.operationSortInfo = v48;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v55 )
        {
          UnityEngine_GameObject__SetActive(v55, 1, 0LL);
          titleLabel = this->fields.titleLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, v57, 0LL);
            explanationLabel = this->fields.explanationLabel;
            v59 = LocalizationManager__Get((System_String_o *)StringLiteral_10434/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, v59, 0LL);
              categoryFilterTitle = this->fields.categoryFilterTitle;
              v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10455/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, 0LL);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, v61, 0LL);
                rarityFilterTitle = this->fields.rarityFilterTitle;
                v63 = LocalizationManager__Get((System_String_o *)StringLiteral_10456/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/, 0LL);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, v63, 0LL);
                  decideLabel = this->fields.decideLabel;
                  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, 0LL);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, v65, 0LL);
                    clearLabel = this->fields.clearLabel;
                    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, 0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, v67, 0LL);
                      cancelLabel = this->fields.cancelLabel;
                      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, 0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, v69, 0LL);
                        initializeLabel = this->fields.initializeLabel;
                        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_RESET"*/, 0LL);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, v71, 0LL);
                          PresentBoxFilterSelectMenu__InitDisp(this, v72);
                          PresentBoxFilterSelectMenu__SetButtonSelect(this, v73);
                          PresentBoxFilterSelectMenu__SetButtonEnable(this, 1, v74);
                          filterScrollView = this->fields.filterScrollView;
                          if ( filterScrollView )
                          {
                            if ( *p_baseSortInfo )
                            {
                              v76 = *(UIProgressBar_o **)&filterScrollView->fields.showScrollBars;
                              if ( v76 )
                              {
                                UIProgressBar__set_value(v76, (*p_baseSortInfo)->fields.scrollBarValue, 0LL);
                                this->fields.state = 1;
                                v81 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v77, v78, v79, v80);
                                System_Action___ctor(
                                  v81,
                                  (Il2CppObject *)this,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
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
    sub_B170D4();
  }
}


void __fastcall PresentBoxFilterSelectMenu__SetButtonEnable(
        PresentBoxFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  bool v5; // w21
  UnityEngine_Behaviour_o *cancelButton; // x0
  UnityEngine_Behaviour_o *clearButton; // x0
  UnityEngine_Behaviour_o *initializeButton; // x0
  UnityEngine_GameObject_o *categoryGrid; // x0

  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_7;
  v5 = isEnable;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !cancelButton
    || (UnityEngine_Behaviour__set_enabled(cancelButton, v5, 0LL),
        (clearButton = (UnityEngine_Behaviour_o *)this->fields.clearButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(clearButton, isEnable, 0LL),
        (initializeButton = (UnityEngine_Behaviour_o *)this->fields.initializeButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(initializeButton, isEnable, 0LL),
        (categoryGrid = this->fields.categoryGrid) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(categoryGrid, isEnable, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__SetButtonSelect(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
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
  bool Filter_30229884; // w0
  __int64 *v19; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x28
  bool Filter_30229944; // w0

  if ( (byte_40F8FCE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite__get_Item__, v6);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v7);
    sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v8);
    byte_40F8FCE = 1;
  }
  categoryFilterKindList = this->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_28;
  filterBtnSpriteList = this->fields.filterBtnSpriteList;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      operationSortInfo = this->fields.operationSortInfo;
      v16 = filterBtnSpriteList->fields._items->m_Items[v13];
      if ( v14 )
      {
        v17 = this->fields.categoryFilterKindList;
        if ( !v17 )
          break;
        if ( v13 >= (unsigned int)v17->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !operationSortInfo )
          break;
        Filter_30229884 = ListViewSort__GetFilter_30229884(
                            this->fields.operationSortInfo,
                            v17->fields._items->m_Items[v13 + 1],
                            0LL);
        if ( !v16 )
          break;
        if ( Filter_30229884 )
          v19 = &StringLiteral_16890/*"btn_bg_03"*/;
        else
          v19 = &StringLiteral_16891/*"btn_bg_04"*/;
      }
      else
      {
        rarityFilterKindList = this->fields.rarityFilterKindList;
        if ( !rarityFilterKindList )
          break;
        if ( rarityFilterKindList->fields._size <= (unsigned int)(v13 - v12) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !operationSortInfo )
          break;
        Filter_30229944 = ListViewSort__GetFilter_30229944(
                            this->fields.operationSortInfo,
                            rarityFilterKindList->fields._items->m_Items[(int)v13 - (int)v12 + 1],
                            0LL);
        if ( !v16 )
          break;
        if ( Filter_30229944 )
          v19 = &StringLiteral_16890/*"btn_bg_03"*/;
        else
          v19 = &StringLiteral_16891/*"btn_bg_04"*/;
      }
      UISprite__set_spriteName(v16, (System_String_o *)*v19, 0LL);
      if ( (__int64)++v13 >= size )
        return;
      filterBtnSpriteList = this->fields.filterBtnSpriteList;
      v14 = (__int64)v13 < v12;
    }
    while ( filterBtnSpriteList );
LABEL_28:
    sub_B170D4();
  }
}


System_Boolean_array *__fastcall PresentBoxFilterSelectMenu__SetKindStatus(
        PresentBoxFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
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
  _BOOL8 Filter_30229884; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  unsigned __int64 v19; // x24
  signed __int64 i; // x25
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v21; // x27
  char *v22; // x9

  if ( (byte_40F8FD5 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v8);
    byte_40F8FD5 = 1;
  }
  categoryFilterKindList = this->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_24;
  rarityFilterKindList = this->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_24;
  size = categoryFilterKindList->fields._size;
  v12 = rarityFilterKindList->fields._size;
  v13 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, (unsigned int)(v12 + size), method);
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = this->fields.categoryFilterKindList;
      if ( !v15 )
        break;
      if ( v14 >= (unsigned int)v15->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !sort )
        break;
      Filter_30229884 = ListViewSort__GetFilter_30229884(sort, v15->fields._items->m_Items[v14 + 1], 0LL);
      if ( !v13 )
        break;
      if ( v14 >= v13->max_length )
      {
LABEL_25:
        sub_B17100(Filter_30229884, v17, v18);
        sub_B170A0();
      }
      v13->m_Items[v14++ + 4] = Filter_30229884;
      if ( (__int64)v14 >= size )
        goto LABEL_14;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_14:
  if ( (int)v12 >= 1 )
  {
    v19 = 0LL;
    for ( i = (unsigned __int64)(unsigned int)size << 32; ; i += 0x100000000LL )
    {
      v21 = this->fields.rarityFilterKindList;
      if ( !v21 )
        break;
      if ( v19 >= (unsigned int)v21->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !sort )
        break;
      Filter_30229884 = ListViewSort__GetFilter_30229944(sort, v21->fields._items->m_Items[v19 + 1], 0LL);
      if ( !v13 )
        break;
      if ( (unsigned int)size + v19 >= v13->max_length )
        goto LABEL_25;
      ++v19;
      v22 = (char *)v13 + (i >> 32);
      v22[32] = Filter_30229884;
      if ( (__int64)v19 >= v12 )
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

  if ( (byte_40F8FC9 & 1) == 0 )
  {
    sub_B16FFC(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40F8FC9 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_B173C8(v7);
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

  if ( (byte_40F8FCA & 1) == 0 )
  {
    sub_B16FFC(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40F8FCA = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_B173C8(v7);
  PresentBoxFilterSelectMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu_CallbackFunc___ctor(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F839E & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F839E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__Invoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PresentBoxFilterSelectMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  PresentBoxFilterSelectMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PresentBoxFilterSelectMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PresentBoxFilterSelectMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
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
    sub_B170D4();
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
    sub_B170D4();
  PresentBoxFilterSelectMenu__OnClickRarityFilter(_4__this, this->fields.kind, 0LL);
}