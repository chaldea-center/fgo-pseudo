void __fastcall PresentBoxFilterSelectMenu___ctor(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42AF838 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
    sub_B52984(&System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_UISprite__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
    byte_42AF838 = 1;
  }
  v3 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor(v3, 3, 0, 0LL);
  this->fields.presentBoxSortInfo = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.presentBoxSortInfo,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind___ctor__);
  if ( !v10 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    0,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    1,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    2,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    4,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    5,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    6,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    7,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    8,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    9,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    10,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    11,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    12,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    14,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    13,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__Add__);
  this->fields.categoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKindList,
    (System_Int32_array **)v10,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v19,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind___ctor__);
  if ( !v19 )
LABEL_9:
    sub_B52A5C(v11, v12);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    4,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    2,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    1,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    0,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__Add__);
  this->fields.rarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *)v19;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.rarityFilterKindList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UISprite__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UISprite___ctor__);
  this->fields.filterBtnSpriteList = (struct System_Collections_Generic_List_UISprite__o *)v26;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.filterBtnSpriteList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PresentBoxFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PresentBoxFilterSelectMenu__Close(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxFilterSelectMenu__Close_24265800(this, 0LL, v2);
}


void __fastcall PresentBoxFilterSelectMenu__Close_24265800(
        PresentBoxFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42AF82D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PresentBoxFilterSelectMenu_EndClose__);
    byte_42AF82D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PresentBoxFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
  UnityEngine_GameObject_o *categoryGrid; // x0
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  __int64 size; // x24
  __int64 v6; // x25
  __int64 v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UnityEngine_GameObject_o *templateCategoryButton; // x21
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UISprite__o *filterBtnSpriteList; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v18; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *klass; // x22
  EventDelegate_Callback_o *v20; // x23
  EventDelegate_o *v21; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v22; // x22
  UILabel_o *v23; // x20
  __int64 v24; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x8
  __int64 v26; // x24
  __int64 v27; // x25
  __int64 v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UnityEngine_GameObject_o *templateRarityButton; // x21
  UnityEngine_GameObject_o *v36; // x21
  UnityEngine_GameObject_o *v37; // x0
  struct System_Collections_Generic_List_UISprite__o *v38; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v39; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x22
  EventDelegate_Callback_o *v41; // x23
  EventDelegate_o *v42; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v43; // x22
  UILabel_o *v44; // x20
  __int64 v45; // x8

  if ( (byte_42AF82E & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_B52984(&EventDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__);
    sub_B52984(&PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
    sub_B52984(&Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__);
    sub_B52984(&PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
    byte_42AF82E = 1;
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
      v6 = 8LL;
      while ( 1 )
      {
        v7 = sub_B52A54(PresentBoxFilterSelectMenu___c__DisplayClass38_0_TypeInfo);
        PresentBoxFilterSelectMenu___c__DisplayClass38_0___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_0_o *)v7,
          0LL);
        if ( !v7 )
          break;
        *(_QWORD *)(v7 + 24) = this;
        sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
        templateCategoryButton = this->fields.templateCategoryButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)templateCategoryButton,
                                                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          break;
        v15 = categoryGrid;
        gameObject = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_32091088(gameObject, this->fields.categoryGrid, 0LL);
        UnityEngine_GameObject__SetActive(v15, 1, 0LL);
        filterBtnSpriteList = this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v15,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !filterBtnSpriteList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)filterBtnSpriteList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)categoryGrid,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v18 = this->fields.categoryFilterKindList;
        if ( !v18 )
          break;
        if ( v6 - 8 >= (unsigned __int64)(unsigned int)v18->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        *(_DWORD *)(v7 + 16) = *((_DWORD *)&v18->fields._items->obj.klass + v6);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v15,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          break;
        klass = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)categoryGrid[4].klass;
        v20 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v20,
          (Il2CppObject *)v7,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_0__InitDisp_b__0__,
          0LL);
        v21 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
        EventDelegate___ctor_29649660(v21, v20, 0LL);
        if ( !klass )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v15, 0, 0LL);
        if ( !categoryGrid )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v22 = this->fields.categoryFilterKindList;
        if ( !v22 )
          break;
        v23 = (UILabel_o *)categoryGrid;
        if ( v6 - 8 >= (unsigned __int64)(unsigned int)v22->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxFilterKindText(
                                                     this->fields.operationSortInfo,
                                                     *((_DWORD *)&v22->fields._items->obj.klass + v6),
                                                     0LL);
        if ( !v23 )
          break;
        UILabel__set_text(v23, (System_String_o *)categoryGrid, 0LL);
        v24 = v6 - 7;
        ++v6;
        if ( v24 >= size )
          goto LABEL_27;
      }
LABEL_57:
      sub_B52A5C(categoryGrid, method);
    }
LABEL_27:
    categoryGrid = this->fields.categoryGrid;
    if ( !categoryGrid )
      goto LABEL_57;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 categoryGrid,
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    v26 = rarityFilterKindList->fields._size;
    if ( (int)v26 >= 1 )
    {
      v27 = 8LL;
      do
      {
        v28 = sub_B52A54(PresentBoxFilterSelectMenu___c__DisplayClass38_1_TypeInfo);
        PresentBoxFilterSelectMenu___c__DisplayClass38_1___ctor(
          (PresentBoxFilterSelectMenu___c__DisplayClass38_1_o *)v28,
          0LL);
        if ( !v28 )
          goto LABEL_57;
        *(_QWORD *)(v28 + 24) = this;
        sub_B52920(
          (BattleServantConfConponent_o *)(v28 + 24),
          (System_Int32_array **)this,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        templateRarityButton = this->fields.templateRarityButton;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)templateRarityButton,
                                                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !categoryGrid )
          goto LABEL_57;
        v36 = categoryGrid;
        v37 = UnityEngine_GameObject__get_gameObject(categoryGrid, 0LL);
        GameObjectExtensions__SafeSetParent_32091088(v37, this->fields.rarityGrid, 0LL);
        UnityEngine_GameObject__SetActive(v36, 1, 0LL);
        v38 = this->fields.filterBtnSpriteList;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v36,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
        if ( !v38 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v38,
          (EventMissionProgressRequest_Argument_ProgressData_o *)categoryGrid,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UISprite__Add__);
        v39 = this->fields.rarityFilterKindList;
        if ( !v39 )
          goto LABEL_57;
        if ( v27 - 8 >= (unsigned __int64)(unsigned int)v39->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        *(_DWORD *)(v28 + 16) = *((_DWORD *)&v39->fields._items->obj.klass + v27);
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v36,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
        if ( !categoryGrid )
          goto LABEL_57;
        v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)categoryGrid[4].klass;
        v41 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v41,
          (Il2CppObject *)v28,
          Method_PresentBoxFilterSelectMenu___c__DisplayClass38_1__InitDisp_b__1__,
          0LL);
        v42 = (EventDelegate_o *)sub_B52A54(EventDelegate_TypeInfo);
        EventDelegate___ctor_29649660(v42, v41, 0LL);
        if ( !v40 )
          goto LABEL_57;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v40,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventDelegate__Add__);
        categoryGrid = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChild(v36, 0, 0LL);
        if ( !categoryGrid )
          goto LABEL_57;
        categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)categoryGrid,
                                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
        v43 = this->fields.rarityFilterKindList;
        if ( !v43 )
          goto LABEL_57;
        v44 = (UILabel_o *)categoryGrid;
        if ( v27 - 8 >= (unsigned __int64)(unsigned int)v43->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !this->fields.operationSortInfo )
          goto LABEL_57;
        categoryGrid = (UnityEngine_GameObject_o *)ListViewSort__GetPresentBoxRarityFilterKindText(
                                                     this->fields.operationSortInfo,
                                                     *((_DWORD *)&v43->fields._items->obj.klass + v27),
                                                     0LL);
        if ( !v44 )
          goto LABEL_57;
        UILabel__set_text(v44, (System_String_o *)categoryGrid, 0LL);
        v45 = v27 - 7;
        ++v27;
      }
      while ( v45 < v26 );
    }
    categoryGrid = this->fields.rarityGrid;
    if ( !categoryGrid )
      goto LABEL_57;
    categoryGrid = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 categoryGrid,
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
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
    sub_B52A5C(v4, v5);
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
      v11 = sub_B52A88(v4);
      sub_B52A28(v11, 0LL);
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
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x23
  signed __int64 size; // x21
  unsigned __int64 v7; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x23
  signed __int64 v9; // x21
  unsigned __int64 v10; // x22

  if ( (byte_42AF832 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF832 = 1;
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
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)categoryFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_34022044(
          this->fields.operationSortInfo,
          categoryFilterKindList->fields._items->m_Items[++v7],
          1,
          0LL);
        if ( (__int64)v7 >= size )
          goto LABEL_17;
        categoryFilterKindList = this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_25:
      sub_B52A5C(v3, v4);
    }
LABEL_17:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_25;
    v9 = rarityFilterKindList->fields._size;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)rarityFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_34022108(
          this->fields.operationSortInfo,
          rarityFilterKindList->fields._items->m_Items[++v10],
          1,
          0LL);
        if ( (__int64)v10 >= v9 )
          goto LABEL_26;
        rarityFilterKindList = this->fields.rarityFilterKindList;
      }
      while ( rarityFilterKindList );
      goto LABEL_25;
    }
LABEL_26:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v4);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickCancel(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42AF831 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF831 = 1;
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
  if ( (byte_42AF830 & 1) == 0 )
  {
    this = (PresentBoxFilterSelectMenu_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42AF830 = 1;
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
      sub_B52A5C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    IsChangedStatus = PresentBoxFilterSelectMenu__IsChangedStatus(v2, v7);
    PresentBoxFilterSelectMenu__Callback(v2, IsChangedStatus, v9);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42AF834 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF834 = 1;
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
      sub_B52A5C(0LL, v5);
    ListViewSort__SwitchFilter_34023076(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickInitialize(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x23
  signed __int64 size; // x21
  unsigned __int64 v7; // x22
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x23
  signed __int64 v9; // x21
  unsigned __int64 v10; // x22

  if ( (byte_42AF833 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF833 = 1;
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
      v7 = 0LL;
      do
      {
        if ( v7 >= (unsigned int)categoryFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_34022044(
          this->fields.operationSortInfo,
          categoryFilterKindList->fields._items->m_Items[++v7],
          0,
          0LL);
        if ( (__int64)v7 >= size )
          goto LABEL_17;
        categoryFilterKindList = this->fields.categoryFilterKindList;
      }
      while ( categoryFilterKindList );
LABEL_25:
      sub_B52A5C(v3, v4);
    }
LABEL_17:
    rarityFilterKindList = this->fields.rarityFilterKindList;
    if ( !rarityFilterKindList )
      goto LABEL_25;
    v9 = rarityFilterKindList->fields._size;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)rarityFilterKindList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !this->fields.operationSortInfo )
          break;
        ListViewSort__SetFilter_34022108(
          this->fields.operationSortInfo,
          rarityFilterKindList->fields._items->m_Items[++v10],
          0,
          0LL);
        if ( (__int64)v10 >= v9 )
          goto LABEL_26;
        rarityFilterKindList = this->fields.rarityFilterKindList;
      }
      while ( rarityFilterKindList );
      goto LABEL_25;
    }
LABEL_26:
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v4);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnClickRarityFilter(
        PresentBoxFilterSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42AF835 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF835 = 1;
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
      sub_B52A5C(0LL, v5);
    ListViewSort__SwitchFilter_34023144(operationSortInfo, kind, 0LL);
    PresentBoxFilterSelectMenu__SetButtonSelect(this, v7);
  }
}


void __fastcall PresentBoxFilterSelectMenu__OnEnable(PresentBoxFilterSelectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_42AF837 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    byte_42AF837 = 1;
  }
  cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !cancelButton )
    sub_B52A5C(0LL, method);
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
  struct ListViewSort_o *presentBoxSortInfo; // x8
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  const MethodInfo *v21; // x2
  System_Int32_array **v22; // x1
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *categoryFilterTitle; // x21
  UILabel_o *rarityFilterTitle; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x2
  struct UIScrollView_o *filterScrollView; // x9
  System_Action_o *v50; // x20

  v6 = this;
  if ( (byte_42AF82C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_PresentBoxFilterSelectMenu_EndOpen__);
    sub_B52984(&StringLiteral_12032/*"SERVANT_SORT_RESET"*/);
    sub_B52984(&StringLiteral_10562/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/);
    sub_B52984(&StringLiteral_11883/*"SERVANT_SORT_CANCEL"*/);
    sub_B52984(&StringLiteral_11887/*"SERVANT_SORT_DECIDE"*/);
    sub_B52984(&StringLiteral_12034/*"SERVANT_SORT_TITLE2"*/);
    sub_B52984(&StringLiteral_11884/*"SERVANT_SORT_CLEAR"*/);
    sub_B52984(&StringLiteral_10540/*"PRESENT_BOX_FILTER_EXPLANATION"*/);
    this = (PresentBoxFilterSelectMenu_o *)sub_B52984(&StringLiteral_10561/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/);
    byte_42AF82C = 1;
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
        sub_B52920(
          (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
          (System_Int32_array **)callback,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        if ( sort )
        {
          p_baseSortInfo = &v6->fields.baseSortInfo;
          v6->fields.baseSortInfo = sort;
          sub_B52920(
            (BattleServantConfConponent_o *)&v6->fields.baseSortInfo,
            (System_Int32_array **)sort,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
        }
        else
        {
          v22 = (System_Int32_array **)v6->fields.presentBoxSortInfo;
          p_baseSortInfo = &v6->fields.baseSortInfo;
          v6->fields.baseSortInfo = (struct ListViewSort_o *)v22;
          sub_B52920((BattleServantConfConponent_o *)&v6->fields.baseSortInfo, v22, v14, v15, v16, v17, v18, v19);
          this = (PresentBoxFilterSelectMenu_o *)v6->fields.baseSortInfo;
          if ( !this )
            goto LABEL_26;
          ListViewSort__Load((ListViewSort_o *)this, 0LL);
        }
        v23 = (System_Int32_array **)PresentBoxFilterSelectMenu__SetKindStatus(v6, sort, v21);
        v6->fields.kindStatus = (struct System_Boolean_array *)v23;
        sub_B52920((BattleServantConfConponent_o *)&v6->fields.kindStatus, v23, v24, v25, v26, v27, v28, v29);
        baseSortInfo = v6->fields.baseSortInfo;
        v31 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
        ListViewSort___ctor_33999772(v31, baseSortInfo, 0LL);
        v6->fields.operationSortInfo = v31;
        sub_B52920(
          (BattleServantConfConponent_o *)&v6->fields.operationSortInfo,
          (System_Int32_array **)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
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
          this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)this, 0LL);
            explanationLabel = v6->fields.explanationLabel;
            this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10540/*"PRESENT_BOX_FILTER_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
              categoryFilterTitle = v6->fields.categoryFilterTitle;
              this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10561/*"PRESENT_BOX_FILTER_TITLE_CATEGORY"*/,
                                                       0LL);
              if ( categoryFilterTitle )
              {
                UILabel__set_text(categoryFilterTitle, (System_String_o *)this, 0LL);
                rarityFilterTitle = v6->fields.rarityFilterTitle;
                this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_10562/*"PRESENT_BOX_FILTER_TITLE_RARITY"*/,
                                                         0LL);
                if ( rarityFilterTitle )
                {
                  UILabel__set_text(rarityFilterTitle, (System_String_o *)this, 0LL);
                  decideLabel = v6->fields.decideLabel;
                  this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11887/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                  if ( decideLabel )
                  {
                    UILabel__set_text(decideLabel, (System_String_o *)this, 0LL);
                    clearLabel = v6->fields.clearLabel;
                    this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11884/*"SERVANT_SORT_CLEAR"*/,
                                                             0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)this, 0LL);
                      cancelLabel = v6->fields.cancelLabel;
                      this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11883/*"SERVANT_SORT_CANCEL"*/,
                                                               0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)this, 0LL);
                        initializeLabel = v6->fields.initializeLabel;
                        this = (PresentBoxFilterSelectMenu_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12032/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                        if ( initializeLabel )
                        {
                          UILabel__set_text(initializeLabel, (System_String_o *)this, 0LL);
                          PresentBoxFilterSelectMenu__InitDisp(v6, v46);
                          PresentBoxFilterSelectMenu__SetButtonSelect(v6, v47);
                          PresentBoxFilterSelectMenu__SetButtonEnable(v6, 1, v48);
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
                                v50 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                System_Action___ctor(
                                  v50,
                                  (Il2CppObject *)v6,
                                  Method_PresentBoxFilterSelectMenu_EndOpen__,
                                  0LL);
                                BaseDialog__Open((BaseDialog_o *)v6, v50, 0, 0LL);
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
    sub_B52A5C(this, sort);
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
    sub_B52A5C(decideButton, isEnable);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideButton, isEnable, 0LL);
}


void __fastcall PresentBoxFilterSelectMenu__SetButtonSelect(
        PresentBoxFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v2; // x19
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_UISprite__o *filterBtnSpriteList; // x20
  signed __int64 size; // x22
  __int64 v6; // x24
  unsigned __int64 v7; // x23
  bool v8; // w28
  struct ListViewSort_o *operationSortInfo; // x21
  UISprite_o *v10; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v11; // x28
  __int64 *v12; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x28

  v2 = this;
  if ( (byte_42AF82F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_B52984(&StringLiteral_17075/*"btn_bg_04"*/);
    this = (PresentBoxFilterSelectMenu_o *)sub_B52984(&StringLiteral_17074/*"btn_bg_03"*/);
    byte_42AF82F = 1;
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
    v6 = categoryFilterKindList->fields._size;
    v7 = 0LL;
    v8 = (int)v6 > 0;
    do
    {
      if ( v7 >= (unsigned int)filterBtnSpriteList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      operationSortInfo = v2->fields.operationSortInfo;
      v10 = filterBtnSpriteList->fields._items->m_Items[v7];
      if ( v8 )
      {
        v11 = v2->fields.categoryFilterKindList;
        if ( !v11 )
          break;
        if ( v7 >= (unsigned int)v11->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !operationSortInfo )
          break;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_34021132(
                                                 v2->fields.operationSortInfo,
                                                 v11->fields._items->m_Items[v7 + 1],
                                                 0LL);
        if ( !v10 )
          break;
        if ( ((unsigned __int8)this & 1) != 0 )
          v12 = &StringLiteral_17074/*"btn_bg_03"*/;
        else
          v12 = &StringLiteral_17075/*"btn_bg_04"*/;
      }
      else
      {
        rarityFilterKindList = v2->fields.rarityFilterKindList;
        if ( !rarityFilterKindList )
          break;
        if ( rarityFilterKindList->fields._size <= (unsigned int)(v7 - v6) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        if ( !operationSortInfo )
          break;
        this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_34021192(
                                                 v2->fields.operationSortInfo,
                                                 rarityFilterKindList->fields._items->m_Items[(int)v7 - (int)v6 + 1],
                                                 0LL);
        if ( !v10 )
          break;
        if ( ((unsigned __int8)this & 1) != 0 )
          v12 = &StringLiteral_17074/*"btn_bg_03"*/;
        else
          v12 = &StringLiteral_17075/*"btn_bg_04"*/;
      }
      UISprite__set_spriteName(v10, (System_String_o *)*v12, 0LL);
      if ( (__int64)++v7 >= size )
        return;
      filterBtnSpriteList = v2->fields.filterBtnSpriteList;
      v8 = (__int64)v7 < v6;
    }
    while ( filterBtnSpriteList );
LABEL_28:
    sub_B52A5C(this, method);
  }
}


System_Boolean_array *__fastcall PresentBoxFilterSelectMenu__SetKindStatus(
        PresentBoxFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PresentBoxFilterSelectMenu_o *v4; // x20
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *categoryFilterKindList; // x8
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *rarityFilterKindList; // x9
  signed __int64 size; // x23
  signed __int64 v8; // x22
  System_Boolean_array *v9; // x21
  unsigned __int64 v10; // x24
  struct System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__o *v11; // x26
  unsigned __int64 v12; // x24
  signed __int64 i; // x25
  struct System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__o *v14; // x27
  char *v15; // x9
  __int64 v17; // x0

  v4 = this;
  if ( (byte_42AF836 & 1) == 0 )
  {
    sub_B52984(&bool___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxCategoryFilterKind__get_Item__);
    this = (PresentBoxFilterSelectMenu_o *)sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PresentBoxRarityFilterKind__get_Item__);
    byte_42AF836 = 1;
  }
  categoryFilterKindList = v4->fields.categoryFilterKindList;
  if ( !categoryFilterKindList )
    goto LABEL_24;
  rarityFilterKindList = v4->fields.rarityFilterKindList;
  if ( !rarityFilterKindList )
    goto LABEL_24;
  size = categoryFilterKindList->fields._size;
  v8 = rarityFilterKindList->fields._size;
  this = (PresentBoxFilterSelectMenu_o *)sub_B5299C(bool___TypeInfo, (unsigned int)(v8 + size));
  v9 = (System_Boolean_array *)this;
  if ( (int)size >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = v4->fields.categoryFilterKindList;
      if ( !v11 )
        break;
      if ( v10 >= (unsigned int)v11->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_34021132(
                                               sort,
                                               v11->fields._items->m_Items[v10 + 1],
                                               0LL);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
      {
LABEL_25:
        v17 = sub_B52A88(this);
        sub_B52A28(v17, 0LL);
      }
      v9->m_Items[v10++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v10 >= size )
        goto LABEL_14;
    }
LABEL_24:
    sub_B52A5C(this, sort);
  }
LABEL_14:
  if ( (int)v8 >= 1 )
  {
    v12 = 0LL;
    for ( i = (unsigned __int64)(unsigned int)size << 32; ; i += 0x100000000LL )
    {
      v14 = v4->fields.rarityFilterKindList;
      if ( !v14 )
        break;
      if ( v12 >= (unsigned int)v14->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !sort )
        break;
      this = (PresentBoxFilterSelectMenu_o *)ListViewSort__GetFilter_34021192(
                                               sort,
                                               v14->fields._items->m_Items[v12 + 1],
                                               0LL);
      if ( !v9 )
        break;
      if ( (unsigned int)size + v12 >= v9->max_length )
        goto LABEL_25;
      ++v12;
      v15 = (char *)v9 + (i >> 32);
      v15[32] = (unsigned __int8)this & 1;
      if ( (__int64)v12 >= v8 )
        return v9;
    }
    goto LABEL_24;
  }
  return v9;
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

  if ( (byte_42AF82A & 1) == 0 )
  {
    sub_B52984(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_42AF82A = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_B52D50(v7);
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

  if ( (byte_42AF82B & 1) == 0 )
  {
    sub_B52984(&PresentBoxFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_42AF82B = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PresentBoxFilterSelectMenu_o *)sub_B52D50(v7);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD43E & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD43E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall PresentBoxFilterSelectMenu_CallbackFunc__EndInvoke(
        PresentBoxFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
  PresentBoxFilterSelectMenu__OnClickRarityFilter(_4__this, this->fields.kind, 0LL);
}