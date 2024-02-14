void __fastcall ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewSort_o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42168F7 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_TypeInfo, v1);
    sub_B0D8A4(&ServantFilterSelectMenu_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_12755/*"ServantFilterSelect1"*/, v4);
    byte_42168F7 = 1;
  }
  v5 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_32823364(v5, (System_String_o *)StringLiteral_12755/*"ServantFilterSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantFilterSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42168F6 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v7);
    byte_42168F6 = 1;
  }
  v8 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                  System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v8,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  ListViewManager_o *warningLabel; // x0
  bool v6; // w20
  WebViewObject_o *Component_WebViewObject; // x19
  int v8; // s0

  if ( (byte_42168F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42168F3 = 1;
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
      sub_B0D97C(warningLabel);
    }
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)warningLabel,
                                (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
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

  ServantFilterSelectMenu__Close_28115268(this, 0LL, v2);
}


void __fastcall ServantFilterSelectMenu__Close_28115268(
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x20

  if ( (byte_42168DD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_EndClose__, v5);
    byte_42168DD = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42168DB & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_42168DB = 1;
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
    sub_B0D97C(0LL);
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
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **current; // x1
  UnityEngine_Component_o **v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v33; // x22
  const MethodInfo *v34; // x2
  bool v35; // w8
  ServantFilterCategoryContainer_o *v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x0
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-90h] BYREF
  int v45; // [xsp+4Ch] [xbp-64h]
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42168EA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___, categoryKindKist);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v7);
    sub_B0D8A4(&Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v10);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__, v11);
    this = (ServantFilterSelectMenu_o *)sub_B0D8A4(&ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo, v12);
    byte_42168EA = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !categoryKindKist )
    goto LABEL_21;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
  {
    v42 = sub_B0D9A8(this);
    sub_B0D948(v42, 0LL);
  }
  v45 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  currentFilterContainer = v4->fields.currentFilterContainer;
  if ( !currentFilterContainer
    || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.categoryContainerList) == 0LL )
  {
LABEL_21:
    sub_B0D97C(this);
  }
  x = v14;
  y = v15;
  z = v16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v21 = sub_B0D974(ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo, v40, v41);
    ServantFilterSelectMenu___c__DisplayClass62_0___ctor((ServantFilterSelectMenu___c__DisplayClass62_0_o *)v21, 0LL);
    if ( !v21 )
      sub_B0D97C(v22);
    current = (System_Int32_array **)v44.fields.current;
    *(_QWORD *)(v21 + 16) = v44.fields.current;
    v30 = (UnityEngine_Component_o **)(v21 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), current, v23, v24, v25, v26, v27, v28);
    v33 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B0D974(
                                                                                     System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo,
                                                                                     v31,
                                                                                     v32);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      v33,
      (Il2CppObject *)v21,
      Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__,
      (const MethodInfo_26151B8 *)Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__);
    v35 = BasicHelper__Any_ListViewSort_FilterCategoryKind_(
            categoryKindKist,
            (System_Func_T__bool__o *)v33,
            (const MethodInfo_1706FF0 *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    v36 = *(ServantFilterCategoryContainer_o **)(v21 + 16);
    if ( v35 )
    {
      if ( !v36 )
        sub_B0D97C(0LL);
      ServantFilterCategoryContainer__SetActive(v36, 1, v34);
      if ( !*v30 )
        sub_B0D97C(0LL);
      gameObject = UnityEngine_Component__get_gameObject(*v30, 0LL);
      v46.fields.x = x;
      v46.fields.y = y;
      v46.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v46, 0LL);
      if ( !*v30 )
        sub_B0D97C(0LL);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*v30,
        HIDWORD((*v30)[2].klass) == v45,
        v38);
      if ( !*v30 )
        sub_B0D97C(0LL);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)*v30, v39);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !v36 )
        sub_B0D97C(0LL);
      ServantFilterCategoryContainer__SetActive(v36, 0, v34);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
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
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__58_0; // x21
  Il2CppObject *v38; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UnityEngine_Object_o *v46; // x20
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v48; // x20
  const MethodInfo *v49; // x2
  System_RuntimeFieldHandle_o v50; // 0:w1.4

  if ( (byte_42168E6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B0D8A4(&FilterKindList_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B0D8A4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A,
      v13);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__, v14);
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v15);
    byte_42168E6 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  commandCodeFilterContainer = this->fields.commandCodeFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = commandCodeFilterContainer;
  sub_B0D840(
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
  v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !commandCodeEffectFilterController )
    goto LABEL_28;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v32, 0LL);
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
    v38 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v33,
                                                                          v34);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__58_0,
      v38,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v39 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v39->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__58_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v39->__9__58_0,
      (System_Int32_array **)_9__58_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !categoryContainerList )
    goto LABEL_28;
  v46 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__58_0,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v46 )
    {
      klass = v46[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_27;
      }
    }
LABEL_28:
    sub_B0D97C(useFilterKindList);
  }
LABEL_27:
  v48 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v50.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v48, v50, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v48, v49);
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
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v42; // x24
  ListViewSort_FilterCategoryKind_array *v43; // x1
  const MethodInfo *v44; // x2
  __int64 v45; // x0
  System_RuntimeFieldHandle_o v46; // 0:w1.4
  System_RuntimeFieldHandle_o v47; // 0:w1.4

  if ( (byte_42168E8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, filterKind);
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, v7);
    sub_B0D8A4(&FilterKindList_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo, v16);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v17);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44,
      v18);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB,
      v19);
    byte_42168E8 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      goto LABEL_28;
    System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
      (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B0D840(
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
  v32 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v46.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v32, v46, 0LL);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)sub_B0D8BC(
                                                                                                   ListViewSort_FilterCategoryKind___TypeInfo,
                                                                                                   2LL);
  if ( !useFilterKindList )
    goto LABEL_28;
  size = useFilterKindList->fields._size;
  if ( !size || (LODWORD(useFilterKindList->fields._syncRoot) = 1, size == 1) )
  {
    v45 = sub_B0D9A8(useFilterKindList);
    sub_B0D948(v45, 0LL);
  }
  HIDWORD(useFilterKindList->fields._syncRoot) = 2;
  v34 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 3LL);
  v47.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v34, v47, 0LL);
  v37 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo,
                                                                   v35,
                                                                   v36);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v37,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v37 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v37,
    (System_Collections_Generic_IEnumerable_T__o *)v32,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v37,
      categoryKind,
      (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__);
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
LABEL_28:
    sub_B0D97C(useFilterKindList);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v42, 0LL);
  this->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v37,
    (System_Collections_Generic_IEnumerable_T__o *)v34,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v43 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                   (System_Collections_Generic_List_Voice_BATTLE__o *)v37,
                                                   (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(this, v43, v44);
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
  __int64 v26; // x1
  __int64 v27; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__59_0; // x21
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
  System_Array_o *v42; // x20
  const MethodInfo *v43; // x2
  System_RuntimeFieldHandle_o v44; // 0:w1.4

  if ( (byte_42168E7 & 1) == 0 )
  {
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, method);
    sub_B0D8A4(&FilterKindList_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v9);
    sub_B0D8A4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D,
      v11);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, v12);
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v13);
    byte_42168E7 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  v16 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = this->fields.costumeFilterContainer;
  this->fields.currentFilterContainer = costumeFilterContainer;
  sub_B0D840(
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
    v32 = (Il2CppObject *)static_fields->__9;
    _9__59_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v26,
                                                                          v27);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__59_0,
      v32,
      Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v33 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v33->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__59_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v33->__9__59_0,
      (System_Int32_array **)_9__59_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !categoryContainerList )
    goto LABEL_30;
  v40 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__59_0,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v40 )
    {
      klass = v40[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_B0D97C(useFilterKindList);
  }
LABEL_29:
  v42 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
  v44.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v42, v44, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v42, v43);
}


void __fastcall ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_42168DA & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_42168DA = 1;
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
    sub_B0D97C(0LL);
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
  __int64 v30; // x1
  __int64 v31; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__56_0; // x21
  Il2CppObject *v36; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v50; // x22
  const MethodInfo *v51; // x1
  System_Array_o *v52; // x0
  __int64 *v53; // x8
  __int64 v54; // x1
  ListViewSort_FilterCategoryKind_array *v55; // x20
  const MethodInfo *v56; // x2

  if ( (byte_42168E4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B0D8A4(&FilterKindList_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B0D8A4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v14);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v15);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, v16);
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_42168E4 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v20 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B0D840(
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
    v36 = (Il2CppObject *)static_fields->__9;
    _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v30,
                                                                          v31);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__56_0,
      v36,
      Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v37 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v37->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__56_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v37->__9__56_0,
      (System_Int32_array **)_9__56_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v44 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__56_0,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_40;
    klass = v44[3].klass;
    if ( !klass )
      goto LABEL_40;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v50, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v51) )
  {
    v52 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v53 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_39;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_40:
    sub_B0D97C(useFilterKindList);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v52 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v53 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_39:
  v54 = *v53;
  v55 = (ListViewSort_FilterCategoryKind_array *)v52;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v52, (System_RuntimeFieldHandle_o)v54, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v55, v56);
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
  __int64 v30; // x1
  __int64 v31; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__55_0; // x21
  Il2CppObject *v36; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v50; // x22
  const MethodInfo *v51; // x1
  System_Array_o *v52; // x0
  __int64 *v53; // x8
  __int64 v54; // x1
  ListViewSort_FilterCategoryKind_array *v55; // x20
  const MethodInfo *v56; // x2

  if ( (byte_42168E3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B0D8A4(&FilterKindList_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B0D8A4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA,
      v14);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D,
      v15);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__, v16);
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_42168E3 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v20 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B0D840(
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
    v36 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v30,
                                                                          v31);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__55_0,
      v36,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v37 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v37->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__55_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v37->__9__55_0,
      (System_Int32_array **)_9__55_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v44 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__55_0,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_39;
    klass = v44[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v50, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v51) )
  {
    v52 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v53 = &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D;
    goto LABEL_38;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_39:
    sub_B0D97C(useFilterKindList);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v52 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v53 = &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA;
LABEL_38:
  v54 = *v53;
  v55 = (ListViewSort_FilterCategoryKind_array *)v52;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v52, (System_RuntimeFieldHandle_o)v54, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v55, v56);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x21
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_0; // x22
  Il2CppObject *v41; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Object_o *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_Object_c *klass; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v53; // x21
  struct ServantFilterSelectMenu___c_StaticFields *v54; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_1; // x22
  Il2CppObject *v56; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UnityEngine_Object_o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  UnityEngine_Object_c *v67; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v68; // x21
  struct ServantFilterSelectMenu___c_StaticFields *v69; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_2; // x22
  Il2CppObject *v71; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_Object_o *v79; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  UnityEngine_Object_c *v82; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v83; // x20
  struct ServantFilterSelectMenu___c_StaticFields *v84; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_3; // x21
  Il2CppObject *v86; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  UnityEngine_Object_o *v94; // x20
  UnityEngine_Object_c *v95; // x8
  System_Array_o *v96; // x20
  const MethodInfo *v97; // x2
  System_RuntimeFieldHandle_o v98; // 0:w1.4

  if ( (byte_42168E5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B0D8A4(&FilterKindList_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B0D8A4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456,
      v13);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__, v14);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__, v15);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__, v16);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__, v17);
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v18);
    byte_42168E5 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v20 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v20 )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipCombineStatusFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipHaveStatusFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantEquipFilterContainer = this->fields.servantEquipFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = servantEquipFilterContainer;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantEquipFilterContainer,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v29);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v30);
  svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEquipEffectFilterController )
    goto LABEL_82;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v35, 0LL);
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
    v41 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v36,
                                                                          v37);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_0,
      v41,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v42 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v42->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v42->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !categoryContainerList )
    goto LABEL_82;
  v49 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__57_0,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v49 )
      goto LABEL_82;
    klass = v49[3].klass;
    if ( !klass )
      goto LABEL_82;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v53 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v54 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v54->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v54 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)v54->__9;
    _9__57_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v50,
                                                                          v51);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_1,
      v56,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v57 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v57->__9__57_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v57->__9__57_1,
      (System_Int32_array **)_9__57_1,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  if ( !v53 )
    goto LABEL_82;
  v64 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v53,
                                  (System_Predicate_T__o *)_9__57_1,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v64 )
      goto LABEL_82;
    v67 = v64[3].klass;
    if ( !v67 )
      goto LABEL_82;
    HIDWORD(v67->_1.byval_arg.data) = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v68 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v69 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v69->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v69 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)v69->__9;
    _9__57_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v65,
                                                                          v66);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_2,
      v71,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v72 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v72->__9__57_2 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v72->__9__57_2,
      (System_Int32_array **)_9__57_2,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  if ( !v68 )
    goto LABEL_82;
  v79 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v68,
                                  (System_Predicate_T__o *)_9__57_2,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v79, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v79 )
      goto LABEL_82;
    v82 = v79[3].klass;
    if ( !v82 )
      goto LABEL_82;
    HIDWORD(v82->_1.byval_arg.data) = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v83 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v84 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v84->__9__57_3;
  if ( !_9__57_3 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v84 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v86 = (Il2CppObject *)v84->__9;
    _9__57_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v80,
                                                                          v81);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_3,
      v86,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v87 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v87->__9__57_3 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_3;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v87->__9__57_3,
      (System_Int32_array **)_9__57_3,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
  }
  if ( !v83 )
LABEL_82:
    sub_B0D97C(useFilterKindList);
  v94 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v83,
                                  (System_Predicate_T__o *)_9__57_3,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v94, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v94 )
    {
      v95 = v94[3].klass;
      if ( v95 )
      {
        HIDWORD(v95->_1.byval_arg.data) = 4;
        goto LABEL_81;
      }
    }
    goto LABEL_82;
  }
LABEL_81:
  v96 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v98.fields.value = Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v96, v98, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v96, v97);
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
  __int64 v29; // x1
  __int64 v30; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_0; // x21
  Il2CppObject *v35; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *v52; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v53; // x20
  struct ServantFilterSelectMenu___c_StaticFields *v54; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_1; // x21
  Il2CppObject *v56; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UnityEngine_Object_o *v64; // x20
  const MethodInfo *v65; // x1
  UnityEngine_Object_c *v66; // x8
  System_Array_o *v67; // x0
  __int64 *v68; // x8
  __int64 v69; // x1
  ListViewSort_FilterCategoryKind_array *v70; // x20
  const MethodInfo *v71; // x2

  if ( (byte_42168E0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B0D8A4(&FilterKindList_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B0D8A4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v13);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v14);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__, v15);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__, v16);
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_42168E0 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B0D840(
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
    v35 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v29,
                                                                          v30);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v35,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v36 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v36->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v36->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !categoryContainerList )
    goto LABEL_55;
  v43 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__52_0,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
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
    klass = v43[3].klass;
    if ( !klass )
      goto LABEL_55;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v44, v45);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_55;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v49, 0LL);
  v52 = this->fields.currentFilterContainer;
  this->fields.isDisplayServantEffect = 1;
  if ( !v52 )
    goto LABEL_55;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v53 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v52->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v54 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v54->__9__52_1;
  if ( !_9__52_1 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v54 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)v54->__9;
    _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v50,
                                                                          v51);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_1,
      v56,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v57 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v57->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v57->__9__52_1,
      (System_Int32_array **)_9__52_1,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  if ( !v53 )
    goto LABEL_55;
  v64 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v53,
                                  (System_Predicate_T__o *)_9__52_1,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v64 )
      goto LABEL_55;
    v66 = v64[3].klass;
    if ( !v66 )
      goto LABEL_55;
    HIDWORD(v66->_1.byval_arg.data) = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v65) )
  {
    v67 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 8LL);
    v68 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_54;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_55:
    sub_B0D97C(useFilterKindList);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v67 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
  v68 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_54:
  v69 = *v68;
  v70 = (ListViewSort_FilterCategoryKind_array *)v67;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v67, (System_RuntimeFieldHandle_o)v69, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v70, v71);
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
  __int64 v30; // x1
  __int64 v31; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__54_0; // x21
  Il2CppObject *v36; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v50; // x22
  const MethodInfo *v51; // x1
  System_Array_o *v52; // x0
  __int64 *v53; // x8
  __int64 v54; // x1
  ListViewSort_FilterCategoryKind_array *v55; // x20
  const MethodInfo *v56; // x2

  if ( (byte_42168E2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B0D8A4(&FilterKindList_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B0D8A4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v14);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v15);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__, v16);
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_42168E2 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v20 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B0D840(
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
    v36 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v30,
                                                                          v31);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__54_0,
      v36,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v37 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v37->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__54_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v37->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v44 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__54_0,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_39;
    klass = v44[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v50, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v51) )
  {
    v52 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v53 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_38;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_39:
    sub_B0D97C(useFilterKindList);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v52 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v53 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_38:
  v54 = *v53;
  v55 = (ListViewSort_FilterCategoryKind_array *)v52;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v52, (System_RuntimeFieldHandle_o)v54, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v55, v56);
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
  __int64 v30; // x1
  __int64 v31; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x21
  Il2CppObject *v36; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Object_o *v44; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v50; // x22
  const MethodInfo *v51; // x1
  System_Array_o *v52; // x0
  __int64 *v53; // x8
  __int64 v54; // x1
  ListViewSort_FilterCategoryKind_array *v55; // x20
  const MethodInfo *v56; // x2

  if ( (byte_42168DF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B0D8A4(&FilterKindList_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B0D8A4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v14);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v15);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__, v16);
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_42168DF = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  v20 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v20 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B0D840(
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
    v36 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v30,
                                                                          v31);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v36,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v37 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v37->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__51_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v37->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v44 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__51_0,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v44 )
      goto LABEL_38;
    klass = v44[3].klass;
    if ( !klass )
      goto LABEL_38;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v50, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v51) )
  {
    v52 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 8LL);
    v53 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_37;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_38:
    sub_B0D97C(useFilterKindList);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v52 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
  v53 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_37:
  v54 = *v53;
  v55 = (ListViewSort_FilterCategoryKind_array *)v52;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v52, (System_RuntimeFieldHandle_o)v54, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v55, v56);
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
  __int64 v28; // x1
  __int64 v29; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__53_0; // x21
  Il2CppObject *v34; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v48; // x22
  const MethodInfo *v49; // x1
  System_Array_o *v50; // x0
  __int64 *v51; // x8
  __int64 v52; // x1
  ListViewSort_FilterCategoryKind_array *v53; // x20
  const MethodInfo *v54; // x2

  if ( (byte_42168E1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B0D8A4(&FilterKindList_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B0D8A4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D,
      v13);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F,
      v14);
    sub_B0D8A4(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__, v15);
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_42168E1 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2FB32E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
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
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2FB312C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B0D840(
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
    v34 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v28,
                                                                          v29);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__53_0,
      v34,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v35 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v35->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__53_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v35->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !categoryContainerList )
    goto LABEL_35;
  v42 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__53_0,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_35;
    klass = v42[3].klass;
    if ( !klass )
      goto LABEL_35;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v48 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v43, v44);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_35;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v48, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v49) )
  {
    v50 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 6LL);
    v51 = &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F;
    goto LABEL_34;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_35:
    sub_B0D97C(useFilterKindList);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v50 = (System_Array_o *)sub_B0D8BC(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v51 = &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D;
LABEL_34:
  v52 = *v51;
  v53 = (ListViewSort_FilterCategoryKind_array *)v50;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v50, (System_RuntimeFieldHandle_o)v52, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v53, v54);
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
  __int64 v17; // x1
  __int64 v18; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *filterButtonList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x23
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ServantFilterSelectMenu_FilterContainer_o *v29; // x8
  bool i; // w20
  _BOOL8 v31; // x0
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  bool v34; // w22
  ListViewSort_o *operationSortInfo; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  ServantFilterButtonControl_OnClickFilterButton_o *v38; // x24
  const MethodInfo *v39; // x5
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42168E9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isSummon);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v10);
    sub_B0D8A4(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v12);
    sub_B0D8A4(&System_Predicate_ServantFilterButtonControl__TypeInfo, v13);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_OnClickFilterButton__, v14);
    sub_B0D8A4(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__, v15);
    byte_42168E9 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)useFilterButtonList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_16;
  filterButtonList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)currentFilterContainer->fields.filterButtonList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_ServantFilterButtonControl__TypeInfo,
                                                                   v17,
                                                                   v18);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)this,
    Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                filterButtonList,
                (System_Predicate_T__o *)v21,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
          (System_Int32_array **)All,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        (v29 = this->fields.currentFilterContainer) == 0LL)
    || (useFilterButtonList = v29->fields.filterButtonList) == 0LL )
  {
LABEL_16:
    sub_B0D97C(useFilterButtonList);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = isSummon;
        ;
        ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, operationSortInfo, v38, v34, i, v39) )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v31 )
      break;
    current = v40.fields.current;
    if ( !v40.fields.current )
      sub_B0D97C(v31);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B0D97C(0LL);
    v34 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v40.fields.current[1].monitor,
            (const MethodInfo_2FB332C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    operationSortInfo = this->fields.operationSortInfo;
    v38 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B0D974(
                                                                ServantFilterButtonControl_OnClickFilterButton_TypeInfo,
                                                                v36,
                                                                v37);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v38,
      (Il2CppObject *)this,
      Method_ServantFilterSelectMenu_OnClickFilterButton__,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


bool __fastcall ServantFilterSelectMenu__IsChangedStatus(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x0
  struct System_Boolean_array *kindStatus; // x10
  __int64 v6; // x9
  unsigned __int64 v7; // x8
  bool *v8; // x10
  int32_t kind; // w8
  __int64 v11; // x0

  svtEquipEffectFilterController = (ServantEquipEffectFilterController_o *)ServantFilterSelectMenu__SetKindStatus(
                                                                             this,
                                                                             this->fields.operationSortInfo,
                                                                             v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_23;
  v6 = *(_QWORD *)&kindStatus->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = &kindStatus->m_Items[4];
    while ( svtEquipEffectFilterController )
    {
      if ( v7 >= LODWORD(svtEquipEffectFilterController->fields.SvtEqDisplayGroups) )
      {
        v11 = sub_B0D9A8(svtEquipEffectFilterController);
        sub_B0D948(v11, 0LL);
      }
      if ( !v8[v7] == (*((_BYTE *)&svtEquipEffectFilterController->fields.CommandCodeDisplayGroups + v7) != 0) )
        return 1;
      if ( (__int64)++v7 >= (int)v6 )
        goto LABEL_8;
    }
LABEL_23:
    sub_B0D97C(svtEquipEffectFilterController);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t eventId; // w8
  unsigned int kind; // w8
  bool result; // w0
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_HashSet_int__o *v18; // x20
  System_Int32_array *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  EventUpValSetupInfo_o *v22; // x21
  struct System_Int32_array *servantFilterEventIdList; // x8
  EventBonusFilterMaster_o *v24; // x21

  if ( (byte_42168DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v11);
    byte_42168DE = 1;
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
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
    Master_WarQuestSelectionMaster = (EventMaster_o *)EventMaster__GetEventValUpEventIdHash(
                                                        Master_WarQuestSelectionMaster,
                                                        0,
                                                        0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
    v18 = (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster;
    if ( SLODWORD(Master_WarQuestSelectionMaster->fields.list) >= 1 )
    {
      if ( this->fields.eventId >= 1 )
      {
        v18 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                             System_Collections_Generic_HashSet_int__TypeInfo,
                                                             v16,
                                                             v17);
        System_Collections_Generic_HashSet_int____ctor(
          v18,
          (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
        if ( !v18 )
          goto LABEL_28;
        System_Collections_Generic_HashSet_int___Add(
          v18,
          this->fields.eventId,
          (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v19 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v18,
              (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
      v22 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v20, v21);
      EventUpValSetupInfo___ctor_25655088(v22, v19, 0, 0, 0, 0LL);
      if ( v22 )
      {
        servantFilterEventIdList = v22->fields.servantFilterEventIdList;
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
        v24 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        Master_WarQuestSelectionMaster = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( v24 )
        {
          Master_WarQuestSelectionMaster = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                              v24,
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
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
    return 0;
  }
  return result;
}


void __fastcall ServantFilterSelectMenu__OnClickCancel(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42168EF & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42168EF = 1;
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
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42168F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42168F0 = 1;
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
                                                (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v6);
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
    sub_B0D97C(operationSortInfo);
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
  if ( (byte_42168EE & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42168EE = 1;
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
      sub_B0D97C(this);
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
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42168F2 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&filterKind);
    byte_42168F2 = 1;
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
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    ServantFilterSelectMenu__SetButtonSelect(this, v6);
    ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v7);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickInitialize(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_42168F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_42168F1 = 1;
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
                                                (const MethodInfo_2FB4FE4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v6);
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
    sub_B0D97C(operationSortInfo);
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
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  ListViewSort_o *v45; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  ListViewSort_o *v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  ServantFilterSelectMenu_o *v70; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v72; // x0
  FilterKindList_c *v73; // x0
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  __int64 v79; // x1
  __int64 v80; // x2
  System_Action_o *v81; // x20

  if ( (byte_42168DC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&FilterKindList_TypeInfo, v14);
    sub_B0D8A4(&ListViewSort_TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&Method_ServantFilterSelectMenu_EndOpen__, v17);
    sub_B0D8A4(&ServantFilterSelectMenu_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_11977/*"SERVANT_SORT_RESET"*/, v19);
    sub_B0D8A4(&StringLiteral_11828/*"SERVANT_SORT_CANCEL"*/, v20);
    sub_B0D8A4(&StringLiteral_11719/*"SERVANT_EQUIP_FILTER_WARNING"*/, v21);
    sub_B0D8A4(&StringLiteral_11832/*"SERVANT_SORT_DECIDE"*/, v22);
    sub_B0D8A4(&StringLiteral_11979/*"SERVANT_SORT_TITLE2"*/, v23);
    sub_B0D8A4(&StringLiteral_11829/*"SERVANT_SORT_CLEAR"*/, v24);
    byte_42168DC = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B0D840(
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
      sub_B0D840(
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
      sub_B0D840(
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
    v38 = ServantFilterSelectMenu__SetKindStatus(v32, sort, v33);
    this->fields.kindStatus = v38;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.kindStatus,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = this->fields.baseSortInfo;
    v48 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v46, v47);
    ListViewSort___ctor_32823928(v48, v45, 0LL);
    this->fields.operationSortInfo = v48;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    this->fields.listViewManager = listViewManager;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.listViewManager,
      (System_Int32_array **)listViewManager,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
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
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11979/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11719/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0LL);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0LL);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11832/*"SERVANT_SORT_DECIDE"*/, 0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11829/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11977/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v67);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v67);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v67);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v67);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v67);
                          break;
                        case 5:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v67);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v67);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v67);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v67);
                          break;
                        case 0xC:
                          v69 = 999;
                          v70 = this;
                          ClassExtra1FilterKindList = 0LL;
                          goto LABEL_43;
                        case 0xD:
                          v72 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v72 = FilterKindList_TypeInfo;
                          }
                          v69 = 14;
                          ClassExtra1FilterKindList = v72->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_42;
                        case 0xE:
                          v73 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v73 = FilterKindList_TypeInfo;
                          }
                          v69 = 15;
                          ClassExtra1FilterKindList = v73->static_fields->ClassExtra2FilterKindList;
LABEL_42:
                          v70 = this;
LABEL_43:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v70, ClassExtra1FilterKindList, v69, v68);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v67);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v74);
                      ServantFilterSelectMenu__SetButtonSelect(this, v75);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v76);
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
                              v81 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v79, v80);
                              System_Action___ctor(
                                v81,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
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
    sub_B0D97C(baseSortInfo);
  }
}


void __fastcall ServantFilterSelectMenu__RefreshFilterClippingPosition(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v5; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *v6; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v7; // x8
  struct UIScrollView_o *v8; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v9; // x8

  if ( (byte_42168EB & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42168EB = 1;
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
      v6 = this->fields.currentFilterContainer;
      if ( v6 )
      {
        v5 = v6->fields.scrollView;
        if ( v5 )
        {
          v5 = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v5->klass->vtable._6_get_shouldMoveVertically.method)(
                                   v5,
                                   v5->klass->vtable._7_get_shouldMove.methodPtr);
          if ( ((unsigned __int8)v5 & 1) == 0 )
          {
            v7 = this->fields.currentFilterContainer;
            if ( !v7 )
              goto LABEL_18;
            v8 = v7->fields.scrollView;
            if ( !v8 )
              goto LABEL_18;
            HIDWORD(v8->fields.onDragStarted) = 4;
          }
          v9 = this->fields.currentFilterContainer;
          if ( v9 )
          {
            v5 = v9->fields.scrollView;
            if ( v5 )
            {
              UIScrollView__ResetPosition(v5, 0LL);
              return;
            }
          }
        }
      }
LABEL_18:
      sub_B0D97C(v5);
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
    sub_B0D97C(this);
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
  Il2CppClass *klass; // x0
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42168ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_42168ED = 1;
  }
  memset(&v13, 0, sizeof(v13));
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
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    if ( !v13.fields.current )
      sub_B0D97C(v9);
    klass = v13.fields.current[2].klass;
    if ( !klass )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)klass, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_B0D97C(decideButton);
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
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x0
  bool v15; // w0
  const MethodInfo *v16; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42168EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v4);
    sub_B0D8A4(&FilterKindList_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_42168EC = 1;
  }
  memset(&v19, 0, sizeof(v19));
  useFilterButtonList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    useFilterButtonList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v19,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    current = v19.fields.current;
    if ( !v19.fields.current )
      sub_B0D97C(v9);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v19.fields.current, v10);
    v12 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v12 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v12->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B0D97C(0LL);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_2FB332C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B0D97C(0LL);
      v15 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v15, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_B0D97C(useFilterButtonList);
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

  if ( (byte_42168F4 & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, sort);
    sub_B0D8A4(&FilterKindList_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__, v6);
    byte_42168F4 = 1;
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
  v10 = (System_Boolean_array *)sub_B0D8BC(bool___TypeInfo, (unsigned int)size);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !sort )
        break;
      Filter = (FilterKindList_c *)ListViewSort__GetFilter(sort, v12->fields._items->m_Items[v11 + 1], 0LL);
      if ( !v10 )
        break;
      if ( v11 >= v10->max_length )
      {
        v14 = sub_B0D9A8(Filter);
        sub_B0D948(v14, 0LL);
      }
      v10->m_Items[v11++ + 4] = (unsigned __int8)Filter & 1;
      if ( (__int64)v11 >= size )
        return v10;
    }
LABEL_20:
    sub_B0D97C(Filter);
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
  if ( (byte_42168F8 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_B0D8A4(
                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                          x);
    byte_42168F8 = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_B0D97C(this);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_2FB332C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_42168D8 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_42168D8 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantFilterSelectMenu_o *)sub_B0DC70(v7);
  ServantFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantFilterSelectMenu__get_closeBtnPath(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42168F5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15524/*"Window/CancelButton"*/, method);
    byte_42168F5 = 1;
  }
  return (System_String_o *)StringLiteral_15524/*"Window/CancelButton"*/;
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

  if ( (byte_42168D9 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_42168D9 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (const MethodInfo *)sub_B0DC70(v7);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4212231 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4212231 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  ServantFilterSelectMenu_CallbackFunc_o *v19; // x8
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
  ServantFilterSelectMenu_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (ServantFilterSelectMenu_CallbackFunc_o **)(v4 + 32);
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


void __fastcall ServantFilterSelectMenu_FilterContainer___ctor(
        ServantFilterSelectMenu_FilterContainer_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20

  if ( (byte_4212232 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v6);
    byte_4212232 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v7;
  sub_B0D840(&this->fields.categoryContainerList, v7);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo,
                                                                                                  v8,
                                                                                                  v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_B0D840(&this->fields.filterButtonList, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0

  if ( (byte_4212230 & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu___c_TypeInfo, v1);
    byte_4212230 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantFilterSelectMenu___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 12;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_2(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 19;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_3(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 20;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 0;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return *(&container->fields.categoryKind + 1) == x;
}