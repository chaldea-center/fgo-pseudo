void __fastcall MaterialCollectionServantSortSelectMenu___ctor(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x20

  if ( (byte_4A6B547 & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v4);
    sub_1B90010(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v6);
    byte_4A6B547 = 1;
  }
  this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.x = 0x41F4000000000000LL;
  v7 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v7;
  sub_1B8FFB4(&this->fields.useFilterKindList);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v8;
  sub_1B8FFB4(&this->fields.useFilterButtonList);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1B8FFB4(p_callbackFunc);
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

  MaterialCollectionServantSortSelectMenu__Close_31207116(this, 0LL, v2);
}


void __fastcall MaterialCollectionServantSortSelectMenu__Close_31207116(
        MaterialCollectionServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4A6B53A & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_EndClose__, v5);
    byte_4A6B53A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B8FFB4(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MaterialCollectionServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B8FFB4(&this->fields.closeCallbackFunc);
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
  __int64 v18; // x1
  unsigned __int64 v19; // x25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v24; // x21
  System_Collections_Generic_List_object__o *servantFilterCategoryContainerList; // x22
  System_Predicate_object__o *v26; // x23
  Il2CppObject *v27; // x21
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A6B538 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__,
      categoryKindKist);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v8);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    sub_1B90010(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1B90010(
      &Method_MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
      v11);
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_1B90010(
                                                          &MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_TypeInfo,
                                                          v12);
    byte_4A6B538 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !categoryKindKist )
    goto LABEL_27;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
    goto LABEL_28;
  this = (MaterialCollectionServantSortSelectMenu_o *)v4->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_1B9026C(this, categoryKindKist);
  v14 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v16 )
    {
      if ( !current )
        sub_1B9026C(v16, v17);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v18);
    byte_4A6A9C1 = 1;
  }
  if ( (int)categoryKindKist->max_length >= 1 )
  {
    v19 = 0LL;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    x = static_fields->zeroVector.fields.x;
    while ( 1 )
    {
      v24 = sub_1B9025C(MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      if ( v19 >= categoryKindKist->max_length )
        break;
      if ( !v24 )
        goto LABEL_27;
      *(_DWORD *)(v24 + 16) = categoryKindKist->m_Items[v19 + 1];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_object__o *)v4->fields.servantFilterCategoryContainerList;
      v26 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_object____ctor(
        v26,
        (Il2CppObject *)v24,
        Method_MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
        0LL);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v27 = System_Collections_Generic_List_object___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v26,
              (const MethodInfo_3511028 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MaterialCollectionServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v27,
                                                            0LL,
                                                            0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_27;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v27, 1, 0LL);
        v30.fields.x = x;
        v30.fields.y = y;
        v30.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v27, v30, 0LL);
        ServantFilterCategoryContainer__Layout(
          (ServantFilterCategoryContainer_o *)v27,
          HIDWORD(v27[3].monitor) == v14,
          0LL);
        BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(
                           (ServantFilterCategoryContainer_o *)v27,
                           0LL);
        x = BottomPosition.fields.x;
        y = BottomPosition.fields.y;
        z = BottomPosition.fields.z;
      }
      if ( (__int64)++v19 >= (int)categoryKindKist->max_length )
        return;
    }
LABEL_28:
    sub_1B90274(this, categoryKindKist);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickCancel(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A6B53F & 1) == 0 )
  {
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_OnClickCancel__, method);
    byte_4A6B53F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_MaterialCollectionServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    MaterialCollectionServantSortSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickClear(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4A6B540 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_OnClickClear__, v3);
    byte_4A6B540 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCollectionServantSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B90028(Method_MaterialCollectionServantSortSelectMenu_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1B9026C(useFilterKindList, v6);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0LL);
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickDecide(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *v2; // x19
  struct UIScrollView_o *servantFilterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4A6B53E & 1) == 0 )
  {
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_1B90010(
                                                          &Method_MaterialCollectionServantSortSelectMenu_OnClickDecide__,
                                                          method);
    byte_4A6B53E = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantFilterScrollView = v2->fields.servantFilterScrollView;
    if ( !servantFilterScrollView )
      goto LABEL_12;
    this = (MaterialCollectionServantSortSelectMenu_o *)servantFilterScrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialCollectionServantSortSelectMenu__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_MaterialCollectionServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B90028(Method_MaterialCollectionServantSortSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (MaterialCollectionServantSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1B9026C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    MaterialCollectionServantSortSelectMenu__Callback(v2, 1, v9);
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

  if ( (byte_4A6B545 & 1) == 0 )
  {
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__, *(_QWORD *)&filterKind);
    byte_4A6B545 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B90028(Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(0LL, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickReset(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4A6B541 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_OnClickReset__, v3);
    byte_4A6B541 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCollectionServantSortSelectMenu_OnClickReset__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickReset__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B90028(Method_MaterialCollectionServantSortSelectMenu_OnClickReset__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1B9026C(useFilterKindList, v6);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0LL);
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortId(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4A6B542 & 1) == 0 )
  {
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_OnClickSortId__, method);
    byte_4A6B542 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionServantSortSelectMenu_OnClickSortId__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickSortId__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_MaterialCollectionServantSortSelectMenu_OnClickSortId__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
    operationSortInfo->fields.sortKind = 27;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortLimitCount(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4A6B544 & 1) == 0 )
  {
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_OnClickSortLimitCount__, method);
    byte_4A6B544 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_MaterialCollectionServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
    operationSortInfo->fields.sortKind = 9;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortRarity(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4A6B543 & 1) == 0 )
  {
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_OnClickSortRarity__, method);
    byte_4A6B543 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_MaterialCollectionServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_MaterialCollectionServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1B9026C(v5, v6);
    operationSortInfo->fields.sortKind = 2;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v6);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  int32_t v23; // w8
  ListViewSort_o *v24; // x21
  int v25; // w8
  ListViewSort_o *v26; // x22
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
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  struct UIScrollView_o *servantFilterScrollView; // x9
  System_Action_o *v44; // x20

  if ( (byte_4A6B536 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B90010(&ListViewSort_TypeInfo, v9);
    sub_1B90010(&LocalizationManager_TypeInfo, v10);
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_EndOpen__, v11);
    sub_1B90010(&StringLiteral_11844/*"SERVANT_SORT_RESET"*/, v12);
    sub_1B90010(&StringLiteral_11693/*"SERVANT_SORT_CANCEL"*/, v13);
    sub_1B90010(&StringLiteral_11697/*"SERVANT_SORT_DECIDE"*/, v14);
    sub_1B90010(&StringLiteral_11846/*"SERVANT_SORT_TITLE2"*/, v15);
    sub_1B90010(&StringLiteral_11694/*"SERVANT_SORT_CLEAR"*/, v16);
    sub_1B90010(&StringLiteral_11698/*"SERVANT_SORT_EXPLANATION"*/, v17);
    sub_1B90010(&StringLiteral_11845/*"SERVANT_SORT_TITLE"*/, v18);
    sub_1B90010(&StringLiteral_11699/*"SERVANT_SORT_EXPLANATION2"*/, v19);
    byte_4A6B536 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B8FFB4(&this->fields.callbackFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    p_baseSortInfo = &this->fields.baseSortInfo;
    this->fields.baseSortInfo = sort;
    gameObject = (UnityEngine_GameObject_o *)sub_1B8FFB4(&this->fields.baseSortInfo);
    v23 = this->fields.kind;
    if ( v23 == 1 )
    {
      v24 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_33;
      v25 = 1;
    }
    else
    {
      if ( v23 != 3 )
      {
        v24 = *p_baseSortInfo;
LABEL_13:
        v26 = (ListViewSort_o *)sub_1B9025C(ListViewSort_TypeInfo);
        ListViewSort___ctor_40814004(v26, v24, 0LL);
        this->fields.operationSortInfo = v26;
        sub_1B8FFB4(&this->fields.operationSortInfo);
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11845/*"SERVANT_SORT_TITLE"*/, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
          title2Label = this->fields.title2Label;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11846/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, (System_String_o *)gameObject, 0LL);
            explanationLabel = this->fields.explanationLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11698/*"SERVANT_SORT_EXPLANATION"*/,
                                                       0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
              explanationLabel2 = this->fields.explanationLabel2;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11699/*"SERVANT_SORT_EXPLANATION2"*/,
                                                         0LL);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0LL);
                decideLabel = this->fields.decideLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11697/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11693/*"SERVANT_SORT_CANCEL"*/,
                                                             0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                    clearLabel = this->fields.clearLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11694/*"SERVANT_SORT_CLEAR"*/,
                                                               0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
                      resetLabel = this->fields.resetLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11844/*"SERVANT_SORT_RESET"*/,
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
                                    MaterialCollectionServantSortSelectMenu__SetupUseFilterKindList(this, v38);
                                    MaterialCollectionServantSortSelectMenu__SetupFilterButtons(
                                      this,
                                      this->fields.operationSortInfo,
                                      v39);
                                    MaterialCollectionServantSortSelectMenu__SetupButtonLayout(
                                      this,
                                      this->fields.kind,
                                      v40);
                                    MaterialCollectionServantSortSelectMenu__SetButtenEnable(this, 1, v41);
                                    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v42);
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
                                          v44 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
                                          System_Action___ctor(
                                            v44,
                                            (Il2CppObject *)this,
                                            Method_MaterialCollectionServantSortSelectMenu_EndOpen__,
                                            0LL);
                                          BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0LL);
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
        sub_1B9026C(gameObject, v21);
      }
      v24 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_33;
      v25 = 3;
    }
    v24->fields.listViewKind = v25;
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
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A6B53B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4A6B53B = 1;
  }
  memset(&v10, 0, sizeof(v10));
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
    sub_1B9026C(decideButton, isEnable);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_1B9026C(0LL, v9);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v10.fields._current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetButtenSelect(
        MaterialCollectionServantSortSelectMenu_o *this,
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
  UnityEngine_Component_o *sort1Button; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  __int64 *v17; // x8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v21; // x1
  FilterKindList_c *v22; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v24; // x1
  ListViewSort_o *v25; // x0
  bool v26; // w0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A6B53D & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v5);
    sub_1B90010(&FilterKindList_TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v8);
    sub_1B90010(&StringLiteral_17496/*"btn_bg_04"*/, v9);
    sub_1B90010(&StringLiteral_17495/*"btn_bg_03"*/, v10);
    byte_4A6B53D = 1;
  }
  memset(&v28, 0, sizeof(v28));
  sort1Button = (UnityEngine_Component_o *)this->fields.sort1Button;
  if ( !sort1Button )
    goto LABEL_35;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             sort1Button,
                                             (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = this->fields.operationSortInfo;
  if ( !operationSortInfo || !sort1Button )
    goto LABEL_35;
  v13 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17495/*"btn_bg_03"*/ : &StringLiteral_17496/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)sort1Button, *v13, 0LL);
  sort1Button = (UnityEngine_Component_o *)this->fields.sort2Button;
  if ( !sort1Button )
    goto LABEL_35;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             sort1Button,
                                             (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v14 = this->fields.operationSortInfo;
  if ( !v14 || !sort1Button )
    goto LABEL_35;
  v15 = (System_String_o **)(v14->fields.sortKind == 2 ? &StringLiteral_17495/*"btn_bg_03"*/ : &StringLiteral_17496/*"btn_bg_04"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)sort1Button, *v15, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.sort3Button) == 0LL)
    || (sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   sort1Button,
                                                   (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v16 = this->fields.operationSortInfo) == 0LL)
    || !sort1Button
    || (v16->fields.sortKind != 9 ? (v17 = &StringLiteral_17496/*"btn_bg_04"*/) : (v17 = &StringLiteral_17495/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)sort1Button, (System_String_o *)*v17, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_35:
    sub_1B9026C(sort1Button, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)sort1Button,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v18 )
      break;
    current = (ServantFilterButtonControl_o *)v28.fields._current;
    if ( !v28.fields._current )
      sub_1B9026C(v18, v19);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v28.fields._current, 0LL);
    v22 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v22 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v22->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1B9026C(0LL, v21);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_34F6540 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v25 = this->fields.operationSortInfo;
      if ( !v25 )
        sub_1B9026C(0LL, v24);
      v26 = ListViewSort__CheckSvtGroupFilter(v25, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v26, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__SetupButtonLayout(
        MaterialCollectionServantSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  System_Array_o *v7; // x20
  const MethodInfo *v8; // x2
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_4A6B53C & 1) == 0 )
  {
    sub_1B90010(&ListViewSort_FilterCategoryKind___TypeInfo, *(_QWORD *)&kind);
    sub_1B90010(
      &Field__PrivateImplementationDetails__6264D1E09B01537F0D39D6A65A2204D7B37920D11B1193137B3A264A68190205,
      v5);
    byte_4A6B53C = 1;
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
            v7 = (System_Array_o *)sub_1B900B8(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
            v9.fields.value = Field__PrivateImplementationDetails__6264D1E09B01537F0D39D6A65A2204D7B37920D11B1193137B3A264A68190205;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61695172(v7, v9, 0LL);
            MaterialCollectionServantSortSelectMenu__InitCategoryContainer(
              this,
              (ListViewSort_FilterCategoryKind_array *)v7,
              v8);
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
    sub_1B9026C(servantFilterRoot, *(_QWORD *)&kind);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetupFilterButtons(
        MaterialCollectionServantSortSelectMenu_o *this,
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

  if ( (byte_4A6B539 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, sort);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9);
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__, v10);
    sub_1B90010(&Method_MaterialCollectionServantSortSelectMenu__SetupFilterButtons_b__43_0__, v11);
    sub_1B90010(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v12);
    sub_1B90010(&System_Predicate_ServantFilterButtonControl__TypeInfo, v13);
    byte_4A6B539 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  filterButtonList = this->fields.filterButtonList;
  v15 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)this,
    Method_MaterialCollectionServantSortSelectMenu__SetupFilterButtons_b__43_0__,
    0LL);
  if ( !filterButtonList
    || (this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)System_Collections_Generic_List_object___FindAll((System_Collections_Generic_List_object__o *)filterButtonList, (System_Predicate_T__o *)v15, (const MethodInfo_35110D0 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        sub_1B8FFB4(&this->fields.useFilterButtonList),
        (v16 = this->fields.filterButtonList) == 0LL) )
  {
    sub_1B9026C(v16, v17);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)v16,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v18 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1B9026C(v18, v19);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1B9026C(0LL, v19);
    v22 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            (int32_t)v24.fields._current[2].klass,
            (const MethodInfo_34F6540 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v23 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1B9025C(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v23, v22, 0, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetupUseFilterKindList(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int32_t version; // w8
  int32_t kind; // w9
  FilterKindList_c *v10; // x0
  System_Collections_Generic_List_T__o *v11; // x20
  struct System_Object_array *items; // x9
  _QWORD *v13; // x10

  v2 = this;
  if ( (byte_4A6B537 & 1) == 0 )
  {
    sub_1B90010(&FilterKindList_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v5);
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_1B90010(
                                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                                          v6);
    byte_4A6B537 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_19;
  version = useFilterKindList->fields._version;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = version + 1;
  kind = v2->fields.kind;
  if ( kind == 3 || kind == 1 )
  {
    items = useFilterKindList->fields._items;
    v13 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
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
        *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
  }
  else if ( !kind )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    System_Collections_Generic_List_Int32Enum___AddRange(
      useFilterKindList,
      (System_Collections_Generic_IEnumerable_T__o *)v10->static_fields->RarityFilterKindList,
      (const MethodInfo_34F63D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    this = (MaterialCollectionServantSortSelectMenu_o *)v2->fields.useFilterKindList;
    if ( this )
    {
      System_Collections_Generic_List_Int32Enum___AddRange(
        (System_Collections_Generic_List_T__o *)this,
        (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
        (const MethodInfo_34F63D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      this = (MaterialCollectionServantSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
      if ( this )
      {
        v11 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
        this = (MaterialCollectionServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                              (System_Collections_Generic_List_T__o *)this,
                                                              (const MethodInfo_34F7C80 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v11 )
        {
          System_Collections_Generic_List_Int32Enum___AddRange(
            v11,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_34F63D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
          this = (MaterialCollectionServantSortSelectMenu_o *)v2->fields.useFilterKindList;
          if ( this )
          {
            System_Collections_Generic_List_Int32Enum___AddRange(
              (System_Collections_Generic_List_T__o *)this,
              (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CollectionStateFilterKindList,
              (const MethodInfo_34F63D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
            return;
          }
        }
      }
    }
LABEL_19:
    sub_1B9026C(this, method);
  }
}


bool __fastcall MaterialCollectionServantSortSelectMenu___SetupFilterButtons_b__43_0(
        MaterialCollectionServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4A6B548 & 1) == 0 )
  {
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_1B90010(
                                                          &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                          x);
    byte_4A6B548 = 1;
  }
  if ( !x || (this = (MaterialCollectionServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1B9026C(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_34F6540 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_4A6B534 & 1) == 0 )
  {
    sub_1B90010(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A6B534 = 1;
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
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantSortSelectMenu_o *)sub_1B9052C(v7);
  MaterialCollectionServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall MaterialCollectionServantSortSelectMenu__get_closeBtnPath(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6B546 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_15666/*"Window/CancelButton"*/, method);
    byte_4A6B546 = 1;
  }
  return (System_String_o *)StringLiteral_15666/*"Window/CancelButton"*/;
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

  if ( (byte_4A6B535 & 1) == 0 )
  {
    sub_1B90010(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4A6B535 = 1;
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
    v8 = sub_1BCB500(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialCollectionServantSortSelectMenu_o *)sub_1B9052C(v7);
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
  sub_1B8FFB4(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CEFDC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CEF94;
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
  if ( (byte_4A6B549 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, result);
    byte_4A6B549 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
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
    sub_1B9026C(this, 0LL);
  return x->fields.categoryKind == this->fields.kind;
}