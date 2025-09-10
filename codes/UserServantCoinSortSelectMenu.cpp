void UserServantCoinSortSelectMenu___ctor(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C22A0B & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    byte_4C22A0B = 1;
  }
  v3 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_376EB38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.useFilterKindList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.useFilterButtonList, (int32_t)v6, v7, v8);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void UserServantCoinSortSelectMenu__Callback(
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
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void UserServantCoinSortSelectMenu__Close(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinSortSelectMenu__Close_33675020(this, 0, v2);
}


void UserServantCoinSortSelectMenu__Close_33675020(
        UserServantCoinSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C229FA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_EndClose__);
    byte_4C229FA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserServantCoinSortSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void UserServantCoinSortSelectMenu__EndClose(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void UserServantCoinSortSelectMenu__EndOpen(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void UserServantCoinSortSelectMenu__Init(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void UserServantCoinSortSelectMenu__InitCategoryContainer(
        UserServantCoinSortSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *v4; // x20
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
  if ( (byte_4C229FC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu___c__DisplayClass41_0__InitCategoryContainer_b__0__);
    this = (UserServantCoinSortSelectMenu_o *)sub_1C2D490(&UserServantCoinSortSelectMenu___c__DisplayClass41_0_TypeInfo);
    byte_4C229FC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !categoryKindKist )
    goto LABEL_27;
  max_length = categoryKindKist->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_28;
  this = (UserServantCoinSortSelectMenu_o *)v4->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_1C2D6EC(this, categoryKindKist);
  v6 = *(int32_t *)((char *)categoryKindKist->m_Items + ((__int64)((max_length << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_1C2D6EC(v8, v9);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
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
      v15 = sub_1C2D6DC(UserServantCoinSortSelectMenu___c__DisplayClass41_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( v10 >= LODWORD(categoryKindKist->max_length) )
        break;
      if ( !v15 )
        goto LABEL_27;
      *(_DWORD *)(v15 + 16) = categoryKindKist->m_Items[v10];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_object__o *)v4->fields.servantFilterCategoryContainerList;
      v17 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v15,
        Method_UserServantCoinSortSelectMenu___c__DisplayClass41_0__InitCategoryContainer_b__0__,
        0);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v18 = System_Collections_Generic_List_object___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v17,
              (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0);
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
    sub_1C2D6F4(this, categoryKindKist, method);
  }
}


void UserServantCoinSortSelectMenu__OnClickCancel(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C22A02 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickCancel__);
    byte_4C22A02 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_UserServantCoinSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    UserServantCoinSortSelectMenu__Callback(this, 0, v5);
  }
}


void UserServantCoinSortSelectMenu__OnClickClear(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4C22A03 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickClear__);
    byte_4C22A03 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinSortSelectMenu_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1C2D6EC(useFilterKindList, v5);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0);
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v8);
  }
}


void UserServantCoinSortSelectMenu__OnClickDecide(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
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
  if ( (byte_4C22A01 & 1) == 0 )
  {
    this = (UserServantCoinSortSelectMenu_o *)sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickDecide__);
    byte_4C22A01 = 1;
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
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    UserServantCoinSortSelectMenu__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_UserServantCoinSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinSortSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (UserServantCoinSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1C2D6EC(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0);
    UserServantCoinSortSelectMenu__Callback(v2, 1, v9);
  }
}


void UserServantCoinSortSelectMenu__OnClickFilterButton(
        UserServantCoinSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4C22A09 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickFilterButton__);
    byte_4C22A09 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_UserServantCoinSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2D6EC(0, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0);
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void UserServantCoinSortSelectMenu__OnClickReset(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4C22A04 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickReset__);
    byte_4C22A04 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickReset__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinSortSelectMenu_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1C2D6EC(useFilterKindList, v5);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0);
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v8);
  }
}


void UserServantCoinSortSelectMenu__OnClickSortAmount(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C22A07 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickSortAmount__);
    byte_4C22A07 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinSortSelectMenu_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2D6EC(v5, v6);
    operationSortInfo->fields.sortKind = 14;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void UserServantCoinSortSelectMenu__OnClickSortId(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C22A05 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickSortId__);
    byte_4C22A05 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickSortId__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortId__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinSortSelectMenu_OnClickSortId__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2D6EC(v5, v6);
    operationSortInfo->fields.sortKind = 27;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void UserServantCoinSortSelectMenu__OnClickSortRarity(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C22A06 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickSortRarity__);
    byte_4C22A06 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2D6EC(v5, v6);
    operationSortInfo->fields.sortKind = 2;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void UserServantCoinSortSelectMenu__OnClickSortServantName(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4C22A08 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickSortServantName__);
    byte_4C22A08 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinSortSelectMenu_OnClickSortServantName__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortServantName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinSortSelectMenu_OnClickSortServantName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C2D6EC(v5, v6);
    operationSortInfo->fields.sortKind = 26;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void UserServantCoinSortSelectMenu__Open(
        UserServantCoinSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        UserServantCoinSortSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v15; // x22
  struct ListViewSort_o **p_operationSortInfo; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UILabel_o *titleLabel; // x22
  UILabel_o *title2Label; // x22
  UILabel_o *explanationLabel; // x22
  UILabel_o *explanationLabel2; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *clearLabel; // x22
  UILabel_o *resetLabel; // x22
  __int64 v27; // x2
  struct UILabel_array *sortLabel; // x8
  UILabel_o *v29; // x22
  struct UILabel_array *v30; // x8
  UILabel_o *v31; // x22
  struct UILabel_array *v32; // x8
  UILabel_o *v33; // x22
  struct UILabel_array *v34; // x8
  UILabel_o *v35; // x21
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x2
  int32_t v38; // w1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  struct UIScrollView_o *servantFilterScrollView; // x8
  System_Action_o *v43; // x20

  if ( (byte_4C229F9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_EndOpen__);
    sub_1C2D490(&StringLiteral_11878/*"SERVANT_SORT_RESET"*/);
    sub_1C2D490(&StringLiteral_11712/*"SERVANT_SORT_CANCEL"*/);
    sub_1C2D490(&StringLiteral_11716/*"SERVANT_SORT_DECIDE"*/);
    sub_1C2D490(&StringLiteral_11880/*"SERVANT_SORT_TITLE2"*/);
    sub_1C2D490(&StringLiteral_11713/*"SERVANT_SORT_CLEAR"*/);
    sub_1C2D490(&StringLiteral_11717/*"SERVANT_SORT_EXPLANATION"*/);
    sub_1C2D490(&StringLiteral_11879/*"SERVANT_SORT_TITLE"*/);
    sub_1C2D490(&StringLiteral_11718/*"SERVANT_SORT_EXPLANATION2"*/);
    byte_4C229F9 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)sort,
      (const MethodInfo *)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v12, v13);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        baseSortInfo->fields.listViewKind = 5;
        v15 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
        ListViewSort___ctor_43601448(v15, baseSortInfo, 0);
        p_operationSortInfo = &this->fields.operationSortInfo;
        this->fields.operationSortInfo = v15;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v15, v17, v18);
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11879/*"SERVANT_SORT_TITLE"*/, 0);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
          title2Label = this->fields.title2Label;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11880/*"SERVANT_SORT_TITLE2"*/, 0);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, (System_String_o *)gameObject, 0);
            explanationLabel = this->fields.explanationLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11717/*"SERVANT_SORT_EXPLANATION"*/, 0);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
              explanationLabel2 = this->fields.explanationLabel2;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11718/*"SERVANT_SORT_EXPLANATION2"*/,
                                                         0);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0);
                decideLabel = this->fields.decideLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11716/*"SERVANT_SORT_DECIDE"*/,
                                                           0);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
                  cancelLabel = this->fields.cancelLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11712/*"SERVANT_SORT_CANCEL"*/,
                                                             0);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
                    clearLabel = this->fields.clearLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11713/*"SERVANT_SORT_CLEAR"*/,
                                                               0);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0);
                      resetLabel = this->fields.resetLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11878/*"SERVANT_SORT_RESET"*/,
                                                                 0);
                      if ( resetLabel )
                      {
                        UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0);
                        sortLabel = this->fields.sortLabel;
                        if ( sortLabel )
                        {
                          if ( !LODWORD(sortLabel->max_length) )
                            goto LABEL_37;
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( !*p_operationSortInfo )
                            goto LABEL_36;
                          v29 = sortLabel->m_Items[0];
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     27,
                                                                     0);
                          if ( !v29 )
                            goto LABEL_36;
                          UILabel__set_text(v29, (System_String_o *)gameObject, 0);
                          v30 = this->fields.sortLabel;
                          if ( !v30 )
                            goto LABEL_36;
                          if ( LODWORD(v30->max_length) <= 1 )
                            goto LABEL_37;
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( !*p_operationSortInfo )
                            goto LABEL_36;
                          v31 = v30->m_Items[1];
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     2,
                                                                     0);
                          if ( !v31 )
                            goto LABEL_36;
                          UILabel__set_text(v31, (System_String_o *)gameObject, 0);
                          v32 = this->fields.sortLabel;
                          if ( !v32 )
                            goto LABEL_36;
                          if ( LODWORD(v32->max_length) <= 2 )
                            goto LABEL_37;
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( !*p_operationSortInfo )
                            goto LABEL_36;
                          v33 = v32->m_Items[2];
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     14,
                                                                     0);
                          if ( !v33 )
                            goto LABEL_36;
                          UILabel__set_text(v33, (System_String_o *)gameObject, 0);
                          v34 = this->fields.sortLabel;
                          if ( !v34 )
                            goto LABEL_36;
                          if ( LODWORD(v34->max_length) <= 3 )
LABEL_37:
                            sub_1C2D6F4(gameObject, v10, v27);
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( *p_operationSortInfo )
                          {
                            v35 = v34->m_Items[3];
                            gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                       (ListViewSort_o *)gameObject,
                                                                       26,
                                                                       0);
                            if ( v35 )
                            {
                              UILabel__set_text(v35, (System_String_o *)gameObject, 0);
                              UserServantCoinSortSelectMenu__SetupUseFilterKindList(this, v36);
                              UserServantCoinSortSelectMenu__SetupFilterButtons(
                                this,
                                this->fields.operationSortInfo,
                                v37);
                              UserServantCoinSortSelectMenu__SetupButtonLayout(this, v38, v39);
                              UserServantCoinSortSelectMenu__SetButtenEnable(this, 1, v40);
                              UserServantCoinSortSelectMenu__SetButtenSelect(this, v41);
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
                                      0);
                                    this->fields.state = 1;
                                    v43 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                                    System_Action___ctor(
                                      v43,
                                      (Il2CppObject *)this,
                                      Method_UserServantCoinSortSelectMenu_EndOpen__,
                                      0);
                                    BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0);
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
    sub_1C2D6EC(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void UserServantCoinSortSelectMenu__SetButtenEnable(
        UserServantCoinSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v6; // x2
  struct UICommonButton_array *sortButton; // x8
  struct UICommonButton_array *v8; // x8
  struct UICommonButton_array *v9; // x8
  struct UICommonButton_array *v10; // x8
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C229FE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4C229FE = 1;
  }
  memset(&v12, 0, sizeof(v12));
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
  v8 = this->fields.sortButton;
  if ( !v8 )
    goto LABEL_26;
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v8->m_Items[1];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  v9 = this->fields.sortButton;
  if ( !v9 )
    goto LABEL_26;
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v9->m_Items[2];
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0), (v10 = this->fields.sortButton) == 0) )
  {
LABEL_26:
    sub_1C2D6EC(decideButton, isEnable);
  }
  if ( LODWORD(v10->max_length) <= 3 )
LABEL_27:
    sub_1C2D6F4(decideButton, isEnable, v6);
  decideButton = (UnityEngine_Behaviour_o *)v10->m_Items[3];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1C2D6EC(0, v11);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v12.fields._current, isEnable, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void UserServantCoinSortSelectMenu__SetButtenSelect(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserServantCoinSortSelectMenu_o *v3; // x19
  struct UICommonButton_array *sortButton; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v6; // x8
  struct UICommonButton_array *v7; // x8
  struct ListViewSort_o *v8; // x8
  System_String_o **v9; // x8
  struct UICommonButton_array *v10; // x8
  struct ListViewSort_o *v11; // x8
  __int64 *v12; // x8
  struct UICommonButton_array *v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v19; // x1
  FilterKindList_c *v20; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v22; // x1
  ListViewSort_o *v23; // x0
  bool v24; // w0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  v3 = this;
  if ( (byte_4C22A00 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_1C2D490(&StringLiteral_17433/*"btn_bg_04"*/);
    this = (UserServantCoinSortSelectMenu_o *)sub_1C2D490(&StringLiteral_17432/*"btn_bg_03"*/);
    byte_4C22A00 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  sortButton = v3->fields.sortButton;
  if ( !sortButton )
    goto LABEL_48;
  if ( !LODWORD(sortButton->max_length) )
    goto LABEL_50;
  this = (UserServantCoinSortSelectMenu_o *)sortButton->m_Items[0];
  if ( !this )
    goto LABEL_48;
  this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = v3->fields.operationSortInfo;
  if ( !operationSortInfo || !this )
    goto LABEL_48;
  v6 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17432/*"btn_bg_03"*/ : &StringLiteral_17433/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v6, 0);
  v7 = v3->fields.sortButton;
  if ( !v7 )
    goto LABEL_48;
  if ( LODWORD(v7->max_length) <= 1 )
    goto LABEL_50;
  this = (UserServantCoinSortSelectMenu_o *)v7->m_Items[1];
  if ( !this )
    goto LABEL_48;
  this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v8 = v3->fields.operationSortInfo;
  if ( !v8 || !this )
    goto LABEL_48;
  v9 = (System_String_o **)(v8->fields.sortKind == 2 ? &StringLiteral_17432/*"btn_bg_03"*/ : &StringLiteral_17433/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v9, 0);
  v10 = v3->fields.sortButton;
  if ( !v10 )
    goto LABEL_48;
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_50;
  if ( (this = (UserServantCoinSortSelectMenu_o *)v10->m_Items[2]) == 0
    || (this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v11 = v3->fields.operationSortInfo) == 0)
    || !this
    || (v11->fields.sortKind != 14 ? (v12 = &StringLiteral_17433/*"btn_bg_04"*/) : (v12 = &StringLiteral_17432/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v12, 0),
        (v13 = v3->fields.sortButton) == 0) )
  {
LABEL_48:
    sub_1C2D6EC(this, method);
  }
  if ( LODWORD(v13->max_length) <= 3 )
LABEL_50:
    sub_1C2D6F4(this, method, v2);
  this = (UserServantCoinSortSelectMenu_o *)v13->m_Items[3];
  if ( !this )
    goto LABEL_48;
  this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v14 = v3->fields.operationSortInfo;
  if ( !v14 || !this )
    goto LABEL_48;
  v15 = (System_String_o **)(v14->fields.sortKind == 26 ? &StringLiteral_17432/*"btn_bg_03"*/ : &StringLiteral_17433/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v15, 0);
  this = (UserServantCoinSortSelectMenu_o *)v3->fields.useFilterButtonList;
  if ( !this )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v16 )
      break;
    current = (ServantFilterButtonControl_o *)v26.fields._current;
    if ( !v26.fields._current )
      sub_1C2D6EC(v16, v17);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v26.fields._current, 0);
    v20 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v20 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v20->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1C2D6EC(0, v19);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_376F704 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v23 = v3->fields.operationSortInfo;
      if ( !v23 )
        sub_1C2D6EC(0, v22);
      v24 = ListViewSort__CheckSvtGroupFilter(v23, current->fields.filterKind, 0);
      ServantFilterButtonControl__SetButtonMask(current, !v24, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void UserServantCoinSortSelectMenu__SetupButtonLayout(
        UserServantCoinSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  System_Array_o *v5; // x0
  System_RuntimeFieldHandle_o v6; // x1
  ListViewSort_FilterCategoryKind_array *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4C229FF & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805);
    byte_4C229FF = 1;
  }
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0);
  servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sortButtonGrid;
  if ( !servantFilterRoot )
    goto LABEL_8;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))servantFilterRoot->klass[1]._1.element_class)(
    servantFilterRoot,
    servantFilterRoot->klass[1]._1.castClass);
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot
    || (UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0),
        v5 = (System_Array_o *)sub_1C2D538(ListViewSort_FilterCategoryKind___TypeInfo, 4),
        v6.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
        v7 = (ListViewSort_FilterCategoryKind_array *)v5,
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v5, v6, 0),
        UserServantCoinSortSelectMenu__InitCategoryContainer(this, v7, v8),
        (servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.servantFilterScrollView) == 0) )
  {
LABEL_8:
    sub_1C2D6EC(servantFilterRoot, *(_QWORD *)&kind);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)servantFilterRoot, 0);
}


void UserServantCoinSortSelectMenu__SetupFilterButtons(
        UserServantCoinSortSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  System_Predicate_object__o *v6; // x22
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v16; // w22
  ServantFilterButtonControl_OnClickFilterButton_o *v17; // x23
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C229FD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_1C2D490(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_1C2D490(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu_OnClickFilterButton__);
    sub_1C2D490(&Method_UserServantCoinSortSelectMenu__SetupFilterButtons_b__42_0__);
    byte_4C229FD = 1;
  }
  memset(&v18, 0, sizeof(v18));
  filterButtonList = this->fields.filterButtonList;
  v6 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v6,
    (Il2CppObject *)this,
    Method_UserServantCoinSortSelectMenu__SetupFilterButtons_b__42_0__,
    0);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)filterButtonList,
                (System_Predicate_T__o *)v6,
                (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.useFilterButtonList, (int32_t)All, v10, v11),
        (v7 = this->fields.filterButtonList) == 0) )
  {
    sub_1C2D6EC(v7, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)v7,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v12 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1C2D6EC(v12, v13);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1C2D6EC(0, v13);
    v16 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            *(_DWORD *)((char *)&v18.fields._current->klass + (unsigned __int64)&qword_20),
            (const MethodInfo_376F704 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v17 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1C2D6DC(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v17,
      (Il2CppObject *)this,
      (intptr_t)Method_UserServantCoinSortSelectMenu_OnClickFilterButton__,
      0);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v17, v16, 0, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void UserServantCoinSortSelectMenu__SetupUseFilterKindList(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v4; // w8
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *v6; // x19

  v2 = this;
  if ( (byte_4C229FB & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    this = (UserServantCoinSortSelectMenu_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4C229FB = 1;
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
    (const MethodInfo_376F598 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (UserServantCoinSortSelectMenu_o *)v2->fields.useFilterKindList;
  if ( !this
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          (System_Collections_Generic_List_T__o *)this,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
          (const MethodInfo_376F598 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (UserServantCoinSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList) == 0)
    || (v6 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList,
        this = (UserServantCoinSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                    (System_Collections_Generic_List_T__o *)this,
                                                    (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v6) )
  {
LABEL_10:
    sub_1C2D6EC(this, method);
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_376F598 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool UserServantCoinSortSelectMenu___SetupFilterButtons_b__42_0(
        UserServantCoinSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4C22A0C & 1) == 0 )
  {
    this = (UserServantCoinSortSelectMenu_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_4C22A0C = 1;
  }
  if ( !x || (this = (UserServantCoinSortSelectMenu_o *)v4->fields.useFilterKindList) == 0 )
    sub_1C2D6EC(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_376F704 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void UserServantCoinSortSelectMenu__add_callbackFunc(
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

  if ( (byte_4C229F7 & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4C229F7 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserServantCoinSortSelectMenu_CallbackFunc_c *)v7->klass != UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinSortSelectMenu_o *)sub_1C2D9AC(v7);
  UserServantCoinSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *UserServantCoinSortSelectMenu__get_closeBtnPath(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22A0A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15638/*"Window/CancelButton"*/);
    byte_4C22A0A = 1;
  }
  return (System_String_o *)StringLiteral_15638/*"Window/CancelButton"*/;
}


void UserServantCoinSortSelectMenu__remove_callbackFunc(
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

  if ( (byte_4C229F8 & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4C229F8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (UserServantCoinSortSelectMenu_CallbackFunc_c *)v7->klass != UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinSortSelectMenu_o *)sub_1C2D9AC(v7);
  UserServantCoinSortSelectMenu__Init(v10, v11);
}


void UserServantCoinSortSelectMenu_CallbackFunc___ctor(
        UserServantCoinSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6B800;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6B7B8;
}


System_IAsyncResult_o *UserServantCoinSortSelectMenu_CallbackFunc__BeginInvoke(
        UserServantCoinSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C22A0D & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C22A0D = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void UserServantCoinSortSelectMenu_CallbackFunc__EndInvoke(
        UserServantCoinSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void UserServantCoinSortSelectMenu_CallbackFunc__Invoke(
        UserServantCoinSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void UserServantCoinSortSelectMenu___c__DisplayClass41_0___ctor(
        UserServantCoinSortSelectMenu___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserServantCoinSortSelectMenu___c__DisplayClass41_0___InitCategoryContainer_b__0(
        UserServantCoinSortSelectMenu___c__DisplayClass41_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.categoryKind == this->fields.kind;
}