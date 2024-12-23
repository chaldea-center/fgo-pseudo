void __fastcall CoinRoomSortSelectManager___ctor(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B6A2AE & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v6);
    byte_4B6A2AE = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v7;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.useFilterKindList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v14;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.useFilterButtonList,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinRoomSortSelectManager__Callback(
        CoinRoomSortSelectManager_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CoinRoomSortSelectManager_CallbackFunc_o *callbackFunc; // x20
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CoinRoomSortSelectManager__Close(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinRoomSortSelectManager__Close_45668500(this, 0LL, v2);
}


void __fastcall CoinRoomSortSelectManager__Close_45668500(
        CoinRoomSortSelectManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4B6A29B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_EndClose__, v10);
    byte_4B6A29B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall CoinRoomSortSelectManager__EndClose(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CoinRoomSortSelectManager__EndOpen(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CoinRoomSortSelectManager__Init(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinRoomSortSelectManager__InitCategoryContainer(
        CoinRoomSortSelectManager_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v4; // x20
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
  if ( (byte_4B6A29D & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__,
      categoryKindKist);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    sub_1BE4ACC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__, v11);
    this = (CoinRoomSortSelectManager_o *)sub_1BE4ACC(&CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo, v12);
    byte_4B6A29D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( !categoryKindKist )
    goto LABEL_27;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
    goto LABEL_28;
  this = (CoinRoomSortSelectManager_o *)v4->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_1BE4D28(this, categoryKindKist);
  v14 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v16 )
    {
      if ( !current )
        sub_1BE4D28(v16, v17);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v18);
    byte_4B612E1 = 1;
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
      v24 = sub_1BE4D18(CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v24, 0LL);
      if ( v19 >= categoryKindKist->max_length )
        break;
      if ( !v24 )
        goto LABEL_27;
      *(_DWORD *)(v24 + 16) = categoryKindKist->m_Items[v19 + 1];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_object__o *)v4->fields.servantFilterCategoryContainerList;
      v26 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_object____ctor(
        v26,
        (Il2CppObject *)v24,
        Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__,
        0LL);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v27 = System_Collections_Generic_List_object___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v26,
              (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (CoinRoomSortSelectManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
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
    sub_1BE4D30(this, categoryKindKist);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickCancel(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B6A2A3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickCancel__, method);
    byte_4B6A2A3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_CoinRoomSortSelectManager_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    CoinRoomSortSelectManager__Callback(this, 0, v5);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickClear(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B6A2A4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickClear__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v3);
    byte_4B6A2A4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_CoinRoomSortSelectManager_OnClickClear__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1BE4D28(useFilterKindList, v6);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0LL);
    CoinRoomSortSelectManager__SetButtenSelect(this, v9);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickDecide(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
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
  if ( (byte_4B6A2A2 & 1) == 0 )
  {
    this = (CoinRoomSortSelectManager_o *)sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickDecide__, method);
    byte_4B6A2A2 = 1;
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
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    CoinRoomSortSelectManager__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_CoinRoomSortSelectManager_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (CoinRoomSortSelectManager_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1BE4D28(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    CoinRoomSortSelectManager__Callback(v2, 1, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__OnClickFilterButton(
        CoinRoomSortSelectManager_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B6A2AB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickFilterButton__, *(_QWORD *)&filterKind);
    byte_4B6A2AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CoinRoomSortSelectManager_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(0LL, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    CoinRoomSortSelectManager__SetButtenSelect(this, v9);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickHelp(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *helpButton; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_Action_o *v8; // x20

  if ( (byte_4B6A2AC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickHelpClose__, v3);
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickHelp__, v4);
    byte_4B6A2AC = 1;
  }
  if ( this->fields.state == 2 )
  {
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    {
      sub_1BE4D28(helpButton, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    v6 = Method_CoinRoomSortSelectManager_OnClickHelp__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickHelp__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickHelp__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    v8 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_OnClickHelpClose__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 32, v8, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickHelpClose(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton
    || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
  {
    sub_1BE4D28(helpButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
}


void __fastcall CoinRoomSortSelectManager__OnClickReset(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B6A2A5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickReset__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v3);
    byte_4B6A2A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_CoinRoomSortSelectManager_OnClickReset__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickReset__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickReset__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1BE4D28(useFilterKindList, v6);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0LL);
    CoinRoomSortSelectManager__SetButtenSelect(this, v9);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSmartSort(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UISprite_o *smartSortBtnSprite; // x0
  __int64 v8; // x1
  struct ListViewSort_o *operationSortInfo; // x9
  _BOOL4 isSmartSort; // w8
  __int64 *v11; // x8

  if ( (byte_4B6A2AA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickSmartSort__, method);
    sub_1BE4ACC(&StringLiteral_17750/*"btn_on"*/, v3);
    sub_1BE4ACC(&StringLiteral_17749/*"btn_off"*/, v4);
    byte_4B6A2AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CoinRoomSortSelectManager_OnClickSmartSort__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSmartSort__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickSmartSort__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo
      || (isSmartSort = operationSortInfo->fields.isSmartSort,
          operationSortInfo->fields.isSmartSort = !isSmartSort,
          (smartSortBtnSprite = this->fields.smartSortBtnSprite) == 0LL) )
    {
      sub_1BE4D28(smartSortBtnSprite, v8);
    }
    if ( isSmartSort )
      v11 = &StringLiteral_17749/*"btn_off"*/;
    else
      v11 = &StringLiteral_17750/*"btn_on"*/;
    UISprite__set_spriteName(smartSortBtnSprite, (System_String_o *)*v11, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortAmount(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B6A2A8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickSortAmount__, method);
    byte_4B6A2A8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickSortAmount__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSortAmount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickSortAmount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
    operationSortInfo->fields.sortKind = 14;
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortId(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B6A2A6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickSortId__, method);
    byte_4B6A2A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickSortId__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSortId__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickSortId__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
    operationSortInfo->fields.sortKind = 27;
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortRarity(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B6A2A7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickSortRarity__, method);
    byte_4B6A2A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
    operationSortInfo->fields.sortKind = 2;
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortServantName(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4B6A2A9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickSortServantName__, method);
    byte_4B6A2A9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CoinRoomSortSelectManager_OnClickSortServantName__;
    if ( (*((_BYTE *)Method_CoinRoomSortSelectManager_OnClickSortServantName__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_CoinRoomSortSelectManager_OnClickSortServantName__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1BE4D28(v5, v6);
    operationSortInfo->fields.sortKind = 26;
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void __fastcall CoinRoomSortSelectManager__OnEnable(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t kind; // w8
  void **v6; // x9
  System_String_o **v7; // x8
  System_String_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B6A2AD & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15853/*"Window/FilterList/CancelButton"*/, method);
    sub_1BE4ACC(&StringLiteral_15860/*"Window/SortList/CancelButton"*/, v3);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B6A2AD = 1;
  }
  kind = this->fields.kind;
  if ( kind == 1 )
    v6 = (void **)&StringLiteral_15853/*"Window/FilterList/CancelButton"*/;
  else
    v6 = &StringLiteral_1/*""*/;
  if ( kind )
    v7 = (System_String_o **)v6;
  else
    v7 = (System_String_o **)&StringLiteral_15860/*"Window/SortList/CancelButton"*/;
  v8 = *v7;
  if ( !System_String__IsNullOrEmpty(*v7, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    AndroidBackKeyManager__AddBackBtn_42781316(transform, v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__Open(
        CoinRoomSortSelectManager_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        CoinRoomSortSelectManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v37; // x22
  struct ListViewSort_o **p_operationSortInfo; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
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
  UILabel_o *v58; // x22
  struct UILabel_array *v59; // x8
  UILabel_o *v60; // x22
  struct UILabel_array *v61; // x8
  UILabel_o *v62; // x22
  struct UILabel_array *v63; // x8
  UILabel_o *v64; // x21
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v71; // x8
  struct UIScrollView_o *scrollView; // x8
  System_Action_o *v73; // x20

  if ( (byte_4B6A29A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_EndOpen__, v12);
    sub_1BE4ACC(&ListViewSort_TypeInfo, v13);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v14);
    sub_1BE4ACC(&StringLiteral_12007/*"SERVANT_SORT_RESET"*/, v15);
    sub_1BE4ACC(&StringLiteral_12360/*"SORT_WINDOW_TITLE"*/, v16);
    sub_1BE4ACC(&StringLiteral_17750/*"btn_on"*/, v17);
    sub_1BE4ACC(&StringLiteral_11856/*"SERVANT_SORT_CANCEL"*/, v18);
    sub_1BE4ACC(&StringLiteral_11860/*"SERVANT_SORT_DECIDE"*/, v19);
    sub_1BE4ACC(&StringLiteral_3680/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/, v20);
    sub_1BE4ACC(&StringLiteral_12009/*"SERVANT_SORT_TITLE2"*/, v21);
    sub_1BE4ACC(&StringLiteral_11857/*"SERVANT_SORT_CLEAR"*/, v22);
    sub_1BE4ACC(&StringLiteral_17749/*"btn_off"*/, v23);
    sub_1BE4ACC(&StringLiteral_3681/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/, v24);
    sub_1BE4ACC(&StringLiteral_11861/*"SERVANT_SORT_EXPLANATION"*/, v25);
    sub_1BE4ACC(&StringLiteral_11862/*"SERVANT_SORT_EXPLANATION2"*/, v26);
    byte_4B6A29A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)sort,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.baseSortInfo, (int64_t)sort, v30, v31, v32, v33, v34, v35);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        baseSortInfo->fields.listViewKind = 5;
        v37 = (ListViewSort_o *)sub_1BE4D18(ListViewSort_TypeInfo);
        ListViewSort___ctor_41720984(v37, baseSortInfo, 0LL);
        p_operationSortInfo = &this->fields.operationSortInfo;
        this->fields.operationSortInfo = v37;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.operationSortInfo,
          (int64_t)v37,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12360/*"SORT_WINDOW_TITLE"*/, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
          title2Label = this->fields.title2Label;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12009/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, (System_String_o *)gameObject, 0LL);
            explanationLabel = this->fields.explanationLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11861/*"SERVANT_SORT_EXPLANATION"*/,
                                                       0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
              explanationLabel2 = this->fields.explanationLabel2;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11862/*"SERVANT_SORT_EXPLANATION2"*/,
                                                         0LL);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0LL);
                decideLabel = this->fields.decideLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11860/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11856/*"SERVANT_SORT_CANCEL"*/,
                                                             0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                    sortDecideLabel = this->fields.sortDecideLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11860/*"SERVANT_SORT_DECIDE"*/,
                                                               0LL);
                    if ( sortDecideLabel )
                    {
                      UILabel__set_text(sortDecideLabel, (System_String_o *)gameObject, 0LL);
                      sortCancelLabel = this->fields.sortCancelLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11856/*"SERVANT_SORT_CANCEL"*/,
                                                                 0LL);
                      if ( sortCancelLabel )
                      {
                        UILabel__set_text(sortCancelLabel, (System_String_o *)gameObject, 0LL);
                        clearLabel = this->fields.clearLabel;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11857/*"SERVANT_SORT_CLEAR"*/,
                                                                   0LL);
                        if ( clearLabel )
                        {
                          UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
                          resetLabel = this->fields.resetLabel;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_12007/*"SERVANT_SORT_RESET"*/,
                                                                     0LL);
                          if ( resetLabel )
                          {
                            UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0LL);
                            smartSortDetail_1 = this->fields.smartSortDetail_1;
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_3680/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/,
                                                                       0LL);
                            if ( smartSortDetail_1 )
                            {
                              UILabel__set_text(smartSortDetail_1, (System_String_o *)gameObject, 0LL);
                              smartSortDetail_2 = this->fields.smartSortDetail_2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_3681/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/,
                                                                         0LL);
                              if ( smartSortDetail_2 )
                              {
                                UILabel__set_text(smartSortDetail_2, (System_String_o *)gameObject, 0LL);
                                sortLabel = this->fields.sortLabel;
                                if ( sortLabel )
                                {
                                  if ( !sortLabel->max_length )
                                    goto LABEL_46;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_45;
                                  v58 = sortLabel->m_Items[0];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             27,
                                                                             0LL);
                                  if ( !v58 )
                                    goto LABEL_45;
                                  UILabel__set_text(v58, (System_String_o *)gameObject, 0LL);
                                  v59 = this->fields.sortLabel;
                                  if ( !v59 )
                                    goto LABEL_45;
                                  if ( v59->max_length <= 1 )
                                    goto LABEL_46;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_45;
                                  v60 = v59->m_Items[1];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             2,
                                                                             0LL);
                                  if ( !v60 )
                                    goto LABEL_45;
                                  UILabel__set_text(v60, (System_String_o *)gameObject, 0LL);
                                  v61 = this->fields.sortLabel;
                                  if ( !v61 )
                                    goto LABEL_45;
                                  if ( v61->max_length <= 2 )
                                    goto LABEL_46;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_45;
                                  v62 = v61->m_Items[2];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             14,
                                                                             0LL);
                                  if ( !v62 )
                                    goto LABEL_45;
                                  UILabel__set_text(v62, (System_String_o *)gameObject, 0LL);
                                  v63 = this->fields.sortLabel;
                                  if ( !v63 )
                                    goto LABEL_45;
                                  if ( v63->max_length <= 3 )
LABEL_46:
                                    sub_1BE4D30(gameObject, v28);
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( *p_operationSortInfo )
                                  {
                                    v64 = v63->m_Items[3];
                                    gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                               (ListViewSort_o *)gameObject,
                                                                               26,
                                                                               0LL);
                                    if ( v64 )
                                    {
                                      UILabel__set_text(v64, (System_String_o *)gameObject, 0LL);
                                      CoinRoomSortSelectManager__SetupUseFilterKindList(this, v65);
                                      CoinRoomSortSelectManager__SetupFilterButtons(
                                        this,
                                        this->fields.operationSortInfo,
                                        v66);
                                      CoinRoomSortSelectManager__SetupButtonLayout(this, this->fields.kind, v67);
                                      CoinRoomSortSelectManager__SetButtenEnable(this, 1, v68);
                                      CoinRoomSortSelectManager__SetButtenSelect(this, v69);
                                      operationSortInfo = this->fields.operationSortInfo;
                                      if ( operationSortInfo )
                                      {
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.smartSortBtnSprite;
                                        if ( gameObject )
                                        {
                                          v71 = (System_String_o **)(operationSortInfo->fields.isSmartSort
                                                                   ? &StringLiteral_17750/*"btn_on"*/
                                                                   : &StringLiteral_17749/*"btn_off"*/);
                                          UISprite__set_spriteName((UISprite_o *)gameObject, *v71, 0LL);
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
                                                  0LL);
                                                this->fields.state = 1;
                                                v73 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v73,
                                                  (Il2CppObject *)this,
                                                  Method_CoinRoomSortSelectManager_EndOpen__,
                                                  0LL);
                                                BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
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
    sub_1BE4D28(gameObject, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__SetButtenEnable(
        CoinRoomSortSelectManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *decideButton; // x0
  struct UICommonButton_array *sortButton; // x8
  struct UICommonButton_array *v10; // x8
  struct UICommonButton_array *v11; // x8
  struct UICommonButton_array *v12; // x8
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B6A29F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4B6A29F = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
  v10 = this->fields.sortButton;
  if ( !v10 )
    goto LABEL_26;
  if ( v10->max_length <= 1 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v10->m_Items[1];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  v11 = this->fields.sortButton;
  if ( !v11 )
    goto LABEL_26;
  if ( v11->max_length <= 2 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v11->m_Items[2];
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL), (v12 = this->fields.sortButton) == 0LL) )
  {
LABEL_26:
    sub_1BE4D28(decideButton, isEnable);
  }
  if ( v12->max_length <= 3 )
LABEL_27:
    sub_1BE4D30(decideButton, isEnable);
  decideButton = (UnityEngine_Behaviour_o *)v12->m_Items[3];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1BE4D28(0LL, v13);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v14.fields._current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall CoinRoomSortSelectManager__SetButtenSelect(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UICommonButton_array *sortButton; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v13; // x8
  struct UICommonButton_array *v14; // x8
  struct ListViewSort_o *v15; // x8
  System_String_o **v16; // x8
  struct UICommonButton_array *v17; // x8
  struct ListViewSort_o *v18; // x8
  __int64 *v19; // x8
  struct UICommonButton_array *v20; // x8
  struct ListViewSort_o *v21; // x8
  System_String_o **v22; // x8
  _BOOL8 v23; // x0
  __int64 v24; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v26; // x1
  FilterKindList_c *v27; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v29; // x1
  ListViewSort_o *v30; // x0
  bool v31; // w0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4B6A2A1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v5);
    sub_1BE4ACC(&FilterKindList_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v8);
    sub_1BE4ACC(&StringLiteral_17691/*"btn_bg_04"*/, v9);
    this = (CoinRoomSortSelectManager_o *)sub_1BE4ACC(&StringLiteral_17690/*"btn_bg_03"*/, v10);
    byte_4B6A2A1 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  sortButton = v2->fields.sortButton;
  if ( !sortButton )
    goto LABEL_48;
  if ( !sortButton->max_length )
    goto LABEL_50;
  this = (CoinRoomSortSelectManager_o *)sortButton->m_Items[0];
  if ( !this )
    goto LABEL_48;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = v2->fields.operationSortInfo;
  if ( !operationSortInfo || !this )
    goto LABEL_48;
  v13 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v13, 0LL);
  v14 = v2->fields.sortButton;
  if ( !v14 )
    goto LABEL_48;
  if ( v14->max_length <= 1 )
    goto LABEL_50;
  this = (CoinRoomSortSelectManager_o *)v14->m_Items[1];
  if ( !this )
    goto LABEL_48;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v15 = v2->fields.operationSortInfo;
  if ( !v15 || !this )
    goto LABEL_48;
  v16 = (System_String_o **)(v15->fields.sortKind == 2 ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v16, 0LL);
  v17 = v2->fields.sortButton;
  if ( !v17 )
    goto LABEL_48;
  if ( v17->max_length <= 2 )
    goto LABEL_50;
  if ( (this = (CoinRoomSortSelectManager_o *)v17->m_Items[2]) == 0LL
    || (this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v18 = v2->fields.operationSortInfo) == 0LL)
    || !this
    || (v18->fields.sortKind != 14 ? (v19 = &StringLiteral_17691/*"btn_bg_04"*/) : (v19 = &StringLiteral_17690/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v19, 0LL),
        (v20 = v2->fields.sortButton) == 0LL) )
  {
LABEL_48:
    sub_1BE4D28(this, method);
  }
  if ( v20->max_length <= 3 )
LABEL_50:
    sub_1BE4D30(this, method);
  this = (CoinRoomSortSelectManager_o *)v20->m_Items[3];
  if ( !this )
    goto LABEL_48;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v21 = v2->fields.operationSortInfo;
  if ( !v21 || !this )
    goto LABEL_48;
  v22 = (System_String_o **)(v21->fields.sortKind == 26 ? &StringLiteral_17690/*"btn_bg_03"*/ : &StringLiteral_17691/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v22, 0LL);
  this = (CoinRoomSortSelectManager_o *)v2->fields.useFilterButtonList;
  if ( !this )
    goto LABEL_48;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v23 )
      break;
    current = (ServantFilterButtonControl_o *)v33.fields._current;
    if ( !v33.fields._current )
      sub_1BE4D28(v23, v24);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v33.fields._current, 0LL);
    v27 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v27 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v27->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1BE4D28(0LL, v26);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_35D1DA4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v30 = v2->fields.operationSortInfo;
      if ( !v30 )
        sub_1BE4D28(0LL, v29);
      v31 = ListViewSort__CheckSvtGroupFilter(v30, current->fields.filterKind, 0LL);
      ServantFilterButtonControl__SetButtonMask(current, !v31, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__SetupButtonLayout(
        CoinRoomSortSelectManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *servantSortRoot; // x0
  bool v7; // w1
  System_Array_o *v8; // x0
  ListViewSort_FilterCategoryKind_array *v9; // x20
  const MethodInfo *v10; // x2
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_4B6A2A0 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewSort_FilterCategoryKind___TypeInfo, *(_QWORD *)&kind);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
      v5);
    byte_4B6A2A0 = 1;
  }
  if ( kind == 1 )
  {
    servantSortRoot = this->fields.servantSortRoot;
    if ( servantSortRoot )
    {
      UnityEngine_GameObject__SetActive(servantSortRoot, 0, 0LL);
      servantSortRoot = this->fields.servantFilterRoot;
      if ( servantSortRoot )
      {
        v7 = 1;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_1BE4D28(servantSortRoot, *(_QWORD *)&kind);
  }
  if ( kind )
    goto LABEL_12;
  servantSortRoot = this->fields.servantSortRoot;
  if ( !servantSortRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(servantSortRoot, 1, 0LL);
  servantSortRoot = this->fields.servantFilterRoot;
  if ( !servantSortRoot )
    goto LABEL_14;
  v7 = 0;
LABEL_11:
  UnityEngine_GameObject__SetActive(servantSortRoot, v7, 0LL);
LABEL_12:
  v8 = (System_Array_o *)sub_1BE4B74(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v11.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805;
  v9 = (ListViewSort_FilterCategoryKind_array *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v8, v11, 0LL);
  CoinRoomSortSelectManager__InitCategoryContainer(this, v9, v10);
  servantSortRoot = (UnityEngine_GameObject_o *)this->fields.scrollView;
  if ( !servantSortRoot )
    goto LABEL_14;
  UIScrollView__ResetPosition((UIScrollView_o *)servantSortRoot, 0LL);
}


void __fastcall CoinRoomSortSelectManager__SetupFilterButtons(
        CoinRoomSortSelectManager_o *this,
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v29; // w22
  ServantFilterButtonControl_OnClickFilterButton_o *v30; // x23
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B6A29E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager_OnClickFilterButton__, sort);
    sub_1BE4ACC(&Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v11);
    sub_1BE4ACC(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v12);
    sub_1BE4ACC(&System_Predicate_ServantFilterButtonControl__TypeInfo, v13);
    byte_4B6A29E = 1;
  }
  memset(&v31, 0, sizeof(v31));
  filterButtonList = this->fields.filterButtonList;
  v15 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)this,
    Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__,
    0LL);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)filterButtonList,
                (System_Predicate_T__o *)v15,
                (const MethodInfo_35EC934 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.useFilterButtonList,
          (int64_t)All,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        (v16 = this->fields.filterButtonList) == 0LL) )
  {
    sub_1BE4D28(v16, v17);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)v16,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v25 )
      break;
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1BE4D28(v25, v26);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1BE4D28(0LL, v26);
    v29 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            (int32_t)v31.fields._current[2].klass,
            (const MethodInfo_35D1DA4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v30 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1BE4D18(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v30,
      (Il2CppObject *)this,
      (intptr_t)Method_CoinRoomSortSelectManager_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v30, v29, 0, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall CoinRoomSortSelectManager__SetupUseFilterKindList(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int v7; // w8
  FilterKindList_c *v8; // x0
  System_Collections_Generic_List_T__o *v9; // x20

  v2 = this;
  if ( (byte_4B6A29C & 1) == 0 )
  {
    sub_1BE4ACC(&FilterKindList_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v4);
    this = (CoinRoomSortSelectManager_o *)sub_1BE4ACC(
                                            &Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__,
                                            v5);
    byte_4B6A29C = 1;
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
    (const MethodInfo_35D1C38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  this = (CoinRoomSortSelectManager_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !this
    || (v9 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList,
        this = (CoinRoomSortSelectManager_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                (System_Collections_Generic_List_T__o *)this,
                                                (const MethodInfo_35D34E4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v9)
    || (System_Collections_Generic_List_Int32Enum___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_35D1C38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (this = (CoinRoomSortSelectManager_o *)v2->fields.useFilterKindList) == 0LL) )
  {
LABEL_10:
    sub_1BE4D28(this, method);
  }
  System_Collections_Generic_List_Int32Enum___AddRange(
    (System_Collections_Generic_List_T__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_35D1C38 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall CoinRoomSortSelectManager___SetupFilterButtons_b__53_0(
        CoinRoomSortSelectManager_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v4; // x20

  v4 = this;
  if ( (byte_4B6A2AF & 1) == 0 )
  {
    this = (CoinRoomSortSelectManager_o *)sub_1BE4ACC(
                                            &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                            x);
    byte_4B6A2AF = 1;
  }
  if ( !x || (this = (CoinRoomSortSelectManager_o *)v4->fields.useFilterKindList) == 0LL )
    sub_1BE4D28(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_35D1DA4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall CoinRoomSortSelectManager__add_callbackFunc(
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

  if ( (byte_4B6A298 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, value);
    byte_4B6A298 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CoinRoomSortSelectManager_CallbackFunc_c *)v7->klass != CoinRoomSortSelectManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  CoinRoomSortSelectManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall CoinRoomSortSelectManager__remove_callbackFunc(
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

  if ( (byte_4B6A299 & 1) == 0 )
  {
    sub_1BE4ACC(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, value);
    byte_4B6A299 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CoinRoomSortSelectManager_CallbackFunc_c *)v7->klass != CoinRoomSortSelectManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C1FFBC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BE4FE8(v7);
  CoinRoomSortSelectManager__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager_CallbackFunc___ctor(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A2AEF8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2AEB0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CoinRoomSortSelectManager_CallbackFunc__BeginInvoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B6A2B0 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    byte_4B6A2B0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall CoinRoomSortSelectManager_CallbackFunc__EndInvoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall CoinRoomSortSelectManager_CallbackFunc__Invoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CoinRoomSortSelectManager___c__DisplayClass52_0___ctor(
        CoinRoomSortSelectManager___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CoinRoomSortSelectManager___c__DisplayClass52_0___InitCategoryContainer_b__0(
        CoinRoomSortSelectManager___c__DisplayClass52_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return x->fields.categoryKind == this->fields.kind;
}