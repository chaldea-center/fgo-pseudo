void MaterialCostumeServantSortSelectMenu___ctor(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
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

  if ( (byte_4CC258C & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    byte_4CC258C = 1;
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


void MaterialCostumeServantSortSelectMenu__Callback(
        MaterialCostumeServantSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v9; // x20
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void MaterialCostumeServantSortSelectMenu__Close(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantSortSelectMenu__Close_33560088(this, 0, v2);
}


void MaterialCostumeServantSortSelectMenu__Close_33560088(
        MaterialCostumeServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CC2584 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu_EndClose__);
    byte_4CC2584 = 1;
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
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void MaterialCostumeServantSortSelectMenu__EndClose(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C71354(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void MaterialCostumeServantSortSelectMenu__EndOpen(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void MaterialCostumeServantSortSelectMenu__Init(MaterialCostumeServantSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void MaterialCostumeServantSortSelectMenu__InitCategoryContainer(
        MaterialCostumeServantSortSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v4; // x20
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
  System_Collections_Generic_List_object__o *filterContainerList; // x22
  System_Predicate_object__o *v17; // x23
  Il2CppObject *v18; // x21
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CC2583 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__);
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1C713B0(&MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo);
    byte_4CC2583 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !categoryKindKist )
    goto LABEL_28;
  max_length = categoryKindKist->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_29;
  this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.filterContainerList;
  if ( !this )
    goto LABEL_28;
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
      v15 = sub_1C715FC(MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( v10 >= LODWORD(categoryKindKist->max_length) )
        break;
      if ( !v15 )
        goto LABEL_28;
      *(_DWORD *)(v15 + 16) = categoryKindKist->m_Items[v10];
      filterContainerList = (System_Collections_Generic_List_object__o *)v4->fields.filterContainerList;
      v17 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v15,
        Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__,
        0);
      if ( !filterContainerList )
        goto LABEL_28;
      v18 = System_Collections_Generic_List_object___Find(
              filterContainerList,
              (System_Predicate_T__o *)v17,
              (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MaterialCostumeServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)v18,
                                                         0,
                                                         0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_28;
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
        goto LABEL_26;
    }
LABEL_29:
    sub_1C71610(this);
  }
LABEL_26:
  this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.filterScrollView;
  if ( !this )
LABEL_28:
    sub_1C71608(this, categoryKindKist);
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0);
}


void MaterialCostumeServantSortSelectMenu__OnClickCancel(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC2588 & 1) == 0 )
  {
    sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__);
    byte_4CC2588 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    MaterialCostumeServantSortSelectMenu__Callback(this, 0, v5);
  }
}


void MaterialCostumeServantSortSelectMenu__OnClickClear(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4CC258A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu_OnClickClear__);
    byte_4CC258A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCostumeServantSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_MaterialCostumeServantSortSelectMenu_OnClickClear__);
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
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v8);
  }
}


void MaterialCostumeServantSortSelectMenu__OnClickDecide(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v2; // x19
  struct UIScrollView_o *filterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4CC2587 & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__);
    byte_4CC2587 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    filterScrollView = v2->fields.filterScrollView;
    if ( !filterScrollView )
      goto LABEL_12;
    this = (MaterialCostumeServantSortSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C713C8(Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C71394(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (MaterialCostumeServantSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1C71608(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0);
    MaterialCostumeServantSortSelectMenu__Callback(v2, 1, v9);
  }
}


void MaterialCostumeServantSortSelectMenu__OnClickFilterButton(
        MaterialCostumeServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4CC2589 & 1) == 0 )
  {
    sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__);
    byte_4CC2589 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C713C8(Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C71394(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C71608(0, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void MaterialCostumeServantSortSelectMenu__Open(
        MaterialCostumeServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callback,
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
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *allSelectResetLabel; // x21
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  System_Array_o *v36; // x21
  System_RuntimeFieldHandle_o v37; // x1
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  struct UIScrollView_o *filterScrollView; // x8
  System_Action_o *v42; // x20

  if ( (byte_4CC2580 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C713B0(&ListViewSort_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu_EndOpen__);
    sub_1C713B0(&Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE);
    sub_1C713B0(&StringLiteral_11890/*"SERVANT_SORT_RESET"*/);
    sub_1C713B0(&StringLiteral_11724/*"SERVANT_SORT_CANCEL"*/);
    sub_1C713B0(&StringLiteral_11728/*"SERVANT_SORT_DECIDE"*/);
    sub_1C713B0(&StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/);
    sub_1C713B0(&StringLiteral_11725/*"SERVANT_SORT_CLEAR"*/);
    byte_4CC2580 = 1;
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
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.baseSortInfo = sort;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v15, v16, v17, v18, v19, v20);
    baseSortInfo = this->fields.baseSortInfo;
    v22 = (ListViewSort_o *)sub_1C715FC(ListViewSort_TypeInfo);
    ListViewSort___ctor_44131716(v22, baseSortInfo, 0);
    this->fields.operationSortInfo = v22;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, 0);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11728/*"SERVANT_SORT_DECIDE"*/, 0);
    if ( !decideLabel )
      goto LABEL_16;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
    cancelLabel = this->fields.cancelLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11724/*"SERVANT_SORT_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_16;
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
    clearLabel = this->fields.clearLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11725/*"SERVANT_SORT_CLEAR"*/, 0);
    if ( !clearLabel )
      goto LABEL_16;
    UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0);
    allSelectResetLabel = this->fields.allSelectResetLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_RESET"*/, 0);
    if ( !allSelectResetLabel )
      goto LABEL_16;
    UILabel__set_text(allSelectResetLabel, (System_String_o *)gameObject, 0);
    MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(this, v34);
    MaterialCostumeServantSortSelectMenu__SetupFilterButtons(this, this->fields.operationSortInfo, v35);
    v36 = (System_Array_o *)sub_1C71458(ListViewSort_FilterCategoryKind___TypeInfo, 6);
    v37.fields.value = Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v36, v37, 0);
    MaterialCostumeServantSortSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v36, v38);
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(this, 1, v39);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v40);
    filterScrollView = this->fields.filterScrollView;
    if ( !filterScrollView
      || !*p_baseSortInfo
      || (gameObject = (UnityEngine_GameObject_o *)filterScrollView->fields.verticalScrollBar) == 0 )
    {
LABEL_16:
      sub_1C71608(gameObject, v13);
    }
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, (*p_baseSortInfo)->fields.scrollBarValue, 0);
    this->fields.state = 1;
    v42 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialCostumeServantSortSelectMenu__SetButtenEnable(
        MaterialCostumeServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC2585 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4CC2585 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.allSelectResetButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList) == 0) )
  {
LABEL_14:
    sub_1C71608(decideButton, isEnable);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v7.fields._current )
      sub_1C71608(0, v6);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v7.fields._current, isEnable, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void MaterialCostumeServantSortSelectMenu__SetButtenSelect(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v7; // x1
  FilterKindList_c *v8; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v10; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v12; // w0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC2586 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C713B0(&FilterKindList_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4CC2586 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)useFilterButtonList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v4 )
      break;
    current = (ServantFilterButtonControl_o *)v14.fields._current;
    if ( !v14.fields._current )
      sub_1C71608(v4, v5);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v14.fields._current, 0);
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1C71608(0, v7);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_37F6298 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1C71608(0, v10);
      v12 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, current->fields.filterKind, 0);
      ServantFilterButtonControl__SetButtonMask(current, !v12, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void MaterialCostumeServantSortSelectMenu__SetupFilterButtons(
        MaterialCostumeServantSortSelectMenu_o *this,
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

  if ( (byte_4CC2582 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__);
    sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__);
    sub_1C713B0(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_1C713B0(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    byte_4CC2582 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  filterButtonList = this->fields.filterButtonList;
  v6 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v6,
    (Il2CppObject *)this,
    Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__,
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
      (intptr_t)Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__,
      0);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v21, v20, 0, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x20

  v2 = this;
  if ( (byte_4CC2581 & 1) == 0 )
  {
    sub_1C713B0(&FilterKindList_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CC2581 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_12;
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
  this = (MaterialCostumeServantSortSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_12;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_37F612C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (MaterialCostumeServantSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this
    || (v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList,
        this = (MaterialCostumeServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                           (System_Collections_Generic_List_T__o *)this,
                                                           (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v6)
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          v6,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_37F612C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (MaterialCostumeServantSortSelectMenu_o *)v2->fields.useFilterKindList) == 0)
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          (System_Collections_Generic_List_T__o *)this,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CollectionStateFilterKindList,
          (const MethodInfo_37F612C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (MaterialCostumeServantSortSelectMenu_o *)v2->fields.useFilterKindList) == 0) )
  {
LABEL_12:
    sub_1C71608(this, method);
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->MaterialServantCostumeFilterKindList,
    (const MethodInfo_37F612C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool MaterialCostumeServantSortSelectMenu___SetupFilterButtons_b__28_0(
        MaterialCostumeServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4CC258D & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_4CC258D = 1;
  }
  if ( !x || (this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0 )
    sub_1C71608(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_37F6298 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void MaterialCostumeServantSortSelectMenu__add_callbackFunc(
        MaterialCostumeServantSortSelectMenu_o *this,
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCostumeServantSortSelectMenu_o *v11; // x0
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CC257E & 1) == 0 )
  {
    sub_1C713B0(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4CC257E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MaterialCostumeServantSortSelectMenu_CallbackFunc_c *)v8->klass != MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantSortSelectMenu_o *)sub_1C719A4(v8);
  MaterialCostumeServantSortSelectMenu__remove_callbackFunc(v11, v12, v13);
}


void MaterialCostumeServantSortSelectMenu__onClickFilterAllSelectReset(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4CC258B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C713B0(&Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__);
    byte_4CC258B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__);
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
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v8);
  }
}


void MaterialCostumeServantSortSelectMenu__remove_callbackFunc(
        MaterialCostumeServantSortSelectMenu_o *this,
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCostumeServantSortSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC257F & 1) == 0 )
  {
    sub_1C713B0(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4CC257F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MaterialCostumeServantSortSelectMenu_CallbackFunc_c *)v8->klass != MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantSortSelectMenu_o *)sub_1C719A4(v8);
  MaterialCostumeServantSortSelectMenu__Init(v11, v12);
}


void MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1A9FA90;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9FA48;
}


System_IAsyncResult_o *MaterialCostumeServantSortSelectMenu_CallbackFunc__BeginInvoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CC258E & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC258E = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void MaterialCostumeServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void MaterialCostumeServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0___ctor(
        MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0___InitCategoryContainer_b__0(
        MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.categoryKind == this->fields.kind;
}