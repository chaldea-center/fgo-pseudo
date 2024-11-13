void __fastcall UserServantCoinSortSelectMenu___ctor(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4B11C4E & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v11, v12);
    byte_4B11C4E = 1;
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


void __fastcall UserServantCoinSortSelectMenu__Callback(
        UserServantCoinSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct UserServantCoinSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  struct UserServantCoinSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x0

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


void __fastcall UserServantCoinSortSelectMenu__Close(UserServantCoinSortSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinSortSelectMenu__Close_32272424(this, 0LL, v2);
}


void __fastcall UserServantCoinSortSelectMenu__Close_32272424(
        UserServantCoinSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11C3D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_EndClose__, v5, v6);
    byte_4B11C3D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_UserServantCoinSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall UserServantCoinSortSelectMenu__EndClose(
        UserServantCoinSortSelectMenu_o *this,
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
  UserServantCoinSortSelectMenu___c__DisplayClass41_0_o *v34; // x21
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
  if ( (byte_4B11C3F & 1) == 0 )
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
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu___c__DisplayClass41_0__InitCategoryContainer_b__0__, v17, v18);
    this = (UserServantCoinSortSelectMenu_o *)sub_1BCA7E0(
                                                &UserServantCoinSortSelectMenu___c__DisplayClass41_0_TypeInfo,
                                                v19,
                                                v20);
    byte_4B11C3F = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !categoryKindKist )
    goto LABEL_27;
  v21 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v21 )
    goto LABEL_28;
  this = (UserServantCoinSortSelectMenu_o *)v4->fields.servantFilterCategoryContainerList;
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
      v34 = (UserServantCoinSortSelectMenu___c__DisplayClass41_0_o *)sub_1BCAA2C(
                                                                       UserServantCoinSortSelectMenu___c__DisplayClass41_0_TypeInfo,
                                                                       categoryKindKist,
                                                                       v27,
                                                                       v28);
      UserServantCoinSortSelectMenu___c__DisplayClass41_0___ctor(v34, 0LL);
      if ( v29 >= categoryKindKist->max_length )
        break;
      if ( !v34 )
        goto LABEL_27;
      v34->fields.kind = categoryKindKist->m_Items[v29 + 1];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_object__o *)v4->fields.servantFilterCategoryContainerList;
      v38 = (System_Predicate_object__o *)sub_1BCAA2C(
                                            System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                            categoryKindKist,
                                            v35,
                                            v36);
      System_Predicate_object____ctor(
        v38,
        (Il2CppObject *)v34,
        Method_UserServantCoinSortSelectMenu___c__DisplayClass41_0__InitCategoryContainer_b__0__,
        0LL);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v40 = System_Collections_Generic_List_object___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v38,
              (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
      this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL);
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


void __fastcall UserServantCoinSortSelectMenu__OnClickCancel(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11C45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_OnClickCancel__, method, v2);
    byte_4B11C45 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_UserServantCoinSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserServantCoinSortSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    UserServantCoinSortSelectMenu__Callback(this, 0, v6);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickClear(
        UserServantCoinSortSelectMenu_o *this,
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

  if ( (byte_4B11C46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method, v2);
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_OnClickClear__, v4, v5);
    byte_4B11C46 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_UserServantCoinSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_UserServantCoinSortSelectMenu_OnClickClear__);
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
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v11);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickDecide(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserServantCoinSortSelectMenu_o *v3; // x19
  struct UIScrollView_o *servantFilterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x2
  float value; // s0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4B11C44 & 1) == 0 )
  {
    this = (UserServantCoinSortSelectMenu_o *)sub_1BCA7E0(
                                                &Method_UserServantCoinSortSelectMenu_OnClickDecide__,
                                                method,
                                                v2);
    byte_4B11C44 = 1;
  }
  if ( v3->fields.state == 2 )
  {
    servantFilterScrollView = v3->fields.servantFilterScrollView;
    if ( !servantFilterScrollView )
      goto LABEL_12;
    this = (UserServantCoinSortSelectMenu_o *)servantFilterScrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v3->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    UserServantCoinSortSelectMenu__SetButtenEnable(v3, 0, v6);
    v3->fields.state = 3;
    v8 = Method_UserServantCoinSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_UserServantCoinSortSelectMenu_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    this = (UserServantCoinSortSelectMenu_o *)v3->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1BCAA3C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v3->fields.operationSortInfo, 0LL);
    UserServantCoinSortSelectMenu__Callback(v3, 1, v10);
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

  if ( (byte_4B11C4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_OnClickFilterButton__, *(_QWORD *)&filterKind, method);
    byte_4B11C4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_UserServantCoinSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_UserServantCoinSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(0LL, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickReset(
        UserServantCoinSortSelectMenu_o *this,
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

  if ( (byte_4B11C47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method, v2);
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_OnClickReset__, v4, v5);
    byte_4B11C47 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_UserServantCoinSortSelectMenu_OnClickReset__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickReset__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_UserServantCoinSortSelectMenu_OnClickReset__);
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
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v11);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickSortAmount(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11C4A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_OnClickSortAmount__, method, v2);
    byte_4B11C4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_UserServantCoinSortSelectMenu_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortAmount__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserServantCoinSortSelectMenu_OnClickSortAmount__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 14;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickSortId(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11C48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_OnClickSortId__, method, v2);
    byte_4B11C48 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_UserServantCoinSortSelectMenu_OnClickSortId__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortId__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserServantCoinSortSelectMenu_OnClickSortId__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 27;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickSortRarity(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11C49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_OnClickSortRarity__, method, v2);
    byte_4B11C49 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_UserServantCoinSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserServantCoinSortSelectMenu_OnClickSortRarity__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 2;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall UserServantCoinSortSelectMenu__OnClickSortServantName(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B11C4B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_OnClickSortServantName__, method, v2);
    byte_4B11C4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_UserServantCoinSortSelectMenu_OnClickSortServantName__;
    if ( (*((_BYTE *)Method_UserServantCoinSortSelectMenu_OnClickSortServantName__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_UserServantCoinSortSelectMenu_OnClickSortServantName__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BCAA3C(v6, v7);
    operationSortInfo->fields.sortKind = 26;
    UserServantCoinSortSelectMenu__SetButtenSelect(this, v7);
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
  struct ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v37; // x22
  struct ListViewSort_o **p_operationSortInfo; // x21
  __int64 v39; // x1
  UILabel_o *titleLabel; // x22
  UILabel_o *title2Label; // x22
  UILabel_o *explanationLabel; // x22
  UILabel_o *explanationLabel2; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *clearLabel; // x22
  UILabel_o *resetLabel; // x22
  struct UILabel_array *sortLabel; // x8
  UILabel_o *v49; // x22
  struct UILabel_array *v50; // x8
  UILabel_o *v51; // x22
  struct UILabel_array *v52; // x8
  UILabel_o *v53; // x22
  struct UILabel_array *v54; // x8
  UILabel_o *v55; // x21
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x2
  int32_t v58; // w1
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x1
  struct UIScrollView_o *servantFilterScrollView; // x8
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Action_o *v66; // x20

  if ( (byte_4B11C3C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, sort);
    sub_1BCA7E0(&ListViewSort_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_EndOpen__, v13, v14);
    sub_1BCA7E0(&StringLiteral_11975/*"SERVANT_SORT_RESET"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11824/*"SERVANT_SORT_CANCEL"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11828/*"SERVANT_SORT_DECIDE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11977/*"SERVANT_SORT_TITLE2"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_11825/*"SERVANT_SORT_CLEAR"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_11829/*"SERVANT_SORT_EXPLANATION"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_11976/*"SERVANT_SORT_TITLE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11830/*"SERVANT_SORT_EXPLANATION2"*/, v29, v30);
    byte_4B11C3C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      gameObject = (UnityEngine_GameObject_o *)sub_1BCA784(&this->fields.baseSortInfo, sort);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        baseSortInfo->fields.listViewKind = 5;
        v37 = (ListViewSort_o *)sub_1BCAA2C(ListViewSort_TypeInfo, v32, v34, v35);
        ListViewSort___ctor_41481440(v37, baseSortInfo, 0LL);
        p_operationSortInfo = &this->fields.operationSortInfo;
        this->fields.operationSortInfo = v37;
        sub_1BCA784(&this->fields.operationSortInfo, v37);
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
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
                        sortLabel = this->fields.sortLabel;
                        if ( sortLabel )
                        {
                          if ( !sortLabel->max_length )
                            goto LABEL_37;
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( !*p_operationSortInfo )
                            goto LABEL_36;
                          v49 = sortLabel->m_Items[0];
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     27,
                                                                     0LL);
                          if ( !v49 )
                            goto LABEL_36;
                          UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
                          v50 = this->fields.sortLabel;
                          if ( !v50 )
                            goto LABEL_36;
                          if ( v50->max_length <= 1 )
                            goto LABEL_37;
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( !*p_operationSortInfo )
                            goto LABEL_36;
                          v51 = v50->m_Items[1];
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     2,
                                                                     0LL);
                          if ( !v51 )
                            goto LABEL_36;
                          UILabel__set_text(v51, (System_String_o *)gameObject, 0LL);
                          v52 = this->fields.sortLabel;
                          if ( !v52 )
                            goto LABEL_36;
                          if ( v52->max_length <= 2 )
                            goto LABEL_37;
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( !*p_operationSortInfo )
                            goto LABEL_36;
                          v53 = v52->m_Items[2];
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     14,
                                                                     0LL);
                          if ( !v53 )
                            goto LABEL_36;
                          UILabel__set_text(v53, (System_String_o *)gameObject, 0LL);
                          v54 = this->fields.sortLabel;
                          if ( !v54 )
                            goto LABEL_36;
                          if ( v54->max_length <= 3 )
LABEL_37:
                            sub_1BCAA44(gameObject, v32);
                          gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                          if ( *p_operationSortInfo )
                          {
                            v55 = v54->m_Items[3];
                            gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                       (ListViewSort_o *)gameObject,
                                                                       26,
                                                                       0LL);
                            if ( v55 )
                            {
                              UILabel__set_text(v55, (System_String_o *)gameObject, 0LL);
                              UserServantCoinSortSelectMenu__SetupUseFilterKindList(this, v56);
                              UserServantCoinSortSelectMenu__SetupFilterButtons(
                                this,
                                this->fields.operationSortInfo,
                                v57);
                              UserServantCoinSortSelectMenu__SetupButtonLayout(this, v58, v59);
                              UserServantCoinSortSelectMenu__SetButtenEnable(this, 1, v60);
                              UserServantCoinSortSelectMenu__SetButtenSelect(this, v61);
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
                                    v66 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v63, v64, v65);
                                    System_Action___ctor(
                                      v66,
                                      (Il2CppObject *)this,
                                      Method_UserServantCoinSortSelectMenu_EndOpen__,
                                      0LL);
                                    BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
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
    sub_1BCAA3C(gameObject, v32);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinSortSelectMenu__SetButtenEnable(
        UserServantCoinSortSelectMenu_o *this,
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
  struct UICommonButton_array *sortButton; // x8
  struct UICommonButton_array *v13; // x8
  struct UICommonButton_array *v14; // x8
  struct UICommonButton_array *v15; // x8
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11C41 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      isEnable,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9, v10);
    byte_4B11C41 = 1;
  }
  memset(&v17, 0, sizeof(v17));
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
  v13 = this->fields.sortButton;
  if ( !v13 )
    goto LABEL_26;
  if ( v13->max_length <= 1 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v13->m_Items[1];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  v14 = this->fields.sortButton;
  if ( !v14 )
    goto LABEL_26;
  if ( v14->max_length <= 2 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v14->m_Items[2];
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL), (v15 = this->fields.sortButton) == 0LL) )
  {
LABEL_26:
    sub_1BCAA3C(decideButton, isEnable);
  }
  if ( v15->max_length <= 3 )
LABEL_27:
    sub_1BCAA44(decideButton, isEnable);
  decideButton = (UnityEngine_Behaviour_o *)v15->m_Items[3];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1BCAA3C(0LL, v16);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v17.fields._current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall UserServantCoinSortSelectMenu__SetButtenSelect(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserServantCoinSortSelectMenu_o *v3; // x19
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
  struct UICommonButton_array *sortButton; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v22; // x8
  struct UICommonButton_array *v23; // x8
  struct ListViewSort_o *v24; // x8
  System_String_o **v25; // x8
  struct UICommonButton_array *v26; // x8
  struct ListViewSort_o *v27; // x8
  __int64 *v28; // x8
  struct UICommonButton_array *v29; // x8
  struct ListViewSort_o *v30; // x8
  System_String_o **v31; // x8
  _BOOL8 v32; // x0
  __int64 v33; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v35; // x1
  FilterKindList_c *v36; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v38; // x1
  ListViewSort_o *v39; // x0
  bool v40; // w0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  v3 = this;
  if ( (byte_4B11C43 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v8, v9);
    sub_1BCA7E0(&FilterKindList_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&StringLiteral_17644/*"btn_bg_04"*/, v16, v17);
    this = (UserServantCoinSortSelectMenu_o *)sub_1BCA7E0(&StringLiteral_17643/*"btn_bg_03"*/, v18, v19);
    byte_4B11C43 = 1;
  }
  memset(&v42, 0, sizeof(v42));
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
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = v3->fields.operationSortInfo;
  if ( !operationSortInfo || !this )
    goto LABEL_48;
  v22 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v22, 0LL);
  v23 = v3->fields.sortButton;
  if ( !v23 )
    goto LABEL_48;
  if ( v23->max_length <= 1 )
    goto LABEL_50;
  this = (UserServantCoinSortSelectMenu_o *)v23->m_Items[1];
  if ( !this )
    goto LABEL_48;
  this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v24 = v3->fields.operationSortInfo;
  if ( !v24 || !this )
    goto LABEL_48;
  v25 = (System_String_o **)(v24->fields.sortKind == 2 ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v25, 0LL);
  v26 = v3->fields.sortButton;
  if ( !v26 )
    goto LABEL_48;
  if ( v26->max_length <= 2 )
    goto LABEL_50;
  if ( (this = (UserServantCoinSortSelectMenu_o *)v26->m_Items[2]) == 0LL
    || (this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v27 = v3->fields.operationSortInfo) == 0LL)
    || !this
    || (v27->fields.sortKind != 14 ? (v28 = &StringLiteral_17644/*"btn_bg_04"*/) : (v28 = &StringLiteral_17643/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v28, 0LL),
        (v29 = v3->fields.sortButton) == 0LL) )
  {
LABEL_48:
    sub_1BCAA3C(this, method);
  }
  if ( v29->max_length <= 3 )
LABEL_50:
    sub_1BCAA44(this, method);
  this = (UserServantCoinSortSelectMenu_o *)v29->m_Items[3];
  if ( !this )
    goto LABEL_48;
  this = (UserServantCoinSortSelectMenu_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v30 = v3->fields.operationSortInfo;
  if ( !v30 || !this )
    goto LABEL_48;
  v31 = (System_String_o **)(v30->fields.sortKind == 26 ? &StringLiteral_17643/*"btn_bg_03"*/ : &StringLiteral_17644/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v31, 0LL);
  this = (UserServantCoinSortSelectMenu_o *)v3->fields.useFilterButtonList;
  if ( !this )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v32 )
      break;
    current = (ServantFilterButtonControl_o *)v42.fields._current;
    if ( !v42.fields._current )
      sub_1BCAA3C(v32, v33);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v42.fields._current, 0LL);
    v36 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v35);
      v36 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v36->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1BCAA3C(0LL, v35);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v39 = v3->fields.operationSortInfo;
      if ( !v39 )
        sub_1BCAA3C(0LL, v38);
      v40 = ListViewSort__CheckSvtGroupFilter(v39, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v40, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinSortSelectMenu__SetupButtonLayout(
        UserServantCoinSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  System_Array_o *v7; // x0
  ListViewSort_FilterCategoryKind_array *v8; // x20
  const MethodInfo *v9; // x2
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_4B11C42 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewSort_FilterCategoryKind___TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
      v4,
      v5);
    byte_4B11C42 = 1;
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
        v7 = (System_Array_o *)sub_1BCA888(ListViewSort_FilterCategoryKind___TypeInfo, 4LL),
        v10.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
        v8 = (ListViewSort_FilterCategoryKind_array *)v7,
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v7, v10, 0LL),
        UserServantCoinSortSelectMenu__InitCategoryContainer(this, v8, v9),
        (servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.servantFilterScrollView) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(servantFilterRoot, *(_QWORD *)&kind);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)servantFilterRoot, 0LL);
}


void __fastcall UserServantCoinSortSelectMenu__SetupFilterButtons(
        UserServantCoinSortSelectMenu_o *this,
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

  if ( (byte_4B11C40 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, sort, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Predicate_ServantFilterButtonControl__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu_OnClickFilterButton__, v20, v21);
    sub_1BCA7E0(&Method_UserServantCoinSortSelectMenu__SetupFilterButtons_b__42_0__, v22, v23);
    byte_4B11C40 = 1;
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
    Method_UserServantCoinSortSelectMenu__SetupFilterButtons_b__42_0__,
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
      (intptr_t)Method_UserServantCoinSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v37, v33, 0, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall UserServantCoinSortSelectMenu__SetupUseFilterKindList(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UserServantCoinSortSelectMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v11; // w8
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_T__o *v13; // x19

  v3 = this;
  if ( (byte_4B11C3E & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v6, v7);
    this = (UserServantCoinSortSelectMenu_o *)sub_1BCA7E0(
                                                &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                                v8,
                                                v9);
    byte_4B11C3E = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_10;
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
  this = (UserServantCoinSortSelectMenu_o *)v3->fields.useFilterKindList;
  if ( !this
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          (System_Collections_Generic_List_T__o *)this,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
          (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (UserServantCoinSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList) == 0LL)
    || (v13 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList,
        this = (UserServantCoinSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                    (System_Collections_Generic_List_T__o *)this,
                                                    (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v13) )
  {
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3587670 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall UserServantCoinSortSelectMenu___SetupFilterButtons_b__42_0(
        UserServantCoinSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  UserServantCoinSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4B11C4F & 1) == 0 )
  {
    this = (UserServantCoinSortSelectMenu_o *)sub_1BCA7E0(
                                                &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                x,
                                                method);
    byte_4B11C4F = 1;
  }
  if ( !x || (this = (UserServantCoinSortSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_4B11C3A & 1) == 0 )
  {
    sub_1BCA7E0(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11C3A = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinSortSelectMenu_o *)sub_1BCACFC(v7);
  UserServantCoinSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall UserServantCoinSortSelectMenu__get_closeBtnPath(
        UserServantCoinSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11C4D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B11C4D = 1;
  }
  return (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/;
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

  if ( (byte_4B11C3B & 1) == 0 )
  {
    sub_1BCA7E0(&UserServantCoinSortSelectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11C3B = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (UserServantCoinSortSelectMenu_o *)sub_1BCACFC(v7);
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
  this->fields.m_target = (Il2CppObject *)sub_1A06858;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06810;
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
  if ( (byte_4B11C50 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B11C50 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall UserServantCoinSortSelectMenu_CallbackFunc__EndInvoke(
        UserServantCoinSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.categoryKind == this->fields.kind;
}