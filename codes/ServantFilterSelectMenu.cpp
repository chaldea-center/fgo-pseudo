void __fastcall ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  ListViewSort_o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EAD86 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ServantFilterSelectMenu_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_12867/*"ServantFilterSelect1"*/, v7, v8, v9);
    byte_42EAD86 = 1;
  }
  v10 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v10, (System_String_o *)StringLiteral_12867/*"ServantFilterSelect1"*/, 3, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantFilterSelectMenu_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall ServantFilterSelectMenu___ctor(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42EAD85 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v14, v15, v16);
    byte_42EAD85 = 1;
  }
  v17 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v17,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    ServantFilterSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v9; // x1
  ListViewManager_o *warningLabel; // x0
  bool v11; // w20
  WebViewObject_o *Component_WebViewObject; // x19
  int v13; // s0

  if ( (byte_42EAD82 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EAD82 = 1;
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
      v11 = ListViewManager__GetMatchItemCount(warningLabel, this->fields.operationSortInfo, 0LL) == 0;
    }
    else
    {
      v11 = 0;
    }
    warningLabel = (ListViewManager_o *)this->fields.warningLabel;
    if ( !warningLabel
      || (warningLabel = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)warningLabel,
                                                0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, v11, 0LL),
          (warningLabel = (ListViewManager_o *)this->fields.decideButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningLabel, !v11, 0LL),
          (warningLabel = (ListViewManager_o *)this->fields.decideButton) == 0LL) )
    {
LABEL_21:
      sub_B5D69C(warningLabel, v9);
    }
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)warningLabel,
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( v11 )
    {
      *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_gray(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_21;
    }
    else
    {
      *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
      if ( !Component_WebViewObject )
        goto LABEL_21;
    }
    UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v13, 0LL);
  }
}


void __fastcall ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_29321544(this, 0LL, v2);
}


void __fastcall ServantFilterSelectMenu__Close_29321544(
        ServantFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Action_o *v15; // x20

  if ( (byte_42EAD6C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_EndClose__, v6, v7, v8);
    byte_42EAD6C = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  int v2; // w2
  __int64 v3; // x3
  ServantFilterSelectMenu_c *v4; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_42EAD6A & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_TypeInfo, v1, v2, v3);
    byte_42EAD6A = 1;
  }
  v4 = ServantFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v4 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v4->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B5D69C(0LL, v1);
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
  __int64 v3; // x3
  ServantFilterSelectMenu_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x8
  float v31; // s0
  float v32; // s1
  float v33; // s2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v38; // x21
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **current; // x1
  UnityEngine_Component_o **v48; // x20
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v49; // x22
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  bool v52; // w8
  ServantFilterCategoryContainer_o *v53; // x0
  __int64 v54; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x1
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+20h] [xbp-90h] BYREF
  int v62; // [xsp+4Ch] [xbp-64h]
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42EAD79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___, (_DWORD)categoryKindKist, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__, v24, v25, v26);
    this = (ServantFilterSelectMenu_o *)sub_B5D5C4(
                                          &ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo,
                                          v27,
                                          v28,
                                          v29);
    byte_42EAD79 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  if ( !categoryKindKist )
    goto LABEL_21;
  v30 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v30 )
  {
    v59 = sub_B5D6C8(this);
    sub_B5D668(v59, 0LL);
  }
  v62 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v30 << 32) - 0x100000000LL) >> 30));
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
  currentFilterContainer = v5->fields.currentFilterContainer;
  if ( !currentFilterContainer
    || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.categoryContainerList) == 0LL )
  {
LABEL_21:
    sub_B5D69C(this, categoryKindKist);
  }
  x = v31;
  y = v32;
  z = v33;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v61 = v60;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v38 = sub_B5D694(ServantFilterSelectMenu___c__DisplayClass62_0_TypeInfo);
    ServantFilterSelectMenu___c__DisplayClass62_0___ctor((ServantFilterSelectMenu___c__DisplayClass62_0_o *)v38, 0LL);
    if ( !v38 )
      sub_B5D69C(v39, v40);
    current = (System_Int32_array **)v61.fields.current;
    *(_QWORD *)(v38 + 16) = v61.fields.current;
    v48 = (UnityEngine_Component_o **)(v38 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v38 + 16), current, v41, v42, v43, v44, v45, v46);
    v49 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B5D694(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
      v49,
      (Il2CppObject *)v38,
      Method_ServantFilterSelectMenu___c__DisplayClass62_0__InitCategoryContainer_b__0__,
      (const MethodInfo_2C2A838 *)Method_System_Func_ListViewSort_FilterCategoryKind__bool___ctor__);
    v52 = BasicHelper__Any_ListViewSort_FilterCategoryKind_(
            categoryKindKist,
            (System_Func_T__bool__o *)v49,
            (const MethodInfo_1AD6BEC *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    v53 = *(ServantFilterCategoryContainer_o **)(v38 + 16);
    if ( v52 )
    {
      if ( !v53 )
        sub_B5D69C(0LL, v50);
      ServantFilterCategoryContainer__SetActive(v53, 1, v51);
      if ( !*v48 )
        sub_B5D69C(0LL, v54);
      gameObject = UnityEngine_Component__get_gameObject(*v48, 0LL);
      v63.fields.x = x;
      v63.fields.y = y;
      v63.fields.z = z;
      GameObjectExtensions__SetLocalPosition(gameObject, v63, 0LL);
      if ( !*v48 )
        sub_B5D69C(0LL, v56);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*v48,
        HIDWORD((*v48)[2].klass) == v62,
        v57);
      if ( !*v48 )
        sub_B5D69C(0LL, v58);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)*v48, v58);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !v53 )
        sub_B5D69C(0LL, v50);
      ServantFilterCategoryContainer__SetActive(v53, 0, v51);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
}


void __fastcall ServantFilterSelectMenu__InitCommandCodeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v45; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *commandCodeFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v58; // x23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__58_0; // x21
  Il2CppObject *v62; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Object_o *v70; // x20
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v72; // x20
  const MethodInfo *v73; // x2
  System_RuntimeFieldHandle_o v74; // 0:w1.4

  if ( (byte_42EAD75 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FilterKindList_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v32, v33, v34);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__, v38, v39, v40);
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v41, v42, v43);
    byte_42EAD75 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v45 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v45 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v45,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  commandCodeFilterContainer = this->fields.commandCodeFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = commandCodeFilterContainer;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)commandCodeFilterContainer,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v54);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v55);
  commandCodeEffectFilterController = this->fields.commandCodeEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !commandCodeEffectFilterController )
    goto LABEL_28;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v58, 0LL);
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
    v62 = (Il2CppObject *)static_fields->__9;
    _9__58_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__58_0,
      v62,
      Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v63 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v63->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__58_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v63->__9__58_0,
      (System_Int32_array **)_9__58_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !categoryContainerList )
    goto LABEL_28;
  v70 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__58_0,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v70 )
    {
      klass = v70[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_27;
      }
    }
LABEL_28:
    sub_B5D69C(useFilterKindList, method);
  }
LABEL_27:
  v72 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v74.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v72, v74, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v72, v73);
}


void __fastcall ServantFilterSelectMenu__InitCommonSummonDisp(
        ServantFilterSelectMenu_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *filterKind,
        int32_t categoryKind,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v47; // x22
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v48; // x21
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  System_Array_o *v58; // x23
  int32_t size; // w8
  System_Array_o *v60; // x21
  System_Collections_Generic_List_VoiceCondType_Type__o *v61; // x22
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v64; // x24
  ListViewSort_FilterCategoryKind_array *v65; // x1
  const MethodInfo *v66; // x2
  __int64 v67; // x0
  System_RuntimeFieldHandle_o v68; // 0:w1.4
  System_RuntimeFieldHandle_o v69; // 0:w1.4

  if ( (byte_42EAD77 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)filterKind, categoryKind, method);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&FilterKindList_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v37, v38, v39);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44,
      v40,
      v41,
      v42);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB,
      v43,
      v44,
      v45);
    byte_42EAD77 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v47 = this->fields.useFilterKindList;
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v47 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v47,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->BonusSelectCollectionStateFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      goto LABEL_28;
    System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
      (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
  v48 = this->fields.useFilterKindList;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v48 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v48,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_28;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v56);
  ServantFilterSelectMenu__InitUseFilterButton(this, 1, v57);
  v58 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v68.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v58, v68, 0LL);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)sub_B5D5DC(
                                                                                                   ListViewSort_FilterCategoryKind___TypeInfo,
                                                                                                   2LL);
  if ( !useFilterKindList )
    goto LABEL_28;
  size = useFilterKindList->fields._size;
  if ( !size || (LODWORD(useFilterKindList->fields._syncRoot) = 1, size == 1) )
  {
    v67 = sub_B5D6C8(useFilterKindList);
    sub_B5D668(v67, 0LL);
  }
  HIDWORD(useFilterKindList->fields._syncRoot) = 2;
  v60 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 3LL);
  v69.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v60, v69, 0LL);
  v61 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v61,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v61 )
    goto LABEL_28;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v61,
    (System_Collections_Generic_IEnumerable_T__o *)v58,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v61,
      categoryKind,
      (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__);
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v64 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
LABEL_28:
    sub_B5D69C(useFilterKindList, filterKind);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v64, 0LL);
  this->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)v61,
    (System_Collections_Generic_IEnumerable_T__o *)v60,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  v65 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                   (System_Collections_Generic_List_Voice_BATTLE__o *)v61,
                                                   (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(this, v65, v66);
}


void __fastcall ServantFilterSelectMenu__InitCostumeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v39; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v40; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *costumeFilterContainer; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__59_0; // x21
  Il2CppObject *v54; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Object_o *v62; // x20
  UnityEngine_Object_c *klass; // x8
  System_Array_o *v64; // x20
  const MethodInfo *v65; // x2
  System_RuntimeFieldHandle_o v66; // 0:w1.4

  if ( (byte_42EAD76 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FilterKindList_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v26, v27, v28);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D,
      v29,
      v30,
      v31);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, v32, v33, v34);
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v35, v36, v37);
    byte_42EAD76 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v39 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v39 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v39,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  v40 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v40 )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_30;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = this->fields.costumeFilterContainer;
  this->fields.currentFilterContainer = costumeFilterContainer;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)costumeFilterContainer,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v48);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v49);
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
    v54 = (Il2CppObject *)static_fields->__9;
    _9__59_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__59_0,
      v54,
      Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v55 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v55->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__59_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v55->__9__59_0,
      (System_Int32_array **)_9__59_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  if ( !categoryContainerList )
    goto LABEL_30;
  v62 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__59_0,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v62 )
    {
      klass = v62[3].klass;
      if ( klass )
      {
        HIDWORD(klass->_1.byval_arg.data) = 5;
        goto LABEL_29;
      }
    }
LABEL_30:
    sub_B5D69C(useFilterKindList, method);
  }
LABEL_29:
  v64 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
  v66.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v64, v66, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v64, v65);
}


void __fastcall ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  ServantFilterSelectMenu_c *v4; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_42EAD69 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_TypeInfo, v1, v2, v3);
    byte_42EAD69 = 1;
  }
  v4 = ServantFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
    v4 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v4->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_B5D69C(0LL, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0LL);
}


void __fastcall ServantFilterSelectMenu__InitMaterialDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v51; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v52; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__56_0; // x21
  Il2CppObject *v66; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *v74; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v78; // x22
  const MethodInfo *v79; // x1
  System_Array_o *v80; // x0
  __int64 *v81; // x8
  __int64 v82; // x1
  ListViewSort_FilterCategoryKind_array *v83; // x20
  const MethodInfo *v84; // x2

  if ( (byte_42EAD73 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FilterKindList_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v35, v36, v37);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v41,
      v42,
      v43);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, v44, v45, v46);
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v47, v48, v49);
    byte_42EAD73 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v51 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v51 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v51,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v52 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v52 )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v52,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v60);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v61);
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
    v66 = (Il2CppObject *)static_fields->__9;
    _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__56_0,
      v66,
      Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v67 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v67->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__56_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v67->__9__56_0,
      (System_Int32_array **)_9__56_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v74 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__56_0,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v74 )
      goto LABEL_40;
    klass = v74[3].klass;
    if ( !klass )
      goto LABEL_40;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v78, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v79) )
  {
    v80 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v81 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_39;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_40:
    sub_B5D69C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v80 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v81 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_39:
  v82 = *v81;
  v83 = (ListViewSort_FilterCategoryKind_array *)v80;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v80, (System_RuntimeFieldHandle_o)v82, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v83, v84);
}


void __fastcall ServantFilterSelectMenu__InitServantBaseDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v51; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v52; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__55_0; // x21
  Il2CppObject *v66; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *v74; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v78; // x22
  const MethodInfo *v79; // x1
  System_Array_o *v80; // x0
  __int64 *v81; // x8
  __int64 v82; // x1
  ListViewSort_FilterCategoryKind_array *v83; // x20
  const MethodInfo *v84; // x2

  if ( (byte_42EAD72 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FilterKindList_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v35, v36, v37);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D,
      v41,
      v42,
      v43);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__, v44, v45, v46);
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v47, v48, v49);
    byte_42EAD72 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v51 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v51 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v51,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v52 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v52 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v52,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v60);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v61);
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
    v66 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__55_0,
      v66,
      Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v67 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v67->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__55_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v67->__9__55_0,
      (System_Int32_array **)_9__55_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v74 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__55_0,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v74 )
      goto LABEL_39;
    klass = v74[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v78, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v79) )
  {
    v80 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v81 = &Field__PrivateImplementationDetails__81F0FA99C9494E162D2ED37265FE1FEB92973ABC3388BF8235877DD3EEB88B3D;
    goto LABEL_38;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_39:
    sub_B5D69C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v80 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v81 = &Field__PrivateImplementationDetails__258E46E9D23FDED7B0A49DCB264416D2FAFC122B5E5E5772F1A4CC1FD303CBAA;
LABEL_38:
  v82 = *v81;
  v83 = (ListViewSort_FilterCategoryKind_array *)v80;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v80, (System_RuntimeFieldHandle_o)v82, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v83, v84);
}


void __fastcall ServantFilterSelectMenu__InitServantEquipDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v54; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v67; // x23
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x21
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_0; // x22
  Il2CppObject *v71; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_Object_o *v79; // x21
  UnityEngine_Object_c *klass; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v81; // x21
  struct ServantFilterSelectMenu___c_StaticFields *v82; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_1; // x22
  Il2CppObject *v84; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  UnityEngine_Object_o *v92; // x21
  UnityEngine_Object_c *v93; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v94; // x21
  struct ServantFilterSelectMenu___c_StaticFields *v95; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_2; // x22
  Il2CppObject *v97; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  UnityEngine_Object_o *v105; // x21
  UnityEngine_Object_c *v106; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v107; // x20
  struct ServantFilterSelectMenu___c_StaticFields *v108; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__57_3; // x21
  Il2CppObject *v110; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  UnityEngine_Object_o *v118; // x20
  UnityEngine_Object_c *v119; // x8
  System_Array_o *v120; // x20
  const MethodInfo *v121; // x2
  System_RuntimeFieldHandle_o v122; // 0:w1.4

  if ( (byte_42EAD74 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FilterKindList_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v32, v33, v34);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__, v38, v39, v40);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__, v41, v42, v43);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__, v44, v45, v46);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__, v47, v48, v49);
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v50, v51, v52);
    byte_42EAD74 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v54 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v54 )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v54,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipCombineStatusFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipHaveStatusFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_82;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantEquipFilterContainer = this->fields.servantEquipFilterContainer;
  p_currentFilterContainer = &this->fields.currentFilterContainer;
  this->fields.currentFilterContainer = servantEquipFilterContainer;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantEquipFilterContainer,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v63);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v64);
  svtEquipEffectFilterController = this->fields.svtEquipEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v67 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEquipEffectFilterController )
    goto LABEL_82;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v67, 0LL);
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
    v71 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_0,
      v71,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v72 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v72->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v72->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  if ( !categoryContainerList )
    goto LABEL_82;
  v79 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__57_0,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
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
    klass = v79[3].klass;
    if ( !klass )
      goto LABEL_82;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v81 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v82 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v82->__9__57_1;
  if ( !_9__57_1 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v82 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v84 = (Il2CppObject *)v82->__9;
    _9__57_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_1,
      v84,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v85 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v85->__9__57_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v85->__9__57_1,
      (System_Int32_array **)_9__57_1,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  if ( !v81 )
    goto LABEL_82;
  v92 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v81,
                                  (System_Predicate_T__o *)_9__57_1,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v92, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v92 )
      goto LABEL_82;
    v93 = v92[3].klass;
    if ( !v93 )
      goto LABEL_82;
    HIDWORD(v93->_1.byval_arg.data) = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v94 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v95 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v95->__9__57_2;
  if ( !_9__57_2 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v95 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v97 = (Il2CppObject *)v95->__9;
    _9__57_2 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_2,
      v97,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v98 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v98->__9__57_2 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v98->__9__57_2,
      (System_Int32_array **)_9__57_2,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
  }
  if ( !v94 )
    goto LABEL_82;
  v105 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   v94,
                                   (System_Predicate_T__o *)_9__57_2,
                                   (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v105, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v105 )
      goto LABEL_82;
    v106 = v105[3].klass;
    if ( !v106 )
      goto LABEL_82;
    HIDWORD(v106->_1.byval_arg.data) = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_82;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v107 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v108 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__57_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v108->__9__57_3;
  if ( !_9__57_3 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v108 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v110 = (Il2CppObject *)v108->__9;
    _9__57_3 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__57_3,
      v110,
      Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v111 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v111->__9__57_3 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__57_3;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v111->__9__57_3,
      (System_Int32_array **)_9__57_3,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
  }
  if ( !v107 )
LABEL_82:
    sub_B5D69C(useFilterKindList, method);
  v118 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                   v107,
                                   (System_Predicate_T__o *)_9__57_3,
                                   (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v118, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( v118 )
    {
      v119 = v118[3].klass;
      if ( v119 )
      {
        HIDWORD(v119->_1.byval_arg.data) = 4;
        goto LABEL_81;
      }
    }
    goto LABEL_82;
  }
LABEL_81:
  v120 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v122.fields.value = Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v120, v122, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v120, v121);
}


void __fastcall ServantFilterSelectMenu__InitServantExtraClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v51; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_0; // x21
  Il2CppObject *v65; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UnityEngine_Object_o *v73; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v77; // x22
  struct ServantFilterSelectMenu_FilterContainer_o *v78; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v79; // x20
  struct ServantFilterSelectMenu___c_StaticFields *v80; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__52_1; // x21
  Il2CppObject *v82; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UnityEngine_Object_o *v90; // x20
  UnityEngine_Object_c *v91; // x8
  System_Array_o *v92; // x0
  __int64 *v93; // x8
  __int64 v94; // x1
  ListViewSort_FilterCategoryKind_array *v95; // x20
  const MethodInfo *v96; // x2

  if ( (byte_42EAD6F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FilterKindList_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v32, v33, v34);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v38,
      v39,
      v40);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__, v41, v42, v43);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__, v44, v45, v46);
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v47, v48, v49);
    byte_42EAD6F = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v51 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v51 )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v51,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_55;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v59);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v60);
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
    v65 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_0,
      v65,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v66 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v66->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v66->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  if ( !categoryContainerList )
    goto LABEL_55;
  v73 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__52_0,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v73, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v73 )
      goto LABEL_55;
    klass = v73[3].klass;
    if ( !klass )
      goto LABEL_55;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v77 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v77, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_55;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v77, 0LL);
  v78 = this->fields.currentFilterContainer;
  this->fields.isDisplayServantEffect = 1;
  if ( !v78 )
    goto LABEL_55;
  useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  v79 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v78->fields.categoryContainerList;
  if ( (BYTE3(ServantFilterSelectMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo);
    useFilterKindList = ServantFilterSelectMenu___c_TypeInfo;
  }
  v80 = (struct ServantFilterSelectMenu___c_StaticFields *)*((_QWORD *)useFilterKindList + 23);
  _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v80->__9__52_1;
  if ( !_9__52_1 )
  {
    if ( (*((_BYTE *)useFilterKindList + 307) & 4) != 0 && !*((_DWORD *)useFilterKindList + 56) )
    {
      j_il2cpp_runtime_class_init_0(useFilterKindList);
      v80 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v82 = (Il2CppObject *)v80->__9;
    _9__52_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__52_1,
      v82,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v83 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v83->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__52_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v83->__9__52_1,
      (System_Int32_array **)_9__52_1,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  if ( !v79 )
    goto LABEL_55;
  v90 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  v79,
                                  (System_Predicate_T__o *)_9__52_1,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v90, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v90 )
      goto LABEL_55;
    v91 = v90[3].klass;
    if ( !v91 )
      goto LABEL_55;
    HIDWORD(v91->_1.byval_arg.data) = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(this, method) )
  {
    v92 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 8LL);
    v93 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_54;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_55:
    sub_B5D69C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v92 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
  v93 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_54:
  v94 = *v93;
  v95 = (ListViewSort_FilterCategoryKind_array *)v92;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v92, (System_RuntimeFieldHandle_o)v94, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v95, v96);
}


void __fastcall ServantFilterSelectMenu__InitServantListDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v51; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v52; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__54_0; // x21
  Il2CppObject *v66; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *v74; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v78; // x22
  const MethodInfo *v79; // x1
  System_Array_o *v80; // x0
  __int64 *v81; // x8
  __int64 v82; // x1
  ListViewSort_FilterCategoryKind_array *v83; // x20
  const MethodInfo *v84; // x2

  if ( (byte_42EAD71 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FilterKindList_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v35, v36, v37);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA,
      v41,
      v42,
      v43);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__, v44, v45, v46);
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v47, v48, v49);
    byte_42EAD71 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v51 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v51 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v51,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v52 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v52 )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v52,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v60);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v61);
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
    v66 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__54_0,
      v66,
      Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v67 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v67->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__54_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v67->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v74 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__54_0,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v74 )
      goto LABEL_39;
    klass = v74[3].klass;
    if ( !klass )
      goto LABEL_39;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v78, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v79) )
  {
    v80 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
    v81 = &Field__PrivateImplementationDetails__BE15083B99E7919B551D11FA001A68144EC21AEBE4F05DA97EBBCD1CB45FF1CA;
    goto LABEL_38;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_39:
    sub_B5D69C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v80 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 10LL);
  v81 = &Field__PrivateImplementationDetails__A5C540E8FBBADC8B604A55CDC2E84E2DE466FF4124BC2814615E006FD5EA8DEE;
LABEL_38:
  v82 = *v81;
  v83 = (ListViewSort_FilterCategoryKind_array *)v80;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v80, (System_RuntimeFieldHandle_o)v82, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v83, v84);
}


void __fastcall ServantFilterSelectMenu__InitServantNormalDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v51; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v52; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x21
  Il2CppObject *v66; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *v74; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v78; // x22
  const MethodInfo *v79; // x1
  System_Array_o *v80; // x0
  __int64 *v81; // x8
  __int64 v82; // x1
  ListViewSort_FilterCategoryKind_array *v83; // x20
  const MethodInfo *v84; // x2

  if ( (byte_42EAD6E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FilterKindList_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v35, v36, v37);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61,
      v41,
      v42,
      v43);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__, v44, v45, v46);
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v47, v48, v49);
    byte_42EAD6E = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v51 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v51 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v51,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  v52 = this->fields.useFilterKindList;
  useFilterKindList = System_Collections_Generic_List_Voice_BATTLE___ToArray(
                        (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                        (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v52 )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v52,
    (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_38;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v60);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v61);
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
    v66 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v66,
      Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v67 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v67->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__51_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v67->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  if ( !categoryContainerList )
    goto LABEL_38;
  v74 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__51_0,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v74 )
      goto LABEL_38;
    klass = v74[3].klass;
    if ( !klass )
      goto LABEL_38;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_38;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v78, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v79) )
  {
    v80 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 8LL);
    v81 = &Field__PrivateImplementationDetails__ED7C1F4CA95465A951497DFE4F315A56BC9ACB7310243FE0A3C9A2288B86EB61;
    goto LABEL_37;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_38:
    sub_B5D69C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v80 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 9LL);
  v81 = &Field__PrivateImplementationDetails__4E5AAF000CF03CBAECCB3B605419D02828C5D5A887DA82FF7DB6C7C97E376754;
LABEL_37:
  v82 = *v81;
  v83 = (ListViewSort_FilterCategoryKind_array *)v80;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v80, (System_RuntimeFieldHandle_o)v82, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v83, v84);
}


void __fastcall ServantFilterSelectMenu__InitServantNotClassDisp(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  void *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v48; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *categoryContainerList; // x20
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__53_0; // x21
  Il2CppObject *v62; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UnityEngine_Object_o *v70; // x20
  UnityEngine_Object_c *klass; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v74; // x22
  const MethodInfo *v75; // x1
  System_Array_o *v76; // x0
  __int64 *v77; // x8
  __int64 v78; // x1
  ListViewSort_FilterCategoryKind_array *v79; // x20
  const MethodInfo *v80; // x2

  if ( (byte_42EAD70 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FilterKindList_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, v32, v33, v34);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F,
      v38,
      v39,
      v40);
    sub_B5D5C4(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__, v41, v42, v43);
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v44, v45, v46);
    byte_42EAD70 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v48 = this->fields.useFilterKindList;
  useFilterKindList = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v48 )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v48,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_35;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
    39,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  servantFilterConatiner = this->fields.servantFilterConatiner;
  this->fields.currentFilterContainer = servantFilterConatiner;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentFilterContainer,
    (System_Int32_array **)servantFilterConatiner,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(this, 1, v56);
  ServantFilterSelectMenu__InitUseFilterButton(this, 0, v57);
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
    v62 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__53_0,
      v62,
      Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    v63 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v63->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)_9__53_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v63->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  if ( !categoryContainerList )
    goto LABEL_35;
  v70 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)_9__53_0,
                                  (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  useFilterKindList = (void *)UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
  if ( ((unsigned __int8)useFilterKindList & 1) != 0 )
  {
    if ( !v70 )
      goto LABEL_35;
    klass = v70[3].klass;
    if ( !klass )
      goto LABEL_35;
    HIDWORD(klass->_1.byval_arg.data) = 5;
  }
  svtEffectFilterController = this->fields.svtEffectFilterController;
  operationSortInfo = this->fields.operationSortInfo;
  v74 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0LL);
  if ( !svtEffectFilterController )
    goto LABEL_35;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v74, 0LL);
  this->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(this, v75) )
  {
    v76 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 6LL);
    v77 = &Field__PrivateImplementationDetails__7774FF76B1C929F58B61D233A7768BC7E842F6D3B29D90984F68D69C62E8FD2F;
    goto LABEL_34;
  }
  useFilterKindList = this->fields.svtEventBonusFilterController;
  if ( !useFilterKindList )
LABEL_35:
    sub_B5D69C(useFilterKindList, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)useFilterKindList,
    this->fields.operationSortInfo,
    this->fields.eventId,
    0LL);
  v76 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 7LL);
  v77 = &Field__PrivateImplementationDetails__64DC73AEA621E593ECDD3C9B235C7662350D2B7101DE35D73C13D7EBEE92475D;
LABEL_34:
  v78 = *v77;
  v79 = (ListViewSort_FilterCategoryKind_array *)v76;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v76, (System_RuntimeFieldHandle_o)v78, 0LL);
  ServantFilterSelectMenu__InitCategoryContainer(this, v79, v80);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__InitUseFilterButton(
        ServantFilterSelectMenu_o *this,
        bool isSummon,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *filterButtonList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x23
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct ServantFilterSelectMenu_FilterContainer_o *v50; // x8
  bool i; // w20
  _BOOL8 v52; // x0
  __int64 v53; // x1
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  bool v56; // w22
  ListViewSort_o *operationSortInfo; // x23
  ServantFilterButtonControl_OnClickFilterButton_o *v58; // x24
  const MethodInfo *v59; // x6
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42EAD78 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      isSummon,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Predicate_ServantFilterButtonControl__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_OnClickFilterButton__, v33, v34, v35);
    sub_B5D5C4(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__, v36, v37, v38);
    byte_42EAD78 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_16;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)useFilterButtonList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_16;
  filterButtonList = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)currentFilterContainer->fields.filterButtonList;
  v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v42,
    (Il2CppObject *)this,
    Method_ServantFilterSelectMenu__InitUseFilterButton_b__61_0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                filterButtonList,
                (System_Predicate_T__o *)v42,
                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
          (System_Int32_array **)All,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49),
        (v50 = this->fields.currentFilterContainer) == 0LL)
    || (useFilterButtonList = v50->fields.filterButtonList) == 0LL )
  {
LABEL_16:
    sub_B5D69C(useFilterButtonList, isSummon);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  for ( i = isSummon;
        ;
        ServantFilterButtonControl__Init(
          (ServantFilterButtonControl_o *)current,
          operationSortInfo,
          v58,
          v56,
          i,
          0,
          v59) )
  {
    v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v52 )
      break;
    current = v60.fields.current;
    if ( !v60.fields.current )
      sub_B5D69C(v52, v53);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B5D69C(0LL, v53);
    v56 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v60.fields.current[1].monitor,
            (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    operationSortInfo = this->fields.operationSortInfo;
    v58 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B5D694(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v58,
      (Il2CppObject *)this,
      Method_ServantFilterSelectMenu_OnClickFilterButton__,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
        v12 = sub_B5D6C8(svtEquipEffectFilterController);
        sub_B5D668(v12, 0LL);
      }
      if ( !v9[v8] == (*((_BYTE *)&svtEquipEffectFilterController->fields.CommandCodeDisplayGroups + v8) != 0) )
        return 1;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_8;
    }
LABEL_23:
    sub_B5D69C(svtEquipEffectFilterController, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int32_t eventId; // w8
  unsigned int kind; // w8
  bool result; // w0
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v36; // x1
  System_Collections_Generic_HashSet_int__o *v37; // x20
  System_Int32_array *v38; // x22
  EventUpValSetupInfo_o *v39; // x21
  struct System_Int32_array *servantFilterEventIdList; // x8
  EventBonusFilterMaster_o *v41; // x21

  if ( (byte_42EAD6D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12, v13);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v29, v30, v31);
    byte_42EAD6D = 1;
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
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
    Master_WarQuestSelectionMaster = (EventMaster_o *)EventMaster__GetEventValUpEventIdHash(
                                                        Master_WarQuestSelectionMaster,
                                                        0,
                                                        0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_28;
    v37 = (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster;
    if ( SLODWORD(Master_WarQuestSelectionMaster->fields.list) >= 1 )
    {
      if ( this->fields.eventId >= 1 )
      {
        v37 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v37,
          (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
        if ( !v37 )
          goto LABEL_28;
        System_Collections_Generic_HashSet_int___Add(
          v37,
          this->fields.eventId,
          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v38 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v37,
              (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
      v39 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor_24751852(v39, v38, 0, 0, 0, 0LL);
      if ( v39 )
      {
        servantFilterEventIdList = v39->fields.servantFilterEventIdList;
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
        v41 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        Master_WarQuestSelectionMaster = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                                            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( v41 )
        {
          Master_WarQuestSelectionMaster = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                                              v41,
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
      sub_B5D69C(Master_WarQuestSelectionMaster, v36);
    }
    return 0;
  }
  return result;
}


void __fastcall ServantFilterSelectMenu__OnClickCancel(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EAD7E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAD7E = 1;
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
    ServantFilterSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickClear(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v10; // x20
  const MethodInfo *v11; // x1

  if ( (byte_42EAD7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EAD7F = 1;
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
        v10 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)operationSortInfo,
                                                (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v10 )
        {
          ListViewSort__SetFilters(v10, (ListViewSort_FilterKind_array *)operationSortInfo, 0, 0LL);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v8);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v11);
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
    sub_B5D69C(operationSortInfo, v8);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickDecide(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantFilterSelectMenu_o *v4; // x19
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  float value; // s0
  const MethodInfo *v9; // x1
  bool IsChangedStatus; // w1
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_42EAD7D & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAD7D = 1;
  }
  if ( v4->fields.state == 2 )
  {
    currentFilterContainer = v4->fields.currentFilterContainer;
    if ( !currentFilterContainer )
      goto LABEL_14;
    scrollView = currentFilterContainer->fields.scrollView;
    if ( !scrollView )
      goto LABEL_14;
    this = *(ServantFilterSelectMenu_o **)&scrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_14;
    operationSortInfo = v4->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_14;
    operationSortInfo->fields.scrollBarValue = value;
    v4->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (ServantFilterSelectMenu_o *)v4->fields.baseSortInfo;
    if ( !this )
LABEL_14:
      sub_B5D69C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v4->fields.operationSortInfo, 0LL);
    IsChangedStatus = ServantFilterSelectMenu__IsChangedStatus(v4, v9);
    ServantFilterSelectMenu__Callback(v4, IsChangedStatus, v11);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickFilterButton(
        ServantFilterSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_42EAD81 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, filterKind, (_DWORD)method, v3);
    byte_42EAD81 = 1;
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
      sub_B5D69C(0LL, v6);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    ServantFilterSelectMenu__SetButtonSelect(this, v8);
    ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v9);
  }
}


void __fastcall ServantFilterSelectMenu__OnClickInitialize(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x1
  ListViewSort_o *operationSortInfo; // x0
  ListViewSort_o *v10; // x20
  const MethodInfo *v11; // x1

  if ( (byte_42EAD80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EAD80 = 1;
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
        v10 = this->fields.operationSortInfo;
        operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                (System_Collections_Generic_List_Voice_BATTLE__o *)operationSortInfo,
                                                (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v10 )
        {
          ListViewSort__SetFilters(v10, (ListViewSort_FilterKind_array *)operationSortInfo, 1, 0LL);
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
            ServantFilterSelectMenu__SetButtonSelect(this, v8);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v11);
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
    sub_B5D69C(operationSortInfo, v8);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  ServantFilterSelectMenu_o *v54; // x0
  const MethodInfo *v55; // x2
  ServantFilterSelectMenu_c *v56; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v58; // x1
  __int64 v59; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  ListViewSort_o *v68; // x22
  ListViewSort_o *v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *warningLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x3
  int32_t v90; // w2
  ServantFilterSelectMenu_o *v91; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v93; // x0
  FilterKindList_c *v94; // x0
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  System_Action_o *v100; // x20

  if ( (byte_42EAD6B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)sort, listViewManager);
    sub_B5D5C4(&FilterKindList_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ListViewSort_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_ServantFilterSelectMenu_EndOpen__, v23, v24, v25);
    sub_B5D5C4(&ServantFilterSelectMenu_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_12089/*"SERVANT_SORT_RESET"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_11830/*"SERVANT_EQUIP_FILTER_WARNING"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_12091/*"SERVANT_SORT_TITLE2"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, v44, v45, v46);
    byte_42EAD6B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B5D560(
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    else
    {
      v56 = ServantFilterSelectMenu_TypeInfo;
      if ( (BYTE3(ServantFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantFilterSelectMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo);
        v56 = ServantFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v56->static_fields->commonServantSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      v58 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)v58,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_49;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    v61 = ServantFilterSelectMenu__SetKindStatus(v54, sort, v55);
    this->fields.kindStatus = v61;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.kindStatus,
      (System_Int32_array **)v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v68 = this->fields.baseSortInfo;
    v69 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
    ListViewSort___ctor_34029496(v69, v68, 0LL);
    this->fields.operationSortInfo = v69;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    this->fields.listViewManager = listViewManager;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.listViewManager,
      (System_Int32_array **)listViewManager,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
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
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11830/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0LL);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0LL);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, 0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, 0LL);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12089/*"SERVANT_SORT_RESET"*/,
                                                       0LL);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v88);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v88);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v88);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v88);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v88);
                          break;
                        case 5:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v88);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v88);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v88);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v88);
                          break;
                        case 0xC:
                          v90 = 999;
                          v91 = this;
                          ClassExtra1FilterKindList = 0LL;
                          goto LABEL_43;
                        case 0xD:
                          v93 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v93 = FilterKindList_TypeInfo;
                          }
                          v90 = 14;
                          ClassExtra1FilterKindList = v93->static_fields->ClassExtra1FilterKindList;
                          goto LABEL_42;
                        case 0xE:
                          v94 = FilterKindList_TypeInfo;
                          if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !FilterKindList_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
                            v94 = FilterKindList_TypeInfo;
                          }
                          v90 = 15;
                          ClassExtra1FilterKindList = v94->static_fields->ClassExtra2FilterKindList;
LABEL_42:
                          v91 = this;
LABEL_43:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v91, ClassExtra1FilterKindList, v90, v89);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v88);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v95);
                      ServantFilterSelectMenu__SetButtonSelect(this, v96);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v97);
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
                              v100 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                              System_Action___ctor(
                                v100,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0LL);
                              BaseDialog__Open((BaseDialog_o *)this, v100, 0, 0LL);
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
    sub_B5D69C(baseSortInfo, v59);
  }
}


void __fastcall ServantFilterSelectMenu__RefreshFilterClippingPosition(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v7; // x0
  __int64 v8; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *v9; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v10; // x8
  struct UIScrollView_o *v11; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v12; // x8

  if ( (byte_42EAD7A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAD7A = 1;
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
    v7 = (UIScrollView_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v9 = this->fields.currentFilterContainer;
      if ( v9 )
      {
        v7 = v9->fields.scrollView;
        if ( v7 )
        {
          v7 = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v7->klass->vtable._6_get_shouldMoveVertically.method)(
                                   v7,
                                   v7->klass->vtable._7_get_shouldMove.methodPtr);
          if ( ((unsigned __int8)v7 & 1) == 0 )
          {
            v10 = this->fields.currentFilterContainer;
            if ( !v10 )
              goto LABEL_18;
            v11 = v10->fields.scrollView;
            if ( !v11 )
              goto LABEL_18;
            HIDWORD(v11->fields.onDragStarted) = 4;
          }
          v12 = this->fields.currentFilterContainer;
          if ( v12 )
          {
            v7 = v12->fields.scrollView;
            if ( v7 )
            {
              UIScrollView__ResetPosition(v7, 0LL);
              return;
            }
          }
        }
      }
LABEL_18:
      sub_B5D69C(v7, v8);
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
    sub_B5D69C(this, isActive);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFilterSelectMenu__SetButtonEnable(
        ServantFilterSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UICommonButton_o *decideButton; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppClass *klass; // x0
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EAD7C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v12, v13, v14);
    byte_42EAD7C = 1;
  }
  memset(&v21, 0, sizeof(v21));
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
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v16 )
      break;
    if ( !v21.fields.current )
      sub_B5D69C(v16, v17);
    klass = v21.fields.current[2].klass;
    if ( !klass )
      sub_B5D69C(0LL, v17);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)klass, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_B5D69C(decideButton, isEnable);
  ServantEquipEffectFilterController__SetEnableFilterButton(
    (ServantEquipEffectFilterController_o *)decideButton,
    isEnable,
    0LL);
}


void __fastcall ServantFilterSelectMenu__SetButtonSelect(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *useFilterButtonList; // x0
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *current; // x20
  __int64 v24; // x1
  FilterKindList_c *v25; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v27; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v29; // w0
  const MethodInfo *v30; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EAD7B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&FilterKindList_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v17, v18, v19);
    byte_42EAD7B = 1;
  }
  memset(&v33, 0, sizeof(v33));
  useFilterButtonList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    useFilterButtonList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v21 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      sub_B5D69C(v21, v22);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v33.fields.current, v22);
    v25 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v25 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v25->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B5D69C(0LL, v24);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B5D69C(0LL, v27);
      v29 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v29, v30);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_B5D69C(useFilterButtonList, method);
  ServantEquipEffectFilterController__RefreshSelectState(
    (ServantEquipEffectFilterController_o *)useFilterButtonList,
    0LL);
}


System_Boolean_array *__fastcall ServantFilterSelectMenu__SetKindStatus(
        ServantFilterSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  FilterKindList_c *Filter; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *AllFilterKindList; // x8
  int size; // w21
  System_Boolean_array *v17; // x20
  unsigned __int64 v18; // x23
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x25
  __int64 v21; // x0

  if ( (byte_42EAD83 & 1) == 0 )
  {
    sub_B5D5C4(&bool___TypeInfo, (_DWORD)sort, (_DWORD)method, v3);
    sub_B5D5C4(&FilterKindList_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__, v11, v12, v13);
    byte_42EAD83 = 1;
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
  v17 = (System_Boolean_array *)sub_B5D5DC(bool___TypeInfo, (unsigned int)size);
  if ( size >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      Filter = FilterKindList_TypeInfo;
      if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FilterKindList_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
        Filter = FilterKindList_TypeInfo;
      }
      v19 = Filter->static_fields->AllFilterKindList;
      if ( !v19 )
        break;
      if ( v18 >= (unsigned int)v19->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !sort )
        break;
      Filter = (FilterKindList_c *)ListViewSort__GetFilter(sort, v19->fields._items->m_Items[v18 + 1], 0LL);
      if ( !v17 )
        break;
      if ( v18 >= v17->max_length )
      {
        v21 = sub_B5D6C8(Filter);
        sub_B5D668(v21, 0LL);
      }
      v17->m_Items[v18++ + 4] = (unsigned __int8)Filter & 1;
      if ( (__int64)v18 >= size )
        return v17;
    }
LABEL_20:
    sub_B5D69C(Filter, sort);
  }
  return v17;
}


bool __fastcall ServantFilterSelectMenu___InitUseFilterButton_b__61_0(
        ServantFilterSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantFilterSelectMenu_o *v5; // x20

  v5 = this;
  if ( (byte_42EAD87 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_B5D5C4(
                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                          (_DWORD)x,
                                          (_DWORD)method,
                                          v3);
    byte_42EAD87 = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v5->fields.useFilterKindList) == 0LL )
    sub_B5D69C(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall ServantFilterSelectMenu__add_callbackFunc(
        ServantFilterSelectMenu_o *this,
        ServantFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantFilterSelectMenu_o *v11; // x0
  ServantFilterSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EAD67 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EAD67 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFilterSelectMenu_CallbackFunc_c *)v8->klass != ServantFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantFilterSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ServantFilterSelectMenu__get_closeBtnPath(
        ServantFilterSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAD84 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42EAD84 = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
}


void __fastcall ServantFilterSelectMenu__remove_callbackFunc(
        ServantFilterSelectMenu_o *this,
        ServantFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct ServantFilterSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_42EAD68 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EAD68 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFilterSelectMenu_CallbackFunc_c *)v8->klass != ServantFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  ServantFilterSelectMenu__InitLoad(v11);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5D5C & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5D5C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantFilterSelectMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20

  if ( (byte_42E5D5D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v11, v12, v13);
    byte_42E5D5D = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v14;
  sub_B5D560(&this->fields.categoryContainerList);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v15;
  sub_B5D560(&this->fields.filterButtonList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D5B & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu___c_TypeInfo, v1, v2, v3);
    byte_42E5D5B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantFilterSelectMenu___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 12;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_2(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 19;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_3(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 20;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 0;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == 4;
}


bool __fastcall ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, x);
  return *(&container->fields.categoryKind + 1) == x;
}