void CoinRoomSortSelectManager___ctor(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
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

  if ( (byte_4CCB2A5 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    byte_4CCB2A5 = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C715FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_37F56CC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.useFilterKindList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_1C71354(
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


void CoinRoomSortSelectManager__Callback(CoinRoomSortSelectManager_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CoinRoomSortSelectManager_CallbackFunc_o *callbackFunc; // x20
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void CoinRoomSortSelectManager__Close(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinRoomSortSelectManager__Close_48688120(this, 0, v2);
}


void CoinRoomSortSelectManager__Close_48688120(
        CoinRoomSortSelectManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CCB292 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CoinRoomSortSelectManager_EndClose__);
    byte_4CCB292 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void CoinRoomSortSelectManager__EndClose(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void CoinRoomSortSelectManager__EndOpen(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void CoinRoomSortSelectManager__Init(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CoinRoomSortSelectManager__InitCategoryContainer(
        CoinRoomSortSelectManager_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v4; // x20
  il2cpp_array_size_t max_length; // x8
  int v6; // w27
  Il2CppObject *current; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  unsigned __int64 v10; // x25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v15; // x21
  System_Collections_Generic_List_object__o *servantFilterCategoryContainerList; // x22
  System_Predicate_object__o *v17; // x23
  Il2CppObject *v18; // x21
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CCB294 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C713B0(&Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__);
    this = (CoinRoomSortSelectManager_o *)sub_1C713B0(&CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo);
    byte_4CCB294 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !categoryKindKist )
    goto LABEL_27;
  max_length = categoryKindKist->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_28;
  this = (CoinRoomSortSelectManager_o *)v4->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_1C71608(this, categoryKindKist);
  v6 = *(int32_t *)((char *)categoryKindKist->m_Items + ((__int64)((max_length << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_1C71608(v8, v9);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( SLODWORD(categoryKindKist->max_length) >= 1 )
  {
    v10 = 0;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    x = static_fields->zeroVector.fields.x;
    while ( 1 )
    {
      v15 = sub_1C715FC(CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( v10 >= LODWORD(categoryKindKist->max_length) )
        break;
      if ( !v15 )
        goto LABEL_27;
      *(_DWORD *)(v15 + 16) = categoryKindKist->m_Items[v10];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_object__o *)v4->fields.servantFilterCategoryContainerList;
      v17 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v15,
        Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__,
        0);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v18 = System_Collections_Generic_List_object___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v17,
              (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (CoinRoomSortSelectManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_27;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v18, 1, 0);
        v21.fields.x = x;
        v21.fields.y = y;
        v21.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v18, v21, 0);
        ServantFilterCategoryContainer__Layout(
          (ServantFilterCategoryContainer_o *)v18,
          HIDWORD(v18[3].monitor) == v6,
          0);
        BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)v18, 0);
        x = BottomPosition.fields.x;
        y = BottomPosition.fields.y;
        z = BottomPosition.fields.z;
      }
      if ( (__int64)++v10 >= SLODWORD(categoryKindKist->max_length) )
        return;
    }
LABEL_28:
    sub_1C71610(this);
  }
}


void CoinRoomSortSelectManager__OnClickCancel(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CCB29A & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickCancel__);
    byte_4CCB29A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_CoinRoomSortSelectManager_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    CoinRoomSortSelectManager__Callback(this, 0, v5);
  }
}


void CoinRoomSortSelectManager__OnClickClear(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4CCB29B & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickClear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CCB29B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickClear__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1C71608(useFilterKindList, v5);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0);
    CoinRoomSortSelectManager__SetButtenSelect(this, v8);
  }
}


void CoinRoomSortSelectManager__OnClickDecide(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v2; // x19
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4CCB299 & 1) == 0 )
  {
    this = (CoinRoomSortSelectManager_o *)sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickDecide__);
    byte_4CCB299 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    scrollView = v2->fields.scrollView;
    if ( !scrollView )
      goto LABEL_12;
    this = (CoinRoomSortSelectManager_o *)scrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    CoinRoomSortSelectManager__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_CoinRoomSortSelectManager_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (CoinRoomSortSelectManager_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1C71608(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0);
    CoinRoomSortSelectManager__Callback(v2, 1, v9);
  }
}


void CoinRoomSortSelectManager__OnClickFilterButton(
        CoinRoomSortSelectManager_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4CCB2A2 & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickFilterButton__);
    byte_4CCB2A2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CoinRoomSortSelectManager_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C71608(0, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0);
    CoinRoomSortSelectManager__SetButtenSelect(this, v9);
  }
}


void CoinRoomSortSelectManager__OnClickHelp(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4CCB2A3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickHelpClose__);
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickHelp__);
    byte_4CCB2A3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
    {
      sub_1C71608(helpButton, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0);
    v4 = Method_CoinRoomSortSelectManager_OnClickHelp__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickHelp__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickHelp__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_OnClickHelpClose__, 0);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 32, v6, 0, 0);
  }
}


void CoinRoomSortSelectManager__OnClickHelpClose(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0)) == 0 )
  {
    sub_1C71608(helpButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0);
}


void CoinRoomSortSelectManager__OnClickReset(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4CCB29C & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickReset__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CCB29C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickReset__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1C71608(useFilterKindList, v5);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0);
    CoinRoomSortSelectManager__SetButtenSelect(this, v8);
  }
}


void CoinRoomSortSelectManager__OnClickSmartSort(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  UISprite_o *smartSortBtnSprite; // x0
  __int64 v6; // x1
  struct ListViewSort_o *operationSortInfo; // x9
  _BOOL4 isSmartSort; // w8
  __int64 *v9; // x8

  if ( (byte_4CCB2A1 & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickSmartSort__);
    sub_1C713B0(&StringLiteral_17529/*"btn_on"*/);
    sub_1C713B0(&StringLiteral_17528/*"btn_off"*/);
    byte_4CCB2A1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSmartSort__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickSmartSort__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (isSmartSort = operationSortInfo->fields.isSmartSort,
          operationSortInfo->fields.isSmartSort = !isSmartSort,
          (smartSortBtnSprite = this->fields.smartSortBtnSprite) == 0) )
    {
      sub_1C71608(smartSortBtnSprite, v6);
    }
    if ( isSmartSort )
      v9 = &StringLiteral_17528/*"btn_off"*/;
    else
      v9 = &StringLiteral_17529/*"btn_on"*/;
    UISprite__set_spriteName(smartSortBtnSprite, (System_String_o *)*v9, 0);
  }
}


void CoinRoomSortSelectManager__OnClickSortAmount(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CCB29F & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickSortAmount__);
    byte_4CCB29F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C71608(v5, v6);
    operationSortInfo->fields.sortKind = 14;
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void CoinRoomSortSelectManager__OnClickSortId(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CCB29D & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickSortId__);
    byte_4CCB29D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickSortId__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSortId__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickSortId__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C71608(v5, v6);
    operationSortInfo->fields.sortKind = 27;
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void CoinRoomSortSelectManager__OnClickSortRarity(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CCB29E & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickSortRarity__);
    byte_4CCB29E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C71608(v5, v6);
    operationSortInfo->fields.sortKind = 2;
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void CoinRoomSortSelectManager__OnClickSortServantName(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4CCB2A0 & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickSortServantName__);
    byte_4CCB2A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickSortServantName__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSortServantName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinRoomSortSelectManager_OnClickSortServantName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C71608(v5, v6);
    operationSortInfo->fields.sortKind = 26;
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void CoinRoomSortSelectManager__OnEnable(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  int32_t kind; // w8
  __int64 *v4; // x9
  System_String_o **v5; // x8
  System_String_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CCB2A4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15650/*"Window/FilterList/CancelButton"*/);
    sub_1C713B0(&StringLiteral_15657/*"Window/SortList/CancelButton"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCB2A4 = 1;
  }
  kind = this->fields.kind;
  if ( kind == 1 )
    v4 = (__int64 *)&StringLiteral_15650/*"Window/FilterList/CancelButton"*/;
  else
    v4 = &StringLiteral_1/*""*/;
  if ( kind )
    v5 = (System_String_o **)v4;
  else
    v5 = (System_String_o **)&StringLiteral_15657/*"Window/SortList/CancelButton"*/;
  v6 = *v5;
  if ( !System_String__IsNullOrEmpty(*v5, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    AndroidBackKeyManager__AddBackBtn_45260884(transform, v6, 0);
  }
}


void CoinRoomSortSelectManager__Open(
        CoinRoomSortSelectManager_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        CoinRoomSortSelectManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v22; // x22
  struct ListViewSort_o **p_operationSortInfo; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UILabel_o *titleLabel; // x22
  UILabel_o *title2Label; // x22
  UILabel_o *explanationLabel; // x22
  UILabel_o *explanationLabel2; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *sortDecideLabel; // x22
  UILabel_o *sortCancelLabel; // x22
  UILabel_o *clearLabel; // x22
  UILabel_o *resetLabel; // x22
  UILabel_o *smartSortDetail_1; // x22
  UILabel_o *smartSortDetail_2; // x22
  struct UILabel_array *sortLabel; // x8
  UILabel_o *v43; // x22
  struct UILabel_array *v44; // x8
  UILabel_o *v45; // x22
  struct UILabel_array *v46; // x8
  UILabel_o *v47; // x22
  struct UILabel_array *v48; // x8
  UILabel_o *v49; // x21
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v56; // x8
  struct UIScrollView_o *scrollView; // x8
  System_Action_o *v58; // x20

  if ( (byte_4CCB291 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CoinRoomSortSelectManager_EndOpen__);
    sub_1C713B0(&ListViewSort_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_11890/*"SERVANT_SORT_RESET"*/);
    sub_1C713B0(&StringLiteral_12259/*"SORT_WINDOW_TITLE"*/);
    sub_1C713B0(&StringLiteral_17529/*"btn_on"*/);
    sub_1C713B0(&StringLiteral_11724/*"SERVANT_SORT_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11728/*"SERVANT_SORT_DECIDE"*/);
    sub_1C713B0(&StringLiteral_3556/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/);
    sub_1C713B0(&StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/);
    sub_1C713B0(&StringLiteral_11725/*"SERVANT_SORT_CLEAR"*/);
    sub_1C713B0(&StringLiteral_17528/*"btn_off"*/);
    sub_1C713B0(&StringLiteral_3557/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/);
    sub_1C713B0(&StringLiteral_11729/*"SERVANT_SORT_EXPLANATION"*/);
    sub_1C713B0(&StringLiteral_11730/*"SERVANT_SORT_EXPLANATION2"*/);
    byte_4CCB291 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo,
        (int32_t)sort,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        baseSortInfo->fields.listViewKind = 5;
        v22 = (ListViewSort_o *)sub_1C715FC(ListViewSort_TypeInfo);
        ListViewSort___ctor_44131716(v22, baseSortInfo, 0);
        p_operationSortInfo = &this->fields.operationSortInfo;
        this->fields.operationSortInfo = v22;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo,
          (int32_t)v22,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12259/*"SORT_WINDOW_TITLE"*/, 0);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
          title2Label = this->fields.title2Label;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, 0);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, (System_String_o *)gameObject, 0);
            explanationLabel = this->fields.explanationLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11729/*"SERVANT_SORT_EXPLANATION"*/, 0);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
              explanationLabel2 = this->fields.explanationLabel2;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11730/*"SERVANT_SORT_EXPLANATION2"*/,
                                                         0);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0);
                decideLabel = this->fields.decideLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11728/*"SERVANT_SORT_DECIDE"*/,
                                                           0);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
                  cancelLabel = this->fields.cancelLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11724/*"SERVANT_SORT_CANCEL"*/,
                                                             0);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
                    sortDecideLabel = this->fields.sortDecideLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11728/*"SERVANT_SORT_DECIDE"*/,
                                                               0);
                    if ( sortDecideLabel )
                    {
                      UILabel__set_text(sortDecideLabel, (System_String_o *)gameObject, 0);
                      sortCancelLabel = this->fields.sortCancelLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11724/*"SERVANT_SORT_CANCEL"*/,
                                                                 0);
                      if ( sortCancelLabel )
                      {
                        UILabel__set_text(sortCancelLabel, (System_String_o *)gameObject, 0);
                        clearLabel = this->fields.clearLabel;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11725/*"SERVANT_SORT_CLEAR"*/,
                                                                   0);
                        if ( clearLabel )
                        {
                          UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0);
                          resetLabel = this->fields.resetLabel;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_11890/*"SERVANT_SORT_RESET"*/,
                                                                     0);
                          if ( resetLabel )
                          {
                            UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0);
                            smartSortDetail_1 = this->fields.smartSortDetail_1;
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_3556/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/,
                                                                       0);
                            if ( smartSortDetail_1 )
                            {
                              UILabel__set_text(smartSortDetail_1, (System_String_o *)gameObject, 0);
                              smartSortDetail_2 = this->fields.smartSortDetail_2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_3557/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/,
                                                                         0);
                              if ( smartSortDetail_2 )
                              {
                                UILabel__set_text(smartSortDetail_2, (System_String_o *)gameObject, 0);
                                sortLabel = this->fields.sortLabel;
                                if ( sortLabel )
                                {
                                  if ( !LODWORD(sortLabel->max_length) )
                                    goto LABEL_46;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_45;
                                  v43 = sortLabel->m_Items[0];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             27,
                                                                             0);
                                  if ( !v43 )
                                    goto LABEL_45;
                                  UILabel__set_text(v43, (System_String_o *)gameObject, 0);
                                  v44 = this->fields.sortLabel;
                                  if ( !v44 )
                                    goto LABEL_45;
                                  if ( LODWORD(v44->max_length) <= 1 )
                                    goto LABEL_46;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_45;
                                  v45 = v44->m_Items[1];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             2,
                                                                             0);
                                  if ( !v45 )
                                    goto LABEL_45;
                                  UILabel__set_text(v45, (System_String_o *)gameObject, 0);
                                  v46 = this->fields.sortLabel;
                                  if ( !v46 )
                                    goto LABEL_45;
                                  if ( LODWORD(v46->max_length) <= 2 )
                                    goto LABEL_46;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_45;
                                  v47 = v46->m_Items[2];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             14,
                                                                             0);
                                  if ( !v47 )
                                    goto LABEL_45;
                                  UILabel__set_text(v47, (System_String_o *)gameObject, 0);
                                  v48 = this->fields.sortLabel;
                                  if ( !v48 )
                                    goto LABEL_45;
                                  if ( LODWORD(v48->max_length) <= 3 )
LABEL_46:
                                    sub_1C71610(gameObject);
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( *p_operationSortInfo )
                                  {
                                    v49 = v48->m_Items[3];
                                    gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                               (ListViewSort_o *)gameObject,
                                                                               26,
                                                                               0);
                                    if ( v49 )
                                    {
                                      UILabel__set_text(v49, (System_String_o *)gameObject, 0);
                                      CoinRoomSortSelectManager__SetupUseFilterKindList(this, v50);
                                      CoinRoomSortSelectManager__SetupFilterButtons(
                                        this,
                                        this->fields.operationSortInfo,
                                        v51);
                                      CoinRoomSortSelectManager__SetupButtonLayout(this, this->fields.kind, v52);
                                      CoinRoomSortSelectManager__SetButtenEnable(this, 1, v53);
                                      CoinRoomSortSelectManager__SetButtenSelect(this, v54);
                                      operationSortInfo = this->fields.operationSortInfo;
                                      if ( operationSortInfo )
                                      {
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.smartSortBtnSprite;
                                        if ( gameObject )
                                        {
                                          v56 = (System_String_o **)(operationSortInfo->fields.isSmartSort
                                                                   ? &StringLiteral_17529/*"btn_on"*/
                                                                   : &StringLiteral_17528/*"btn_off"*/);
                                          UISprite__set_spriteName((UISprite_o *)gameObject, *v56, 0);
                                          scrollView = this->fields.scrollView;
                                          if ( scrollView )
                                          {
                                            if ( *p_baseSortInfo )
                                            {
                                              gameObject = (UnityEngine_GameObject_o *)scrollView->fields.verticalScrollBar;
                                              if ( gameObject )
                                              {
                                                UIProgressBar__set_value(
                                                  (UIProgressBar_o *)gameObject,
                                                  (*p_baseSortInfo)->fields.scrollBarValue,
                                                  0);
                                                this->fields.state = 1;
                                                v58 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v58,
                                                  (Il2CppObject *)this,
                                                  Method_CoinRoomSortSelectManager_EndOpen__,
                                                  0);
                                                BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0, 0);
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
    sub_1C71608(gameObject, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomSortSelectManager__SetButtenEnable(
        CoinRoomSortSelectManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  struct UICommonButton_array *sortButton; // x8
  struct UICommonButton_array *v7; // x8
  struct UICommonButton_array *v8; // x8
  struct UICommonButton_array *v9; // x8
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCB296 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4CCB296 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.resetButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  sortButton = this->fields.sortButton;
  if ( !sortButton )
    goto LABEL_26;
  if ( !LODWORD(sortButton->max_length) )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)sortButton->m_Items[0];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  v7 = this->fields.sortButton;
  if ( !v7 )
    goto LABEL_26;
  if ( LODWORD(v7->max_length) <= 1 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v7->m_Items[1];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  v8 = this->fields.sortButton;
  if ( !v8 )
    goto LABEL_26;
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v8->m_Items[2];
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0), (v9 = this->fields.sortButton) == 0) )
  {
LABEL_26:
    sub_1C71608(decideButton, isEnable);
  }
  if ( LODWORD(v9->max_length) <= 3 )
LABEL_27:
    sub_1C71610(decideButton);
  decideButton = (UnityEngine_Behaviour_o *)v9->m_Items[3];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1C71608(0, v10);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v11.fields._current, isEnable, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void CoinRoomSortSelectManager__SetButtenSelect(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v2; // x19
  struct UICommonButton_array *sortButton; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v5; // x8
  struct UICommonButton_array *v6; // x8
  struct ListViewSort_o *v7; // x8
  System_String_o **v8; // x8
  struct UICommonButton_array *v9; // x8
  struct ListViewSort_o *v10; // x8
  __int64 *v11; // x8
  struct UICommonButton_array *v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v18; // x1
  FilterKindList_c *v19; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v21; // x1
  ListViewSort_o *v22; // x0
  bool v23; // w0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4CCB298 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C713B0(&FilterKindList_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_1C713B0(&StringLiteral_17461/*"btn_bg_04"*/);
    this = (CoinRoomSortSelectManager_o *)sub_1C713B0(&StringLiteral_17460/*"btn_bg_03"*/);
    byte_4CCB298 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  sortButton = v2->fields.sortButton;
  if ( !sortButton )
    goto LABEL_48;
  if ( !LODWORD(sortButton->max_length) )
    goto LABEL_50;
  this = (CoinRoomSortSelectManager_o *)sortButton->m_Items[0];
  if ( !this )
    goto LABEL_48;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = v2->fields.operationSortInfo;
  if ( !operationSortInfo || !this )
    goto LABEL_48;
  v5 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17460/*"btn_bg_03"*/ : &StringLiteral_17461/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v5, 0);
  v6 = v2->fields.sortButton;
  if ( !v6 )
    goto LABEL_48;
  if ( LODWORD(v6->max_length) <= 1 )
    goto LABEL_50;
  this = (CoinRoomSortSelectManager_o *)v6->m_Items[1];
  if ( !this )
    goto LABEL_48;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v7 = v2->fields.operationSortInfo;
  if ( !v7 || !this )
    goto LABEL_48;
  v8 = (System_String_o **)(v7->fields.sortKind == 2 ? &StringLiteral_17460/*"btn_bg_03"*/ : &StringLiteral_17461/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v8, 0);
  v9 = v2->fields.sortButton;
  if ( !v9 )
    goto LABEL_48;
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_50;
  if ( (this = (CoinRoomSortSelectManager_o *)v9->m_Items[2]) == 0
    || (this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v10 = v2->fields.operationSortInfo) == 0)
    || !this
    || (v10->fields.sortKind != 14 ? (v11 = &StringLiteral_17461/*"btn_bg_04"*/) : (v11 = &StringLiteral_17460/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v11, 0),
        (v12 = v2->fields.sortButton) == 0) )
  {
LABEL_48:
    sub_1C71608(this, method);
  }
  if ( LODWORD(v12->max_length) <= 3 )
LABEL_50:
    sub_1C71610(this);
  this = (CoinRoomSortSelectManager_o *)v12->m_Items[3];
  if ( !this )
    goto LABEL_48;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v13 = v2->fields.operationSortInfo;
  if ( !v13 || !this )
    goto LABEL_48;
  v14 = (System_String_o **)(v13->fields.sortKind == 26 ? &StringLiteral_17460/*"btn_bg_03"*/ : &StringLiteral_17461/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v14, 0);
  this = (CoinRoomSortSelectManager_o *)v2->fields.useFilterButtonList;
  if ( !this )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v15 )
      break;
    current = (ServantFilterButtonControl_o *)v25.fields._current;
    if ( !v25.fields._current )
      sub_1C71608(v15, v16);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v25.fields._current, 0);
    v19 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v19 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v19->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1C71608(0, v18);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_37F6298 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v22 = v2->fields.operationSortInfo;
      if ( !v22 )
        sub_1C71608(0, v21);
      v23 = ListViewSort__CheckSvtGroupFilter(v22, current->fields.filterKind, 0);
      ServantFilterButtonControl__SetButtonMask(current, !v23, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomSortSelectManager__SetupButtonLayout(
        CoinRoomSortSelectManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *servantSortRoot; // x0
  bool v6; // w1
  System_Array_o *v7; // x0
  System_RuntimeFieldHandle_o v8; // x1
  ListViewSort_FilterCategoryKind_array *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4CCB297 & 1) == 0 )
  {
    sub_1C713B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805);
    byte_4CCB297 = 1;
  }
  if ( kind == 1 )
  {
    servantSortRoot = this->fields.servantSortRoot;
    if ( servantSortRoot )
    {
      UnityEngine_GameObject__SetActive(servantSortRoot, 0, 0);
      servantSortRoot = this->fields.servantFilterRoot;
      if ( servantSortRoot )
      {
        v6 = 1;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_1C71608(servantSortRoot, *(_QWORD *)&kind);
  }
  if ( kind )
    goto LABEL_12;
  servantSortRoot = this->fields.servantSortRoot;
  if ( !servantSortRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(servantSortRoot, 1, 0);
  servantSortRoot = this->fields.servantFilterRoot;
  if ( !servantSortRoot )
    goto LABEL_14;
  v6 = 0;
LABEL_11:
  UnityEngine_GameObject__SetActive(servantSortRoot, v6, 0);
LABEL_12:
  v7 = (System_Array_o *)sub_1C71458(ListViewSort_FilterCategoryKind___TypeInfo, 4);
  v8.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805;
  v9 = (ListViewSort_FilterCategoryKind_array *)v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v7, v8, 0);
  CoinRoomSortSelectManager__InitCategoryContainer(this, v9, v10);
  servantSortRoot = (UnityEngine_GameObject_o *)this->fields.scrollView;
  if ( !servantSortRoot )
    goto LABEL_14;
  UIScrollView__ResetPosition((UIScrollView_o *)servantSortRoot, 0);
}


void CoinRoomSortSelectManager__SetupFilterButtons(
        CoinRoomSortSelectManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  System_Predicate_object__o *v6; // x22
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v20; // w22
  ServantFilterButtonControl_OnClickFilterButton_o *v21; // x23
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4CCB295 & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinRoomSortSelectManager_OnClickFilterButton__);
    sub_1C713B0(&Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_1C713B0(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_1C713B0(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    byte_4CCB295 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  filterButtonList = this->fields.filterButtonList;
  v6 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__,
    0);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)filterButtonList,
                (System_Predicate_T__o *)v6,
                (const MethodInfo_3810E28 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.useFilterButtonList,
          (int32_t)All,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (v7 = this->fields.filterButtonList) == 0) )
  {
    sub_1C71608(v7, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)v7,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v16 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1C71608(v16, v17);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1C71608(0, v17);
    v20 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            *(_DWORD *)((char *)&v22.fields._current->klass + (unsigned __int64)&qword_20),
            (const MethodInfo_37F6298 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v21 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1C715FC(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_CoinRoomSortSelectManager_OnClickFilterButton__,
      0);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v21, v20, 0, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void CoinRoomSortSelectManager__SetupUseFilterKindList(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20

  v2 = this;
  if ( (byte_4CCB293 & 1) == 0 )
  {
    sub_1C713B0(&FilterKindList_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    this = (CoinRoomSortSelectManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CCB293 = 1;
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
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v5->static_fields->RarityFilterKindList,
    (const MethodInfo_37F612C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (CoinRoomSortSelectManager_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this
    || (v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList,
        this = (CoinRoomSortSelectManager_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)this,
                                                (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v6)
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          v6,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_37F612C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (CoinRoomSortSelectManager_o *)v2->fields.useFilterKindList) == 0) )
  {
LABEL_10:
    sub_1C71608(this, method);
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_37F612C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool CoinRoomSortSelectManager___SetupFilterButtons_b__53_0(
        CoinRoomSortSelectManager_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v4; // x20

  v4 = this;
  if ( (byte_4CCB2A6 & 1) == 0 )
  {
    this = (CoinRoomSortSelectManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_4CCB2A6 = 1;
  }
  if ( !x || (this = (CoinRoomSortSelectManager_o *)v4->fields.useFilterKindList) == 0 )
    sub_1C71608(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_37F6298 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void CoinRoomSortSelectManager__add_callbackFunc(
        CoinRoomSortSelectManager_o *this,
        CoinRoomSortSelectManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CoinRoomSortSelectManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CoinRoomSortSelectManager_o *v10; // x0
  CoinRoomSortSelectManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CCB28F & 1) == 0 )
  {
    sub_1C713B0(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    byte_4CCB28F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CoinRoomSortSelectManager_CallbackFunc_c *)v7->klass != CoinRoomSortSelectManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
  CoinRoomSortSelectManager__remove_callbackFunc(v10, v11, v12);
}


void CoinRoomSortSelectManager__remove_callbackFunc(
        CoinRoomSortSelectManager_o *this,
        CoinRoomSortSelectManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CoinRoomSortSelectManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CoinRoomSortSelectManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CCB290 & 1) == 0 )
  {
    sub_1C713B0(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    byte_4CCB290 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CoinRoomSortSelectManager_CallbackFunc_c *)v7->klass != CoinRoomSortSelectManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
  CoinRoomSortSelectManager__Init(v10, v11);
}


void CoinRoomSortSelectManager_CallbackFunc___ctor(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
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
  sub_1C71354(
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
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AABA08;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAB9C0;
}


System_IAsyncResult_o *CoinRoomSortSelectManager_CallbackFunc__BeginInvoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CCB2A7 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CCB2A7 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void CoinRoomSortSelectManager_CallbackFunc__EndInvoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void CoinRoomSortSelectManager_CallbackFunc__Invoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void CoinRoomSortSelectManager___c__DisplayClass52_0___ctor(
        CoinRoomSortSelectManager___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CoinRoomSortSelectManager___c__DisplayClass52_0___InitCategoryContainer_b__0(
        CoinRoomSortSelectManager___c__DisplayClass52_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.categoryKind == this->fields.kind;
}