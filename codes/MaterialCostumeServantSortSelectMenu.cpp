void __fastcall MaterialCostumeServantSortSelectMenu___ctor(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x20

  if ( (byte_4BC2FD7 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseDialog_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v6);
    byte_4BC2FD7 = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1C1AE20(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3621844 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v7;
  sub_1C1AB78(&this->fields.useFilterKindList);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v8;
  sub_1C1AB78(&this->fields.useFilterButtonList);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantSortSelectMenu__Callback(
        MaterialCostumeServantSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v4; // x20
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C1AB78(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__Close(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantSortSelectMenu__Close_32120608(this, 0LL, v2);
}


void __fastcall MaterialCostumeServantSortSelectMenu__Close_32120608(
        MaterialCostumeServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4BC2FCF & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_MaterialCostumeServantSortSelectMenu_EndClose__, v5);
    byte_4BC2FCF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall MaterialCostumeServantSortSelectMenu__EndClose(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C1AB78(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__EndOpen(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall MaterialCostumeServantSortSelectMenu__Init(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantSortSelectMenu__InitCategoryContainer(
        MaterialCostumeServantSortSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x8
  int v14; // w27
  Il2CppObject *current; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  unsigned __int64 v18; // x25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v23; // x21
  System_Collections_Generic_List_object__o *filterContainerList; // x22
  System_Predicate_object__o *v25; // x23
  Il2CppObject *v26; // x21
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4BC2FCE & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__,
      categoryKindKist);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    sub_1C1ABD4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1C1ABD4(&Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__, v11);
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1C1ABD4(
                                                       &MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo,
                                                       v12);
    byte_4BC2FCE = 1;
  }
  memset(&v28, 0, sizeof(v28));
  if ( !categoryKindKist )
    goto LABEL_28;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
    goto LABEL_29;
  this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.filterContainerList;
  if ( !this )
    goto LABEL_28;
  v14 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v16 )
    {
      if ( !current )
        sub_1C1AE30(v16, v17);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, categoryKindKist);
    byte_4BC2141 = 1;
  }
  if ( (int)categoryKindKist->max_length >= 1 )
  {
    v18 = 0LL;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    x = static_fields->zeroVector.fields.x;
    while ( 1 )
    {
      v23 = sub_1C1AE20(MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      if ( v18 >= categoryKindKist->max_length )
        break;
      if ( !v23 )
        goto LABEL_28;
      *(_DWORD *)(v23 + 16) = categoryKindKist->m_Items[v18 + 1];
      filterContainerList = (System_Collections_Generic_List_object__o *)v4->fields.filterContainerList;
      v25 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_object____ctor(
        v25,
        (Il2CppObject *)v23,
        Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__,
        0LL);
      if ( !filterContainerList )
        goto LABEL_28;
      v26 = System_Collections_Generic_List_object___Find(
              filterContainerList,
              (System_Predicate_T__o *)v25,
              (const MethodInfo_363CEF8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MaterialCostumeServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)v26,
                                                         0LL,
                                                         0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_28;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v26, 1, 0LL);
        v29.fields.x = x;
        v29.fields.y = y;
        v29.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v26, v29, 0LL);
        ServantFilterCategoryContainer__Layout(
          (ServantFilterCategoryContainer_o *)v26,
          HIDWORD(v26[3].monitor) == v14,
          0LL);
        BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(
                           (ServantFilterCategoryContainer_o *)v26,
                           0LL);
        x = BottomPosition.fields.x;
        y = BottomPosition.fields.y;
        z = BottomPosition.fields.z;
      }
      if ( (__int64)++v18 >= (int)categoryKindKist->max_length )
        goto LABEL_26;
    }
LABEL_29:
    sub_1C1AE38(this, categoryKindKist);
  }
LABEL_26:
  this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.filterScrollView;
  if ( !this )
LABEL_28:
    sub_1C1AE30(this, categoryKindKist);
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickCancel(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4BC2FD3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__, method);
    byte_4BC2FD3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    MaterialCostumeServantSortSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickClear(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4BC2FD5 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1C1ABD4(&Method_MaterialCostumeServantSortSelectMenu_OnClickClear__, v3);
    byte_4BC2FD5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCostumeServantSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeServantSortSelectMenu_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_3623B50 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1C1AE30(useFilterKindList, v6);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickDecide(
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
  if ( (byte_4BC2FD2 & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1C1ABD4(
                                                       &Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__,
                                                       method);
    byte_4BC2FD2 = 1;
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
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    this = (MaterialCostumeServantSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1C1AE30(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    MaterialCostumeServantSortSelectMenu__Callback(v2, 1, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu__OnClickFilterButton(
        MaterialCostumeServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4BC2FD4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__, *(_QWORD *)&filterKind);
    byte_4BC2FD4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C1AE30(0LL, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu__Open(
        MaterialCostumeServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v23; // x22
  UILabel_o *titleLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *allSelectResetLabel; // x21
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  System_Array_o *v31; // x21
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  struct UIScrollView_o *filterScrollView; // x8
  System_Action_o *v36; // x20
  System_RuntimeFieldHandle_o v37; // 0:w1.4

  if ( (byte_4BC2FCB & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&ListViewSort_FilterCategoryKind___TypeInfo, v9);
    sub_1C1ABD4(&ListViewSort_TypeInfo, v10);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v11);
    sub_1C1ABD4(&Method_MaterialCostumeServantSortSelectMenu_EndOpen__, v12);
    sub_1C1ABD4(
      &Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE,
      v13);
    sub_1C1ABD4(&StringLiteral_12045/*"SERVANT_SORT_RESET"*/, v14);
    sub_1C1ABD4(&StringLiteral_11894/*"SERVANT_SORT_CANCEL"*/, v15);
    sub_1C1ABD4(&StringLiteral_11898/*"SERVANT_SORT_DECIDE"*/, v16);
    sub_1C1ABD4(&StringLiteral_12047/*"SERVANT_SORT_TITLE2"*/, v17);
    sub_1C1ABD4(&StringLiteral_11895/*"SERVANT_SORT_CLEAR"*/, v18);
    byte_4BC2FCB = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C1AB78(&this->fields.callbackFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.baseSortInfo = sort;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_1C1AB78(&this->fields.baseSortInfo);
    baseSortInfo = this->fields.baseSortInfo;
    v23 = (ListViewSort_o *)sub_1C1AE20(ListViewSort_TypeInfo);
    ListViewSort___ctor_41977792(v23, baseSortInfo, 0LL);
    this->fields.operationSortInfo = v23;
    sub_1C1AB78(&this->fields.operationSortInfo);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12047/*"SERVANT_SORT_TITLE2"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11898/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_16;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
    cancelLabel = this->fields.cancelLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_16;
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
    clearLabel = this->fields.clearLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_SORT_CLEAR"*/, 0LL);
    if ( !clearLabel )
      goto LABEL_16;
    UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
    allSelectResetLabel = this->fields.allSelectResetLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12045/*"SERVANT_SORT_RESET"*/, 0LL);
    if ( !allSelectResetLabel )
      goto LABEL_16;
    UILabel__set_text(allSelectResetLabel, (System_String_o *)gameObject, 0LL);
    MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(this, v29);
    MaterialCostumeServantSortSelectMenu__SetupFilterButtons(this, this->fields.operationSortInfo, v30);
    v31 = (System_Array_o *)sub_1C1AC7C(ListViewSort_FilterCategoryKind___TypeInfo, 6LL);
    v37.fields.value = Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62947704(v31, v37, 0LL);
    MaterialCostumeServantSortSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v31, v32);
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(this, 1, v33);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v34);
    filterScrollView = this->fields.filterScrollView;
    if ( !filterScrollView
      || !*p_baseSortInfo
      || (gameObject = (UnityEngine_GameObject_o *)filterScrollView->fields.verticalScrollBar) == 0LL )
    {
LABEL_16:
      sub_1C1AE30(gameObject, v20);
    }
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, (*p_baseSortInfo)->fields.scrollBarValue, 0LL);
    this->fields.state = 1;
    v36 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu__SetButtenEnable(
        MaterialCostumeServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC2FD0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4BC2FD0 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_14;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.allSelectResetButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_14:
    sub_1C1AE30(decideButton, isEnable);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_1C1AE30(0LL, v9);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v10.fields._current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetButtenSelect(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v12; // x1
  FilterKindList_c *v13; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v15; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v17; // w0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC2FD1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v4);
    sub_1C1ABD4(&FilterKindList_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4BC2FD1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    sub_1C1AE30(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)useFilterButtonList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    current = (ServantFilterButtonControl_o *)v19.fields._current;
    if ( !v19.fields._current )
      sub_1C1AE30(v9, v10);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v19.fields._current, 0LL);
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v13 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v13->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1C1AE30(0LL, v12);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_3622410 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1C1AE30(0LL, v15);
      v17 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v17, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetupFilterButtons(
        MaterialCostumeServantSortSelectMenu_o *this,
        ListViewSort_o *sort,
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
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  System_Predicate_object__o *v15; // x22
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *v16; // x0
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v22; // w22
  ServantFilterButtonControl_OnClickFilterButton_o *v23; // x23
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4BC2FCD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, sort);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9);
    sub_1C1ABD4(&Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__, v10);
    sub_1C1ABD4(&Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__, v11);
    sub_1C1ABD4(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v12);
    sub_1C1ABD4(&System_Predicate_ServantFilterButtonControl__TypeInfo, v13);
    byte_4BC2FCD = 1;
  }
  memset(&v24, 0, sizeof(v24));
  filterButtonList = this->fields.filterButtonList;
  v15 = (System_Predicate_object__o *)sub_1C1AE20(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)this,
    Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__,
    0LL);
  if ( !filterButtonList
    || (this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)System_Collections_Generic_List_object___FindAll((System_Collections_Generic_List_object__o *)filterButtonList, (System_Predicate_T__o *)v15, (const MethodInfo_363CFA0 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        sub_1C1AB78(&this->fields.useFilterButtonList),
        (v16 = this->fields.filterButtonList) == 0LL) )
  {
    sub_1C1AE30(v16, v17);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)v16,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v18 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1C1AE30(v18, v19);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1C1AE30(0LL, v19);
    v22 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            (int32_t)v24.fields._current[2].klass,
            (const MethodInfo_3622410 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v23 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1C1AE20(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v23, v22, 0, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v7; // w8
  FilterKindList_c *v8; // x0
  System_Collections_Generic_List_T__o *v9; // x20

  v2 = this;
  if ( (byte_4BC2FCC & 1) == 0 )
  {
    sub_1C1ABD4(&FilterKindList_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v4);
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1C1ABD4(
                                                       &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                                       v5);
    byte_4BC2FCC = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_12;
  v7 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v7;
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v8->static_fields->RarityFilterKindList,
    (const MethodInfo_36222A4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (MaterialCostumeServantSortSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this )
    goto LABEL_12;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_36222A4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (MaterialCostumeServantSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this
    || (v9 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList,
        this = (MaterialCostumeServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                           (System_Collections_Generic_List_T__o *)this,
                                                           (const MethodInfo_3623B50 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v9)
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_36222A4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (MaterialCostumeServantSortSelectMenu_o *)v2->fields.useFilterKindList) == 0LL)
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          (System_Collections_Generic_List_T__o *)this,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CollectionStateFilterKindList,
          (const MethodInfo_36222A4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (MaterialCostumeServantSortSelectMenu_o *)v2->fields.useFilterKindList) == 0LL) )
  {
LABEL_12:
    sub_1C1AE30(this, method);
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->MaterialServantCostumeFilterKindList,
    (const MethodInfo_36222A4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall MaterialCostumeServantSortSelectMenu___SetupFilterButtons_b__28_0(
        MaterialCostumeServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4BC2FD8 & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1C1ABD4(
                                                       &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                       x);
    byte_4BC2FD8 = 1;
  }
  if ( !x || (this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1C1AE30(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_3622410 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__add_callbackFunc(
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

  if ( (byte_4BC2FC9 & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BC2FC9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialCostumeServantSortSelectMenu_CallbackFunc_c *)v8->klass != MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantSortSelectMenu_o *)sub_1C1B0F0(v8);
  MaterialCostumeServantSortSelectMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialCostumeServantSortSelectMenu__onClickFilterAllSelectReset(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4BC2FD6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1C1ABD4(&Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__, v3);
    byte_4BC2FD6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_3623B50 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1C1AE30(useFilterKindList, v6);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__remove_callbackFunc(
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

  if ( (byte_4BC2FCA & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4BC2FCA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialCostumeServantSortSelectMenu_CallbackFunc_c *)v8->klass != MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantSortSelectMenu_o *)sub_1C1B0F0(v8);
  MaterialCostumeServantSortSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
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
  sub_1C1AB78(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A554A4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5545C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc__BeginInvoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4BC2FD9 & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, result);
    byte_4BC2FD9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0___ctor(
        MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0___InitCategoryContainer_b__0(
        MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.categoryKind == this->fields.kind;
}