void __fastcall UserServantCoinSortSelectMenu___ctor(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B401AE & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v6);
    byte_4B401AE = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1BDBAC4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_36BAD78 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.useFilterKindList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.useFilterButtonList, (int32_t)v10, v11, v12);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall UserServantCoinSortSelectMenu__Callback(
        UserServantCoinSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UserServantCoinSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BDB81C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall UserServantCoinSortSelectMenu__Close(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinSortSelectMenu__Close_32933428(this, 0LL, v2);
}


void __fastcall UserServantCoinSortSelectMenu__Close_32933428(
        UserServantCoinSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B4019D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_EndClose__, v6);
    byte_4B4019D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserServantCoinSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall UserServantCoinSortSelectMenu__EndClose(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall UserServantCoinSortSelectMenu__EndOpen(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall UserServantCoinSortSelectMenu__Init(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall UserServantCoinSortSelectMenu__InitCategoryContainer(
        UserServantCoinSortSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *v4; // x20
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
  if ( (byte_4B4019F & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__,
      categoryKindKist);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu___c__DisplayClass41_0__InitCategoryContainer_b__0__, v11);
    this = (UserServantCoinSortSelectMenu_o *)sub_1BDB878(
                                                &UserServantCoinSortSelectMenu___c__DisplayClass41_0_TypeInfo,
                                                v12);
    byte_4B4019F = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !categoryKindKist )
    goto LABEL_27;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
    goto LABEL_28;
  this = (UserServantCoinSortSelectMenu_o *)v4->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_1BDBAD4(this, categoryKindKist);
  v14 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v16 )
    {
      if ( !current )
        sub_1BDBAD4(v16, v17);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v18);
    byte_4B3E911 = 1;
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
      v24 = sub_1BDBAC4(UserServantCoinSortSelectMenu___c__DisplayClass41_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      if ( v19 >= categoryKindKist->max_length )
        break;
      if ( !v24 )
        goto LABEL_27;
      *(_DWORD *)(v24 + 16) = categoryKindKist->m_Items[v19 + 1];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_object__o *)v4->fields.servantFilterCategoryContainerList;
      v26 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_object____ctor(
        v26,
        (Il2CppObject *)v24,
        Method_UserServantCoinSortSelectMenu___c__DisplayClass41_0__InitCategoryContainer_b__0__,
        0LL);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v27 = System_Collections_Generic_List_object___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v26,
              (const MethodInfo_36D642C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
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
    sub_1BDBADC(this, categoryKindKist, method);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickCancel(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B401A5 & 1) == 0 )
  {
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickCancel__, method);
    byte_4B401A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserServantCoinSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_UserServantCoinSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    UserServantCoinSortSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickClear(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B401A6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickClear__, v3);
    byte_4B401A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_UserServantCoinSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_UserServantCoinSortSelectMenu_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1BDBAD4(useFilterKindList, v6);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0LL);
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickDecide(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *v2; // x19
  struct UIScrollView_o *servantFilterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4B401A4 & 1) == 0 )
  {
    this = (UserServantCoinSortSelectMenu_o *)sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickDecide__, method);
    byte_4B401A4 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantFilterScrollView = v2->fields.servantFilterScrollView;
    if ( !servantFilterScrollView )
      goto LABEL_12;
    this = (UserServantCoinSortSelectMenu_o *)servantFilterScrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    UserServantCoinSortSelectMenu__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_UserServantCoinSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BDB890(Method_UserServantCoinSortSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    this = (UserServantCoinSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1BDBAD4(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    UserServantCoinSortSelectMenu__Callback(v2, 1, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinSortSelectMenu__OnClickFilterButton(
        UserServantCoinSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B401AC & 1) == 0 )
  {
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickFilterButton__, *(_QWORD *)&filterKind);
    byte_4B401AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_UserServantCoinSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_UserServantCoinSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(0LL, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickReset(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B401A7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickReset__, v3);
    byte_4B401A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_UserServantCoinSortSelectMenu_OnClickReset__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickReset__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_UserServantCoinSortSelectMenu_OnClickReset__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1BDBAD4(useFilterKindList, v6);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0LL);
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickSortAmount(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B401AA & 1) == 0 )
  {
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickSortAmount__, method);
    byte_4B401AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_UserServantCoinSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 14;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickSortId(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B401A8 & 1) == 0 )
  {
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickSortId__, method);
    byte_4B401A8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickSortId__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortId__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_UserServantCoinSortSelectMenu_OnClickSortId__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 27;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickSortRarity(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B401A9 & 1) == 0 )
  {
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickSortRarity__, method);
    byte_4B401A9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_UserServantCoinSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 2;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickSortServantName(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B401AB & 1) == 0 )
  {
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickSortServantName__, method);
    byte_4B401AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickSortServantName__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortServantName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_UserServantCoinSortSelectMenu_OnClickSortServantName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BDBAD4(v5, v6);
    operationSortInfo->fields.sortKind = 26;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinSortSelectMenu__Open(
        UserServantCoinSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        UserServantCoinSortSelectMenu_CallbackFunc_o *callback,
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
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v26; // x22
  struct ListViewSort_o **p_operationSortInfo; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UILabel_o *titleLabel; // x22
  UILabel_o *title2Label; // x22
  UILabel_o *explanationLabel; // x22
  UILabel_o *explanationLabel2; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *clearLabel; // x22
  UILabel_o *resetLabel; // x22
  __int64 v38; // x2
  struct UILabel_array *sortLabel; // x8
  UILabel_o *v40; // x22
  struct UILabel_array *v41; // x8
  UILabel_o *v42; // x22
  struct UILabel_array *v43; // x8
  UILabel_o *v44; // x22
  struct UILabel_array *v45; // x8
  UILabel_o *v46; // x21
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x2
  int32_t v49; // w1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x1
  struct UIScrollView_o *servantFilterScrollView; // x8
  System_Action_o *v54; // x20

  if ( (byte_4B4019C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&ListViewSort_TypeInfo, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_EndOpen__, v11);
    sub_1BDB878(&StringLiteral_11854/*"SERVANT_SORT_RESET"*/, v12);
    sub_1BDB878(&StringLiteral_11688/*"SERVANT_SORT_CANCEL"*/, v13);
    sub_1BDB878(&StringLiteral_11692/*"SERVANT_SORT_DECIDE"*/, v14);
    sub_1BDB878(&StringLiteral_11856/*"SERVANT_SORT_TITLE2"*/, v15);
    sub_1BDB878(&StringLiteral_11689/*"SERVANT_SORT_CLEAR"*/, v16);
    sub_1BDB878(&StringLiteral_11693/*"SERVANT_SORT_EXPLANATION"*/, v17);
    sub_1BDB878(&StringLiteral_11855/*"SERVANT_SORT_TITLE"*/, v18);
    sub_1BDB878(&StringLiteral_11694/*"SERVANT_SORT_EXPLANATION2"*/, v19);
    byte_4B4019C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BDB81C(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      (const MethodInfo *)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v23, v24);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        baseSortInfo->fields.listViewKind = 5;
        v26 = (ListViewSort_o *)sub_1BDBAC4(ListViewSort_TypeInfo);
        ListViewSort___ctor_42768220(v26, baseSortInfo, 0LL);
        p_operationSortInfo = &this->fields.operationSortInfo;
        this->fields.operationSortInfo = v26;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v26, v28, v29);
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11855/*"SERVANT_SORT_TITLE"*/, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
          title2Label = this->fields.title2Label;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11856/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, (System_String_o *)gameObject, 0LL);
            explanationLabel = this->fields.explanationLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11693/*"SERVANT_SORT_EXPLANATION"*/,
                                                       0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
              explanationLabel2 = this->fields.explanationLabel2;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11694/*"SERVANT_SORT_EXPLANATION2"*/,
                                                         0LL);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0LL);
                decideLabel = this->fields.decideLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11692/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11688/*"SERVANT_SORT_CANCEL"*/,
                                                             0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                    clearLabel = this->fields.clearLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11689/*"SERVANT_SORT_CLEAR"*/,
                                                               0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
                      resetLabel = this->fields.resetLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11854/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                      if ( resetLabel )
                      {
                        UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0LL);
                        sortLabel = this->fields.sortLabel;
                        if ( sortLabel )
                        {
                          if ( !sortLabel->max_length )
                            goto LABEL_37;
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( !*p_operationSortInfo )
                            goto LABEL_36;
                          v40 = sortLabel->m_Items[0];
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     27,
                                                                     0LL);
                          if ( !v40 )
                            goto LABEL_36;
                          UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
                          v41 = this->fields.sortLabel;
                          if ( !v41 )
                            goto LABEL_36;
                          if ( v41->max_length <= 1 )
                            goto LABEL_37;
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( !*p_operationSortInfo )
                            goto LABEL_36;
                          v42 = v41->m_Items[1];
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     2,
                                                                     0LL);
                          if ( !v42 )
                            goto LABEL_36;
                          UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
                          v43 = this->fields.sortLabel;
                          if ( !v43 )
                            goto LABEL_36;
                          if ( v43->max_length <= 2 )
                            goto LABEL_37;
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( !*p_operationSortInfo )
                            goto LABEL_36;
                          v44 = v43->m_Items[2];
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     14,
                                                                     0LL);
                          if ( !v44 )
                            goto LABEL_36;
                          UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
                          v45 = this->fields.sortLabel;
                          if ( !v45 )
                            goto LABEL_36;
                          if ( v45->max_length <= 3 )
LABEL_37:
                            sub_1BDBADC(gameObject, v21, v38);
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( *p_operationSortInfo )
                          {
                            v46 = v45->m_Items[3];
                            gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                       (ListViewSort_o *)gameObject,
                                                                       26,
                                                                       0LL);
                            if ( v46 )
                            {
                              UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
                              UserServantCoinSortSelectMenu__SetupUseFilterKindList(this, v47);
                              UserServantCoinSortSelectMenu__SetupFilterButtons(
                                this,
                                this->fields.operationSortInfo,
                                v48);
                              UserServantCoinSortSelectMenu__SetupButtonLayout(this, v49, v50);
                              UserServantCoinSortSelectMenu__SetButtenEnable(this, 1, v51);
                              UserServantCoinSortSelectMenu__SetButtenSelect(this, v52);
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
                                    v54 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                                    System_Action___ctor(
                                      v54,
                                      (Il2CppObject *)this,
                                      Method_UserServantCoinSortSelectMenu_EndOpen__,
                                      0LL);
                                    BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
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
LABEL_36:
    sub_1BDBAD4(gameObject, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinSortSelectMenu__SetButtenEnable(
        UserServantCoinSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v9; // x2
  struct UICommonButton_array *sortButton; // x8
  struct UICommonButton_array *v11; // x8
  struct UICommonButton_array *v12; // x8
  struct UICommonButton_array *v13; // x8
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B401A1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4B401A1 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.resetButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  sortButton = this->fields.sortButton;
  if ( !sortButton )
    goto LABEL_26;
  if ( !sortButton->max_length )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)sortButton->m_Items[0];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  v11 = this->fields.sortButton;
  if ( !v11 )
    goto LABEL_26;
  if ( v11->max_length <= 1 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v11->m_Items[1];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  v12 = this->fields.sortButton;
  if ( !v12 )
    goto LABEL_26;
  if ( v12->max_length <= 2 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v12->m_Items[2];
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL), (v13 = this->fields.sortButton) == 0LL) )
  {
LABEL_26:
    sub_1BDBAD4(decideButton, isEnable);
  }
  if ( v13->max_length <= 3 )
LABEL_27:
    sub_1BDBADC(decideButton, isEnable, v9);
  decideButton = (UnityEngine_Behaviour_o *)v13->m_Items[3];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1BDBAD4(0LL, v14);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v15.fields._current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall UserServantCoinSortSelectMenu__SetButtenSelect(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserServantCoinSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UICommonButton_array *sortButton; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v14; // x8
  struct UICommonButton_array *v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  struct UICommonButton_array *v18; // x8
  struct ListViewSort_o *v19; // x8
  __int64 *v20; // x8
  struct UICommonButton_array *v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8
  _BOOL8 v24; // x0
  __int64 v25; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v27; // x1
  FilterKindList_c *v28; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v30; // x1
  ListViewSort_o *v31; // x0
  bool v32; // w0
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-60h] BYREF

  v3 = this;
  if ( (byte_4B401A3 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1BDB878(&FilterKindList_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9);
    sub_1BDB878(&StringLiteral_17456/*"btn_bg_04"*/, v10);
    this = (UserServantCoinSortSelectMenu_o *)sub_1BDB878(&StringLiteral_17455/*"btn_bg_03"*/, v11);
    byte_4B401A3 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  sortButton = v3->fields.sortButton;
  if ( !sortButton )
    goto LABEL_48;
  if ( !sortButton->max_length )
    goto LABEL_50;
  this = (UserServantCoinSortSelectMenu_o *)sortButton->m_Items[0];
  if ( !this )
    goto LABEL_48;
  this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = v3->fields.operationSortInfo;
  if ( !operationSortInfo || !this )
    goto LABEL_48;
  v14 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v14, 0LL);
  v15 = v3->fields.sortButton;
  if ( !v15 )
    goto LABEL_48;
  if ( v15->max_length <= 1 )
    goto LABEL_50;
  this = (UserServantCoinSortSelectMenu_o *)v15->m_Items[1];
  if ( !this )
    goto LABEL_48;
  this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v16 = v3->fields.operationSortInfo;
  if ( !v16 || !this )
    goto LABEL_48;
  v17 = (System_String_o **)(v16->fields.sortKind == 2 ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v17, 0LL);
  v18 = v3->fields.sortButton;
  if ( !v18 )
    goto LABEL_48;
  if ( v18->max_length <= 2 )
    goto LABEL_50;
  if ( (this = (UserServantCoinSortSelectMenu_o *)v18->m_Items[2]) == 0LL
    || (this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v19 = v3->fields.operationSortInfo) == 0LL)
    || !this
    || (v19->fields.sortKind != 14 ? (v20 = &StringLiteral_17456/*"btn_bg_04"*/) : (v20 = &StringLiteral_17455/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v20, 0LL),
        (v21 = v3->fields.sortButton) == 0LL) )
  {
LABEL_48:
    sub_1BDBAD4(this, method);
  }
  if ( v21->max_length <= 3 )
LABEL_50:
    sub_1BDBADC(this, method, v2);
  this = (UserServantCoinSortSelectMenu_o *)v21->m_Items[3];
  if ( !this )
    goto LABEL_48;
  this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v22 = v3->fields.operationSortInfo;
  if ( !v22 || !this )
    goto LABEL_48;
  v23 = (System_String_o **)(v22->fields.sortKind == 26 ? &StringLiteral_17455/*"btn_bg_03"*/ : &StringLiteral_17456/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v23, 0LL);
  this = (UserServantCoinSortSelectMenu_o *)v3->fields.useFilterButtonList;
  if ( !this )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v24 )
      break;
    current = (ServantFilterButtonControl_o *)v34.fields._current;
    if ( !v34.fields._current )
      sub_1BDBAD4(v24, v25);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v34.fields._current, 0LL);
    v28 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v28 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v28->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1BDBAD4(0LL, v27);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_36BB944 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v31 = v3->fields.operationSortInfo;
      if ( !v31 )
        sub_1BDBAD4(0LL, v30);
      v32 = ListViewSort__CheckSvtGroupFilter(v31, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v32, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinSortSelectMenu__SetupButtonLayout(
        UserServantCoinSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  System_Array_o *v6; // x0
  ListViewSort_FilterCategoryKind_array *v7; // x20
  const MethodInfo *v8; // x2
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_4B401A2 & 1) == 0 )
  {
    sub_1BDB878(&ListViewSort_FilterCategoryKind___TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
      v4);
    byte_4B401A2 = 1;
  }
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
  servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sortButtonGrid;
  if ( !servantFilterRoot )
    goto LABEL_8;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))servantFilterRoot->klass[1]._1.castClass)(
    servantFilterRoot,
    servantFilterRoot->klass[1]._1.declaringType);
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot
    || (UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0LL),
        v6 = (System_Array_o *)sub_1BDB920(ListViewSort_FilterCategoryKind___TypeInfo, 4LL),
        v9.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
        v7 = (ListViewSort_FilterCategoryKind_array *)v6,
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v6, v9, 0LL),
        UserServantCoinSortSelectMenu__InitCategoryContainer(this, v7, v8),
        (servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.servantFilterScrollView) == 0LL) )
  {
LABEL_8:
    sub_1BDBAD4(servantFilterRoot, *(_QWORD *)&kind);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)servantFilterRoot, 0LL);
}


void __fastcall UserServantCoinSortSelectMenu__SetupFilterButtons(
        UserServantCoinSortSelectMenu_o *this,
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
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v25; // w22
  ServantFilterButtonControl_OnClickFilterButton_o *v26; // x23
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B401A0 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, sort);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9);
    sub_1BDB878(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v10);
    sub_1BDB878(&System_Predicate_ServantFilterButtonControl__TypeInfo, v11);
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu_OnClickFilterButton__, v12);
    sub_1BDB878(&Method_UserServantCoinSortSelectMenu__SetupFilterButtons_b__42_0__, v13);
    byte_4B401A0 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  filterButtonList = this->fields.filterButtonList;
  v15 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)this,
    Method_UserServantCoinSortSelectMenu__SetupFilterButtons_b__42_0__,
    0LL);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)filterButtonList,
                (System_Predicate_T__o *)v15,
                (const MethodInfo_36D64D4 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.useFilterButtonList, (int32_t)All, v19, v20),
        (v16 = this->fields.filterButtonList) == 0LL) )
  {
    sub_1BDBAD4(v16, v17);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)v16,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v21 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1BDBAD4(v21, v22);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1BDBAD4(0LL, v22);
    v25 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            (int32_t)v27.fields._current[2].klass,
            (const MethodInfo_36BB944 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v26 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1BDBAC4(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v26,
      (Il2CppObject *)this,
      (intptr_t)Method_UserServantCoinSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v26, v25, 0, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall UserServantCoinSortSelectMenu__SetupUseFilterKindList(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v7; // w8
  FilterKindList_c *v8; // x0
  System_Collections_Generic_List_T__o *v9; // x19

  v2 = this;
  if ( (byte_4B4019E & 1) == 0 )
  {
    sub_1BDB878(&FilterKindList_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v4);
    this = (UserServantCoinSortSelectMenu_o *)sub_1BDB878(
                                                &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                                v5);
    byte_4B4019E = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_10;
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
    (const MethodInfo_36BB7D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (UserServantCoinSortSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          (System_Collections_Generic_List_T__o *)this,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
          (const MethodInfo_36BB7D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (UserServantCoinSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList) == 0LL)
    || (v9 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList,
        this = (UserServantCoinSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                    (System_Collections_Generic_List_T__o *)this,
                                                    (const MethodInfo_36BD084 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v9) )
  {
LABEL_10:
    sub_1BDBAD4(this, method);
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_36BB7D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall UserServantCoinSortSelectMenu___SetupFilterButtons_b__42_0(
        UserServantCoinSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4B401AF & 1) == 0 )
  {
    this = (UserServantCoinSortSelectMenu_o *)sub_1BDB878(
                                                &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                x);
    byte_4B401AF = 1;
  }
  if ( !x || (this = (UserServantCoinSortSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1BDBAD4(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_36BB944 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall UserServantCoinSortSelectMenu__add_callbackFunc(
        UserServantCoinSortSelectMenu_o *this,
        UserServantCoinSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct UserServantCoinSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserServantCoinSortSelectMenu_o *v10; // x0
  UserServantCoinSortSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B4019A & 1) == 0 )
  {
    sub_1BDB878(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B4019A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserServantCoinSortSelectMenu_CallbackFunc_c *)v7->klass != UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinSortSelectMenu_o *)sub_1BDBD94(v7);
  UserServantCoinSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall UserServantCoinSortSelectMenu__get_closeBtnPath(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B401AD & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15616/*"Window/CancelButton"*/, method);
    byte_4B401AD = 1;
  }
  return (System_String_o *)StringLiteral_15616/*"Window/CancelButton"*/;
}


void __fastcall UserServantCoinSortSelectMenu__remove_callbackFunc(
        UserServantCoinSortSelectMenu_o *this,
        UserServantCoinSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct UserServantCoinSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  UserServantCoinSortSelectMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B4019B & 1) == 0 )
  {
    sub_1BDB878(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4B4019B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (UserServantCoinSortSelectMenu_CallbackFunc_c *)v7->klass != UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C15B34(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinSortSelectMenu_o *)sub_1BDBD94(v7);
  UserServantCoinSortSelectMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinSortSelectMenu_CallbackFunc___ctor(
        UserServantCoinSortSelectMenu_CallbackFunc_o *this,
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1E5AC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1E564;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall UserServantCoinSortSelectMenu_CallbackFunc__BeginInvoke(
        UserServantCoinSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B401B0 & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, result);
    byte_4B401B0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall UserServantCoinSortSelectMenu_CallbackFunc__EndInvoke(
        UserServantCoinSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall UserServantCoinSortSelectMenu_CallbackFunc__Invoke(
        UserServantCoinSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall UserServantCoinSortSelectMenu___c__DisplayClass41_0___ctor(
        UserServantCoinSortSelectMenu___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserServantCoinSortSelectMenu___c__DisplayClass41_0___InitCategoryContainer_b__0(
        UserServantCoinSortSelectMenu___c__DisplayClass41_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.categoryKind == this->fields.kind;
}