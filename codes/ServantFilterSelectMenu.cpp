void __fastcall ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19

  if ( (byte_49F9889 & 1) == 0 )
  {
    sub_1B64870(&ListViewSort_TypeInfo, v1);
    sub_1B64870(&ServantFilterSelectMenu_TypeInfo, v2);
    sub_1B64870(&StringLiteral_12574/*"ServantFilterSelect1"*/, v3);
    byte_49F9889 = 1;
  }
  v4 = (ListViewSort_o *)sub_1B64ABC(ListViewSort_TypeInfo);
  ListViewSort___ctor_40431268(v4, (System_String_o *)StringLiteral_12574/*"ServantFilterSelect1"*/, 3, 0, 0LL);
  ServantFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v4;
  sub_1B64814(ServantFilterSelectMenu_TypeInfo->static_fields);
}


void __fastcall ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x20

  if ( (byte_49F9888 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v4);
    sub_1B64870(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v5);
    sub_1B64870(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v6);
    byte_49F9888 = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1B64ABC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3494230 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v7;
  sub_1B64814(&this->fields.useFilterKindList);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v8;
  sub_1B64814(&this->fields.useFilterButtonList);
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
    sub_1B64814(p_callbackFunc);
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

  if ( (byte_49F9885 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49F9885 = 1;
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
                                                  (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UISprite___);
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
    sub_1B64ACC(warningLabel, v5);
  }
}


void __fastcall ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_30555928(this, 0LL, v2);
}


void __fastcall ServantFilterSelectMenu__Close_30555928(
        ServantFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_49F986F & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_ServantFilterSelectMenu_EndClose__, v5);
    byte_49F986F = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B64814(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B64814(&this->fields.closeCallbackFunc);
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

  if ( (byte_49F986D & 1) == 0 )
  {
    sub_1B64870(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_49F986D = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B64ACC(0LL, v1);
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
  __int64 v3; // x3
  ServantFilterSelectMenu_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x8
  int v14; // w24
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  ServantFilterSelectMenu___c__DisplayClass62_0_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_Component_o **p_fields; // x20
  System_Func_T__TResult__o *v24; // x22
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  bool v27; // w8
  ServantFilterCategoryContainer_o *container; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_49F987C & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___, categoryKindKist);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v8);
    sub_1B64870(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v10);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__, v11);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo, v12);
    byte_49F987C = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !categoryKindKist )
    goto LABEL_23;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
    sub_1B64AD4(this, categoryKindKist, method, v3);
  v14 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  if ( !byte_49F9201 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&UnityEngine_Vector3_TypeInfo, categoryKindKist);
    byte_49F9201 = 1;
  }
  currentFilterContainer = v5->fields.currentFilterContainer;
  if ( !currentFilterContainer
    || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.categoryContainerList) == 0LL )
  {
LABEL_23:
    sub_1B64ACC(this, categoryKindKist);
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v20 = (ServantFilterSelectMenu___c__DisplayClass62_0_o *)sub_1B64ABC(ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo);
    ServantFilterSelectMenu___c__DisplayClass62_0___ctor(v20, 0LL);
    if ( !v20 )
      sub_1B64ACC(v21, v22);
    v20->fields.container = (struct ServantFilterCategoryContainer_o *)v35.fields._current;
    p_fields = (UnityEngine_Component_o **)&v20->fields;
    sub_1B64814(&v20->fields);
    v24 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      v24,
      (Il2CppObject *)v20,
      Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__,
      0LL);
    v27 = BasicHelper__Any_Int32Enum__48392724(
            (System_Int32Enum_array *)categoryKindKist,
            (System_Func_T__bool__o *)v24,
            (const MethodInfo_2E26A14 *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    container = v20->fields.container;
    if ( v27 )
    {
      if ( !container )
        sub_1B64ACC(0LL, v25);
      ServantFilterCategoryContainer__SetActive(container, 1, v26);
      if ( !*p_fields )
        sub_1B64ACC(0LL, v29);
      gameObject = UnityEngine_Component__get_gameObject(*p_fields, 0LL);
      v36.fields.x = x;
      v36.fields.y = y;
      v36.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v36, 0LL);
      if ( !*p_fields )
        sub_1B64ACC(0LL, v31);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*p_fields,
        HIDWORD((*p_fields)[2].monitor) == v14,
        v32);
      if ( !*p_fields )
        sub_1B64ACC(0LL, v33);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(
                         (ServantFilterCategoryContainer_o *)*p_fields,
                         v33);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !container )
        sub_1B64ACC(0LL, v25);
      ServantFilterCategoryContainer__SetActive(container, 0, v26);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
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
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v26; // x23
  const MethodInfo *v27; // x4
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v30; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v32; // x20
  _DWORD *monitor; // x8
  System_Array_o *v34; // x0
  ListViewSort_FilterCategoryKind_array *v35; // x20
  const MethodInfo *v36; // x2
  System_RuntimeFieldHandle_o v37; // 0:w1.4

  v2 = this;
  if ( (byte_49F9878 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B64870(&FilterKindList_TypeInfo, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1B64870(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v11);
    sub_1B64870(
      &Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A,
      v12);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__, v13);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v14);
    byte_49F9878 = 1;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_27;
  v18 = *(_QWORD *)&this->fields.m_CachedPtr;
  v19 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v18 )
    goto LABEL_27;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v18 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  v2->fields.currentFilterContainer = v2->fields.commandCodeFilterContainer;
  p_currentFilterContainer = &v2->fields.currentFilterContainer;
  sub_1B64814(&v2->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v22);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v23);
  commandCodeEffectFilterController = v2->fields.commandCodeEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v26 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !commandCodeEffectFilterController )
    goto LABEL_27;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v26, v27);
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
    v30 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v30,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&static_fields->__9__58_0);
  }
  if ( !categoryContainerList )
    goto LABEL_27;
  v32 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v32 )
    {
      monitor = v32[3].monitor;
      if ( monitor )
      {
        monitor[11] = 5;
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1B64ACC(this, method);
  }
LABEL_26:
  v34 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v37.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  v35 = (ListViewSort_FilterCategoryKind_array *)v34;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v34, v37, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v35, v36);
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
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  System_Array_o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  int m_CancellationTokenSource; // w8
  System_Array_o *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x21
  System_Collections_Generic_List_T__o *v36; // x22
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v42; // x24
  const MethodInfo *v43; // x4
  ListViewSort_FilterCategoryKind_array *v44; // x1
  const MethodInfo *v45; // x2
  System_RuntimeFieldHandle_o v46; // 0:w1.4
  System_RuntimeFieldHandle_o v47; // 0:w1.4

  v6 = this;
  if ( (byte_49F987A & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, filterKind);
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, v7);
    sub_1B64870(&FilterKindList_TypeInfo, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__, v15);
    sub_1B64870(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo, v16);
    sub_1B64870(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v17);
    sub_1B64870(
      &Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44,
      v18);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(
                                          &Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB,
                                          v19);
    byte_49F987A = 1;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
    if ( !this )
      goto LABEL_32;
    System_Collections_Generic_List_Int32Enum___AddRange(
      (System_Collections_Generic_List_T__o *)this,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo;
  v23 = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    this = (ServantFilterSelectMenu_o *)j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  if ( !v23 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  v24 = *(_QWORD *)&this->fields.m_CachedPtr;
  v25 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v24 )
    goto LABEL_32;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v24 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  v6->fields.currentFilterContainer = v6->fields.servantFilterConatiner;
  sub_1B64814(&v6->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v6, 1, v27);
  ServantFilterSelectMenu__InitUseFilterButton(v6, 1, v28);
  v29 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v46.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  v30 = (System_Collections_Generic_IEnumerable_T__o *)v29;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v29, v46, 0LL);
  this = (ServantFilterSelectMenu_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, 2LL);
  if ( !this )
    goto LABEL_32;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (LODWORD(this->fields.basePanel) = 1, m_CancellationTokenSource == 1) )
    sub_1B64AD4(this, filterKind, v31, v32);
  HIDWORD(this->fields.basePanel) = 2;
  v34 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, 3LL);
  v47.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  v35 = (System_Collections_Generic_IEnumerable_T__o *)v34;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v34, v47, 0LL);
  v36 = (System_Collections_Generic_List_T__o *)sub_1B64ABC(System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v36,
    (const MethodInfo_3494230 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v36 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v36,
    v30,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
  {
    items = v36->fields._items;
    v38 = Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__;
    ++v36->fields._version;
    if ( !items )
      goto LABEL_32;
    size = v36->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v36,
        categoryKind,
        *(const MethodInfo_3494A84 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v36->fields._size = size + 1;
      *((_DWORD *)items->m_Items + size) = categoryKind;
    }
  }
  svtEffectFilterController = v6->fields.svtEffectFilterController;
  operationSortInfo = v6->fields.operationSortInfo;
  v42 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)v6, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
LABEL_32:
    sub_1B64ACC(this, filterKind);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v42, v43);
  v6->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v36,
    v35,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v44 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                   v36,
                                                   (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(v6, v44, v45);
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
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v24; // x20
  _DWORD *v25; // x8
  System_Array_o *v26; // x0
  ListViewSort_FilterCategoryKind_array *v27; // x20
  const MethodInfo *v28; // x2
  System_RuntimeFieldHandle_o v29; // 0:w1.4

  v2 = this;
  if ( (byte_49F9879 & 1) == 0 )
  {
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, method);
    sub_1B64870(&FilterKindList_TypeInfo, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64870(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v9);
    sub_1B64870(
      &Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D,
      v10);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, v11);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v12);
    byte_49F9879 = 1;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_25;
  v16 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v16 )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v2->fields.currentFilterContainer = v2->fields.costumeFilterContainer;
  sub_1B64814(&v2->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v17);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v18);
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
    monitor = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, 0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&static_fields->__9__59_0);
  }
  if ( !categoryContainerList )
    goto LABEL_25;
  v24 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v24 )
    {
      v25 = v24[3].monitor;
      if ( v25 )
      {
        v25[11] = 5;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_1B64ACC(this, method);
  }
LABEL_24:
  v26 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
  v29.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  v27 = (ListViewSort_FilterCategoryKind_array *)v26;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v26, v29, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v27, v28);
}


void __fastcall ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_49F986C & 1) == 0 )
  {
    sub_1B64870(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_49F986C = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_1B64ACC(0LL, v1);
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
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v31; // x20
  _DWORD *v32; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v35; // x22
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x3
  __int64 *v39; // x20
  __int64 v40; // x1
  System_Array_o *v41; // x0
  __int64 v42; // x1
  ListViewSort_FilterCategoryKind_array *v43; // x20
  const MethodInfo *v44; // x2

  v2 = this;
  if ( (byte_49F9876 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B64870(&FilterKindList_TypeInfo, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_1B64870(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_1B64870(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v13);
    sub_1B64870(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v14);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_49F9876 = 1;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_39;
  v20 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
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
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  v2->fields.currentFilterContainer = v2->fields.servantFilterConatiner;
  sub_1B64814(&v2->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v24);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v25);
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
    monitor = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(monitor, klass, Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, 0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&static_fields->__9__56_0);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v31 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_39;
    v32 = v31[3].monitor;
    if ( !v32 )
      goto LABEL_39;
    v32[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v35 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v35, v36);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v37) )
  {
    v39 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    v40 = 9LL;
    goto LABEL_38;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_39:
    sub_1B64ACC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v38);
  v39 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
  v40 = 10LL;
LABEL_38:
  v41 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, v40);
  v42 = *v39;
  v43 = (ListViewSort_FilterCategoryKind_array *)v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v41, (System_RuntimeFieldHandle_o)v42, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v43, v44);
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
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  ServantFilterSelectMenu_FilterContainer_c *klass; // x21
  Il2CppObject *v29; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v31; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v35; // x22
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x3
  __int64 *v39; // x20
  __int64 v40; // x1
  System_Array_o *v41; // x0
  __int64 v42; // x1
  ListViewSort_FilterCategoryKind_array *v43; // x20
  const MethodInfo *v44; // x2

  v2 = this;
  if ( (byte_49F9875 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B64870(&FilterKindList_TypeInfo, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_1B64870(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_1B64870(
      &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA,
      v13);
    sub_1B64870(
      &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D,
      v14);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_49F9875 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_38;
  v20 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  v21 = *(_QWORD *)&this->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_38;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  v2->fields.currentFilterContainer = v2->fields.servantFilterConatiner;
  sub_1B64814(&v2->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v24);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v25);
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
    v29 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    klass = (ServantFilterSelectMenu_FilterContainer_c *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v29,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)klass;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&static_fields->__9__55_0);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v31 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)klass,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_38;
    monitor = v31[3].monitor;
    if ( !monitor )
      goto LABEL_38;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v35 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v35, v36);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v37) )
  {
    v39 = &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D;
    v40 = 9LL;
    goto LABEL_37;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_38:
    sub_1B64ACC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v38);
  v39 = &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA;
  v40 = 10LL;
LABEL_37:
  v41 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, v40);
  v42 = *v39;
  v43 = (ListViewSort_FilterCategoryKind_array *)v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v41, (System_RuntimeFieldHandle_o)v42, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v43, v44);
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
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v29; // x23
  const MethodInfo *v30; // x4
  System_Collections_Generic_List_object__o *categoryContainerList; // x21
  struct UnityEngine_GameObject_o *root; // x22
  Il2CppObject *klass; // x23
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v35; // x21
  _DWORD *monitor; // x8
  System_Collections_Generic_List_object__o *v37; // x21
  struct UIScrollView_o *scrollView; // x22
  Il2CppObject *v39; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v40; // x0
  UnityEngine_Object_o *v41; // x21
  _DWORD *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x21
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v44; // x22
  Il2CppObject *v45; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v46; // x0
  UnityEngine_Object_o *v47; // x21
  _DWORD *v48; // x8
  System_Collections_Generic_List_object__o *v49; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *v51; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v52; // x0
  UnityEngine_Object_o *v53; // x20
  _DWORD *v54; // x8
  System_Array_o *v55; // x0
  ListViewSort_FilterCategoryKind_array *v56; // x20
  const MethodInfo *v57; // x2
  System_RuntimeFieldHandle_o v58; // 0:w1.4

  v2 = this;
  if ( (byte_49F9877 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B64870(&FilterKindList_TypeInfo, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1B64870(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v11);
    sub_1B64870(
      &Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456,
      v12);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__, v13);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__, v14);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__, v15);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__, v16);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_49F9877 = 1;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipCombineStatusFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipHaveStatusFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  v21 = *(_QWORD *)&this->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_72;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  v2->fields.currentFilterContainer = v2->fields.servantEquipFilterContainer;
  p_currentFilterContainer = &v2->fields.currentFilterContainer;
  sub_1B64814(&v2->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v25);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v26);
  svtEquipEffectFilterController = v2->fields.svtEquipEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v29 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEquipEffectFilterController )
    goto LABEL_72;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v29, v30);
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
    root = (struct UnityEngine_GameObject_o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&static_fields->__9__57_0);
  }
  if ( !categoryContainerList )
    goto LABEL_72;
  v35 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_72;
    monitor = v35[3].monitor;
    if ( !monitor )
      goto LABEL_72;
    monitor[11] = 5;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v37 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
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
    v39 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    scrollView = (struct UIScrollView_o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v39,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__,
      0LL);
    v40 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v40->__9__57_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&v40->__9__57_1);
  }
  if ( !v37 )
    goto LABEL_72;
  v41 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v37,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_72;
    v42 = v41[3].monitor;
    if ( !v42 )
      goto LABEL_72;
    v42[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v43 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v44 = this->fields.servantEquipFilterContainer[1].fields.categoryContainerList;
  if ( !v44 )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    v45 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    v44 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v44,
      v45,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__,
      0LL);
    v46 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v46->__9__57_2 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v44;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&v46->__9__57_2);
  }
  if ( !v43 )
    goto LABEL_72;
  v47 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v43,
                                  (System_Predicate_T__o *)v44,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v47 )
      goto LABEL_72;
    v48 = v47[3].monitor;
    if ( !v48 )
      goto LABEL_72;
    v48[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v49 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
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
    v51 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      v51,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__,
      0LL);
    v52 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v52->__9__57_3 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&v52->__9__57_3);
  }
  if ( !v49 )
LABEL_72:
    sub_1B64ACC(this, method);
  v53 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v49,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v53 )
    {
      v54 = v53[3].monitor;
      if ( v54 )
      {
        v54[11] = 4;
        goto LABEL_71;
      }
    }
    goto LABEL_72;
  }
LABEL_71:
  v55 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v58.fields.value = Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456;
  v56 = (ListViewSort_FilterCategoryKind_array *)v55;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v55, v58, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v56, v57);
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
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct UnityEngine_GameObject_o *root; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v30; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *v36; // x8
  System_Collections_Generic_List_object__o *v37; // x20
  struct UIScrollView_o *scrollView; // x21
  Il2CppObject *v39; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v40; // x0
  UnityEngine_Object_o *v41; // x20
  _DWORD *v42; // x8
  const MethodInfo *v43; // x3
  __int64 *v44; // x20
  __int64 v45; // x1
  System_Array_o *v46; // x0
  __int64 v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  v2 = this;
  if ( (byte_49F9872 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B64870(&FilterKindList_TypeInfo, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1B64870(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v11);
    sub_1B64870(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v12);
    sub_1B64870(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v13);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__, v14);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_49F9872 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_51;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_51;
  v20 = *(_QWORD *)&this->fields.m_CachedPtr;
  v21 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v20 )
    goto LABEL_51;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v20 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  v2->fields.currentFilterContainer = v2->fields.servantFilterConatiner;
  sub_1B64814(&v2->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v23);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v24);
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
    root = (struct UnityEngine_GameObject_o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)root,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)root;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&static_fields->__9__52_0);
  }
  if ( !categoryContainerList )
    goto LABEL_51;
  v30 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)root,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_51;
    monitor = v30[3].monitor;
    if ( !monitor )
      goto LABEL_51;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v34 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_51;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v34, v35);
  v36 = v2->fields.currentFilterContainer;
  v2->fields.isDisplayServantEffect = 1;
  if ( !v36 )
    goto LABEL_51;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v37 = (System_Collections_Generic_List_object__o *)v36->fields.categoryContainerList;
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
    v39 = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    scrollView = (struct UIScrollView_o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)scrollView,
      v39,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      0LL);
    v40 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v40->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)scrollView;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&v40->__9__52_1);
  }
  if ( !v37 )
    goto LABEL_51;
  v41 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v37,
                                  (System_Predicate_T__o *)scrollView,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_51;
    v42 = v41[3].monitor;
    if ( !v42 )
      goto LABEL_51;
    v42[11] = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, method) )
  {
    v44 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    v45 = 8LL;
    goto LABEL_50;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_51:
    sub_1B64ACC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v43);
  v44 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
  v45 = 9LL;
LABEL_50:
  v46 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, v45);
  v47 = *v44;
  v48 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v46, (System_RuntimeFieldHandle_o)v47, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v48, v49);
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
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v31; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v35; // x22
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x3
  __int64 *v39; // x20
  __int64 v40; // x1
  System_Array_o *v41; // x0
  __int64 v42; // x1
  ListViewSort_FilterCategoryKind_array *v43; // x20
  const MethodInfo *v44; // x2

  v2 = this;
  if ( (byte_49F9874 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B64870(&FilterKindList_TypeInfo, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_1B64870(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_1B64870(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v13);
    sub_1B64870(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v14);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_49F9874 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_38;
  v20 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_38;
  v21 = *(_QWORD *)&this->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_38;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  v2->fields.currentFilterContainer = v2->fields.servantFilterConatiner;
  sub_1B64814(&v2->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v24);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v25);
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
    filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)filterButtonList,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)filterButtonList;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&static_fields->__9__54_0);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v31 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)filterButtonList,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_38;
    monitor = v31[3].monitor;
    if ( !monitor )
      goto LABEL_38;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v35 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v35, v36);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v37) )
  {
    v39 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    v40 = 9LL;
    goto LABEL_37;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_38:
    sub_1B64ACC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v38);
  v39 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
  v40 = 10LL;
LABEL_37:
  v41 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, v40);
  v42 = *v39;
  v43 = (ListViewSort_FilterCategoryKind_array *)v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v41, (System_RuntimeFieldHandle_o)v42, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v43, v44);
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
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  System_Predicate_object__o *monitor; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v31; // x20
  _DWORD *v32; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v35; // x22
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x3
  __int64 *v39; // x20
  __int64 v40; // x1
  System_Array_o *v41; // x0
  __int64 v42; // x1
  ListViewSort_FilterCategoryKind_array *v43; // x20
  const MethodInfo *v44; // x2

  v2 = this;
  if ( (byte_49F9871 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B64870(&FilterKindList_TypeInfo, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_1B64870(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_1B64870(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v13);
    sub_1B64870(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v14);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__, v15);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_49F9871 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_37;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_37;
  v20 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_37;
  v21 = *(_QWORD *)&this->fields.m_CachedPtr;
  v22 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v21 )
    goto LABEL_37;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  v2->fields.currentFilterContainer = v2->fields.servantFilterConatiner;
  sub_1B64814(&v2->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v24);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v25);
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
    monitor = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      monitor,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)monitor;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&static_fields->__9__51_0);
  }
  if ( !categoryContainerList )
    goto LABEL_37;
  v31 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)monitor,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v31 )
      goto LABEL_37;
    v32 = v31[3].monitor;
    if ( !v32 )
      goto LABEL_37;
    v32[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v35 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_37;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v35, v36);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v37) )
  {
    v39 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    v40 = 8LL;
    goto LABEL_36;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_37:
    sub_1B64ACC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v38);
  v39 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
  v40 = 9LL;
LABEL_36:
  v41 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, v40);
  v42 = *v39;
  v43 = (ListViewSort_FilterCategoryKind_array *)v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v41, (System_RuntimeFieldHandle_o)v42, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v43, v44);
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
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *v26; // x21
  Il2CppObject *klass; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  UnityEngine_Object_o *v29; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x3
  __int64 *v37; // x20
  __int64 v38; // x1
  System_Array_o *v39; // x0
  __int64 v40; // x1
  ListViewSort_FilterCategoryKind_array *v41; // x20
  const MethodInfo *v42; // x2

  v2 = this;
  if ( (byte_49F9873 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_1B64870(&FilterKindList_TypeInfo, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64870(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1B64870(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v11);
    sub_1B64870(
      &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D,
      v12);
    sub_1B64870(
      &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F,
      v13);
    sub_1B64870(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__, v14);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v15);
    byte_49F9873 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_34;
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
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3494C90 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_34;
  v19 = *(_QWORD *)&this->fields.m_CachedPtr;
  v20 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !v19 )
    goto LABEL_34;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_3494A84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v19 + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  v2->fields.currentFilterContainer = v2->fields.servantFilterConatiner;
  sub_1B64814(&v2->fields.currentFilterContainer);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v2, 1, v22);
  ServantFilterSelectMenu__InitUseFilterButton(v2, 0, v23);
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
  v26 = this->fields.servantEquipFilterContainer->fields.categoryContainerList;
  if ( !v26 )
  {
    if ( !LODWORD(this->fields.svtEventBonusFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.servantEquipFilterContainer->klass;
    v26 = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)sub_1B64ABC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v26,
      klass,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      0LL);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v26;
    this = (ServantFilterSelectMenu_o *)sub_1B64814(&static_fields->__9__53_0);
  }
  if ( !categoryContainerList )
    goto LABEL_34;
  v29 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v26,
                                  (const MethodInfo_34B0018 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_34;
    monitor = v29[3].monitor;
    if ( !monitor )
      goto LABEL_34;
    monitor[11] = 5;
  }
  svtEffectFilterController = v2->fields.svtEffectFilterController;
  operationSortInfo = v2->fields.operationSortInfo;
  v33 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v2, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_34;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v33, v34);
  v2->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v2, v35) )
  {
    v37 = &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F;
    v38 = 6LL;
    goto LABEL_33;
  }
  this = (ServantFilterSelectMenu_o *)v2->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_34:
    sub_1B64ACC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v2->fields.operationSortInfo,
    v2->fields.eventId,
    v36);
  v37 = &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D;
  v38 = 7LL;
LABEL_33:
  v39 = (System_Array_o *)sub_1B64918(ListViewSort_FilterCategoryKind___TypeInfo, v38);
  v40 = *v37;
  v41 = (ListViewSort_FilterCategoryKind_array *)v39;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61291656(v39, (System_RuntimeFieldHandle_o)v40, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(v2, v41, v42);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__InitUseFilterButton(
        ServantFilterSelectMenu_o *this,
        bool isSummon,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
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
  Il2CppClass *klass; // x8
  int32_t namespaze; // w2
  int v17; // w9
  Il2CppClass *v18; // x8
  System_Collections_Generic_List_object__o *v19; // x21
  System_Predicate_object__o *v20; // x22
  Il2CppClass *v21; // x8
  bool i; // w20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *monitor; // x0
  bool v27; // w22
  ListViewSort_o *v28; // x23
  ServantFilterButtonControl_OnClickFilterButton_o *v29; // x24
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x6
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_49F987B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isSummon);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v10);
    sub_1B64870(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v11);
    sub_1B64870(&System_Predicate_ServantFilterButtonControl__TypeInfo, v12);
    sub_1B64870(&Method_ServantFilterSelectMenu_OnClickFilterButton__, v13);
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__, v14);
    byte_49F987B = 1;
  }
  memset(&v32, 0, sizeof(v32));
  klass = v4[16].klass;
  if ( !klass )
    goto LABEL_18;
  namespaze = (int32_t)klass->_1.namespaze;
  v17 = HIDWORD(klass->_1.namespaze) + 1;
  LODWORD(klass->_1.namespaze) = 0;
  HIDWORD(klass->_1.namespaze) = v17;
  if ( namespaze >= 1 )
    System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze, 0LL);
  v18 = v4[15].klass;
  if ( !v18
    || (v19 = *(System_Collections_Generic_List_object__o **)&v18->_1.byval_arg.bits,
        v20 = (System_Predicate_object__o *)sub_1B64ABC(System_Predicate_ServantFilterButtonControl__TypeInfo),
        System_Predicate_object____ctor(v20, v4, Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__, 0LL),
        !v19)
    || (v4[16].klass = (Il2CppClass *)System_Collections_Generic_List_object___FindAll(
                                        v19,
                                        (System_Predicate_T__o *)v20,
                                        (const MethodInfo_34B00C0 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this = (ServantFilterSelectMenu_o *)sub_1B64814(&v4[16]),
        (v21 = v4[15].klass) == 0LL)
    || (this = *(ServantFilterSelectMenu_o **)&v21->_1.byval_arg.bits) == 0LL )
  {
LABEL_18:
    sub_1B64ACC(this, isSummon);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = isSummon; ; ServantFilterButtonControl__Init(
                          (ServantFilterButtonControl_o *)current,
                          v28,
                          v29,
                          v27,
                          i,
                          0,
                          v31) )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v23 )
      break;
    current = v32.fields._current;
    if ( !v32.fields._current )
      sub_1B64ACC(v23, v24);
    monitor = (System_Collections_Generic_List_T__o *)v4[15].monitor;
    if ( !monitor )
      sub_1B64ACC(0LL, v24);
    v27 = System_Collections_Generic_List_Int32Enum___Contains(
            monitor,
            (int32_t)v32.fields._current[2].klass,
            (const MethodInfo_3494DFC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v28 = (ListViewSort_o *)v4[19].klass;
    v29 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1B64ABC(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v29,
      v4,
      (intptr_t)Method_ServantFilterSelectMenu_OnClickFilterButton__,
      v30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


bool __fastcall ServantFilterSelectMenu__IsChangedStatus(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  struct System_Boolean_array *kindStatus; // x10
  unsigned __int64 v9; // x8
  __int64 v10; // x9
  bool *v11; // x10
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
    v9 = 0LL;
    v10 = (unsigned int)*(_QWORD *)&kindStatus->max_length;
    v11 = &kindStatus->m_Items[4];
    while ( svtEquipEffectFilterController )
    {
      if ( v9 >= LODWORD(svtEquipEffectFilterController->fields.m_CancellationTokenSource) )
        sub_1B64AD4(svtEquipEffectFilterController, v5, v6, v7);
      if ( !v11[v9] == (*((_BYTE *)&svtEquipEffectFilterController->fields.WIDGET_HEIGHT_ADD_VALUE + v9) != 0) )
        return 1;
      if ( v10 == ++v9 )
        goto LABEL_8;
    }
LABEL_23:
    sub_1B64ACC(svtEquipEffectFilterController, v5);
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

  if ( (byte_49F9870 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventBonusFilterMaster___, method);
    sub_1B64870(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B64870(&DataManager_TypeInfo, v4);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B64870(&EventUpValSetupInfo_TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int___ctor__, v8);
    sub_1B64870(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_1B64870(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v11);
    byte_49F9870 = 1;
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
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_26;
    Master_object = (EventMaster_o *)EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
    if ( !Master_object )
      goto LABEL_26;
    v17 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( SLODWORD(Master_object->fields.list) >= 1 )
    {
      if ( this->fields.eventId >= 1 )
      {
        v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B64ABC(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v17,
          (const MethodInfo_3365C88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        if ( !v17 )
          goto LABEL_26;
        System_Collections_Generic_HashSet_int___Add(
          v17,
          this->fields.eventId,
          (const MethodInfo_3366E8C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v18 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v17,
              (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
      v19 = (EventUpValSetupInfo_o *)sub_1B64ABC(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor_38597124(v19, v18, 0, 0, 0, 0LL);
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
        v21 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                           (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
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
      sub_1B64ACC(Master_object, v16);
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

  if ( (byte_49F9881 & 1) == 0 )
  {
    sub_1B64870(&Method_ServantFilterSelectMenu_OnClickCancel__, method);
    byte_49F9881 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888();
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_49F9882 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1B64870(&Method_ServantFilterSelectMenu_OnClickClear__, v3);
    byte_49F9882 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantFilterSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B64888();
    v5 = (System_Reflection_MethodBase_o *)sub_1B64854(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
                                                (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B64ACC(operationSortInfo, v6);
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
  if ( (byte_49F9880 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1B64870(&Method_ServantFilterSelectMenu_OnClickDecide__, method);
    byte_49F9880 = 1;
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
      v7 = (_QWORD *)sub_1B64888();
    v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (ServantFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_1B64ACC(this, method);
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

  if ( (byte_49F9884 & 1) == 0 )
  {
    sub_1B64870(&Method_ServantFilterSelectMenu_OnClickFilterButton__, *(_QWORD *)&filterKind);
    byte_49F9884 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantFilterSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888();
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B64ACC(0LL, v7);
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

  if ( (byte_49F9883 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1B64870(&Method_ServantFilterSelectMenu_OnClickInitialize__, v3);
    byte_49F9883 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B64888();
    v5 = (System_Reflection_MethodBase_o *)sub_1B64854(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
                                                (const MethodInfo_34965DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B64ACC(operationSortInfo, v6);
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
  ServantFilterSelectMenu_o *v24; // x0
  const MethodInfo *v25; // x2
  ServantFilterSelectMenu_c *v26; // x0
  __int64 v27; // x1
  ListViewSort_o *baseSortInfo; // x0
  ListViewSort_o *v29; // x21
  ListViewSort_o *v30; // x22
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  ServantFilterSelectMenu_o *v40; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v42; // x0
  FilterKindList_c *v43; // x0
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  struct ListViewSort_o *v49; // x8
  System_Action_o *v50; // x20

  if ( (byte_49F986E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&FilterKindList_TypeInfo, v13);
    sub_1B64870(&ListViewSort_TypeInfo, v14);
    sub_1B64870(&LocalizationManager_TypeInfo, v15);
    sub_1B64870(&Method_ServantFilterSelectMenu_EndOpen__, v16);
    sub_1B64870(&ServantFilterSelectMenu_TypeInfo, v17);
    sub_1B64870(&StringLiteral_11785/*"SERVANT_SORT_RESET"*/, v18);
    sub_1B64870(&StringLiteral_11634/*"SERVANT_SORT_CANCEL"*/, v19);
    sub_1B64870(&StringLiteral_11524/*"SERVANT_EQUIP_FILTER_WARNING"*/, v20);
    sub_1B64870(&StringLiteral_11638/*"SERVANT_SORT_DECIDE"*/, v21);
    sub_1B64870(&StringLiteral_11787/*"SERVANT_SORT_TITLE2"*/, v22);
    sub_1B64870(&StringLiteral_11635/*"SERVANT_SORT_CLEAR"*/, v23);
    byte_49F986E = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B64814(&this->fields.callbackFunc);
    this->fields.eventId = eventId;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      v24 = (ServantFilterSelectMenu_o *)sub_1B64814(&this->fields.baseSortInfo);
    }
    else
    {
      v26 = ServantFilterSelectMenu_TypeInfo;
      if ( !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
        v26 = ServantFilterSelectMenu_TypeInfo;
      }
      this->fields.baseSortInfo = v26->static_fields->commonServantSortInfo;
      sub_1B64814(&this->fields.baseSortInfo);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_45;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    this->fields.kindStatus = ServantFilterSelectMenu__SetKindStatus(v24, sort, v25);
    sub_1B64814(&this->fields.kindStatus);
    v29 = this->fields.baseSortInfo;
    v30 = (ListViewSort_o *)sub_1B64ABC(ListViewSort_TypeInfo);
    ListViewSort___ctor_40431992(v30, v29, 0LL);
    this->fields.operationSortInfo = v30;
    sub_1B64814(&this->fields.operationSortInfo);
    this->fields.listViewManager = listViewManager;
    sub_1B64814(&this->fields.listViewManager);
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
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11787/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11524/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0LL);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0LL);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11638/*"SERVANT_SORT_DECIDE"*/, 0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11635/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11634/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11785/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v37);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v37);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v37);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v37);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v37);
                          break;
                        case 5:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v37);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v37);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v37);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v37);
                          break;
                        case 0xC:
                          v39 = 999;
                          v40 = this;
                          ClassExtra1FilterKindList = 0LL;
                          goto LABEL_39;
                        case 0xD:
                          v42 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v42 = FilterKindList_TypeInfo;
                          }
                          v39 = 14;
                          ClassExtra1FilterKindList = v42->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_38;
                        case 0xE:
                          v43 = FilterKindList_TypeInfo;
                          if ( !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v43 = FilterKindList_TypeInfo;
                          }
                          v39 = 15;
                          ClassExtra1FilterKindList = v43->static_fields->ClassExtra2FilterKindList;
LABEL_38:
                          v40 = this;
LABEL_39:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v40, ClassExtra1FilterKindList, v39, v38);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v37);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v44);
                      ServantFilterSelectMenu__SetButtonSelect(this, v45);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v46);
                      currentFilterContainer = this->fields.currentFilterContainer;
                      if ( currentFilterContainer )
                      {
                        scrollView = currentFilterContainer->fields.scrollView;
                        if ( scrollView )
                        {
                          v49 = this->fields.baseSortInfo;
                          if ( v49 )
                          {
                            baseSortInfo = (ListViewSort_o *)scrollView->fields.verticalScrollBar;
                            if ( baseSortInfo )
                            {
                              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v49->fields.scrollBarValue, 0LL);
                              this->fields.state = 1;
                              v50 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
                              System_Action___ctor(
                                v50,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
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
    sub_1B64ACC(baseSortInfo, v27);
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

  if ( (byte_49F987D & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49F987D = 1;
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
    sub_1B64ACC(v5, v6);
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
    sub_1B64ACC(this, isActive);
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

  if ( (byte_49F987F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_49F987F = 1;
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
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    if ( !v15.fields._current )
      sub_1B64ACC(v9, v10);
    monitor = (UnityEngine_Behaviour_o *)v15.fields._current[2].monitor;
    if ( !monitor )
      sub_1B64ACC(0LL, v10);
    UnityEngine_Behaviour__set_enabled(monitor, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_1B64ACC(decideButton, isEnable);
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

  if ( (byte_49F987E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v4);
    sub_1B64870(&FilterKindList_TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_49F987E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_29;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    useFilterButtonList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    current = (ServantFilterButtonControl_o *)v21.fields._current;
    if ( !v21.fields._current )
      sub_1B64ACC(v9, v10);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v21.fields._current, v10);
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v13 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v13->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1B64ACC(0LL, v12);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_3494DFC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1B64ACC(0LL, v15);
      v17 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_1B64ACC(useFilterButtonList, method);
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
  __int64 v13; // x2
  __int64 v14; // x3

  if ( (byte_49F9886 & 1) == 0 )
  {
    sub_1B64870(&bool___TypeInfo, sort);
    sub_1B64870(&FilterKindList_TypeInfo, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__, v6);
    byte_49F9886 = 1;
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
  v10 = (System_Boolean_array *)sub_1B64918(bool___TypeInfo, (unsigned int)size);
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
                                                                    (const MethodInfo_3494794 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
      if ( !sort )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(
                                                                    sort,
                                                                    (int32_t)AllFilterKindList,
                                                                    0LL);
      if ( !v10 )
        break;
      if ( v11 >= v10->max_length )
        sub_1B64AD4(AllFilterKindList, sort, v13, v14);
      v10->m_Items[v11++ + 4] = (unsigned __int8)AllFilterKindList & 1;
      if ( size == v11 )
        return v10;
    }
LABEL_16:
    sub_1B64ACC(AllFilterKindList, sort);
  }
  return v10;
}


bool __fastcall ServantFilterSelectMenu___InitUseFilterButton_b__61_0(
        ServantFilterSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_49F988A & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_1B64870(
                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                          x);
    byte_49F988A = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1B64ACC(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_3494DFC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_49F986A & 1) == 0 )
  {
    sub_1B64870(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49F986A = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantFilterSelectMenu_o *)sub_1B64D8C(v7);
  ServantFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantFilterSelectMenu__get_closeBtnPath(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F9887 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_15575/*"Window/CancelButton"*/, method);
    byte_49F9887 = 1;
  }
  return (System_String_o *)StringLiteral_15575/*"Window/CancelButton"*/;
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

  if ( (byte_49F986B & 1) == 0 )
  {
    sub_1B64870(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_49F986B = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_1B64D8C(v7);
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
  sub_1B64814(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A63EC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A63A4;
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
  if ( (byte_49FA183 & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, result);
    byte_49FA183 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  System_Collections_Generic_List_object__o *v7; // x20

  if ( (byte_49FA182 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__, v3);
    sub_1B64870(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v4);
    sub_1B64870(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo, v5);
    byte_49FA182 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v6;
  sub_1B64814(&this->fields.categoryContainerList);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v7;
  sub_1B64814(&this->fields.filterButtonList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_49FA184 & 1) == 0 )
  {
    sub_1B64870(&ServantFilterSelectMenu___c_TypeInfo, v1);
    byte_49FA184 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(ServantFilterSelectMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantFilterSelectMenu___c_TypeInfo->static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v2;
  sub_1B64814(ServantFilterSelectMenu___c_TypeInfo->static_fields);
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
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 12;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_2(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 19;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_3(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 20;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 0;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
  return x->fields.categoryKind == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, x);
  return container->fields.categoryKind == x;
}