void __fastcall PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  ListViewSort_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v22; // x20
  __int64 v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_4213A9E & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UISprite___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_List_UISprite__TypeInfo, v11);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo, v12);
    byte_4213A9E = 1;
  }
  v13 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, method, v2);
  ListViewSort___ctor(v13, 3, 0, 0LL);
  this->fields.presentBoxSortInfo = v13;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.presentBoxSortInfo,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo,
                                                                   v20,
                                                                   v21);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v22,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v22 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    0,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    1,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    2,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    3,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    4,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    5,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    6,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    7,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    8,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    9,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    10,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    11,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    12,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    14,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v22,
    13,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKindList,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v32 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo,
                                                                   v30,
                                                                   v31);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v32,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v32 )
LABEL_9:
    sub_B0D97C(v23);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    4,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    3,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    2,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    1,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v32,
    0,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v32;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rarityFilterKindList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UISprite__TypeInfo,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v41;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.filterBtnSpriteList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PresentBoxFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_22996796(this, 0LL, v2);
}


void __fastcall PresentBoxFilterSelectMenu__Close_22996796(
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
  System_Action_o *v13; // x20

  if ( (byte_4213A93 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_PresentBoxFilterSelectMenu_EndClose__, v10);
    byte_4213A93 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  __int64 size; // x24
  __int64 v25; // x25
  __int64 v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct UnityEngine_GameObject_o *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UISprite__o *filterBtnSpriteList; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x22
  EventDelegate_Callback_o *v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  EventDelegate_o *v44; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v45; // x22
  UILabel_o *v46; // x20
  __int64 v47; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  __int64 v51; // x24
  __int64 v52; // x25
  __int64 v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct UnityEngine_GameObject_o *templateRarityButton; // x21
  UnityEngine_GameObject_o *v61; // x21
  UnityEngine_GameObject_o *v62; // x0
  struct System_Collections_Generic_List_UISprite__o *v63; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x22
  EventDelegate_Callback_o *v68; // x23
  __int64 v69; // x1
  __int64 v70; // x2
  EventDelegate_o *v71; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v72; // x22
  UILabel_o *v73; // x20
  __int64 v74; // x8

  if ( (byte_4213A94 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UILabel___, v3);
    sub_B0D8A4(&EventDelegate_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UISprite__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v13);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__, v16);
    sub_B0D8A4(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v17);
    sub_B0D8A4(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__, v18);
    sub_B0D8A4(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v19);
    byte_4213A94 = 1;
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
      v25 = 8LL;
      while ( 1 )
      {
        v26 = sub_B0D974(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v21, v22);
        PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *)v26,
          0LL);
        if ( !v26 )
          break;
        *(_QWORD *)(v26 + 24) = this;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v26 + 24),
          (System_Int32_array **)this,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        templateCategoryButton = this->fields.templateCategoryButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)templateCategoryButton,
                                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v34 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_31184716(gameObject, this->fields.categoryGrid, 0LL);
        UnityEngine_GameObject__SetActive(v34, 1, 0LL);
        filterBtnSpriteList = this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v34,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)filterBtnSpriteList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)categoryGrid,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v37 = this->fields.categoryFilterKindList;
        if ( !v37 )
          break;
        if ( v25 - 8 >= (unsigned __int64)(unsigned int)v37->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        *(_DWORD *)(v26 + 16) = *((_DWORD *)&v37->fields._items->obj.klass + v25);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v34,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)categoryGrid[4].klass;
        v41 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v38, v39);
        EventDelegate_Callback___ctor(
          v41,
          (Il2CppObject *)v26,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0LL);
        v44 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v42, v43);
        EventDelegate___ctor_28889248(v44, v41, 0LL);
        if ( !klass )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v34, 0, 0LL);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v45 = this->fields.categoryFilterKindList;
        if ( !v45 )
          break;
        v46 = (UILabel_o *)categoryGrid;
        if ( v25 - 8 >= (unsigned __int64)(unsigned int)v45->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     this->fields.operationSortInfo,
                                                     *((_DWORD *)&v45->fields._items->obj.klass + v25),
                                                     0LL);
        if ( !v46 )
          break;
        UILabel__set_text(v46, (System_String_o *)categoryGrid, 0LL);
        v47 = v25 - 7;
        ++v25;
        if ( v47 >= size )
          goto LABEL_27;
      }
LABEL_57:
      sub_B0D97C(categoryGrid);
    }
LABEL_27:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_57;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 categoryGrid,
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    v51 = rarityFilterKindList->fields._size;
    if ( (int)v51 >= 1 )
    {
      v52 = 8LL;
      do
      {
        v53 = sub_B0D974(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v48, v49);
        PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *)v53,
          0LL);
        if ( !v53 )
          goto LABEL_57;
        *(_QWORD *)(v53 + 24) = this;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v53 + 24),
          (System_Int32_array **)this,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
        templateRarityButton = this->fields.templateRarityButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)templateRarityButton,
                                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_57;
        v61 = categoryGrid;
        v62 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_31184716(v62, this->fields.rarityGrid, 0LL);
        UnityEngine_GameObject__SetActive(v61, 1, 0LL);
        v63 = this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v61,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v63 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63,
          (EventMissionProgressRequest_Argument_ProgressData_o *)categoryGrid,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v64 = this->fields.rarityFilterKindList;
        if ( !v64 )
          goto LABEL_57;
        if ( v52 - 8 >= (unsigned __int64)(unsigned int)v64->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        *(_DWORD *)(v53 + 16) = *((_DWORD *)&v64->fields._items->obj.klass + v52);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v61,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_57;
        v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)categoryGrid[4].klass;
        v68 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v65, v66);
        EventDelegate_Callback___ctor(
          v68,
          (Il2CppObject *)v53,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0LL);
        v71 = (EventDelegate_o *)sub_B0D974(EventDelegate_TypeInfo, v69, v70);
        EventDelegate___ctor_28889248(v71, v68, 0LL);
        if ( !v67 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v67,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v61, 0, 0LL);
        if ( !categoryGrid )
          goto LABEL_57;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v72 = this->fields.rarityFilterKindList;
        if ( !v72 )
          goto LABEL_57;
        v73 = (UILabel_o *)categoryGrid;
        if ( v52 - 8 >= (unsigned __int64)(unsigned int)v72->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !this->fields.operationSortInfo )
          goto LABEL_57;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     this->fields.operationSortInfo,
                                                     *((_DWORD *)&v72->fields._items->obj.klass + v52),
                                                     0LL);
        if ( !v73 )
          goto LABEL_57;
        UILabel__set_text(v73, (System_String_o *)categoryGrid, 0LL);
        v74 = v52 - 7;
        ++v52;
      }
      while ( v74 < v51 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_57;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 categoryGrid,
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
  struct System_Boolean_array *kindStatus; // x11
  __int64 v6; // x9
  unsigned __int64 v7; // x8
  bool *v8; // x11
  __int64 v10; // x0

  v4 = PresentBoxFilterSelectMenu__SetKindStatus(this, this->fields.operationSortInfo, v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
LABEL_10:
    sub_B0D97C(v4);
  v6 = *(_QWORD *)&kindStatus->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = 0LL;
  v8 = &kindStatus->m_Items[4];
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_10;
    if ( v7 >= v4->max_length )
    {
      v10 = sub_B0D9A8(v4);
      sub_B0D948(v10, 0LL);
    }
    if ( !v8[v7] == v4->m_Items[v7 + 4] )
      return 1;
    if ( (__int64)++v7 >= (int)v6 )
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

  if ( (byte_4213A98 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4213A98 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_32846200(
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
      sub_B0D97C(v7);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_32846264(
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

  if ( (byte_4213A97 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4213A97 = 1;
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
  if ( (byte_4213A96 & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4213A96 = 1;
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
      sub_B0D97C(this);
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
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4213A9A & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_4213A9A = 1;
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
      sub_B0D97C(0LL);
    ListViewSort__SwitchFilter_32847308(operationSortInfo, kind, 0LL);
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
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x23
  signed __int64 size; // x21
  unsigned __int64 v11; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x23
  signed __int64 v13; // x21
  unsigned __int64 v14; // x22

  if ( (byte_4213A99 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4213A99 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_32846200(
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
      sub_B0D97C(v7);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_32846264(
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
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4213A9B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_4213A9B = 1;
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
      sub_B0D97C(0LL);
    ListViewSort__SwitchFilter_32847376(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v6);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4213A9D & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    byte_4213A9D = 1;
  }
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_B0D97C(0LL);
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
  __int64 v42; // x1
  __int64 v43; // x2
  ListViewSort_o *v44; // x22
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *categoryFilterTitle; // x21
  UILabel_o *rarityFilterTitle; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x2
  struct UIScrollView_o *filterScrollView; // x9
  __int64 v63; // x1
  __int64 v64; // x2
  System_Action_o *v65; // x20

  v6 = this;
  if ( (byte_4213A92 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, sort);
    sub_B0D8A4(&ListViewSort_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&Method_PresentBoxFilterSelectMenu_EndOpen__, v9);
    sub_B0D8A4(&StringLiteral_11977/*"SERVANT_SORT_RESET"*/, v10);
    sub_B0D8A4(&StringLiteral_10514/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/, v11);
    sub_B0D8A4(&StringLiteral_11828/*"SERVANT_SORT_CANCEL"*/, v12);
    sub_B0D8A4(&StringLiteral_11832/*"SERVANT_SORT_DECIDE"*/, v13);
    sub_B0D8A4(&StringLiteral_11979/*"SERVANT_SORT_TITLE2"*/, v14);
    sub_B0D8A4(&StringLiteral_11829/*"SERVANT_SORT_CLEAR"*/, v15);
    sub_B0D8A4(&StringLiteral_10492/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v16);
    this = (PresentBoxFilterSelectMenu_o *)sub_B0D8A4(&StringLiteral_10513/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, v17);
    byte_4213A92 = 1;
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
        sub_B0D840(
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
          sub_B0D840(
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
          sub_B0D840((BattleServantConfConponent_o *)&v6->fields.baseSortInfo, v33, v25, v26, v27, v28, v29, v30);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_26;
          ListViewSort__Load((ListViewSort_o *)this, 0LL);
        }
        v34 = (System_Int32_array **)PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v32);
        v6->fields.kindStatus = (struct System_Boolean_array *)v34;
        sub_B0D840((BattleServantConfConponent_o *)&v6->fields.kindStatus, v34, v35, v36, v37, v38, v39, v40);
        baseSortInfo = v6->fields.baseSortInfo;
        v44 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v42, v43);
        ListViewSort___ctor_32823928(v44, baseSortInfo, 0LL);
        v6->fields.operationSortInfo = v44;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v6->fields.operationSortInfo,
          (System_Int32_array **)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
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
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11979/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10492/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10513/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/,
                                                       0LL);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0LL);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10514/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0LL);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0LL);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11832/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0LL);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11829/*"SERVANT_SORT_CLEAR"*/,
                                                             0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0LL);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11828/*"SERVANT_SORT_CANCEL"*/,
                                                               0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0LL);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11977/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0LL);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v59);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v60);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v61);
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
                                v65 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v63, v64);
                                System_Action___ctor(
                                  v65,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)v6, v65, 0, 0LL);
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
    sub_B0D97C(this);
  }
}


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
    sub_B0D97C(decideButton);
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
  if ( (byte_4213A95 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UISprite__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UISprite__get_Item__, v6);
    sub_B0D8A4(&StringLiteral_17008/*"btn_bg_04"*/, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_B0D8A4(&StringLiteral_17007/*"btn_bg_03"*/, v8);
    byte_4213A95 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      operationSortInfo = v2->fields.operationSortInfo;
      v16 = filterBtnSpriteList->fields._items->m_Items[v13];
      if ( v14 )
      {
        v17 = v2->fields.categoryFilterKindList;
        if ( !v17 )
          break;
        if ( v13 >= (unsigned int)v17->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !operationSortInfo )
          break;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_32845288(
                                                 v2->fields.operationSortInfo,
                                                 v17->fields._items->m_Items[v13 + 1],
                                                 0LL);
        if ( !v16 )
          break;
        if ( ((unsigned __int8)this & 1) != 0 )
          v18 = &StringLiteral_17007/*"btn_bg_03"*/;
        else
          v18 = &StringLiteral_17008/*"btn_bg_04"*/;
      }
      else
      {
        rarityFilterKindList = v2->fields.rarityFilterKindList;
        if ( !rarityFilterKindList )
          break;
        if ( rarityFilterKindList->fields._size <= (unsigned int)(v13 - v12) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !operationSortInfo )
          break;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_32845348(
                                                 v2->fields.operationSortInfo,
                                                 rarityFilterKindList->fields._items->m_Items[(int)v13 - (int)v12 + 1],
                                                 0LL);
        if ( !v16 )
          break;
        if ( ((unsigned __int8)this & 1) != 0 )
          v18 = &StringLiteral_17007/*"btn_bg_03"*/;
        else
          v18 = &StringLiteral_17008/*"btn_bg_04"*/;
      }
      UISprite__set_spriteName(v16, (System_String_o *)*v18, 0LL);
      if ( (__int64)++v13 >= size )
        return;
      filterBtnSpriteList = v2->fields.filterBtnSpriteList;
      v14 = (__int64)v13 < v12;
    }
    while ( filterBtnSpriteList );
LABEL_28:
    sub_B0D97C(this);
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
  if ( (byte_4213A9C & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, sort);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__, v7);
    this = (PresentBoxFilterSelectMenu_o *)sub_B0D8A4(
                                             &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
                                             v8);
    byte_4213A9C = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_24;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_24;
  size = categoryFilterKindList->fields._size;
  v12 = rarityFilterKindList->fields._size;
  this = (PresentBoxFilterSelectMenu_o *)sub_B0D8BC(bool___TypeInfo, (unsigned int)(v12 + size));
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_32845288(
                                               sort,
                                               v15->fields._items->m_Items[v14 + 1],
                                               0LL);
      if ( !v13 )
        break;
      if ( v14 >= v13->max_length )
      {
LABEL_25:
        v21 = sub_B0D9A8(this);
        sub_B0D948(v21, 0LL);
      }
      v13->m_Items[v14++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v14 >= size )
        goto LABEL_14;
    }
LABEL_24:
    sub_B0D97C(this);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_32845348(
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

  if ( (byte_4213A90 & 1) == 0 )
  {
    sub_B0D8A4(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4213A90 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_B0DC70(v7);
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

  if ( (byte_4213A91 & 1) == 0 )
  {
    sub_B0D8A4(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4213A91 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_B0DC70(v7);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_42121A7 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_42121A7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PresentBoxFilterSelectMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  PresentBoxFilterSelectMenu_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(_4__this, this->fields.kind, 0LL);
}