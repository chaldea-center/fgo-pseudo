void __fastcall MaterialCollectionServantSortSelectMenu___ctor(
        MaterialCollectionServantSortSelectMenu_o *this,
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

  if ( (byte_4B1178D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v11, v12);
    byte_4B1178D = 1;
  }
  this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.x = 0x41F4000000000000LL;
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


void __fastcall MaterialCollectionServantSortSelectMenu__Callback(
        MaterialCollectionServantSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct MaterialCollectionServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  struct MaterialCollectionServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__Close(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionServantSortSelectMenu__Close_31749912(this, 0LL, v2);
}


void __fastcall MaterialCollectionServantSortSelectMenu__Close_31749912(
        MaterialCollectionServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11780 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_EndClose__, v5, v6);
    byte_4B11780 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MaterialCollectionServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall MaterialCollectionServantSortSelectMenu__EndClose(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__EndOpen(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall MaterialCollectionServantSortSelectMenu__Init(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall MaterialCollectionServantSortSelectMenu__InitCategoryContainer(
        MaterialCollectionServantSortSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *v4; // x20
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
  System_Collections_Generic_List_object__o *servantFilterCategoryContainerList; // x22
  System_Predicate_object__o *v38; // x23
  __int64 v39; // x1
  Il2CppObject *v40; // x21
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1177E & 1) == 0 )
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
      &Method_MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
      v17,
      v18);
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_1BCA7E0(
                                                          &MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_TypeInfo,
                                                          v19,
                                                          v20);
    byte_4B1177E = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !categoryKindKist )
    goto LABEL_27;
  v21 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v21 )
    goto LABEL_28;
  this = (MaterialCollectionServantSortSelectMenu_o *)v4->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_1BCAA3C(this, categoryKindKist);
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
      v34 = sub_1BCAA2C(
              MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_TypeInfo,
              categoryKindKist,
              v27,
              v28);
      System_Object___ctor((Il2CppObject *)v34, 0LL);
      if ( v29 >= categoryKindKist->max_length )
        break;
      if ( !v34 )
        goto LABEL_27;
      *(_DWORD *)(v34 + 16) = categoryKindKist->m_Items[v29 + 1];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_object__o *)v4->fields.servantFilterCategoryContainerList;
      v38 = (System_Predicate_object__o *)sub_1BCAA2C(
                                            System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                            categoryKindKist,
                                            v35,
                                            v36);
      System_Predicate_object____ctor(
        v38,
        (Il2CppObject *)v34,
        Method_MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
        0LL);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v40 = System_Collections_Generic_List_object___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v38,
              (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
      this = (MaterialCollectionServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v40,
                                                            0LL,
                                                            0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v40 )
          goto LABEL_27;
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
        return;
    }
LABEL_28:
    sub_1BCAA44(this, categoryKindKist);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickCancel(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11785 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_OnClickCancel__, method, v2);
    byte_4B11785 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_MaterialCollectionServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantSortSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    MaterialCollectionServantSortSelectMenu__Callback(this, 0, v6);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickClear(
        MaterialCollectionServantSortSelectMenu_o *this,
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

  if ( (byte_4B11786 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method, v2);
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_OnClickClear__, v4, v5);
    byte_4B11786 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_MaterialCollectionServantSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantSortSelectMenu_OnClickClear__);
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
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v11);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickDecide(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialCollectionServantSortSelectMenu_o *v3; // x19
  struct UIScrollView_o *servantFilterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x2
  float value; // s0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4B11784 & 1) == 0 )
  {
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_1BCA7E0(
                                                          &Method_MaterialCollectionServantSortSelectMenu_OnClickDecide__,
                                                          method,
                                                          v2);
    byte_4B11784 = 1;
  }
  if ( v3->fields.state == 2 )
  {
    servantFilterScrollView = v3->fields.servantFilterScrollView;
    if ( !servantFilterScrollView )
      goto LABEL_12;
    this = (MaterialCollectionServantSortSelectMenu_o *)servantFilterScrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v3->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialCollectionServantSortSelectMenu__SetButtenEnable(v3, 0, v6);
    v3->fields.state = 3;
    v8 = Method_MaterialCollectionServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantSortSelectMenu_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    this = (MaterialCollectionServantSortSelectMenu_o *)v3->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1BCAA3C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v3->fields.operationSortInfo, 0LL);
    MaterialCollectionServantSortSelectMenu__Callback(v3, 1, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__OnClickFilterButton(
        MaterialCollectionServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B1178B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__, *(_QWORD *)&filterKind, method);
    byte_4B1178B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(0LL, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickReset(
        MaterialCollectionServantSortSelectMenu_o *this,
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

  if ( (byte_4B11787 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method, v2);
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_OnClickReset__, v4, v5);
    byte_4B11787 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_MaterialCollectionServantSortSelectMenu_OnClickReset__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickReset__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantSortSelectMenu_OnClickReset__);
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
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v11);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortId(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11788 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_OnClickSortId__, method, v2);
    byte_4B11788 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCollectionServantSortSelectMenu_OnClickSortId__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickSortId__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantSortSelectMenu_OnClickSortId__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 27;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortLimitCount(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B1178A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_OnClickSortLimitCount__, method, v2);
    byte_4B1178A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCollectionServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantSortSelectMenu_OnClickSortLimitCount__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 9;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortRarity(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11789 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_OnClickSortRarity__, method, v2);
    byte_4B11789 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCollectionServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionServantSortSelectMenu_OnClickSortRarity__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 2;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__Open(
        MaterialCollectionServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *callback,
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
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  int32_t v36; // w8
  ListViewSort_o *v37; // x21
  int v38; // w8
  ListViewSort_o *v39; // x22
  __int64 v40; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *title2Label; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanationLabel2; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *resetLabel; // x21
  UILabel_o *sort1Label; // x21
  UILabel_o *sort2Label; // x21
  UILabel_o *sort3Label; // x21
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x1
  struct UIScrollView_o *servantFilterScrollView; // x9
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x20

  if ( (byte_4B1177C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, sort);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_EndOpen__, v13, v14);
    sub_1BCA7E0(&StringLiteral_11975/*"SERVANT_SORT_RESET"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11977/*"SERVANT_SORT_TITLE2"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11829/*"SERVANT_SORT_EXPLANATION"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11976/*"SERVANT_SORT_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11830/*"SERVANT_SORT_EXPLANATION2"*/, v29, v30);
    byte_4B1177C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    p_baseSortInfo = &this->fields.baseSortInfo;
    this->fields.baseSortInfo = sort;
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA784(&this->fields.baseSortInfo, sort);
    v36 = this->fields.kind;
    if ( v36 == 1 )
    {
      v37 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_33;
      v38 = 1;
    }
    else
    {
      if ( v36 != 3 )
      {
        v37 = *p_baseSortInfo;
LABEL_13:
        v39 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v32, v34, v35);
        ListViewSort___ctor_41481440(v39, v37, 0LL);
        this->fields.operationSortInfo = v39;
        sub_1BCA784(&this->fields.operationSortInfo, v39);
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11976/*"SERVANT_SORT_TITLE"*/, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
          title2Label = this->fields.title2Label;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, (System_String_o *)gameObject, 0LL);
            explanationLabel = this->fields.explanationLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11829/*"SERVANT_SORT_EXPLANATION"*/,
                                                       0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
              explanationLabel2 = this->fields.explanationLabel2;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11830/*"SERVANT_SORT_EXPLANATION2"*/,
                                                         0LL);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0LL);
                decideLabel = this->fields.decideLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/,
                                                             0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                    clearLabel = this->fields.clearLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/,
                                                               0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
                      resetLabel = this->fields.resetLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11975/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                      if ( resetLabel )
                      {
                        UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (UnityEngine_GameObject_o *)this->fields.operationSortInfo;
                        if ( gameObject )
                        {
                          sort1Label = this->fields.sort1Label;
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     27,
                                                                     0LL);
                          if ( sort1Label )
                          {
                            UILabel__set_text(sort1Label, (System_String_o *)gameObject, 0LL);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.operationSortInfo;
                            if ( gameObject )
                            {
                              sort2Label = this->fields.sort2Label;
                              gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                         (ListViewSort_o *)gameObject,
                                                                         2,
                                                                         0LL);
                              if ( sort2Label )
                              {
                                UILabel__set_text(sort2Label, (System_String_o *)gameObject, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.operationSortInfo;
                                if ( gameObject )
                                {
                                  sort3Label = this->fields.sort3Label;
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             9,
                                                                             0LL);
                                  if ( sort3Label )
                                  {
                                    UILabel__set_text(sort3Label, (System_String_o *)gameObject, 0LL);
                                    MaterialCollectionServantSortSelectMenu__SetupUseFilterKindList(this, v52);
                                    MaterialCollectionServantSortSelectMenu__SetupFilterButtons(
                                      this,
                                      this->fields.operationSortInfo,
                                      v53);
                                    MaterialCollectionServantSortSelectMenu__SetupButtonLayout(
                                      this,
                                      this->fields.kind,
                                      v54);
                                    MaterialCollectionServantSortSelectMenu__SetButtenEnable(this, 1, v55);
                                    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v56);
                                    servantFilterScrollView = this->fields.servantFilterScrollView;
                                    if ( servantFilterScrollView )
                                    {
                                      if ( *p_baseSortInfo )
                                      {
                                        gameObject = (UnityEngine_GameObject_o *)servantFilterScrollView->fields.verticalScrollBar;
                                        if ( gameObject )
                                        {
                                          UIProgressBar__set_value(
                                            (UIProgressBar_o *)gameObject,
                                            (*p_baseSortInfo)->fields.scrollBarValue,
                                            0LL);
                                          this->fields.state = 1;
                                          v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
                                          System_Action___ctor(
                                            v61,
                                            (Il2CppObject *)this,
                                            Method_MaterialCollectionServantSortSelectMenu_EndOpen__,
                                            0LL);
                                          BaseDialog__Open((BaseDialog_o *)this, v61, 0, 0LL);
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
LABEL_33:
        sub_1BCAA3C(gameObject, v32);
      }
      v37 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_33;
      v38 = 3;
    }
    v37->fields.listViewKind = v38;
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__SetButtenEnable(
        MaterialCollectionServantSortSelectMenu_o *this,
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

  if ( (byte_4B11781 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      isEnable,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9, v10);
    byte_4B11781 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.resetButton;
  if ( !decideButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.sort1Button;
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.sort2Button) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.sort3Button) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_17:
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


void __fastcall MaterialCollectionServantSortSelectMenu__SetButtenSelect(
        MaterialCollectionServantSortSelectMenu_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Component_o *sort1Button; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v22; // x8
  struct ListViewSort_o *v23; // x8
  System_String_o **v24; // x8
  struct ListViewSort_o *v25; // x8
  __int64 *v26; // x8
  _BOOL8 v27; // x0
  __int64 v28; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v30; // x1
  FilterKindList_c *v31; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v33; // x1
  ListViewSort_o *v34; // x0
  bool v35; // w0
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B11783 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v8, v9);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v18, v19);
    byte_4B11783 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  sort1Button = (UnityEngine_Component_o *)this->fields.sort1Button;
  if ( !sort1Button )
    goto LABEL_35;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             sort1Button,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = this->fields.operationSortInfo;
  if ( !operationSortInfo || !sort1Button )
    goto LABEL_35;
  v22 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)sort1Button, *v22, 0LL);
  sort1Button = (UnityEngine_Component_o *)this->fields.sort2Button;
  if ( !sort1Button )
    goto LABEL_35;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             sort1Button,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v23 = this->fields.operationSortInfo;
  if ( !v23 || !sort1Button )
    goto LABEL_35;
  v24 = (System_String_o **)(v23->fields.sortKind == 2 ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)sort1Button, *v24, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.sort3Button) == 0LL)
    || (sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   sort1Button,
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v25 = this->fields.operationSortInfo) == 0LL)
    || !sort1Button
    || (v25->fields.sortKind != 9 ? (v26 = &StringLiteral_17644/*"btn_bg_04"*/) : (v26 = &StringLiteral_17643/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)sort1Button, (System_String_o *)*v26, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_35:
    sub_1BCAA3C(sort1Button, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)sort1Button,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v27 )
      break;
    current = (ServantFilterButtonControl_o *)v37.fields._current;
    if ( !v37.fields._current )
      sub_1BCAA3C(v27, v28);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v37.fields._current, 0LL);
    v31 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v30);
      v31 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v31->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1BCAA3C(0LL, v30);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v34 = this->fields.operationSortInfo;
      if ( !v34 )
        sub_1BCAA3C(0LL, v33);
      v35 = ListViewSort__CheckSvtGroupFilter(v34, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v35, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__SetupButtonLayout(
        MaterialCollectionServantSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  System_Array_o *v8; // x20
  const MethodInfo *v9; // x2
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_4B11782 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__6264D1E09B01537F0D39D6A65A2204D7B37920D11B1193137B3A264A68190205,
      v5,
      v6);
    byte_4B11782 = 1;
  }
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
  servantFilterRoot = this->fields.commandCodeAndEquipFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
  if ( kind == 3 || kind == 1 )
  {
    servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sort3Button;
    if ( !servantFilterRoot )
      goto LABEL_20;
    servantFilterRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFilterRoot, 0LL);
    if ( !servantFilterRoot )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
    servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sortButtonGrid;
    if ( !servantFilterRoot )
      goto LABEL_20;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))servantFilterRoot->klass[1]._1.castClass)(
      servantFilterRoot,
      servantFilterRoot->klass[1]._1.declaringType);
    servantFilterRoot = this->fields.commandCodeAndEquipFilterRoot;
    if ( !servantFilterRoot )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0LL);
  }
  else if ( !kind )
  {
    servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sort3Button;
    if ( servantFilterRoot )
    {
      servantFilterRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFilterRoot, 0LL);
      if ( servantFilterRoot )
      {
        UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0LL);
        servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sortButtonGrid;
        if ( servantFilterRoot )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))servantFilterRoot->klass[1]._1.castClass)(
            servantFilterRoot,
            servantFilterRoot->klass[1]._1.declaringType);
          servantFilterRoot = this->fields.servantFilterRoot;
          if ( servantFilterRoot )
          {
            UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0LL);
            v8 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
            v10.fields.value = Field__PrivateImplementationDetails__6264D1E09B01537F0D39D6A65A2204D7B37920D11B1193137B3A264A68190205;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v8, v10, 0LL);
            MaterialCollectionServantSortSelectMenu__InitCategoryContainer(
              this,
              (ListViewSort_FilterCategoryKind_array *)v8,
              v9);
            servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.servantFilterScrollView;
            if ( servantFilterRoot )
            {
              UIScrollView__ResetPosition((UIScrollView_o *)servantFilterRoot, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_20:
    sub_1BCAA3C(servantFilterRoot, *(_QWORD *)&kind);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetupFilterButtons(
        MaterialCollectionServantSortSelectMenu_o *this,
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

  if ( (byte_4B1177F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__, v16, v17);
    sub_1BCA7E0(&Method_MaterialCollectionServantSortSelectMenu__SetupFilterButtons_b__43_0__, v18, v19);
    sub_1BCA7E0(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Predicate_ServantFilterButtonControl__TypeInfo, v22, v23);
    byte_4B1177F = 1;
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
    Method_MaterialCollectionServantSortSelectMenu__SetupFilterButtons_b__43_0__,
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
      (intptr_t)Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v37, v33, 0, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetupUseFilterKindList(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialCollectionServantSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int32_t version; // w8
  int32_t kind; // w9
  FilterKindList_c *v15; // x0
  System_Collections_Generic_List_T__o *v16; // x20
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10

  v3 = this;
  if ( (byte_4B1177D & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v8, v9);
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_1BCA7E0(
                                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                                          v10,
                                                          v11);
    byte_4B1177D = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_19;
  version = useFilterKindList->fields._version;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = version + 1;
  kind = v3->fields.kind;
  if ( kind == 3 || kind == 1 )
  {
    items = useFilterKindList->fields._items;
    v18 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    useFilterKindList->fields._version = version + 2;
    if ( !items )
      goto LABEL_19;
    if ( items->max_length )
    {
      useFilterKindList->fields._size = 1;
      LODWORD(items->m_Items[0]) = 49;
    }
    else
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        useFilterKindList,
        49,
        *(const MethodInfo_3587464 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
  }
  else if ( !kind )
  {
    v15 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method);
      v15 = FilterKindList_TypeInfo;
    }
    System_Collections_Generic_List_Int32Enum___AddRange(
      useFilterKindList,
      (System_Collections_Generic_IEnumerable_T__o *)v15->static_fields->RarityFilterKindList,
      (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    this = (MaterialCollectionServantSortSelectMenu_o *)v3->fields.useFilterKindList;
    if ( this )
    {
      System_Collections_Generic_List_Int32Enum___AddRange(
        (System_Collections_Generic_List_T__o *)this,
        (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
        (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      this = (MaterialCollectionServantSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
      if ( this )
      {
        v16 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
        this = (MaterialCollectionServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                              (System_Collections_Generic_List_T__o *)this,
                                                              (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v16 )
        {
          System_Collections_Generic_List_Int32Enum___AddRange(
            v16,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
          this = (MaterialCollectionServantSortSelectMenu_o *)v3->fields.useFilterKindList;
          if ( this )
          {
            System_Collections_Generic_List_Int32Enum___AddRange(
              (System_Collections_Generic_List_T__o *)this,
              (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CollectionStateFilterKindList,
              (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(this, method);
  }
}


bool __fastcall MaterialCollectionServantSortSelectMenu___SetupFilterButtons_b__43_0(
        MaterialCollectionServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4B1178E & 1) == 0 )
  {
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_1BCA7E0(
                                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                          x,
                                                          method);
    byte_4B1178E = 1;
  }
  if ( !x || (this = (MaterialCollectionServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall MaterialCollectionServantSortSelectMenu__add_callbackFunc(
        MaterialCollectionServantSortSelectMenu_o *this,
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCollectionServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCollectionServantSortSelectMenu_o *v10; // x0
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1177A & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1177A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialCollectionServantSortSelectMenu_CallbackFunc_c *)v7->klass != MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantSortSelectMenu_o *)sub_1BCACFC(v7);
  MaterialCollectionServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall MaterialCollectionServantSortSelectMenu__get_closeBtnPath(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1178C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B1178C = 1;
  }
  return (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/;
}


void __fastcall MaterialCollectionServantSortSelectMenu__remove_callbackFunc(
        MaterialCollectionServantSortSelectMenu_o *this,
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCollectionServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCollectionServantSortSelectMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B1177B & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1177B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialCollectionServantSortSelectMenu_CallbackFunc_c *)v7->klass != MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantSortSelectMenu_o *)sub_1BCACFC(v7);
  MaterialCollectionServantSortSelectMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A06060;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06018;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc__BeginInvoke(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B1178F & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B1178F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0___ctor(
        MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0___InitCategoryContainer_b__0(
        MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == this->fields.kind;
}