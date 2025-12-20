void ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D27745 & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&ServantFilterSelectMenu_TypeInfo);
    sub_1C94098(&StringLiteral_12786/*"ServantFilterSelect1"*/);
    byte_4D27745 = 1;
  }
  v1 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
  ListViewSort___ctor_44628284(v1, (System_String_o *)StringLiteral_12786/*"ServantFilterSelect1"*/, 3, 0, 0);
  ServantFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantFilterSelectMenu_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D27744 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    byte_4D27744 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_384FDE8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.useFilterKindList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.useFilterButtonList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantFilterSelectMenu__Callback(ServantFilterSelectMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ServantFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  unsigned int kind; // w8
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v5; // x1
  ListViewManager_o *warningLabel; // x0
  _BOOL4 v7; // w20
  float v8; // s0 OVERLAPPED
  float v9; // s3
  float v10; // s1
  float v11; // s2

  if ( (byte_4D27741 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27741 = 1;
  }
  kind = this->fields.kind;
  if ( kind <= 0x10 && ((1 << kind) & 0x10060) != 0 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0, 0) )
    {
      warningLabel = this->fields.listViewManager;
      if ( !warningLabel )
        goto LABEL_20;
      v7 = ListViewManager__GetMatchItemCount(warningLabel, this->fields.operationSortInfo, 0) == 0;
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
                                            0);
      if ( warningLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, v7, 0);
        warningLabel = (ListViewManager_o *)this->fields.decideButton;
        if ( warningLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningLabel, !v7, 0);
          warningLabel = (ListViewManager_o *)this->fields.decideButton;
          if ( warningLabel )
          {
            warningLabel = (ListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)warningLabel,
                                                  (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            v8 = 1.0;
            if ( v7 )
              v8 = 0.5;
            if ( warningLabel )
            {
              v9 = 1.0;
              v10 = v8;
              v11 = v8;
              UIWidget__set_color((UIWidget_o *)warningLabel, *(UnityEngine_Color_o *)&v8, 0);
              return;
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C942F0(warningLabel, v5);
  }
}


void ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_33801056(this, 0, v2);
}


void ServantFilterSelectMenu__Close_33801056(
        ServantFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Action_o *v11; // x20

  if ( (byte_4D2772A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_EndClose__);
    byte_4D2772A = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ServantFilterSelectMenu__EndClose(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void ServantFilterSelectMenu__EndOpen(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


ListViewSort_o *ServantFilterSelectMenu__GetServantFilterInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4D27728 & 1) == 0 )
  {
    sub_1C94098(&ServantFilterSelectMenu_TypeInfo);
    byte_4D27728 = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C942F0(0, v1);
  ListViewSort__Load(commonServantSortInfo, 0);
  return ServantFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo;
}


void ServantFilterSelectMenu__Init(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantFilterSelectMenu__InitCategoryContainer(
        ServantFilterSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *Int32Enum; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Int32Enum_array **v14; // x19
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_IEnumerable_TSource__o *categoryContainerList; // x22
  ServantFilterSelectMenu___c_c *v17; // x0
  System_Func_T__TResult__o *_9__63_0; // x23
  Il2CppObject *v19; // x24
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x22
  System_Func_T__TResult__o *v28; // x23
  int v29; // w20
  struct ServantFilterSelectMenu_FilterContainer_o *v30; // x8
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t current; // w1
  UnityEngine_Component_o **v45; // x21
  System_Int32Enum_array *v46; // x23
  System_Func_T__TResult__o *v47; // x24
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  bool v50; // w8
  ServantFilterCategoryContainer_o *v51; // x0
  __int64 v52; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D27738 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    sub_1C94098(&Method_System_Linq_Enumerable_Last_ListViewSort_FilterCategoryKind___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_1C94098(&System_Func_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind__TypeInfo);
    sub_1C94098(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitCategoryContainer_b__63_0__);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__DisplayClass63_0__InitCategoryContainer_b__1__);
    sub_1C94098(&ServantFilterSelectMenu___c__DisplayClass63_0_TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__DisplayClass63_1__InitCategoryContainer_b__2__);
    sub_1C94098(&ServantFilterSelectMenu___c__DisplayClass63_1_TypeInfo);
    sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D27738 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v5 = sub_1C942E4(ServantFilterSelectMenu___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = categoryKindKist;
  v14 = (System_Int32Enum_array **)(v5 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)categoryKindKist, v8, v9, v10, v11, v12, v13);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_29;
  categoryContainerList = (System_Collections_Generic_IEnumerable_TSource__o *)currentFilterContainer->fields.categoryContainerList;
  v17 = ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v17 = ServantFilterSelectMenu___c_TypeInfo;
  }
  _9__63_0 = (System_Func_T__TResult__o *)v17->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ServantFilterSelectMenu___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__63_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind__TypeInfo);
    System_Func_object__Int32Enum____ctor(
      _9__63_0,
      v19,
      Method_ServantFilterSelectMenu___c__InitCategoryContainer_b__63_0__,
      0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = (struct System_Func_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind__o *)_9__63_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__63_0,
      (int32_t)_9__63_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                               categoryContainerList,
                                                               (System_Func_TSource__TResult__o *)_9__63_0,
                                                               (const MethodInfo_31D2B04 *)Method_System_Linq_Enumerable_Select_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind___);
  v28 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_ServantFilterSelectMenu___c__DisplayClass63_0__InitCategoryContainer_b__1__,
    0);
  Int32Enum = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Last_Int32Enum_(
                                                             v27,
                                                             (System_Func_TSource__bool__o *)v28,
                                                             (const MethodInfo_31C7DDC *)Method_System_Linq_Enumerable_Last_ListViewSort_FilterCategoryKind___);
  v29 = (int)Int32Enum;
  if ( !byte_4D25F19 )
  {
    Int32Enum = (System_Collections_Generic_List_object__o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  v30 = this->fields.currentFilterContainer;
  if ( !v30 || (Int32Enum = (System_Collections_Generic_List_object__o *)v30->fields.categoryContainerList) == 0 )
LABEL_29:
    sub_1C942F0(Int32Enum, v7);
  v31 = UnityEngine_Vector3_TypeInfo->static_fields;
  x = v31->zeroVector.fields.x;
  y = v31->zeroVector.fields.y;
  z = v31->zeroVector.fields.z;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    Int32Enum,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v58 = v57;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v35 = sub_1C942E4(ServantFilterSelectMenu___c__DisplayClass63_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v35, 0);
    if ( !v35 )
      sub_1C942F0(v36, v37);
    current = (int32_t)v58.fields._current;
    *(_QWORD *)(v35 + 16) = v58.fields._current;
    v45 = (UnityEngine_Component_o **)(v35 + 16);
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 16), current, v38, v39, v40, v41, v42, v43);
    v46 = *v14;
    v47 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      v47,
      (Il2CppObject *)v35,
      Method_ServantFilterSelectMenu___c__DisplayClass63_1__InitCategoryContainer_b__2__,
      0);
    v50 = BasicHelper__Any_Int32Enum__51925808(
            v46,
            (System_Func_T__bool__o *)v47,
            (const MethodInfo_3185330 *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    v51 = *(ServantFilterCategoryContainer_o **)(v35 + 16);
    if ( v50 )
    {
      if ( !v51 )
        sub_1C942F0(0, v48);
      ServantFilterCategoryContainer__SetActive(v51, 1, v49);
      if ( !*v45 )
        sub_1C942F0(0, v52);
      gameObject = UnityEngine_Component__get_gameObject(*v45, 0);
      v59.fields.x = x;
      v59.fields.y = y;
      v59.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v59, 0);
      if ( !*v45 )
        sub_1C942F0(0, v54);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*v45,
        HIDWORD((*v45)[2].monitor) == v29,
        v55);
      if ( !*v45 )
        sub_1C942F0(0, v56);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)*v45, v56);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !v51 )
        sub_1C942F0(0, v48);
      ServantFilterCategoryContainer__SetActive(v51, 0, v49);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
}


void ServantFilterSelectMenu__InitCommandCodeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *commandCodeFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v21; // x23
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v25; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Object_o *v33; // x20
  _DWORD *monitor; // x8
  System_Array_o *v35; // x0
  System_RuntimeFieldHandle_o v36; // x1
  ListViewSort_FilterCategoryKind_array *v37; // x20
  const MethodInfo *v38; // x2

  v2 = this;
  if ( (byte_4D27733 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1C94098(&Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D27733 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_27;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_27;
  m_CachedPtr = this->fields.m_CachedPtr;
  v13 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_27;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  commandCodeFilterContainer = v2->fields.commandCodeFilterContainer;
  v2->fields.currentFilterContainer = commandCodeFilterContainer;
  p_currentFilterContainer = &v2->fields.currentFilterContainer;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)commandCodeFilterContainer,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v17);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v18);
  commandCodeEffectFilterController = v2->fields.commandCodeEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v21 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !commandCodeEffectFilterController )
    goto LABEL_27;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v21, v22);
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
    v25 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v25,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__58_0, (int32_t)klass, v27, v28, v29, v30, v31, v32);
  }
  if ( !categoryContainerList )
    goto LABEL_27;
  v33 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v33 )
    {
      monitor = v33[3].monitor;
      if ( monitor )
      {
        monitor[11] = 5;
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1C942F0(this, method);
  }
LABEL_26:
  v35 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, 4);
  v36.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  v37 = (ListViewSort_FilterCategoryKind_array *)v35;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v35, v36, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v37, v38);
}


void ServantFilterSelectMenu__InitCommonSummonDisp(
        ServantFilterSelectMenu_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *filterKind,
        int32_t categoryKind,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v6; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x22
  int v8; // w8
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_T__o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  System_Array_o *v23; // x0
  System_RuntimeFieldHandle_o v24; // x1
  System_Collections_Generic_IEnumerable_T__o *v25; // x23
  int m_CancellationTokenSource; // w8
  System_Array_o *v27; // x0
  System_RuntimeFieldHandle_o v28; // x1
  System_Collections_Generic_IEnumerable_T__o *v29; // x21
  System_Collections_Generic_List_T__o *v30; // x22
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v36; // x24
  const MethodInfo *v37; // x4
  ListViewSort_FilterCategoryKind_array *v38; // x1
  const MethodInfo *v39; // x2

  v6 = this;
  if ( (byte_4D27735 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1C94098(&Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB);
    byte_4D27735 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_32;
  v8 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v8;
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v9->static_fields->BonusSelectCollectionStateFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
    if ( !this )
      goto LABEL_32;
    System_Collections_Generic_List_Int32Enum___AddRange(
      (System_Collections_Generic_List_T__o *)this,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo;
  v10 = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  if ( !v10 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  m_CachedPtr = this->fields.m_CachedPtr;
  v18 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_32;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v6->fields.servantFilterConatiner;
  v6->fields.currentFilterContainer = servantFilterConatiner;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v6->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v6, 1, v21);
  ServantFilterSelectMenu__InitUseFilterButton(v6, 1, v22);
  v23 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, 4);
  v24.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  v25 = (System_Collections_Generic_IEnumerable_T__o *)v23;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v23, v24, 0);
  this = (ServantFilterSelectMenu_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, 2);
  if ( !this )
    goto LABEL_32;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (LODWORD(this->fields.basePanel) = 1, m_CancellationTokenSource == 1) )
    sub_1C942F8(this);
  HIDWORD(this->fields.basePanel) = 2;
  v27 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, 3);
  v28.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  v29 = (System_Collections_Generic_IEnumerable_T__o *)v27;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v27, v28, 0);
  v30 = (System_Collections_Generic_List_T__o *)sub_1C942E4(System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v30,
    (const MethodInfo_384FDE8 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v30 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v30,
    v25,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
  {
    items = v30->fields._items;
    v32 = Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__;
    ++v30->fields._version;
    if ( !items )
      goto LABEL_32;
    size = v30->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v30,
        categoryKind,
        *(const MethodInfo_385063C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v30->fields._size = size + 1;
      *((_DWORD *)items->m_Items + size) = categoryKind;
    }
  }
  svtEffectFilterController = v6->fields.svtEffectFilterController;
  operationSortInfo = v6->fields.operationSortInfo;
  v36 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v6, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
LABEL_32:
    sub_1C942F0(this, filterKind);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v36, v37);
  v6->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v30,
    v29,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v38 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                   v30,
                                                   (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(v6, v38, v39);
}


void ServantFilterSelectMenu__InitCostumeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *costumeFilterContainer; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Object_o *v27; // x20
  _DWORD *v28; // x8
  System_Array_o *v29; // x0
  System_RuntimeFieldHandle_o v30; // x1
  ListViewSort_FilterCategoryKind_array *v31; // x20
  const MethodInfo *v32; // x2

  v2 = this;
  if ( (byte_4D27734 & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C94098(&Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D27734 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_25;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_25;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = v2->fields.costumeFilterContainer;
  v2->fields.currentFilterContainer = costumeFilterContainer;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)costumeFilterContainer,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v14);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v15);
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
    monitor = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, 0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__59_0,
      (int32_t)monitor,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !categoryContainerList )
    goto LABEL_25;
  v27 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v27 )
    {
      v28 = v27[3].monitor;
      if ( v28 )
      {
        v28[11] = 5;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1C942F0(this, method);
  }
LABEL_24:
  v29 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, 5);
  v30.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  v31 = (ListViewSort_FilterCategoryKind_array *)v29;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v29, v30, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v31, v32);
}


void ServantFilterSelectMenu__InitExchangeSvtCoinDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *v6; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2

  v2 = this;
  if ( (byte_4D27736 & 1) == 0 )
  {
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D27736 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_10;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  this = (ServantFilterSelectMenu_o *)v5->static_fields->ClassFilterKindListForExchangeSvtCoin;
  if ( !this )
    goto LABEL_10;
  v6 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                        (System_Collections_Generic_List_T__o *)this,
                                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    v6,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v14);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v15);
  this = (ServantFilterSelectMenu_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, 2);
  if ( !this )
LABEL_10:
    sub_1C942F0(this, method);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1C942F8(this);
  LODWORD(this->fields.basePanel) = 9;
  ServantFilterSelectMenu__InitCategoryContainer(v2, (ListViewSort_FilterCategoryKind_array *)this, v16);
}


void ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4D27727 & 1) == 0 )
  {
    sub_1C94098(&ServantFilterSelectMenu_TypeInfo);
    byte_4D27727 = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1C942F0(0, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0);
}


void ServantFilterSelectMenu__InitMaterialDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v8; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Object_o *v30; // x20
  _DWORD *v31; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  intptr_t *v38; // x20
  __int64 v39; // x1
  System_Array_o *v40; // x0
  System_RuntimeFieldHandle_o v41; // x1
  ListViewSort_FilterCategoryKind_array *v42; // x20
  const MethodInfo *v43; // x2

  v2 = this;
  if ( (byte_4D27731 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1C94098(&Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15);
    sub_1C94098(&Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D27731 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_41;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_41;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  m_CachedPtr = this->fields.m_CachedPtr;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_41;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_41;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v17);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v18);
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
    monitor = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, 0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__56_0,
      (int32_t)monitor,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !categoryContainerList )
    goto LABEL_41;
  v30 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_41;
    v31 = v30[3].monitor;
    if ( !v31 )
      goto LABEL_41;
    v31[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v34 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_41;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v34, v35);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v36) )
  {
    v38 = &Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81;
    v39 = 12;
    goto LABEL_40;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_41:
    sub_1C942F0(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v37);
  v38 = &Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15;
  v39 = 13;
LABEL_40:
  v40 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, v39);
  v41.fields.value = *v38;
  v42 = (ListViewSort_FilterCategoryKind_array *)v40;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v40, v41, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v42, v43);
}


void ServantFilterSelectMenu__InitServantBaseDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v8; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v22; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Object_o *v30; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  intptr_t *v38; // x20
  __int64 v39; // x1
  System_Array_o *v40; // x0
  System_RuntimeFieldHandle_o v41; // x1
  ListViewSort_FilterCategoryKind_array *v42; // x20
  const MethodInfo *v43; // x2

  v2 = this;
  if ( (byte_4D27730 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1C94098(&Field__PrivateImplementationDetails__3853BEE9137B5366F0BE6423E290AC174C6602DC3CD187BBE90F25DFFA619D07);
    sub_1C94098(&Field__PrivateImplementationDetails__DE57747DC3C53A2E8C2F04C11F6425A4F53EEED1C4B518D0A0AEF2F9E6E6AADF);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D27730 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_40;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  m_CachedPtr = this->fields.m_CachedPtr;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_40;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_40;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v17);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v18);
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
    v22 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v22,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__55_0, (int32_t)klass, v24, v25, v26, v27, v28, v29);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v30 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_40;
    monitor = v30[3].monitor;
    if ( !monitor )
      goto LABEL_40;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v34 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v34, v35);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v36) )
  {
    v38 = &Field__PrivateImplementationDetails__DE57747DC3C53A2E8C2F04C11F6425A4F53EEED1C4B518D0A0AEF2F9E6E6AADF;
    v39 = 12;
    goto LABEL_39;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_40:
    sub_1C942F0(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v37);
  v38 = &Field__PrivateImplementationDetails__3853BEE9137B5366F0BE6423E290AC174C6602DC3CD187BBE90F25DFFA619D07;
  v39 = 13;
LABEL_39:
  v40 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, v39);
  v41.fields.value = *v38;
  v42 = (ListViewSort_FilterCategoryKind_array *)v40;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v40, v41, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v42, v43);
}


void ServantFilterSelectMenu__InitServantEquipDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v21; // x23
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_object__o *categoryContainerList; // x21
  struct UnityEngine_GameObject_o *root; // x22
  Il2CppObject *klass; // x23
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Object_o *v33; // x21
  _DWORD *monitor; // x8
  System_Collections_Generic_List_object__o *v35; // x21
  struct UIScrollView_o *scrollView; // x22
  Il2CppObject *v37; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  UnityEngine_Object_o *v45; // x21
  _DWORD *v46; // x8
  System_Collections_Generic_List_object__o *v47; // x21
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v48; // x22
  Il2CppObject *v49; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  UnityEngine_Object_o *v57; // x21
  _DWORD *v58; // x8
  System_Collections_Generic_List_object__o *v59; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *v61; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  UnityEngine_Object_o *v69; // x20
  _DWORD *v70; // x8
  System_Array_o *v71; // x0
  System_RuntimeFieldHandle_o v72; // x1
  ListViewSort_FilterCategoryKind_array *v73; // x20
  const MethodInfo *v74; // x2

  v2 = this;
  if ( (byte_4D27732 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1C94098(&Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D27732 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_72;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipCombineStatusFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipHaveStatusFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  m_CachedPtr = this->fields.m_CachedPtr;
  v13 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_72;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantEquipFilterContainer = v2->fields.servantEquipFilterContainer;
  v2->fields.currentFilterContainer = servantEquipFilterContainer;
  p_currentFilterContainer = &v2->fields.currentFilterContainer;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)servantEquipFilterContainer,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v17);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v18);
  svtEquipEffectFilterController = v2->fields.svtEquipEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v21 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEquipEffectFilterController )
    goto LABEL_72;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v21, v22);
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
    root = (struct UnityEngine_GameObject_o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__57_0, (int32_t)root, v27, v28, v29, v30, v31, v32);
  }
  if ( !categoryContainerList )
    goto LABEL_72;
  v33 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_72;
    monitor = v33[3].monitor;
    if ( !monitor )
      goto LABEL_72;
    monitor[11] = 5;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v35 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
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
    v37 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    scrollView = (struct UIScrollView_o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v37,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__,
      0);
    v38 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v38->__9__57_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v38->__9__57_1, (int32_t)scrollView, v39, v40, v41, v42, v43, v44);
  }
  if ( !v35 )
    goto LABEL_72;
  v45 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v35,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v45, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v45 )
      goto LABEL_72;
    v46 = v45[3].monitor;
    if ( !v46 )
      goto LABEL_72;
    v46[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v47 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v48 = this->fields.servantFilterConatiner[1].fields.categoryContainerList;
  if ( !v48 )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v49 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    v48 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v48,
      v49,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__,
      0);
    v50 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v50->__9__57_2 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v48;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v50->__9__57_2, (int32_t)v48, v51, v52, v53, v54, v55, v56);
  }
  if ( !v47 )
    goto LABEL_72;
  v57 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v47,
                                  (System_Predicate_T__o *)v48,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v57, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v57 )
      goto LABEL_72;
    v58 = v57[3].monitor;
    if ( !v58 )
      goto LABEL_72;
    v58[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v59 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
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
    v61 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      v61,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__,
      0);
    v62 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v62->__9__57_3 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v62->__9__57_3, (int32_t)filterButtonList, v63, v64, v65, v66, v67, v68);
  }
  if ( !v59 )
LABEL_72:
    sub_1C942F0(this, method);
  v69 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v59,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v69, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v69 )
    {
      v70 = v69[3].monitor;
      if ( v70 )
      {
        v70[11] = 4;
        goto LABEL_71;
      }
    }
    goto LABEL_72;
  }
LABEL_71:
  v71 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, 7);
  v72.fields.value = Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456;
  v73 = (ListViewSort_FilterCategoryKind_array *)v71;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v71, v72, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v73, v74);
}


void ServantFilterSelectMenu__InitServantExtraClassDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v7; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct UnityEngine_GameObject_o *root; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *v29; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *v35; // x8
  System_Collections_Generic_List_object__o *v36; // x20
  struct UIScrollView_o *scrollView; // x21
  Il2CppObject *v38; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  UnityEngine_Object_o *v46; // x20
  _DWORD *v47; // x8
  const MethodInfo *v48; // x3
  intptr_t *v49; // x20
  __int64 v50; // x1
  System_Array_o *v51; // x0
  System_RuntimeFieldHandle_o v52; // x1
  ListViewSort_FilterCategoryKind_array *v53; // x20
  const MethodInfo *v54; // x2

  v2 = this;
  if ( (byte_4D2772D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1C94098(&Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560);
    sub_1C94098(&Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D2772D = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_53;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  m_CachedPtr = this->fields.m_CachedPtr;
  v7 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_53;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_53;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v16);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v17);
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
    root = (struct UnityEngine_GameObject_o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__52_0, (int32_t)root, v23, v24, v25, v26, v27, v28);
  }
  if ( !categoryContainerList )
    goto LABEL_53;
  v29 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_53;
    monitor = v29[3].monitor;
    if ( !monitor )
      goto LABEL_53;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v33 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_53;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v33, v34);
  v35 = v2->fields.currentFilterContainer;
  v2->fields.isDisplayServantEffect = 1;
  if ( !v35 )
    goto LABEL_53;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v36 = (System_Collections_Generic_List_object__o *)v35->fields.categoryContainerList;
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
    v38 = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    scrollView = (struct UIScrollView_o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v38,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      0);
    v39 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v39->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v39->__9__52_1, (int32_t)scrollView, v40, v41, v42, v43, v44, v45);
  }
  if ( !v36 )
    goto LABEL_53;
  v46 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v36,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v46, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v46 )
      goto LABEL_53;
    v47 = v46[3].monitor;
    if ( !v47 )
      goto LABEL_53;
    v47[11] = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, method) )
  {
    v49 = &Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560;
    v50 = 11;
    goto LABEL_52;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_53:
    sub_1C942F0(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v48);
  v49 = &Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1;
  v50 = 12;
LABEL_52:
  v51 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, v50);
  v52.fields.value = *v49;
  v53 = (ListViewSort_FilterCategoryKind_array *)v51;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v51, v52, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v53, v54);
}


void ServantFilterSelectMenu__InitServantListDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v8; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Object_o *v30; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  intptr_t *v38; // x20
  __int64 v39; // x1
  System_Array_o *v40; // x0
  System_RuntimeFieldHandle_o v41; // x1
  ListViewSort_FilterCategoryKind_array *v42; // x20
  const MethodInfo *v43; // x2

  v2 = this;
  if ( (byte_4D2772F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1C94098(&Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15);
    sub_1C94098(&Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D2772F = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_40;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  m_CachedPtr = this->fields.m_CachedPtr;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_40;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_40;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v17);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v18);
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
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__54_0,
      (int32_t)filterButtonList,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v30 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_40;
    monitor = v30[3].monitor;
    if ( !monitor )
      goto LABEL_40;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v34 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v34, v35);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v36) )
  {
    v38 = &Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81;
    v39 = 12;
    goto LABEL_39;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_40:
    sub_1C942F0(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v37);
  v38 = &Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15;
  v39 = 13;
LABEL_39:
  v40 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, v39);
  v41.fields.value = *v38;
  v42 = (ListViewSort_FilterCategoryKind_array *)v40;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v40, v41, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v42, v43);
}


void ServantFilterSelectMenu__InitServantNormalDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v8; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Object_o *v30; // x20
  _DWORD *v31; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  intptr_t *v38; // x20
  __int64 v39; // x1
  System_Array_o *v40; // x0
  System_RuntimeFieldHandle_o v41; // x1
  ListViewSort_FilterCategoryKind_array *v42; // x20
  const MethodInfo *v43; // x2

  v2 = this;
  if ( (byte_4D2772C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1C94098(&Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560);
    sub_1C94098(&Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D2772C = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_39;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  m_CachedPtr = this->fields.m_CachedPtr;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_39;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_39;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v17);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v18);
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
    monitor = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      monitor,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__51_0,
      (int32_t)monitor,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v30 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_39;
    v31 = v30[3].monitor;
    if ( !v31 )
      goto LABEL_39;
    v31[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v34 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v34, v35);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v36) )
  {
    v38 = &Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560;
    v39 = 11;
    goto LABEL_38;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_39:
    sub_1C942F0(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v37);
  v38 = &Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1;
  v39 = 12;
LABEL_38:
  v40 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, v39);
  v41.fields.value = *v38;
  v42 = (ListViewSort_FilterCategoryKind_array *)v40;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v40, v41, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v42, v43);
}


void ServantFilterSelectMenu__InitServantNotClassDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v7; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v20; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *v29; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x3
  intptr_t *v37; // x20
  __int64 v38; // x1
  System_Array_o *v39; // x0
  System_RuntimeFieldHandle_o v40; // x1
  ListViewSort_FilterCategoryKind_array *v41; // x20
  const MethodInfo *v42; // x2

  v2 = this;
  if ( (byte_4D2772E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1C94098(&Field__PrivateImplementationDetails__273DF9EB428871F28E90488FBEE0CD554EDEE41B97AA5AF9453F3C5BA8142CE5);
    sub_1C94098(&Field__PrivateImplementationDetails__5B2EEB7A72BF5A5AB8814BE99B9C2B07ED3A1129FB61C60192BC06096E745FB2);
    sub_1C94098(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D2772E = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_36;
  v4 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v4;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  m_CachedPtr = this->fields.m_CachedPtr;
  v7 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_36;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_385063C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
    if ( !this )
      goto LABEL_36;
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriFirstFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_3850848 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v16);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v17);
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
  v20 = this->fields.servantFilterConatiner->fields.categoryContainerList;
  if ( !v20 )
  {
    if ( !LODWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantFilterConatiner->klass;
    v20 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1C942E4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v20,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v20;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__53_0, (int32_t)v20, v23, v24, v25, v26, v27, v28);
  }
  if ( !categoryContainerList )
    goto LABEL_36;
  v29 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v20,
                                  (const MethodInfo_386B49C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_36;
    monitor = v29[3].monitor;
    if ( !monitor )
      goto LABEL_36;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v33 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_36;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v33, v34);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v35) )
  {
    v37 = &Field__PrivateImplementationDetails__273DF9EB428871F28E90488FBEE0CD554EDEE41B97AA5AF9453F3C5BA8142CE5;
    v38 = 9;
    goto LABEL_35;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_36:
    sub_1C942F0(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v36);
  v37 = &Field__PrivateImplementationDetails__5B2EEB7A72BF5A5AB8814BE99B9C2B07ED3A1129FB61C60192BC06096E745FB2;
  v38 = 10;
LABEL_35:
  v39 = (System_Array_o *)sub_1C94140(ListViewSort_FilterCategoryKind___TypeInfo, v38);
  v40.fields.value = *v37;
  v41 = (ListViewSort_FilterCategoryKind_array *)v39;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v39, v40, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v41, v42);
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterSelectMenu__InitUseFilterButton(
        ServantFilterSelectMenu_o *this,
        bool isSummon,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v4; // x19
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x8
  int32_t size; // w2
  int v7; // w9
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *filterButtonList; // x21
  System_Predicate_object__o *v10; // x22
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct ServantFilterSelectMenu_FilterContainer_o *v18; // x8
  bool i; // w20
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v24; // w22
  ListViewSort_o *operationSortInfo; // x23
  ServantFilterButtonControl_OnClickFilterButton_o *v26; // x24
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x6
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-78h] BYREF

  v4 = this;
  if ( (byte_4D27737 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_1C94098(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_1C94098(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_OnClickFilterButton__);
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__62_0__);
    byte_4D27737 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  useFilterButtonList = v4->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_18;
  size = useFilterButtonList->fields._size;
  v7 = useFilterButtonList->fields._version + 1;
  useFilterButtonList->fields._size = 0;
  useFilterButtonList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)useFilterButtonList->fields._items, 0, size, 0);
  currentFilterContainer = v4->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_18;
  filterButtonList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.filterButtonList;
  v10 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)v4,
    Method_ServantFilterSelectMenu__InitUseFilterButton_b__62_0__,
    0);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                filterButtonList,
                (System_Predicate_T__o *)v10,
                (const MethodInfo_386B544 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        v4->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v4->fields.useFilterButtonList,
          (int32_t)All,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v18 = v4->fields.currentFilterContainer) == 0)
    || (this = (ServantFilterSelectMenu_o *)v18->fields.filterButtonList) == 0 )
  {
LABEL_18:
    sub_1C942F0(this, isSummon);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = isSummon;
        ;
        ServantFilterButtonControl__Init(
          (ServantFilterButtonControl_o *)current,
          operationSortInfo,
          v26,
          v24,
          i,
          0,
          v28) )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v20 )
      break;
    current = v29.fields._current;
    if ( !v29.fields._current )
      sub_1C942F0(v20, v21);
    useFilterKindList = (System_Collections_Generic_List_T__o *)v4->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1C942F0(0, v21);
    v24 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            *(_DWORD *)((char *)&v29.fields._current->klass + (unsigned __int64)&qword_20),
            (const MethodInfo_38509B4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    operationSortInfo = v4->fields.operationSortInfo;
    v26 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1C942E4(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v26,
      (Il2CppObject *)v4,
      (intptr_t)Method_ServantFilterSelectMenu_OnClickFilterButton__,
      v27);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


bool ServantFilterSelectMenu__IsChangedStatus(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x0
  const MethodInfo *v5; // x1
  struct System_Boolean_array *kindStatus; // x10
  unsigned __int64 v7; // x8
  __int64 max_length; // x9
  bool *m_Items; // x10
  int32_t kind; // w8

  svtEquipEffectFilterController = (ServantEquipEffectFilterController_o *)ServantFilterSelectMenu__SetKindStatus(
                                                                             this,
                                                                             this->fields.operationSortInfo,
                                                                             v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_24;
  if ( (int)kindStatus->max_length >= 1 )
  {
    v7 = 0;
    max_length = (unsigned int)kindStatus->max_length;
    m_Items = kindStatus->m_Items;
    while ( svtEquipEffectFilterController )
    {
      if ( v7 >= LODWORD(svtEquipEffectFilterController->fields.m_CancellationTokenSource) )
        sub_1C942F8(svtEquipEffectFilterController);
      if ( !m_Items[v7] == (*((_BYTE *)&svtEquipEffectFilterController->fields.WIDGET_HEIGHT_ADD_VALUE + v7) != 0) )
        return 1;
      if ( max_length == ++v7 )
        goto LABEL_8;
    }
LABEL_24:
    sub_1C942F0(svtEquipEffectFilterController, v5);
  }
LABEL_8:
  kind = this->fields.kind;
  if ( kind == 16 || kind == 5 )
  {
    svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_24;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEquipEffectFilterController, v5) )
      return 1;
    kind = this->fields.kind;
  }
  if ( kind == 6 )
  {
    svtEquipEffectFilterController = this->fields.commandCodeEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_24;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEquipEffectFilterController, v5) )
      return 1;
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    svtEquipEffectFilterController = (ServantEquipEffectFilterController_o *)this->fields.svtEventBonusFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_24;
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
      goto LABEL_24;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEquipEffectFilterController, v5) )
      return 1;
  }
  return 0;
}


bool ServantFilterSelectMenu__IsEventBonus(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int32_t eventId; // w8
  unsigned int kind; // w8
  bool result; // w0
  EventMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_HashSet_int__o *v8; // x20
  System_Int32_array *v9; // x22
  EventUpValSetupInfo_o *v10; // x21
  struct System_Int32_array *servantFilterEventIds; // x8
  Il2CppObject *v12; // x21

  if ( (byte_4D2772B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&EventUpValSetupInfo_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    byte_4D2772B = 1;
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
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_26;
    Master_object = (EventMaster_o *)EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0, 0);
    if ( !Master_object )
      goto LABEL_26;
    v8 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( Master_object->fields.revision >= 1 )
    {
      if ( this->fields.eventId >= 1 )
      {
        v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v8,
          (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        if ( !v8 )
          goto LABEL_26;
        System_Collections_Generic_HashSet_int___Add(
          v8,
          this->fields.eventId,
          (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v9 = System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v8,
             (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
      v10 = (EventUpValSetupInfo_o *)sub_1C942E4(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor_42501600(v10, v9, 0, 0, 0, 0);
      if ( v10 )
      {
        servantFilterEventIds = v10->fields.servantFilterEventIds;
        if ( !servantFilterEventIds || !LODWORD(servantFilterEventIds->max_length) )
        {
          result = 0;
          goto LABEL_24;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v12 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( v12 )
        {
          Master_object = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                             (EventBonusFilterMaster_o *)v12,
                                             (System_Int32_array *)Master_object,
                                             0);
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
      sub_1C942F0(Master_object, v7);
    }
    return 0;
  }
  return result;
}


void ServantFilterSelectMenu__OnClickCancel(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2773D & 1) == 0 )
  {
    sub_1C94098(&Method_ServantFilterSelectMenu_OnClickCancel__);
    byte_4D2773D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    ServantFilterSelectMenu__Callback(this, 0, v5);
  }
}


void ServantFilterSelectMenu__OnClickClear(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v7; // x20
  unsigned int kind; // w8
  const MethodInfo *v9; // x1

  if ( (byte_4D2773E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&Method_ServantFilterSelectMenu_OnClickClear__);
    byte_4D2773E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantFilterSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantFilterSelectMenu_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v7 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v7 )
        {
          ListViewSort__SetFilters(v7, (ListViewSort_FilterKind_array *)operationSortInfo, 0, 0);
          kind = this->fields.kind;
          if ( kind <= 0x10 && ((1 << kind) & 0x10060) != 0 || this->fields.isDisplayServantEffect )
          {
            operationSortInfo = this->fields.operationSortInfo;
            if ( !operationSortInfo )
              goto LABEL_20;
            ListViewSort__SetAllSvtEquipEffectFilter(operationSortInfo, 0, 0);
          }
          if ( !this->fields.isDisplayEventBonusSkill )
          {
LABEL_16:
            ServantFilterSelectMenu__SetButtonSelect(this, v5);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v9);
            return;
          }
          operationSortInfo = (ListViewSort_o *)this->fields.svtEventBonusFilterController;
          if ( operationSortInfo )
          {
            ServantEventBonusFilterController__InitAllButton(
              (ServantEventBonusFilterController_o *)operationSortInfo,
              v5);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_20:
    sub_1C942F0(operationSortInfo, v5);
  }
}


void ServantFilterSelectMenu__OnClickDecide(ServantFilterSelectMenu_o *this, const MethodInfo *method)
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
  if ( (byte_4D2773C & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&Method_ServantFilterSelectMenu_OnClickDecide__);
    byte_4D2773C = 1;
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
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    v2->fields.state = 3;
    v7 = Method_ServantFilterSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C940B0(Method_ServantFilterSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (ServantFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_1C942F0(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0);
    IsChangedStatus = ServantFilterSelectMenu__IsChangedStatus(v2, v9);
    ServantFilterSelectMenu__Callback(v2, IsChangedStatus, v11);
  }
}


void ServantFilterSelectMenu__OnClickFilterButton(
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

  if ( (byte_4D27740 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantFilterSelectMenu_OnClickFilterButton__);
    byte_4D27740 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantFilterSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C940B0(Method_ServantFilterSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C942F0(0, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0);
    ServantFilterSelectMenu__SetButtonSelect(this, v9);
    ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v10);
  }
}


void ServantFilterSelectMenu__OnClickInitialize(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v7; // x20
  int32_t kind; // w8
  const MethodInfo *v9; // x1
  ListViewSort_o *v10; // x20
  FilterKindList_c *v11; // x0

  if ( (byte_4D2773F & 1) == 0 )
  {
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C94098(&Method_ServantFilterSelectMenu_OnClickInitialize__);
    byte_4D2773F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantFilterSelectMenu_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v7 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v7 )
        {
          ListViewSort__SetFilters(v7, (ListViewSort_FilterKind_array *)operationSortInfo, 1, 0);
          kind = this->fields.kind;
          if ( (unsigned int)(kind - 5) < 2 || this->fields.isDisplayServantEffect )
          {
            operationSortInfo = this->fields.operationSortInfo;
            if ( !operationSortInfo )
              goto LABEL_25;
            ListViewSort__SetAllSvtEquipEffectFilter(operationSortInfo, 1, 0);
          }
          else if ( kind == 16 )
          {
            v10 = this->fields.operationSortInfo;
            v11 = FilterKindList_TypeInfo;
            if ( !FilterKindList_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
              v11 = FilterKindList_TypeInfo;
            }
            operationSortInfo = (ListViewSort_o *)v11->static_fields->EquipRewardUpExcludeTypeList;
            if ( !operationSortInfo )
              goto LABEL_25;
            operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                    (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                    (const MethodInfo_38520F4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
            if ( !v10 )
              goto LABEL_25;
            ListViewSort__SetFilters(v10, (ListViewSort_FilterKind_array *)operationSortInfo, 0, 0);
            operationSortInfo = this->fields.operationSortInfo;
            if ( !operationSortInfo )
              goto LABEL_25;
            ListViewSort__SetEnableEquipRewardUpEffectFilter(operationSortInfo, 0);
          }
          if ( !this->fields.isDisplayEventBonusSkill )
          {
LABEL_16:
            ServantFilterSelectMenu__SetButtonSelect(this, v5);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v9);
            return;
          }
          operationSortInfo = (ListViewSort_o *)this->fields.svtEventBonusFilterController;
          if ( operationSortInfo )
          {
            ServantEventBonusFilterController__InitAllButton(
              (ServantEventBonusFilterController_o *)operationSortInfo,
              v5);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_25:
    sub_1C942F0(operationSortInfo, v5);
  }
}


void ServantFilterSelectMenu__Open(
        ServantFilterSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        ListViewManager_o *listViewManager,
        ServantFilterSelectMenu_CallbackFunc_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ServantFilterSelectMenu_o *v20; // x0
  const MethodInfo *v21; // x2
  ServantFilterSelectMenu_c *v22; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v24; // x1
  __int64 v25; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  ListViewSort_o *v34; // x21
  ListViewSort_o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  ServantFilterSelectMenu_o *v57; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v59; // x0
  FilterKindList_c *v60; // x0
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  struct ListViewSort_o *v66; // x8
  System_Action_o *v67; // x20

  if ( (byte_4D27729 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_ServantFilterSelectMenu_EndOpen__);
    sub_1C94098(&ServantFilterSelectMenu_TypeInfo);
    sub_1C94098(&StringLiteral_11932/*"SERVANT_SORT_RESET"*/);
    sub_1C94098(&StringLiteral_11766/*"SERVANT_SORT_CANCEL"*/);
    sub_1C94098(&StringLiteral_11656/*"SERVANT_EQUIP_FILTER_WARNING"*/);
    sub_1C94098(&StringLiteral_11770/*"SERVANT_SORT_DECIDE"*/);
    sub_1C94098(&StringLiteral_11934/*"SERVANT_SORT_TITLE2"*/);
    sub_1C94098(&StringLiteral_11767/*"SERVANT_SORT_CLEAR"*/);
    byte_4D27729 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      (int32_t)listViewManager,
      (System_String_o *)callback,
      eventId,
      (int64_t)method,
      v7);
    this->fields.eventId = eventId;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)sort,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    else
    {
      v22 = ServantFilterSelectMenu_TypeInfo;
      if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
        v22 = ServantFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v22->static_fields->commonServantSortInfo;
      v24 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo, (int32_t)v24, v14, v15, v16, v17, v18, v19);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_46;
      ListViewSort__Load(baseSortInfo, 0);
    }
    v27 = ServantFilterSelectMenu__SetKindStatus(v20, sort, v21);
    this->fields.kindStatus = v27;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.kindStatus, (int32_t)v27, v28, v29, v30, v31, v32, v33);
    v34 = this->fields.baseSortInfo;
    v35 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
    ListViewSort___ctor_44629008(v35, v34, 0);
    this->fields.operationSortInfo = v35;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    this->fields.listViewManager = listViewManager;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.listViewManager,
      (int32_t)listViewManager,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    baseSortInfo = (ListViewSort_o *)this->fields.warningLabel;
    if ( baseSortInfo )
    {
      baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseSortInfo, 0);
      if ( baseSortInfo )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 0, 0);
        baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( baseSortInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseSortInfo, 1, 0);
          titleLabel = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11934/*"SERVANT_SORT_TITLE2"*/, 0);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11656/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11770/*"SERVANT_SORT_DECIDE"*/, 0);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11767/*"SERVANT_SORT_CLEAR"*/, 0);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11766/*"SERVANT_SORT_CANCEL"*/, 0);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11932/*"SERVANT_SORT_RESET"*/, 0);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v54);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v54);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v54);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v54);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v54);
                          break;
                        case 5:
                        case 0x10:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v54);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v54);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v54);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v54);
                          break;
                        case 0xC:
                          v56 = 999;
                          v57 = this;
                          ClassExtra1FilterKindList = 0;
                          goto LABEL_39;
                        case 0xD:
                          v59 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v59 = FilterKindList_TypeInfo;
                          }
                          v56 = 14;
                          ClassExtra1FilterKindList = v59->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_38;
                        case 0xE:
                          v60 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v60 = FilterKindList_TypeInfo;
                          }
                          v56 = 15;
                          ClassExtra1FilterKindList = v60->static_fields->ClassExtra2FilterKindList;
LABEL_38:
                          v57 = this;
LABEL_39:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v57, ClassExtra1FilterKindList, v56, v55);
                          break;
                        case 0xF:
                          ServantFilterSelectMenu__InitExchangeSvtCoinDisp(this, v54);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v54);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v61);
                      ServantFilterSelectMenu__SetButtonSelect(this, v62);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v63);
                      currentFilterContainer = this->fields.currentFilterContainer;
                      if ( currentFilterContainer )
                      {
                        scrollView = currentFilterContainer->fields.scrollView;
                        if ( scrollView )
                        {
                          v66 = this->fields.baseSortInfo;
                          if ( v66 )
                          {
                            baseSortInfo = (ListViewSort_o *)scrollView->fields.verticalScrollBar;
                            if ( baseSortInfo )
                            {
                              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v66->fields.scrollBarValue, 0);
                              this->fields.state = 1;
                              v67 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                              System_Action___ctor(
                                v67,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0);
                              BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0, 0);
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
    sub_1C942F0(baseSortInfo, v25);
  }
}


void ServantFilterSelectMenu__RefreshFilterClippingPosition(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v5; // x0
  __int64 v6; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *v7; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v8; // x8
  struct UIScrollView_o *v9; // x9

  if ( (byte_4D27739 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27739 = 1;
  }
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    return;
  scrollView = (UnityEngine_Object_o *)currentFilterContainer->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UIScrollView_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
    return;
  v7 = this->fields.currentFilterContainer;
  if ( !v7 )
    goto LABEL_18;
  v5 = v7->fields.scrollView;
  if ( !v5 )
    goto LABEL_18;
  v5 = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v5->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                           v5,
                           v5->klass->vtable._6_get_shouldMoveVertically.method);
  v8 = this->fields.currentFilterContainer;
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_18;
    goto LABEL_16;
  }
  if ( !v8 || (v9 = v8->fields.scrollView) == 0 )
LABEL_18:
    sub_1C942F0(v5, v6);
  v9->fields.contentPivot = 4;
LABEL_16:
  v5 = v8->fields.scrollView;
  if ( !v5 )
    goto LABEL_18;
  UIScrollView__ResetPosition(v5, 0);
}


void ServantFilterSelectMenu__SetActiveCurrentFilterContainer(
        ServantFilterSelectMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8

  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.root) == 0 )
    sub_1C942F0(this, isActive);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterSelectMenu__SetButtonEnable(ServantFilterSelectMenu_o *this, bool isEnable, const MethodInfo *method)
{
  UICommonButton_o *decideButton; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Behaviour_o *monitor; // x0
  const MethodInfo *v9; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D2773B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4D2773B = 1;
  }
  memset(&v12, 0, sizeof(v12));
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_32;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_32;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_32;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = this->fields.initializeButton;
  if ( !decideButton )
    goto LABEL_32;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = (UICommonButton_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v6 )
      break;
    if ( !v12.fields._current )
      sub_1C942F0(v6, v7);
    monitor = (UnityEngine_Behaviour_o *)v12.fields._current[2].monitor;
    if ( !monitor )
      sub_1C942F0(0, v7);
    UnityEngine_Behaviour__set_enabled(monitor, isEnable, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEquipEffectFilterController;
    if ( !decideButton )
      goto LABEL_32;
    ServantEquipEffectFilterController__SetEnableFilterButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v9);
  }
  else
  {
    if ( kind != 16 )
      goto LABEL_20;
    decideButton = (UICommonButton_o *)this->fields.svtEquipEffectFilterController;
    if ( !decideButton )
      goto LABEL_32;
    ServantEquipEffectFilterController__SetEnableFilterRewardUpEquipButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v9);
  }
  kind = this->fields.kind;
LABEL_20:
  if ( kind == 6 )
  {
    decideButton = (UICommonButton_o *)this->fields.commandCodeEffectFilterController;
    if ( !decideButton )
      goto LABEL_32;
    ServantEquipEffectFilterController__SetEnableFilterButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v9);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEventBonusFilterController;
    if ( !decideButton )
      goto LABEL_32;
    ServantEventBonusFilterController__SetEnableFilterButton(
      (ServantEventBonusFilterController_o *)decideButton,
      isEnable,
      v9);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  decideButton = (UICommonButton_o *)this->fields.svtEffectFilterController;
  if ( !decideButton )
LABEL_32:
    sub_1C942F0(decideButton, isEnable);
  ServantEquipEffectFilterController__SetEnableFilterButton(
    (ServantEquipEffectFilterController_o *)decideButton,
    isEnable,
    v9);
}


void ServantFilterSelectMenu__SetButtonSelect(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *useFilterButtonList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v10; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v12; // w0
  const MethodInfo *v13; // x2
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_T__o *EquipRewardUpExcludeTypeList; // x0
  const MethodInfo *v16; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2773A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4D2773A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_37;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    useFilterButtonList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v4 )
      break;
    current = (ServantFilterButtonControl_o *)v19.fields._current;
    if ( !v19.fields._current )
      sub_1C942F0(v4, v5);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v19.fields._current, v5);
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1C942F0(0, v7);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_38509B4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1C942F0(0, v10);
      v12 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, current->fields.filterKind, 0);
      ServantFilterButtonControl__SetButtonMask(current, !v12, v13);
    }
    if ( this->fields.kind == 16 )
    {
      v14 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v14 = FilterKindList_TypeInfo;
      }
      EquipRewardUpExcludeTypeList = (System_Collections_Generic_List_T__o *)v14->static_fields->EquipRewardUpExcludeTypeList;
      if ( !EquipRewardUpExcludeTypeList )
        sub_1C942F0(0, v10);
      if ( System_Collections_Generic_List_Int32Enum___Contains(
             EquipRewardUpExcludeTypeList,
             current->fields.filterKind,
             (const MethodInfo_38509B4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
      {
        ServantFilterButtonControl__SetButtonMask(current, 1, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 || kind == 16 )
  {
    useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.svtEquipEffectFilterController;
    if ( !useFilterButtonList )
      goto LABEL_37;
    ServantEquipEffectFilterController__RefreshSelectState(
      (ServantEquipEffectFilterController_o *)useFilterButtonList,
      method);
    kind = this->fields.kind;
  }
  if ( kind == 6 )
  {
    useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.commandCodeEffectFilterController;
    if ( !useFilterButtonList )
      goto LABEL_37;
    ServantEquipEffectFilterController__RefreshSelectState(
      (ServantEquipEffectFilterController_o *)useFilterButtonList,
      method);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.svtEventBonusFilterController;
    if ( !useFilterButtonList )
      goto LABEL_37;
    ServantEventBonusFilterController__RefreshButtonState(
      (ServantEventBonusFilterController_o *)useFilterButtonList,
      method);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.svtEffectFilterController;
  if ( !useFilterButtonList )
LABEL_37:
    sub_1C942F0(useFilterButtonList, method);
  ServantEquipEffectFilterController__RefreshSelectState(
    (ServantEquipEffectFilterController_o *)useFilterButtonList,
    method);
}


System_Boolean_array *ServantFilterSelectMenu__SetKindStatus(
        ServantFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *AllFilterKindList; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v5; // x8
  __int64 size; // x20
  __int64 v7; // x21
  unsigned __int64 v8; // x22
  FilterKindList_c *v9; // x0

  if ( (byte_4D27742 & 1) == 0 )
  {
    sub_1C94098(&bool___TypeInfo);
    sub_1C94098(&FilterKindList_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
    byte_4D27742 = 1;
  }
  AllFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    AllFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo;
  }
  v5 = **(struct System_Collections_Generic_List_ListViewSort_FilterKind__o ***)&AllFilterKindList[4].fields._size;
  if ( !v5 )
    goto LABEL_16;
  size = (unsigned int)v5->fields._size;
  v7 = sub_1C94140(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v9 = FilterKindList_TypeInfo;
      }
      AllFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->AllFilterKindList;
      if ( !AllFilterKindList )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                    AllFilterKindList,
                                                                    v8,
                                                                    (const MethodInfo_385034C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
      if ( !sort )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(
                                                                    sort,
                                                                    (int32_t)AllFilterKindList,
                                                                    0);
      if ( !v7 )
        break;
      if ( v8 >= *(unsigned int *)(v7 + 24) )
        sub_1C942F8(AllFilterKindList);
      *(_BYTE *)(v7 + 32 + v8++) = (unsigned __int8)AllFilterKindList & 1;
      if ( size == v8 )
        return (System_Boolean_array *)v7;
    }
LABEL_16:
    sub_1C942F0(AllFilterKindList, sort);
  }
  return (System_Boolean_array *)v7;
}


bool ServantFilterSelectMenu___InitUseFilterButton_b__62_0(
        ServantFilterSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4D27746 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1C94098(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_4D27746 = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v4->fields.useFilterKindList) == 0 )
    sub_1C942F0(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_38509B4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void ServantFilterSelectMenu__add_callbackFunc(
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

  if ( (byte_4D27725 & 1) == 0 )
  {
    sub_1C94098(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4D27725 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantFilterSelectMenu_CallbackFunc_c *)v7->klass != ServantFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantFilterSelectMenu_o *)sub_1C9468C(v7);
  ServantFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *ServantFilterSelectMenu__get_closeBtnPath(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D27743 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_15698/*"Window/CancelButton"*/);
    byte_4D27743 = 1;
  }
  return (System_String_o *)StringLiteral_15698/*"Window/CancelButton"*/;
}


void ServantFilterSelectMenu__remove_callbackFunc(
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

  if ( (byte_4D27726 & 1) == 0 )
  {
    sub_1C94098(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4D27726 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantFilterSelectMenu_CallbackFunc_c *)v7->klass != ServantFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1C9468C(v7);
  ServantFilterSelectMenu__InitLoad(v10);
}


void ServantFilterSelectMenu_CallbackFunc___ctor(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC0DD4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0D8C;
}


System_IAsyncResult_o *ServantFilterSelectMenu_CallbackFunc__BeginInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D27748 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D27748 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void ServantFilterSelectMenu_CallbackFunc__Invoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ServantFilterSelectMenu_FilterContainer___ctor(
        ServantFilterSelectMenu_FilterContainer_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D27747 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
    byte_4D27747 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.categoryContainerList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.filterButtonList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D27749 & 1) == 0 )
  {
    sub_1C94098(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4D27749 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ServantFilterSelectMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantFilterSelectMenu___c_TypeInfo->static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantFilterSelectMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantFilterSelectMenu___c___ctor(ServantFilterSelectMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantFilterSelectMenu___c___InitCategoryContainer_b__63_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C942F0(this, 0);
  return e->fields.categoryKind;
}


bool ServantFilterSelectMenu___c___InitCommandCodeDisp_b__58_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 12;
}


bool ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_2(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 19;
}


bool ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_3(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 20;
}


bool ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 0;
}


bool ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.categoryKind == 4;
}


void ServantFilterSelectMenu___c__DisplayClass63_0___ctor(
        ServantFilterSelectMenu___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantFilterSelectMenu___c__DisplayClass63_0___InitCategoryContainer_b__1(
        ServantFilterSelectMenu___c__DisplayClass63_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  if ( (byte_4D2774A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_ListViewSort_FilterCategoryKind___);
    byte_4D2774A = 1;
  }
  return System_Linq_Enumerable__Contains_Int32Enum_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.categoryKindKist,
           e,
           (const MethodInfo_31B9554 *)Method_System_Linq_Enumerable_Contains_ListViewSort_FilterCategoryKind___);
}


void ServantFilterSelectMenu___c__DisplayClass63_1___ctor(
        ServantFilterSelectMenu___c__DisplayClass63_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantFilterSelectMenu___c__DisplayClass63_1___InitCategoryContainer_b__2(
        ServantFilterSelectMenu___c__DisplayClass63_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct ServantFilterCategoryContainer_o *container; // x8

  container = this->fields.container;
  if ( !container )
    sub_1C942F0(this, x);
  return container->fields.categoryKind == x;
}