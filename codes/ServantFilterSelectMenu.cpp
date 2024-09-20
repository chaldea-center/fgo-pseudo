void __fastcall ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19

  if ( (byte_4A5638A & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&ServantFilterSelectMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_12632/*"ServantFilterSelect1"*/);
    byte_4A5638A = 1;
  }
  v1 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40759068(v1, (System_String_o *)StringLiteral_12632/*"ServantFilterSelect1"*/, 3, 0, 0LL);
  ServantFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_1B88554(ServantFilterSelectMenu_TypeInfo->static_fields, v1);
}


void __fastcall ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4A56389 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    byte_4A56389 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v3;
  sub_1B88554(&this->fields.useFilterKindList, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v4;
  sub_1B88554(&this->fields.useFilterButtonList, v4);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1B88554(p_callbackFunc, 0LL);
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
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v4; // x1
  ListViewManager_o *warningLabel; // x0
  _BOOL4 v6; // w20
  float v7; // s0
  float v8; // s3
  float v9; // s1
  float v10; // s2

  if ( (byte_4A56386 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56386 = 1;
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
      v6 = ListViewManager__GetMatchItemCount(warningLabel, this->fields.operationSortInfo, 0LL) == 0;
    }
    else
    {
      v6 = 0;
    }
    warningLabel = (ListViewManager_o *)this->fields.warningLabel;
    if ( warningLabel )
    {
      warningLabel = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)warningLabel,
                                            0LL);
      if ( warningLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, v6, 0LL);
        warningLabel = (ListViewManager_o *)this->fields.decideButton;
        if ( warningLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningLabel, !v6, 0LL);
          warningLabel = (ListViewManager_o *)this->fields.decideButton;
          if ( warningLabel )
          {
            warningLabel = (ListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)warningLabel,
                                                  (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UISprite___);
            v7 = 1.0;
            if ( v6 )
              v7 = 0.5;
            if ( warningLabel )
            {
              v8 = 1.0;
              v9 = v7;
              v10 = v7;
              UIWidget__set_color((UIWidget_o *)warningLabel, *(UnityEngine_Color_o *)&v7, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_1B8880C(warningLabel, v4);
  }
}


void __fastcall ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_30713264(this, 0LL, v2);
}


void __fastcall ServantFilterSelectMenu__Close_30713264(
        ServantFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4A56370 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_EndClose__);
    byte_4A56370 = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
    sub_1B88554(&this->fields.closeCallbackFunc, 0LL);
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

  if ( (byte_4A5636E & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_TypeInfo);
    byte_4A5636E = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B8880C(0LL, v1);
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
  __int64 v5; // x8
  int v6; // w24
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  ServantFilterSelectMenu___c__DisplayClass62_0_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x1
  UnityEngine_Component_o **p_fields; // x20
  System_Func_T__TResult__o *v17; // x22
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  bool v20; // w8
  ServantFilterCategoryContainer_o *container; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A5637D & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_1B885B0(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo);
    byte_4A5637D = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !categoryKindKist )
    goto LABEL_23;
  v5 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v5 )
    sub_1B88814(this, categoryKindKist);
  v6 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v5 << 32) - 0x100000000LL) >> 30));
  if ( !byte_4A55CE1 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  currentFilterContainer = v4->fields.currentFilterContainer;
  if ( !currentFilterContainer
    || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.categoryContainerList) == 0LL )
  {
LABEL_23:
    sub_1B8880C(this, categoryKindKist);
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v12 = (ServantFilterSelectMenu___c__DisplayClass62_0_o *)sub_1B887FC(ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo);
    ServantFilterSelectMenu___c__DisplayClass62_0___ctor(v12, 0LL);
    if ( !v12 )
      sub_1B8880C(v13, v14);
    current = v28.fields._current;
    v12->fields.container = (struct ServantFilterCategoryContainer_o *)v28.fields._current;
    p_fields = (UnityEngine_Component_o **)&v12->fields;
    sub_1B88554(&v12->fields, current);
    v17 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      v17,
      (Il2CppObject *)v12,
      Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__,
      0LL);
    v20 = BasicHelper__Any_Int32Enum__48671640(
            (System_Int32Enum_array *)categoryKindKist,
            (System_Func_T__bool__o *)v17,
            (const MethodInfo_2E6AB98 *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    container = v12->fields.container;
    if ( v20 )
    {
      if ( !container )
        sub_1B8880C(0LL, v18);
      ServantFilterCategoryContainer__SetActive(container, 1, v19);
      if ( !*p_fields )
        sub_1B8880C(0LL, v22);
      gameObject = UnityEngine_Component__get_gameObject(*p_fields, 0LL);
      v29.fields.x = x;
      v29.fields.y = y;
      v29.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v29, 0LL);
      if ( !*p_fields )
        sub_1B8880C(0LL, v24);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*p_fields,
        HIDWORD((*p_fields)[2].monitor) == v6,
        v25);
      if ( !*p_fields )
        sub_1B8880C(0LL, v26);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(
                         (ServantFilterCategoryContainer_o *)*p_fields,
                         v26);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !container )
        sub_1B8880C(0LL, v18);
      ServantFilterCategoryContainer__SetActive(container, 0, v19);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
}


void __fastcall ServantFilterSelectMenu__InitCommandCodeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  __int64 v6; // x8
  _QWORD *v7; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *commandCodeFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x4
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v19; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v21; // x20
  _DWORD *monitor; // x8
  System_Array_o *v23; // x0
  ListViewSort_FilterCategoryKind_array *v24; // x20
  const MethodInfo *v25; // x2
  System_RuntimeFieldHandle_o v26; // 0:w1.4

  v2 = this;
  if ( (byte_4A56379 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1B885B0(&Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A56379 = 1;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_27;
  v6 = *(_QWORD *)&this->fields.m_CachedPtr;
  v7 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v6 )
    goto LABEL_27;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v6 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v6 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  commandCodeFilterContainer = v2->fields.commandCodeFilterContainer;
  v2->fields.currentFilterContainer = commandCodeFilterContainer;
  p_currentFilterContainer = &v2->fields.currentFilterContainer;
  sub_1B88554(&v2->fields.currentFilterContainer, commandCodeFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v11);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v12);
  commandCodeEffectFilterController = v2->fields.commandCodeEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !commandCodeEffectFilterController )
    goto LABEL_27;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v15, v16);
  if ( !*p_currentFilterContainer )
    goto LABEL_27;
  categoryContainerList = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  klass = this->fields.servantEquipFilterContainer[2].klass;
  if ( !klass )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v19 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v19,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&static_fields->__9__58_0, klass);
  }
  if ( !categoryContainerList )
    goto LABEL_27;
  v21 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v21 )
    {
      monitor = v21[3].monitor;
      if ( monitor )
      {
        monitor[11] = 5;
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1B8880C(this, method);
  }
LABEL_26:
  v23 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v26.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  v24 = (ListViewSort_FilterCategoryKind_array *)v23;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v23, v26, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v24, v25);
}


void __fastcall ServantFilterSelectMenu__InitCommonSummonDisp(
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
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  System_Array_o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x23
  int m_CancellationTokenSource; // w8
  System_Array_o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x21
  System_Collections_Generic_List_T__o *v22; // x22
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v28; // x24
  const MethodInfo *v29; // x4
  ListViewSort_FilterCategoryKind_array *v30; // x1
  const MethodInfo *v31; // x2
  System_RuntimeFieldHandle_o v32; // 0:w1.4
  System_RuntimeFieldHandle_o v33; // 0:w1.4

  v6 = this;
  if ( (byte_4A5637B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1B885B0(&Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB);
    byte_4A5637B = 1;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
    if ( !this )
      goto LABEL_32;
    System_Collections_Generic_List_Int32Enum___AddRange(
      (System_Collections_Generic_List_T__o *)this,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo;
  v10 = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    this = (ServantFilterSelectMenu_o *)j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  if ( !v10 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  v11 = *(_QWORD *)&this->fields.m_CachedPtr;
  v12 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v11 )
    goto LABEL_32;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v11 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v11 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v6->fields.servantFilterConatiner;
  v6->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B88554(&v6->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v6, 1, v15);
  ServantFilterSelectMenu__InitUseFilterButton(v6, 1, v16);
  v17 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v32.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)v17;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v17, v32, 0LL);
  this = (ServantFilterSelectMenu_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_32;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (LODWORD(this->fields.basePanel) = 1, m_CancellationTokenSource == 1) )
    sub_1B88814(this, filterKind);
  HIDWORD(this->fields.basePanel) = 2;
  v20 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, 3LL);
  v33.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v20;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v20, v33, 0LL);
  v22 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v22,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v22 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v22,
    v18,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
  {
    items = v22->fields._items;
    v24 = Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__;
    ++v22->fields._version;
    if ( !items )
      goto LABEL_32;
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v22,
        categoryKind,
        *(const MethodInfo_34E303C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v22->fields._size = size + 1;
      *((_DWORD *)items->m_Items + size) = categoryKind;
    }
  }
  svtEffectFilterController = v6->fields.svtEffectFilterController;
  operationSortInfo = v6->fields.operationSortInfo;
  v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v6, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
LABEL_32:
    sub_1B8880C(this, filterKind);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v28, v29);
  v6->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v22,
    v21,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v30 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                   v22,
                                                   (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(v6, v30, v31);
}


void __fastcall ServantFilterSelectMenu__InitCostumeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *costumeFilterContainer; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v15; // x20
  _DWORD *v16; // x8
  System_Array_o *v17; // x0
  ListViewSort_FilterCategoryKind_array *v18; // x20
  const MethodInfo *v19; // x2
  System_RuntimeFieldHandle_o v20; // 0:w1.4

  v2 = this;
  if ( (byte_4A5637A & 1) == 0 )
  {
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A5637A = 1;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_25;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = v2->fields.costumeFilterContainer;
  v2->fields.currentFilterContainer = costumeFilterContainer;
  sub_1B88554(&v2->fields.currentFilterContainer, costumeFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v8);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v9);
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
  monitor = (System_Predicate_object__o *)this->fields.servantEquipFilterContainer[2].monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    monitor = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, 0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&static_fields->__9__59_0, monitor);
  }
  if ( !categoryContainerList )
    goto LABEL_25;
  v15 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v15 )
    {
      v16 = v15[3].monitor;
      if ( v16 )
      {
        v16[11] = 5;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1B8880C(this, method);
  }
LABEL_24:
  v17 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
  v20.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  v18 = (ListViewSort_FilterCategoryKind_array *)v17;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v17, v20, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v18, v19);
}


void __fastcall ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4A5636D & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_TypeInfo);
    byte_4A5636D = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B8880C(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantFilterSelectMenu__InitMaterialDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  __int64 v7; // x8
  _QWORD *v8; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v18; // x20
  _DWORD *v19; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x3
  __int64 *v26; // x20
  __int64 v27; // x1
  System_Array_o *v28; // x0
  __int64 v29; // x1
  ListViewSort_FilterCategoryKind_array *v30; // x20
  const MethodInfo *v31; // x2

  v2 = this;
  if ( (byte_4A56377 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1B885B0(&Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE);
    sub_1B885B0(&Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A56377 = 1;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_39;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  v7 = *(_QWORD *)&this->fields.m_CachedPtr;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v7 )
    goto LABEL_39;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v7 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v7 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B88554(&v2->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v11);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v12);
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
  monitor = (System_Predicate_object__o *)this->fields.servantEquipFilterContainer[1].monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    monitor = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, 0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&static_fields->__9__56_0, monitor);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v18 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_39;
    v19 = v18[3].monitor;
    if ( !v19 )
      goto LABEL_39;
    v19[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v22, v23);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v24) )
  {
    v26 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    v27 = 9LL;
    goto LABEL_38;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_39:
    sub_1B8880C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v25);
  v26 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
  v27 = 10LL;
LABEL_38:
  v28 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, v27);
  v29 = *v26;
  v30 = (ListViewSort_FilterCategoryKind_array *)v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v28, (System_RuntimeFieldHandle_o)v29, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v30, v31);
}


void __fastcall ServantFilterSelectMenu__InitServantBaseDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  __int64 v7; // x8
  _QWORD *v8; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v16; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v18; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x3
  __int64 *v26; // x20
  __int64 v27; // x1
  System_Array_o *v28; // x0
  __int64 v29; // x1
  ListViewSort_FilterCategoryKind_array *v30; // x20
  const MethodInfo *v31; // x2

  v2 = this;
  if ( (byte_4A56376 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1B885B0(&Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA);
    sub_1B885B0(&Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A56376 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_38;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  v7 = *(_QWORD *)&this->fields.m_CachedPtr;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v7 )
    goto LABEL_38;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v7 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v7 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B88554(&v2->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v11);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v12);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_38;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  klass = this->fields.servantEquipFilterContainer[1].klass;
  if ( !klass )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v16 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v16,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&static_fields->__9__55_0, klass);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v18 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_38;
    monitor = v18[3].monitor;
    if ( !monitor )
      goto LABEL_38;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v22, v23);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v24) )
  {
    v26 = &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D;
    v27 = 9LL;
    goto LABEL_37;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_38:
    sub_1B8880C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v25);
  v26 = &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA;
  v27 = 10LL;
LABEL_37:
  v28 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, v27);
  v29 = *v26;
  v30 = (ListViewSort_FilterCategoryKind_array *)v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v28, (System_RuntimeFieldHandle_o)v29, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v30, v31);
}


void __fastcall ServantFilterSelectMenu__InitServantEquipDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  __int64 v6; // x8
  _QWORD *v7; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x4
  System_Collections_Generic_List_object__o *categoryContainerList; // x21
  struct UnityEngine_GameObject_o *root; // x22
  Il2CppObject *klass; // x23
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v21; // x21
  _DWORD *monitor; // x8
  System_Collections_Generic_List_object__o *v23; // x21
  struct UIScrollView_o *scrollView; // x22
  Il2CppObject *v25; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v26; // x0
  UnityEngine_Object_o *v27; // x21
  _DWORD *v28; // x8
  System_Collections_Generic_List_object__o *v29; // x21
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v30; // x22
  Il2CppObject *v31; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v32; // x0
  UnityEngine_Object_o *v33; // x21
  _DWORD *v34; // x8
  System_Collections_Generic_List_object__o *v35; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *v37; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v38; // x0
  UnityEngine_Object_o *v39; // x20
  _DWORD *v40; // x8
  System_Array_o *v41; // x0
  ListViewSort_FilterCategoryKind_array *v42; // x20
  const MethodInfo *v43; // x2
  System_RuntimeFieldHandle_o v44; // 0:w1.4

  v2 = this;
  if ( (byte_4A56378 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1B885B0(&Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A56378 = 1;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipCombineStatusFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipHaveStatusFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  v6 = *(_QWORD *)&this->fields.m_CachedPtr;
  v7 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v6 )
    goto LABEL_72;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v6 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v6 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantEquipFilterContainer = v2->fields.servantEquipFilterContainer;
  v2->fields.currentFilterContainer = servantEquipFilterContainer;
  p_currentFilterContainer = &v2->fields.currentFilterContainer;
  sub_1B88554(&v2->fields.currentFilterContainer, servantEquipFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v11);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v12);
  svtEquipEffectFilterController = v2->fields.svtEquipEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEquipEffectFilterController )
    goto LABEL_72;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v15, v16);
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  categoryContainerList = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  root = this->fields.servantEquipFilterContainer[1].fields.root;
  if ( !root )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    root = (struct UnityEngine_GameObject_o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&static_fields->__9__57_0, root);
  }
  if ( !categoryContainerList )
    goto LABEL_72;
  v21 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_72;
    monitor = v21[3].monitor;
    if ( !monitor )
      goto LABEL_72;
    monitor[11] = 5;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v23 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  scrollView = this->fields.servantEquipFilterContainer[1].fields.scrollView;
  if ( !scrollView )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v25 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    scrollView = (struct UIScrollView_o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v25,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__,
      0LL);
    v26 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v26->__9__57_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&v26->__9__57_1, scrollView);
  }
  if ( !v23 )
    goto LABEL_72;
  v27 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v23,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_72;
    v28 = v27[3].monitor;
    if ( !v28 )
      goto LABEL_72;
    v28[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v29 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v30 = this->fields.servantEquipFilterContainer[1].fields.categoryContainerList;
  if ( !v30 )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v31 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    v30 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v30,
      v31,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__,
      0LL);
    v32 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v32->__9__57_2 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v30;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&v32->__9__57_2, v30);
  }
  if ( !v29 )
    goto LABEL_72;
  v33 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v29,
                                  (System_Predicate_T__o *)v30,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v33 )
      goto LABEL_72;
    v34 = v33[3].monitor;
    if ( !v34 )
      goto LABEL_72;
    v34[11] = 4;
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
  filterButtonList = this->fields.servantEquipFilterContainer[1].fields.filterButtonList;
  if ( !filterButtonList )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v37 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      v37,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__,
      0LL);
    v38 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v38->__9__57_3 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&v38->__9__57_3, filterButtonList);
  }
  if ( !v35 )
LABEL_72:
    sub_1B8880C(this, method);
  v39 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v35,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v39 )
    {
      v40 = v39[3].monitor;
      if ( v40 )
      {
        v40[11] = 4;
        goto LABEL_71;
      }
    }
    goto LABEL_72;
  }
LABEL_71:
  v41 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v44.fields.value = Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456;
  v42 = (ListViewSort_FilterCategoryKind_array *)v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v41, v44, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v42, v43);
}


void __fastcall ServantFilterSelectMenu__InitServantExtraClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  __int64 v6; // x8
  _QWORD *v7; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct UnityEngine_GameObject_o *root; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v17; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *v23; // x8
  System_Collections_Generic_List_object__o *v24; // x20
  struct UIScrollView_o *scrollView; // x21
  Il2CppObject *v26; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v27; // x0
  UnityEngine_Object_o *v28; // x20
  _DWORD *v29; // x8
  const MethodInfo *v30; // x3
  __int64 *v31; // x20
  __int64 v32; // x1
  System_Array_o *v33; // x0
  __int64 v34; // x1
  ListViewSort_FilterCategoryKind_array *v35; // x20
  const MethodInfo *v36; // x2

  v2 = this;
  if ( (byte_4A56373 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1B885B0(&Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754);
    sub_1B885B0(&Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A56373 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_51;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  v6 = *(_QWORD *)&this->fields.m_CachedPtr;
  v7 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v6 )
    goto LABEL_51;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v6 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v6 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B88554(&v2->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v10);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v11);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_51;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  root = this->fields.servantEquipFilterContainer->fields.root;
  if ( !root )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    root = (struct UnityEngine_GameObject_o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&static_fields->__9__52_0, root);
  }
  if ( !categoryContainerList )
    goto LABEL_51;
  v17 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_51;
    monitor = v17[3].monitor;
    if ( !monitor )
      goto LABEL_51;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_51;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v21, v22);
  v23 = v2->fields.currentFilterContainer;
  v2->fields.isDisplayServantEffect = 1;
  if ( !v23 )
    goto LABEL_51;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v24 = (System_Collections_Generic_List_object__o *)v23->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  scrollView = this->fields.servantEquipFilterContainer->fields.scrollView;
  if ( !scrollView )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v26 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    scrollView = (struct UIScrollView_o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v26,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      0LL);
    v27 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v27->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&v27->__9__52_1, scrollView);
  }
  if ( !v24 )
    goto LABEL_51;
  v28 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v24,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_51;
    v29 = v28[3].monitor;
    if ( !v29 )
      goto LABEL_51;
    v29[11] = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, method) )
  {
    v31 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    v32 = 8LL;
    goto LABEL_50;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_51:
    sub_1B8880C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v30);
  v31 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
  v32 = 9LL;
LABEL_50:
  v33 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, v32);
  v34 = *v31;
  v35 = (ListViewSort_FilterCategoryKind_array *)v33;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v33, (System_RuntimeFieldHandle_o)v34, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v35, v36);
}


void __fastcall ServantFilterSelectMenu__InitServantListDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  __int64 v7; // x8
  _QWORD *v8; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v18; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x3
  __int64 *v26; // x20
  __int64 v27; // x1
  System_Array_o *v28; // x0
  __int64 v29; // x1
  ListViewSort_FilterCategoryKind_array *v30; // x20
  const MethodInfo *v31; // x2

  v2 = this;
  if ( (byte_4A56375 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1B885B0(&Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE);
    sub_1B885B0(&Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A56375 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_38;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  v7 = *(_QWORD *)&this->fields.m_CachedPtr;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v7 )
    goto LABEL_38;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v7 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v7 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B88554(&v2->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v11);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v12);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_38;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  filterButtonList = this->fields.servantEquipFilterContainer->fields.filterButtonList;
  if ( !filterButtonList )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&static_fields->__9__54_0, filterButtonList);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v18 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_38;
    monitor = v18[3].monitor;
    if ( !monitor )
      goto LABEL_38;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v22, v23);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v24) )
  {
    v26 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    v27 = 9LL;
    goto LABEL_37;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_38:
    sub_1B8880C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v25);
  v26 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
  v27 = 10LL;
LABEL_37:
  v28 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, v27);
  v29 = *v26;
  v30 = (ListViewSort_FilterCategoryKind_array *)v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v28, (System_RuntimeFieldHandle_o)v29, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v30, v31);
}


void __fastcall ServantFilterSelectMenu__InitServantNormalDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20
  __int64 v7; // x8
  _QWORD *v8; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v18; // x20
  _DWORD *v19; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x3
  __int64 *v26; // x20
  __int64 v27; // x1
  System_Array_o *v28; // x0
  __int64 v29; // x1
  ListViewSort_FilterCategoryKind_array *v30; // x20
  const MethodInfo *v31; // x2

  v2 = this;
  if ( (byte_4A56372 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1B885B0(&Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754);
    sub_1B885B0(&Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A56372 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_37;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_37;
  v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v6 )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  v7 = *(_QWORD *)&this->fields.m_CachedPtr;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v7 )
    goto LABEL_37;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v7 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v7 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B88554(&v2->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v11);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v12);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_37;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  monitor = (System_Predicate_object__o *)this->fields.servantEquipFilterContainer->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    monitor = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      monitor,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&static_fields->__9__51_0, monitor);
  }
  if ( !categoryContainerList )
    goto LABEL_37;
  v18 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_37;
    v19 = v18[3].monitor;
    if ( !v19 )
      goto LABEL_37;
    v19[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_37;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v22, v23);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v24) )
  {
    v26 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    v27 = 8LL;
    goto LABEL_36;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_37:
    sub_1B8880C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v25);
  v26 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
  v27 = 9LL;
LABEL_36:
  v28 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, v27);
  v29 = *v26;
  v30 = (ListViewSort_FilterCategoryKind_array *)v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v28, (System_RuntimeFieldHandle_o)v29, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v30, v31);
}


void __fastcall ServantFilterSelectMenu__InitServantNotClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  __int64 v6; // x8
  _QWORD *v7; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v14; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v17; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x4
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  __int64 *v25; // x20
  __int64 v26; // x1
  System_Array_o *v27; // x0
  __int64 v28; // x1
  ListViewSort_FilterCategoryKind_array *v29; // x20
  const MethodInfo *v30; // x2

  v2 = this;
  if ( (byte_4A56374 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_1B885B0(&Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D);
    sub_1B885B0(&Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F);
    sub_1B885B0(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A56374 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_34;
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
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_34E3248 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  v6 = *(_QWORD *)&this->fields.m_CachedPtr;
  v7 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v6 )
    goto LABEL_34;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v6 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v6 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v2->fields.servantFilterConatiner;
  v2->fields.currentFilterContainer = servantFilterConatiner;
  sub_1B88554(&v2->fields.currentFilterContainer, servantFilterConatiner);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v10);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v11);
  currentFilterContainer = v2->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_34;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v14 = this->fields.servantEquipFilterContainer->fields.categoryContainerList;
  if ( !v14 )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    v14 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1B887FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v14,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v14;
    this = (ServantFilterSelectMenu_o *)sub_1B88554(&static_fields->__9__53_0, v14);
  }
  if ( !categoryContainerList )
    goto LABEL_34;
  v17 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v14,
                                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_34;
    monitor = v17[3].monitor;
    if ( !monitor )
      goto LABEL_34;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_34;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v21, v22);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v23) )
  {
    v25 = &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F;
    v26 = 6LL;
    goto LABEL_33;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_34:
    sub_1B8880C(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v24);
  v25 = &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D;
  v26 = 7LL;
LABEL_33:
  v27 = (System_Array_o *)sub_1B88658(ListViewSort_FilterCategoryKind___TypeInfo, v26);
  v28 = *v25;
  v29 = (ListViewSort_FilterCategoryKind_array *)v27;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v27, (System_RuntimeFieldHandle_o)v28, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v29, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__InitUseFilterButton(
        ServantFilterSelectMenu_o *this,
        bool isSummon,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  Il2CppClass *klass; // x8
  int32_t namespaze; // w2
  int v7; // w9
  Il2CppClass *v8; // x8
  System_Collections_Generic_List_object__o *v9; // x21
  System_Predicate_object__o *v10; // x22
  System_Collections_Generic_List_T__o *All; // x0
  Il2CppClass *v12; // x8
  bool i; // w20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *monitor; // x0
  bool v18; // w22
  ListViewSort_o *v19; // x23
  ServantFilterButtonControl_OnClickFilterButton_o *v20; // x24
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x6
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5637C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_1B885B0(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_1B885B0(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_OnClickFilterButton__);
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__);
    byte_4A5637C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  klass = v4[16].klass;
  if ( !klass )
    goto LABEL_18;
  namespaze = (int32_t)klass->_1.namespaze;
  v7 = HIDWORD(klass->_1.namespaze) + 1;
  LODWORD(klass->_1.namespaze) = 0;
  HIDWORD(klass->_1.namespaze) = v7;
  if ( namespaze >= 1 )
    System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze, 0LL);
  v8 = v4[15].klass;
  if ( !v8 )
    goto LABEL_18;
  v9 = *(System_Collections_Generic_List_object__o **)&v8->_1.byval_arg.bits;
  v10 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(v10, v4, Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__, 0LL);
  if ( !v9
    || (All = System_Collections_Generic_List_object___FindAll(
                v9,
                (System_Predicate_T__o *)v10,
                (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        v4[16].klass = (Il2CppClass *)All,
        this = (ServantFilterSelectMenu_o *)sub_1B88554(&v4[16], All),
        (v12 = v4[15].klass) == 0LL)
    || (this = *(ServantFilterSelectMenu_o **)&v12->_1.byval_arg.bits) == 0LL )
  {
LABEL_18:
    sub_1B8880C(this, isSummon);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = isSummon; ; ServantFilterButtonControl__Init(
                          (ServantFilterButtonControl_o *)current,
                          v19,
                          v20,
                          v18,
                          i,
                          0,
                          v22) )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v14 )
      break;
    current = v23.fields._current;
    if ( !v23.fields._current )
      sub_1B8880C(v14, v15);
    monitor = (System_Collections_Generic_List_T__o *)v4[15].monitor;
    if ( !monitor )
      sub_1B8880C(0LL, v15);
    v18 = System_Collections_Generic_List_Int32Enum___Contains(
            monitor,
            (int32_t)v23.fields._current[2].klass,
            (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v19 = (ListViewSort_o *)v4[19].klass;
    v20 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1B887FC(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v20,
      v4,
      (intptr_t)Method_ServantFilterSelectMenu_OnClickFilterButton__,
      v21);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
        sub_1B88814(svtEquipEffectFilterController, v5);
      if ( !v9[v7] == (*((_BYTE *)&svtEquipEffectFilterController->fields.WIDGET_HEIGHT_ADD_VALUE + v7) != 0) )
        return 1;
      if ( v8 == ++v7 )
        goto LABEL_8;
    }
LABEL_23:
    sub_1B8880C(svtEquipEffectFilterController, v5);
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

  if ( (byte_4A56371 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    byte_4A56371 = 1;
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
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_26;
    Master_object = (EventMaster_o *)EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
    if ( !Master_object )
      goto LABEL_26;
    v8 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( SLODWORD(Master_object->fields.list) >= 1 )
    {
      if ( this->fields.eventId >= 1 )
      {
        v8 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v8,
          (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
        if ( !v8 )
          goto LABEL_26;
        System_Collections_Generic_HashSet_int___Add(
          v8,
          this->fields.eventId,
          (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v9 = System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v8,
             (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
      v10 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor_38910068(v10, v9, 0, 0, 0, 0LL);
      if ( v10 )
      {
        servantFilterEventIds = v10->fields.servantFilterEventIds;
        if ( !servantFilterEventIds || !servantFilterEventIds->max_length )
        {
          result = 0;
          goto LABEL_24;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v12 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( v12 )
        {
          Master_object = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                             (EventBonusFilterMaster_o *)v12,
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
      sub_1B8880C(Master_object, v7);
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

  if ( (byte_4A56382 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantFilterSelectMenu_OnClickCancel__);
    byte_4A56382 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    ServantFilterSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickClear(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4A56383 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&Method_ServantFilterSelectMenu_OnClickClear__);
    byte_4A56383 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantFilterSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0LL);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v7 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v7 )
        {
          ListViewSort__SetFilters(v7, (ListViewSort_FilterKind_array *)operationSortInfo, 0, 0LL);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v5);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v8);
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
LABEL_18:
    sub_1B8880C(operationSortInfo, v5);
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
  if ( (byte_4A56381 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&Method_ServantFilterSelectMenu_OnClickDecide__);
    byte_4A56381 = 1;
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
      v7 = (_QWORD *)sub_1B885C8();
    v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (ServantFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_1B8880C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    IsChangedStatus = ServantFilterSelectMenu__IsChangedStatus(v2, v9);
    ServantFilterSelectMenu__Callback(v2, IsChangedStatus, v11);
  }
}


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

  if ( (byte_4A56385 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantFilterSelectMenu_OnClickFilterButton__);
    byte_4A56385 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantFilterSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8();
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B8880C(0LL, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    ServantFilterSelectMenu__SetButtonSelect(this, v9);
    ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v10);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickInitialize(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4A56384 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&Method_ServantFilterSelectMenu_OnClickInitialize__);
    byte_4A56384 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0LL);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v7 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v7 )
        {
          ListViewSort__SetFilters(v7, (ListViewSort_FilterKind_array *)operationSortInfo, 1, 0LL);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v5);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v8);
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
LABEL_18:
    sub_1B8880C(operationSortInfo, v5);
  }
}


void __fastcall ServantFilterSelectMenu__Open(
        ServantFilterSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        ListViewManager_o *listViewManager,
        ServantFilterSelectMenu_CallbackFunc_o *callback,
        int32_t eventId,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v13; // x0
  const MethodInfo *v14; // x2
  ServantFilterSelectMenu_c *v15; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v17; // x1
  __int64 v18; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v20; // x0
  ListViewSort_o *v21; // x21
  ListViewSort_o *v22; // x22
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  ServantFilterSelectMenu_o *v32; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v34; // x0
  FilterKindList_c *v35; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  struct ListViewSort_o *v41; // x8
  System_Action_o *v42; // x20

  if ( (byte_4A5636F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantFilterSelectMenu_EndOpen__);
    sub_1B885B0(&ServantFilterSelectMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_11837/*"SERVANT_SORT_RESET"*/);
    sub_1B885B0(&StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11576/*"SERVANT_EQUIP_FILTER_WARNING"*/);
    sub_1B885B0(&StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11839/*"SERVANT_SORT_TITLE2"*/);
    sub_1B885B0(&StringLiteral_11687/*"SERVANT_SORT_CLEAR"*/);
    byte_4A5636F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B88554(&this->fields.callbackFunc, callback);
    this->fields.eventId = eventId;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      v13 = (ServantFilterSelectMenu_o *)sub_1B88554(&this->fields.baseSortInfo, sort);
    }
    else
    {
      v15 = ServantFilterSelectMenu_TypeInfo;
      if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
        v15 = ServantFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v15->static_fields->commonServantSortInfo;
      v17 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_1B88554(&this->fields.baseSortInfo, v17);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_45;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    v20 = ServantFilterSelectMenu__SetKindStatus(v13, sort, v14);
    this->fields.kindStatus = v20;
    sub_1B88554(&this->fields.kindStatus, v20);
    v21 = this->fields.baseSortInfo;
    v22 = (ListViewSort_o *)sub_1B887FC(ListViewSort_TypeInfo);
    ListViewSort___ctor_40759792(v22, v21, 0LL);
    this->fields.operationSortInfo = v22;
    sub_1B88554(&this->fields.operationSortInfo, v22);
    this->fields.listViewManager = listViewManager;
    sub_1B88554(&this->fields.listViewManager, listViewManager);
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
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11576/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0LL);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0LL);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11690/*"SERVANT_SORT_DECIDE"*/, 0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11687/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11686/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11837/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v29);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v29);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v29);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v29);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v29);
                          break;
                        case 5:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v29);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v29);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v29);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v29);
                          break;
                        case 0xC:
                          v31 = 999;
                          v32 = this;
                          ClassExtra1FilterKindList = 0LL;
                          goto LABEL_39;
                        case 0xD:
                          v34 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v34 = FilterKindList_TypeInfo;
                          }
                          v31 = 14;
                          ClassExtra1FilterKindList = v34->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_38;
                        case 0xE:
                          v35 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v35 = FilterKindList_TypeInfo;
                          }
                          v31 = 15;
                          ClassExtra1FilterKindList = v35->static_fields->ClassExtra2FilterKindList;
LABEL_38:
                          v32 = this;
LABEL_39:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v32, ClassExtra1FilterKindList, v31, v30);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v29);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v36);
                      ServantFilterSelectMenu__SetButtonSelect(this, v37);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v38);
                      currentFilterContainer = this->fields.currentFilterContainer;
                      if ( currentFilterContainer )
                      {
                        scrollView = currentFilterContainer->fields.scrollView;
                        if ( scrollView )
                        {
                          v41 = this->fields.baseSortInfo;
                          if ( v41 )
                          {
                            baseSortInfo = (ListViewSort_o *)scrollView->fields.verticalScrollBar;
                            if ( baseSortInfo )
                            {
                              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v41->fields.scrollBarValue, 0LL);
                              this->fields.state = 1;
                              v42 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                              System_Action___ctor(
                                v42,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0LL);
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
LABEL_45:
    sub_1B8880C(baseSortInfo, v18);
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

  if ( (byte_4A5637E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5637E = 1;
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
    sub_1B8880C(v5, v6);
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
    sub_1B8880C(this, isActive);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__SetButtonEnable(
        ServantFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *decideButton; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Behaviour_o *monitor; // x0
  const MethodInfo *v9; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A56380 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4A56380 = 1;
  }
  memset(&v12, 0, sizeof(v12));
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v6 )
      break;
    if ( !v12.fields._current )
      sub_1B8880C(v6, v7);
    monitor = (UnityEngine_Behaviour_o *)v12.fields._current[2].monitor;
    if ( !monitor )
      sub_1B8880C(0LL, v7);
    UnityEngine_Behaviour__set_enabled(monitor, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEquipEffectFilterController;
    if ( !decideButton )
      goto LABEL_28;
    ServantEquipEffectFilterController__SetEnableFilterButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v9);
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
      v9);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEventBonusFilterController;
    if ( !decideButton )
      goto LABEL_28;
    ServantEventBonusFilterController__SetEnableFilterButton(
      (ServantEventBonusFilterController_o *)decideButton,
      isEnable,
      v9);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  decideButton = (UICommonButton_o *)this->fields.svtEffectFilterController;
  if ( !decideButton )
LABEL_28:
    sub_1B8880C(decideButton, isEnable);
  ServantEquipEffectFilterController__SetEnableFilterButton(
    (ServantEquipEffectFilterController_o *)decideButton,
    isEnable,
    v9);
}


void __fastcall ServantFilterSelectMenu__SetButtonSelect(ServantFilterSelectMenu_o *this, const MethodInfo *method)
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
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5637F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4A5637F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    useFilterButtonList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v4 )
      break;
    current = (ServantFilterButtonControl_o *)v16.fields._current;
    if ( !v16.fields._current )
      sub_1B8880C(v4, v5);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v16.fields._current, v5);
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1B8880C(0LL, v7);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1B8880C(0LL, v10);
      v12 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v12, v13);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_1B8880C(useFilterButtonList, method);
  ServantEquipEffectFilterController__RefreshSelectState(
    (ServantEquipEffectFilterController_o *)useFilterButtonList,
    method);
}


System_Boolean_array *__fastcall ServantFilterSelectMenu__SetKindStatus(
        ServantFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *AllFilterKindList; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v5; // x8
  __int64 size; // x20
  System_Boolean_array *v7; // x21
  unsigned __int64 v8; // x22
  FilterKindList_c *v9; // x0

  if ( (byte_4A56387 & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
    byte_4A56387 = 1;
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
  v7 = (System_Boolean_array *)sub_1B88658(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
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
                                                                    (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
      if ( !sort )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(
                                                                    sort,
                                                                    (int32_t)AllFilterKindList,
                                                                    0LL);
      if ( !v7 )
        break;
      if ( v8 >= v7->max_length )
        sub_1B88814(AllFilterKindList, sort);
      v7->m_Items[v8++ + 4] = (unsigned __int8)AllFilterKindList & 1;
      if ( size == v8 )
        return v7;
    }
LABEL_16:
    sub_1B8880C(AllFilterKindList, sort);
  }
  return v7;
}


bool __fastcall ServantFilterSelectMenu___InitUseFilterButton_b__61_0(
        ServantFilterSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4A5638B & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_4A5638B = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1B8880C(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_34E33B4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_4A5636B & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4A5636B = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantFilterSelectMenu_o *)sub_1B88ACC(v7);
  ServantFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantFilterSelectMenu__get_closeBtnPath(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56388 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4A56388 = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/;
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

  if ( (byte_4A5636C & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4A5636C = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B88ACC(v7);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C8228;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C81E0;
}


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
  if ( (byte_4A56C5D & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A56C5D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4A56C5C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
    byte_4A56C5C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v3;
  sub_1B88554(&this->fields.categoryContainerList, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v4;
  sub_1B88554(&this->fields.filterButtonList, v4);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A56C5E & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4A56C5E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantFilterSelectMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantFilterSelectMenu___c_TypeInfo->static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v1;
  sub_1B88554(ServantFilterSelectMenu___c_TypeInfo->static_fields, v1);
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
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 12;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_2(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 19;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_3(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 20;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 0;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.categoryKind == 4;
}


void __fastcall ServantFilterSelectMenu___c__DisplayClass62_0___ctor(
        ServantFilterSelectMenu___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantFilterSelectMenu___c__DisplayClass62_0___InitCategoryContainer_b__0(
        ServantFilterSelectMenu___c__DisplayClass62_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct ServantFilterCategoryContainer_o *container; // x8

  container = this->fields.container;
  if ( !container )
    sub_1B8880C(this, x);
  return container->fields.categoryKind == x;
}