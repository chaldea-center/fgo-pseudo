void __fastcall PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  ListViewSort_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v39; // x20
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  if ( (byte_42E844F & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UISprite___ctor__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_UISprite__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo, v29, v30, v31);
    byte_42E844F = 1;
  }
  v32 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor(v32, 3, 0, 0LL);
  this->fields.presentBoxSortInfo = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.presentBoxSortInfo,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v39,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v39 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    0,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    7,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    8,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    9,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    10,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    11,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    12,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    14,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v39,
    13,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKindList,
    (System_Int32_array **)v39,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v48,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v48 )
LABEL_9:
    sub_B5D69C(v40, v41);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v48,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v48,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v48,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v48,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v48,
    0,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rarityFilterKindList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v55;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.filterBtnSpriteList,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PresentBoxFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_24670524(this, 0LL, v2);
}


void __fastcall PresentBoxFilterSelectMenu__Close_24670524(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E8444 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PresentBoxFilterSelectMenu_EndClose__, v10, v11, v12);
    byte_42E8444 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  UnityEngine_GameObject_o *categoryGrid; // x0
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  __int64 size; // x24
  __int64 v59; // x25
  __int64 v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct UnityEngine_GameObject_o *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v68; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UISprite__o *filterBtnSpriteList; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v71; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x22
  EventDelegate_Callback_o *v73; // x23
  EventDelegate_o *v74; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v75; // x22
  UILabel_o *v76; // x20
  __int64 v77; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  __int64 v79; // x24
  __int64 v80; // x25
  __int64 v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct UnityEngine_GameObject_o *templateRarityButton; // x21
  UnityEngine_GameObject_o *v89; // x21
  UnityEngine_GameObject_o *v90; // x0
  struct System_Collections_Generic_List_UISprite__o *v91; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v92; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x22
  EventDelegate_Callback_o *v94; // x23
  EventDelegate_o *v95; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v96; // x22
  UILabel_o *v97; // x20
  __int64 v98; // x8

  if ( (byte_42E8445 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UILabel___, v5, v6, v7);
    sub_B5D5C4(&EventDelegate_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIGrid___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UISprite__Add__, v23, v24, v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__, v44, v45, v46);
    sub_B5D5C4(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__, v50, v51, v52);
    sub_B5D5C4(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo, v53, v54, v55);
    byte_42E8445 = 1;
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
      v59 = 8LL;
      while ( 1 )
      {
        v60 = sub_B5D694(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
        PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *)v60,
          0LL);
        if ( !v60 )
          break;
        *(_QWORD *)(v60 + 24) = this;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v60 + 24),
          (System_Int32_array **)this,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66);
        templateCategoryButton = this->fields.templateCategoryButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)templateCategoryButton,
                                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v68 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_32436524(gameObject, this->fields.categoryGrid, 0LL);
        UnityEngine_GameObject__SetActive(v68, 1, 0LL);
        filterBtnSpriteList = this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v68,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)filterBtnSpriteList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)categoryGrid,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v71 = this->fields.categoryFilterKindList;
        if ( !v71 )
          break;
        if ( v59 - 8 >= (unsigned __int64)(unsigned int)v71->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        *(_DWORD *)(v60 + 16) = *((_DWORD *)&v71->fields._items->obj.klass + v59);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v68,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)categoryGrid[4].klass;
        v73 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v73,
          (Il2CppObject *)v60,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0LL);
        v74 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
        EventDelegate___ctor_29822308(v74, v73, 0LL);
        if ( !klass )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v68, 0, 0LL);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v75 = this->fields.categoryFilterKindList;
        if ( !v75 )
          break;
        v76 = (UILabel_o *)categoryGrid;
        if ( v59 - 8 >= (unsigned __int64)(unsigned int)v75->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     this->fields.operationSortInfo,
                                                     *((_DWORD *)&v75->fields._items->obj.klass + v59),
                                                     0LL);
        if ( !v76 )
          break;
        UILabel__set_text(v76, (System_String_o *)categoryGrid, 0LL);
        v77 = v59 - 7;
        ++v59;
        if ( v77 >= size )
          goto LABEL_27;
      }
LABEL_57:
      sub_B5D69C(categoryGrid, method);
    }
LABEL_27:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_57;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 categoryGrid,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    v79 = rarityFilterKindList->fields._size;
    if ( (int)v79 >= 1 )
    {
      v80 = 8LL;
      do
      {
        v81 = sub_B5D694(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
        PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *)v81,
          0LL);
        if ( !v81 )
          goto LABEL_57;
        *(_QWORD *)(v81 + 24) = this;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v81 + 24),
          (System_Int32_array **)this,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87);
        templateRarityButton = this->fields.templateRarityButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)templateRarityButton,
                                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_57;
        v89 = categoryGrid;
        v90 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_32436524(v90, this->fields.rarityGrid, 0LL);
        UnityEngine_GameObject__SetActive(v89, 1, 0LL);
        v91 = this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v89,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v91 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v91,
          (EventMissionProgressRequest_Argument_ProgressData_o *)categoryGrid,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v92 = this->fields.rarityFilterKindList;
        if ( !v92 )
          goto LABEL_57;
        if ( v80 - 8 >= (unsigned __int64)(unsigned int)v92->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        *(_DWORD *)(v81 + 16) = *((_DWORD *)&v92->fields._items->obj.klass + v80);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v89,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_57;
        v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)categoryGrid[4].klass;
        v94 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v94,
          (Il2CppObject *)v81,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0LL);
        v95 = (EventDelegate_o *)sub_B5D694(EventDelegate_TypeInfo);
        EventDelegate___ctor_29822308(v95, v94, 0LL);
        if ( !v93 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v93,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v95,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v89, 0, 0LL);
        if ( !categoryGrid )
          goto LABEL_57;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v96 = this->fields.rarityFilterKindList;
        if ( !v96 )
          goto LABEL_57;
        v97 = (UILabel_o *)categoryGrid;
        if ( v80 - 8 >= (unsigned __int64)(unsigned int)v96->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !this->fields.operationSortInfo )
          goto LABEL_57;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     this->fields.operationSortInfo,
                                                     *((_DWORD *)&v96->fields._items->obj.klass + v80),
                                                     0LL);
        if ( !v97 )
          goto LABEL_57;
        UILabel__set_text(v97, (System_String_o *)categoryGrid, 0LL);
        v98 = v80 - 7;
        ++v80;
      }
      while ( v98 < v79 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_57;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 categoryGrid,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    sub_B5D69C(v4, v5);
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
      v11 = sub_B5D6C8(v4);
      sub_B5D668(v11, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x23
  signed __int64 size; // x21
  unsigned __int64 v21; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x23
  signed __int64 v23; // x21
  unsigned __int64 v24; // x22

  if ( (byte_42E8449 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E8449 = 1;
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
      v21 = 0LL;
      do
      {
        if ( v21 >= (unsigned int)categoryFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_34051768(
          this->fields.operationSortInfo,
          categoryFilterKindList->fields._items->m_Items[++v21],
          1,
          0LL);
        if ( (__int64)v21 >= size )
          goto LABEL_17;
        categoryFilterKindList = this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_25:
      sub_B5D69C(v17, v18);
    }
LABEL_17:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_25;
    v23 = rarityFilterKindList->fields._size;
    if ( (int)v23 >= 1 )
    {
      v24 = 0LL;
      do
      {
        if ( v24 >= (unsigned int)rarityFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_34051832(
          this->fields.operationSortInfo,
          rarityFilterKindList->fields._items->m_Items[++v24],
          1,
          0LL);
        if ( (__int64)v24 >= v23 )
          goto LABEL_26;
        rarityFilterKindList = this->fields.rarityFilterKindList;
      }
      while ( rarityFilterKindList );
      goto LABEL_25;
    }
LABEL_26:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v18);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickCancel(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E8448 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8448 = 1;
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
    PresentBoxFilterSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickDecide(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PresentBoxFilterSelectMenu_o *v4; // x19
  struct UIScrollView_o *filterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x2
  float value; // s0
  const MethodInfo *v9; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_42E8447 & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8447 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    filterScrollView = v4->fields.filterScrollView;
    if ( !filterScrollView )
      goto LABEL_13;
    this = *(PresentBoxFilterSelectMenu_o **)&filterScrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v4->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    PresentBoxFilterSelectMenu__SetButtonEnable(v4, 0, v7);
    v4->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (PresentBoxFilterSelectMenu_o *)v4->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_B5D69C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v4->fields.operationSortInfo, 0LL);
    IsChangedStatus = PresentBoxFilterSelectMenu__IsChangedStatus(v4, v9);
    PresentBoxFilterSelectMenu__Callback(v4, IsChangedStatus, v11);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_42E844B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, kind, (_DWORD)method, v3);
    byte_42E844B = 1;
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
      sub_B5D69C(0LL, v6);
    ListViewSort__SwitchFilter_34052800(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v8);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickInitialize(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x23
  signed __int64 size; // x21
  unsigned __int64 v21; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x23
  signed __int64 v23; // x21
  unsigned __int64 v24; // x22

  if ( (byte_42E844A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E844A = 1;
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
      v21 = 0LL;
      do
      {
        if ( v21 >= (unsigned int)categoryFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_34051768(
          this->fields.operationSortInfo,
          categoryFilterKindList->fields._items->m_Items[++v21],
          0,
          0LL);
        if ( (__int64)v21 >= size )
          goto LABEL_17;
        categoryFilterKindList = this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_25:
      sub_B5D69C(v17, v18);
    }
LABEL_17:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_25;
    v23 = rarityFilterKindList->fields._size;
    if ( (int)v23 >= 1 )
    {
      v24 = 0LL;
      do
      {
        if ( v24 >= (unsigned int)rarityFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_34051832(
          this->fields.operationSortInfo,
          rarityFilterKindList->fields._items->m_Items[++v24],
          0,
          0LL);
        if ( (__int64)v24 >= v23 )
          goto LABEL_26;
        rarityFilterKindList = this->fields.rarityFilterKindList;
      }
      while ( rarityFilterKindList );
      goto LABEL_25;
    }
LABEL_26:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v18);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickRarityFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_42E844C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, kind, (_DWORD)method, v3);
    byte_42E844C = 1;
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
      sub_B5D69C(0LL, v6);
    ListViewSort__SwitchFilter_34052868(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v8);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_42E844E & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E844E = 1;
  }
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_B5D69C(0LL, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  struct ListViewSort_o *presentBoxSortInfo; // x8
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  const MethodInfo *v54; // x2
  System_Int32_array **v55; // x1
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v64; // x22
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *categoryFilterTitle; // x21
  UILabel_o *rarityFilterTitle; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x2
  struct UIScrollView_o *filterScrollView; // x9
  System_Action_o *v83; // x20

  v6 = this;
  if ( (byte_42E8443 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)sort, (_DWORD)callback, method);
    sub_B5D5C4(&ListViewSort_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_PresentBoxFilterSelectMenu_EndOpen__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12089/*"SERVANT_SORT_RESET"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10606/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_12091/*"SERVANT_SORT_TITLE2"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_10584/*"PRESENT_BOX_FILTER_EXPLANATION"*/, v34, v35, v36);
    this = (PresentBoxFilterSelectMenu_o *)sub_B5D5C4(&StringLiteral_10605/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/, v37, v38, v39);
    byte_42E8443 = 1;
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
        sub_B5D560(
          (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
          (System_Int32_array **)callback,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        if ( sort )
        {
          p_baseSortInfo = &v6->fields.baseSortInfo;
          v6->fields.baseSortInfo = sort;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v6->fields.baseSortInfo,
            (System_Int32_array **)sort,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
        }
        else
        {
          v55 = (System_Int32_array **)v6->fields.presentBoxSortInfo;
          p_baseSortInfo = &v6->fields.baseSortInfo;
          v6->fields.baseSortInfo = (struct ListViewSort_o *)v55;
          sub_B5D560((BattleServantConfConponent_o *)&v6->fields.baseSortInfo, v55, v47, v48, v49, v50, v51, v52);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_26;
          ListViewSort__Load((ListViewSort_o *)this, 0LL);
        }
        v56 = (System_Int32_array **)PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v54);
        v6->fields.kindStatus = (struct System_Boolean_array *)v56;
        sub_B5D560((BattleServantConfConponent_o *)&v6->fields.kindStatus, v56, v57, v58, v59, v60, v61, v62);
        baseSortInfo = v6->fields.baseSortInfo;
        v64 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
        ListViewSort___ctor_34029496(v64, baseSortInfo, 0LL);
        v6->fields.operationSortInfo = v64;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v6->fields.operationSortInfo,
          (System_Int32_array **)v64,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
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
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10584/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10605/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/,
                                                       0LL);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0LL);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10606/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0LL);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0LL);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0LL);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/,
                                                             0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0LL);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/,
                                                               0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0LL);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12089/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0LL);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v79);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v80);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v81);
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
                                v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v83,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)v6, v83, 0, 0LL);
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
    sub_B5D69C(this, sort);
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
    sub_B5D69C(decideButton, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isEnable, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__SetButtonSelect(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PresentBoxFilterSelectMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_UISprite__o *filterBtnSpriteList; // x20
  signed __int64 size; // x22
  __int64 v26; // x24
  unsigned __int64 v27; // x23
  bool v28; // w28
  struct ListViewSort_o *operationSortInfo; // x21
  UISprite_o *v30; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v31; // x28
  __int64 *v32; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x28

  v4 = this;
  if ( (byte_42E8446 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UISprite__get_Count__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UISprite__get_Item__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v17, v18, v19);
    this = (PresentBoxFilterSelectMenu_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v20, v21, v22);
    byte_42E8446 = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_28;
  filterBtnSpriteList = v4->fields.filterBtnSpriteList;
  if ( !filterBtnSpriteList )
    goto LABEL_28;
  size = filterBtnSpriteList->fields._size;
  if ( (int)size >= 1 )
  {
    v26 = categoryFilterKindList->fields._size;
    v27 = 0LL;
    v28 = (int)v26 > 0;
    do
    {
      if ( v27 >= (unsigned int)filterBtnSpriteList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      operationSortInfo = v4->fields.operationSortInfo;
      v30 = filterBtnSpriteList->fields._items->m_Items[v27];
      if ( v28 )
      {
        v31 = v4->fields.categoryFilterKindList;
        if ( !v31 )
          break;
        if ( v27 >= (unsigned int)v31->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !operationSortInfo )
          break;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_34050856(
                                                 v4->fields.operationSortInfo,
                                                 v31->fields._items->m_Items[v27 + 1],
                                                 0LL);
        if ( !v30 )
          break;
        if ( ((unsigned __int8)this & 1) != 0 )
          v32 = &StringLiteral_17165/*"btn_bg_03"*/;
        else
          v32 = &StringLiteral_17166/*"btn_bg_04"*/;
      }
      else
      {
        rarityFilterKindList = v4->fields.rarityFilterKindList;
        if ( !rarityFilterKindList )
          break;
        if ( rarityFilterKindList->fields._size <= (unsigned int)(v27 - v26) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !operationSortInfo )
          break;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_34050916(
                                                 v4->fields.operationSortInfo,
                                                 rarityFilterKindList->fields._items->m_Items[(int)v27 - (int)v26 + 1],
                                                 0LL);
        if ( !v30 )
          break;
        if ( ((unsigned __int8)this & 1) != 0 )
          v32 = &StringLiteral_17165/*"btn_bg_03"*/;
        else
          v32 = &StringLiteral_17166/*"btn_bg_04"*/;
      }
      UISprite__set_spriteName(v30, (System_String_o *)*v32, 0LL);
      if ( (__int64)++v27 >= size )
        return;
      filterBtnSpriteList = v4->fields.filterBtnSpriteList;
      v28 = (__int64)v27 < v26;
    }
    while ( filterBtnSpriteList );
LABEL_28:
    sub_B5D69C(this, method);
  }
}


System_Boolean_array *__fastcall PresentBoxFilterSelectMenu__SetKindStatus(
        PresentBoxFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PresentBoxFilterSelectMenu_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x9
  signed __int64 size; // x23
  signed __int64 v21; // x22
  System_Boolean_array *v22; // x21
  unsigned __int64 v23; // x24
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v24; // x26
  unsigned __int64 v25; // x24
  signed __int64 i; // x25
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v27; // x27
  char *v28; // x9
  __int64 v30; // x0

  v5 = this;
  if ( (byte_42E844D & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__,
      v12,
      v13,
      v14);
    this = (PresentBoxFilterSelectMenu_o *)sub_B5D5C4(
                                             &Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__,
                                             v15,
                                             v16,
                                             v17);
    byte_42E844D = 1;
  }
  categoryFilterKindList = v5->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_24;
  rarityFilterKindList = v5->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_24;
  size = categoryFilterKindList->fields._size;
  v21 = rarityFilterKindList->fields._size;
  this = (PresentBoxFilterSelectMenu_o *)sub_B5D5DC(bool___TypeInfo, (unsigned int)(v21 + size));
  v22 = (System_Boolean_array *)this;
  if ( (int)size >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      v24 = v5->fields.categoryFilterKindList;
      if ( !v24 )
        break;
      if ( v23 >= (unsigned int)v24->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_34050856(
                                               sort,
                                               v24->fields._items->m_Items[v23 + 1],
                                               0LL);
      if ( !v22 )
        break;
      if ( v23 >= v22->max_length )
      {
LABEL_25:
        v30 = sub_B5D6C8(this);
        sub_B5D668(v30, 0LL);
      }
      v22->m_Items[v23++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v23 >= size )
        goto LABEL_14;
    }
LABEL_24:
    sub_B5D69C(this, sort);
  }
LABEL_14:
  if ( (int)v21 >= 1 )
  {
    v25 = 0LL;
    for ( i = (unsigned __int64)(unsigned int)size << 32; ; i += 0x100000000LL )
    {
      v27 = v5->fields.rarityFilterKindList;
      if ( !v27 )
        break;
      if ( v25 >= (unsigned int)v27->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_34050916(
                                               sort,
                                               v27->fields._items->m_Items[v25 + 1],
                                               0LL);
      if ( !v22 )
        break;
      if ( (unsigned int)size + v25 >= v22->max_length )
        goto LABEL_25;
      ++v25;
      v28 = (char *)v22 + (i >> 32);
      v28[32] = (unsigned __int8)this & 1;
      if ( (__int64)v25 >= v21 )
        return v22;
    }
    goto LABEL_24;
  }
  return v22;
}


void __fastcall PresentBoxFilterSelectMenu__add_callbackFunc(
        PresentBoxFilterSelectMenu_o *this,
        PresentBoxFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PresentBoxFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxFilterSelectMenu_o *v11; // x0
  PresentBoxFilterSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E8441 & 1) == 0 )
  {
    sub_B5D5C4(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8441 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v8->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxFilterSelectMenu_o *)sub_B5D990(v8);
  PresentBoxFilterSelectMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PresentBoxFilterSelectMenu__remove_callbackFunc(
        PresentBoxFilterSelectMenu_o *this,
        PresentBoxFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PresentBoxFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxFilterSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E8442 & 1) == 0 )
  {
    sub_B5D5C4(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8442 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentBoxFilterSelectMenu_CallbackFunc_c *)v8->klass != PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxFilterSelectMenu_o *)sub_B5D990(v8);
  PresentBoxFilterSelectMenu__Init(v11, v12);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5AB2 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5AB2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PresentBoxFilterSelectMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(_4__this, this->fields.kind, 0LL);
}