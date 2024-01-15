void __fastcall ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FC74A & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_TypeInfo, v1);
    sub_B16FFC(&ServantFilterSelectMenu_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_12660/*"ServantFilterSelect1"*/, v6);
    byte_40FC74A = 1;
  }
  v7 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v7, (System_String_o *)StringLiteral_12660/*"ServantFilterSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantFilterSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40FC749 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v9);
    byte_40FC749 = 1;
  }
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  ListViewManager_o *v5; // x0
  bool v6; // w20
  UnityEngine_Component_o *warningLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Behaviour_o *decideButton; // x0
  UnityEngine_Component_o *v10; // x0
  WebViewObject_o *Component_WebViewObject; // x19
  int v12; // s0

  if ( (byte_40FC746 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FC746 = 1;
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
      v5 = this->fields.listViewManager;
      if ( !v5 )
        goto LABEL_21;
      v6 = ListViewManager__GetMatchItemCount(v5, this->fields.operationSortInfo, 0LL) == 0;
    }
    else
    {
      v6 = 0;
    }
    warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( !warningLabel
      || (gameObject = UnityEngine_Component__get_gameObject(warningLabel, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, v6, 0LL),
          (decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled(decideButton, !v6, 0LL),
          (v10 = (UnityEngine_Component_o *)this->fields.decideButton) == 0LL) )
    {
LABEL_21:
      sub_B170D4();
    }
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v10,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( v6 )
    {
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_21;
    }
    else
    {
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_21;
    }
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v12, 0LL);
  }
}


void __fastcall ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_29583424(this, 0LL, v2);
}


void __fastcall ServantFilterSelectMenu__Close_29583424(
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_40FC730 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantFilterSelectMenu_EndClose__, v5);
    byte_40FC730 = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_40FC72E & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_40FC72E = 1;
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
    sub_B170D4();
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *categoryContainerList; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **current; // x1
  ServantFilterCategoryContainer_o **v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v35; // x22
  bool v36; // w8
  ServantFilterCategoryContainer_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-90h] BYREF
  int v44; // [xsp+4Ch] [xbp-64h]
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_40FC73D & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___, categoryKindKist);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v7);
    sub_B16FFC(&Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__, v8);
    sub_B16FFC(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v10);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__, v11);
    this = (ServantFilterSelectMenu_o *)sub_B16FFC(&ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo, v12);
    byte_40FC73D = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !categoryKindKist )
    goto LABEL_21;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
  {
    sub_B17100(this, categoryKindKist, method);
    sub_B170A0();
  }
  v44 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
  currentFilterContainer = v4->fields.currentFilterContainer;
  if ( !currentFilterContainer
    || (categoryContainerList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)currentFilterContainer->fields.categoryContainerList) == 0LL )
  {
LABEL_21:
    sub_B170D4();
  }
  x = v14;
  y = v15;
  z = v16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    categoryContainerList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v22 = sub_B170CC(ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo, v38, v39, v40, v41);
    ServantFilterSelectMenu___c__DisplayClass62_0___ctor((ServantFilterSelectMenu___c__DisplayClass62_0_o *)v22, 0LL);
    if ( !v22 )
      sub_B170D4();
    current = (System_Int32_array **)v43.fields.current;
    *(_QWORD *)(v22 + 16) = v43.fields.current;
    v30 = (ServantFilterCategoryContainer_o **)(v22 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), current, v23, v24, v25, v26, v27, v28);
    v35 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B170CC(
                                                                                     System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo,
                                                                                     v31,
                                                                                     v32,
                                                                                     v33,
                                                                                     v34);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      v35,
      (Il2CppObject *)v22,
      Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__,
      (const MethodInfo_2B67340 *)Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__);
    v36 = BasicHelper__Any_ListViewSort_FilterCategoryKind_(
            categoryKindKist,
            (System_Func_T__bool__o *)v35,
            (const MethodInfo_18B5E80 *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    v37 = *(ServantFilterCategoryContainer_o **)(v22 + 16);
    if ( v36 )
    {
      if ( !v37 )
        sub_B170D4();
      ServantFilterCategoryContainer__SetActive(v37, 1, 0LL);
      if ( !*v30 )
        sub_B170D4();
      v45.fields.x = x;
      v45.fields.y = y;
      v45.fields.z = z;
      ServantFilterCategoryContainer__SetPosition(*v30, v45, 0LL);
      if ( !*v30 )
        sub_B170D4();
      ServantFilterCategoryContainer__Layout(*v30, *(&(*v30)->fields.categoryKind + 1) == v44, 0LL);
      if ( !*v30 )
        sub_B170D4();
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(*v30, 0LL);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !v37 )
        sub_B170D4();
      ServantFilterCategoryContainer__SetActive(v37, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v17; // x20
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v18; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *commandCodeFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  ServantFilterSelectMenu___c_c *v41; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__58_0; // x21
  Il2CppObject *v44; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UnityEngine_Object_o *v52; // x20
  __int64 v53; // x2
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v55; // x20
  const MethodInfo *v56; // x2
  System_RuntimeFieldHandle_o v57; // 0:w1.4

  if ( (byte_40FC739 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B16FFC(&FilterKindList_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B16FFC(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A,
      v13);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__, v14);
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v15);
    byte_40FC739 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v17 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v18 = this->fields.useFilterKindList;
  if ( !v18 )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)v18,
    39,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  commandCodeFilterContainer = this->fields.commandCodeFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = commandCodeFilterContainer;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)commandCodeFilterContainer,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v27);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v28);
  commandCodeEffectFilterController = this->fields.commandCodeEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !commandCodeEffectFilterController )
    goto LABEL_28;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v35, 0LL);
  if ( !*p_currentFilterContainer )
    goto LABEL_28;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  v41 = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v41 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v41->static_fields;
  _9__58_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v36,
                                                                          v37,
                                                                          v38,
                                                                          v39);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__58_0,
      v44,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v45 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v45->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__58_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v45->__9__58_0,
      (System_Int32_array **)_9__58_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  if ( !categoryContainerList )
    goto LABEL_28;
  v52 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__58_0,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
  {
    if ( v52 )
    {
      klass = v52[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_27;
      }
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_27:
  v55 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 4LL, v53);
  v57.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v55, v57, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v55, v56);
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v21; // x22
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v22; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v23; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v24; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v25; // x21
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v26; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v27; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v28; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  __int64 v38; // x2
  System_Array_o *v39; // x23
  __int64 v40; // x2
  _DWORD *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  int v44; // w8
  System_Array_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v50; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v57; // x24
  ListViewSort_FilterCategoryKind_array *v58; // x1
  const MethodInfo *v59; // x2
  System_RuntimeFieldHandle_o v60; // 0:w1.4
  System_RuntimeFieldHandle_o v61; // 0:w1.4

  if ( (byte_40FC73B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, filterKind);
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, v7);
    sub_B16FFC(&FilterKindList_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo, v16);
    sub_B16FFC(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v17);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44,
      v18);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB,
      v19);
    byte_40FC73B = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v21 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v22 = this->fields.useFilterKindList;
  if ( !v22 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v23 = this->fields.useFilterKindList;
  if ( !v23 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    v24 = this->fields.useFilterKindList;
    if ( !v24 )
      goto LABEL_28;
    System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  v25 = this->fields.useFilterKindList;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v25 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v26 = this->fields.useFilterKindList;
  if ( !v26 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v27 = this->fields.useFilterKindList;
  if ( !v27 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v28 = this->fields.useFilterKindList;
  if ( !v28 )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)v28,
    39,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v36);
  ServantFilterSelectMenu__InitUseFilterButton(this, 1, v37);
  v39 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 4LL, v38);
  v60.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v39, v60, 0LL);
  v41 = (_DWORD *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 2LL, v40);
  if ( !v41 )
    goto LABEL_28;
  v44 = v41[6];
  if ( !v44 || (v41[8] = 1, v44 == 1) )
  {
    sub_B17100(v41, v42, v43);
    sub_B170A0();
  }
  v41[9] = 2;
  v45 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 3LL, v43);
  v61.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v45, v61, 0LL);
  v50 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo,
                                                                   v46,
                                                                   v47,
                                                                   v48,
                                                                   v49);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v50,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v50 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v50,
    (System_Collections_Generic_IEnumerable_T__o *)v39,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v50,
      categoryKind,
      (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__);
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
LABEL_28:
    sub_B170D4();
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v57, 0LL);
  this->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v50,
    (System_Collections_Generic_IEnumerable_T__o *)v45,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v58 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                   (System_Collections_Generic_List_Voice_BATTLE__o *)v50,
                                                   (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(this, v58, v59);
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v15; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v16; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v18; // x20
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *costumeFilterContainer; // x1
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
  __int64 v32; // x3
  __int64 v33; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  ServantFilterSelectMenu___c_c *v36; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__59_0; // x21
  Il2CppObject *v39; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Object_o *v47; // x20
  __int64 v48; // x2
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v50; // x20
  const MethodInfo *v51; // x2
  System_RuntimeFieldHandle_o v52; // 0:w1.4

  if ( (byte_40FC73A & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, method);
    sub_B16FFC(&FilterKindList_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v9);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D,
      v11);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, v12);
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v13);
    byte_40FC73A = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v15 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v16 = this->fields.useFilterKindList;
  if ( !v16 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  ClassFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList )
    goto LABEL_30;
  v18 = this->fields.useFilterKindList;
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                         (System_Collections_Generic_List_Voice_BATTLE__o *)ClassFilterKindList,
                                                         (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v18 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v18,
    v19,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v20 = this->fields.useFilterKindList;
  if ( !v20 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = this->fields.costumeFilterContainer;
  this->fields.currentFilterContainer = costumeFilterContainer;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)costumeFilterContainer,
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
    goto LABEL_30;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  v36 = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v36 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__59_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__59_0;
  if ( !_9__59_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__59_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v30,
                                                                          v31,
                                                                          v32,
                                                                          v33);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__59_0,
      v39,
      Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v40 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v40->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__59_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__59_0,
      (System_Int32_array **)_9__59_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !categoryContainerList )
    goto LABEL_30;
  v47 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__59_0,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
  {
    if ( v47 )
    {
      klass = v47[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_29:
  v50 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 5LL, v48);
  v52.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v50, v52, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v50, v51);
}


void __fastcall ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantFilterSelectMenu_c *v2; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_40FC72D & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_TypeInfo, v1);
    byte_40FC72D = 1;
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
    sub_B170D4();
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v22; // x20
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v24; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v25; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v26; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v27; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v28; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v29; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  ServantFilterSelectMenu___c_c *v45; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__56_0; // x21
  Il2CppObject *v48; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  UnityEngine_Object_o *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v64; // x22
  const MethodInfo *v65; // x1
  __int64 v66; // x2
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  __int64 v68; // x2
  System_Array_o *v69; // x0
  __int64 *v70; // x8
  __int64 v71; // x1
  ListViewSort_FilterCategoryKind_array *v72; // x20
  const MethodInfo *v73; // x2

  if ( (byte_40FC737 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B16FFC(&FilterKindList_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B16FFC(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v14);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v15);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, v16);
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_40FC737 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v20 = this->fields.useFilterKindList;
  if ( !v20 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  ClassFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList )
    goto LABEL_40;
  v22 = this->fields.useFilterKindList;
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                         (System_Collections_Generic_List_Voice_BATTLE__o *)ClassFilterKindList,
                                                         (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v22 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v22,
    v23,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v24 = this->fields.useFilterKindList;
  if ( !v24 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v25 = this->fields.useFilterKindList;
  if ( !v25 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v26 = this->fields.useFilterKindList;
  if ( !v26 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v27 = this->fields.useFilterKindList;
  if ( !v27 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v28 = this->fields.useFilterKindList;
  if ( !v28 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v28,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v29 = this->fields.useFilterKindList;
  if ( !v29 )
    goto LABEL_40;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)v29,
    39,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v37);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v38);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_40;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  v45 = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v45 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v39,
                                                                          v40,
                                                                          v41,
                                                                          v42);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__56_0,
      v48,
      Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v49 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v49->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__56_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v49->__9__56_0,
      (System_Int32_array **)_9__56_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v56 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__56_0,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
  {
    if ( !v56 )
      goto LABEL_40;
    klass = v56[3].klass;
    if ( !klass )
      goto LABEL_40;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v57, v58, v59, v60);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v64, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v65) )
  {
    v69 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 9LL, v66);
    v70 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_39;
  }
  svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
  if ( !svtEventBonusFilterController )
LABEL_40:
    sub_B170D4();
  ServantEventBonusFilterController__Init(
    svtEventBonusFilterController,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v69 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 10LL, v68);
  v70 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_39:
  v71 = *v70;
  v72 = (ListViewSort_FilterCategoryKind_array *)v69;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v69, (System_RuntimeFieldHandle_o)v71, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v72, v73);
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v22; // x20
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v24; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v25; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v26; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v27; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v28; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  ServantFilterSelectMenu___c_c *v44; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__55_0; // x21
  Il2CppObject *v47; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_Object_o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v63; // x22
  const MethodInfo *v64; // x1
  __int64 v65; // x2
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  __int64 v67; // x2
  System_Array_o *v68; // x0
  __int64 *v69; // x8
  __int64 v70; // x1
  ListViewSort_FilterCategoryKind_array *v71; // x20
  const MethodInfo *v72; // x2

  if ( (byte_40FC736 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B16FFC(&FilterKindList_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B16FFC(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA,
      v14);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D,
      v15);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__, v16);
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_40FC736 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v20 = this->fields.useFilterKindList;
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  ClassFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList )
    goto LABEL_39;
  v22 = this->fields.useFilterKindList;
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                         (System_Collections_Generic_List_Voice_BATTLE__o *)ClassFilterKindList,
                                                         (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v22 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v22,
    v23,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v24 = this->fields.useFilterKindList;
  if ( !v24 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v25 = this->fields.useFilterKindList;
  if ( !v25 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v26 = this->fields.useFilterKindList;
  if ( !v26 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v27 = this->fields.useFilterKindList;
  if ( !v27 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v28 = this->fields.useFilterKindList;
  if ( !v28 )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)v28,
    39,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v36);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v37);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_39;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  v44 = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v44 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__55_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v38,
                                                                          v39,
                                                                          v40,
                                                                          v41);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__55_0,
      v47,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v48 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v48->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__55_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v48->__9__55_0,
      (System_Int32_array **)_9__55_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v55 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__55_0,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
  {
    if ( !v55 )
      goto LABEL_39;
    klass = v55[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v63 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v63, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v64) )
  {
    v68 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 9LL, v65);
    v69 = &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D;
    goto LABEL_38;
  }
  svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
  if ( !svtEventBonusFilterController )
LABEL_39:
    sub_B170D4();
  ServantEventBonusFilterController__Init(
    svtEventBonusFilterController,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v68 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 10LL, v67);
  v69 = &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA;
LABEL_38:
  v70 = *v69;
  v71 = (ListViewSort_FilterCategoryKind_array *)v68;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v68, (System_RuntimeFieldHandle_o)v70, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v71, v72);
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v17; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v18; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *v36; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  ServantFilterSelectMenu___c_c *v42; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_0; // x21
  Il2CppObject *v45; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *v53; // x20
  __int64 v54; // x2
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v56; // x20
  const MethodInfo *v57; // x2
  System_RuntimeFieldHandle_o v58; // 0:w1.4

  if ( (byte_40FC738 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B16FFC(&FilterKindList_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B16FFC(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__C553AB27B928A848AF71444388E2F8D356D5F0A9D933AA4B4E5CA8B4703104F3,
      v13);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__, v14);
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v15);
    byte_40FC738 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_29;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v17 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v18 = this->fields.useFilterKindList;
  if ( !v18 )
    goto LABEL_29;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v19 = this->fields.useFilterKindList;
  if ( !v19 )
    goto LABEL_29;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)v19,
    39,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantEquipFilterContainer = this->fields.servantEquipFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = servantEquipFilterContainer;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantEquipFilterContainer,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v28);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v29);
  svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEquipEffectFilterController )
    goto LABEL_29;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v36, 0LL);
  if ( !*p_currentFilterContainer )
    goto LABEL_29;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  v42 = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v42 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__57_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v37,
                                                                          v38,
                                                                          v39,
                                                                          v40);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_0,
      v45,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v46 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v46->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v46->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  if ( !categoryContainerList )
    goto LABEL_29;
  v53 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__57_0,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
  {
    if ( v53 )
    {
      klass = v53[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_28;
      }
    }
LABEL_29:
    sub_B170D4();
  }
LABEL_28:
  v56 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 5LL, v54);
  v58.fields.value = Field__PrivateImplementationDetails__C553AB27B928A848AF71444388E2F8D356D5F0A9D933AA4B4E5CA8B4703104F3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v56, v58, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v56, v57);
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v21; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v22; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v23; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v24; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v25; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v26; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  ServantFilterSelectMenu___c_c *v42; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_0; // x21
  Il2CppObject *v45; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UnityEngine_Object_o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *v66; // x8
  ServantFilterSelectMenu___c_c *v67; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v68; // x20
  struct ServantFilterSelectMenu___c_StaticFields *v69; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_1; // x21
  Il2CppObject *v71; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_Object_o *v79; // x20
  const MethodInfo *v80; // x1
  UnityEngine_Object_c *v81; // x8
  __int64 v82; // x2
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  __int64 v84; // x2
  System_Array_o *v85; // x0
  __int64 *v86; // x8
  __int64 v87; // x1
  ListViewSort_FilterCategoryKind_array *v88; // x20
  const MethodInfo *v89; // x2

  if ( (byte_40FC733 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B16FFC(&FilterKindList_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B16FFC(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v13);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v14);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__, v15);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__, v16);
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_40FC733 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v20 = this->fields.useFilterKindList;
  if ( !v20 )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v21 = this->fields.useFilterKindList;
  if ( !v21 )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v22 = this->fields.useFilterKindList;
  if ( !v22 )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v23 = this->fields.useFilterKindList;
  if ( !v23 )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v24 = this->fields.useFilterKindList;
  if ( !v24 )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v25 = this->fields.useFilterKindList;
  if ( !v25 )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v26 = this->fields.useFilterKindList;
  if ( !v26 )
    goto LABEL_55;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)v26,
    39,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v34);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v35);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_55;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  v42 = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v42 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v36,
                                                                          v37,
                                                                          v38,
                                                                          v39);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v45,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v46 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v46->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v46->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  if ( !categoryContainerList )
    goto LABEL_55;
  v53 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__52_0,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
  {
    if ( !v53 )
      goto LABEL_55;
    klass = v53[3].klass;
    if ( !klass )
      goto LABEL_55;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v61 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v54, v55, v56, v57);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_55;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v61, 0LL);
  v66 = this->fields.currentFilterContainer;
  this->fields.isDisplayServantEffect = 1;
  if ( !v66 )
    goto LABEL_55;
  v67 = ServantFilterSelectMenu___c_TypeInfo;
  v68 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v66->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v67 = ServantFilterSelectMenu___c_TypeInfo;
  }
  v69 = v67->static_fields;
  _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v69->__9__52_1;
  if ( !_9__52_1 )
  {
    if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v69 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)v69->__9;
    _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v62,
                                                                          v63,
                                                                          v64,
                                                                          v65);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_1,
      v71,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v72 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v72->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v72->__9__52_1,
      (System_Int32_array **)_9__52_1,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  if ( !v68 )
    goto LABEL_55;
  v79 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v68,
                                  (System_Predicate_T__o *)_9__52_1,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
  {
    if ( !v79 )
      goto LABEL_55;
    v81 = v79[3].klass;
    if ( !v81 )
      goto LABEL_55;
    HIDWORD(v81->_1.byval_arg.data) = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v80) )
  {
    v85 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 8LL, v82);
    v86 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_54;
  }
  svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
  if ( !svtEventBonusFilterController )
LABEL_55:
    sub_B170D4();
  ServantEventBonusFilterController__Init(
    svtEventBonusFilterController,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v85 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 9LL, v84);
  v86 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_54:
  v87 = *v86;
  v88 = (ListViewSort_FilterCategoryKind_array *)v85;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v85, (System_RuntimeFieldHandle_o)v87, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v88, v89);
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v22; // x20
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v24; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v25; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v26; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v27; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v28; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  ServantFilterSelectMenu___c_c *v44; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__54_0; // x21
  Il2CppObject *v47; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_Object_o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v63; // x22
  const MethodInfo *v64; // x1
  __int64 v65; // x2
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  __int64 v67; // x2
  System_Array_o *v68; // x0
  __int64 *v69; // x8
  __int64 v70; // x1
  ListViewSort_FilterCategoryKind_array *v71; // x20
  const MethodInfo *v72; // x2

  if ( (byte_40FC735 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B16FFC(&FilterKindList_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B16FFC(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v14);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v15);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__, v16);
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_40FC735 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v20 = this->fields.useFilterKindList;
  if ( !v20 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  ClassFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList )
    goto LABEL_39;
  v22 = this->fields.useFilterKindList;
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                         (System_Collections_Generic_List_Voice_BATTLE__o *)ClassFilterKindList,
                                                         (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v22 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v22,
    v23,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v24 = this->fields.useFilterKindList;
  if ( !v24 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v25 = this->fields.useFilterKindList;
  if ( !v25 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v26 = this->fields.useFilterKindList;
  if ( !v26 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v27 = this->fields.useFilterKindList;
  if ( !v27 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v28 = this->fields.useFilterKindList;
  if ( !v28 )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)v28,
    39,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v36);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v37);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_39;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  v44 = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v44 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__54_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v38,
                                                                          v39,
                                                                          v40,
                                                                          v41);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__54_0,
      v47,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v48 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v48->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__54_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v48->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v55 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__54_0,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
  {
    if ( !v55 )
      goto LABEL_39;
    klass = v55[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v63 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v63, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v64) )
  {
    v68 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 9LL, v65);
    v69 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_38;
  }
  svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
  if ( !svtEventBonusFilterController )
LABEL_39:
    sub_B170D4();
  ServantEventBonusFilterController__Init(
    svtEventBonusFilterController,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v68 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 10LL, v67);
  v69 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_38:
  v70 = *v69;
  v71 = (ListViewSort_FilterCategoryKind_array *)v68;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v68, (System_RuntimeFieldHandle_o)v70, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v71, v72);
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v22; // x20
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v24; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v25; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v26; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v27; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  ServantFilterSelectMenu___c_c *v43; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x21
  Il2CppObject *v46; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Object_o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v62; // x22
  const MethodInfo *v63; // x1
  __int64 v64; // x2
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  __int64 v66; // x2
  System_Array_o *v67; // x0
  __int64 *v68; // x8
  __int64 v69; // x1
  ListViewSort_FilterCategoryKind_array *v70; // x20
  const MethodInfo *v71; // x2

  if ( (byte_40FC732 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B16FFC(&FilterKindList_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v11);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v12);
    sub_B16FFC(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v13);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v14);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v15);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__, v16);
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v17);
    byte_40FC732 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v19 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v20 = this->fields.useFilterKindList;
  if ( !v20 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  ClassFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !ClassFilterKindList )
    goto LABEL_38;
  v22 = this->fields.useFilterKindList;
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                         (System_Collections_Generic_List_Voice_BATTLE__o *)ClassFilterKindList,
                                                         (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v22 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v22,
    v23,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v24 = this->fields.useFilterKindList;
  if ( !v24 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v25 = this->fields.useFilterKindList;
  if ( !v25 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v26 = this->fields.useFilterKindList;
  if ( !v26 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v27 = this->fields.useFilterKindList;
  if ( !v27 )
    goto LABEL_38;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)v27,
    39,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v35);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v36);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_38;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  v43 = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v43 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v37,
                                                                          v38,
                                                                          v39,
                                                                          v40);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v46,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v47 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v47->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__51_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v47->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v54 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__51_0,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
  {
    if ( !v54 )
      goto LABEL_38;
    klass = v54[3].klass;
    if ( !klass )
      goto LABEL_38;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v62 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v55, v56, v57, v58);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v62, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v63) )
  {
    v67 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 8LL, v64);
    v68 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_37;
  }
  svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
  if ( !svtEventBonusFilterController )
LABEL_38:
    sub_B170D4();
  ServantEventBonusFilterController__Init(
    svtEventBonusFilterController,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v67 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 9LL, v66);
  v68 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_37:
  v69 = *v68;
  v70 = (ListViewSort_FilterCategoryKind_array *)v67;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v67, (System_RuntimeFieldHandle_o)v69, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v70, v71);
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v18; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v21; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v22; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  ServantFilterSelectMenu___c_c *v38; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__53_0; // x21
  Il2CppObject *v41; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Object_o *v49; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v57; // x22
  const MethodInfo *v58; // x1
  __int64 v59; // x2
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  __int64 v61; // x2
  System_Array_o *v62; // x0
  __int64 *v63; // x8
  __int64 v64; // x1
  ListViewSort_FilterCategoryKind_array *v65; // x20
  const MethodInfo *v66; // x2

  if ( (byte_40FC734 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, v3);
    sub_B16FFC(&FilterKindList_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v10);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v11);
    sub_B16FFC(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v12);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D,
      v13);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F,
      v14);
    sub_B16FFC(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__, v15);
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v16);
    byte_40FC734 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v18 = this->fields.useFilterKindList;
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
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v19 = this->fields.useFilterKindList;
  if ( !v19 )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v19,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v20 = this->fields.useFilterKindList;
  if ( !v20 )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v21 = this->fields.useFilterKindList;
  if ( !v21 )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  v22 = this->fields.useFilterKindList;
  if ( !v22 )
    goto LABEL_35;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)v22,
    39,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v30);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v31);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_35;
  categoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)currentFilterContainer->fields.categoryContainerList;
  v38 = ServantFilterSelectMenu___c_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    v38 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v38->static_fields;
  _9__53_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                          v32,
                                                                          v33,
                                                                          v34,
                                                                          v35);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__53_0,
      v41,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v42 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v42->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__53_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v42->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !categoryContainerList )
    goto LABEL_35;
  v49 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__53_0,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
  {
    if ( !v49 )
      goto LABEL_35;
    klass = v49[3].klass;
    if ( !klass )
      goto LABEL_35;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_35;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v57, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v58) )
  {
    v62 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 6LL, v59);
    v63 = &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F;
    goto LABEL_34;
  }
  svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
  if ( !svtEventBonusFilterController )
LABEL_35:
    sub_B170D4();
  ServantEventBonusFilterController__Init(
    svtEventBonusFilterController,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v62 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 7LL, v61);
  v63 = &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D;
LABEL_34:
  v64 = *v63;
  v65 = (ListViewSort_FilterCategoryKind_array *)v62;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v62, (System_RuntimeFieldHandle_o)v64, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v65, v66);
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
  __int64 v19; // x3
  __int64 v20; // x4
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *filterButtonList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x23
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ServantFilterSelectMenu_FilterContainer_o *v31; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v32; // x0
  bool v33; // w20
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  bool v36; // w22
  ListViewSort_o *operationSortInfo; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  ServantFilterButtonControl_OnClickFilterButton_o *v42; // x24
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40FC73C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isSummon);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v10);
    sub_B16FFC(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v11);
    sub_B16FFC(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v12);
    sub_B16FFC(&System_Predicate_ServantFilterButtonControl__TypeInfo, v13);
    sub_B16FFC(&Method_ServantFilterSelectMenu_OnClickFilterButton__, v14);
    sub_B16FFC(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__, v15);
    byte_40FC73C = 1;
  }
  memset(&v43, 0, sizeof(v43));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)useFilterButtonList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_16;
  filterButtonList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)currentFilterContainer->fields.filterButtonList;
  v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_ServantFilterButtonControl__TypeInfo,
                                                                   v17,
                                                                   v18,
                                                                   v19,
                                                                   v20);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v23,
    (Il2CppObject *)this,
    Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                filterButtonList,
                (System_Predicate_T__o *)v23,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
          (System_Int32_array **)All,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        (v31 = this->fields.currentFilterContainer) == 0LL)
    || (v32 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31->fields.filterButtonList) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    v32,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v33 = isSummon;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    current = v43.fields.current;
    if ( !v43.fields.current )
      sub_B170D4();
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B170D4();
    v36 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v43.fields.current[1].monitor,
            (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    operationSortInfo = this->fields.operationSortInfo;
    v42 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B170CC(
                                                                ServantFilterButtonControl_OnClickFilterButton_TypeInfo,
                                                                v38,
                                                                v39,
                                                                v40,
                                                                v41);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v42,
      (Il2CppObject *)this,
      Method_ServantFilterSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, operationSortInfo, v42, v36, v33, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


bool __fastcall ServantFilterSelectMenu__IsChangedStatus(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Boolean_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Boolean_array *kindStatus; // x10
  __int64 v8; // x9
  unsigned __int64 v9; // x8
  bool *v10; // x10
  int32_t kind; // w8
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x0
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x0
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x0

  v4 = ServantFilterSelectMenu__SetKindStatus(this, this->fields.operationSortInfo, v2);
  kindStatus = this->fields.kindStatus;
  if ( !kindStatus )
    goto LABEL_23;
  v8 = *(_QWORD *)&kindStatus->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    v10 = &kindStatus->m_Items[4];
    while ( v4 )
    {
      if ( v9 >= v4->max_length )
      {
        sub_B17100(v4, v5, v6);
        sub_B170A0();
      }
      if ( !v10[v9] == v4->m_Items[v9 + 4] )
        return 1;
      if ( (__int64)++v9 >= (int)v8 )
        goto LABEL_8;
    }
LABEL_23:
    sub_B170D4();
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
    commandCodeEffectFilterController = this->fields.commandCodeEffectFilterController;
    if ( !commandCodeEffectFilterController )
      goto LABEL_23;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(commandCodeEffectFilterController, 0LL) )
      return 1;
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
    if ( !svtEventBonusFilterController )
      goto LABEL_23;
    if ( ServantEventBonusFilterController__IsChangeFilterData(svtEventBonusFilterController, 0LL) )
      return 1;
  }
  if ( this->fields.isDisplayServantEffect )
  {
    svtEffectFilterController = this->fields.svtEffectFilterController;
    if ( !svtEffectFilterController )
      goto LABEL_23;
    if ( ServantEquipEffectFilterController__IsChangeFilterData(svtEffectFilterController, 0LL) )
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
  System_Int32_array *EventValUpEventIdList; // x0
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Int32_array *v16; // x20
  __int64 v17; // x0
  EventUpValSetupInfo_o *v18; // x21
  struct System_Int32_array *servantFilterEventIdList; // x8
  EventBonusFilterMaster_o *v20; // x0

  if ( (byte_40FC731 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v5);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v7);
    byte_40FC731 = 1;
  }
  eventId = this->fields.eventId;
  this->fields.isDisplayEventBonusSkill = 0;
  if ( !eventId )
  {
LABEL_25:
    LOBYTE(EventValUpEventIdList) = 0;
    return (char)EventValUpEventIdList;
  }
  kind = this->fields.kind;
  LOBYTE(EventValUpEventIdList) = 0;
  if ( kind <= 0xB && ((1 << kind) & 0xC0F) != 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_29;
    EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(Master_WarQuestSelectionMaster, 0, 0LL);
    if ( EventValUpEventIdList )
    {
      v16 = EventValUpEventIdList;
      if ( *(_QWORD *)&EventValUpEventIdList->max_length )
      {
        if ( this->fields.eventId >= 1 )
        {
          v17 = sub_B17014(int___TypeInfo, 1LL, v13);
          if ( !v17 )
            goto LABEL_29;
          v16 = (System_Int32_array *)v17;
          if ( !*(_DWORD *)(v17 + 24) )
          {
            sub_B17100(v17, v12, v13);
            sub_B170A0();
          }
          *(_DWORD *)(v17 + 32) = this->fields.eventId;
        }
        v18 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v12, v13, v14, v15);
        EventUpValSetupInfo___ctor_24610352(v18, v16, 0, 0LL);
        if ( v18 )
        {
          servantFilterEventIdList = v18->fields.servantFilterEventIdList;
          if ( !servantFilterEventIdList || !servantFilterEventIdList->max_length )
          {
            LOBYTE(EventValUpEventIdList) = 0;
            goto LABEL_27;
          }
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          v20 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
          if ( v20 )
          {
            EventValUpEventIdList = (System_Int32_array *)EventBonusFilterMaster__GetBonusSkillFilterList(v20, v16, 0LL);
            if ( EventValUpEventIdList )
            {
              LOBYTE(EventValUpEventIdList) = (signed int)EventValUpEventIdList->max_length > 0;
LABEL_27:
              this->fields.isDisplayEventBonusSkill = (char)EventValUpEventIdList;
              return (char)EventValUpEventIdList;
            }
          }
        }
LABEL_29:
        sub_B170D4();
      }
      goto LABEL_25;
    }
  }
  return (char)EventValUpEventIdList;
}


void __fastcall ServantFilterSelectMenu__OnClickCancel(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FC742 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC742 = 1;
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  ListViewSort_o *v6; // x20
  ListViewSort_FilterKind_array *v7; // x0
  const MethodInfo *v8; // x1
  ListViewSort_o *v9; // x0
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FC743 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FC743 = 1;
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
      useFilterKindList = this->fields.useFilterKindList;
      if ( useFilterKindList )
      {
        v6 = this->fields.operationSortInfo;
        v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                                                (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v6 )
        {
          ListViewSort__SetFilters(v6, v7, 0, 0LL);
          if ( (unsigned int)(this->fields.kind - 5) < 2 || this->fields.isDisplayServantEffect )
          {
            v9 = this->fields.operationSortInfo;
            if ( !v9 )
              goto LABEL_19;
            ListViewSort__SetAllSvtEquipEffectFilter(v9, 0, 0LL);
          }
          if ( !this->fields.isDisplayEventBonusSkill )
          {
LABEL_17:
            ServantFilterSelectMenu__SetButtonSelect(this, v8);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v11);
            return;
          }
          svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
          if ( svtEventBonusFilterController )
          {
            ServantEventBonusFilterController__InitAllButton(svtEventBonusFilterController, 0LL);
            goto LABEL_17;
          }
        }
      }
    }
LABEL_19:
    sub_B170D4();
  }
}


void __fastcall ServantFilterSelectMenu__OnClickDecide(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x8
  UIProgressBar_o *v5; // x0
  struct ListViewSort_o *operationSortInfo; // x20
  float value; // s0
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v9; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v11; // x2

  if ( (byte_40FC741 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC741 = 1;
  }
  if ( this->fields.state == 2 )
  {
    currentFilterContainer = this->fields.currentFilterContainer;
    if ( !currentFilterContainer )
      goto LABEL_14;
    scrollView = currentFilterContainer->fields.scrollView;
    if ( !scrollView )
      goto LABEL_14;
    v5 = *(UIProgressBar_o **)&scrollView->fields.showScrollBars;
    if ( !v5 )
      goto LABEL_14;
    operationSortInfo = this->fields.operationSortInfo;
    value = UIProgressBar__get_value(v5, 0LL);
    if ( !operationSortInfo )
      goto LABEL_14;
    operationSortInfo->fields.scrollBarValue = value;
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo )
LABEL_14:
      sub_B170D4();
    ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL);
    IsChangedStatus = ServantFilterSelectMenu__IsChangedStatus(this, v9);
    ServantFilterSelectMenu__Callback(this, IsChangedStatus, v11);
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

  if ( (byte_40FC745 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&filterKind);
    byte_40FC745 = 1;
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
      sub_B170D4();
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    ServantFilterSelectMenu__SetButtonSelect(this, v6);
    ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v7);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickInitialize(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *operationSortInfo; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  ListViewSort_o *v6; // x20
  ListViewSort_FilterKind_array *v7; // x0
  const MethodInfo *v8; // x1
  ListViewSort_o *v9; // x0
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FC744 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FC744 = 1;
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
      useFilterKindList = this->fields.useFilterKindList;
      if ( useFilterKindList )
      {
        v6 = this->fields.operationSortInfo;
        v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                                                (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v6 )
        {
          ListViewSort__SetFilters(v6, v7, 1, 0LL);
          if ( (unsigned int)(this->fields.kind - 5) < 2 || this->fields.isDisplayServantEffect )
          {
            v9 = this->fields.operationSortInfo;
            if ( !v9 )
              goto LABEL_19;
            ListViewSort__SetAllSvtEquipEffectFilter(v9, 1, 0LL);
          }
          if ( !this->fields.isDisplayEventBonusSkill )
          {
LABEL_17:
            ServantFilterSelectMenu__SetButtonSelect(this, v8);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v11);
            return;
          }
          svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
          if ( svtEventBonusFilterController )
          {
            ServantEventBonusFilterController__InitAllButton(svtEventBonusFilterController, 0LL);
            goto LABEL_17;
          }
        }
      }
    }
LABEL_19:
    sub_B170D4();
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
  __int64 v48; // x3
  __int64 v49; // x4
  ListViewSort_o *v50; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  UnityEngine_Component_o *warningLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v65; // x0
  UILabel_o *titleLabel; // x21
  System_String_o *v67; // x0
  UILabel_o *v68; // x21
  System_String_o *v69; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v71; // x0
  UILabel_o *clearLabel; // x21
  System_String_o *v73; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v75; // x0
  UILabel_o *initializeLabel; // x21
  System_String_o *v77; // x0
  const MethodInfo *v78; // x1
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  ServantFilterSelectMenu_o *v81; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v83; // x0
  FilterKindList_c *v84; // x0
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  UIProgressBar_o *v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Action_o *v95; // x20

  if ( (byte_40FC72F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&FilterKindList_TypeInfo, v14);
    sub_B16FFC(&ListViewSort_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_ServantFilterSelectMenu_EndOpen__, v17);
    sub_B16FFC(&ServantFilterSelectMenu_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_11890/*"SERVANT_SORT_RESET"*/, v19);
    sub_B16FFC(&StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, v20);
    sub_B16FFC(&StringLiteral_11652/*"SERVANT_EQUIP_FILTER_WARNING"*/, v21);
    sub_B16FFC(&StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, v22);
    sub_B16FFC(&StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, v23);
    sub_B16FFC(&StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, v24);
    byte_40FC72F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
      sub_B16F98(
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
      sub_B16F98(
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.kindStatus,
      (System_Int32_array **)v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = this->fields.baseSortInfo;
    v50 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v46, v47, v48, v49);
    ListViewSort___ctor_30209040(v50, v45, 0LL);
    this->fields.operationSortInfo = v50;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    this->fields.listViewManager = listViewManager;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.listViewManager,
      (System_Int32_array **)listViewManager,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    warningLabel = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( warningLabel )
    {
      gameObject = UnityEngine_Component__get_gameObject(warningLabel, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v65 )
        {
          UnityEngine_GameObject__SetActive(v65, 1, 0LL);
          titleLabel = this->fields.titleLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, v67, 0LL);
            v68 = this->fields.warningLabel;
            v69 = LocalizationManager__Get((System_String_o *)StringLiteral_11652/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0LL);
            if ( v68 )
            {
              UILabel__set_text(v68, v69, 0LL);
              decideLabel = this->fields.decideLabel;
              v71 = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, 0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, v71, 0LL);
                clearLabel = this->fields.clearLabel;
                v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, v73, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, v75, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    v77 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_RESET"*/, 0LL);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, v77, 0LL);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v78);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v78);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v78);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v78);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v78);
                          break;
                        case 5:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v78);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v78);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v78);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v78);
                          break;
                        case 0xC:
                          v80 = 999;
                          v81 = this;
                          ClassExtra1FilterKindList = 0LL;
                          goto LABEL_43;
                        case 0xD:
                          v83 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v83 = FilterKindList_TypeInfo;
                          }
                          v80 = 14;
                          ClassExtra1FilterKindList = v83->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_42;
                        case 0xE:
                          v84 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v84 = FilterKindList_TypeInfo;
                          }
                          v80 = 15;
                          ClassExtra1FilterKindList = v84->static_fields->ClassExtra2FilterKindList;
LABEL_42:
                          v81 = this;
LABEL_43:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v81, ClassExtra1FilterKindList, v80, v79);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v78);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v85);
                      ServantFilterSelectMenu__SetButtonSelect(this, v86);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v87);
                      currentFilterContainer = this->fields.currentFilterContainer;
                      if ( currentFilterContainer )
                      {
                        scrollView = currentFilterContainer->fields.scrollView;
                        if ( scrollView )
                        {
                          if ( *p_baseSortInfo )
                          {
                            v90 = *(UIProgressBar_o **)&scrollView->fields.showScrollBars;
                            if ( v90 )
                            {
                              UIProgressBar__set_value(v90, (*p_baseSortInfo)->fields.scrollBarValue, 0LL);
                              this->fields.state = 1;
                              v95 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v91, v92, v93, v94);
                              System_Action___ctor(
                                v95,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v95, 0, 0LL);
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
    sub_B170D4();
  }
}


void __fastcall ServantFilterSelectMenu__RefreshFilterClippingPosition(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  UnityEngine_Object_o *scrollView; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *v5; // x8
  struct UIScrollView_o *v6; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *v7; // x8
  struct UIScrollView_o *v8; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v9; // x8
  UIScrollView_o *v10; // x0

  if ( (byte_40FC73E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC73E = 1;
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
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      v5 = this->fields.currentFilterContainer;
      if ( v5 )
      {
        v6 = v5->fields.scrollView;
        if ( v6 )
        {
          if ( (((__int64 (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))v6->klass->vtable._6_get_shouldMoveVertically.method)(
                  v6,
                  v6->klass->vtable._7_get_shouldMove.methodPtr) & 1) == 0 )
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
            v10 = v9->fields.scrollView;
            if ( v10 )
            {
              UIScrollView__ResetPosition(v10, 0LL);
              return;
            }
          }
        }
      }
LABEL_18:
      sub_B170D4();
    }
  }
}


void __fastcall ServantFilterSelectMenu__SetActiveCurrentFilterContainer(
        ServantFilterSelectMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  UnityEngine_GameObject_o *root; // x0

  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer || (root = currentFilterContainer->fields.root) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(root, isActive, 0LL);
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
  UICommonButton_o *cancelButton; // x0
  UICommonButton_o *clearButton; // x0
  UICommonButton_o *initializeButton; // x0
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  int32_t kind; // w8
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x0
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x0
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FC740 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_40FC740 = 1;
  }
  memset(&i, 0, sizeof(i));
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_26;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_26;
  UICommonButton__SetButtonEnableWithCollider(cancelButton, isEnable, 0LL);
  clearButton = this->fields.clearButton;
  if ( !clearButton )
    goto LABEL_26;
  UICommonButton__SetButtonEnableWithCollider(clearButton, isEnable, 0LL);
  initializeButton = this->fields.initializeButton;
  if ( !initializeButton )
    goto LABEL_26;
  UICommonButton__SetButtonEnableWithCollider(initializeButton, isEnable, 0LL);
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = v18;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &i,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
        ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)i.fields.current, isEnable, 0LL) )
  {
    if ( !i.fields.current )
      sub_B170D4();
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &i,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_26;
    ServantEquipEffectFilterController__SetEnableFilterButton(svtEquipEffectFilterController, isEnable, 0LL);
    kind = this->fields.kind;
  }
  if ( kind == 6 )
  {
    commandCodeEffectFilterController = this->fields.commandCodeEffectFilterController;
    if ( !commandCodeEffectFilterController )
      goto LABEL_26;
    ServantEquipEffectFilterController__SetEnableFilterButton(commandCodeEffectFilterController, isEnable, 0LL);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
    if ( !svtEventBonusFilterController )
      goto LABEL_26;
    ServantEventBonusFilterController__SetEnableFilterButton(svtEventBonusFilterController, isEnable, 0LL);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  svtEffectFilterController = this->fields.svtEffectFilterController;
  if ( !svtEffectFilterController )
LABEL_26:
    sub_B170D4();
  ServantEquipEffectFilterController__SetEnableFilterButton(svtEffectFilterController, isEnable, 0LL);
}


void __fastcall ServantFilterSelectMenu__SetButtonSelect(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  Il2CppObject *current; // x20
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x0
  bool v13; // w0
  int32_t kind; // w8
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x0
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x0
  ServantEventBonusFilterController_o *svtEventBonusFilterController; // x0
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FC73F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v4);
    sub_B16FFC(&FilterKindList_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_40FC73F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B170D4();
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v20.fields.current, 0LL);
    v10 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v10->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B170D4();
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B170D4();
      v13 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v13, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
    if ( !svtEquipEffectFilterController )
      goto LABEL_30;
    ServantEquipEffectFilterController__RefreshSelectState(svtEquipEffectFilterController, 0LL);
    kind = this->fields.kind;
  }
  if ( kind == 6 )
  {
    commandCodeEffectFilterController = this->fields.commandCodeEffectFilterController;
    if ( !commandCodeEffectFilterController )
      goto LABEL_30;
    ServantEquipEffectFilterController__RefreshSelectState(commandCodeEffectFilterController, 0LL);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    svtEventBonusFilterController = this->fields.svtEventBonusFilterController;
    if ( !svtEventBonusFilterController )
      goto LABEL_30;
    ServantEventBonusFilterController__RefreshButtonState(svtEventBonusFilterController, 0LL);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  svtEffectFilterController = this->fields.svtEffectFilterController;
  if ( !svtEffectFilterController )
LABEL_30:
    sub_B170D4();
  ServantEquipEffectFilterController__RefreshSelectState(svtEffectFilterController, 0LL);
}


System_Boolean_array *__fastcall ServantFilterSelectMenu__SetKindStatus(
        ServantFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FilterKindList_c *v7; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *AllFilterKindList; // x8
  int size; // w21
  System_Boolean_array *v10; // x20
  unsigned __int64 v11; // x23
  FilterKindList_c *v12; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v13; // x25
  _BOOL8 Filter; // x0
  __int64 v15; // x1
  __int64 v16; // x2

  if ( (byte_40FC747 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, sort);
    sub_B16FFC(&FilterKindList_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__, v6);
    byte_40FC747 = 1;
  }
  v7 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v7 = FilterKindList_TypeInfo;
  }
  AllFilterKindList = v7->static_fields->AllFilterKindList;
  if ( !AllFilterKindList )
    goto LABEL_20;
  size = AllFilterKindList->fields._size;
  v10 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, (unsigned int)size, method);
  if ( size >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v12 = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        v12 = FilterKindList_TypeInfo;
      }
      v13 = v12->static_fields->AllFilterKindList;
      if ( !v13 )
        break;
      if ( v11 >= (unsigned int)v13->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !sort )
        break;
      Filter = ListViewSort__GetFilter(sort, v13->fields._items->m_Items[v11 + 1], 0LL);
      if ( !v10 )
        break;
      if ( v11 >= v10->max_length )
      {
        sub_B17100(Filter, v15, v16);
        sub_B170A0();
      }
      v10->m_Items[v11++ + 4] = Filter;
      if ( (__int64)v11 >= size )
        return v10;
    }
LABEL_20:
    sub_B170D4();
  }
  return v10;
}


bool __fastcall ServantFilterSelectMenu___InitUseFilterButton_b__61_0(
        ServantFilterSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0

  if ( (byte_40FC74B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, x);
    byte_40FC74B = 1;
  }
  if ( !x || (useFilterKindList = this->fields.useFilterKindList) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
           (int32_t)x->fields.button,
           (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_40FC72B & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FC72B = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantFilterSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall ServantFilterSelectMenu__get_closeBtnPath(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC748 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_40FC748 = 1;
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

  if ( (byte_40FC72C & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FC72C = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  ServantFilterSelectMenu__InitLoad(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu_CallbackFunc___ctor(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F762E & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F762E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F762F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v8);
    byte_40F762F = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.categoryContainerList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.filterButtonList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F762D & 1) == 0 )
  {
    sub_B16FFC(&ServantFilterSelectMenu___c_TypeInfo, v1);
    byte_40F762D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantFilterSelectMenu___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantFilterSelectMenu___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == 0;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
  return *(&container->fields.categoryKind + 1) == x;
}