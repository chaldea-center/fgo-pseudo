void __fastcall ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  ListViewSort_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189F6E & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_TypeInfo, v1);
    sub_B2C35C(&ServantFilterSelectMenu_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_12716/*"ServantFilterSelect1"*/, v3);
    byte_4189F6E = 1;
  }
  v4 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v4, (System_String_o *)StringLiteral_12716/*"ServantFilterSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantFilterSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4189F6D & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v6);
    byte_4189F6D = 1;
  }
  v7 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v7,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
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
  bool v7; // w20
  WebViewObject_o *Component_WebViewObject; // x19
  int v9; // s0

  if ( (byte_4189F6A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189F6A = 1;
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
      v7 = ListViewManager__GetMatchItemCount(warningLabel, this->fields.operationSortInfo, 0LL) == 0;
    }
    else
    {
      v7 = 0;
    }
    warningLabel = (ListViewManager_o *)this->fields.warningLabel;
    if ( !warningLabel
      || (warningLabel = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)warningLabel,
                                                0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, v7, 0LL),
          (warningLabel = (ListViewManager_o *)this->fields.decideButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningLabel, !v7, 0LL),
          (warningLabel = (ListViewManager_o *)this->fields.decideButton) == 0LL) )
    {
LABEL_21:
      sub_B2C434(warningLabel, v5);
    }
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)warningLabel,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( v7 )
    {
      *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_gray(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_21;
    }
    else
    {
      *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_21;
    }
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v9, 0LL);
  }
}


void __fastcall ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_29302592(this, 0LL, v2);
}


void __fastcall ServantFilterSelectMenu__Close_29302592(
        ServantFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_4189F54 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantFilterSelectMenu_EndClose__, v5);
    byte_4189F54 = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4189F52 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_4189F52 = 1;
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
    sub_B2C434(0LL, v1);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x8
  float v14; // s0
  float v15; // s1
  float v16; // s2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **current; // x1
  UnityEngine_Component_o **v31; // x20
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v32; // x22
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  bool v35; // w8
  ServantFilterCategoryContainer_o *v36; // x0
  __int64 v37; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  __int64 v42; // x0
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-90h] BYREF
  int v45; // [xsp+4Ch] [xbp-64h]
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4189F61 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___, categoryKindKist);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v7);
    sub_B2C35C(&Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__, v8);
    sub_B2C35C(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v10);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__, v11);
    this = (ServantFilterSelectMenu_o *)sub_B2C35C(&ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo, v12);
    byte_4189F61 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !categoryKindKist )
    goto LABEL_21;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
  {
    v42 = sub_B2C460(this);
    sub_B2C400(v42, 0LL);
  }
  v45 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  currentFilterContainer = v4->fields.currentFilterContainer;
  if ( !currentFilterContainer
    || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.categoryContainerList) == 0LL )
  {
LABEL_21:
    sub_B2C434(this, categoryKindKist);
  }
  x = v14;
  y = v15;
  z = v16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v21 = sub_B2C42C(ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo);
    ServantFilterSelectMenu___c__DisplayClass62_0___ctor((ServantFilterSelectMenu___c__DisplayClass62_0_o *)v21, 0LL);
    if ( !v21 )
      sub_B2C434(v22, v23);
    current = (System_Int32_array **)v44.fields.current;
    *(_QWORD *)(v21 + 16) = v44.fields.current;
    v31 = (UnityEngine_Component_o **)(v21 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), current, v24, v25, v26, v27, v28, v29);
    v32 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B2C42C(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      v32,
      (Il2CppObject *)v21,
      Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__,
      (const MethodInfo_270E404 *)Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__);
    v35 = BasicHelper__Any_ListViewSort_FilterCategoryKind_(
            categoryKindKist,
            (System_Func_T__bool__o *)v32,
            (const MethodInfo_1726564 *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    v36 = *(ServantFilterCategoryContainer_o **)(v21 + 16);
    if ( v35 )
    {
      if ( !v36 )
        sub_B2C434(0LL, v33);
      ServantFilterCategoryContainer__SetActive(v36, 1, v34);
      if ( !*v31 )
        sub_B2C434(0LL, v37);
      gameObject = UnityEngine_Component__get_gameObject(*v31, 0LL);
      v46.fields.x = x;
      v46.fields.y = y;
      v46.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v46, 0LL);
      if ( !*v31 )
        sub_B2C434(0LL, v39);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*v31,
        HIDWORD((*v31)[2].klass) == v45,
        v40);
      if ( !*v31 )
        sub_B2C434(0LL, v41);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)*v31, v41);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !v36 )
        sub_B2C434(0LL, v33);
      ServantFilterCategoryContainer__SetActive(v36, 0, v34);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
}


void __fastcall ServantFilterSelectMenu__InitCommandCodeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
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
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v17; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *commandCodeFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v30; // x23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__58_0; // x21
  Il2CppObject *v34; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v44; // x20
  const MethodInfo *v45; // x2
  System_RuntimeFieldHandle_o v46; // 0:w1.4

  if ( (byte_4189F5D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B2C35C(&FilterKindList_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B2C35C(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A,
      v13);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__, v14);
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v15);
    byte_4189F5D = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v17 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v17 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  commandCodeFilterContainer = this->fields.commandCodeFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = commandCodeFilterContainer;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)commandCodeFilterContainer,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v26);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v27);
  commandCodeEffectFilterController = this->fields.commandCodeEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !commandCodeEffectFilterController )
    goto LABEL_28;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v30, 0LL);
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
    v34 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__58_0,
      v34,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v35 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v35->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__58_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__58_0,
      (System_Int32_array **)_9__58_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !categoryContainerList )
    goto LABEL_28;
  v42 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__58_0,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v42 )
    {
      klass = v42[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_27;
      }
    }
LABEL_28:
    sub_B2C434(useFilterKindList, method);
  }
LABEL_27:
  v44 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v46.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v44, v46, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v44, v45);
}


void __fastcall ServantFilterSelectMenu__InitCommonSummonDisp(
        ServantFilterSelectMenu_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *filterKind,
        int32_t categoryKind,
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
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v21; // x22
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v22; // x21
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  System_Array_o *v32; // x23
  int32_t size; // w8
  System_Array_o *v34; // x21
  System_Collections_Generic_List_VoiceCondType_Type__o *v35; // x22
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v38; // x24
  ListViewSort_FilterCategoryKind_array *v39; // x1
  const MethodInfo *v40; // x2
  __int64 v41; // x0
  System_RuntimeFieldHandle_o v42; // 0:w1.4
  System_RuntimeFieldHandle_o v43; // 0:w1.4

  if ( (byte_4189F5F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, filterKind);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v7);
    sub_B2C35C(&FilterKindList_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo, v16);
    sub_B2C35C(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v17);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44,
      v18);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB,
      v19);
    byte_4189F5F = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v21 = this->fields.useFilterKindList;
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v21 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->BonusSelectCollectionStateFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      goto LABEL_28;
    System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
      (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
  v22 = this->fields.useFilterKindList;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v22 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v30);
  ServantFilterSelectMenu__InitUseFilterButton(this, 1, v31);
  v32 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v42.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v32, v42, 0LL);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)sub_B2C374(
                                                                                                   ListViewSort_FilterCategoryKind___TypeInfo,
                                                                                                   2LL);
  if ( !useFilterKindList )
    goto LABEL_28;
  size = useFilterKindList->fields._size;
  if ( !size || (LODWORD(useFilterKindList->fields._syncRoot) = 1, size == 1) )
  {
    v41 = sub_B2C460(useFilterKindList);
    sub_B2C400(v41, 0LL);
  }
  HIDWORD(useFilterKindList->fields._syncRoot) = 2;
  v34 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 3LL);
  v43.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v34, v43, 0LL);
  v35 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v35,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v35 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v35,
    (System_Collections_Generic_IEnumerable_T__o *)v32,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v35,
      categoryKind,
      (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__);
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
LABEL_28:
    sub_B2C434(useFilterKindList, filterKind);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v38, 0LL);
  this->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v35,
    (System_Collections_Generic_IEnumerable_T__o *)v34,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v39 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                   (System_Collections_Generic_List_Voice_BATTLE__o *)v35,
                                                   (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(this, v39, v40);
}


void __fastcall ServantFilterSelectMenu__InitCostumeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
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
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v15; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v16; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *costumeFilterContainer; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__59_0; // x21
  Il2CppObject *v30; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Object_o *v38; // x20
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v40; // x20
  const MethodInfo *v41; // x2
  System_RuntimeFieldHandle_o v42; // 0:w1.4

  if ( (byte_4189F5E & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, method);
    sub_B2C35C(&FilterKindList_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v9);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D,
      v11);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, v12);
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v13);
    byte_4189F5E = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v15 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v15 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  v16 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = this->fields.costumeFilterContainer;
  this->fields.currentFilterContainer = costumeFilterContainer;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)costumeFilterContainer,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v24);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v25);
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
    v30 = (Il2CppObject *)static_fields->__9;
    _9__59_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__59_0,
      v30,
      Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v31 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v31->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__59_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__59_0,
      (System_Int32_array **)_9__59_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !categoryContainerList )
    goto LABEL_30;
  v38 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__59_0,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v38 )
    {
      klass = v38[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_B2C434(useFilterKindList, method);
  }
LABEL_29:
  v40 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
  v42.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v40, v42, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v40, v41);
}


void __fastcall ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_4189F51 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_4189F51 = 1;
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
    sub_B2C434(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantFilterSelectMenu__InitMaterialDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
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
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__56_0; // x21
  Il2CppObject *v34; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v46; // x22
  const MethodInfo *v47; // x1
  System_Array_o *v48; // x0
  __int64 *v49; // x8
  __int64 v50; // x1
  ListViewSort_FilterCategoryKind_array *v51; // x20
  const MethodInfo *v52; // x2

  if ( (byte_4189F5B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B2C35C(&FilterKindList_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B2C35C(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v14);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v15);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, v16);
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_4189F5B = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v19 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v20 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v28);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v29);
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
    v34 = (Il2CppObject *)static_fields->__9;
    _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__56_0,
      v34,
      Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v35 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v35->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__56_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__56_0,
      (System_Int32_array **)_9__56_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v42 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__56_0,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_40;
    klass = v42[3].klass;
    if ( !klass )
      goto LABEL_40;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v46, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v47) )
  {
    v48 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v49 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_39;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_40:
    sub_B2C434(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v48 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v49 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_39:
  v50 = *v49;
  v51 = (ListViewSort_FilterCategoryKind_array *)v48;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v48, (System_RuntimeFieldHandle_o)v50, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v51, v52);
}


void __fastcall ServantFilterSelectMenu__InitServantBaseDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
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
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__55_0; // x21
  Il2CppObject *v34; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v46; // x22
  const MethodInfo *v47; // x1
  System_Array_o *v48; // x0
  __int64 *v49; // x8
  __int64 v50; // x1
  ListViewSort_FilterCategoryKind_array *v51; // x20
  const MethodInfo *v52; // x2

  if ( (byte_4189F5A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B2C35C(&FilterKindList_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B2C35C(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA,
      v14);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D,
      v15);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__, v16);
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_4189F5A = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v19 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v20 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v28);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v29);
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
    v34 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__55_0,
      v34,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v35 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v35->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__55_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__55_0,
      (System_Int32_array **)_9__55_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v42 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__55_0,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_39;
    klass = v42[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v46, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v47) )
  {
    v48 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v49 = &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D;
    goto LABEL_38;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_39:
    sub_B2C434(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v48 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v49 = &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA;
LABEL_38:
  v50 = *v49;
  v51 = (ListViewSort_FilterCategoryKind_array *)v48;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v48, (System_RuntimeFieldHandle_o)v50, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v51, v52);
}


void __fastcall ServantFilterSelectMenu__InitServantEquipDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
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
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v17; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v30; // x23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_0; // x21
  Il2CppObject *v34; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v44; // x20
  const MethodInfo *v45; // x2
  System_RuntimeFieldHandle_o v46; // 0:w1.4

  if ( (byte_4189F5C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B2C35C(&FilterKindList_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B2C35C(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__C553AB27B928A848AF71444388E2F8D356D5F0A9D933AA4B4E5CA8B4703104F3,
      v13);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__, v14);
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v15);
    byte_4189F5C = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_29;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v17 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v17 )
    goto LABEL_29;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_29;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_29;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantEquipFilterContainer = this->fields.servantEquipFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = servantEquipFilterContainer;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantEquipFilterContainer,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v26);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v27);
  svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEquipEffectFilterController )
    goto LABEL_29;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v30, 0LL);
  if ( !*p_currentFilterContainer )
    goto LABEL_29;
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
    v34 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_0,
      v34,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v35 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v35->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !categoryContainerList )
    goto LABEL_29;
  v42 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__57_0,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v42 )
    {
      klass = v42[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_B2C434(useFilterKindList, method);
  }
LABEL_28:
  v44 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
  v46.fields.value = Field__PrivateImplementationDetails__C553AB27B928A848AF71444388E2F8D356D5F0A9D933AA4B4E5CA8B4703104F3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v44, v46, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v44, v45);
}


void __fastcall ServantFilterSelectMenu__InitServantExtraClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
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
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_0; // x21
  Il2CppObject *v33; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Object_o *v41; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v45; // x22
  struct ServantFilterSelectMenu_FilterContainer_o *v46; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v47; // x20
  struct ServantFilterSelectMenu___c_StaticFields *v48; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_1; // x21
  Il2CppObject *v50; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Object_o *v58; // x20
  UnityEngine_Object_c *v59; // x8
  System_Array_o *v60; // x0
  __int64 *v61; // x8
  __int64 v62; // x1
  ListViewSort_FilterCategoryKind_array *v63; // x20
  const MethodInfo *v64; // x2

  if ( (byte_4189F57 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B2C35C(&FilterKindList_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B2C35C(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v13);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v14);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__, v15);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__, v16);
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_4189F57 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v19 )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v27);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v28);
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
    v33 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v33,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v34 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v34->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v34->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !categoryContainerList )
    goto LABEL_55;
  v41 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__52_0,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_55;
    klass = v41[3].klass;
    if ( !klass )
      goto LABEL_55;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_55;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v45, 0LL);
  v46 = this->fields.currentFilterContainer;
  this->fields.isDisplayServantEffect = 1;
  if ( !v46 )
    goto LABEL_55;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v47 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v46->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v48 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v48->__9__52_1;
  if ( !_9__52_1 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v48 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)v48->__9;
    _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_1,
      v50,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v51 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v51->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v51->__9__52_1,
      (System_Int32_array **)_9__52_1,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  if ( !v47 )
    goto LABEL_55;
  v58 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v47,
                                  (System_Predicate_T__o *)_9__52_1,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v58 )
      goto LABEL_55;
    v59 = v58[3].klass;
    if ( !v59 )
      goto LABEL_55;
    HIDWORD(v59->_1.byval_arg.data) = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(this, method) )
  {
    v60 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 8LL);
    v61 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_54;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_55:
    sub_B2C434(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v60 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
  v61 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_54:
  v62 = *v61;
  v63 = (ListViewSort_FilterCategoryKind_array *)v60;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v60, (System_RuntimeFieldHandle_o)v62, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v63, v64);
}


void __fastcall ServantFilterSelectMenu__InitServantListDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
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
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__54_0; // x21
  Il2CppObject *v34; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v46; // x22
  const MethodInfo *v47; // x1
  System_Array_o *v48; // x0
  __int64 *v49; // x8
  __int64 v50; // x1
  ListViewSort_FilterCategoryKind_array *v51; // x20
  const MethodInfo *v52; // x2

  if ( (byte_4189F59 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B2C35C(&FilterKindList_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B2C35C(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v14);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v15);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__, v16);
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_4189F59 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v19 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v20 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v28);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v29);
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
    v34 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__54_0,
      v34,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v35 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v35->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__54_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v42 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__54_0,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_39;
    klass = v42[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v46, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v47) )
  {
    v48 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v49 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_38;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_39:
    sub_B2C434(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v48 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v49 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_38:
  v50 = *v49;
  v51 = (ListViewSort_FilterCategoryKind_array *)v48;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v48, (System_RuntimeFieldHandle_o)v50, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v51, v52);
}


void __fastcall ServantFilterSelectMenu__InitServantNormalDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
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
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x21
  Il2CppObject *v34; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v46; // x22
  const MethodInfo *v47; // x1
  System_Array_o *v48; // x0
  __int64 *v49; // x8
  __int64 v50; // x1
  ListViewSort_FilterCategoryKind_array *v51; // x20
  const MethodInfo *v52; // x2

  if ( (byte_4189F56 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B2C35C(&FilterKindList_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B2C35C(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v14);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v15);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__, v16);
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_4189F56 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v19 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  v20 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v28);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v29);
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
    v34 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v34,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v35 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v35->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__51_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v42 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__51_0,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_38;
    klass = v42[3].klass;
    if ( !klass )
      goto LABEL_38;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v46, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v47) )
  {
    v48 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 8LL);
    v49 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_37;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_38:
    sub_B2C434(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v48 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
  v49 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_37:
  v50 = *v49;
  v51 = (ListViewSort_FilterCategoryKind_array *)v48;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v48, (System_RuntimeFieldHandle_o)v50, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v51, v52);
}


void __fastcall ServantFilterSelectMenu__InitServantNotClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
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
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v18; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__53_0; // x21
  Il2CppObject *v32; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *v40; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v44; // x22
  const MethodInfo *v45; // x1
  System_Array_o *v46; // x0
  __int64 *v47; // x8
  __int64 v48; // x1
  ListViewSort_FilterCategoryKind_array *v49; // x20
  const MethodInfo *v50; // x2

  if ( (byte_4189F58 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B2C35C(&FilterKindList_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B2C35C(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D,
      v13);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F,
      v14);
    sub_B2C35C(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__, v15);
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_4189F58 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v18 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v18 )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v26);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v27);
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
    v32 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__53_0,
      v32,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v33 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v33->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__53_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v33->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !categoryContainerList )
    goto LABEL_35;
  v40 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__53_0,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v40 )
      goto LABEL_35;
    klass = v40[3].klass;
    if ( !klass )
      goto LABEL_35;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v44 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_35;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v44, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v45) )
  {
    v46 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 6LL);
    v47 = &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F;
    goto LABEL_34;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_35:
    sub_B2C434(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v46 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v47 = &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D;
LABEL_34:
  v48 = *v47;
  v49 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v46, (System_RuntimeFieldHandle_o)v48, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v49, v50);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__InitUseFilterButton(
        ServantFilterSelectMenu_o *this,
        bool isSummon,
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
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *filterButtonList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x23
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ServantFilterSelectMenu_FilterContainer_o *v27; // x8
  bool i; // w20
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  bool v33; // w22
  ListViewSort_o *operationSortInfo; // x23
  ServantFilterButtonControl_OnClickFilterButton_o *v35; // x24
  const MethodInfo *v36; // x5
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4189F60 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isSummon);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v10);
    sub_B2C35C(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v11);
    sub_B2C35C(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v12);
    sub_B2C35C(&System_Predicate_ServantFilterButtonControl__TypeInfo, v13);
    sub_B2C35C(&Method_ServantFilterSelectMenu_OnClickFilterButton__, v14);
    sub_B2C35C(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__, v15);
    byte_4189F60 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)useFilterButtonList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_16;
  filterButtonList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)currentFilterContainer->fields.filterButtonList;
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)this,
    Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                filterButtonList,
                (System_Predicate_T__o *)v19,
                (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
          (System_Int32_array **)All,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (v27 = this->fields.currentFilterContainer) == 0LL)
    || (useFilterButtonList = v27->fields.filterButtonList) == 0LL )
  {
LABEL_16:
    sub_B2C434(useFilterButtonList, isSummon);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = isSummon;
        ;
        ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, operationSortInfo, v35, v33, i, v36) )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v29 )
      break;
    current = v37.fields.current;
    if ( !v37.fields.current )
      sub_B2C434(v29, v30);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B2C434(0LL, v30);
    v33 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v37.fields.current[1].monitor,
            (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    operationSortInfo = this->fields.operationSortInfo;
    v35 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B2C42C(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v35,
      (Il2CppObject *)this,
      Method_ServantFilterSelectMenu_OnClickFilterButton__,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
        v12 = sub_B2C460(svtEquipEffectFilterController);
        sub_B2C400(v12, 0LL);
      }
      if ( !v9[v8] == (*((_BYTE *)&svtEquipEffectFilterController->fields.CommandCodeDisplayGroups + v8) != 0) )
        return 1;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_8;
    }
LABEL_23:
    sub_B2C434(svtEquipEffectFilterController, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t eventId; // w8
  unsigned int kind; // w8
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  System_Int32_array *v12; // x20
  EventUpValSetupInfo_o *v13; // x21
  struct System_Int32_array *servantFilterEventIdList; // x8
  __int64 v15; // x0

  if ( (byte_4189F55 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventBonusFilterMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v7);
    byte_4189F55 = 1;
  }
  eventId = this->fields.eventId;
  this->fields.isDisplayEventBonusSkill = 0;
  if ( !eventId )
  {
LABEL_25:
    LOBYTE(Master_WarQuestSelectionMaster) = 0;
    return (char)Master_WarQuestSelectionMaster;
  }
  kind = this->fields.kind;
  LOBYTE(Master_WarQuestSelectionMaster) = 0;
  if ( kind <= 0xB && ((1 << kind) & 0xC0F) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_29;
    Master_WarQuestSelectionMaster = (EventMaster_o *)EventMaster__GetEventValUpEventIdList(
                                                        Master_WarQuestSelectionMaster,
                                                        0,
                                                        0LL);
    if ( Master_WarQuestSelectionMaster )
    {
      v12 = (System_Int32_array *)Master_WarQuestSelectionMaster;
      if ( Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField )
      {
        if ( this->fields.eventId >= 1 )
        {
          Master_WarQuestSelectionMaster = (EventMaster_o *)sub_B2C374(int___TypeInfo, 1LL);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_29;
          v12 = (System_Int32_array *)Master_WarQuestSelectionMaster;
          if ( !LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
          {
            v15 = sub_B2C460(Master_WarQuestSelectionMaster);
            sub_B2C400(v15, 0LL);
          }
          LODWORD(Master_WarQuestSelectionMaster->fields.list) = this->fields.eventId;
        }
        v13 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor_26087716(v13, v12, 0, 0LL);
        if ( v13 )
        {
          servantFilterEventIdList = v13->fields.servantFilterEventIdList;
          if ( !servantFilterEventIdList || !servantFilterEventIdList->max_length )
          {
            LOBYTE(Master_WarQuestSelectionMaster) = 0;
            goto LABEL_27;
          }
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
          if ( Master_WarQuestSelectionMaster )
          {
            Master_WarQuestSelectionMaster = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                                (EventBonusFilterMaster_o *)Master_WarQuestSelectionMaster,
                                                                v12,
                                                                0LL);
            if ( Master_WarQuestSelectionMaster )
            {
              LOBYTE(Master_WarQuestSelectionMaster) = SLODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) > 0;
LABEL_27:
              this->fields.isDisplayEventBonusSkill = (char)Master_WarQuestSelectionMaster;
              return (char)Master_WarQuestSelectionMaster;
            }
          }
        }
LABEL_29:
        sub_B2C434(Master_WarQuestSelectionMaster, v11);
      }
      goto LABEL_25;
    }
  }
  return (char)Master_WarQuestSelectionMaster;
}


void __fastcall ServantFilterSelectMenu__OnClickCancel(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4189F66 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189F66 = 1;
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
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4189F67 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4189F67 = 1;
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
        v6 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)operationSortInfo,
                                                (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v6 )
        {
          ListViewSort__SetFilters(v6, (ListViewSort_FilterKind_array *)operationSortInfo, 0, 0LL);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v4);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v7);
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
    sub_B2C434(operationSortInfo, v4);
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
  if ( (byte_4189F65 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189F65 = 1;
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
      sub_B2C434(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    IsChangedStatus = ServantFilterSelectMenu__IsChangedStatus(v2, v7);
    ServantFilterSelectMenu__Callback(v2, IsChangedStatus, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__OnClickFilterButton(
        ServantFilterSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4189F69 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&filterKind);
    byte_4189F69 = 1;
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
      sub_B2C434(0LL, v5);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    ServantFilterSelectMenu__SetButtonSelect(this, v7);
    ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v8);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickInitialize(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4189F68 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4189F68 = 1;
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
        v6 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)operationSortInfo,
                                                (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v6 )
        {
          ListViewSort__SetFilters(v6, (ListViewSort_FilterKind_array *)operationSortInfo, 1, 0LL);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v4);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v7);
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
    sub_B2C434(operationSortInfo, v4);
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
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  ServantFilterSelectMenu_o *v32; // x0
  const MethodInfo *v33; // x2
  ServantFilterSelectMenu_c *v34; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v36; // x1
  __int64 v37; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  ListViewSort_o *v46; // x22
  ListViewSort_o *v47; // x23
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  ServantFilterSelectMenu_o *v69; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v71; // x0
  FilterKindList_c *v72; // x0
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  System_Action_o *v78; // x20

  if ( (byte_4189F53 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&FilterKindList_TypeInfo, v14);
    sub_B2C35C(&ListViewSort_TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_ServantFilterSelectMenu_EndOpen__, v17);
    sub_B2C35C(&ServantFilterSelectMenu_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_11940/*"SERVANT_SORT_RESET"*/, v19);
    sub_B2C35C(&StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, v20);
    sub_B2C35C(&StringLiteral_11691/*"SERVANT_EQUIP_FILTER_WARNING"*/, v21);
    sub_B2C35C(&StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, v22);
    sub_B2C35C(&StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, v23);
    sub_B2C35C(&StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, v24);
    byte_4189F53 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
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
      v34 = ServantFilterSelectMenu_TypeInfo;
      if ( (BYTE3(ServantFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
        v34 = ServantFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v34->static_fields->commonServantSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      v36 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v36,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_49;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    v39 = ServantFilterSelectMenu__SetKindStatus(v32, sort, v33);
    this->fields.kindStatus = v39;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.kindStatus,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    v46 = this->fields.baseSortInfo;
    v47 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
    ListViewSort___ctor_33914748(v47, v46, 0LL);
    this->fields.operationSortInfo = v47;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    this->fields.listViewManager = listViewManager;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.listViewManager,
      (System_Int32_array **)listViewManager,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
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
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11691/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0LL);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0LL);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, 0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11940/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v66);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v66);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v66);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v66);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v66);
                          break;
                        case 5:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v66);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v66);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v66);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v66);
                          break;
                        case 0xC:
                          v68 = 999;
                          v69 = this;
                          ClassExtra1FilterKindList = 0LL;
                          goto LABEL_43;
                        case 0xD:
                          v71 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v71 = FilterKindList_TypeInfo;
                          }
                          v68 = 14;
                          ClassExtra1FilterKindList = v71->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_42;
                        case 0xE:
                          v72 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v72 = FilterKindList_TypeInfo;
                          }
                          v68 = 15;
                          ClassExtra1FilterKindList = v72->static_fields->ClassExtra2FilterKindList;
LABEL_42:
                          v69 = this;
LABEL_43:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v69, ClassExtra1FilterKindList, v68, v67);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v66);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v73);
                      ServantFilterSelectMenu__SetButtonSelect(this, v74);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v75);
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
                              v78 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                              System_Action___ctor(
                                v78,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
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
    sub_B2C434(baseSortInfo, v37);
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

  if ( (byte_4189F62 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189F62 = 1;
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
      sub_B2C434(v5, v6);
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
    sub_B2C434(this, isActive);
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
  Il2CppClass *klass; // x0
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4189F64 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4189F64 = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    if ( !v14.fields.current )
      sub_B2C434(v9, v10);
    klass = v14.fields.current[2].klass;
    if ( !klass )
      sub_B2C434(0LL, v10);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)klass, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_B2C434(decideButton, isEnable);
  ServantEquipEffectFilterController__SetEnableFilterButton(
    (ServantEquipEffectFilterController_o *)decideButton,
    isEnable,
    0LL);
}


void __fastcall ServantFilterSelectMenu__SetButtonSelect(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *useFilterButtonList; // x0
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *current; // x20
  __int64 v12; // x1
  FilterKindList_c *v13; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v15; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v17; // w0
  const MethodInfo *v18; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4189F63 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v4);
    sub_B2C35C(&FilterKindList_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4189F63 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  useFilterButtonList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    useFilterButtonList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v21,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    current = v21.fields.current;
    if ( !v21.fields.current )
      sub_B2C434(v9, v10);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v21.fields.current, v10);
    v13 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v13 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v13->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B2C434(0LL, v12);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B2C434(0LL, v15);
      v17 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_B2C434(useFilterButtonList, method);
  ServantEquipEffectFilterController__RefreshSelectState(
    (ServantEquipEffectFilterController_o *)useFilterButtonList,
    0LL);
}


System_Boolean_array *__fastcall ServantFilterSelectMenu__SetKindStatus(
        ServantFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *Filter; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *AllFilterKindList; // x8
  int size; // w21
  System_Boolean_array *v10; // x20
  unsigned __int64 v11; // x23
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v12; // x25
  __int64 v14; // x0

  if ( (byte_4189F6B & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, sort);
    sub_B2C35C(&FilterKindList_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__, v6);
    byte_4189F6B = 1;
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
  v10 = (System_Boolean_array *)sub_B2C374(bool___TypeInfo, (unsigned int)size);
  if ( size >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      Filter = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        Filter = FilterKindList_TypeInfo;
      }
      v12 = Filter->static_fields->AllFilterKindList;
      if ( !v12 )
        break;
      if ( v11 >= (unsigned int)v12->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !sort )
        break;
      Filter = (FilterKindList_c *)ListViewSort__GetFilter(sort, v12->fields._items->m_Items[v11 + 1], 0LL);
      if ( !v10 )
        break;
      if ( v11 >= v10->max_length )
      {
        v14 = sub_B2C460(Filter);
        sub_B2C400(v14, 0LL);
      }
      v10->m_Items[v11++ + 4] = (unsigned __int8)Filter & 1;
      if ( (__int64)v11 >= size )
        return v10;
    }
LABEL_20:
    sub_B2C434(Filter, sort);
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
  if ( (byte_4189F6F & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_B2C35C(
                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                          x);
    byte_4189F6F = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_4189F4F & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4189F4F = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  ServantFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantFilterSelectMenu__get_closeBtnPath(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189F6C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15477/*"Window/CancelButton"*/, method);
    byte_4189F6C = 1;
  }
  return (System_String_o *)StringLiteral_15477/*"Window/CancelButton"*/;
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

  if ( (byte_4189F50 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4189F50 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41853EA & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41853EA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu_CallbackFunc__Invoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantFilterSelectMenu_CallbackFunc_o **v8; // x25
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
  ServantFilterSelectMenu_CallbackFunc_o *v20; // x8
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
  ServantFilterSelectMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (ServantFilterSelectMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
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


void __fastcall ServantFilterSelectMenu_FilterContainer___ctor(
        ServantFilterSelectMenu_FilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20

  if ( (byte_41853EB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v5);
    byte_41853EB = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v6;
  sub_B2C2F8(&this->fields.categoryContainerList, v6);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v7;
  sub_B2C2F8(&this->fields.filterButtonList, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0

  if ( (byte_41853E9 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu___c_TypeInfo, v1);
    byte_41853E9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantFilterSelectMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 0;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, x);
  return *(&container->fields.categoryKind + 1) == x;
}