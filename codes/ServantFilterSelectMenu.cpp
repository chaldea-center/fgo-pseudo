void ServantFilterSelectMenu___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593301D & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&ServantFilterSelectMenu_TypeInfo);
    sub_21FFC50(&StringLiteral_13245/*"ServantFilterSelect1"*/);
    byte_593301D = 1;
  }
  v1 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50784632(v1, (System_String_o *)StringLiteral_13245/*"ServantFilterSelect1"*/, 3, 0, 0);
  ServantFilterSelectMenu_TypeInfo->static_fields->commonServantSortInfo = v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantFilterSelectMenu_TypeInfo->static_fields,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2

  if ( (byte_593301C & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    byte_593301C = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.useFilterKindList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.useFilterButtonList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v17, v18);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantFilterSelectMenu__Callback(ServantFilterSelectMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantFilterSelectMenu_CallbackFunc_o *callbackFunc; // x20

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned int kind; // w8
  UnityEngine_Object_o *listViewManager; // x20
  __int64 v6; // x1
  ListViewManager_o *warningLabel; // x0
  _BOOL4 v8; // w20
  float v9; // s0 OVERLAPPED
  float v10; // s3
  float v11; // s1
  float v12; // s2

  if ( (byte_5933019 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933019 = 1;
  }
  kind = this->fields.kind;
  if ( kind <= 0x10 && ((1 << kind) & 0x10060) != 0 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0, 0) )
    {
      warningLabel = this->fields.listViewManager;
      if ( !warningLabel )
        goto LABEL_20;
      v8 = ListViewManager__GetMatchItemCount(warningLabel, this->fields.operationSortInfo, 0) == 0;
    }
    else
    {
      v8 = 0;
    }
    warningLabel = (ListViewManager_o *)this->fields.warningLabel;
    if ( warningLabel )
    {
      warningLabel = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)warningLabel,
                                            0);
      if ( warningLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)warningLabel, v8, 0);
        warningLabel = (ListViewManager_o *)this->fields.decideButton;
        if ( warningLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)warningLabel, !v8, 0);
          warningLabel = (ListViewManager_o *)this->fields.decideButton;
          if ( warningLabel )
          {
            warningLabel = (ListViewManager_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)warningLabel,
                                                  (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
            if ( warningLabel )
            {
              v9 = 1.0;
              v10 = 1.0;
              if ( v8 )
                v9 = 0.5;
              v11 = v9;
              v12 = v9;
              UIWidget__set_color((UIWidget_o *)warningLabel, *(UnityEngine_Color_o *)&v9, 0);
              return;
            }
          }
        }
      }
    }
LABEL_20:
    sub_21FFECC(warningLabel, v6);
  }
}


void ServantFilterSelectMenu__Close(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFilterSelectMenu__Close_39468060(this, 0, v2);
}


void ServantFilterSelectMenu__Close_39468060(
        ServantFilterSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Action_c *v11; // x0
  System_Action_o *v12; // x20

  if ( (byte_5933001 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_EndClose__);
    byte_5933001 = 1;
  }
  ServantFilterSelectMenu__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = System_Action_TypeInfo;
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_21FFEBC(v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantFilterSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


System_Object_array *ServantFilterSelectMenu__CollectCompsRecursive_object_(
        ServantFilterSelectMenu_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo_3952774 *method)
{
  long double v3; // q0
  const MethodInfo_3952774_RGCTXs *rgctx_data; // x8
  __int64 _0_ServantFilterSelectMenu___c__DisplayClass64_0_T; // x0
  __int64 v8; // x20
  UnityEngine_Component_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object; // x21
  long double v18; // q0
  Il2CppClass *_5_System_Func_T__bool; // x8
  System_Func_object__bool__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2237B54();
    rgctx_data = method->rgctx_data;
  }
  _0_ServantFilterSelectMenu___c__DisplayClass64_0_T = (__int64)rgctx_data->_0_ServantFilterSelectMenu___c__DisplayClass64_0_T_;
  if ( (*((_WORD *)&rgctx_data->_0_ServantFilterSelectMenu___c__DisplayClass64_0_T_->_2.bitflags2 + 1) & 1) == 0 )
    _0_ServantFilterSelectMenu___c__DisplayClass64_0_T = sub_2237AF8(v3);
  v8 = sub_21FFEBC(_0_ServantFilterSelectMenu___c__DisplayClass64_0_T);
  ServantFilterSelectMenu___c__DisplayClass64_0_object____ctor(
    (ServantFilterSelectMenu___c__DisplayClass64_0_T__o *)v8,
    (const MethodInfo_3AD28AC *)method->rgctx_data->_1_ServantFilterSelectMenu___c__DisplayClass64_0_T___ctor);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = parent,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)parent, v11, v12, v13, v14, v15, v16),
        (v9 = *(UnityEngine_Component_o **)(v8 + 16)) == 0) )
  {
    sub_21FFECC(v9, v10);
  }
  ComponentsInChildren_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                                       v9,
                                                                                       1,
                                                                                       (const MethodInfo_37EE304 *)method->rgctx_data->_2_UnityEngine_Component_GetComponentsInChildren_T_);
  _5_System_Func_T__bool = method->rgctx_data->_5_System_Func_T__bool_;
  if ( (*((_WORD *)&_5_System_Func_T__bool->_2.bitflags2 + 1) & 1) == 0 )
    _5_System_Func_T__bool = (Il2CppClass *)sub_2237AF8(v18);
  v20 = (System_Func_object__bool__o *)sub_21FFEBC(_5_System_Func_T__bool);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v8,
    (intptr_t)method->rgctx_data->_4_ServantFilterSelectMenu___c__DisplayClass64_0_T___CollectCompsRecursive_b__0,
    (const MethodInfo_42568AC *)method->rgctx_data->_6_System_Func_T__bool___ctor);
  v21 = System_Linq_Enumerable__Where_object_(
          ComponentsInChildren_object,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_386FFB0 *)method->rgctx_data->_7_System_Linq_Enumerable_Where_T_);
  return System_Linq_Enumerable__ToArray_object_(
           v21,
           (const MethodInfo_3868664 *)method->rgctx_data->_9_System_Linq_Enumerable_ToArray_T_);
}


void ServantFilterSelectMenu__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantFilterSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_5932FFE & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_TypeInfo);
    byte_5932FFE = 1;
  }
  v3 = ServantFilterSelectMenu_TypeInfo;
  if ( !*(&ServantFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo, v1, v2);
    v3 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v3->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_21FFECC(0, v1);
  ListViewSort__DeleteContinueData(commonServantSortInfo, 0);
}


void ServantFilterSelectMenu__EndClose(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void ServantFilterSelectMenu__EndOpen(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
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
  __int64 Int32Enum; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_IEnumerable_TSource__o *categoryContainerList; // x22
  ServantFilterSelectMenu___c_c *v17; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__65_0; // x23
  Il2CppObject *v20; // x24
  struct ServantFilterSelectMenu___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x22
  System_Func_T__TResult__o *v29; // x23
  struct ServantFilterSelectMenu_FilterContainer_o *v30; // x8
  struct UnityEngine_Vector3_StaticFields *v31; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t current; // w1
  UnityEngine_Component_o **v45; // x21
  System_Int32Enum_array *v46; // x23
  System_Func_T__TResult__o *v47; // x24
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  bool v50; // w8
  UnityEngine_Component_o *v51; // x0
  __int64 v52; // x1
  UnityEngine_Object_o *gameObject; // x0
  __int64 v54; // x1
  System_String_o *name; // x0
  __int64 v56; // x1
  __int64 v57; // x1
  UnityEngine_Object_o *v58; // x0
  __int64 v59; // x1
  System_String_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x1
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-A0h] BYREF
  int v67; // [xsp+4Ch] [xbp-74h]
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5933010 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Last_ListViewSort_FilterCategoryKind___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_21FFC50(&System_Func_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind__TypeInfo);
    sub_21FFC50(&System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitCategoryContainer_b__65_0__);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__DisplayClass65_0__InitCategoryContainer_b__1__);
    sub_21FFC50(&ServantFilterSelectMenu___c__DisplayClass65_0_TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__DisplayClass65_1__InitCategoryContainer_b__2__);
    sub_21FFC50(&ServantFilterSelectMenu___c__DisplayClass65_1_TypeInfo);
    sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    sub_21FFC50(&StringLiteral_13236/*"ServantCombineOld"*/);
    sub_21FFC50(&StringLiteral_13235/*"ServantCombine"*/);
    byte_5933010 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v5 = sub_21FFEBC(ServantFilterSelectMenu___c__DisplayClass65_0_TypeInfo);
  ServantFilterSelectMenu___c__DisplayClass65_0___ctor((ServantFilterSelectMenu___c__DisplayClass65_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 16) = categoryKindKist;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)categoryKindKist, v8, v9, v10, v11, v12, v13);
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_47;
  categoryContainerList = (System_Collections_Generic_IEnumerable_TSource__o *)currentFilterContainer->fields.categoryContainerList;
  v17 = ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, v7, v14);
    v17 = ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__65_0 = (System_Func_T__TResult__o *)static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v7, v14);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__65_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind__TypeInfo);
    System_Func_object__Int32Enum____ctor(
      _9__65_0,
      v20,
      Method_ServantFilterSelectMenu___c__InitCategoryContainer_b__65_0__,
      0);
    v21 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v21->__9__65_0 = (struct System_Func_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind__o *)_9__65_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__65_0, (int32_t)_9__65_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__Int32Enum_(
                                                               categoryContainerList,
                                                               (System_Func_TSource__TResult__o *)_9__65_0,
                                                               (const MethodInfo_385D6B8 *)Method_System_Linq_Enumerable_Select_ServantFilterCategoryContainer__ListViewSort_FilterCategoryKind___);
  v29 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v29,
    (Il2CppObject *)v5,
    Method_ServantFilterSelectMenu___c__DisplayClass65_0__InitCategoryContainer_b__1__,
    0);
  Int32Enum = System_Linq_Enumerable__Last_Int32Enum_(
                v28,
                (System_Func_TSource__bool__o *)v29,
                (const MethodInfo_38512A4 *)Method_System_Linq_Enumerable_Last_ListViewSort_FilterCategoryKind___);
  v67 = Int32Enum;
  if ( !byte_5931940 )
  {
    Int32Enum = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v30 = this->fields.currentFilterContainer;
  if ( !v30 || (Int32Enum = (__int64)v30->fields.categoryContainerList) == 0 )
LABEL_47:
    sub_21FFECC(Int32Enum, v7);
  v31 = UnityEngine_Vector3_TypeInfo->static_fields;
  x = v31->zeroVector.fields.x;
  y = v31->zeroVector.fields.y;
  z = v31->zeroVector.fields.z;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_object__o *)Int32Enum,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v66 = v65;
  v65.fields._list = 0;
  *(_QWORD *)&v65.fields._index = &v66;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    v35 = sub_21FFEBC(ServantFilterSelectMenu___c__DisplayClass65_1_TypeInfo);
    ServantFilterSelectMenu___c__DisplayClass65_1___ctor((ServantFilterSelectMenu___c__DisplayClass65_1_o *)v35, 0);
    if ( !v35 )
      sub_21FFECC(v36, v37);
    current = (int32_t)v66.fields._current;
    *(_QWORD *)(v35 + 16) = v66.fields._current;
    v45 = (UnityEngine_Component_o **)(v35 + 16);
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 16), current, v38, v39, v40, v41, v42, v43);
    v46 = *(System_Int32Enum_array **)(v5 + 16);
    v47 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_ListViewSort_FilterCategoryKind__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(
      v47,
      (Il2CppObject *)v35,
      Method_ServantFilterSelectMenu___c__DisplayClass65_1__InitCategoryContainer_b__2__,
      0);
    v50 = BasicHelper__Any_Int32Enum__58575096(
            v46,
            (System_Func_T__bool__o *)v47,
            (const MethodInfo_37DC8F8 *)Method_BasicHelper_Any_ListViewSort_FilterCategoryKind___);
    v51 = *(UnityEngine_Component_o **)(v35 + 16);
    if ( v50 )
    {
      if ( !v51 )
        sub_21FFECC(0, v48);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v51, 1, v49);
      if ( !ConstantMaster__IsFlag20260802(0) )
      {
        if ( !*v45 )
          sub_21FFECC(0, v52);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v45, 0);
        if ( !gameObject )
          sub_21FFECC(0, v54);
        name = UnityEngine_Object__get_name(gameObject, 0);
        if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_13235/*"ServantCombine"*/, 0) )
        {
          v51 = *v45;
          if ( !*v45 )
            sub_21FFECC(0, v56);
          goto LABEL_33;
        }
      }
      if ( ConstantMaster__IsFlag20260802(0) )
      {
        if ( !*v45 )
          sub_21FFECC(0, v57);
        v58 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v45, 0);
        if ( !v58 )
          sub_21FFECC(0, v59);
        v60 = UnityEngine_Object__get_name(v58, 0);
        if ( System_String__op_Equality(v60, (System_String_o *)StringLiteral_13236/*"ServantCombineOld"*/, 0) )
        {
          v51 = *v45;
          if ( !*v45 )
            sub_21FFECC(0, v57);
          goto LABEL_33;
        }
      }
      if ( !*v45 )
        sub_21FFECC(0, v57);
      v61 = UnityEngine_Component__get_gameObject(*v45, 0);
      v68.fields.x = x;
      v68.fields.y = y;
      v68.fields.z = z;
      GameObjectExtensions__SetLocalPosition(v61, v68, 0);
      if ( !*v45 )
        sub_21FFECC(0, v62);
      ServantFilterCategoryContainer__Layout(
        (ServantFilterCategoryContainer_o *)*v45,
        HIDWORD((*v45)[2].monitor) == v67,
        v63);
      if ( !*v45 )
        sub_21FFECC(0, v64);
      BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)*v45, v64);
      x = BottomPosition.fields.x;
      y = BottomPosition.fields.y;
      z = BottomPosition.fields.z;
    }
    else
    {
      if ( !v51 )
        sub_21FFECC(0, v48);
LABEL_33:
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v51, 0, v49);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
}


void ServantFilterSelectMenu__InitCommandCodeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  int v7; // w9
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v15; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *commandCodeFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  ServantEquipEffectFilterController_o *commandCodeEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x4
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  void *servantFilterConatiner; // x8
  System_Predicate_object__o *v28; // x21
  Il2CppObject *v29; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Object_o *v39; // x20
  _DWORD *monitor; // x8
  System_Array_o *v41; // x0
  System_RuntimeFieldHandle_o v42; // x1
  ListViewSort_FilterCategoryKind_array *v43; // x20
  const MethodInfo *v44; // x2

  v3 = this;
  if ( (byte_593300A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_21FFC50(&Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_593300A = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_27;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  v7 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_27;
  m_CachedPtr = this->fields.m_CachedPtr;
  v15 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_27;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  commandCodeFilterContainer = v3->fields.commandCodeFilterContainer;
  v3->fields.currentFilterContainer = commandCodeFilterContainer;
  p_currentFilterContainer = &v3->fields.currentFilterContainer;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)commandCodeFilterContainer,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v19);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v20);
  commandCodeEffectFilterController = v3->fields.commandCodeEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !commandCodeEffectFilterController )
    goto LABEL_27;
  ServantEquipEffectFilterController__Init(commandCodeEffectFilterController, operationSortInfo, 2, v23, v24);
  if ( !*p_currentFilterContainer )
    goto LABEL_27;
  categoryContainerList = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v25);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  servantFilterConatiner = this->fields.servantFilterConatiner;
  v28 = (System_Predicate_object__o *)*((_QWORD *)servantFilterConatiner + 12);
  if ( !v28 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v25);
      servantFilterConatiner = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v29 = *(Il2CppObject **)servantFilterConatiner;
    v28 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v28, v29, Method_ServantFilterSelectMenu___c__InitCommandCodeDisp_b__58_0__, 0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v28;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__58_0,
      (int32_t)v28,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !categoryContainerList )
    goto LABEL_27;
  v39 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v28,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v39, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v39 )
    {
      monitor = v39[3].monitor;
      if ( monitor )
      {
        monitor[11] = 5;
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_21FFECC(this, method);
  }
LABEL_26:
  v41 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, 4);
  v42.fields.value = Field__PrivateImplementationDetails__44C93D4CE916E1F1370089EFB697AAFABCB63CFF5367F62F96DC74BAF3C6B87A;
  v43 = (ListViewSort_FilterCategoryKind_array *)v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v41, v42, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v43, v44);
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterSelectMenu__InitCommonSummonDisp(
        ServantFilterSelectMenu_o *this,
        System_Collections_Generic_List_ListViewSort_FilterKind__o *filterKind,
        int32_t categoryKind,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v6; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x22
  FilterKindList_c *v8; // x0
  int v9; // w8
  int v10; // w9
  __int64 v11; // x2
  System_Collections_Generic_List_T__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  System_Array_o *v25; // x0
  System_RuntimeFieldHandle_o v26; // x1
  System_Collections_Generic_IEnumerable_T__o *v27; // x23
  int m_CancellationTokenSource; // w8
  Il2CppClass *v29; // x8
  System_Array_o *v30; // x0
  System_RuntimeFieldHandle_o v31; // x1
  System_Collections_Generic_IEnumerable_T__o *v32; // x21
  System_Collections_Generic_List_T__o *v33; // x22
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x23
  System_Action_o *v39; // x24
  const MethodInfo *v40; // x4
  const MethodInfo_4435B5C *v41; // x2
  ListViewSort_FilterCategoryKind_array *v42; // x1
  const MethodInfo *v43; // x2

  v6 = this;
  if ( (byte_593300C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_21FFC50(&Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB);
    byte_593300C = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_32;
  v8 = FilterKindList_TypeInfo;
  v9 = useFilterKindList->fields._version + 1;
  v10 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v9;
  if ( !v10 )
  {
    j_il2cpp_runtime_class_init_0(v8, filterKind, *(_QWORD *)&categoryKind);
    v8 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v8->static_fields->BonusSelectCollectionStateFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantHaveFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSummonCategoryFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  if ( filterKind )
  {
    this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
    if ( !this )
      goto LABEL_32;
    System_Collections_Generic_List_Int32Enum___AddRange(
      (System_Collections_Generic_List_T__o *)this,
      (System_Collections_Generic_IEnumerable_T__o *)filterKind,
      (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  }
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo;
  v12 = (System_Collections_Generic_List_T__o *)v6->fields.useFilterKindList;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, filterKind, v11);
  if ( !v12 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v6->fields.useFilterKindList;
  if ( !this )
    goto LABEL_32;
  m_CachedPtr = this->fields.m_CachedPtr;
  v20 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_32;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantFilterConatiner = v6->fields.servantFilterConatiner;
  v6->fields.currentFilterContainer = servantFilterConatiner;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v6, 1, v23);
  ServantFilterSelectMenu__InitUseFilterButton(v6, 1, v24);
  v25 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, 4);
  v26.fields.value = Field__PrivateImplementationDetails__9CCBF0811DD48B7157D41C61496D2A61F30060848E27E63BD2374BA527C69BFB;
  v27 = (System_Collections_Generic_IEnumerable_T__o *)v25;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v25, v26, 0);
  this = (ServantFilterSelectMenu_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, 2);
  if ( !this )
    goto LABEL_32;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource || (LODWORD(this->fields.basePanel) = 1, m_CancellationTokenSource == 1) )
    sub_21FFED4(this);
  v29 = ListViewSort_FilterCategoryKind___TypeInfo;
  HIDWORD(this->fields.basePanel) = 2;
  v30 = (System_Array_o *)sub_21FFD10(v29, 3);
  v31.fields.value = Field__PrivateImplementationDetails__166EEF7450ECE01096094EC62C397B51B03467A83F319F7346716F64D0945C44;
  v32 = (System_Collections_Generic_IEnumerable_T__o *)v30;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v30, v31, 0);
  v33 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_ListViewSort_FilterCategoryKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v33,
    (const MethodInfo_44350C0 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind___ctor__);
  if ( !v33 )
    goto LABEL_32;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v33,
    v27,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__);
  if ( categoryKind != 999 )
  {
    items = v33->fields._items;
    v35 = Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__Add__;
    ++v33->fields._version;
    if ( !items )
      goto LABEL_32;
    size = v33->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v33,
        categoryKind,
        *(const MethodInfo_4435950 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v33->fields._size = size + 1;
      *((_DWORD *)items->m_Items + size) = categoryKind;
    }
  }
  svtEffectFilterController = v6->fields.svtEffectFilterController;
  operationSortInfo = v6->fields.operationSortInfo;
  v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v6, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
LABEL_32:
    sub_21FFECC(this, filterKind);
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v39, v40);
  v41 = (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__AddRange__;
  v6->fields.isDisplayServantEffect = 1;
  System_Collections_Generic_List_Int32Enum___AddRange(v33, v32, v41);
  v42 = (ListViewSort_FilterCategoryKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                   v33,
                                                   (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterCategoryKind__ToArray__);
  ServantFilterSelectMenu__InitCategoryContainer(v6, v42, v43);
}


void ServantFilterSelectMenu__InitCostumeDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  int v7; // w9
  System_Collections_Generic_List_T__o *v8; // x20
  struct ServantFilterSelectMenu_FilterContainer_o *costumeFilterContainer; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  __int64 v18; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  void *servantFilterConatiner; // x8
  System_Predicate_object__o *v22; // x21
  Il2CppObject *v23; // x22
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *v33; // x20
  _DWORD *monitor; // x8
  System_Array_o *v35; // x0
  System_RuntimeFieldHandle_o v36; // x1
  ListViewSort_FilterCategoryKind_array *v37; // x20
  const MethodInfo *v38; // x2

  v3 = this;
  if ( (byte_593300B & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_593300B = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_25;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  v7 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_25;
  v8 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v8 )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_25;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantCostumeFilterKind,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  costumeFilterContainer = v3->fields.costumeFilterContainer;
  v3->fields.currentFilterContainer = costumeFilterContainer;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)costumeFilterContainer,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v16);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v17);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_25;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v18);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  servantFilterConatiner = this->fields.servantFilterConatiner;
  v22 = (System_Predicate_object__o *)*((_QWORD *)servantFilterConatiner + 13);
  if ( !v22 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v18);
      servantFilterConatiner = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v23 = *(Il2CppObject **)servantFilterConatiner;
    v22 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v22, v23, Method_ServantFilterSelectMenu___c__InitCostumeDisp_b__59_0__, 0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__59_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v22;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__59_0,
      (int32_t)v22,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !categoryContainerList )
    goto LABEL_25;
  v33 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v22,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v33 )
    {
      monitor = v33[3].monitor;
      if ( monitor )
      {
        monitor[11] = 5;
        goto LABEL_24;
      }
    }
LABEL_25:
    sub_21FFECC(this, method);
  }
LABEL_24:
  v35 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, 5);
  v36.fields.value = Field__PrivateImplementationDetails__770DF87A652F7F22637CFEFB536B97A630566DB6D7CB4FAB152C90E63DAB1A2D;
  v37 = (ListViewSort_FilterCategoryKind_array *)v35;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v35, v36, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v37, v38);
}


void ServantFilterSelectMenu__InitExchangeSvtCoinDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2

  v3 = this;
  if ( (byte_593300D & 1) == 0 )
  {
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_593300D = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_10;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  this = (ServantFilterSelectMenu_o *)v5->static_fields->ClassFilterKindListForExchangeSvtCoin;
  if ( !this )
    goto LABEL_10;
  v7 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                        (System_Collections_Generic_List_T__o *)this,
                                                        (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    v7,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v15);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v16);
  this = (ServantFilterSelectMenu_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, 2);
  if ( !this )
LABEL_10:
    sub_21FFECC(this, method);
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_21FFED4(this);
  LODWORD(this->fields.basePanel) = 9;
  ServantFilterSelectMenu__InitCategoryContainer(v3, (ListViewSort_FilterCategoryKind_array *)this, v17);
}


void ServantFilterSelectMenu__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantFilterSelectMenu_c *v3; // x0
  ListViewSort_o *commonServantSortInfo; // x0

  if ( (byte_5932FFF & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_TypeInfo);
    byte_5932FFF = 1;
  }
  v3 = ServantFilterSelectMenu_TypeInfo;
  if ( !*(&ServantFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo, v1, v2);
    v3 = ServantFilterSelectMenu_TypeInfo;
  }
  commonServantSortInfo = v3->static_fields->commonServantSortInfo;
  if ( !commonServantSortInfo )
    sub_21FFECC(0, v1);
  ListViewSort__InitLoad(commonServantSortInfo, 0);
}


void ServantFilterSelectMenu__InitMaterialDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  int v7; // w9
  System_Collections_Generic_List_T__o *v8; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  void *static_fields; // x8
  System_Predicate_object__o *v25; // x21
  Il2CppObject *v26; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *v36; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  intptr_t *v45; // x20
  System_Array_o *v46; // x0
  System_RuntimeFieldHandle_o v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  v3 = this;
  if ( (byte_5933008 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_21FFC50(&Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15);
    sub_21FFC50(&Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_5933008 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_41;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  v7 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_41;
  v8 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v8 )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineMaterialFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  m_CachedPtr = this->fields.m_CachedPtr;
  v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_41;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
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
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_41;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v19);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v20);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_41;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v21);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = this->fields.servantFilterConatiner;
  v25 = (System_Predicate_object__o *)*((_QWORD *)static_fields + 7);
  if ( !v25 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v21);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v26 = *(Il2CppObject **)static_fields;
    v25 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v25, v26, Method_ServantFilterSelectMenu___c__InitMaterialDisp_b__56_0__, 0);
    v27 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v27->__9__56_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v25;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__56_0, (int32_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !categoryContainerList )
    goto LABEL_41;
  v36 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v25,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v36, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_41;
    monitor = v36[3].monitor;
    if ( !monitor )
      goto LABEL_41;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_41;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v40, v41);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v42) )
  {
    v44 = 12;
    v45 = &Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81;
    goto LABEL_40;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_41:
    sub_21FFECC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v43);
  v44 = 13;
  v45 = &Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15;
LABEL_40:
  v46 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, v44);
  v47.fields.value = *v45;
  v48 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v46, v47, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v48, v49);
}


void ServantFilterSelectMenu__InitServantBaseDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  int v7; // w9
  System_Collections_Generic_List_T__o *v8; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  void *static_fields; // x8
  System_Predicate_object__o *v25; // x21
  Il2CppObject *v26; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *v36; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  intptr_t *v45; // x20
  System_Array_o *v46; // x0
  System_RuntimeFieldHandle_o v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  v3 = this;
  if ( (byte_5933007 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_21FFC50(&Field__PrivateImplementationDetails__3853BEE9137B5366F0BE6423E290AC174C6602DC3CD187BBE90F25DFFA619D07);
    sub_21FFC50(&Field__PrivateImplementationDetails__DE57747DC3C53A2E8C2F04C11F6425A4F53EEED1C4B518D0A0AEF2F9E6E6AADF);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_5933007 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  v7 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_40;
  v8 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v8 )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CombineBaseServantFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  m_CachedPtr = this->fields.m_CachedPtr;
  v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_40;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
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
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v19);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v20);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_40;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v21);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = this->fields.servantFilterConatiner;
  v25 = (System_Predicate_object__o *)*((_QWORD *)static_fields + 6);
  if ( !v25 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v21);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v26 = *(Il2CppObject **)static_fields;
    v25 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v25, v26, Method_ServantFilterSelectMenu___c__InitServantBaseDisp_b__55_0__, 0);
    v27 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v27->__9__55_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v25;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__55_0, (int32_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v36 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v25,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v36, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_40;
    monitor = v36[3].monitor;
    if ( !monitor )
      goto LABEL_40;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v40, v41);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v42) )
  {
    v44 = 12;
    v45 = &Field__PrivateImplementationDetails__DE57747DC3C53A2E8C2F04C11F6425A4F53EEED1C4B518D0A0AEF2F9E6E6AADF;
    goto LABEL_39;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_40:
    sub_21FFECC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v43);
  v44 = 13;
  v45 = &Field__PrivateImplementationDetails__3853BEE9137B5366F0BE6423E290AC174C6602DC3CD187BBE90F25DFFA619D07;
LABEL_39:
  v46 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, v44);
  v47.fields.value = *v45;
  v48 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v46, v47, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v48, v49);
}


void ServantFilterSelectMenu__InitServantEquipDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  int v7; // w9
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v15; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantEquipFilterContainer; // x1
  struct ServantFilterSelectMenu_FilterContainer_o **p_currentFilterContainer; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  ServantEquipEffectFilterController_o *svtEquipEffectFilterController; // x21
  ListViewSort_o *operationSortInfo; // x22
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x4
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *categoryContainerList; // x21
  void *servantFilterConatiner; // x8
  System_Predicate_object__o *v28; // x22
  Il2CppObject *v29; // x23
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Object_o *v39; // x21
  __int64 v40; // x2
  _DWORD *monitor; // x8
  System_Collections_Generic_List_object__o *v42; // x21
  void *v43; // x8
  System_Predicate_object__o *v44; // x22
  Il2CppObject *v45; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  __int64 v54; // x2
  UnityEngine_Object_o *v55; // x21
  __int64 v56; // x2
  _DWORD *v57; // x8
  System_Collections_Generic_List_object__o *v58; // x21
  void *v59; // x8
  System_Predicate_object__o *v60; // x22
  Il2CppObject *v61; // x23
  struct ServantFilterSelectMenu___c_StaticFields *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x1
  __int64 v70; // x2
  UnityEngine_Object_o *v71; // x21
  __int64 v72; // x2
  _DWORD *v73; // x8
  System_Collections_Generic_List_object__o *v74; // x20
  void *v75; // x8
  System_Predicate_object__o *v76; // x21
  Il2CppObject *v77; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v78; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  __int64 v85; // x1
  __int64 v86; // x2
  UnityEngine_Object_o *v87; // x20
  _DWORD *v88; // x8
  System_Array_o *v89; // x0
  System_RuntimeFieldHandle_o v90; // x1
  ListViewSort_FilterCategoryKind_array *v91; // x20
  const MethodInfo *v92; // x2

  v3 = this;
  if ( (byte_5933009 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_21FFC50(&Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_5933009 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_72;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  v7 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipCombineStatusFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEquipHaveStatusFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_72;
  m_CachedPtr = this->fields.m_CachedPtr;
  v15 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_72;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = 39;
  }
  servantEquipFilterContainer = v3->fields.servantEquipFilterContainer;
  v3->fields.currentFilterContainer = servantEquipFilterContainer;
  p_currentFilterContainer = &v3->fields.currentFilterContainer;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)servantEquipFilterContainer,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v19);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v20);
  svtEquipEffectFilterController = v3->fields.svtEquipEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEquipEffectFilterController )
    goto LABEL_72;
  ServantEquipEffectFilterController__Init(svtEquipEffectFilterController, operationSortInfo, 1, v23, v24);
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  categoryContainerList = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v25);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  servantFilterConatiner = this->fields.servantFilterConatiner;
  v28 = (System_Predicate_object__o *)*((_QWORD *)servantFilterConatiner + 8);
  if ( !v28 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v25);
      servantFilterConatiner = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v29 = *(Il2CppObject **)servantFilterConatiner;
    v28 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v28, v29, Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_0__, 0);
    static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v28;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__57_0,
      (int32_t)v28,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !categoryContainerList )
    goto LABEL_72;
  v39 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v28,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v39, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v39 )
      goto LABEL_72;
    monitor = v39[3].monitor;
    if ( !monitor )
      goto LABEL_72;
    monitor[11] = 5;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v42 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v40);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v43 = this->fields.servantFilterConatiner;
  v44 = (System_Predicate_object__o *)*((_QWORD *)v43 + 9);
  if ( !v44 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v40);
      v43 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v45 = *(Il2CppObject **)v43;
    v44 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v44, v45, Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_1__, 0);
    v46 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v46->__9__57_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v44;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v46->__9__57_1, (int32_t)v44, v47, v48, v49, v50, v51, v52);
  }
  if ( !v42 )
    goto LABEL_72;
  v55 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v42,
                                  (System_Predicate_T__o *)v44,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53, v54);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v55, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v55 )
      goto LABEL_72;
    v57 = v55[3].monitor;
    if ( !v57 )
      goto LABEL_72;
    v57[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v58 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v56);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v59 = this->fields.servantFilterConatiner;
  v60 = (System_Predicate_object__o *)*((_QWORD *)v59 + 10);
  if ( !v60 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v56);
      v59 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v61 = *(Il2CppObject **)v59;
    v60 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v60, v61, Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_2__, 0);
    v62 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v62->__9__57_2 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v60;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v62->__9__57_2, (int32_t)v60, v63, v64, v65, v66, v67, v68);
  }
  if ( !v58 )
    goto LABEL_72;
  v71 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v58,
                                  (System_Predicate_T__o *)v60,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69, v70);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v71, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v71 )
      goto LABEL_72;
    v73 = v71[3].monitor;
    if ( !v73 )
      goto LABEL_72;
    v73[11] = 4;
  }
  if ( !*p_currentFilterContainer )
    goto LABEL_72;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v74 = (System_Collections_Generic_List_object__o *)(*p_currentFilterContainer)->fields.categoryContainerList;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v72);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v75 = this->fields.servantFilterConatiner;
  v76 = (System_Predicate_object__o *)*((_QWORD *)v75 + 11);
  if ( !v76 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v72);
      v75 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v77 = *(Il2CppObject **)v75;
    v76 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v76, v77, Method_ServantFilterSelectMenu___c__InitServantEquipDisp_b__57_3__, 0);
    v78 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v78->__9__57_3 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v76;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v78->__9__57_3, (int32_t)v76, v79, v80, v81, v82, v83, v84);
  }
  if ( !v74 )
LABEL_72:
    sub_21FFECC(this, method);
  v87 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v74,
                                  (System_Predicate_T__o *)v76,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v85, v86);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v87, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v87 )
    {
      v88 = v87[3].monitor;
      if ( v88 )
      {
        v88[11] = 4;
        goto LABEL_71;
      }
    }
    goto LABEL_72;
  }
LABEL_71:
  v89 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, 7);
  v90.fields.value = Field__PrivateImplementationDetails__434163685DA7E7D456438B1633B30826A997E32FEB48581A9D2141DD84440456;
  v91 = (ListViewSort_FilterCategoryKind_array *)v89;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v89, v90, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v91, v92);
}


void ServantFilterSelectMenu__InitServantExtraClassDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  int v7; // w9
  intptr_t m_CachedPtr; // x8
  _QWORD *v9; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  __int64 v20; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  void *static_fields; // x8
  System_Predicate_object__o *v24; // x21
  Il2CppObject *v25; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *v35; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x4
  __int64 v41; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x20
  void *v44; // x8
  System_Predicate_object__o *v45; // x21
  Il2CppObject *v46; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *v56; // x20
  _DWORD *v57; // x8
  const MethodInfo *v58; // x3
  __int64 v59; // x1
  intptr_t *v60; // x20
  System_Array_o *v61; // x0
  System_RuntimeFieldHandle_o v62; // x1
  ListViewSort_FilterCategoryKind_array *v63; // x20
  const MethodInfo *v64; // x2

  v3 = this;
  if ( (byte_5933004 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_21FFC50(&Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560);
    sub_21FFC50(&Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_5933004 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_53;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  v7 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupExtraFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra1InShielderFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassExtra2FilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  m_CachedPtr = this->fields.m_CachedPtr;
  v9 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_53;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
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
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_53;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v18);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v19);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_53;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v20);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = this->fields.servantFilterConatiner;
  v24 = (System_Predicate_object__o *)*((_QWORD *)static_fields + 2);
  if ( !v24 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v20);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v25 = *(Il2CppObject **)static_fields;
    v24 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      v24,
      v25,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_0__,
      0);
    v26 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v26->__9__52_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v24;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__52_0, (int32_t)v24, v27, v28, v29, v30, v31, v32);
  }
  if ( !categoryContainerList )
    goto LABEL_53;
  v35 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v24,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v35, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_53;
    monitor = v35[3].monitor;
    if ( !monitor )
      goto LABEL_53;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_53;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v39, v40);
  v42 = v3->fields.currentFilterContainer;
  v3->fields.isDisplayServantEffect = 1;
  if ( !v42 )
    goto LABEL_53;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  v43 = (System_Collections_Generic_List_object__o *)v42->fields.categoryContainerList;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v41);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  v44 = this->fields.servantFilterConatiner;
  v45 = (System_Predicate_object__o *)*((_QWORD *)v44 + 3);
  if ( !v45 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v41);
      v44 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v46 = *(Il2CppObject **)v44;
    v45 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(
      v45,
      v46,
      Method_ServantFilterSelectMenu___c__InitServantExtraClassDisp_b__52_1__,
      0);
    v47 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v47->__9__52_1 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v45;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v47->__9__52_1, (int32_t)v45, v48, v49, v50, v51, v52, v53);
  }
  if ( !v43 )
    goto LABEL_53;
  v56 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  v43,
                                  (System_Predicate_T__o *)v45,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v56, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v56 )
      goto LABEL_53;
    v57 = v56[3].monitor;
    if ( !v57 )
      goto LABEL_53;
    v57[11] = 4;
  }
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, method) )
  {
    v59 = 11;
    v60 = &Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560;
    goto LABEL_52;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_53:
    sub_21FFECC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v58);
  v59 = 12;
  v60 = &Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1;
LABEL_52:
  v61 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, v59);
  v62.fields.value = *v60;
  v63 = (ListViewSort_FilterCategoryKind_array *)v61;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v61, v62, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v63, v64);
}


void ServantFilterSelectMenu__InitServantListDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  int v7; // w9
  System_Collections_Generic_List_T__o *v8; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  void *static_fields; // x8
  System_Predicate_object__o *v25; // x21
  Il2CppObject *v26; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *v36; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  intptr_t *v45; // x20
  System_Array_o *v46; // x0
  System_RuntimeFieldHandle_o v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  v3 = this;
  if ( (byte_5933006 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_21FFC50(&Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15);
    sub_21FFC50(&Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_5933006 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_40;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  v7 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_40;
  v8 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v8 )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  m_CachedPtr = this->fields.m_CachedPtr;
  v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_40;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
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
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_40;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v19);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v20);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_40;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v21);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = this->fields.servantFilterConatiner;
  v25 = (System_Predicate_object__o *)*((_QWORD *)static_fields + 5);
  if ( !v25 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v21);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v26 = *(Il2CppObject **)static_fields;
    v25 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v25, v26, Method_ServantFilterSelectMenu___c__InitServantListDisp_b__54_0__, 0);
    v27 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v27->__9__54_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v25;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__54_0, (int32_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !categoryContainerList )
    goto LABEL_40;
  v36 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v25,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v36, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_40;
    monitor = v36[3].monitor;
    if ( !monitor )
      goto LABEL_40;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_40;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v40, v41);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v42) )
  {
    v44 = 12;
    v45 = &Field__PrivateImplementationDetails__94EF0493E95896C41766380F643579C2C64C6A67545E8C55D29BE83772D8FE81;
    goto LABEL_39;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_40:
    sub_21FFECC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v43);
  v44 = 13;
  v45 = &Field__PrivateImplementationDetails__62003B2723002D196000147E31C7396E8E2F15BA0F1CA37B1263402D7652EF15;
LABEL_39:
  v46 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, v44);
  v47.fields.value = *v45;
  v48 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v46, v47, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v48, v49);
}


void ServantFilterSelectMenu__InitServantNormalDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  int v7; // w9
  System_Collections_Generic_List_T__o *v8; // x20
  intptr_t m_CachedPtr; // x8
  _QWORD *v10; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  void *static_fields; // x8
  System_Predicate_object__o *v25; // x21
  Il2CppObject *v26; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *v36; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  intptr_t *v45; // x20
  System_Array_o *v46; // x0
  System_RuntimeFieldHandle_o v47; // x1
  ListViewSort_FilterCategoryKind_array *v48; // x20
  const MethodInfo *v49; // x2

  v3 = this;
  if ( (byte_5933003 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_21FFC50(&Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560);
    sub_21FFC50(&Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_5933003 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_39;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  v7 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this )
    goto LABEL_39;
  v8 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  this = (ServantFilterSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)this,
                                        (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !v8 )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  m_CachedPtr = this->fields.m_CachedPtr;
  v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_39;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
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
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_39;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v19);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v20);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_39;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v21);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = this->fields.servantFilterConatiner;
  v25 = (System_Predicate_object__o *)*((_QWORD *)static_fields + 1);
  if ( !v25 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v21);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v26 = *(Il2CppObject **)static_fields;
    v25 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v25, v26, Method_ServantFilterSelectMenu___c__InitServantNormalDisp_b__51_0__, 0);
    v27 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v27->__9__51_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v25;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__51_0, (int32_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !categoryContainerList )
    goto LABEL_39;
  v36 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v25,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v36, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v36 )
      goto LABEL_39;
    monitor = v36[3].monitor;
    if ( !monitor )
      goto LABEL_39;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v40 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_39;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v40, v41);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v42) )
  {
    v44 = 11;
    v45 = &Field__PrivateImplementationDetails__2738D9B59F2B04667CD06E0EB0FB0C66C361B8C9074D8041DE643269B3B1E560;
    goto LABEL_38;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_39:
    sub_21FFECC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v43);
  v44 = 12;
  v45 = &Field__PrivateImplementationDetails__DAEE9DEFA0CADB4554DC82DAB12D8E6A96EAB63587ECCE87C442E4928F2B1CB1;
LABEL_38:
  v46 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, v44);
  v47.fields.value = *v45;
  v48 = (ListViewSort_FilterCategoryKind_array *)v46;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v46, v47, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v48, v49);
}


void ServantFilterSelectMenu__InitServantNotClassDisp(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantFilterSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  FilterKindList_c *v5; // x0
  int v6; // w8
  int v7; // w9
  intptr_t m_CachedPtr; // x8
  _QWORD *v9; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct ServantFilterSelectMenu_FilterContainer_o *servantFilterConatiner; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  __int64 v20; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  System_Collections_Generic_List_object__o *categoryContainerList; // x20
  void *static_fields; // x8
  System_Predicate_object__o *v24; // x21
  Il2CppObject *v25; // x22
  struct ServantFilterSelectMenu___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *v35; // x20
  _DWORD *monitor; // x8
  ServantEquipEffectFilterController_o *svtEffectFilterController; // x20
  ListViewSort_o *operationSortInfo; // x21
  System_Action_o *v39; // x22
  const MethodInfo *v40; // x4
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  intptr_t *v44; // x20
  System_Array_o *v45; // x0
  System_RuntimeFieldHandle_o v46; // x1
  ListViewSort_FilterCategoryKind_array *v47; // x20
  const MethodInfo *v48; // x2

  v3 = this;
  if ( (byte_5933005 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__);
    sub_21FFC50(&Field__PrivateImplementationDetails__273DF9EB428871F28E90488FBEE0CD554EDEE41B97AA5AF9453F3C5BA8142CE5);
    sub_21FFC50(&Field__PrivateImplementationDetails__5B2EEB7A72BF5A5AB8814BE99B9C2B07ED3A1129FB61C60192BC06096E745FB2);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__);
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_5933005 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_36;
  v5 = FilterKindList_TypeInfo;
  v6 = useFilterKindList->fields._version + 1;
  v7 = *(&FilterKindList_TypeInfo->_2.cctor_finished + 1);
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v6;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v5, method, v2);
    v5 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpTypeFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->NpEffectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantEffectApplySubjectFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  m_CachedPtr = this->fields.m_CachedPtr;
  v9 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_36;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      (System_Collections_Generic_List_T__o *)this,
      39,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
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
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantAttriSecondFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (ServantFilterSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_36;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ServantSubAttriFilterKindList,
    (const MethodInfo_4435B5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  servantFilterConatiner = v3->fields.servantFilterConatiner;
  v3->fields.currentFilterContainer = servantFilterConatiner;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields.currentFilterContainer,
    (int32_t)servantFilterConatiner,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  ServantFilterSelectMenu__SetActiveCurrentFilterContainer(v3, 1, v18);
  ServantFilterSelectMenu__InitUseFilterButton(v3, 0, v19);
  currentFilterContainer = v3->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    goto LABEL_36;
  categoryContainerList = (System_Collections_Generic_List_object__o *)currentFilterContainer->fields.categoryContainerList;
  this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, method, v20);
    this = (ServantFilterSelectMenu_o *)ServantFilterSelectMenu___c_TypeInfo;
  }
  static_fields = this->fields.servantFilterConatiner;
  v24 = (System_Predicate_object__o *)*((_QWORD *)static_fields + 4);
  if ( !v24 )
  {
    if ( !HIDWORD(this->fields.commandCodeEffectFilterController) )
    {
      j_il2cpp_runtime_class_init_0(this, method, v20);
      static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    }
    v25 = *(Il2CppObject **)static_fields;
    v24 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    System_Predicate_object____ctor(v24, v25, Method_ServantFilterSelectMenu___c__InitServantNotClassDisp_b__53_0__, 0);
    v26 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
    v26->__9__53_0 = (struct System_Predicate_ServantFilterCategoryContainer__o *)v24;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__53_0, (int32_t)v24, v27, v28, v29, v30, v31, v32);
  }
  if ( !categoryContainerList )
    goto LABEL_36;
  v35 = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Find(
                                  categoryContainerList,
                                  (System_Predicate_T__o *)v24,
                                  (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
  this = (ServantFilterSelectMenu_o *)UnityEngine_Object__op_Inequality(v35, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_36;
    monitor = v35[3].monitor;
    if ( !monitor )
      goto LABEL_36;
    monitor[11] = 5;
  }
  svtEffectFilterController = v3->fields.svtEffectFilterController;
  operationSortInfo = v3->fields.operationSortInfo;
  v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v3, Method_ServantFilterSelectMenu_CheckMatchItemAndDisplayInfo__, 0);
  if ( !svtEffectFilterController )
    goto LABEL_36;
  ServantEquipEffectFilterController__Init(svtEffectFilterController, operationSortInfo, 4, v39, v40);
  v3->fields.isDisplayServantEffect = 1;
  if ( !ServantFilterSelectMenu__IsEventBonus(v3, v41) )
  {
    v43 = 9;
    v44 = &Field__PrivateImplementationDetails__273DF9EB428871F28E90488FBEE0CD554EDEE41B97AA5AF9453F3C5BA8142CE5;
    goto LABEL_35;
  }
  this = (ServantFilterSelectMenu_o *)v3->fields.svtEventBonusFilterController;
  if ( !this )
LABEL_36:
    sub_21FFECC(this, method);
  ServantEventBonusFilterController__Init(
    (ServantEventBonusFilterController_o *)this,
    v3->fields.operationSortInfo,
    v3->fields.eventId,
    v42);
  v43 = 10;
  v44 = &Field__PrivateImplementationDetails__5B2EEB7A72BF5A5AB8814BE99B9C2B07ED3A1129FB61C60192BC06096E745FB2;
LABEL_35:
  v45 = (System_Array_o *)sub_21FFD10(ListViewSort_FilterCategoryKind___TypeInfo, v43);
  v46.fields.value = *v44;
  v47 = (ListViewSort_FilterCategoryKind_array *)v45;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v45, v46, 0);
  ServantFilterSelectMenu__InitCategoryContainer(v3, v47, v48);
}


void ServantFilterSelectMenu__InitUseFilterButton(
        ServantFilterSelectMenu_o *this,
        bool isSummon,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x1
  System_Collections_Generic_List_object__o *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x8
  int32_t size; // w2
  int v10; // w9
  struct ServantFilterSelectMenu_FilterContainer_o *v11; // x8
  System_Collections_Generic_List_object__o *filterButtonList; // x21
  System_Predicate_object__o *v13; // x22
  System_Collections_Generic_List_T__o *All; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct ServantFilterSelectMenu_FilterContainer_o *v21; // x8
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v26; // w22
  ListViewSort_o *operationSortInfo; // x23
  ServantFilterButtonControl_OnClickFilterButton_o *v28; // x24
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x6
  __int64 v31; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o *v32; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_593300E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_21FFC50(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_21FFC50(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_OnClickFilterButton__);
    sub_21FFC50(&Method_ServantFilterSelectMenu__InitUseFilterButton_b__62_0__);
    byte_593300E = 1;
  }
  currentFilterContainer = this->fields.currentFilterContainer;
  memset(&v33, 0, sizeof(v33));
  ServantFilterSelectMenu__RefreshFilterContainerCache(this, currentFilterContainer, method);
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_18;
  size = useFilterButtonList->fields._size;
  v10 = useFilterButtonList->fields._version + 1;
  useFilterButtonList->fields._size = 0;
  useFilterButtonList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)useFilterButtonList->fields._items, 0, size, 0);
  v11 = this->fields.currentFilterContainer;
  if ( !v11 )
    goto LABEL_18;
  filterButtonList = (System_Collections_Generic_List_object__o *)v11->fields.filterButtonList;
  v13 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)this,
    Method_ServantFilterSelectMenu__InitUseFilterButton_b__62_0__,
    0);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                filterButtonList,
                (System_Predicate_T__o *)v13,
                (const MethodInfo_4450234 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.useFilterButtonList,
          (int32_t)All,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        (v21 = this->fields.currentFilterContainer) == 0)
    || (v6 = (System_Collections_Generic_List_object__o *)v21->fields.filterButtonList) == 0 )
  {
LABEL_18:
    sub_21FFECC(v6, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v6,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v31 = 0;
  v32 = &v33;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v22 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_21FFECC(v22, v23);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_21FFECC(0, v23);
    v26 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            *(_DWORD *)((char *)&v33.fields._current->klass + (unsigned __int64)&qword_20),
            (const MethodInfo_4435CD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    operationSortInfo = this->fields.operationSortInfo;
    v28 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_21FFEBC(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v28,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantFilterSelectMenu_OnClickFilterButton__,
      v29);
    ServantFilterButtonControl__Init(
      (ServantFilterButtonControl_o *)current,
      operationSortInfo,
      v28,
      v26,
      isSummon,
      0,
      v30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
        sub_21FFED4(svtEquipEffectFilterController);
      if ( m_Items[v7] != (*((_BYTE *)&svtEquipEffectFilterController->fields.WIDGET_HEIGHT_ADD_VALUE + v7) != 0) )
        return 1;
      if ( max_length == ++v7 )
        goto LABEL_8;
    }
LABEL_24:
    sub_21FFECC(svtEquipEffectFilterController, v5);
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
  __int64 v2; // x2
  int32_t eventId; // w8
  unsigned int kind; // w8
  bool result; // w0
  EventMaster_o *Master_object; // x0
  __int64 v8; // x1
  System_Collections_Generic_HashSet_int__o *v9; // x20
  System_Int32_array *v10; // x22
  EventUpValSetupInfo_o *v11; // x21
  __int64 v12; // x2
  struct System_Int32_array *servantFilterEventIds; // x8
  Il2CppObject *v14; // x21

  if ( (byte_5933002 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&EventUpValSetupInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    byte_5933002 = 1;
  }
  eventId = this->fields.eventId;
  this->fields.isDisplayEventBonusSkill = 0;
  if ( !eventId )
    return 0;
  kind = this->fields.kind;
  result = 0;
  if ( kind <= 0xB && ((1 << kind) & 0xC0F) != 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_26;
    Master_object = (EventMaster_o *)EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0, 0);
    if ( !Master_object )
      goto LABEL_26;
    v9 = (System_Collections_Generic_HashSet_int__o *)Master_object;
    if ( Master_object->fields.revision >= 1 )
    {
      if ( this->fields.eventId >= 1 )
      {
        v9 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v9,
          (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        if ( !v9 )
          goto LABEL_26;
        System_Collections_Generic_HashSet_int___Add(
          v9,
          this->fields.eventId,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v10 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v9,
              (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
      v11 = (EventUpValSetupInfo_o *)sub_21FFEBC(EventUpValSetupInfo_TypeInfo);
      EventUpValSetupInfo___ctor_48687632(v11, v10, 0, 0, 0, 0);
      if ( v11 )
      {
        servantFilterEventIds = v11->fields.servantFilterEventIds;
        if ( !servantFilterEventIds || !LODWORD(servantFilterEventIds->max_length) )
        {
          result = 0;
          goto LABEL_24;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v12);
        v14 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
        Master_object = (EventMaster_o *)System_Linq_Enumerable__ToArray_int_(
                                           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
                                           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
        if ( v14 )
        {
          Master_object = (EventMaster_o *)EventBonusFilterMaster__GetBonusSkillFilterList(
                                             (EventBonusFilterMaster_o *)v14,
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
      sub_21FFECC(Master_object, v8);
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

  if ( (byte_5933015 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantFilterSelectMenu_OnClickCancel__);
    byte_5933015 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_ServantFilterSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantFilterSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5933016 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&Method_ServantFilterSelectMenu_OnClickClear__);
    byte_5933016 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantFilterSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantFilterSelectMenu_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
                                                (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_21FFECC(operationSortInfo, v5);
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
  bool IsChangedStatus; // w8
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_5933014 & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&Method_ServantFilterSelectMenu_OnClickDecide__);
    byte_5933014 = 1;
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
      v7 = (_QWORD *)sub_21FFC68(Method_ServantFilterSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (ServantFilterSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_21FFECC(this, method);
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

  if ( (byte_5933018 & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantFilterSelectMenu_OnClickFilterButton__);
    byte_5933018 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_ServantFilterSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_ServantFilterSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_21FFECC(0, v7);
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
  __int64 v8; // x2
  int32_t kind; // w8
  const MethodInfo *v10; // x1
  ListViewSort_o *v11; // x20
  FilterKindList_c *v12; // x0

  if ( (byte_5933017 & 1) == 0 )
  {
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_21FFC50(&Method_ServantFilterSelectMenu_OnClickInitialize__);
    byte_5933017 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantFilterSelectMenu_OnClickInitialize__;
    if ( (*((_BYTE *)Method_ServantFilterSelectMenu_OnClickInitialize__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantFilterSelectMenu_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
                                                (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
            v11 = this->fields.operationSortInfo;
            v12 = FilterKindList_TypeInfo;
            if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v5, v8);
              v12 = FilterKindList_TypeInfo;
            }
            operationSortInfo = (ListViewSort_o *)v12->static_fields->EquipRewardUpExcludeTypeList;
            if ( !operationSortInfo )
              goto LABEL_25;
            operationSortInfo = (ListViewSort_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                    (System_Collections_Generic_List_T__o *)operationSortInfo,
                                                    (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
            if ( !v11 )
              goto LABEL_25;
            ListViewSort__SetFilters(v11, (ListViewSort_FilterKind_array *)operationSortInfo, 0, 0);
            operationSortInfo = this->fields.operationSortInfo;
            if ( !operationSortInfo )
              goto LABEL_25;
            ListViewSort__SetEnableEquipRewardUpEffectFilter(operationSortInfo, 0);
          }
          if ( !this->fields.isDisplayEventBonusSkill )
          {
LABEL_16:
            ServantFilterSelectMenu__SetButtonSelect(this, v5);
            ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v10);
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
    sub_21FFECC(operationSortInfo, v5);
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
  bool v7; // w7
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ServantFilterSelectMenu_o *v21; // x0
  const MethodInfo *v22; // x2
  ServantFilterSelectMenu_c *v23; // x0
  struct ListViewSort_o **p_commonServantSortInfo; // x8
  struct ListViewSort_o *v25; // x1
  __int64 v26; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  ListViewSort_o *v35; // x21
  ListViewSort_o *v36; // x22
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  __int64 v50; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *warningLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *initializeLabel; // x20
  const MethodInfo *v57; // x1
  __int64 v58; // x2
  const MethodInfo *v59; // x3
  FilterKindList_c *v60; // x0
  struct FilterKindList_StaticFields *static_fields; // x8
  ServantFilterSelectMenu_o *v62; // x0
  int32_t v63; // w2
  System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassExtra1FilterKindList; // x1
  FilterKindList_c *v65; // x0
  struct FilterKindList_StaticFields *v66; // x8
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x1
  const MethodInfo *v69; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  struct UIScrollView_o *scrollView; // x9
  struct ListViewSort_o *v72; // x8
  System_Action_o *v73; // x20

  if ( (byte_5933000 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&ListViewSort_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_EndOpen__);
    sub_21FFC50(&ServantFilterSelectMenu_TypeInfo);
    sub_21FFC50(&StringLiteral_12373/*"SERVANT_SORT_RESET"*/);
    sub_21FFC50(&StringLiteral_12204/*"SERVANT_SORT_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12094/*"SERVANT_EQUIP_FILTER_WARNING"*/);
    sub_21FFC50(&StringLiteral_12208/*"SERVANT_SORT_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12375/*"SERVANT_SORT_TITLE2"*/);
    sub_21FFC50(&StringLiteral_12205/*"SERVANT_SORT_CLEAR"*/);
    byte_5933000 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)sort,
      (System_String_o *)listViewManager,
      (int32_t)callback,
      eventId,
      (bool)method,
      v7);
    this->fields.eventId = eventId;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)sort,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    else
    {
      v23 = ServantFilterSelectMenu_TypeInfo;
      if ( !*(&ServantFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu_TypeInfo, v14, v15);
        v23 = ServantFilterSelectMenu_TypeInfo;
      }
      p_commonServantSortInfo = &v23->static_fields->commonServantSortInfo;
      v25 = *p_commonServantSortInfo;
      this->fields.baseSortInfo = *p_commonServantSortInfo;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)v25,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_45;
      ListViewSort__Load(baseSortInfo, 0);
    }
    v28 = ServantFilterSelectMenu__SetKindStatus(v21, sort, v22);
    this->fields.kindStatus = v28;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.kindStatus,
      (int32_t)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v35 = this->fields.baseSortInfo;
    v36 = (ListViewSort_o *)sub_21FFEBC(ListViewSort_TypeInfo);
    ListViewSort___ctor_50785372(v36, v35, 0);
    this->fields.operationSortInfo = v36;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this->fields.listViewManager = listViewManager;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.listViewManager,
      (int32_t)listViewManager,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
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
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49, v50);
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12375/*"SERVANT_SORT_TITLE2"*/, 0);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0);
            warningLabel = this->fields.warningLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"SERVANT_EQUIP_FILTER_WARNING"*/, 0);
            if ( warningLabel )
            {
              UILabel__set_text(warningLabel, (System_String_o *)baseSortInfo, 0);
              decideLabel = this->fields.decideLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"SERVANT_SORT_DECIDE"*/, 0);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0);
                clearLabel = this->fields.clearLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12205/*"SERVANT_SORT_CLEAR"*/, 0);
                if ( clearLabel )
                {
                  UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0);
                  cancelLabel = this->fields.cancelLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12204/*"SERVANT_SORT_CANCEL"*/, 0);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0);
                    initializeLabel = this->fields.initializeLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12373/*"SERVANT_SORT_RESET"*/, 0);
                    if ( initializeLabel )
                    {
                      UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0);
                      switch ( this->fields.kind )
                      {
                        case 0:
                        case 7:
                          ServantFilterSelectMenu__InitServantListDisp(this, v57);
                          break;
                        case 1:
                        case 8:
                        case 9:
                          ServantFilterSelectMenu__InitServantNormalDisp(this, v57);
                          break;
                        case 2:
                          ServantFilterSelectMenu__InitServantBaseDisp(this, v57);
                          break;
                        case 3:
                          ServantFilterSelectMenu__InitMaterialDisp(this, v57);
                          break;
                        case 4:
                          ServantFilterSelectMenu__InitCostumeDisp(this, v57);
                          break;
                        case 5:
                        case 0x10:
                          ServantFilterSelectMenu__InitServantEquipDisp(this, v57);
                          break;
                        case 6:
                          ServantFilterSelectMenu__InitCommandCodeDisp(this, v57);
                          break;
                        case 0xA:
                          ServantFilterSelectMenu__InitServantNotClassDisp(this, v57);
                          break;
                        case 0xB:
                          ServantFilterSelectMenu__InitServantExtraClassDisp(this, v57);
                          break;
                        case 0xC:
                          v62 = this;
                          ClassExtra1FilterKindList = 0;
                          v63 = 999;
                          goto LABEL_39;
                        case 0xD:
                          v60 = FilterKindList_TypeInfo;
                          if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v57, v58);
                            v60 = FilterKindList_TypeInfo;
                          }
                          static_fields = v60->static_fields;
                          v62 = this;
                          v63 = 14;
                          ClassExtra1FilterKindList = static_fields->ClassExtra1FilterKindList;
                          goto LABEL_39;
                        case 0xE:
                          v65 = FilterKindList_TypeInfo;
                          if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v57, v58);
                            v65 = FilterKindList_TypeInfo;
                          }
                          v66 = v65->static_fields;
                          v62 = this;
                          v63 = 15;
                          ClassExtra1FilterKindList = v66->ClassExtra2FilterKindList;
LABEL_39:
                          ServantFilterSelectMenu__InitCommonSummonDisp(v62, ClassExtra1FilterKindList, v63, v59);
                          break;
                        case 0xF:
                          ServantFilterSelectMenu__InitExchangeSvtCoinDisp(this, v57);
                          break;
                        default:
                          break;
                      }
                      ServantFilterSelectMenu__RefreshFilterClippingPosition(this, v57);
                      ServantFilterSelectMenu__SetButtonEnable(this, 1, v67);
                      ServantFilterSelectMenu__SetButtonSelect(this, v68);
                      ServantFilterSelectMenu__CheckMatchItemAndDisplayInfo(this, v69);
                      currentFilterContainer = this->fields.currentFilterContainer;
                      if ( currentFilterContainer )
                      {
                        scrollView = currentFilterContainer->fields.scrollView;
                        if ( scrollView )
                        {
                          v72 = this->fields.baseSortInfo;
                          if ( v72 )
                          {
                            baseSortInfo = (ListViewSort_o *)scrollView->fields.verticalScrollBar;
                            if ( baseSortInfo )
                            {
                              UIProgressBar__set_value((UIProgressBar_o *)baseSortInfo, v72->fields.scrollBarValue, 0);
                              this->fields.state = 1;
                              v73 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                              System_Action___ctor(
                                v73,
                                (Il2CppObject *)this,
                                Method_ServantFilterSelectMenu_EndOpen__,
                                0);
                              BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0, 0);
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
    sub_21FFECC(baseSortInfo, v26);
  }
}


void ServantFilterSelectMenu__RefreshFilterClippingPosition(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v6; // x0
  __int64 v7; // x1
  struct ServantFilterSelectMenu_FilterContainer_o *v8; // x8
  struct ServantFilterSelectMenu_FilterContainer_o *v9; // x8
  struct UIScrollView_o *v10; // x9

  if ( (byte_5933011 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933011 = 1;
  }
  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer )
    return;
  scrollView = (UnityEngine_Object_o *)currentFilterContainer->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = (UIScrollView_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
    return;
  v8 = this->fields.currentFilterContainer;
  if ( !v8 )
    goto LABEL_18;
  v6 = v8->fields.scrollView;
  if ( !v6 )
    goto LABEL_18;
  v6 = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v6->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                           v6,
                           v6->klass->vtable._6_get_shouldMoveVertically.method);
  v9 = this->fields.currentFilterContainer;
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_18;
    goto LABEL_16;
  }
  if ( !v9 || (v10 = v9->fields.scrollView) == 0 )
LABEL_18:
    sub_21FFECC(v6, v7);
  v10->fields.contentPivot = 4;
LABEL_16:
  v6 = v9->fields.scrollView;
  if ( !v6 )
    goto LABEL_18;
  UIScrollView__ResetPosition(v6, 0);
}


void ServantFilterSelectMenu__RefreshFilterContainerCache(
        ServantFilterSelectMenu_o *this,
        ServantFilterSelectMenu_FilterContainer_o *target,
        const MethodInfo *method)
{
  UnityEngine_Object_o *root; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *IsFlag20260802; // x0
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  __int64 size; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x22
  int v12; // w8
  ServantFilterSelectMenu___c_c *v13; // x0
  struct ServantFilterSelectMenu___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__63_0; // x23
  Il2CppObject *v16; // x24
  struct ServantFilterSelectMenu___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *v24; // x8
  int32_t v25; // w21
  UnityEngine_Component_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Transform_o *v30; // x0
  struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *categoryContainerList; // x8
  int32_t v32; // w2
  System_Collections_Generic_IEnumerable_T__o *v33; // x20
  int v34; // w9

  if ( (byte_593300F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ServantFilterButtonControl___);
    sub_21FFC50(&System_Func_ServantFilterButtonControl__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CollectCompsRecursive_ServantFilterButtonControl___);
    sub_21FFC50(&Method_ServantFilterSelectMenu_CollectCompsRecursive_ServantFilterCategoryContainer___);
    sub_21FFC50(&Method_ServantFilterSelectMenu___c__RefreshFilterContainerCache_b__63_0__);
    sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_593300F = 1;
  }
  if ( target )
  {
    root = (UnityEngine_Object_o *)target->fields.root;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target, method);
    if ( !UnityEngine_Object__op_Equality(root, 0, 0) )
    {
      IsFlag20260802 = target->fields.root;
      if ( IsFlag20260802 )
      {
        transform = UnityEngine_GameObject__get_transform(IsFlag20260802, 0);
        IsFlag20260802 = (UnityEngine_GameObject_o *)ServantFilterSelectMenu__CollectCompsRecursive_object_(
                                                       this,
                                                       transform,
                                                       (const MethodInfo_3952774 *)Method_ServantFilterSelectMenu_CollectCompsRecursive_ServantFilterButtonControl___);
        filterButtonList = target->fields.filterButtonList;
        if ( filterButtonList )
        {
          size = (unsigned int)filterButtonList->fields._size;
          v11 = (System_Collections_Generic_IEnumerable_TSource__o *)IsFlag20260802;
          v12 = filterButtonList->fields._version + 1;
          filterButtonList->fields._size = 0;
          filterButtonList->fields._version = v12;
          if ( (int)size >= 1 )
          {
            System_Array__Clear((System_Array_o *)filterButtonList->fields._items, 0, size, 0);
            filterButtonList = target->fields.filterButtonList;
          }
          v13 = ServantFilterSelectMenu___c_TypeInfo;
          if ( !*(&ServantFilterSelectMenu___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantFilterSelectMenu___c_TypeInfo, v6, size);
            v13 = ServantFilterSelectMenu___c_TypeInfo;
          }
          static_fields = v13->static_fields;
          _9__63_0 = (System_Func_object__bool__o *)static_fields->__9__63_0;
          if ( !_9__63_0 )
          {
            if ( !*(&v13->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v13, v6, size);
              static_fields = ServantFilterSelectMenu___c_TypeInfo->static_fields;
            }
            v16 = (Il2CppObject *)static_fields->__9;
            _9__63_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ServantFilterButtonControl__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__63_0,
              v16,
              Method_ServantFilterSelectMenu___c__RefreshFilterContainerCache_b__63_0__,
              0);
            v17 = ServantFilterSelectMenu___c_TypeInfo->static_fields;
            v17->__9__63_0 = (struct System_Func_ServantFilterButtonControl__bool__o *)_9__63_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v17->__9__63_0,
              (int32_t)_9__63_0,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23);
          }
          IsFlag20260802 = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Where_object_(
                                                         v11,
                                                         (System_Func_TSource__bool__o *)_9__63_0,
                                                         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ServantFilterButtonControl___);
          if ( filterButtonList )
          {
            System_Collections_Generic_List_object___AddRange(
              (System_Collections_Generic_List_object__o *)filterButtonList,
              (System_Collections_Generic_IEnumerable_T__o *)IsFlag20260802,
              (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__AddRange__);
            IsFlag20260802 = (UnityEngine_GameObject_o *)ConstantMaster__IsFlag20260802(0);
            if ( ((unsigned __int8)IsFlag20260802 & 1) != 0 )
              goto LABEL_31;
            v24 = target->fields.filterButtonList;
            if ( !v24 )
              goto LABEL_36;
            v25 = v24->fields._size;
            if ( v25 - 1 < 0 )
            {
LABEL_31:
              IsFlag20260802 = target->fields.root;
              if ( IsFlag20260802 )
              {
                v30 = UnityEngine_GameObject__get_transform(IsFlag20260802, 0);
                IsFlag20260802 = (UnityEngine_GameObject_o *)ServantFilterSelectMenu__CollectCompsRecursive_object_(
                                                               this,
                                                               v30,
                                                               (const MethodInfo_3952774 *)Method_ServantFilterSelectMenu_CollectCompsRecursive_ServantFilterCategoryContainer___);
                categoryContainerList = target->fields.categoryContainerList;
                if ( categoryContainerList )
                {
                  v32 = categoryContainerList->fields._size;
                  v33 = (System_Collections_Generic_IEnumerable_T__o *)IsFlag20260802;
                  v34 = categoryContainerList->fields._version + 1;
                  categoryContainerList->fields._size = 0;
                  categoryContainerList->fields._version = v34;
                  if ( v32 < 1
                    || (System_Array__Clear((System_Array_o *)categoryContainerList->fields._items, 0, v32, 0),
                        (categoryContainerList = target->fields.categoryContainerList) != 0) )
                  {
                    System_Collections_Generic_List_object___AddRange(
                      (System_Collections_Generic_List_object__o *)categoryContainerList,
                      v33,
                      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__AddRange__);
                    return;
                  }
                }
              }
            }
            else
            {
              while ( 1 )
              {
                IsFlag20260802 = (UnityEngine_GameObject_o *)target->fields.filterButtonList;
                if ( !IsFlag20260802 )
                  break;
                IsFlag20260802 = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)IsFlag20260802,
                                                               --v25,
                                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__get_Item__);
                if ( !IsFlag20260802 )
                  break;
                v26 = (UnityEngine_Component_o *)IsFlag20260802;
                if ( (unsigned int)(LODWORD(IsFlag20260802[1].monitor) - 102) <= 2 )
                {
                  IsFlag20260802 = (UnityEngine_GameObject_o *)target->fields.filterButtonList;
                  if ( !IsFlag20260802 )
                    break;
                  System_Collections_Generic_List_object___RemoveAt(
                    (System_Collections_Generic_List_object__o *)IsFlag20260802,
                    v25,
                    (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__RemoveAt__);
                  IsFlag20260802 = UnityEngine_Component__get_gameObject(v26, 0);
                  if ( !IsFlag20260802 )
                    break;
                  UnityEngine_GameObject__SetActive(IsFlag20260802, 0, 0);
                  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v26, 0);
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
                  UnityEngine_Object__Destroy_83246496(gameObject, 0);
                }
                if ( v25 <= 0 )
                  goto LABEL_31;
              }
            }
          }
        }
      }
LABEL_36:
      sub_21FFECC(IsFlag20260802, v6);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterSelectMenu__SetActiveCurrentFilterContainer(
        ServantFilterSelectMenu_o *this,
        bool isActive,
        const MethodInfo *method)
{
  struct ServantFilterSelectMenu_FilterContainer_o *currentFilterContainer; // x8

  currentFilterContainer = this->fields.currentFilterContainer;
  if ( !currentFilterContainer || (this = (ServantFilterSelectMenu_o *)currentFilterContainer->fields.root) == 0 )
    sub_21FFECC(this, isActive);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantFilterSelectMenu__SetButtonEnable(ServantFilterSelectMenu_o *this, bool isEnable, const MethodInfo *method)
{
  UICommonButton_o *decideButton; // x0
  UnityEngine_Behaviour_o *monitor; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5933013 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_5933013 = 1;
  }
  decideButton = this->fields.decideButton;
  memset(&v11, 0, sizeof(v11));
  if ( !decideButton )
    goto LABEL_31;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_31;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_31;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = this->fields.initializeButton;
  if ( !decideButton )
    goto LABEL_31;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0);
  decideButton = (UICommonButton_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v11 = v10;
  v10.fields._list = 0;
  *(_QWORD *)&v10.fields._index = &v11;
  while ( 1 )
  {
    monitor = (UnityEngine_Behaviour_o *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                                           &v11,
                                           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( ((unsigned __int8)monitor & 1) == 0 )
      break;
    if ( !v11.fields._current || (monitor = (UnityEngine_Behaviour_o *)v11.fields._current[2].monitor) == 0 )
      sub_21FFECC(monitor, v7);
    UnityEngine_Behaviour__set_enabled(monitor, isEnable, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
  kind = this->fields.kind;
  if ( kind == 5 )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEquipEffectFilterController;
    if ( !decideButton )
      goto LABEL_31;
    ServantEquipEffectFilterController__SetEnableFilterButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v8);
  }
  else
  {
    if ( kind != 16 )
      goto LABEL_20;
    decideButton = (UICommonButton_o *)this->fields.svtEquipEffectFilterController;
    if ( !decideButton )
      goto LABEL_31;
    ServantEquipEffectFilterController__SetEnableFilterRewardUpEquipButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v8);
  }
  kind = this->fields.kind;
LABEL_20:
  if ( kind == 6 )
  {
    decideButton = (UICommonButton_o *)this->fields.commandCodeEffectFilterController;
    if ( !decideButton )
      goto LABEL_31;
    ServantEquipEffectFilterController__SetEnableFilterButton(
      (ServantEquipEffectFilterController_o *)decideButton,
      isEnable,
      v8);
  }
  if ( this->fields.isDisplayEventBonusSkill )
  {
    decideButton = (UICommonButton_o *)this->fields.svtEventBonusFilterController;
    if ( !decideButton )
      goto LABEL_31;
    ServantEventBonusFilterController__SetEnableFilterButton(
      (ServantEventBonusFilterController_o *)decideButton,
      isEnable,
      v8);
  }
  if ( !this->fields.isDisplayServantEffect )
    return;
  decideButton = (UICommonButton_o *)this->fields.svtEffectFilterController;
  if ( !decideButton )
LABEL_31:
    sub_21FFECC(decideButton, isEnable);
  ServantEquipEffectFilterController__SetEnableFilterButton(
    (ServantEquipEffectFilterController_o *)decideButton,
    isEnable,
    v8);
}


void ServantFilterSelectMenu__SetButtonSelect(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *useFilterButtonList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  ListViewSort_o *operationSortInfo; // x0
  bool v14; // w0
  const MethodInfo *v15; // x2
  FilterKindList_c *v16; // x0
  System_Collections_Generic_List_T__o *EquipRewardUpExcludeTypeList; // x0
  const MethodInfo *v18; // x2
  int32_t kind; // w8
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5933012 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_5933012 = 1;
  }
  useFilterButtonList = (System_Collections_Generic_List_object__o *)this->fields.useFilterButtonList;
  memset(&v21, 0, sizeof(v21));
  if ( !useFilterButtonList )
    goto LABEL_37;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    useFilterButtonList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v21 = v20;
  v20.fields._list = 0;
  *(_QWORD *)&v20.fields._index = &v21;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v4 )
      break;
    current = (ServantFilterButtonControl_o *)v21.fields._current;
    if ( !v21.fields._current )
      sub_21FFECC(v4, v5);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v21.fields._current, v5);
    v9 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v7, v8);
      v9 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_21FFECC(0, v7);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_4435CD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_21FFECC(0, v11);
      v14 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, current->fields.filterKind, 0);
      ServantFilterButtonControl__SetButtonMask(current, !v14, v15);
    }
    if ( this->fields.kind == 16 )
    {
      v16 = FilterKindList_TypeInfo;
      if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v11, v12);
        v16 = FilterKindList_TypeInfo;
      }
      EquipRewardUpExcludeTypeList = (System_Collections_Generic_List_T__o *)v16->static_fields->EquipRewardUpExcludeTypeList;
      if ( !EquipRewardUpExcludeTypeList )
        sub_21FFECC(0, v11);
      if ( System_Collections_Generic_List_Int32Enum___Contains(
             EquipRewardUpExcludeTypeList,
             current->fields.filterKind,
             (const MethodInfo_4435CD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
      {
        ServantFilterButtonControl__SetButtonMask(current, 1, v18);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
    sub_21FFECC(useFilterButtonList, method);
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
  __int64 v7; // x2
  __int64 v8; // x21
  unsigned __int64 v9; // x22
  FilterKindList_c *v10; // x0

  if ( (byte_593301A & 1) == 0 )
  {
    sub_21FFC50(&bool___TypeInfo);
    sub_21FFC50(&FilterKindList_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
    byte_593301A = 1;
  }
  AllFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    AllFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo;
  }
  v5 = **(struct System_Collections_Generic_List_ListViewSort_FilterKind__o ***)&AllFilterKindList[4].fields._size;
  if ( !v5 )
    goto LABEL_16;
  size = (unsigned int)v5->fields._size;
  v8 = sub_21FFD10(bool___TypeInfo, (unsigned int)size);
  if ( (int)size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = FilterKindList_TypeInfo;
      if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
        v10 = FilterKindList_TypeInfo;
      }
      AllFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->AllFilterKindList;
      if ( !AllFilterKindList )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                    AllFilterKindList,
                                                                    v9,
                                                                    (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__get_Item__);
      if ( !sort )
        break;
      AllFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__GetFilter(
                                                                    sort,
                                                                    (int32_t)AllFilterKindList,
                                                                    0);
      if ( !v8 )
        break;
      if ( v9 >= *(unsigned int *)(v8 + 24) )
        sub_21FFED4(AllFilterKindList);
      *(_BYTE *)(v8 + 32 + v9++) = (unsigned __int8)AllFilterKindList & 1;
      if ( size == v9 )
        return (System_Boolean_array *)v8;
    }
LABEL_16:
    sub_21FFECC(AllFilterKindList, sort);
  }
  return (System_Boolean_array *)v8;
}


bool ServantFilterSelectMenu___InitUseFilterButton_b__62_0(
        ServantFilterSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  ServantFilterSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_593301E & 1) == 0 )
  {
    this = (ServantFilterSelectMenu_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_593301E = 1;
  }
  if ( !x || (this = (ServantFilterSelectMenu_o *)v4->fields.useFilterKindList) == 0 )
    sub_21FFECC(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_4435CD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void ServantFilterSelectMenu__add_callbackFunc(
        ServantFilterSelectMenu_o *this,
        ServantFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantFilterSelectMenu_o *v11; // x0
  ServantFilterSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5932FFC & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_5932FFC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantFilterSelectMenu_CallbackFunc_c *)v6->klass != ServantFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFilterSelectMenu_o *)sub_220024C(v6, ServantFilterSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  ServantFilterSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *ServantFilterSelectMenu__get_closeBtnPath(ServantFilterSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_593301B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16227/*"Window/CancelButton"*/);
    byte_593301B = 1;
  }
  return (System_String_o *)StringLiteral_16227/*"Window/CancelButton"*/;
}


void ServantFilterSelectMenu__remove_callbackFunc(
        ServantFilterSelectMenu_o *this,
        ServantFilterSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  const MethodInfo *v11; // x0

  if ( (byte_5932FFD & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    byte_5932FFD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantFilterSelectMenu_CallbackFunc_c *)v6->klass != ServantFilterSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (const MethodInfo *)sub_220024C(v6, ServantFilterSelectMenu_CallbackFunc_TypeInfo, v7, v8);
  ServantFilterSelectMenu__DeleteContinueData(v11);
}


void ServantFilterSelectMenu_CallbackFunc___ctor(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FEFA50;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEFA08;
}


System_IAsyncResult_o *ServantFilterSelectMenu_CallbackFunc__BeginInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void ServantFilterSelectMenu_CallbackFunc__EndInvoke(
        ServantFilterSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59338D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
    byte_59338D8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantFilterCategoryContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer___ctor__);
  this->fields.categoryContainerList = (struct System_Collections_Generic_List_ServantFilterCategoryContainer__o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.categoryContainerList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.filterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.filterButtonList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantFilterSelectMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59338D9 & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu___c_TypeInfo);
    byte_59338D9 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantFilterSelectMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantFilterSelectMenu___c_TypeInfo->static_fields->__9 = (struct ServantFilterSelectMenu___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantFilterSelectMenu___c_TypeInfo->static_fields,
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


int32_t ServantFilterSelectMenu___c___InitCategoryContainer_b__65_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields.categoryKind;
}


bool ServantFilterSelectMenu___c___InitCommandCodeDisp_b__58_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitCostumeDisp_b__59_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitMaterialDisp_b__56_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantBaseDisp_b__55_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 12;
}


bool ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_2(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 19;
}


bool ServantFilterSelectMenu___c___InitServantEquipDisp_b__57_3(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 20;
}


bool ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantExtraClassDisp_b__52_1(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 0;
}


bool ServantFilterSelectMenu___c___InitServantListDisp_b__54_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantNormalDisp_b__51_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___InitServantNotClassDisp_b__53_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.categoryKind == 4;
}


bool ServantFilterSelectMenu___c___RefreshFilterContainerCache_b__63_0(
        ServantFilterSelectMenu___c_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  if ( (byte_59338DA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59338DA = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
}


void ServantFilterSelectMenu___c__DisplayClass64_0_object____ctor(
        ServantFilterSelectMenu___c__DisplayClass64_0_T__o *this,
        const MethodInfo_3AD28AC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantFilterSelectMenu___c__DisplayClass64_0_object____CollectCompsRecursive_b__0(
        ServantFilterSelectMenu___c__DisplayClass64_0_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3AD28B4 *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *parent; // x19
  UnityEngine_Object_o *v10; // x20

  if ( (byte_593DE81 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593DE81 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( !v5 )
    return 0;
  if ( !x )
    sub_21FFECC(v5, v6);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x, 0);
  parent = (UnityEngine_Object_o *)this->fields.parent;
  v10 = (UnityEngine_Object_o *)transform;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  return UnityEngine_Object__op_Inequality(v10, parent, 0);
}


void ServantFilterSelectMenu___c__DisplayClass65_0___ctor(
        ServantFilterSelectMenu___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantFilterSelectMenu___c__DisplayClass65_0___InitCategoryContainer_b__1(
        ServantFilterSelectMenu___c__DisplayClass65_0_o *this,
        int32_t e,
        const MethodInfo *method)
{
  if ( (byte_59338DB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_ListViewSort_FilterCategoryKind___);
    byte_59338DB = 1;
  }
  return System_Linq_Enumerable__Contains_Int32Enum_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.categoryKindKist,
           e,
           (const MethodInfo_3843278 *)Method_System_Linq_Enumerable_Contains_ListViewSort_FilterCategoryKind___);
}


void ServantFilterSelectMenu___c__DisplayClass65_1___ctor(
        ServantFilterSelectMenu___c__DisplayClass65_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ServantFilterSelectMenu___c__DisplayClass65_1___InitCategoryContainer_b__2(
        ServantFilterSelectMenu___c__DisplayClass65_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct ServantFilterCategoryContainer_o *container; // x8

  container = this->fields.container;
  if ( !container )
    sub_21FFECC(this, *(_QWORD *)&x);
  return container->fields.categoryKind == x;
}