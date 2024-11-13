void __fastcall ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewSort_o *v8; // x19

  if ( (byte_4B119D4 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_TypeInfo, v1, v2);
    sub_1BCA7E0(&ServantFilterSelectMenu_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12790/*"ServantFilterSelect1"*/, v6, v7);
    byte_4B119D4 = 1;
  }
  v8 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v1, v2, v3);
  ListViewSort___ctor_41480716(v8, (System_String_o *)StringLiteral_12790/*"ServantFilterSelect1"*/, 3, 0, 0LL);
  ServantFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v8;
  sub_1BCA784(ServantFilterSelectMenu_TypeInfo->static_fields, v8);
}


void __fastcall ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_T__o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1

  if ( (byte_4B119D3 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v11, v12);
    byte_4B119D3 = 1;
  }
  v13 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v13;
  sub_1BCA784(&this->fields.useFilterKindList, v13);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v17;
  sub_1BCA784(&this->fields.useFilterButtonList, v17);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v18);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu__Callback(
        ServantFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20
  struct ServantFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v7; // x1
  ListViewManager_o *warningLabel; // x0
  _BOOL4 v9; // w20
  float v10; // s0
  float v11; // s3
  float v12; // s1
  float v13; // s2

  if ( (byte_4B119D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B119D0 = 1;
  }
  if ( (unsigned int)(this->fields.kind - 5) <= 1 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
    {
      warningLabel = this->fields.listViewManager;
      if ( !warningLabel )
        goto LABEL_19;
      v9 = ListViewManager__GetMatchItemCount(warningLabel, this->fields.operationSortInfo, 0LL) == 0;
    }
    else
    {
      v9 = 0;
    }
    warningLabel = (ListViewManager_o *)this->fields.warningLabel;
    if ( warningLabel )
    {
      warningLabel = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)warningLabel,
                                            0LL);
      if ( warningLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, v9, 0LL);
        warningLabel = (ListViewManager_o *)this->fields.decideButton;
        if ( warningLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningLabel, !v9, 0LL);
          warningLabel = (ListViewManager_o *)this->fields.decideButton;
          if ( warningLabel )
          {
            warningLabel = (ListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)warningLabel,
                                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            v10 = 1.0;
            if ( v9 )
              v10 = 0.5;
            if ( warningLabel )
            {
              v11 = 1.0;
              v12 = v10;
              v13 = v10;
              UIWidget__set_color((UIWidget_o *)warningLabel, *(UnityEngine_Color_o *)&v10, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(warningLabel, v7);
  }
}


void __fastcall ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_31972172(this, 0LL, v2);
}


void __fastcall ServantFilterSelectMenu__Close_31972172(
        ServantFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B119B9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_EndClose__, v5, v6);
    byte_4B119B9 = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ServantFilterSelectMenu__EndClose(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
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
  __int64 v2; // x2
  ServantFilterSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4B119B7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_TypeInfo, v1, v2);
    byte_4B119B7 = 1;
  }
  v3 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo, v1);
    v3 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v3->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1BCAA3C(0LL, v1);
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
  ServantFilterSelectMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  int v20; // w24
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  Il2CppObject *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x1
  UnityEngine_Component_o **v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Func_T__TResult__o *v37; // x22
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  bool v40; // w8
  ServantFilterCategoryContainer_o *klass; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x1
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B119C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___, categoryKindKist, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__DisplayClass63_0__InitCategoryContainer_b__0__, v15, v16);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c__DisplayClass63_0_TypeInfo, v17, v18);
    byte_4B119C7 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !categoryKindKist )
    goto LABEL_23;
  v19 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v19 )
    sub_1BCAA44(this, categoryKindKist);
  v20 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v19 << 32) - 0x100000000LL) >> 30));
  if ( !byte_4B109C1 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, categoryKindKist, method);
    byte_4B109C1 = 1;
  }
  currentFilterContainer = v4->fields.currentFilterContainer;
  if ( !currentFilterContainer
    || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.categoryContainerList) == 0LL )
  {
LABEL_23:
    sub_1BCAA3C(this, categoryKindKist);
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v48 = v47;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v29 = (Il2CppObject *)sub_1BCAA2C(ServantFilterSelectMenu___c__DisplayClass63_0_TypeInfo, v26, v27, v28);
    System_Object___ctor(v29, 0LL);
    if ( !v29 )
      sub_1BCAA3C(v30, v31);
    current = v48.fields._current;
    v29[1].klass = (Il2CppClass *)v48.fields._current;
    v33 = (UnityEngine_Component_o **)&v29[1];
    sub_1BCA784(&v29[1], current);
    v37 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                         System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo,
                                         v34,
                                         v35,
                                         v36);
    System_Func_Int32Enum__bool____ctor(
      v37,
      v29,
      Method_ServantFilterSelectMenu___c__DisplayClass63_0__InitCategoryContainer_b__0__,
      0LL);
    v40 = BasicHelper__Any_Int32Enum__49273692(
            (System_Int32Enum_array *)categoryKindKist,
            (System_Func_T__bool__o *)v37,
            (const MethodInfo_2EFDB5C *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    klass = (ServantFilterCategoryContainer_o *)v29[1].klass;
    if ( v40 )
    {
      if ( !klass )
        sub_1BCAA3C(0LL, v38);
      ServantFilterCategoryContainer__SetActive(klass, 1, v39);
      if ( !*v33 )
        sub_1BCAA3C(0LL, v42);
      gameObject = UnityEngine_Component__get_gameObject(*v33, 0LL);
      v49.fields.x = x;
      v49.fields.y = y;
      v49.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v49, 0LL);
      if ( !*v33 )
        sub_1BCAA3C(0LL, v44);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*v33,
        HIDWORD((*v33)[2].monitor) == v20,
        v45);
      if ( !*v33 )
        sub_1BCAA3C(0LL, v46);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)*v33, v46);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !klass )
        sub_1BCAA3C(0LL, v38);
      ServantFilterCategoryContainer__SetActive(klass, 0, v39);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
}


void __fastcall ServantFilterSelectMenu__InitCommandCodeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v29; // w8
  FilterKindList_c *v30; // x0
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *commandCodeFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_o *v43; // x23
  const MethodInfo *v44; // x4
  __int64 v45; // x2
  __int64 v46; // x3
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v49; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  __int64 v51; // x1
  UnityEngine_Object_o *v52; // x20
  _DWORD *monitor; // x8
  System_Array_o *v54; // x0
  ListViewSort_FilterCategoryKind_array *v55; // x20
  const MethodInfo *v56; // x2
  System_RuntimeFieldHandle_o v57; // 0:w1.4

  v3 = this;
  if ( (byte_4B119C2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v4, v5);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v20, v21);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A,
      v22,
      v23);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__, v24, v25);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v26, v27);
    byte_4B119C2 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_27;
  v29 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v29;
  v30 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v30 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v30->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_27;
  v31 = *(_QWORD *)&this->fields.m_CachedPtr;
  v32 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v31 )
    goto LABEL_27;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v31 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v31 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  commandCodeFilterContainer = v3->fields.commandCodeFilterContainer;
  v3->fields.currentFilterContainer = commandCodeFilterContainer;
  p_currentFilterContainer = &v3->fields.currentFilterContainer;
  sub_1BCA784(&v3->fields.currentFilterContainer, commandCodeFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v36);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v37);
  commandCodeEffectFilterController = v3->fields.commandCodeEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
  System_Action___ctor(v43, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !commandCodeEffectFilterController )
    goto LABEL_27;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v43, v44);
  if ( !*p_currentFilterContainer )
    goto LABEL_27;
  categoryContainerList = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  klass = this->fields.servantEquipFilterContainer[2].klass;
  if ( !klass )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v49 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1BCAA2C(
                                                           System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                           method,
                                                           v45,
                                                           v46);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v49,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&static_fields->__9__58_0, klass);
  }
  if ( !categoryContainerList )
    goto LABEL_27;
  v52 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v52 )
    {
      monitor = v52[3].monitor;
      if ( monitor )
      {
        monitor[11] = 5;
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1BCAA3C(this, method);
  }
LABEL_26:
  v54 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v57.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  v55 = (ListViewSort_FilterCategoryKind_array *)v54;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v54, v57, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v55, v56);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__InitCommonSummonDisp(
        ServantFilterSelectMenu_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *filterKind,
        int32_t categoryKind,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x22
  int v34; // w8
  FilterKindList_c *v35; // x0
  System_Collections_Generic_List_T__o *v36; // x21
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  System_Array_o *v43; // x0
  System_Collections_Generic_IEnumerable_T__o *v44; // x23
  int m_CancellationTokenSource; // w8
  System_Array_o *v46; // x0
  System_Collections_Generic_IEnumerable_T__o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_List_T__o *v51; // x22
  __int64 v52; // x2
  __int64 v53; // x3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v59; // x24
  const MethodInfo *v60; // x4
  ListViewSort_FilterCategoryKind_array *v61; // x1
  const MethodInfo *v62; // x2
  System_RuntimeFieldHandle_o v63; // 0:w1.4
  System_RuntimeFieldHandle_o v64; // 0:w1.4

  v6 = this;
  if ( (byte_4B119C4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, filterKind, *(_QWORD *)&categoryKind);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v7, v8);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v27, v28);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44,
      v29,
      v30);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(
                                          &Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB,
                                          v31,
                                          v32);
    byte_4B119C4 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_32;
  v34 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v34;
  v35 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, filterKind);
    v35 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v35->static_fields->BonusSelectCollectionStateFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
    if ( !this )
      goto LABEL_32;
    System_Collections_Generic_List_Int32Enum___AddRange(
      (System_Collections_Generic_List_T__o *)this,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo;
  v36 = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, filterKind);
  if ( !v36 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v36,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  v37 = *(_QWORD *)&this->fields.m_CachedPtr;
  v38 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v37 )
    goto LABEL_32;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v37 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v37 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v6->fields.servantFilterConatiner;
  v6->fields.currentFilterContainer = servantFilterConatiner;
  sub_1BCA784(&v6->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v6, 1, v41);
  ServantFilterSelectMenu__InitUseFilterButton(v6, 1, v42);
  v43 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v63.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  v44 = (System_Collections_Generic_IEnumerable_T__o *)v43;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v43, v63, 0LL);
  this = (ServantFilterSelectMenu_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_32;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (LODWORD(this->fields.basePanel) = 1, m_CancellationTokenSource == 1) )
    sub_1BCAA44(this, filterKind);
  HIDWORD(this->fields.basePanel) = 2;
  v46 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 3LL);
  v64.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  v47 = (System_Collections_Generic_IEnumerable_T__o *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v46, v64, 0LL);
  v51 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo,
                                                  v48,
                                                  v49,
                                                  v50);
  System_Collections_Generic_List_Int32Enum____ctor(
    v51,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v51 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v51,
    v44,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
  {
    items = v51->fields._items;
    v55 = Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__;
    ++v51->fields._version;
    if ( !items )
      goto LABEL_32;
    size = v51->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v51,
        categoryKind,
        *(const MethodInfo_3587464 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v51->fields._size = size + 1;
      *((_DWORD *)items->m_Items + size) = categoryKind;
    }
  }
  svtEffectFilterController = v6->fields.svtEffectFilterController;
  operationSortInfo = v6->fields.operationSortInfo;
  v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, filterKind, v52, v53);
  System_Action___ctor(v59, (Il2CppObject *)v6, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
LABEL_32:
    sub_1BCAA3C(this, filterKind);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v59, v60);
  v6->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v51,
    v47,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v61 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                   v51,
                                                   (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(v6, v61, v62);
}


void __fastcall ServantFilterSelectMenu__InitCostumeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v25; // w8
  FilterKindList_c *v26; // x0
  System_Collections_Generic_List_T__o *v27; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *costumeFilterContainer; // x1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  __int64 v31; // x2
  __int64 v32; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  __int64 v38; // x1
  UnityEngine_Object_o *v39; // x20
  _DWORD *v40; // x8
  System_Array_o *v41; // x0
  ListViewSort_FilterCategoryKind_array *v42; // x20
  const MethodInfo *v43; // x2
  System_RuntimeFieldHandle_o v44; // 0:w1.4

  v3 = this;
  if ( (byte_4B119C3 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, method, v2);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v16, v17);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D,
      v18,
      v19);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, v20, v21);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v22, v23);
    byte_4B119C3 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_25;
  v25 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v25;
  v26 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v26 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v26->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_25;
  v27 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v27 )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = v3->fields.costumeFilterContainer;
  v3->fields.currentFilterContainer = costumeFilterContainer;
  sub_1BCA784(&v3->fields.currentFilterContainer, costumeFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v29);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v30);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_25;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  monitor = (System_Predicate_object__o *)this->fields.servantEquipFilterContainer[2].monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    monitor = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                              method,
                                              v31,
                                              v32);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, 0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&static_fields->__9__59_0, monitor);
  }
  if ( !categoryContainerList )
    goto LABEL_25;
  v39 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v39 )
    {
      v40 = v39[3].monitor;
      if ( v40 )
      {
        v40[11] = 5;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1BCAA3C(this, method);
  }
LABEL_24:
  v41 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
  v44.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  v42 = (ListViewSort_FilterCategoryKind_array *)v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v41, v44, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v42, v43);
}


void __fastcall ServantFilterSelectMenu__InitExchangeSvtCoinDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v13; // w8
  FilterKindList_c *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  v3 = this;
  if ( (byte_4B119C5 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, method, v2);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v8, v9);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                          v10,
                                          v11);
    byte_4B119C5 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_10;
  v13 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v13;
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v14 = FilterKindList_TypeInfo;
  }
  this = (ServantFilterSelectMenu_o *)v14->static_fields->ClassFilterKindListForShop17;
  if ( !this )
    goto LABEL_10;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                         (System_Collections_Generic_List_T__o *)this,
                                                         (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    v15,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_1BCA784(&v3->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v17);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v18);
  this = (ServantFilterSelectMenu_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 2LL);
  if ( !this )
LABEL_10:
    sub_1BCAA3C(this, method);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_1BCAA44(this, this);
  LODWORD(this->fields.basePanel) = 9;
  ServantFilterSelectMenu__InitCategoryContainer(v3, (ListViewSort_FilterCategoryKind_array *)this, v19);
}


void __fastcall ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantFilterSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4B119B6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_TypeInfo, v1, v2);
    byte_4B119B6 = 1;
  }
  v3 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo, v1);
    v3 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v3->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1BCAA3C(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantFilterSelectMenu__InitMaterialDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v33; // w8
  FilterKindList_c *v34; // x0
  System_Collections_Generic_List_T__o *v35; // x20
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  __int64 v42; // x2
  __int64 v43; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  __int64 v49; // x1
  UnityEngine_Object_o *v50; // x20
  __int64 v51; // x2
  __int64 v52; // x3
  _DWORD *v53; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v56; // x22
  const MethodInfo *v57; // x4
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x3
  __int64 *v60; // x20
  __int64 v61; // x1
  System_Array_o *v62; // x0
  __int64 v63; // x1
  ListViewSort_FilterCategoryKind_array *v64; // x20
  const MethodInfo *v65; // x2

  v3 = this;
  if ( (byte_4B119C0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v4, v5);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v22, v23);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v24,
      v25);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v26,
      v27);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, v28, v29);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v30, v31);
    byte_4B119C0 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v33 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v33;
  v34 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v34 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v34->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_39;
  v35 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v35 )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  v36 = *(_QWORD *)&this->fields.m_CachedPtr;
  v37 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v36 )
    goto LABEL_39;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v36 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_1BCA784(&v3->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v40);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v41);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_39;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  monitor = (System_Predicate_object__o *)this->fields.servantEquipFilterContainer[1].monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    monitor = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                              method,
                                              v42,
                                              v43);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, 0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&static_fields->__9__56_0, monitor);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v50 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v50 )
      goto LABEL_39;
    v53 = v50[3].monitor;
    if ( !v53 )
      goto LABEL_39;
    v53[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v51, v52);
  System_Action___ctor(v56, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v56, v57);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v58) )
  {
    v60 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    v61 = 9LL;
    goto LABEL_38;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_39:
    sub_1BCAA3C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v59);
  v60 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
  v61 = 10LL;
LABEL_38:
  v62 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, v61);
  v63 = *v60;
  v64 = (ListViewSort_FilterCategoryKind_array *)v62;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v62, (System_RuntimeFieldHandle_o)v63, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v64, v65);
}


void __fastcall ServantFilterSelectMenu__InitServantBaseDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v33; // w8
  FilterKindList_c *v34; // x0
  System_Collections_Generic_List_T__o *v35; // x20
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  __int64 v42; // x2
  __int64 v43; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v47; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  __int64 v49; // x1
  UnityEngine_Object_o *v50; // x20
  __int64 v51; // x2
  __int64 v52; // x3
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v56; // x22
  const MethodInfo *v57; // x4
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x3
  __int64 *v60; // x20
  __int64 v61; // x1
  System_Array_o *v62; // x0
  __int64 v63; // x1
  ListViewSort_FilterCategoryKind_array *v64; // x20
  const MethodInfo *v65; // x2

  v3 = this;
  if ( (byte_4B119BF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v4, v5);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v22, v23);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA,
      v24,
      v25);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D,
      v26,
      v27);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__, v28, v29);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v30, v31);
    byte_4B119BF = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  v33 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v33;
  v34 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v34 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v34->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_38;
  v35 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v35 )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  v36 = *(_QWORD *)&this->fields.m_CachedPtr;
  v37 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v36 )
    goto LABEL_38;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v36 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_1BCA784(&v3->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v40);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v41);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_38;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  klass = this->fields.servantEquipFilterContainer[1].klass;
  if ( !klass )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v47 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1BCAA2C(
                                                           System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                           method,
                                                           v42,
                                                           v43);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v47,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&static_fields->__9__55_0, klass);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v50 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v50 )
      goto LABEL_38;
    monitor = v50[3].monitor;
    if ( !monitor )
      goto LABEL_38;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v51, v52);
  System_Action___ctor(v56, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v56, v57);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v58) )
  {
    v60 = &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D;
    v61 = 9LL;
    goto LABEL_37;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_38:
    sub_1BCAA3C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v59);
  v60 = &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA;
  v61 = 10LL;
LABEL_37:
  v62 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, v61);
  v63 = *v60;
  v64 = (ListViewSort_FilterCategoryKind_array *)v62;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v62, (System_RuntimeFieldHandle_o)v63, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v64, v65);
}


void __fastcall ServantFilterSelectMenu__InitServantEquipDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v35; // w8
  FilterKindList_c *v36; // x0
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x23
  const MethodInfo *v50; // x4
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_object__o *categoryContainerList; // x21
  struct UnityEngine_GameObject_o *root; // x22
  Il2CppObject *klass; // x23
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  __int64 v57; // x1
  UnityEngine_Object_o *v58; // x21
  __int64 v59; // x2
  __int64 v60; // x3
  _DWORD *monitor; // x8
  System_Collections_Generic_List_object__o *v62; // x21
  struct UIScrollView_o *scrollView; // x22
  Il2CppObject *v64; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v65; // x0
  __int64 v66; // x1
  UnityEngine_Object_o *v67; // x21
  __int64 v68; // x2
  __int64 v69; // x3
  _DWORD *v70; // x8
  System_Collections_Generic_List_object__o *v71; // x21
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v72; // x22
  Il2CppObject *v73; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v74; // x0
  __int64 v75; // x1
  UnityEngine_Object_o *v76; // x21
  __int64 v77; // x2
  __int64 v78; // x3
  _DWORD *v79; // x8
  System_Collections_Generic_List_object__o *v80; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *v82; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v83; // x0
  __int64 v84; // x1
  UnityEngine_Object_o *v85; // x20
  _DWORD *v86; // x8
  System_Array_o *v87; // x0
  ListViewSort_FilterCategoryKind_array *v88; // x20
  const MethodInfo *v89; // x2
  System_RuntimeFieldHandle_o v90; // 0:w1.4

  v3 = this;
  if ( (byte_4B119C1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v4, v5);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v20, v21);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456,
      v22,
      v23);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__, v24, v25);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__, v26, v27);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__, v28, v29);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__, v30, v31);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v32, v33);
    byte_4B119C1 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_72;
  v35 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v35;
  v36 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v36 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v36->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipCombineStatusFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipHaveStatusFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  v37 = *(_QWORD *)&this->fields.m_CachedPtr;
  v38 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v37 )
    goto LABEL_72;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v37 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v37 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantEquipFilterContainer = v3->fields.servantEquipFilterContainer;
  v3->fields.currentFilterContainer = servantEquipFilterContainer;
  p_currentFilterContainer = &v3->fields.currentFilterContainer;
  sub_1BCA784(&v3->fields.currentFilterContainer, servantEquipFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v42);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v43);
  svtEquipEffectFilterController = v3->fields.svtEquipEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  System_Action___ctor(v49, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEquipEffectFilterController )
    goto LABEL_72;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v49, v50);
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  categoryContainerList = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  root = this->fields.servantEquipFilterContainer[1].fields.root;
  if ( !root )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    root = (struct UnityEngine_GameObject_o *)sub_1BCAA2C(
                                                System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                method,
                                                v51,
                                                v52);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&static_fields->__9__57_0, root);
  }
  if ( !categoryContainerList )
    goto LABEL_72;
  v58 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v58 )
      goto LABEL_72;
    monitor = v58[3].monitor;
    if ( !monitor )
      goto LABEL_72;
    monitor[11] = 5;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v62 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  scrollView = this->fields.servantEquipFilterContainer[1].fields.scrollView;
  if ( !scrollView )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v64 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    scrollView = (struct UIScrollView_o *)sub_1BCAA2C(
                                            System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                            method,
                                            v59,
                                            v60);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v64,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__,
      0LL);
    v65 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v65->__9__57_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&v65->__9__57_1, scrollView);
  }
  if ( !v62 )
    goto LABEL_72;
  v67 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v62,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v67 )
      goto LABEL_72;
    v70 = v67[3].monitor;
    if ( !v70 )
      goto LABEL_72;
    v70[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v71 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v72 = this->fields.servantEquipFilterContainer[1].fields.categoryContainerList;
  if ( !v72 )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v73 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    v72 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1BCAA2C(
                                                                                        System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                                        method,
                                                                                        v68,
                                                                                        v69);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v72,
      v73,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__,
      0LL);
    v74 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v74->__9__57_2 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v72;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&v74->__9__57_2, v72);
  }
  if ( !v71 )
    goto LABEL_72;
  v76 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v71,
                                  (System_Predicate_T__o *)v72,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v75);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v76, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v76 )
      goto LABEL_72;
    v79 = v76[3].monitor;
    if ( !v79 )
      goto LABEL_72;
    v79[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v80 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  filterButtonList = this->fields.servantEquipFilterContainer[1].fields.filterButtonList;
  if ( !filterButtonList )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v82 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1BCAA2C(
                                                                                                 System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                                                 method,
                                                                                                 v77,
                                                                                                 v78);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      v82,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__,
      0LL);
    v83 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v83->__9__57_3 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&v83->__9__57_3, filterButtonList);
  }
  if ( !v80 )
LABEL_72:
    sub_1BCAA3C(this, method);
  v85 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v80,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v84);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v85, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v85 )
    {
      v86 = v85[3].monitor;
      if ( v86 )
      {
        v86[11] = 4;
        goto LABEL_71;
      }
    }
    goto LABEL_72;
  }
LABEL_71:
  v87 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v90.fields.value = Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456;
  v88 = (ListViewSort_FilterCategoryKind_array *)v87;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v87, v90, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v88, v89);
}


void __fastcall ServantFilterSelectMenu__InitServantExtraClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v33; // w8
  FilterKindList_c *v34; // x0
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  __int64 v41; // x2
  __int64 v42; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct UnityEngine_GameObject_o *root; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  __int64 v48; // x1
  UnityEngine_Object_o *v49; // x20
  __int64 v50; // x2
  __int64 v51; // x3
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v55; // x22
  const MethodInfo *v56; // x4
  __int64 v57; // x2
  __int64 v58; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *v59; // x8
  System_Collections_Generic_List_object__o *v60; // x20
  struct UIScrollView_o *scrollView; // x21
  Il2CppObject *v62; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v63; // x0
  __int64 v64; // x1
  UnityEngine_Object_o *v65; // x20
  _DWORD *v66; // x8
  const MethodInfo *v67; // x3
  __int64 *v68; // x20
  __int64 v69; // x1
  System_Array_o *v70; // x0
  __int64 v71; // x1
  ListViewSort_FilterCategoryKind_array *v72; // x20
  const MethodInfo *v73; // x2

  v3 = this;
  if ( (byte_4B119BC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v4, v5);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v20, v21);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v22,
      v23);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v24,
      v25);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__, v26, v27);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__, v28, v29);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v30, v31);
    byte_4B119BC = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_51;
  v33 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v33;
  v34 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v34 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v34->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  v35 = *(_QWORD *)&this->fields.m_CachedPtr;
  v36 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v35 )
    goto LABEL_51;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v35 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v35 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_1BCA784(&v3->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v39);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v40);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_51;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  root = this->fields.servantEquipFilterContainer->fields.root;
  if ( !root )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    root = (struct UnityEngine_GameObject_o *)sub_1BCAA2C(
                                                System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                method,
                                                v41,
                                                v42);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&static_fields->__9__52_0, root);
  }
  if ( !categoryContainerList )
    goto LABEL_51;
  v49 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v49 )
      goto LABEL_51;
    monitor = v49[3].monitor;
    if ( !monitor )
      goto LABEL_51;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v50, v51);
  System_Action___ctor(v55, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_51;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v55, v56);
  v59 = v3->fields.currentFilterContainer;
  v3->fields.isDisplayServantEffect = 1;
  if ( !v59 )
    goto LABEL_51;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v60 = (System_Collections_Generic_List_object__o *)v59->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  scrollView = this->fields.servantEquipFilterContainer->fields.scrollView;
  if ( !scrollView )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v62 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    scrollView = (struct UIScrollView_o *)sub_1BCAA2C(
                                            System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                            method,
                                            v57,
                                            v58);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v62,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      0LL);
    v63 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v63->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&v63->__9__52_1, scrollView);
  }
  if ( !v60 )
    goto LABEL_51;
  v65 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v60,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v65, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v65 )
      goto LABEL_51;
    v66 = v65[3].monitor;
    if ( !v66 )
      goto LABEL_51;
    v66[11] = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, method) )
  {
    v68 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    v69 = 8LL;
    goto LABEL_50;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_51:
    sub_1BCAA3C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v67);
  v68 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
  v69 = 9LL;
LABEL_50:
  v70 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, v69);
  v71 = *v68;
  v72 = (ListViewSort_FilterCategoryKind_array *)v70;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v70, (System_RuntimeFieldHandle_o)v71, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v72, v73);
}


void __fastcall ServantFilterSelectMenu__InitServantListDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v33; // w8
  FilterKindList_c *v34; // x0
  System_Collections_Generic_List_T__o *v35; // x20
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  __int64 v42; // x2
  __int64 v43; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  __int64 v49; // x1
  UnityEngine_Object_o *v50; // x20
  __int64 v51; // x2
  __int64 v52; // x3
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v56; // x22
  const MethodInfo *v57; // x4
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x3
  __int64 *v60; // x20
  __int64 v61; // x1
  System_Array_o *v62; // x0
  __int64 v63; // x1
  ListViewSort_FilterCategoryKind_array *v64; // x20
  const MethodInfo *v65; // x2

  v3 = this;
  if ( (byte_4B119BE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v4, v5);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v22, v23);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v24,
      v25);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v26,
      v27);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__, v28, v29);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v30, v31);
    byte_4B119BE = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  v33 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v33;
  v34 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v34 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v34->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_38;
  v35 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v35 )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  v36 = *(_QWORD *)&this->fields.m_CachedPtr;
  v37 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v36 )
    goto LABEL_38;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v36 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_1BCA784(&v3->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v40);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v41);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_38;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  filterButtonList = this->fields.servantEquipFilterContainer->fields.filterButtonList;
  if ( !filterButtonList )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1BCAA2C(
                                                                                                 System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                                                 method,
                                                                                                 v42,
                                                                                                 v43);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&static_fields->__9__54_0, filterButtonList);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v50 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v50 )
      goto LABEL_38;
    monitor = v50[3].monitor;
    if ( !monitor )
      goto LABEL_38;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v51, v52);
  System_Action___ctor(v56, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v56, v57);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v58) )
  {
    v60 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    v61 = 9LL;
    goto LABEL_37;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_38:
    sub_1BCAA3C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v59);
  v60 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
  v61 = 10LL;
LABEL_37:
  v62 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, v61);
  v63 = *v60;
  v64 = (ListViewSort_FilterCategoryKind_array *)v62;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v62, (System_RuntimeFieldHandle_o)v63, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v64, v65);
}


void __fastcall ServantFilterSelectMenu__InitServantNormalDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v33; // w8
  FilterKindList_c *v34; // x0
  System_Collections_Generic_List_T__o *v35; // x20
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  __int64 v42; // x2
  __int64 v43; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  __int64 v49; // x1
  UnityEngine_Object_o *v50; // x20
  __int64 v51; // x2
  __int64 v52; // x3
  _DWORD *v53; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v56; // x22
  const MethodInfo *v57; // x4
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x3
  __int64 *v60; // x20
  __int64 v61; // x1
  System_Array_o *v62; // x0
  __int64 v63; // x1
  ListViewSort_FilterCategoryKind_array *v64; // x20
  const MethodInfo *v65; // x2

  v3 = this;
  if ( (byte_4B119BB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v4, v5);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v22, v23);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v24,
      v25);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v26,
      v27);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__, v28, v29);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v30, v31);
    byte_4B119BB = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_37;
  v33 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v33;
  v34 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v34 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v34->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_37;
  v35 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v35 )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v35,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  v36 = *(_QWORD *)&this->fields.m_CachedPtr;
  v37 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v36 )
    goto LABEL_37;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v36 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_1BCA784(&v3->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v40);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v41);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_37;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  monitor = (System_Predicate_object__o *)this->fields.servantEquipFilterContainer->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    monitor = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                              method,
                                              v42,
                                              v43);
    System_Predicate_object____ctor(
      monitor,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&static_fields->__9__51_0, monitor);
  }
  if ( !categoryContainerList )
    goto LABEL_37;
  v50 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v50 )
      goto LABEL_37;
    v53 = v50[3].monitor;
    if ( !v53 )
      goto LABEL_37;
    v53[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v51, v52);
  System_Action___ctor(v56, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_37;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v56, v57);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v58) )
  {
    v60 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    v61 = 8LL;
    goto LABEL_36;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_37:
    sub_1BCAA3C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v59);
  v60 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
  v61 = 9LL;
LABEL_36:
  v62 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, v61);
  v63 = *v60;
  v64 = (ListViewSort_FilterCategoryKind_array *)v62;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v62, (System_RuntimeFieldHandle_o)v63, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v64, v65);
}


void __fastcall ServantFilterSelectMenu__InitServantNotClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v31; // w8
  FilterKindList_c *v32; // x0
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  __int64 v39; // x2
  __int64 v40; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v43; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  __int64 v46; // x1
  UnityEngine_Object_o *v47; // x20
  __int64 v48; // x2
  __int64 v49; // x3
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v53; // x22
  const MethodInfo *v54; // x4
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x3
  __int64 *v57; // x20
  __int64 v58; // x1
  System_Array_o *v59; // x0
  __int64 v60; // x1
  ListViewSort_FilterCategoryKind_array *v61; // x20
  const MethodInfo *v62; // x2

  v3 = this;
  if ( (byte_4B119BD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v4, v5);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v20, v21);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D,
      v22,
      v23);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F,
      v24,
      v25);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__, v26, v27);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v28, v29);
    byte_4B119BD = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_34;
  v31 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v31;
  v32 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v32 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v32->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  v33 = *(_QWORD *)&this->fields.m_CachedPtr;
  v34 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v33 )
    goto LABEL_34;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v33 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_1BCA784(&v3->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v37);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v38);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_34;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v43 = this->fields.servantEquipFilterContainer->fields.categoryContainerList;
  if ( !v43 )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    v43 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1BCAA2C(
                                                                                        System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                                        method,
                                                                                        v39,
                                                                                        v40);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v43,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v43;
    this = (ServantFilterSelectMenu_o *)sub_1BCA784(&static_fields->__9__53_0, v43);
  }
  if ( !categoryContainerList )
    goto LABEL_34;
  v47 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v43,
                                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v47 )
      goto LABEL_34;
    monitor = v47[3].monitor;
    if ( !monitor )
      goto LABEL_34;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v48, v49);
  System_Action___ctor(v53, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_34;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v53, v54);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v55) )
  {
    v57 = &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F;
    v58 = 6LL;
    goto LABEL_33;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_34:
    sub_1BCAA3C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v56);
  v57 = &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D;
  v58 = 7LL;
LABEL_33:
  v59 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, v58);
  v60 = *v57;
  v61 = (ListViewSort_FilterCategoryKind_array *)v59;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v59, (System_RuntimeFieldHandle_o)v60, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v61, v62);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__InitUseFilterButton(
        ServantFilterSelectMenu_o *this,
        bool isSummon,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppClass *klass; // x8
  __int64 namespaze_low; // x2
  int v28; // w9
  Il2CppClass *v29; // x8
  System_Collections_Generic_List_object__o *v30; // x21
  System_Predicate_object__o *v31; // x22
  System_Collections_Generic_List_T__o *All; // x0
  Il2CppClass *v33; // x8
  bool i; // w20
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *monitor; // x0
  bool v39; // w22
  ListViewSort_o *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  ServantFilterButtonControl_OnClickFilterButton_o *v44; // x24
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x6
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-78h] BYREF

  v5 = (Il2CppObject *)this;
  if ( (byte_4B119C6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      isSummon,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Predicate_ServantFilterButtonControl__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_OnClickFilterButton__, v22, v23);
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(
                                          &Method_ServantFilterSelectMenu__InitUseFilterButton_b__62_0__,
                                          v24,
                                          v25);
    byte_4B119C6 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  klass = v5[16].klass;
  if ( !klass )
    goto LABEL_18;
  namespaze_low = LODWORD(klass->_1.namespaze);
  v28 = HIDWORD(klass->_1.namespaze) + 1;
  LODWORD(klass->_1.namespaze) = 0;
  HIDWORD(klass->_1.namespaze) = v28;
  if ( (int)namespaze_low >= 1 )
    System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze_low, 0LL);
  v29 = v5[15].klass;
  if ( !v29 )
    goto LABEL_18;
  v30 = *(System_Collections_Generic_List_object__o **)&v29->_1.byval_arg.bits;
  v31 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_ServantFilterButtonControl__TypeInfo,
                                        isSummon,
                                        namespaze_low,
                                        v3);
  System_Predicate_object____ctor(v31, v5, Method_ServantFilterSelectMenu__InitUseFilterButton_b__62_0__, 0LL);
  if ( !v30
    || (All = System_Collections_Generic_List_object___FindAll(
                v30,
                (System_Predicate_T__o *)v31,
                (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        v5[16].klass = (Il2CppClass *)All,
        this = (ServantFilterSelectMenu_o *)sub_1BCA784(&v5[16], All),
        (v33 = v5[15].klass) == 0LL)
    || (this = *(ServantFilterSelectMenu_o **)&v33->_1.byval_arg.bits) == 0LL )
  {
LABEL_18:
    sub_1BCAA3C(this, isSummon);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = isSummon; ; ServantFilterButtonControl__Init(
                          (ServantFilterButtonControl_o *)current,
                          v40,
                          v44,
                          v39,
                          i,
                          0,
                          v46) )
  {
    v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v35 )
      break;
    current = v47.fields._current;
    if ( !v47.fields._current )
      sub_1BCAA3C(v35, v36);
    monitor = (System_Collections_Generic_List_T__o *)v5[15].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v36);
    v39 = System_Collections_Generic_List_Int32Enum___Contains(
            monitor,
            (int32_t)v47.fields._current[2].klass,
            (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v40 = (ListViewSort_o *)v5[19].klass;
    v44 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1BCAA2C(
                                                                ServantFilterButtonControl_OnClickFilterButton_TypeInfo,
                                                                v41,
                                                                v42,
                                                                v43);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v44,
      v5,
      (intptr_t)Method_ServantFilterSelectMenu_OnClickFilterButton__,
      v45);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
        sub_1BCAA44(svtEquipEffectFilterController, v5);
      if ( !v9[v7] == (*((_BYTE *)&svtEquipEffectFilterController->fields.WIDGET_HEIGHT_ADD_VALUE + v7) != 0) )
        return 1;
      if ( v8 == ++v7 )
        goto LABEL_8;
    }
LABEL_23:
    sub_1BCAA3C(svtEquipEffectFilterController, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t eventId; // w8
  unsigned int kind; // w8
  bool result; // w0
  EventMaster_o *Master_object; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_HashSet_int__o *v29; // x20
  System_Int32_array *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  EventUpValSetupInfo_o *v34; // x21
  struct System_Int32_array *servantFilterEventIds; // x8
  Il2CppObject *v36; // x21

  if ( (byte_4B119BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBonusFilterMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v20, v21);
    byte_4B119BA = 1;
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_26;
    Master_object = (EventMaster_o *)EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
    if ( !Master_object )
      goto LABEL_26;
    v29 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( SLODWORD(Master_object->fields.list) >= 1 )
    {
      if ( this->fields.eventId >= 1 )
      {
        v29 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_HashSet_int__TypeInfo,
                                                             v26,
                                                             v27,
                                                             v28);
        System_Collections_Generic_HashSet_int____ctor(
          v29,
          (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        if ( !v29 )
          goto LABEL_26;
        System_Collections_Generic_HashSet_int___Add(
          v29,
          this->fields.eventId,
          (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v30 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v29,
              (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
      v34 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v31, v32, v33);
      EventUpValSetupInfo___ctor_39629568(v34, v30, 0, 0, 0, 0LL);
      if ( v34 )
      {
        servantFilterEventIds = v34->fields.servantFilterEventIds;
        if ( !servantFilterEventIds || !servantFilterEventIds->max_length )
        {
          result = 0;
          goto LABEL_24;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
        v36 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( v36 )
        {
          Master_object = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                             (EventBonusFilterMaster_o *)v36,
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
      sub_1BCAA3C(Master_object, v26);
    }
    return 0;
  }
  return result;
}


void __fastcall ServantFilterSelectMenu__OnClickCancel(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B119CC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_OnClickCancel__, method, v2);
    byte_4B119CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_ServantFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantFilterSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    ServantFilterSelectMenu__Callback(this, 0, v6);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickClear(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v10; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4B119CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method, v2);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_OnClickClear__, v4, v5);
    byte_4B119CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_ServantFilterSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_ServantFilterSelectMenu_OnClickClear__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0LL);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v10 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v10 )
        {
          ListViewSort__SetFilters(v10, (ListViewSort_FilterKind_array *)operationSortInfo, 0, 0LL);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v8);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v11);
            return;
          }
          operationSortInfo = (ListViewSort_o *)this->fields.svtEventBonusFilterController;
          if ( operationSortInfo )
          {
            ServantEventBonusFilterController__InitAllButton(
              (ServantEventBonusFilterController_o *)operationSortInfo,
              v8);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(operationSortInfo, v8);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickDecide(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  float value; // s0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v12; // x2

  v3 = this;
  if ( (byte_4B119CB & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(&Method_ServantFilterSelectMenu_OnClickDecide__, method, v2);
    byte_4B119CB = 1;
  }
  if ( v3->fields.state == 2 )
  {
    currentFilterContainer = v3->fields.currentFilterContainer;
    if ( !currentFilterContainer )
      goto LABEL_13;
    scrollView = currentFilterContainer->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    this = (ServantFilterSelectMenu_o *)scrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v3->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    v3->fields.state = 3;
    v8 = Method_ServantFilterSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ServantFilterSelectMenu_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    this = (ServantFilterSelectMenu_o *)v3->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_1BCAA3C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v3->fields.operationSortInfo, 0LL);
    IsChangedStatus = ServantFilterSelectMenu__IsChangedStatus(v3, v10);
    ServantFilterSelectMenu__Callback(v3, IsChangedStatus, v12);
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

  if ( (byte_4B119CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_OnClickFilterButton__, *(_QWORD *)&filterKind, method);
    byte_4B119CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantFilterSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_ServantFilterSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(0LL, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    ServantFilterSelectMenu__SetButtonSelect(this, v9);
    ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v10);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickInitialize(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v10; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4B119CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method, v2);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_OnClickInitialize__, v4, v5);
    byte_4B119CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_ServantFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_ServantFilterSelectMenu_OnClickInitialize__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0LL);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v10 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v10 )
        {
          ListViewSort__SetFilters(v10, (ListViewSort_FilterKind_array *)operationSortInfo, 1, 0LL);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v8);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v11);
            return;
          }
          operationSortInfo = (ListViewSort_o *)this->fields.svtEventBonusFilterController;
          if ( operationSortInfo )
          {
            ServantEventBonusFilterController__InitAllButton(
              (ServantEventBonusFilterController_o *)operationSortInfo,
              v8);
            goto LABEL_16;
          }
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(operationSortInfo, v8);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  ServantFilterSelectMenu_o *v36; // x0
  const MethodInfo *v37; // x2
  ServantFilterSelectMenu_c *v38; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v40; // x1
  __int64 v41; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v43; // x0
  ListViewSort_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  ListViewSort_o *v48; // x22
  __int64 v49; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  ServantFilterSelectMenu_o *v59; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v61; // x0
  FilterKindList_c *v62; // x0
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  struct ListViewSort_o *v68; // x8
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Action_o *v72; // x20

  if ( (byte_4B119B8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, sort);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v13, v14);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_ServantFilterSelectMenu_EndOpen__, v19, v20);
    sub_1BCA7E0(&ServantFilterSelectMenu_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_11975/*"SERVANT_SORT_RESET"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11714/*"SERVANT_EQUIP_FILTER_WARNING"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_11977/*"SERVANT_SORT_TITLE2"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/, v33, v34);
    byte_4B119B8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    this->fields.eventId = eventId;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      v36 = (ServantFilterSelectMenu_o *)sub_1BCA784(&this->fields.baseSortInfo, sort);
    }
    else
    {
      v38 = ServantFilterSelectMenu_TypeInfo;
      if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo, v35);
        v38 = ServantFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v38->static_fields->commonServantSortInfo;
      v40 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1BCA784(&this->fields.baseSortInfo, v40);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_46;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    v43 = ServantFilterSelectMenu__SetKindStatus(v36, sort, v37);
    this->fields.kindStatus = v43;
    sub_1BCA784(&this->fields.kindStatus, v43);
    v44 = this->fields.baseSortInfo;
    v48 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v45, v46, v47);
    ListViewSort___ctor_41481440(v48, v44, 0LL);
    this->fields.operationSortInfo = v48;
    sub_1BCA784(&this->fields.operationSortInfo, v48);
    this->fields.listViewManager = listViewManager;
    sub_1BCA784(&this->fields.listViewManager, listViewManager);
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
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11714/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0LL);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0LL);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, 0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11975/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v56);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v56);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v56);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v56);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v56);
                          break;
                        case 5:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v56);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v56);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v56);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v56);
                          break;
                        case 0xC:
                          v58 = 999;
                          v59 = this;
                          ClassExtra1FilterKindList = 0LL;
                          goto LABEL_39;
                        case 0xD:
                          v61 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v56);
                            v61 = FilterKindList_TypeInfo;
                          }
                          v58 = 14;
                          ClassExtra1FilterKindList = v61->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_38;
                        case 0xE:
                          v62 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v56);
                            v62 = FilterKindList_TypeInfo;
                          }
                          v58 = 15;
                          ClassExtra1FilterKindList = v62->static_fields->ClassExtra2FilterKindList;
LABEL_38:
                          v59 = this;
LABEL_39:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v59, ClassExtra1FilterKindList, v58, v57);
                          break;
                        case 0xF:
                          ServantFilterSelectMenu__InitExchangeSvtCoinDisp(this, v56);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v56);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v63);
                      ServantFilterSelectMenu__SetButtonSelect(this, v64);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v65);
                      currentFilterContainer = this->fields.currentFilterContainer;
                      if ( currentFilterContainer )
                      {
                        scrollView = currentFilterContainer->fields.scrollView;
                        if ( scrollView )
                        {
                          v68 = this->fields.baseSortInfo;
                          if ( v68 )
                          {
                            baseSortInfo = (ListViewSort_o *)scrollView->fields.verticalScrollBar;
                            if ( baseSortInfo )
                            {
                              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v68->fields.scrollBarValue, 0LL);
                              this->fields.state = 1;
                              v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v69, v70, v71);
                              System_Action___ctor(
                                v72,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0LL);
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
    sub_1BCAA3C(baseSortInfo, v41);
  }
}


void __fastcall ServantFilterSelectMenu__RefreshFilterClippingPosition(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v6; // x0
  __int64 v7; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *v8; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v9; // x8
  struct UIScrollView_o *v10; // x9

  if ( (byte_4B119C8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B119C8 = 1;
  }
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    return;
  scrollView = (UnityEngine_Object_o *)currentFilterContainer->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v6 = (UIScrollView_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
    return;
  v8 = this->fields.currentFilterContainer;
  if ( !v8 )
    goto LABEL_18;
  v6 = v8->fields.scrollView;
  if ( !v6 )
    goto LABEL_18;
  v6 = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v6->klass->vtable._6_get_shouldMoveVertically.method)(
                           v6,
                           v6->klass->vtable._7_get_shouldMove.methodPtr);
  v9 = this->fields.currentFilterContainer;
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_18;
    goto LABEL_16;
  }
  if ( !v9 || (v10 = v9->fields.scrollView) == 0LL )
LABEL_18:
    sub_1BCAA3C(v6, v7);
  v10->fields.contentPivot = 4;
LABEL_16:
  v6 = v9->fields.scrollView;
  if ( !v6 )
    goto LABEL_18;
  UIScrollView__ResetPosition(v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__SetActiveCurrentFilterContainer(
        ServantFilterSelectMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8

  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.root) == 0LL )
    sub_1BCAA3C(this, isActive);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__SetButtonEnable(
        ServantFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UICommonButton_o *decideButton; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  UnityEngine_Behaviour_o *monitor; // x0
  const MethodInfo *v15; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B119CA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      isEnable,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9, v10);
    byte_4B119CA = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v12 )
      break;
    if ( !v18.fields._current )
      sub_1BCAA3C(v12, v13);
    monitor = (UnityEngine_Behaviour_o *)v18.fields._current[2].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v13);
    UnityEngine_Behaviour__set_enabled(monitor, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEquipEffectFilterController;
    if ( !decideButton )
      goto LABEL_28;
    ServantEquipEffectFilterController__SetEnableFilterButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v15);
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
      v15);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEventBonusFilterController;
    if ( !decideButton )
      goto LABEL_28;
    ServantEventBonusFilterController__SetEnableFilterButton(
      (ServantEventBonusFilterController_o *)decideButton,
      isEnable,
      v15);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  decideButton = (UICommonButton_o *)this->fields.svtEffectFilterController;
  if ( !decideButton )
LABEL_28:
    sub_1BCAA3C(decideButton, isEnable);
  ServantEquipEffectFilterController__SetEnableFilterButton(
    (ServantEquipEffectFilterController_o *)decideButton,
    isEnable,
    v15);
}


void __fastcall ServantFilterSelectMenu__SetButtonSelect(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *useFilterButtonList; // x0
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v18; // x1
  FilterKindList_c *v19; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v21; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v23; // w0
  const MethodInfo *v24; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B119C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6, v7);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v12, v13);
    byte_4B119C9 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    useFilterButtonList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v15 )
      break;
    current = (ServantFilterButtonControl_o *)v27.fields._current;
    if ( !v27.fields._current )
      sub_1BCAA3C(v15, v16);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v27.fields._current, v16);
    v19 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v18);
      v19 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v19->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1BCAA3C(0LL, v18);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1BCAA3C(0LL, v21);
      v23 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v23, v24);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_1BCAA3C(useFilterButtonList, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_T__o *AllFilterKindList; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v11; // x8
  __int64 size; // x20
  System_Boolean_array *v13; // x21
  unsigned __int64 v14; // x22
  FilterKindList_c *v15; // x0

  if ( (byte_4B119D1 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, sort, method);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__, v8, v9);
    byte_4B119D1 = 1;
  }
  AllFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    AllFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo;
  }
  v11 = **(struct System_Collections_Generic_List_ListViewSort_FilterKind__o ***)&AllFilterKindList[4].fields._size;
  if ( !v11 )
    goto LABEL_16;
  size = (unsigned int)v11->fields._size;
  v13 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = FilterKindList_TypeInfo;
      if ( !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
        v15 = FilterKindList_TypeInfo;
      }
      AllFilterKindList = (System_Collections_Generic_List_T__o *)v15->static_fields->AllFilterKindList;
      if ( !AllFilterKindList )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                    AllFilterKindList,
                                                                    v14,
                                                                    (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
      if ( !sort )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(
                                                                    sort,
                                                                    (int32_t)AllFilterKindList,
                                                                    0LL);
      if ( !v13 )
        break;
      if ( v14 >= v13->max_length )
        sub_1BCAA44(AllFilterKindList, sort);
      v13->m_Items[v14++ + 4] = (unsigned __int8)AllFilterKindList & 1;
      if ( size == v14 )
        return v13;
    }
LABEL_16:
    sub_1BCAA3C(AllFilterKindList, sort);
  }
  return v13;
}


bool __fastcall ServantFilterSelectMenu___InitUseFilterButton_b__62_0(
        ServantFilterSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4B119D5 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                          x,
                                          method);
    byte_4B119D5 = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_4B119B4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B119B4 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantFilterSelectMenu_o *)sub_1BCACFC(v7);
  ServantFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantFilterSelectMenu__get_closeBtnPath(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B119D2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B119D2 = 1;
  }
  return (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/;
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

  if ( (byte_4B119B5 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B119B5 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1BCACFC(v7);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A064F4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A064AC;
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
  if ( (byte_4B119D7 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B119D7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20

  if ( (byte_4B119D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo, v9, v10);
    byte_4B119D6 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v11;
  sub_1BCA784(&this->fields.categoryContainerList, v11);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v15;
  sub_1BCA784(&this->fields.filterButtonList, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B119D8 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu___c_TypeInfo, v1, v2);
    byte_4B119D8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantFilterSelectMenu___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantFilterSelectMenu___c_TypeInfo->static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v4;
  sub_1BCA784(ServantFilterSelectMenu___c_TypeInfo->static_fields, v4);
}


void __fastcall ServantFilterSelectMenu___c___ctor(ServantFilterSelectMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantFilterSelectMenu___c___InitCommandCodeDisp_b__58_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 12;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_2(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 19;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_3(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 20;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 0;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == 4;
}


void __fastcall ServantFilterSelectMenu___c__DisplayClass63_0___ctor(
        ServantFilterSelectMenu___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantFilterSelectMenu___c__DisplayClass63_0___InitCategoryContainer_b__0(
        ServantFilterSelectMenu___c__DisplayClass63_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct ServantFilterCategoryContainer_o *container; // x8

  container = this->fields.container;
  if ( !container )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return container->fields.categoryKind == x;
}