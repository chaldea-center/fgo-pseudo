void __fastcall MaterialCostumeServantSortSelectMenu___ctor(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_T__o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1

  if ( (byte_4B117E6 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v11, v12);
    byte_4B117E6 = 1;
  }
  v13 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v13;
  sub_1BCA784(&this->fields.useFilterKindList, v13);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v17;
  sub_1BCA784(&this->fields.useFilterButtonList, v17);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v18);
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
    sub_1BCA784(p_callbackFunc, 0LL);
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

  MaterialCostumeServantSortSelectMenu__Close_31776816(this, 0LL, v2);
}


void __fastcall MaterialCostumeServantSortSelectMenu__Close_31776816(
        MaterialCostumeServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B117DE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_MaterialCostumeServantSortSelectMenu_EndClose__, v5, v6);
    byte_4B117DE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x8
  int v22; // w27
  __int64 v23; // x1
  Il2CppObject *current; // x21
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  unsigned __int64 v29; // x25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *filterContainerList; // x22
  System_Predicate_object__o *v38; // x23
  __int64 v39; // x1
  Il2CppObject *v40; // x21
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B117DD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__,
      categoryKindKist,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v5, v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v15, v16);
    sub_1BCA7E0(
      &Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__,
      v17,
      v18);
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1BCA7E0(
                                                       &MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo,
                                                       v19,
                                                       v20);
    byte_4B117DD = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !categoryKindKist )
    goto LABEL_28;
  v21 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v21 )
    goto LABEL_29;
  this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.filterContainerList;
  if ( !this )
    goto LABEL_28;
  v22 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v21 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    v25 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v25 )
    {
      if ( !current )
        sub_1BCAA3C(v25, v26);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, categoryKindKist, v27);
    byte_4B109C1 = 1;
  }
  if ( (int)categoryKindKist->max_length >= 1 )
  {
    v29 = 0LL;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    x = static_fields->zeroVector.fields.x;
    while ( 1 )
    {
      v34 = sub_1BCAA2C(MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo, categoryKindKist, v27, v28);
      System_Object___ctor((Il2CppObject *)v34, 0LL);
      if ( v29 >= categoryKindKist->max_length )
        break;
      if ( !v34 )
        goto LABEL_28;
      *(_DWORD *)(v34 + 16) = categoryKindKist->m_Items[v29 + 1];
      filterContainerList = (System_Collections_Generic_List_object__o *)v4->fields.filterContainerList;
      v38 = (System_Predicate_object__o *)sub_1BCAA2C(
                                            System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                            categoryKindKist,
                                            v35,
                                            v36);
      System_Predicate_object____ctor(
        v38,
        (Il2CppObject *)v34,
        Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__,
        0LL);
      if ( !filterContainerList )
        goto LABEL_28;
      v40 = System_Collections_Generic_List_object___Find(
              filterContainerList,
              (System_Predicate_T__o *)v38,
              (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
      this = (MaterialCostumeServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)v40,
                                                         0LL,
                                                         0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v40 )
          goto LABEL_28;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v40, 1, 0LL);
        v43.fields.x = x;
        v43.fields.y = y;
        v43.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v40, v43, 0LL);
        ServantFilterCategoryContainer__Layout(
          (ServantFilterCategoryContainer_o *)v40,
          HIDWORD(v40[3].monitor) == v22,
          0LL);
        BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(
                           (ServantFilterCategoryContainer_o *)v40,
                           0LL);
        x = BottomPosition.fields.x;
        y = BottomPosition.fields.y;
        z = BottomPosition.fields.z;
      }
      if ( (__int64)++v29 >= (int)categoryKindKist->max_length )
        goto LABEL_26;
    }
LABEL_29:
    sub_1BCAA44(this, categoryKindKist);
  }
LABEL_26:
  this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.filterScrollView;
  if ( !this )
LABEL_28:
    sub_1BCAA3C(this, categoryKindKist);
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickCancel(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B117E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__, method, v2);
    byte_4B117E2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeServantSortSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    MaterialCostumeServantSortSelectMenu__Callback(this, 0, v6);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickClear(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4B117E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method, v2);
    sub_1BCA7E0(&Method_MaterialCostumeServantSortSelectMenu_OnClickClear__, v4, v5);
    byte_4B117E4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_MaterialCostumeServantSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeServantSortSelectMenu_OnClickClear__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1BCAA3C(useFilterKindList, v8);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v11);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickDecide(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialCostumeServantSortSelectMenu_o *v3; // x19
  struct UIScrollView_o *filterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x2
  float value; // s0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4B117E1 & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1BCA7E0(
                                                       &Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__,
                                                       method,
                                                       v2);
    byte_4B117E1 = 1;
  }
  if ( v3->fields.state == 2 )
  {
    filterScrollView = v3->fields.filterScrollView;
    if ( !filterScrollView )
      goto LABEL_12;
    this = (MaterialCostumeServantSortSelectMenu_o *)filterScrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v3->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(v3, 0, v6);
    v3->fields.state = 3;
    v8 = Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeServantSortSelectMenu_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    this = (MaterialCostumeServantSortSelectMenu_o *)v3->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1BCAA3C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v3->fields.operationSortInfo, 0LL);
    MaterialCostumeServantSortSelectMenu__Callback(v3, 1, v10);
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

  if ( (byte_4B117E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__, *(_QWORD *)&filterKind, method);
    byte_4B117E3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(0LL, v7);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  ListViewSort_o *baseSortInfo; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  ListViewSort_o *v36; // x22
  __int64 v37; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *allSelectResetLabel; // x21
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  System_Array_o *v45; // x21
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x1
  struct UIScrollView_o *filterScrollView; // x8
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_o *v53; // x20
  System_RuntimeFieldHandle_o v54; // 0:w1.4

  if ( (byte_4B117DA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, sort);
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, v9, v10);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_MaterialCostumeServantSortSelectMenu_EndOpen__, v15, v16);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE,
      v17,
      v18);
    sub_1BCA7E0(&StringLiteral_11975/*"SERVANT_SORT_RESET"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11977/*"SERVANT_SORT_TITLE2"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/, v27, v28);
    byte_4B117DA = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.baseSortInfo = sort;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_1BCA784(&this->fields.baseSortInfo, sort);
    baseSortInfo = this->fields.baseSortInfo;
    v36 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v33, v34, v35);
    ListViewSort___ctor_41481440(v36, baseSortInfo, 0LL);
    this->fields.operationSortInfo = v36;
    sub_1BCA784(&this->fields.operationSortInfo, v36);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SERVANT_SORT_TITLE2"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_16;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_16;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
    cancelLabel = this->fields.cancelLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_16;
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
    clearLabel = this->fields.clearLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/, 0LL);
    if ( !clearLabel )
      goto LABEL_16;
    UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
    allSelectResetLabel = this->fields.allSelectResetLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11975/*"SERVANT_SORT_RESET"*/, 0LL);
    if ( !allSelectResetLabel )
      goto LABEL_16;
    UILabel__set_text(allSelectResetLabel, (System_String_o *)gameObject, 0LL);
    MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(this, v43);
    MaterialCostumeServantSortSelectMenu__SetupFilterButtons(this, this->fields.operationSortInfo, v44);
    v45 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 6LL);
    v54.fields.value = Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v45, v54, 0LL);
    MaterialCostumeServantSortSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v45, v46);
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(this, 1, v47);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v48);
    filterScrollView = this->fields.filterScrollView;
    if ( !filterScrollView
      || !*p_baseSortInfo
      || (gameObject = (UnityEngine_GameObject_o *)filterScrollView->fields.verticalScrollBar) == 0LL )
    {
LABEL_16:
      sub_1BCAA3C(gameObject, v30);
    }
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, (*p_baseSortInfo)->fields.scrollBarValue, 0LL);
    this->fields.state = 1;
    v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v50, v51, v52);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu__SetButtenEnable(
        MaterialCostumeServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B117DF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      isEnable,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9, v10);
    byte_4B117DF = 1;
  }
  memset(&v13, 0, sizeof(v13));
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
    sub_1BCAA3C(decideButton, isEnable);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1BCAA3C(0LL, v12);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v13.fields._current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetButtenSelect(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v18; // x1
  FilterKindList_c *v19; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v21; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v23; // w0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B117E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6, v7);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v12, v13);
    byte_4B117E0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)useFilterButtonList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v15 )
      break;
    current = (ServantFilterButtonControl_o *)v25.fields._current;
    if ( !v25.fields._current )
      sub_1BCAA3C(v15, v16);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v25.fields._current, 0LL);
    v19 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v18);
      v19 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v19->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1BCAA3C(0LL, v18);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_1BCAA3C(0LL, v21);
      v23 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v23, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetupFilterButtons(
        MaterialCostumeServantSortSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  System_Predicate_object__o *v25; // x22
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_T__o *All; // x0
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v33; // w22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  ServantFilterButtonControl_OnClickFilterButton_o *v37; // x23
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B117DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__, v16, v17);
    sub_1BCA7E0(&Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__, v18, v19);
    sub_1BCA7E0(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Predicate_ServantFilterButtonControl__TypeInfo, v22, v23);
    byte_4B117DC = 1;
  }
  memset(&v38, 0, sizeof(v38));
  filterButtonList = this->fields.filterButtonList;
  v25 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_ServantFilterButtonControl__TypeInfo,
                                        sort,
                                        method,
                                        v3);
  System_Predicate_object____ctor(
    v25,
    (Il2CppObject *)this,
    Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__,
    0LL);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)filterButtonList,
                (System_Predicate_T__o *)v25,
                (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_1BCA784(&this->fields.useFilterButtonList, All),
        (v26 = this->fields.filterButtonList) == 0LL) )
  {
    sub_1BCAA3C(v26, v27);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)v26,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v29 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1BCAA3C(v29, v30);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1BCAA3C(0LL, v30);
    v33 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            (int32_t)v38.fields._current[2].klass,
            (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v37 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1BCAA2C(
                                                                ServantFilterButtonControl_OnClickFilterButton_TypeInfo,
                                                                v34,
                                                                v35,
                                                                v36);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v37,
      (Il2CppObject *)this,
      (intptr_t)Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v37, v33, 0, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialCostumeServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v11; // w8
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_T__o *v13; // x20

  v3 = this;
  if ( (byte_4B117DB & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v6, v7);
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1BCA7E0(
                                                       &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                                       v8,
                                                       v9);
    byte_4B117DB = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_12;
  v11 = useFilterKindList->fields._version + 1;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = v11;
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
    v12 = FilterKindList_TypeInfo;
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)v12->static_fields->RarityFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (MaterialCostumeServantSortSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this )
    goto LABEL_12;
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (MaterialCostumeServantSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this
    || (v13 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList,
        this = (MaterialCostumeServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                           (System_Collections_Generic_List_T__o *)this,
                                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v13)
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          v13,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (MaterialCostumeServantSortSelectMenu_o *)v3->fields.useFilterKindList) == 0LL)
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          (System_Collections_Generic_List_T__o *)this,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CollectionStateFilterKindList,
          (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (MaterialCostumeServantSortSelectMenu_o *)v3->fields.useFilterKindList) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->MaterialServantCostumeFilterKindList,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall MaterialCostumeServantSortSelectMenu___SetupFilterButtons_b__28_0(
        MaterialCostumeServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4B117E7 & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_1BCA7E0(
                                                       &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                       x,
                                                       method);
    byte_4B117E7 = 1;
  }
  if ( !x || (this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_4B117D8 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B117D8 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantSortSelectMenu_o *)sub_1BCACFC(v8);
  MaterialCostumeServantSortSelectMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialCostumeServantSortSelectMenu__onClickFilterAllSelectReset(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4B117E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method, v2);
    sub_1BCA7E0(&Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__, v4, v5);
    byte_4B117E5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__;
    if ( (*((_BYTE *)Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeServantSortSelectMenu_onClickFilterAllSelectReset__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1BCAA3C(useFilterKindList, v8);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v11);
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

  if ( (byte_4B117D9 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B117D9 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantSortSelectMenu_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A061A4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0615C;
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
  if ( (byte_4B117E8 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B117E8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == this->fields.kind;
}