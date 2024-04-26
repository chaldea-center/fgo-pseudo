void __fastcall ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4353C14 & 1) == 0 )
  {
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&ServantFilterSelectMenu_TypeInfo);
    sub_B70694(&StringLiteral_12888/*"ServantFilterSelect1"*/);
    byte_4353C14 = 1;
  }
  v1 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
  ListViewSort___ctor_33980040(v1, (System_String_o *)StringLiteral_12888/*"ServantFilterSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantFilterSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4353C13 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_4353C13 = 1;
  }
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu__Callback(
        ServantFilterSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantFilterSelectMenu_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B70630(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
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
  bool v6; // w20
  WebViewObject_o *Component_WebViewObject; // x19
  int v8; // s0

  if ( (byte_4353C10 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353C10 = 1;
  }
  if ( (unsigned int)(this->fields.kind - 5) <= 1 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
    {
      warningLabel = this->fields.listViewManager;
      if ( !warningLabel )
        goto LABEL_21;
      v6 = ListViewManager__GetMatchItemCount(warningLabel, this->fields.operationSortInfo, 0LL) == 0;
    }
    else
    {
      v6 = 0;
    }
    warningLabel = (ListViewManager_o *)this->fields.warningLabel;
    if ( !warningLabel
      || (warningLabel = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)warningLabel,
                                                0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, v6, 0LL),
          (warningLabel = (ListViewManager_o *)this->fields.decideButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningLabel, !v6, 0LL),
          (warningLabel = (ListViewManager_o *)this->fields.decideButton) == 0LL) )
    {
LABEL_21:
      sub_B7076C(warningLabel, v4);
    }
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)warningLabel,
                                (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( v6 )
    {
      *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_gray(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_21;
    }
    else
    {
      *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_21;
    }
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v8, 0LL);
  }
}


void __fastcall ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_28859760(this, 0LL, v2);
}


void __fastcall ServantFilterSelectMenu__Close_28859760(
        ServantFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *v11; // x20

  if ( (byte_4353BFA & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_EndClose__);
    byte_4353BFA = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall ServantFilterSelectMenu__EndClose(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x19

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
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

  if ( (byte_4353BF8 & 1) == 0 )
  {
    sub_B70694(&ServantFilterSelectMenu_TypeInfo);
    byte_4353BF8 = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B7076C(0LL, v1);
  ListViewSort__Load(commonServantSortInfo, 0LL);
  return ServantFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo;
}


void __fastcall ServantFilterSelectMenu__Init(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__InitCategoryContainer(
        ServantFilterSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v4; // x20
  __int64 v5; // x8
  float v6; // s0
  float v7; // s1
  float v8; // s2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **current; // x1
  UnityEngine_Component_o **v23; // x20
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v24; // x22
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  bool v27; // w8
  ServantFilterCategoryContainer_o *v28; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  __int64 v34; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-90h] BYREF
  int v37; // [xsp+4Ch] [xbp-64h]
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4353C07 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_B70694(&Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__);
    sub_B70694(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_B70694(&Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__);
    this = (ServantFilterSelectMenu_o *)sub_B70694(&ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo);
    byte_4353C07 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( !categoryKindKist )
    goto LABEL_21;
  v5 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v5 )
  {
    v34 = sub_B70798(this);
    sub_B70738(v34, 0LL);
  }
  v37 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v5 << 32) - 0x100000000LL) >> 30));
  *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL);
  currentFilterContainer = v4->fields.currentFilterContainer;
  if ( !currentFilterContainer
    || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.categoryContainerList) == 0LL )
  {
LABEL_21:
    sub_B7076C(this, categoryKindKist);
  }
  x = v6;
  y = v7;
  z = v8;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v13 = sub_B70764(ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo);
    ServantFilterSelectMenu___c__DisplayClass62_0___ctor((ServantFilterSelectMenu___c__DisplayClass62_0_o *)v13, 0LL);
    if ( !v13 )
      sub_B7076C(v14, v15);
    current = (System_Int32_array **)v36.fields.current;
    *(_QWORD *)(v13 + 16) = v36.fields.current;
    v23 = (UnityEngine_Component_o **)(v13 + 16);
    sub_B70630((BattleServantConfConponent_o *)(v13 + 16), current, v16, v17, v18, v19, v20, v21);
    v24 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B70764(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      v24,
      (Il2CppObject *)v13,
      Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__,
      (const MethodInfo_29A80E0 *)Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__);
    v27 = BasicHelper__Any_ListViewSort_FilterCategoryKind_(
            categoryKindKist,
            (System_Func_T__bool__o *)v24,
            (const MethodInfo_1BDC940 *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    v28 = *(ServantFilterCategoryContainer_o **)(v13 + 16);
    if ( v27 )
    {
      if ( !v28 )
        sub_B7076C(0LL, v25);
      ServantFilterCategoryContainer__SetActive(v28, 1, v26);
      if ( !*v23 )
        sub_B7076C(0LL, v29);
      gameObject = UnityEngine_Component__get_gameObject(*v23, 0LL);
      v38.fields.x = x;
      v38.fields.y = y;
      v38.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v38, 0LL);
      if ( !*v23 )
        sub_B7076C(0LL, v31);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*v23,
        HIDWORD((*v23)[2].klass) == v37,
        v32);
      if ( !*v23 )
        sub_B7076C(0LL, v33);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)*v23, v33);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !v28 )
        sub_B7076C(0LL, v25);
      ServantFilterCategoryContainer__SetActive(v28, 0, v26);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
}


void __fastcall ServantFilterSelectMenu__InitCommandCodeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *commandCodeFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v17; // x23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__58_0; // x21
  Il2CppObject *v21; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *v29; // x20
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v31; // x20
  const MethodInfo *v32; // x2
  System_RuntimeFieldHandle_o v33; // 0:w1.4

  if ( (byte_4353C03 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_B70694(&Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__);
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4353C03 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  commandCodeFilterContainer = this->fields.commandCodeFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = commandCodeFilterContainer;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)commandCodeFilterContainer,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v13);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v14);
  commandCodeEffectFilterController = this->fields.commandCodeEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !commandCodeEffectFilterController )
    goto LABEL_28;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v17, 0LL);
  if ( !*p_currentFilterContainer )
    goto LABEL_28;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__58_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__58_0,
      v21,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v22 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v22->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__58_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v22->__9__58_0,
      (System_Int32_array **)_9__58_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !categoryContainerList )
    goto LABEL_28;
  v29 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__58_0,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v29 )
    {
      klass = v29[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_27;
      }
    }
LABEL_28:
    sub_B7076C(useFilterKindList, method);
  }
LABEL_27:
  v31 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v33.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v31, v33, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v31, v32);
}


void __fastcall ServantFilterSelectMenu__InitCommonSummonDisp(
        ServantFilterSelectMenu_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *filterKind,
        int32_t categoryKind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v8; // x22
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v9; // x21
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  System_Array_o *v19; // x23
  int32_t size; // w8
  System_Array_o *v21; // x21
  System_Collections_Generic_List_VoiceCondType_Type__o *v22; // x22
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v25; // x24
  ListViewSort_FilterCategoryKind_array *v26; // x1
  const MethodInfo *v27; // x2
  __int64 v28; // x0
  System_RuntimeFieldHandle_o v29; // 0:w1.4
  System_RuntimeFieldHandle_o v30; // 0:w1.4

  if ( (byte_4353C05 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
    sub_B70694(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_B70694(&Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44);
    sub_B70694(&Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB);
    byte_4353C05 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v8 = this->fields.useFilterKindList;
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v8 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->BonusSelectCollectionStateFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      goto LABEL_28;
    System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
      (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
  v9 = this->fields.useFilterKindList;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v9 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v17);
  ServantFilterSelectMenu__InitUseFilterButton(this, 1, v18);
  v19 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v29.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v19, v29, 0LL);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)sub_B706AC(
                                                                                                   ListViewSort_FilterCategoryKind___TypeInfo,
                                                                                                   2LL);
  if ( !useFilterKindList )
    goto LABEL_28;
  size = useFilterKindList->fields._size;
  if ( !size || (LODWORD(useFilterKindList->fields._syncRoot) = 1, size == 1) )
  {
    v28 = sub_B70798(useFilterKindList);
    sub_B70738(v28, 0LL);
  }
  HIDWORD(useFilterKindList->fields._syncRoot) = 2;
  v21 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 3LL);
  v30.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v21, v30, 0LL);
  v22 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B70764(System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v22,
    (const MethodInfo_30B8454 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v22 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v22,
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v22,
      categoryKind,
      (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__);
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
LABEL_28:
    sub_B7076C(useFilterKindList, filterKind);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v25, 0LL);
  this->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v22,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v26 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                   (System_Collections_Generic_List_Voice_BATTLE__o *)v22,
                                                   (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(this, v26, v27);
}


void __fastcall ServantFilterSelectMenu__InitCostumeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v5; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *costumeFilterContainer; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__59_0; // x21
  Il2CppObject *v19; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v29; // x20
  const MethodInfo *v30; // x2
  System_RuntimeFieldHandle_o v31; // 0:w1.4

  if ( (byte_4353C04 & 1) == 0 )
  {
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__);
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4353C04 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  v5 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v5 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = this->fields.costumeFilterContainer;
  this->fields.currentFilterContainer = costumeFilterContainer;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)costumeFilterContainer,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v13);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v14);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_30;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__59_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__59_0;
  if ( !_9__59_0 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__59_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__59_0,
      v19,
      Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v20 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v20->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__59_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v20->__9__59_0,
      (System_Int32_array **)_9__59_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !categoryContainerList )
    goto LABEL_30;
  v27 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__59_0,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v27 )
    {
      klass = v27[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_B7076C(useFilterKindList, method);
  }
LABEL_29:
  v29 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
  v31.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v29, v31, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v29, v30);
}


void __fastcall ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4353BF7 & 1) == 0 )
  {
    sub_B70694(&ServantFilterSelectMenu_TypeInfo);
    byte_4353BF7 = 1;
  }
  v2 = ServantFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v2 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v2->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B7076C(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantFilterSelectMenu__InitMaterialDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v5; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__56_0; // x21
  Il2CppObject *v19; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x1
  System_Array_o *v33; // x0
  __int64 *v34; // x8
  __int64 v35; // x1
  ListViewSort_FilterCategoryKind_array *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4353C01 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_B70694(&Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE);
    sub_B70694(&Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__);
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4353C01 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v5 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v5 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v13);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v14);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_40;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__56_0,
      v19,
      Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v20 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v20->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__56_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v20->__9__56_0,
      (System_Int32_array **)_9__56_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v27 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__56_0,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_40;
    klass = v27[3].klass;
    if ( !klass )
      goto LABEL_40;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v31, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v32) )
  {
    v33 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v34 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_39;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_40:
    sub_B7076C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v33 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v34 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_39:
  v35 = *v34;
  v36 = (ListViewSort_FilterCategoryKind_array *)v33;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v33, (System_RuntimeFieldHandle_o)v35, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v36, v37);
}


void __fastcall ServantFilterSelectMenu__InitServantBaseDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v5; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__55_0; // x21
  Il2CppObject *v19; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x1
  System_Array_o *v33; // x0
  __int64 *v34; // x8
  __int64 v35; // x1
  ListViewSort_FilterCategoryKind_array *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4353C00 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_B70694(&Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA);
    sub_B70694(&Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__);
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4353C00 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v5 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v5 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v13);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v14);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_39;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__55_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__55_0,
      v19,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v20 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v20->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__55_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v20->__9__55_0,
      (System_Int32_array **)_9__55_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v27 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__55_0,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_39;
    klass = v27[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v31, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v32) )
  {
    v33 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v34 = &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D;
    goto LABEL_38;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_39:
    sub_B7076C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v33 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v34 = &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA;
LABEL_38:
  v35 = *v34;
  v36 = (ListViewSort_FilterCategoryKind_array *)v33;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v33, (System_RuntimeFieldHandle_o)v35, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v36, v37);
}


void __fastcall ServantFilterSelectMenu__InitServantEquipDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v17; // x23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x21
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_0; // x22
  Il2CppObject *v21; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *v29; // x21
  UnityEngine_Object_c *klass; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v31; // x21
  struct ServantFilterSelectMenu___c_StaticFields *v32; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_1; // x22
  Il2CppObject *v34; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x21
  UnityEngine_Object_c *v43; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v44; // x21
  struct ServantFilterSelectMenu___c_StaticFields *v45; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_2; // x22
  Il2CppObject *v47; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_Object_o *v55; // x21
  UnityEngine_Object_c *v56; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v57; // x20
  struct ServantFilterSelectMenu___c_StaticFields *v58; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_3; // x21
  Il2CppObject *v60; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  UnityEngine_Object_o *v68; // x20
  UnityEngine_Object_c *v69; // x8
  System_Array_o *v70; // x20
  const MethodInfo *v71; // x2
  System_RuntimeFieldHandle_o v72; // 0:w1.4

  if ( (byte_4353C02 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_B70694(&Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__);
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4353C02 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipCombineStatusFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipHaveStatusFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantEquipFilterContainer = this->fields.servantEquipFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = servantEquipFilterContainer;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantEquipFilterContainer,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v13);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v14);
  svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEquipEffectFilterController )
    goto LABEL_82;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v17, 0LL);
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_0,
      v21,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v22 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v22->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v22->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !categoryContainerList )
    goto LABEL_82;
  v29 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__57_0,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_82;
    klass = v29[3].klass;
    if ( !klass )
      goto LABEL_82;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v31 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v32 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v32->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v32 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__57_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_1,
      v34,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v35 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v35->__9__57_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v35->__9__57_1,
      (System_Int32_array **)_9__57_1,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v31 )
    goto LABEL_82;
  v42 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v31,
                                  (System_Predicate_T__o *)_9__57_1,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_82;
    v43 = v42[3].klass;
    if ( !v43 )
      goto LABEL_82;
    HIDWORD(v43->_1.byval_arg.data) = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v44 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v45 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v45->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v45 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__57_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_2,
      v47,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v48 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v48->__9__57_2 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_2;
    sub_B70630(
      (BattleServantConfConponent_o *)&v48->__9__57_2,
      (System_Int32_array **)_9__57_2,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v44 )
    goto LABEL_82;
  v55 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v44,
                                  (System_Predicate_T__o *)_9__57_2,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v55 )
      goto LABEL_82;
    v56 = v55[3].klass;
    if ( !v56 )
      goto LABEL_82;
    HIDWORD(v56->_1.byval_arg.data) = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v57 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v58 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v58->__9__57_3;
  if ( !_9__57_3 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v58 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v60 = (Il2CppObject *)v58->__9;
    _9__57_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_3,
      v60,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v61 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v61->__9__57_3 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_3;
    sub_B70630(
      (BattleServantConfConponent_o *)&v61->__9__57_3,
      (System_Int32_array **)_9__57_3,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  if ( !v57 )
LABEL_82:
    sub_B7076C(useFilterKindList, method);
  v68 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v57,
                                  (System_Predicate_T__o *)_9__57_3,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v68, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v68 )
    {
      v69 = v68[3].klass;
      if ( v69 )
      {
        HIDWORD(v69->_1.byval_arg.data) = 4;
        goto LABEL_81;
      }
    }
    goto LABEL_82;
  }
LABEL_81:
  v70 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v72.fields.value = Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v70, v72, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v70, v71);
}


void __fastcall ServantFilterSelectMenu__InitServantExtraClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_0; // x21
  Il2CppObject *v18; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v30; // x22
  struct ServantFilterSelectMenu_FilterContainer_o *v31; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v32; // x20
  struct ServantFilterSelectMenu___c_StaticFields *v33; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_1; // x21
  Il2CppObject *v35; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *v43; // x20
  UnityEngine_Object_c *v44; // x8
  System_Array_o *v45; // x0
  __int64 *v46; // x8
  __int64 v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  if ( (byte_4353BFD & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_B70694(&Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754);
    sub_B70694(&Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__);
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4353BFD = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v12);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v13);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_55;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v18,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v19 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v19->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v19->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !categoryContainerList )
    goto LABEL_55;
  v26 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__52_0,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_55;
    klass = v26[3].klass;
    if ( !klass )
      goto LABEL_55;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v30 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_55;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v30, 0LL);
  v31 = this->fields.currentFilterContainer;
  this->fields.isDisplayServantEffect = 1;
  if ( !v31 )
    goto LABEL_55;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v32 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v31->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v33 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v33->__9__52_1;
  if ( !_9__52_1 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v33 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_1,
      v35,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v36 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v36->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v36->__9__52_1,
      (System_Int32_array **)_9__52_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !v32 )
    goto LABEL_55;
  v43 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v32,
                                  (System_Predicate_T__o *)_9__52_1,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v43 )
      goto LABEL_55;
    v44 = v43[3].klass;
    if ( !v44 )
      goto LABEL_55;
    HIDWORD(v44->_1.byval_arg.data) = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(this, method) )
  {
    v45 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 8LL);
    v46 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_54;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_55:
    sub_B7076C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v45 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
  v46 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_54:
  v47 = *v46;
  v48 = (ListViewSort_FilterCategoryKind_array *)v45;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v45, (System_RuntimeFieldHandle_o)v47, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v48, v49);
}


void __fastcall ServantFilterSelectMenu__InitServantListDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v5; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__54_0; // x21
  Il2CppObject *v19; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x1
  System_Array_o *v33; // x0
  __int64 *v34; // x8
  __int64 v35; // x1
  ListViewSort_FilterCategoryKind_array *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4353BFF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_B70694(&Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE);
    sub_B70694(&Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__);
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4353BFF = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v5 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v5 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v13);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v14);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_39;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__54_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__54_0,
      v19,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v20 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v20->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__54_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v20->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v27 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__54_0,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_39;
    klass = v27[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v31, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v32) )
  {
    v33 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v34 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_38;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_39:
    sub_B7076C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v33 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v34 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_38:
  v35 = *v34;
  v36 = (ListViewSort_FilterCategoryKind_array *)v33;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v33, (System_RuntimeFieldHandle_o)v35, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v36, v37);
}


void __fastcall ServantFilterSelectMenu__InitServantNormalDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v5; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x21
  Il2CppObject *v19; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x1
  System_Array_o *v33; // x0
  __int64 *v34; // x8
  __int64 v35; // x1
  ListViewSort_FilterCategoryKind_array *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4353BFC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_B70694(&Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754);
    sub_B70694(&Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__);
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4353BFC = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  v5 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v5 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v13);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v14);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_38;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v19,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v20 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v20->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__51_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v20->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v27 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__51_0,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_38;
    klass = v27[3].klass;
    if ( !klass )
      goto LABEL_38;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v31, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v32) )
  {
    v33 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 8LL);
    v34 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_37;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_38:
    sub_B7076C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v33 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
  v34 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_37:
  v35 = *v34;
  v36 = (ListViewSort_FilterCategoryKind_array *)v33;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v33, (System_RuntimeFieldHandle_o)v35, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v36, v37);
}


void __fastcall ServantFilterSelectMenu__InitServantNotClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__53_0; // x21
  Il2CppObject *v18; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x1
  System_Array_o *v32; // x0
  __int64 *v33; // x8
  __int64 v34; // x1
  ListViewSort_FilterCategoryKind_array *v35; // x20
  const MethodInfo *v36; // x2

  if ( (byte_4353BFE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_B70694(&Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D);
    sub_B70694(&Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F);
    sub_B70694(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__);
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_4353BFE = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_30B95BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4 )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_30B9404 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30B91B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v12);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v13);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_35;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__53_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__53_0,
      v18,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v19 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v19->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__53_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v19->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !categoryContainerList )
    goto LABEL_35;
  v26 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__53_0,
                                  (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_35;
    klass = v26[3].klass;
    if ( !klass )
      goto LABEL_35;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v30 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_35;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v30, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v31) )
  {
    v32 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 6LL);
    v33 = &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F;
    goto LABEL_34;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_35:
    sub_B7076C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v32 = (System_Array_o *)sub_B706AC(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v33 = &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D;
LABEL_34:
  v34 = *v33;
  v35 = (ListViewSort_FilterCategoryKind_array *)v32;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v32, (System_RuntimeFieldHandle_o)v34, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v35, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__InitUseFilterButton(
        ServantFilterSelectMenu_o *this,
        bool isSummon,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *filterButtonList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v8; // x23
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct ServantFilterSelectMenu_FilterContainer_o *v16; // x8
  bool i; // w20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  bool v22; // w22
  ListViewSort_o *operationSortInfo; // x23
  ServantFilterButtonControl_OnClickFilterButton_o *v24; // x24
  const MethodInfo *v25; // x6
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4353C06 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_B70694(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_B70694(&Method_System_Predicate_ServantFilterButtonControl___ctor__);
    sub_B70694(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_OnClickFilterButton__);
    sub_B70694(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__);
    byte_4353C06 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)useFilterButtonList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_16;
  filterButtonList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)currentFilterContainer->fields.filterButtonList;
  v8 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v8,
    (Il2CppObject *)this,
    Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                filterButtonList,
                (System_Predicate_T__o *)v8,
                (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
          (System_Int32_array **)All,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (v16 = this->fields.currentFilterContainer) == 0LL)
    || (useFilterButtonList = v16->fields.filterButtonList) == 0LL )
  {
LABEL_16:
    sub_B7076C(useFilterButtonList, isSummon);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = isSummon;
        ;
        ServantFilterButtonControl__Init(
          (ServantFilterButtonControl_o *)current,
          operationSortInfo,
          v24,
          v22,
          i,
          0,
          v25) )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v18 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B7076C(v18, v19);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B7076C(0LL, v19);
    v22 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v26.fields.current[1].monitor,
            (const MethodInfo_30B9604 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    operationSortInfo = this->fields.operationSortInfo;
    v24 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B70764(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v24,
      (Il2CppObject *)this,
      Method_ServantFilterSelectMenu_OnClickFilterButton__,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


bool __fastcall ServantFilterSelectMenu__IsChangedStatus(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x0
  __int64 v5; // x1
  struct System_Boolean_array *kindStatus; // x10
  __int64 v7; // x9
  unsigned __int64 v8; // x8
  bool *v9; // x10
  int32_t kind; // w8
  __int64 v12; // x0

  svtEquipEffectFilterController = (ServantEquipEffectFilterController_o *)ServantFilterSelectMenu__SetKindStatus(
                                                                             this,
                                                                             this->fields.operationSortInfo,
                                                                             v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_23;
  v7 = *(_QWORD *)&kindStatus->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = &kindStatus->m_Items[4];
    while ( svtEquipEffectFilterController )
    {
      if ( v8 >= LODWORD(svtEquipEffectFilterController->fields.SvtEqDisplayGroups) )
      {
        v12 = sub_B70798(svtEquipEffectFilterController);
        sub_B70738(v12, 0LL);
      }
      if ( !v9[v8] == (*((_BYTE *)&svtEquipEffectFilterController->fields.CommandCodeDisplayGroups + v8) != 0) )
        return 1;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_8;
    }
LABEL_23:
    sub_B7076C(svtEquipEffectFilterController, v5);
  }
LABEL_8:
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_23;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEquipEffectFilterController, 0LL) )
      return 1;
    kind = this->fields.kind;
  }
  if ( kind == 6 )
  {
    svtEquipEffectFilterController = this->fields.commandCodeEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_23;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEquipEffectFilterController, 0LL) )
      return 1;
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    svtEquipEffectFilterController = (ServantEquipEffectFilterController_o *)this->fields.svtEventBonusFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_23;
    if ( ServantEventBonusFilterController__IsChangeFilterData(
           (ServantEventBonusFilterController_o *)svtEquipEffectFilterController,
           0LL) )
    {
      return 1;
    }
  }
  if ( this->fields.isDisplayServantEffect )
  {
    svtEquipEffectFilterController = this->fields.svtEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_23;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEquipEffectFilterController, 0LL) )
      return 1;
  }
  return 0;
}


bool __fastcall ServantFilterSelectMenu__IsEventBonus(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int32_t eventId; // w8
  unsigned int kind; // w8
  bool result; // w0
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  System_Collections_Generic_HashSet_int__o *v8; // x20
  System_Int32_array *v9; // x22
  EventUpValSetupInfo_o *v10; // x21
  struct System_Int32_array *servantFilterEventIdList; // x8
  EventBonusFilterMaster_o *v12; // x21

  if ( (byte_4353BFB & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&EventUpValSetupInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    byte_4353BFB = 1;
  }
  eventId = this->fields.eventId;
  this->fields.isDisplayEventBonusSkill = 0;
  if ( !eventId )
    return 0;
  kind = this->fields.kind;
  result = 0;
  if ( kind <= 0xB && ((1 << kind) & 0xC0F) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
    Master_WarQuestSelectionMaster = (EventMaster_o *)EventMaster__GetEventValUpEventIdHash(
                                                        Master_WarQuestSelectionMaster,
                                                        0,
                                                        0LL,
                                                        0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
    v8 = (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster;
    if ( SLODWORD(Master_WarQuestSelectionMaster->fields.list) >= 1 )
    {
      if ( this->fields.eventId >= 1 )
      {
        v8 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v8,
          (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
        if ( !v8 )
          goto LABEL_28;
        System_Collections_Generic_HashSet_int___Add(
          v8,
          this->fields.eventId,
          (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v9 = System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v8,
             (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
      v10 = (EventUpValSetupInfo_o *)sub_B70764(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor_23742548(v10, v9, 0, 0, 0, 0LL);
      if ( v10 )
      {
        servantFilterEventIdList = v10->fields.servantFilterEventIdList;
        if ( !servantFilterEventIdList || !servantFilterEventIdList->max_length )
        {
          result = 0;
          goto LABEL_26;
        }
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v12 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        Master_WarQuestSelectionMaster = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v8,
                                                            (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( v12 )
        {
          Master_WarQuestSelectionMaster = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                              v12,
                                                              (System_Int32_array *)Master_WarQuestSelectionMaster,
                                                              0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            result = SLODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) > 0;
LABEL_26:
            this->fields.isDisplayEventBonusSkill = result;
            return result;
          }
        }
      }
LABEL_28:
      sub_B7076C(Master_WarQuestSelectionMaster, v7);
    }
    return 0;
  }
  return result;
}


void __fastcall ServantFilterSelectMenu__OnClickCancel(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4353C0C & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353C0C = 1;
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
    ServantFilterSelectMenu__Callback(this, 0, v3);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickClear(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4353C0D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353C0D = 1;
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
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0LL);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v5 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)operationSortInfo,
                                                (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v5 )
        {
          ListViewSort__SetFilters(v5, (ListViewSort_FilterKind_array *)operationSortInfo, 0, 0LL);
          if ( (unsigned int)(this->fields.kind - 5) < 2 || this->fields.isDisplayServantEffect )
          {
            operationSortInfo = this->fields.operationSortInfo;
            if ( !operationSortInfo )
              goto LABEL_19;
            ListViewSort__SetAllSvtEquipEffectFilter(operationSortInfo, 0, 0LL);
          }
          if ( !this->fields.isDisplayEventBonusSkill )
          {
LABEL_17:
            ServantFilterSelectMenu__SetButtonSelect(this, v3);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v6);
            return;
          }
          operationSortInfo = (ListViewSort_o *)this->fields.svtEventBonusFilterController;
          if ( operationSortInfo )
          {
            ServantEventBonusFilterController__InitAllButton(
              (ServantEventBonusFilterController_o *)operationSortInfo,
              0LL);
            goto LABEL_17;
          }
        }
      }
    }
LABEL_19:
    sub_B7076C(operationSortInfo, v3);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickDecide(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v2; // x19
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  float value; // s0
  const MethodInfo *v7; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4353C0B & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_B70694(&SoundManager_TypeInfo);
    byte_4353C0B = 1;
  }
  if ( v2->fields.state == 2 )
  {
    currentFilterContainer = v2->fields.currentFilterContainer;
    if ( !currentFilterContainer )
      goto LABEL_14;
    scrollView = currentFilterContainer->fields.scrollView;
    if ( !scrollView )
      goto LABEL_14;
    this = *(ServantFilterSelectMenu_o **)&scrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_14;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_14;
    operationSortInfo->fields.scrollBarValue = value;
    v2->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (ServantFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_14:
      sub_B7076C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    IsChangedStatus = ServantFilterSelectMenu__IsChangedStatus(v2, v7);
    ServantFilterSelectMenu__Callback(v2, IsChangedStatus, v9);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickFilterButton(
        ServantFilterSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4353C0F & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353C0F = 1;
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
      sub_B7076C(0LL, v5);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    ServantFilterSelectMenu__SetButtonSelect(this, v7);
    ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v8);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickInitialize(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4353C0E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353C0E = 1;
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
    if ( operationSortInfo )
    {
      ListViewSort__ResetAllNormalFilter(operationSortInfo, 0LL);
      operationSortInfo = (ListViewSort_o *)this->fields.useFilterKindList;
      if ( operationSortInfo )
      {
        v5 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)operationSortInfo,
                                                (const MethodInfo_30BB2BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v5 )
        {
          ListViewSort__SetFilters(v5, (ListViewSort_FilterKind_array *)operationSortInfo, 1, 0LL);
          if ( (unsigned int)(this->fields.kind - 5) < 2 || this->fields.isDisplayServantEffect )
          {
            operationSortInfo = this->fields.operationSortInfo;
            if ( !operationSortInfo )
              goto LABEL_19;
            ListViewSort__SetAllSvtEquipEffectFilter(operationSortInfo, 1, 0LL);
          }
          if ( !this->fields.isDisplayEventBonusSkill )
          {
LABEL_17:
            ServantFilterSelectMenu__SetButtonSelect(this, v3);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v6);
            return;
          }
          operationSortInfo = (ListViewSort_o *)this->fields.svtEventBonusFilterController;
          if ( operationSortInfo )
          {
            ServantEventBonusFilterController__InitAllButton(
              (ServantEventBonusFilterController_o *)operationSortInfo,
              0LL);
            goto LABEL_17;
          }
        }
      }
    }
LABEL_19:
    sub_B7076C(operationSortInfo, v3);
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
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  ServantFilterSelectMenu_o *v21; // x0
  const MethodInfo *v22; // x2
  ServantFilterSelectMenu_c *v23; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v25; // x1
  __int64 v26; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  ListViewSort_o *v35; // x22
  ListViewSort_o *v36; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  ServantFilterSelectMenu_o *v58; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v60; // x0
  FilterKindList_c *v61; // x0
  const MethodInfo *v62; // x2
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  System_Action_o *v67; // x20

  if ( (byte_4353BF9 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&ListViewSort_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_ServantFilterSelectMenu_EndOpen__);
    sub_B70694(&ServantFilterSelectMenu_TypeInfo);
    sub_B70694(&StringLiteral_12110/*"SERVANT_SORT_RESET"*/);
    sub_B70694(&StringLiteral_11960/*"SERVANT_SORT_CANCEL"*/);
    sub_B70694(&StringLiteral_11851/*"SERVANT_EQUIP_FILTER_WARNING"*/);
    sub_B70694(&StringLiteral_11964/*"SERVANT_SORT_DECIDE"*/);
    sub_B70694(&StringLiteral_12112/*"SERVANT_SORT_TITLE2"*/);
    sub_B70694(&StringLiteral_11961/*"SERVANT_SORT_CLEAR"*/);
    byte_4353BF9 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)sort,
      (System_String_array **)listViewManager,
      (System_Boolean_array **)callback,
      *(System_Int32_array ***)&eventId,
      (System_Int32_array *)method,
      v7);
    this->fields.eventId = eventId;
    if ( sort )
    {
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
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
      v23 = ServantFilterSelectMenu_TypeInfo;
      if ( (BYTE3(ServantFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
        v23 = ServantFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v23->static_fields->commonServantSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      v25 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v25,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_49;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    v28 = ServantFilterSelectMenu__SetKindStatus(v21, sort, v22);
    this->fields.kindStatus = v28;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.kindStatus,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v35 = this->fields.baseSortInfo;
    v36 = (ListViewSort_o *)sub_B70764(ListViewSort_TypeInfo);
    ListViewSort___ctor_33980604(v36, v35, 0LL);
    this->fields.operationSortInfo = v36;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this->fields.listViewManager = listViewManager;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.listViewManager,
      (System_Int32_array **)listViewManager,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
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
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12112/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11851/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0LL);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0LL);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11964/*"SERVANT_SORT_DECIDE"*/, 0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11961/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11960/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12110/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v55);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v55);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v55);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v55);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v55);
                          break;
                        case 5:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v55);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v55);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v55);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v55);
                          break;
                        case 0xC:
                          v57 = 999;
                          v58 = this;
                          ClassExtra1FilterKindList = 0LL;
                          goto LABEL_43;
                        case 0xD:
                          v60 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v60 = FilterKindList_TypeInfo;
                          }
                          v57 = 14;
                          ClassExtra1FilterKindList = v60->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_42;
                        case 0xE:
                          v61 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v61 = FilterKindList_TypeInfo;
                          }
                          v57 = 15;
                          ClassExtra1FilterKindList = v61->static_fields->ClassExtra2FilterKindList;
LABEL_42:
                          v58 = this;
LABEL_43:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v58, ClassExtra1FilterKindList, v57, v56);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v55);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v62);
                      ServantFilterSelectMenu__SetButtonSelect(this, v63);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v64);
                      currentFilterContainer = this->fields.currentFilterContainer;
                      if ( currentFilterContainer )
                      {
                        scrollView = currentFilterContainer->fields.scrollView;
                        if ( scrollView )
                        {
                          if ( *p_baseSortInfo )
                          {
                            baseSortInfo = *(ListViewSort_o **)&scrollView->fields.showScrollBars;
                            if ( baseSortInfo )
                            {
                              UIProgressBar__set_value(
                                (UIProgressBar_o *)baseSortInfo,
                                (*p_baseSortInfo)->fields.scrollBarValue,
                                0LL);
                              this->fields.state = 1;
                              v67 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                              System_Action___ctor(
                                v67,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0LL);
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
LABEL_49:
    sub_B7076C(baseSortInfo, v26);
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
  struct UIScrollView_o *v9; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v10; // x8

  if ( (byte_4353C08 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353C08 = 1;
  }
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( currentFilterContainer )
  {
    scrollView = (UnityEngine_Object_o *)currentFilterContainer->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UIScrollView_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v7 = this->fields.currentFilterContainer;
      if ( v7 )
      {
        v5 = v7->fields.scrollView;
        if ( v5 )
        {
          v5 = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v5->klass->vtable._6_get_shouldMoveVertically.method)(
                                   v5,
                                   v5->klass->vtable._7_get_shouldMove.methodPtr);
          if ( ((unsigned __int8)v5 & 1) == 0 )
          {
            v8 = this->fields.currentFilterContainer;
            if ( !v8 )
              goto LABEL_18;
            v9 = v8->fields.scrollView;
            if ( !v9 )
              goto LABEL_18;
            HIDWORD(v9->fields.onDragStarted) = 4;
          }
          v10 = this->fields.currentFilterContainer;
          if ( v10 )
          {
            v5 = v10->fields.scrollView;
            if ( v5 )
            {
              UIScrollView__ResetPosition(v5, 0LL);
              return;
            }
          }
        }
      }
LABEL_18:
      sub_B7076C(v5, v6);
    }
  }
}


void __fastcall ServantFilterSelectMenu__SetActiveCurrentFilterContainer(
        ServantFilterSelectMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8

  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.root) == 0LL )
    sub_B7076C(this, isActive);
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
  Il2CppClass *klass; // x0
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4353C0A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4353C0A = 1;
  }
  memset(&v11, 0, sizeof(v11));
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v6 )
      break;
    if ( !v11.fields.current )
      sub_B7076C(v6, v7);
    klass = v11.fields.current[2].klass;
    if ( !klass )
      sub_B7076C(0LL, v7);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)klass, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEquipEffectFilterController;
    if ( !decideButton )
      goto LABEL_28;
    ServantEquipEffectFilterController__SetEnableFilterButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      0LL);
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
      0LL);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEventBonusFilterController;
    if ( !decideButton )
      goto LABEL_28;
    ServantEventBonusFilterController__SetEnableFilterButton(
      (ServantEventBonusFilterController_o *)decideButton,
      isEnable,
      0LL);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  decideButton = (UICommonButton_o *)this->fields.svtEffectFilterController;
  if ( !decideButton )
LABEL_28:
    sub_B7076C(decideButton, isEnable);
  ServantEquipEffectFilterController__SetEnableFilterButton(
    (ServantEquipEffectFilterController_o *)decideButton,
    isEnable,
    0LL);
}


void __fastcall ServantFilterSelectMenu__SetButtonSelect(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *useFilterButtonList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *current; // x20
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v10; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v12; // w0
  const MethodInfo *v13; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4353C09 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4353C09 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  useFilterButtonList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    useFilterButtonList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v16,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v4 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B7076C(v4, v5);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v16.fields.current, v5);
    v8 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B7076C(0LL, v7);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_30B9604 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B7076C(0LL, v10);
      v12 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v12, v13);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    useFilterButtonList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.svtEquipEffectFilterController;
    if ( !useFilterButtonList )
      goto LABEL_30;
    ServantEquipEffectFilterController__RefreshSelectState(
      (ServantEquipEffectFilterController_o *)useFilterButtonList,
      0LL);
    kind = this->fields.kind;
  }
  if ( kind == 6 )
  {
    useFilterButtonList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.commandCodeEffectFilterController;
    if ( !useFilterButtonList )
      goto LABEL_30;
    ServantEquipEffectFilterController__RefreshSelectState(
      (ServantEquipEffectFilterController_o *)useFilterButtonList,
      0LL);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    useFilterButtonList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.svtEventBonusFilterController;
    if ( !useFilterButtonList )
      goto LABEL_30;
    ServantEventBonusFilterController__RefreshButtonState(
      (ServantEventBonusFilterController_o *)useFilterButtonList,
      0LL);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  useFilterButtonList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.svtEffectFilterController;
  if ( !useFilterButtonList )
LABEL_30:
    sub_B7076C(useFilterButtonList, method);
  ServantEquipEffectFilterController__RefreshSelectState(
    (ServantEquipEffectFilterController_o *)useFilterButtonList,
    0LL);
}


System_Boolean_array *__fastcall ServantFilterSelectMenu__SetKindStatus(
        ServantFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *Filter; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *AllFilterKindList; // x8
  int size; // w21
  System_Boolean_array *v7; // x20
  unsigned __int64 v8; // x23
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v9; // x25
  __int64 v11; // x0

  if ( (byte_4353C11 & 1) == 0 )
  {
    sub_B70694(&bool___TypeInfo);
    sub_B70694(&FilterKindList_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
    byte_4353C11 = 1;
  }
  Filter = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    Filter = FilterKindList_TypeInfo;
  }
  AllFilterKindList = Filter->static_fields->AllFilterKindList;
  if ( !AllFilterKindList )
    goto LABEL_20;
  size = AllFilterKindList->fields._size;
  v7 = (System_Boolean_array *)sub_B706AC(bool___TypeInfo, (unsigned int)size);
  if ( size >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      Filter = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        Filter = FilterKindList_TypeInfo;
      }
      v9 = Filter->static_fields->AllFilterKindList;
      if ( !v9 )
        break;
      if ( v8 >= (unsigned int)v9->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( !sort )
        break;
      Filter = (FilterKindList_c *)ListViewSort__GetFilter(sort, v9->fields._items->m_Items[v8 + 1], 0LL);
      if ( !v7 )
        break;
      if ( v8 >= v7->max_length )
      {
        v11 = sub_B70798(Filter);
        sub_B70738(v11, 0LL);
      }
      v7->m_Items[v8++ + 4] = (unsigned __int8)Filter & 1;
      if ( (__int64)v8 >= size )
        return v7;
    }
LABEL_20:
    sub_B7076C(Filter, sort);
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
  if ( (byte_4353C15 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_B70694(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_4353C15 = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_B7076C(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_30B9604 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_4353BF5 & 1) == 0 )
  {
    sub_B70694(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4353BF5 = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  ServantFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantFilterSelectMenu__get_closeBtnPath(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353C12 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15698/*"Window/CancelButton"*/);
    byte_4353C12 = 1;
  }
  return (System_String_o *)StringLiteral_15698/*"Window/CancelButton"*/;
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

  if ( (byte_4353BF6 & 1) == 0 )
  {
    sub_B70694(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_4353BF6 = 1;
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
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall ServantFilterSelectMenu_CallbackFunc__BeginInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_434F23B & 1) == 0 )
  {
    sub_B70694(&bool_TypeInfo);
    byte_434F23B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu_CallbackFunc__Invoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ServantFilterSelectMenu_CallbackFunc_o **v7; // x25
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
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x8
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
  ServantFilterSelectMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (ServantFilterSelectMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B706C4(v20) & 1) == 0 )
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
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
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
            v16 = sub_B08590(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B70744(v15, v20);
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
            v14 = sub_B08590(v19, class_0, v9);
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


void __fastcall ServantFilterSelectMenu_FilterContainer___ctor(
        ServantFilterSelectMenu_FilterContainer_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_434F23C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    byte_434F23C = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v3;
  sub_B70630(&this->fields.categoryContainerList);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v4;
  sub_B70630(&this->fields.filterButtonList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0

  if ( (byte_434F23A & 1) == 0 )
  {
    sub_B70694(&ServantFilterSelectMenu___c_TypeInfo);
    byte_434F23A = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantFilterSelectMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 12;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_2(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 19;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_3(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 20;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 0;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
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
    sub_B7076C(this, x);
  return *(&container->fields.categoryKind + 1) == x;
}