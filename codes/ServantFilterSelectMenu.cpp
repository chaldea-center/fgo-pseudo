void __fastcall ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A49806 & 1) == 0 )
  {
    sub_1B863B8(&ListViewSort_TypeInfo, v1);
    sub_1B863B8(&ServantFilterSelectMenu_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_12508/*"ServantFilterSelect1"*/, v3);
    byte_4A49806 = 1;
  }
  v4 = (ListViewSort_o *)sub_1B86604(ListViewSort_TypeInfo);
  ListViewSort___ctor_41808980(v4, (System_String_o *)StringLiteral_12508/*"ServantFilterSelect1"*/, 3, 0, 0LL);
  ServantFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v4;
  sub_1B8635C((CGThumbnailListItem_o *)ServantFilterSelectMenu_TypeInfo->static_fields, (int32_t)v4, v5, v6);
}


void __fastcall ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A49805 & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v5);
    sub_1B863B8(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v6);
    byte_4A49805 = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v7;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.useFilterKindList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.useFilterButtonList, (int32_t)v10, v11, v12);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu__Callback(
        ServantFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ServantFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B8635C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v5; // x1
  ListViewManager_o *warningLabel; // x0
  _BOOL4 v7; // w20
  float v8; // s0
  float v9; // s3
  float v10; // s1
  float v11; // s2

  if ( (byte_4A49802 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A49802 = 1;
  }
  if ( (unsigned int)(this->fields.kind - 5) <= 1 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
    {
      warningLabel = this->fields.listViewManager;
      if ( !warningLabel )
        goto LABEL_19;
      v7 = ListViewManager__GetMatchItemCount(warningLabel, this->fields.operationSortInfo, 0LL) == 0;
    }
    else
    {
      v7 = 0;
    }
    warningLabel = (ListViewManager_o *)this->fields.warningLabel;
    if ( warningLabel )
    {
      warningLabel = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)warningLabel,
                                            0LL);
      if ( warningLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, v7, 0LL);
        warningLabel = (ListViewManager_o *)this->fields.decideButton;
        if ( warningLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningLabel, !v7, 0LL);
          warningLabel = (ListViewManager_o *)this->fields.decideButton;
          if ( warningLabel )
          {
            warningLabel = (ListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)warningLabel,
                                                  (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            v8 = 1.0;
            if ( v7 )
              v8 = 0.5;
            if ( warningLabel )
            {
              v9 = 1.0;
              v10 = v8;
              v11 = v8;
              UIWidget__set_color((UIWidget_o *)warningLabel, *(UnityEngine_Color_o *)&v8, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1B86614(warningLabel, v5);
  }
}


void __fastcall ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_31716388(this, 0LL, v2);
}


void __fastcall ServantFilterSelectMenu__Close_31716388(
        ServantFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4A497EB & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_ServantFilterSelectMenu_EndClose__, v5);
    byte_4A497EB = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall ServantFilterSelectMenu__EndClose(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall ServantFilterSelectMenu__EndOpen(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


ListViewSort_o *__fastcall ServantFilterSelectMenu__GetServantFilterInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4A497E9 & 1) == 0 )
  {
    sub_1B863B8(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_4A497E9 = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B86614(0LL, v1);
  ListViewSort__Load(commonServantSortInfo, 0LL);
  return ServantFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo;
}


void __fastcall ServantFilterSelectMenu__Init(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu__InitCategoryContainer(
        ServantFilterSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
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
  __int64 v19; // x20
  __int64 Int32Enum; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Int32Enum_array **v24; // x19
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_IEnumerable_TSource__o *categoryContainerList; // x22
  ServantFilterSelectMenu___c_c *v27; // x0
  System_Func_T__TResult__o *_9__63_0; // x23
  Il2CppObject *v29; // x24
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x22
  System_Func_T__TResult__o *v34; // x23
  int v35; // w20
  struct ServantFilterSelectMenu_FilterContainer_o *v36; // x8
  struct UnityEngine_Vector3_StaticFields *v37; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v41; // x22
  __int64 v42; // x0
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t current; // w1
  UnityEngine_Component_o **v47; // x21
  System_Int32Enum_array *v48; // x23
  System_Func_T__TResult__o *v49; // x24
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  bool v52; // w8
  ServantFilterCategoryContainer_o *v53; // x0
  __int64 v54; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A497F9 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___, categoryKindKist);
    sub_1B863B8(&Method_System_Linq_Enumerable_Last_ListViewSort_FilterCategoryKind___, v5);
    sub_1B863B8(
      &Method_System_Linq_Enumerable_Select_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind___,
      v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v9);
    sub_1B863B8(&System_Func_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind__TypeInfo, v10);
    sub_1B863B8(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v12);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitCategoryContainer_b__63_0__, v13);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__DisplayClass63_0__InitCategoryContainer_b__1__, v14);
    sub_1B863B8(&ServantFilterSelectMenu___c__DisplayClass63_0_TypeInfo, v15);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__DisplayClass63_1__InitCategoryContainer_b__2__, v16);
    sub_1B863B8(&ServantFilterSelectMenu___c__DisplayClass63_1_TypeInfo, v17);
    sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v18);
    byte_4A497F9 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v19 = sub_1B86604(ServantFilterSelectMenu___c__DisplayClass63_0_TypeInfo);
  ServantFilterSelectMenu___c__DisplayClass63_0___ctor((ServantFilterSelectMenu___c__DisplayClass63_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_29;
  *(_QWORD *)(v19 + 16) = categoryKindKist;
  v24 = (System_Int32Enum_array **)(v19 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v19 + 16), (int32_t)categoryKindKist, v22, v23);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_29;
  categoryContainerList = (System_Collections_Generic_IEnumerable_TSource__o *)currentFilterContainer->fields.categoryContainerList;
  v27 = ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v27 = ServantFilterSelectMenu___c_TypeInfo;
  }
  _9__63_0 = (System_Func_T__TResult__o *)v27->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ServantFilterSelectMenu___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__63_0 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind__TypeInfo);
    System_Func_object__Int32Enum____ctor(
      _9__63_0,
      v29,
      Method_ServantFilterSelectMenu___c__InitCategoryContainer_b__63_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = (struct System_Func_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind__o *)_9__63_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__63_0, (int32_t)_9__63_0, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                               categoryContainerList,
                                                               (System_Func_TSource__TResult__o *)_9__63_0,
                                                               (const MethodInfo_2FA0C8C *)Method_System_Linq_Enumerable_Select_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind___);
  v34 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v34,
    (Il2CppObject *)v19,
    Method_ServantFilterSelectMenu___c__DisplayClass63_0__InitCategoryContainer_b__1__,
    0LL);
  Int32Enum = System_Linq_Enumerable__Last_Int32Enum_(
                v33,
                (System_Func_TSource__bool__o *)v34,
                (const MethodInfo_2F96E08 *)Method_System_Linq_Enumerable_Last_ListViewSort_FilterCategoryKind___);
  v35 = Int32Enum;
  if ( !byte_4A487E1 )
  {
    Int32Enum = sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v21);
    byte_4A487E1 = 1;
  }
  v36 = this->fields.currentFilterContainer;
  if ( !v36 || (Int32Enum = (__int64)v36->fields.categoryContainerList) == 0 )
LABEL_29:
    sub_1B86614(Int32Enum, v21);
  v37 = UnityEngine_Vector3_TypeInfo->static_fields;
  x = v37->zeroVector.fields.x;
  y = v37->zeroVector.fields.y;
  z = v37->zeroVector.fields.z;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)Int32Enum,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v60 = v59;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v41 = sub_1B86604(ServantFilterSelectMenu___c__DisplayClass63_1_TypeInfo);
    ServantFilterSelectMenu___c__DisplayClass63_1___ctor((ServantFilterSelectMenu___c__DisplayClass63_1_o *)v41, 0LL);
    if ( !v41 )
      sub_1B86614(v42, v43);
    current = (int32_t)v60.fields._current;
    *(_QWORD *)(v41 + 16) = v60.fields._current;
    v47 = (UnityEngine_Component_o **)(v41 + 16);
    sub_1B8635C((CGThumbnailListItem_o *)(v41 + 16), current, v44, v45);
    v48 = *v24;
    v49 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      v49,
      (Il2CppObject *)v41,
      Method_ServantFilterSelectMenu___c__DisplayClass63_1__InitCategoryContainer_b__2__,
      0LL);
    v52 = BasicHelper__Any_Int32Enum__49642364(
            v48,
            (System_Func_T__bool__o *)v49,
            (const MethodInfo_2F57B7C *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    v53 = *(ServantFilterCategoryContainer_o **)(v41 + 16);
    if ( v52 )
    {
      if ( !v53 )
        sub_1B86614(0LL, v50);
      ServantFilterCategoryContainer__SetActive(v53, 1, v51);
      if ( !*v47 )
        sub_1B86614(0LL, v54);
      gameObject = UnityEngine_Component__get_gameObject(*v47, 0LL);
      v61.fields.x = x;
      v61.fields.y = y;
      v61.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v61, 0LL);
      if ( !*v47 )
        sub_1B86614(0LL, v56);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*v47,
        HIDWORD((*v47)[2].monitor) == v35,
        v57);
      if ( !*v47 )
        sub_1B86614(0LL, v58);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)*v47, v58);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !v53 )
        sub_1B86614(0LL, v50);
      ServantFilterCategoryContainer__SetActive(v53, 0, v51);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
}


void __fastcall ServantFilterSelectMenu__InitCommandCodeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v16; // w8
  FilterKindList_c *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *commandCodeFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v29; // x23
  const MethodInfo *v30; // x4
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v33; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UnityEngine_Object_o *v37; // x20
  _DWORD *monitor; // x8
  System_Array_o *v39; // x0
  ListViewSort_FilterCategoryKind_array *v40; // x20
  const MethodInfo *v41; // x2
  System_RuntimeFieldHandle_o v42; // 0:w1.4

  v2 = this;
  if ( (byte_4A497F4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B863B8(&FilterKindList_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1B863B8(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v11);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A,
      v12);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__, v13);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v14);
    byte_4A497F4 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_27;
  v16 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v16;
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v17->static_fields->RarityFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_27;
  v20 = *(_QWORD *)&this->fields.m_CachedPtr;
  v21 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v20 )
    goto LABEL_27;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v20 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  commandCodeFilterContainer = v2->fields.commandCodeFilterContainer;
  v2->fields.currentFilterContainer = commandCodeFilterContainer;
  p_currentFilterContainer = &v2->fields.currentFilterContainer;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)commandCodeFilterContainer,
    v18,
    v19);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v25);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v26);
  commandCodeEffectFilterController = v2->fields.commandCodeEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v29 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !commandCodeEffectFilterController )
    goto LABEL_27;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v29, v30);
  if ( !*p_currentFilterContainer )
    goto LABEL_27;
  categoryContainerList = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  klass = this->fields.servantFilterConatiner[2].klass;
  if ( !klass )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v33 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v33,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)klass, v35, v36);
  }
  if ( !categoryContainerList )
    goto LABEL_27;
  v37 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v37 )
    {
      monitor = v37[3].monitor;
      if ( monitor )
      {
        monitor[11] = 5;
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1B86614(this, method);
  }
LABEL_26:
  v39 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v42.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  v40 = (ListViewSort_FilterCategoryKind_array *)v39;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v39, v42, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v40, v41);
}


void __fastcall ServantFilterSelectMenu__InitCommonSummonDisp(
        ServantFilterSelectMenu_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *filterKind,
        int32_t categoryKind,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v6; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x22
  int v21; // w8
  FilterKindList_c *v22; // x0
  System_Collections_Generic_List_T__o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  System_Array_o *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *v33; // x23
  int m_CancellationTokenSource; // w8
  System_Array_o *v35; // x0
  System_Collections_Generic_IEnumerable_T__o *v36; // x21
  System_Collections_Generic_List_T__o *v37; // x22
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v43; // x24
  const MethodInfo *v44; // x4
  ListViewSort_FilterCategoryKind_array *v45; // x1
  const MethodInfo *v46; // x2
  System_RuntimeFieldHandle_o v47; // 0:w1.4
  System_RuntimeFieldHandle_o v48; // 0:w1.4

  v6 = this;
  if ( (byte_4A497F6 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, filterKind);
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, v7);
    sub_1B863B8(&FilterKindList_TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__, v15);
    sub_1B863B8(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo, v16);
    sub_1B863B8(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v17);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44,
      v18);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(
                                          &Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB,
                                          v19);
    byte_4A497F6 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_32;
  v21 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v21;
  v22 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v22 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v22->static_fields->BonusSelectCollectionStateFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
    if ( !this )
      goto LABEL_32;
    System_Collections_Generic_List_Int32Enum___AddRange(
      (System_Collections_Generic_List_T__o *)this,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo;
  v23 = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  if ( !v23 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  v26 = *(_QWORD *)&this->fields.m_CachedPtr;
  v27 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v26 )
    goto LABEL_32;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v26 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v26 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v6->fields.servantFilterConatiner;
  v6->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.currentFilterContainer, (int32_t)servantFilterConatiner, v24, v25);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v6, 1, v30);
  ServantFilterSelectMenu__InitUseFilterButton(v6, 1, v31);
  v32 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v47.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  v33 = (System_Collections_Generic_IEnumerable_T__o *)v32;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v32, v47, 0LL);
  this = (ServantFilterSelectMenu_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_32;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (LODWORD(this->fields.basePanel) = 1, m_CancellationTokenSource == 1) )
    sub_1B8661C(this, filterKind);
  HIDWORD(this->fields.basePanel) = 2;
  v35 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, 3LL);
  v48.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  v36 = (System_Collections_Generic_IEnumerable_T__o *)v35;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v35, v48, 0LL);
  v37 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v37,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v37 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v37,
    v33,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
  {
    items = v37->fields._items;
    v39 = Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__;
    ++v37->fields._version;
    if ( !items )
      goto LABEL_32;
    size = v37->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v37,
        categoryKind,
        *(const MethodInfo_35E2160 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v37->fields._size = size + 1;
      *((_DWORD *)items->m_Items + size) = categoryKind;
    }
  }
  svtEffectFilterController = v6->fields.svtEffectFilterController;
  operationSortInfo = v6->fields.operationSortInfo;
  v43 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)v6, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
LABEL_32:
    sub_1B86614(this, filterKind);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v43, v44);
  v6->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v37,
    v36,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v45 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                   v37,
                                                   (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(v6, v45, v46);
}


void __fastcall ServantFilterSelectMenu__InitCostumeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v14; // w8
  FilterKindList_c *v15; // x0
  System_Collections_Generic_List_T__o *v16; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *costumeFilterContainer; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *v29; // x20
  _DWORD *v30; // x8
  System_Array_o *v31; // x0
  ListViewSort_FilterCategoryKind_array *v32; // x20
  const MethodInfo *v33; // x2
  System_RuntimeFieldHandle_o v34; // 0:w1.4

  v2 = this;
  if ( (byte_4A497F5 & 1) == 0 )
  {
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, method);
    sub_1B863B8(&FilterKindList_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v9);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D,
      v10);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, v11);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v12);
    byte_4A497F5 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_25;
  v14 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v14;
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v15 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v15->static_fields->RarityFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_25;
  v16 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v16 )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = v2->fields.costumeFilterContainer;
  v2->fields.currentFilterContainer = costumeFilterContainer;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.currentFilterContainer, (int32_t)costumeFilterContainer, v18, v19);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v20);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v21);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_25;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  monitor = (System_Predicate_object__o *)this->fields.servantFilterConatiner[2].monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    monitor = (System_Predicate_object__o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, 0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__59_0, (int32_t)monitor, v27, v28);
  }
  if ( !categoryContainerList )
    goto LABEL_25;
  v29 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v29 )
    {
      v30 = v29[3].monitor;
      if ( v30 )
      {
        v30[11] = 5;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1B86614(this, method);
  }
LABEL_24:
  v31 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
  v34.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  v32 = (ListViewSort_FilterCategoryKind_array *)v31;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v31, v34, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v32, v33);
}


void __fastcall ServantFilterSelectMenu__InitExchangeSvtCoinDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v8; // w8
  FilterKindList_c *v9; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  v2 = this;
  if ( (byte_4A497F7 & 1) == 0 )
  {
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, method);
    sub_1B863B8(&FilterKindList_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v5);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(
                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                          v6);
    byte_4A497F7 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_10;
  v8 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v8;
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  this = (ServantFilterSelectMenu_o *)v9->static_fields->ClassFilterKindListForExchangeSvtCoin;
  if ( !this )
    goto LABEL_10;
  v10 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                         (System_Collections_Generic_List_T__o *)this,
                                                         (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    v10,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.currentFilterContainer, (int32_t)servantFilterConatiner, v12, v13);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v14);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v15);
  this = (ServantFilterSelectMenu_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, 2LL);
  if ( !this )
LABEL_10:
    sub_1B86614(this, method);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1B8661C(this, this);
  LODWORD(this->fields.basePanel) = 9;
  ServantFilterSelectMenu__InitCategoryContainer(v2, (ListViewSort_FilterCategoryKind_array *)this, v16);
}


void __fastcall ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4A497E8 & 1) == 0 )
  {
    sub_1B863B8(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_4A497E8 = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B86614(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantFilterSelectMenu__InitMaterialDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v18; // w8
  FilterKindList_c *v19; // x0
  System_Collections_Generic_List_T__o *v20; // x20
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *v36; // x20
  _DWORD *v37; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  __int64 *v44; // x20
  __int64 v45; // x1
  System_Array_o *v46; // x0
  __int64 v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  v2 = this;
  if ( (byte_4A497F2 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B863B8(&FilterKindList_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_1B863B8(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15,
      v13);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81,
      v14);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_4A497F2 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_41;
  v18 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v18;
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v19->static_fields->RarityFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_41;
  v20 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  v21 = *(_QWORD *)&this->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_41;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_41;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.currentFilterContainer, (int32_t)servantFilterConatiner, v25, v26);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v27);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v28);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_41;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  monitor = (System_Predicate_object__o *)this->fields.servantFilterConatiner[1].monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    monitor = (System_Predicate_object__o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, 0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__56_0, (int32_t)monitor, v34, v35);
  }
  if ( !categoryContainerList )
    goto LABEL_41;
  v36 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_41;
    v37 = v36[3].monitor;
    if ( !v37 )
      goto LABEL_41;
    v37[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v40 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_41;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v40, v41);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v42) )
  {
    v44 = &Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81;
    v45 = 12LL;
    goto LABEL_40;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_41:
    sub_1B86614(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v43);
  v44 = &Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15;
  v45 = 13LL;
LABEL_40:
  v46 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, v45);
  v47 = *v44;
  v48 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v46, (System_RuntimeFieldHandle_o)v47, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v48, v49);
}


void __fastcall ServantFilterSelectMenu__InitServantBaseDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v18; // w8
  FilterKindList_c *v19; // x0
  System_Collections_Generic_List_T__o *v20; // x20
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v32; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *v36; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  __int64 *v44; // x20
  __int64 v45; // x1
  System_Array_o *v46; // x0
  __int64 v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  v2 = this;
  if ( (byte_4A497F1 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B863B8(&FilterKindList_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_1B863B8(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__3853BEE9137B5366F0BE6423E290AC174C6602DC3CD187BBE90F25DFFA619D07,
      v13);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__DE57747DC3C53A2E8C2F04C11F6425A4F53EEED1C4B518D0A0AEF2F9E6E6AADF,
      v14);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_4A497F1 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v18 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v18;
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v19->static_fields->RarityFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_40;
  v20 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  v21 = *(_QWORD *)&this->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_40;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_40;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.currentFilterContainer, (int32_t)servantFilterConatiner, v25, v26);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v27);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v28);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_40;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  klass = this->fields.servantFilterConatiner[1].klass;
  if ( !klass )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v32 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v32,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__55_0, (int32_t)klass, v34, v35);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v36 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_40;
    monitor = v36[3].monitor;
    if ( !monitor )
      goto LABEL_40;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v40 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v40, v41);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v42) )
  {
    v44 = &Field__PrivateImplementationDetails__DE57747DC3C53A2E8C2F04C11F6425A4F53EEED1C4B518D0A0AEF2F9E6E6AADF;
    v45 = 12LL;
    goto LABEL_39;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_40:
    sub_1B86614(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v43);
  v44 = &Field__PrivateImplementationDetails__3853BEE9137B5366F0BE6423E290AC174C6602DC3CD187BBE90F25DFFA619D07;
  v45 = 13LL;
LABEL_39:
  v46 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, v45);
  v47 = *v44;
  v48 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v46, (System_RuntimeFieldHandle_o)v47, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v48, v49);
}


void __fastcall ServantFilterSelectMenu__InitServantEquipDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v19; // w8
  FilterKindList_c *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v32; // x23
  const MethodInfo *v33; // x4
  System_Collections_Generic_List_object__o *categoryContainerList; // x21
  struct UnityEngine_GameObject_o *root; // x22
  Il2CppObject *klass; // x23
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  UnityEngine_Object_o *v40; // x21
  _DWORD *monitor; // x8
  System_Collections_Generic_List_object__o *v42; // x21
  struct UIScrollView_o *scrollView; // x22
  Il2CppObject *v44; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  UnityEngine_Object_o *v48; // x21
  _DWORD *v49; // x8
  System_Collections_Generic_List_object__o *v50; // x21
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v51; // x22
  Il2CppObject *v52; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  UnityEngine_Object_o *v56; // x21
  _DWORD *v57; // x8
  System_Collections_Generic_List_object__o *v58; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *v60; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  UnityEngine_Object_o *v64; // x20
  _DWORD *v65; // x8
  System_Array_o *v66; // x0
  ListViewSort_FilterCategoryKind_array *v67; // x20
  const MethodInfo *v68; // x2
  System_RuntimeFieldHandle_o v69; // 0:w1.4

  v2 = this;
  if ( (byte_4A497F3 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B863B8(&FilterKindList_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1B863B8(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v11);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456,
      v12);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__, v13);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__, v14);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__, v15);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__, v16);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_4A497F3 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_72;
  v19 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v19;
  v20 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v20 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v20->static_fields->RarityFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipCombineStatusFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipHaveStatusFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  v23 = *(_QWORD *)&this->fields.m_CachedPtr;
  v24 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v23 )
    goto LABEL_72;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v23 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantEquipFilterContainer = v2->fields.servantEquipFilterContainer;
  v2->fields.currentFilterContainer = servantEquipFilterContainer;
  p_currentFilterContainer = &v2->fields.currentFilterContainer;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)servantEquipFilterContainer,
    v21,
    v22);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v28);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v29);
  svtEquipEffectFilterController = v2->fields.svtEquipEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v32 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEquipEffectFilterController )
    goto LABEL_72;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v32, v33);
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  categoryContainerList = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  root = this->fields.servantFilterConatiner[1].fields.root;
  if ( !root )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    root = (struct UnityEngine_GameObject_o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)root, v38, v39);
  }
  if ( !categoryContainerList )
    goto LABEL_72;
  v40 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v40 )
      goto LABEL_72;
    monitor = v40[3].monitor;
    if ( !monitor )
      goto LABEL_72;
    monitor[11] = 5;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v42 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  scrollView = this->fields.servantFilterConatiner[1].fields.scrollView;
  if ( !scrollView )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v44 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    scrollView = (struct UIScrollView_o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v44,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__,
      0LL);
    v45 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v45->__9__57_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    sub_1B8635C((CGThumbnailListItem_o *)&v45->__9__57_1, (int32_t)scrollView, v46, v47);
  }
  if ( !v42 )
    goto LABEL_72;
  v48 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v42,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_72;
    v49 = v48[3].monitor;
    if ( !v49 )
      goto LABEL_72;
    v49[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v50 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v51 = this->fields.servantFilterConatiner[1].fields.categoryContainerList;
  if ( !v51 )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v52 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    v51 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v51,
      v52,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__,
      0LL);
    v53 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v53->__9__57_2 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v51;
    sub_1B8635C((CGThumbnailListItem_o *)&v53->__9__57_2, (int32_t)v51, v54, v55);
  }
  if ( !v50 )
    goto LABEL_72;
  v56 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v50,
                                  (System_Predicate_T__o *)v51,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_72;
    v57 = v56[3].monitor;
    if ( !v57 )
      goto LABEL_72;
    v57[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v58 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  filterButtonList = this->fields.servantFilterConatiner[1].fields.filterButtonList;
  if ( !filterButtonList )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v60 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      v60,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__,
      0LL);
    v61 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v61->__9__57_3 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    sub_1B8635C((CGThumbnailListItem_o *)&v61->__9__57_3, (int32_t)filterButtonList, v62, v63);
  }
  if ( !v58 )
LABEL_72:
    sub_1B86614(this, method);
  v64 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v58,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v64 )
    {
      v65 = v64[3].monitor;
      if ( v65 )
      {
        v65[11] = 4;
        goto LABEL_71;
      }
    }
    goto LABEL_72;
  }
LABEL_71:
  v66 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v69.fields.value = Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456;
  v67 = (ListViewSort_FilterCategoryKind_array *)v66;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v66, v69, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v67, v68);
}


void __fastcall ServantFilterSelectMenu__InitServantExtraClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v18; // w8
  FilterKindList_c *v19; // x0
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct UnityEngine_GameObject_o *root; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *v35; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *v41; // x8
  System_Collections_Generic_List_object__o *v42; // x20
  struct UIScrollView_o *scrollView; // x21
  Il2CppObject *v44; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  UnityEngine_Object_o *v48; // x20
  _DWORD *v49; // x8
  const MethodInfo *v50; // x3
  __int64 *v51; // x20
  __int64 v52; // x1
  System_Array_o *v53; // x0
  __int64 v54; // x1
  ListViewSort_FilterCategoryKind_array *v55; // x20
  const MethodInfo *v56; // x2

  v2 = this;
  if ( (byte_4A497EE & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B863B8(&FilterKindList_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1B863B8(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v11);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560,
      v12);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1,
      v13);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__, v14);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_4A497EE = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_53;
  v18 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v18;
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v19->static_fields->RarityFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  v20 = *(_QWORD *)&this->fields.m_CachedPtr;
  v21 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v20 )
    goto LABEL_53;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_53;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v20 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.currentFilterContainer, (int32_t)servantFilterConatiner, v24, v25);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v26);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v27);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_53;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  root = this->fields.servantFilterConatiner->fields.root;
  if ( !root )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    root = (struct UnityEngine_GameObject_o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__52_0, (int32_t)root, v33, v34);
  }
  if ( !categoryContainerList )
    goto LABEL_53;
  v35 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_53;
    monitor = v35[3].monitor;
    if ( !monitor )
      goto LABEL_53;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v39 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_53;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v39, v40);
  v41 = v2->fields.currentFilterContainer;
  v2->fields.isDisplayServantEffect = 1;
  if ( !v41 )
    goto LABEL_53;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v42 = (System_Collections_Generic_List_object__o *)v41->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  scrollView = this->fields.servantFilterConatiner->fields.scrollView;
  if ( !scrollView )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v44 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    scrollView = (struct UIScrollView_o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v44,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      0LL);
    v45 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v45->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    sub_1B8635C((CGThumbnailListItem_o *)&v45->__9__52_1, (int32_t)scrollView, v46, v47);
  }
  if ( !v42 )
    goto LABEL_53;
  v48 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v42,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v48 )
      goto LABEL_53;
    v49 = v48[3].monitor;
    if ( !v49 )
      goto LABEL_53;
    v49[11] = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, method) )
  {
    v51 = &Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560;
    v52 = 11LL;
    goto LABEL_52;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_53:
    sub_1B86614(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v50);
  v51 = &Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1;
  v52 = 12LL;
LABEL_52:
  v53 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, v52);
  v54 = *v51;
  v55 = (ListViewSort_FilterCategoryKind_array *)v53;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v53, (System_RuntimeFieldHandle_o)v54, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v55, v56);
}


void __fastcall ServantFilterSelectMenu__InitServantListDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v18; // w8
  FilterKindList_c *v19; // x0
  System_Collections_Generic_List_T__o *v20; // x20
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *v36; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  __int64 *v44; // x20
  __int64 v45; // x1
  System_Array_o *v46; // x0
  __int64 v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  v2 = this;
  if ( (byte_4A497F0 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B863B8(&FilterKindList_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_1B863B8(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15,
      v13);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81,
      v14);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_4A497F0 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v18 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v18;
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v19->static_fields->RarityFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_40;
  v20 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  v21 = *(_QWORD *)&this->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_40;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_40;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.currentFilterContainer, (int32_t)servantFilterConatiner, v25, v26);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v27);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v28);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_40;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  filterButtonList = this->fields.servantFilterConatiner->fields.filterButtonList;
  if ( !filterButtonList )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__54_0, (int32_t)filterButtonList, v34, v35);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v36 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_40;
    monitor = v36[3].monitor;
    if ( !monitor )
      goto LABEL_40;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v40 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v40, v41);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v42) )
  {
    v44 = &Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81;
    v45 = 12LL;
    goto LABEL_39;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_40:
    sub_1B86614(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v43);
  v44 = &Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15;
  v45 = 13LL;
LABEL_39:
  v46 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, v45);
  v47 = *v44;
  v48 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v46, (System_RuntimeFieldHandle_o)v47, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v48, v49);
}


void __fastcall ServantFilterSelectMenu__InitServantNormalDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v18; // w8
  FilterKindList_c *v19; // x0
  System_Collections_Generic_List_T__o *v20; // x20
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *v36; // x20
  _DWORD *v37; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  __int64 *v44; // x20
  __int64 v45; // x1
  System_Array_o *v46; // x0
  __int64 v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  v2 = this;
  if ( (byte_4A497ED & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B863B8(&FilterKindList_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_1B863B8(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560,
      v13);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1,
      v14);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_4A497ED = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v18 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v18;
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v19->static_fields->RarityFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_39;
  v20 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  v21 = *(_QWORD *)&this->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_39;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_39;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.currentFilterContainer, (int32_t)servantFilterConatiner, v25, v26);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v27);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v28);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_39;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  monitor = (System_Predicate_object__o *)this->fields.servantFilterConatiner->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    monitor = (System_Predicate_object__o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      monitor,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)monitor, v34, v35);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v36 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_39;
    v37 = v36[3].monitor;
    if ( !v37 )
      goto LABEL_39;
    v37[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v40 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v40, v41);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v42) )
  {
    v44 = &Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560;
    v45 = 11LL;
    goto LABEL_38;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_39:
    sub_1B86614(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v43);
  v44 = &Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1;
  v45 = 12LL;
LABEL_38:
  v46 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, v45);
  v47 = *v44;
  v48 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v46, (System_RuntimeFieldHandle_o)v47, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v48, v49);
}


void __fastcall ServantFilterSelectMenu__InitServantNotClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
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
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v17; // w8
  FilterKindList_c *v18; // x0
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v29; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *v34; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x4
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x3
  __int64 *v42; // x20
  __int64 v43; // x1
  System_Array_o *v44; // x0
  __int64 v45; // x1
  ListViewSort_FilterCategoryKind_array *v46; // x20
  const MethodInfo *v47; // x2

  v2 = this;
  if ( (byte_4A497EF & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B863B8(&FilterKindList_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1B863B8(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v11);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__273DF9EB428871F28E90488FBEE0CD554EDEE41B97AA5AF9453F3C5BA8142CE5,
      v12);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__5B2EEB7A72BF5A5AB8814BE99B9C2B07ED3A1129FB61C60192BC06096E745FB2,
      v13);
    sub_1B863B8(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__, v14);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v15);
    byte_4A497EF = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_36;
  v17 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v17;
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v18->static_fields->RarityFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  v19 = *(_QWORD *)&this->fields.m_CachedPtr;
  v20 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v19 )
    goto LABEL_36;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_36;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v19 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_35E236C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.currentFilterContainer, (int32_t)servantFilterConatiner, v23, v24);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v25);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v26);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_36;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v29 = this->fields.servantFilterConatiner->fields.categoryContainerList;
  if ( !v29 )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    v29 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1B86604(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v29,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v29;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__53_0, (int32_t)v29, v32, v33);
  }
  if ( !categoryContainerList )
    goto LABEL_36;
  v34 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v29,
                                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_36;
    monitor = v34[3].monitor;
    if ( !monitor )
      goto LABEL_36;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v38 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_36;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v38, v39);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v40) )
  {
    v42 = &Field__PrivateImplementationDetails__273DF9EB428871F28E90488FBEE0CD554EDEE41B97AA5AF9453F3C5BA8142CE5;
    v43 = 9LL;
    goto LABEL_35;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_36:
    sub_1B86614(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v41);
  v42 = &Field__PrivateImplementationDetails__5B2EEB7A72BF5A5AB8814BE99B9C2B07ED3A1129FB61C60192BC06096E745FB2;
  v43 = 10LL;
LABEL_35:
  v44 = (System_Array_o *)sub_1B86460(ListViewSort_FilterCategoryKind___TypeInfo, v43);
  v45 = *v42;
  v46 = (ListViewSort_FilterCategoryKind_array *)v44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v44, (System_RuntimeFieldHandle_o)v45, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v46, v47);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__InitUseFilterButton(
        ServantFilterSelectMenu_o *this,
        bool isSummon,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v4; // x19
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
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x8
  int32_t size; // w2
  int v17; // w9
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *filterButtonList; // x21
  System_Predicate_object__o *v20; // x22
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *v24; // x8
  bool i; // w20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v30; // w22
  ListViewSort_o *operationSortInfo; // x23
  ServantFilterButtonControl_OnClickFilterButton_o *v32; // x24
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x6
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF

  v4 = this;
  if ( (byte_4A497F8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isSummon);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v10);
    sub_1B863B8(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v11);
    sub_1B863B8(&System_Predicate_ServantFilterButtonControl__TypeInfo, v12);
    sub_1B863B8(&Method_ServantFilterSelectMenu_OnClickFilterButton__, v13);
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__62_0__, v14);
    byte_4A497F8 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  useFilterButtonList = v4->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_18;
  size = useFilterButtonList->fields._size;
  v17 = useFilterButtonList->fields._version + 1;
  useFilterButtonList->fields._size = 0;
  useFilterButtonList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)useFilterButtonList->fields._items, 0, size, 0LL);
  currentFilterContainer = v4->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_18;
  filterButtonList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.filterButtonList;
  v20 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v4,
    Method_ServantFilterSelectMenu__InitUseFilterButton_b__62_0__,
    0LL);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                filterButtonList,
                (System_Predicate_T__o *)v20,
                (const MethodInfo_35FD068 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        v4->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.useFilterButtonList, (int32_t)All, v22, v23),
        (v24 = v4->fields.currentFilterContainer) == 0LL)
    || (this = (ServantFilterSelectMenu_o *)v24->fields.filterButtonList) == 0LL )
  {
LABEL_18:
    sub_1B86614(this, isSummon);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = isSummon;
        ;
        ServantFilterButtonControl__Init(
          (ServantFilterButtonControl_o *)current,
          operationSortInfo,
          v32,
          v30,
          i,
          0,
          v34) )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v26 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B86614(v26, v27);
    useFilterKindList = (System_Collections_Generic_List_T__o *)v4->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1B86614(0LL, v27);
    v30 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            (int32_t)v35.fields._current[2].klass,
            (const MethodInfo_35E24D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    operationSortInfo = v4->fields.operationSortInfo;
    v32 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1B86604(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v32,
      (Il2CppObject *)v4,
      (intptr_t)Method_ServantFilterSelectMenu_OnClickFilterButton__,
      v33);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


bool __fastcall ServantFilterSelectMenu__IsChangedStatus(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x0
  const MethodInfo *v5; // x1
  struct System_Boolean_array *kindStatus; // x10
  unsigned __int64 v7; // x8
  __int64 v8; // x9
  bool *v9; // x10
  int32_t kind; // w8

  svtEquipEffectFilterController = (ServantEquipEffectFilterController_o *)ServantFilterSelectMenu__SetKindStatus(
                                                                             this,
                                                                             this->fields.operationSortInfo,
                                                                             v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_23;
  if ( (int)*(_QWORD *)&kindStatus->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)*(_QWORD *)&kindStatus->max_length;
    v9 = &kindStatus->m_Items[4];
    while ( svtEquipEffectFilterController )
    {
      if ( v7 >= LODWORD(svtEquipEffectFilterController->fields.m_CancellationTokenSource) )
        sub_1B8661C(svtEquipEffectFilterController, v5);
      if ( !v9[v7] == (*((_BYTE *)&svtEquipEffectFilterController->fields.WIDGET_HEIGHT_ADD_VALUE + v7) != 0) )
        return 1;
      if ( v8 == ++v7 )
        goto LABEL_8;
    }
LABEL_23:
    sub_1B86614(svtEquipEffectFilterController, v5);
  }
LABEL_8:
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_23;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEquipEffectFilterController, v5) )
      return 1;
    kind = this->fields.kind;
  }
  if ( kind == 6 )
  {
    svtEquipEffectFilterController = this->fields.commandCodeEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_23;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEquipEffectFilterController, v5) )
      return 1;
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    svtEquipEffectFilterController = (ServantEquipEffectFilterController_o *)this->fields.svtEventBonusFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_23;
    if ( ServantEventBonusFilterController__IsChangeFilterData(
           (ServantEventBonusFilterController_o *)svtEquipEffectFilterController,
           v5) )
    {
      return 1;
    }
  }
  if ( this->fields.isDisplayServantEffect )
  {
    svtEquipEffectFilterController = this->fields.svtEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_23;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEquipEffectFilterController, v5) )
      return 1;
  }
  return 0;
}


bool __fastcall ServantFilterSelectMenu__IsEventBonus(ServantFilterSelectMenu_o *this, const MethodInfo *method)
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
  int32_t eventId; // w8
  unsigned int kind; // w8
  bool result; // w0
  EventMaster_o *Master_object; // x0
  __int64 v16; // x1
  System_Collections_Generic_HashSet_int__o *v17; // x20
  System_Int32_array *v18; // x22
  EventUpValSetupInfo_o *v19; // x21
  struct System_Int32_array *servantFilterEventIds; // x8
  Il2CppObject *v21; // x21

  if ( (byte_4A497EC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventBonusFilterMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B863B8(&EventUpValSetupInfo_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int___ctor__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1B863B8(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v11);
    byte_4A497EC = 1;
  }
  eventId = this->fields.eventId;
  this->fields.isDisplayEventBonusSkill = 0;
  if ( !eventId )
    return 0;
  kind = this->fields.kind;
  result = 0;
  if ( kind <= 0xB && ((1 << kind) & 0xC0F) != 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_26;
    Master_object = (EventMaster_o *)EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
    if ( !Master_object )
      goto LABEL_26;
    v17 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( Master_object->fields.revision >= 1 )
    {
      if ( this->fields.eventId >= 1 )
      {
        v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B86604(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v17,
          (const MethodInfo_34B7810 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        if ( !v17 )
          goto LABEL_26;
        System_Collections_Generic_HashSet_int___Add(
          v17,
          this->fields.eventId,
          (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v18 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v17,
              (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
      v19 = (EventUpValSetupInfo_o *)sub_1B86604(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor_39889424(v19, v18, 0, 0, 0, 0LL);
      if ( v19 )
      {
        servantFilterEventIds = v19->fields.servantFilterEventIds;
        if ( !servantFilterEventIds || !servantFilterEventIds->max_length )
        {
          result = 0;
          goto LABEL_24;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v21 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                           (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( v21 )
        {
          Master_object = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                             (EventBonusFilterMaster_o *)v21,
                                             (System_Int32_array *)Master_object,
                                             0LL);
          if ( Master_object )
          {
            result = SLODWORD(Master_object->fields._MasterName_k__BackingField) > 0;
LABEL_24:
            this->fields.isDisplayEventBonusSkill = result;
            return result;
          }
        }
      }
LABEL_26:
      sub_1B86614(Master_object, v16);
    }
    return 0;
  }
  return result;
}


void __fastcall ServantFilterSelectMenu__OnClickCancel(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A497FE & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantFilterSelectMenu_OnClickCancel__, method);
    byte_4A497FE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_ServantFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    ServantFilterSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickClear(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4A497FF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1B863B8(&Method_ServantFilterSelectMenu_OnClickClear__, v3);
    byte_4A497FF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantFilterSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B863D0(Method_ServantFilterSelectMenu_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0LL);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v8 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v8 )
        {
          ListViewSort__SetFilters(v8, (ListViewSort_FilterKind_array *)operationSortInfo, 0, 0LL);
          if ( (unsigned int)(this->fields.kind - 5) < 2 || this->fields.isDisplayServantEffect )
          {
            operationSortInfo = this->fields.operationSortInfo;
            if ( !operationSortInfo )
              goto LABEL_18;
            ListViewSort__SetAllSvtEquipEffectFilter(operationSortInfo, 0, 0LL);
          }
          if ( !this->fields.isDisplayEventBonusSkill )
          {
LABEL_16:
            ServantFilterSelectMenu__SetButtonSelect(this, v6);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v9);
            return;
          }
          operationSortInfo = (ListViewSort_o *)this->fields.svtEventBonusFilterController;
          if ( operationSortInfo )
          {
            ServantEventBonusFilterController__InitAllButton(
              (ServantEventBonusFilterController_o *)operationSortInfo,
              v6);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_1B86614(operationSortInfo, v6);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickDecide(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4A497FD & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(&Method_ServantFilterSelectMenu_OnClickDecide__, method);
    byte_4A497FD = 1;
  }
  if ( v2->fields.state == 2 )
  {
    currentFilterContainer = v2->fields.currentFilterContainer;
    if ( !currentFilterContainer )
      goto LABEL_13;
    scrollView = currentFilterContainer->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    this = (ServantFilterSelectMenu_o *)scrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    v2->fields.state = 3;
    v7 = Method_ServantFilterSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B863D0(Method_ServantFilterSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B8639C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    this = (ServantFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_1B86614(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    IsChangedStatus = ServantFilterSelectMenu__IsChangedStatus(v2, v9);
    ServantFilterSelectMenu__Callback(v2, IsChangedStatus, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__OnClickFilterButton(
        ServantFilterSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4A49801 & 1) == 0 )
  {
    sub_1B863B8(&Method_ServantFilterSelectMenu_OnClickFilterButton__, *(_QWORD *)&filterKind);
    byte_4A49801 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantFilterSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_ServantFilterSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B86614(0LL, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    ServantFilterSelectMenu__SetButtonSelect(this, v9);
    ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v10);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickInitialize(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4A49800 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1B863B8(&Method_ServantFilterSelectMenu_OnClickInitialize__, v3);
    byte_4A49800 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B863D0(Method_ServantFilterSelectMenu_OnClickInitialize__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0LL);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v8 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                (const MethodInfo_35E3C18 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v8 )
        {
          ListViewSort__SetFilters(v8, (ListViewSort_FilterKind_array *)operationSortInfo, 1, 0LL);
          if ( (unsigned int)(this->fields.kind - 5) < 2 || this->fields.isDisplayServantEffect )
          {
            operationSortInfo = this->fields.operationSortInfo;
            if ( !operationSortInfo )
              goto LABEL_18;
            ListViewSort__SetAllSvtEquipEffectFilter(operationSortInfo, 1, 0LL);
          }
          if ( !this->fields.isDisplayEventBonusSkill )
          {
LABEL_16:
            ServantFilterSelectMenu__SetButtonSelect(this, v6);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v9);
            return;
          }
          operationSortInfo = (ListViewSort_o *)this->fields.svtEventBonusFilterController;
          if ( operationSortInfo )
          {
            ServantEventBonusFilterController__InitAllButton(
              (ServantEventBonusFilterController_o *)operationSortInfo,
              v6);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_1B86614(operationSortInfo, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__Open(
        ServantFilterSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        ListViewManager_o *listViewManager,
        ServantFilterSelectMenu_CallbackFunc_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  ServantFilterSelectMenu_o *v26; // x0
  const MethodInfo *v27; // x2
  ServantFilterSelectMenu_c *v28; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v30; // x1
  __int64 v31; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  ListViewSort_o *v36; // x21
  ListViewSort_o *v37; // x22
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  ServantFilterSelectMenu_o *v51; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v53; // x0
  FilterKindList_c *v54; // x0
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  struct ListViewSort_o *v60; // x8
  System_Action_o *v61; // x20

  if ( (byte_4A497EA & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&FilterKindList_TypeInfo, v13);
    sub_1B863B8(&ListViewSort_TypeInfo, v14);
    sub_1B863B8(&LocalizationManager_TypeInfo, v15);
    sub_1B863B8(&Method_ServantFilterSelectMenu_EndOpen__, v16);
    sub_1B863B8(&ServantFilterSelectMenu_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_11680/*"SERVANT_SORT_RESET"*/, v18);
    sub_1B863B8(&StringLiteral_11514/*"SERVANT_SORT_CANCEL"*/, v19);
    sub_1B863B8(&StringLiteral_11404/*"SERVANT_EQUIP_FILTER_WARNING"*/, v20);
    sub_1B863B8(&StringLiteral_11518/*"SERVANT_SORT_DECIDE"*/, v21);
    sub_1B863B8(&StringLiteral_11682/*"SERVANT_SORT_TITLE2"*/, v22);
    sub_1B863B8(&StringLiteral_11515/*"SERVANT_SORT_CLEAR"*/, v23);
    byte_4A497EA = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      (const MethodInfo *)listViewManager);
    this->fields.eventId = eventId;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v24, v25);
    }
    else
    {
      v28 = ServantFilterSelectMenu_TypeInfo;
      if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
        v28 = ServantFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v28->static_fields->commonServantSortInfo;
      v30 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)v30, v24, v25);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_46;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    v33 = ServantFilterSelectMenu__SetKindStatus(v26, sort, v27);
    this->fields.kindStatus = v33;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.kindStatus, (int32_t)v33, v34, v35);
    v36 = this->fields.baseSortInfo;
    v37 = (ListViewSort_o *)sub_1B86604(ListViewSort_TypeInfo);
    ListViewSort___ctor_41809704(v37, v36, 0LL);
    this->fields.operationSortInfo = v37;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v37, v38, v39);
    this->fields.listViewManager = listViewManager;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.listViewManager, (int32_t)listViewManager, v40, v41);
    baseSortInfo = (ListViewSort_o *)this->fields.warningLabel;
    if ( baseSortInfo )
    {
      baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)baseSortInfo,
                                         0LL);
      if ( baseSortInfo )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0LL);
        baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( baseSortInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0LL);
          titleLabel = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11682/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11404/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0LL);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0LL);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11518/*"SERVANT_SORT_DECIDE"*/, 0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11515/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11514/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11680/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v48);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v48);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v48);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v48);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v48);
                          break;
                        case 5:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v48);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v48);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v48);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v48);
                          break;
                        case 0xC:
                          v50 = 999;
                          v51 = this;
                          ClassExtra1FilterKindList = 0LL;
                          goto LABEL_39;
                        case 0xD:
                          v53 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v53 = FilterKindList_TypeInfo;
                          }
                          v50 = 14;
                          ClassExtra1FilterKindList = v53->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_38;
                        case 0xE:
                          v54 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v54 = FilterKindList_TypeInfo;
                          }
                          v50 = 15;
                          ClassExtra1FilterKindList = v54->static_fields->ClassExtra2FilterKindList;
LABEL_38:
                          v51 = this;
LABEL_39:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v51, ClassExtra1FilterKindList, v50, v49);
                          break;
                        case 0xF:
                          ServantFilterSelectMenu__InitExchangeSvtCoinDisp(this, v48);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v48);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v55);
                      ServantFilterSelectMenu__SetButtonSelect(this, v56);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v57);
                      currentFilterContainer = this->fields.currentFilterContainer;
                      if ( currentFilterContainer )
                      {
                        scrollView = currentFilterContainer->fields.scrollView;
                        if ( scrollView )
                        {
                          v60 = this->fields.baseSortInfo;
                          if ( v60 )
                          {
                            baseSortInfo = (ListViewSort_o *)scrollView->fields.verticalScrollBar;
                            if ( baseSortInfo )
                            {
                              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v60->fields.scrollBarValue, 0LL);
                              this->fields.state = 1;
                              v61 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                              System_Action___ctor(
                                v61,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
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
LABEL_46:
    sub_1B86614(baseSortInfo, v31);
  }
}


void __fastcall ServantFilterSelectMenu__RefreshFilterClippingPosition(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v5; // x0
  __int64 v6; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *v7; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v8; // x8
  struct UIScrollView_o *v9; // x9

  if ( (byte_4A497FA & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A497FA = 1;
  }
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    return;
  scrollView = (UnityEngine_Object_o *)currentFilterContainer->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UIScrollView_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) == 0 )
    return;
  v7 = this->fields.currentFilterContainer;
  if ( !v7 )
    goto LABEL_18;
  v5 = v7->fields.scrollView;
  if ( !v5 )
    goto LABEL_18;
  v5 = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v5->klass->vtable._6_get_shouldMoveVertically.method)(
                           v5,
                           v5->klass->vtable._7_get_shouldMove.methodPtr);
  v8 = this->fields.currentFilterContainer;
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_18;
    goto LABEL_16;
  }
  if ( !v8 || (v9 = v8->fields.scrollView) == 0LL )
LABEL_18:
    sub_1B86614(v5, v6);
  v9->fields.contentPivot = 4;
LABEL_16:
  v5 = v8->fields.scrollView;
  if ( !v5 )
    goto LABEL_18;
  UIScrollView__ResetPosition(v5, 0LL);
}


void __fastcall ServantFilterSelectMenu__SetActiveCurrentFilterContainer(
        ServantFilterSelectMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8

  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.root) == 0LL )
    sub_1B86614(this, isActive);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__SetButtonEnable(
        ServantFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UICommonButton_o *decideButton; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Behaviour_o *monitor; // x0
  const MethodInfo *v12; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A497FC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4A497FC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_28;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_28;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_28;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = this->fields.initializeButton;
  if ( !decideButton )
    goto LABEL_28;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = (UICommonButton_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    if ( !v15.fields._current )
      sub_1B86614(v9, v10);
    monitor = (UnityEngine_Behaviour_o *)v15.fields._current[2].monitor;
    if ( !monitor )
      sub_1B86614(0LL, v10);
    UnityEngine_Behaviour__set_enabled(monitor, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEquipEffectFilterController;
    if ( !decideButton )
      goto LABEL_28;
    ServantEquipEffectFilterController__SetEnableFilterButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v12);
    kind = this->fields.kind;
  }
  if ( kind == 6 )
  {
    decideButton = (UICommonButton_o *)this->fields.commandCodeEffectFilterController;
    if ( !decideButton )
      goto LABEL_28;
    ServantEquipEffectFilterController__SetEnableFilterButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v12);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEventBonusFilterController;
    if ( !decideButton )
      goto LABEL_28;
    ServantEventBonusFilterController__SetEnableFilterButton(
      (ServantEventBonusFilterController_o *)decideButton,
      isEnable,
      v12);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  decideButton = (UICommonButton_o *)this->fields.svtEffectFilterController;
  if ( !decideButton )
LABEL_28:
    sub_1B86614(decideButton, isEnable);
  ServantEquipEffectFilterController__SetEnableFilterButton(
    (ServantEquipEffectFilterController_o *)decideButton,
    isEnable,
    v12);
}


void __fastcall ServantFilterSelectMenu__SetButtonSelect(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *useFilterButtonList; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v12; // x1
  FilterKindList_c *v13; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v15; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v17; // w0
  const MethodInfo *v18; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A497FB & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v4);
    sub_1B863B8(&FilterKindList_TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4A497FB = 1;
  }
  memset(&v21, 0, sizeof(v21));
  useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    useFilterButtonList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    current = (ServantFilterButtonControl_o *)v21.fields._current;
    if ( !v21.fields._current )
      sub_1B86614(v9, v10);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v21.fields._current, v10);
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v13 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v13->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1B86614(0LL, v12);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_35E24D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1B86614(0LL, v15);
      v17 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.svtEquipEffectFilterController;
    if ( !useFilterButtonList )
      goto LABEL_29;
    ServantEquipEffectFilterController__RefreshSelectState(
      (ServantEquipEffectFilterController_o *)useFilterButtonList,
      method);
    kind = this->fields.kind;
  }
  if ( kind == 6 )
  {
    useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.commandCodeEffectFilterController;
    if ( !useFilterButtonList )
      goto LABEL_29;
    ServantEquipEffectFilterController__RefreshSelectState(
      (ServantEquipEffectFilterController_o *)useFilterButtonList,
      method);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.svtEventBonusFilterController;
    if ( !useFilterButtonList )
      goto LABEL_29;
    ServantEventBonusFilterController__RefreshButtonState(
      (ServantEventBonusFilterController_o *)useFilterButtonList,
      method);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.svtEffectFilterController;
  if ( !useFilterButtonList )
LABEL_29:
    sub_1B86614(useFilterButtonList, method);
  ServantEquipEffectFilterController__RefreshSelectState(
    (ServantEquipEffectFilterController_o *)useFilterButtonList,
    method);
}


System_Boolean_array *__fastcall ServantFilterSelectMenu__SetKindStatus(
        ServantFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *AllFilterKindList; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v8; // x8
  __int64 size; // x20
  System_Boolean_array *v10; // x21
  unsigned __int64 v11; // x22
  FilterKindList_c *v12; // x0

  if ( (byte_4A49803 & 1) == 0 )
  {
    sub_1B863B8(&bool___TypeInfo, sort);
    sub_1B863B8(&FilterKindList_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__, v6);
    byte_4A49803 = 1;
  }
  AllFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    AllFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo;
  }
  v8 = **(struct System_Collections_Generic_List_ListViewSort_FilterKind__o ***)&AllFilterKindList[4].fields._size;
  if ( !v8 )
    goto LABEL_16;
  size = (unsigned int)v8->fields._size;
  v10 = (System_Boolean_array *)sub_1B86460(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v12 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v12 = FilterKindList_TypeInfo;
      }
      AllFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->AllFilterKindList;
      if ( !AllFilterKindList )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                    AllFilterKindList,
                                                                    v11,
                                                                    (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
      if ( !sort )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(
                                                                    sort,
                                                                    (int32_t)AllFilterKindList,
                                                                    0LL);
      if ( !v10 )
        break;
      if ( v11 >= v10->max_length )
        sub_1B8661C(AllFilterKindList, sort);
      v10->m_Items[v11++ + 4] = (unsigned __int8)AllFilterKindList & 1;
      if ( size == v11 )
        return v10;
    }
LABEL_16:
    sub_1B86614(AllFilterKindList, sort);
  }
  return v10;
}


bool __fastcall ServantFilterSelectMenu___InitUseFilterButton_b__62_0(
        ServantFilterSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4A49807 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1B863B8(
                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                          x);
    byte_4A49807 = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1B86614(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_35E24D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall ServantFilterSelectMenu__add_callbackFunc(
        ServantFilterSelectMenu_o *this,
        ServantFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantFilterSelectMenu_o *v10; // x0
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A497E6 & 1) == 0 )
  {
    sub_1B863B8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A497E6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantFilterSelectMenu_CallbackFunc_c *)v7->klass != ServantFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantFilterSelectMenu_o *)sub_1B868D4(v7);
  ServantFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantFilterSelectMenu__get_closeBtnPath(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A49804 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_4A49804 = 1;
  }
  return (System_String_o *)StringLiteral_15414/*"Window/CancelButton"*/;
}


void __fastcall ServantFilterSelectMenu__remove_callbackFunc(
        ServantFilterSelectMenu_o *this,
        ServantFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_4A497E7 & 1) == 0 )
  {
    sub_1B863B8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A497E7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantFilterSelectMenu_CallbackFunc_c *)v7->klass != ServantFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC0674(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B868D4(v7);
  ServantFilterSelectMenu__InitLoad(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu_CallbackFunc___ctor(
        ServantFilterSelectMenu_CallbackFunc_o *this,
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CCCAC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CCC64;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantFilterSelectMenu_CallbackFunc__BeginInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A4A0F3 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, result);
    byte_4A4A0F3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__Invoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ServantFilterSelectMenu_FilterContainer___ctor(
        ServantFilterSelectMenu_FilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4A0F2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo, v5);
    byte_4A4A0F2 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.categoryContainerList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.filterButtonList, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4A0F4 & 1) == 0 )
  {
    sub_1B863B8(&ServantFilterSelectMenu___c_TypeInfo, v1);
    byte_4A4A0F4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(ServantFilterSelectMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantFilterSelectMenu___c_TypeInfo->static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)ServantFilterSelectMenu___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantFilterSelectMenu___c___ctor(ServantFilterSelectMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantFilterSelectMenu___c___InitCategoryContainer_b__63_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1B86614(this, 0LL);
  return e->fields.categoryKind;
}


bool __fastcall ServantFilterSelectMenu___c___InitCommandCodeDisp_b__58_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 12;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_2(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 19;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_3(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 20;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 0;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.categoryKind == 4;
}


void __fastcall ServantFilterSelectMenu___c__DisplayClass63_0___ctor(
        ServantFilterSelectMenu___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFilterSelectMenu___c__DisplayClass63_0___InitCategoryContainer_b__1(
        ServantFilterSelectMenu___c__DisplayClass63_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  if ( (byte_4A4A0F5 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_ListViewSort_FilterCategoryKind___, *(_QWORD *)&e);
    byte_4A4A0F5 = 1;
  }
  return System_Linq_Enumerable__Contains_Int32Enum_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.categoryKindKist,
           e,
           (const MethodInfo_2F885EC *)Method_System_Linq_Enumerable_Contains_ListViewSort_FilterCategoryKind___);
}


void __fastcall ServantFilterSelectMenu___c__DisplayClass63_1___ctor(
        ServantFilterSelectMenu___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantFilterSelectMenu___c__DisplayClass63_1___InitCategoryContainer_b__2(
        ServantFilterSelectMenu___c__DisplayClass63_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct ServantFilterCategoryContainer_o *container; // x8

  container = this->fields.container;
  if ( !container )
    sub_1B86614(this, x);
  return container->fields.categoryKind == x;
}