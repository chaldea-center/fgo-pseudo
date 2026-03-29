void MaterialEventLogServantSortSelectMenu___ctor(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_4D2BB51 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    byte_4D2BB51 = 1;
  }
  this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.x = 0x41F4000000000000LL;
  v3 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v3,
    (const MethodInfo_385E950 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.useFilterKindList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_1C93A78(
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


void MaterialEventLogServantSortSelectMenu__Callback(
        MaterialEventLogServantSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct MaterialEventLogServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x20
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      callbackFunc->fields.method);
  }
}


void MaterialEventLogServantSortSelectMenu__Close(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialEventLogServantSortSelectMenu__Close_33947204(this, 0, v2);
}


void MaterialEventLogServantSortSelectMenu__Close_33947204(
        MaterialEventLogServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2BB44 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_EndClose__);
    byte_4D2BB44 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MaterialEventLogServantSortSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void MaterialEventLogServantSortSelectMenu__EndClose(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void MaterialEventLogServantSortSelectMenu__EndOpen(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void MaterialEventLogServantSortSelectMenu__Init(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void MaterialEventLogServantSortSelectMenu__InitCategoryContainer(
        MaterialEventLogServantSortSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *v4; // x20
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
  UnityEngine_Vector3_o BottomPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4D2BB42 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__);
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_1C93AD4(&MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_TypeInfo);
    byte_4D2BB42 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !categoryKindKist )
    goto LABEL_27;
  max_length = categoryKindKist->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_28;
  this = (MaterialEventLogServantSortSelectMenu_o *)v4->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_1C93D2C(this, categoryKindKist);
  v6 = *(int32_t *)((char *)categoryKindKist->m_Items + ((__int64)((max_length << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_1C93D2C(v8, v9);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
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
      v15 = sub_1C93D20(MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( v10 >= LODWORD(categoryKindKist->max_length) )
        break;
      if ( !v15 )
        goto LABEL_27;
      *(_DWORD *)(v15 + 16) = categoryKindKist->m_Items[v10];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_object__o *)v4->fields.servantFilterCategoryContainerList;
      v17 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_object____ctor(
        v17,
        (Il2CppObject *)v15,
        Method_MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
        0);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v18 = System_Collections_Generic_List_object___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v17,
              (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v18,
                                                          0,
                                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_27;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v18, 1, 0);
        v22.fields.x = x;
        v22.fields.y = y;
        v22.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v18, v22, 0);
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
    sub_1C93D34(this);
  }
}


void MaterialEventLogServantSortSelectMenu__OnClickCancel(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2BB49 & 1) == 0 )
  {
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_OnClickCancel__);
    byte_4D2BB49 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_MaterialEventLogServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    MaterialEventLogServantSortSelectMenu__Callback(this, 0, v5);
  }
}


void MaterialEventLogServantSortSelectMenu__OnClickClear(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4D2BB4A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_OnClickClear__);
    byte_4D2BB4A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_MaterialEventLogServantSortSelectMenu_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1C93D2C(useFilterKindList, v5);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0);
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v8);
  }
}


void MaterialEventLogServantSortSelectMenu__OnClickDecide(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *v2; // x19
  struct UIScrollView_o *servantFilterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4D2BB48 & 1) == 0 )
  {
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_OnClickDecide__);
    byte_4D2BB48 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantFilterScrollView = v2->fields.servantFilterScrollView;
    if ( !servantFilterScrollView )
      goto LABEL_12;
    this = (MaterialEventLogServantSortSelectMenu_o *)servantFilterScrollView->fields.verticalScrollBar;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialEventLogServantSortSelectMenu__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_MaterialEventLogServantSortSelectMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickDecide__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C93AEC(Method_MaterialEventLogServantSortSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (MaterialEventLogServantSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_1C93D2C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0);
    MaterialEventLogServantSortSelectMenu__Callback(v2, 1, v9);
  }
}


void MaterialEventLogServantSortSelectMenu__OnClickFilterButton(
        MaterialEventLogServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4D2BB4F & 1) == 0 )
  {
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__);
    byte_4D2BB4F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(0, v7);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0);
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v9);
  }
}


void MaterialEventLogServantSortSelectMenu__OnClickReset(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4D2BB4B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_OnClickReset__);
    byte_4D2BB4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickReset__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_MaterialEventLogServantSortSelectMenu_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_1C93D2C(useFilterKindList, v5);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0);
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v8);
  }
}


void MaterialEventLogServantSortSelectMenu__OnClickSortId(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4D2BB4C & 1) == 0 )
  {
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_OnClickSortId__);
    byte_4D2BB4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickSortId__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickSortId__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_MaterialEventLogServantSortSelectMenu_OnClickSortId__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
    operationSortInfo->fields.sortKind = 27;
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void MaterialEventLogServantSortSelectMenu__OnClickSortLimitCount(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4D2BB4E & 1) == 0 )
  {
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_OnClickSortLimitCount__);
    byte_4D2BB4E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_MaterialEventLogServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
    operationSortInfo->fields.sortKind = 9;
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void MaterialEventLogServantSortSelectMenu__OnClickSortRarity(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4D2BB4D & 1) == 0 )
  {
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_OnClickSortRarity__);
    byte_4D2BB4D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_MaterialEventLogServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_1C93D2C(v5, v6);
    operationSortInfo->fields.sortKind = 2;
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void MaterialEventLogServantSortSelectMenu__Open(
        MaterialEventLogServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *callback,
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
  int32_t v21; // w8
  ListViewSort_o *v22; // x21
  int v23; // w8
  ListViewSort_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UILabel_o *title2Label; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanationLabel2; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *resetLabel; // x21
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  struct UIScrollView_o *servantFilterScrollView; // x9
  System_Action_o *v44; // x20

  if ( (byte_4D2BB40 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&ListViewSort_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_EndOpen__);
    sub_1C93AD4(&StringLiteral_11972/*"SERVANT_SORT_RESET"*/);
    sub_1C93AD4(&StringLiteral_11806/*"SERVANT_SORT_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_11810/*"SERVANT_SORT_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_11974/*"SERVANT_SORT_TITLE2"*/);
    sub_1C93AD4(&StringLiteral_11807/*"SERVANT_SORT_CLEAR"*/);
    sub_1C93AD4(&StringLiteral_11811/*"SERVANT_SORT_EXPLANATION"*/);
    sub_1C93AD4(&StringLiteral_11812/*"SERVANT_SORT_EXPLANATION2"*/);
    byte_4D2BB40 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C93A78(
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
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    p_baseSortInfo = &this->fields.baseSortInfo;
    this->fields.baseSortInfo = sort;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v15, v16, v17, v18, v19, v20);
    v21 = this->fields.kind;
    if ( v21 == 1 )
    {
      v22 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_26;
      v23 = 1;
    }
    else
    {
      if ( v21 != 3 )
      {
        v22 = *p_baseSortInfo;
LABEL_13:
        v24 = (ListViewSort_o *)sub_1C93D20(ListViewSort_TypeInfo);
        ListViewSort___ctor_44521760(v24, v22, 0);
        this->fields.operationSortInfo = v24;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo,
          (int32_t)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        title2Label = this->fields.title2Label;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11974/*"SERVANT_SORT_TITLE2"*/, 0);
        if ( title2Label )
        {
          UILabel__set_text(title2Label, (System_String_o *)gameObject, 0);
          explanationLabel = this->fields.explanationLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11811/*"SERVANT_SORT_EXPLANATION"*/, 0);
          if ( explanationLabel )
          {
            UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
            explanationLabel2 = this->fields.explanationLabel2;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11812/*"SERVANT_SORT_EXPLANATION2"*/, 0);
            if ( explanationLabel2 )
            {
              UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0);
              decideLabel = this->fields.decideLabel;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11810/*"SERVANT_SORT_DECIDE"*/,
                                                         0);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
                cancelLabel = this->fields.cancelLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11806/*"SERVANT_SORT_CANCEL"*/,
                                                           0);
                if ( cancelLabel )
                {
                  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
                  clearLabel = this->fields.clearLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11807/*"SERVANT_SORT_CLEAR"*/,
                                                             0);
                  if ( clearLabel )
                  {
                    UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0);
                    resetLabel = this->fields.resetLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11972/*"SERVANT_SORT_RESET"*/,
                                                               0);
                    if ( resetLabel )
                    {
                      UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0);
                      MaterialEventLogServantSortSelectMenu__SetupUseFilterKindList(this, v38);
                      MaterialEventLogServantSortSelectMenu__SetupFilterButtons(
                        this,
                        this->fields.operationSortInfo,
                        v39);
                      MaterialEventLogServantSortSelectMenu__SetupButtonLayout(this, this->fields.kind, v40);
                      MaterialEventLogServantSortSelectMenu__SetButtenEnable(this, 1, v41);
                      MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v42);
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
                            v44 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                            System_Action___ctor(
                              v44,
                              (Il2CppObject *)this,
                              Method_MaterialEventLogServantSortSelectMenu_EndOpen__,
                              0);
                            BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0, 0);
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
LABEL_26:
        sub_1C93D2C(gameObject, v13);
      }
      v22 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_26;
      v23 = 3;
    }
    v22->fields.listViewKind = v23;
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogServantSortSelectMenu__SetButtenEnable(
        MaterialEventLogServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2BB45 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_4D2BB45 = 1;
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
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.resetButton) == 0)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList) == 0) )
  {
LABEL_14:
    sub_1C93D2C(decideButton, isEnable);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v7.fields._current )
      sub_1C93D2C(0, v6);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v7.fields._current, isEnable, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void MaterialEventLogServantSortSelectMenu__SetButtenSelect(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *sort1Button; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v5; // x8
  struct ListViewSort_o *v6; // x8
  System_String_o **v7; // x8
  struct ListViewSort_o *v8; // x8
  __int64 *v9; // x8
  _BOOL8 v10; // x0
  __int64 v11; // x1
  ServantFilterButtonControl_o *current; // x20
  __int64 v13; // x1
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v16; // x1
  ListViewSort_o *v17; // x0
  bool v18; // w0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2BB47 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_1C93AD4(&StringLiteral_17570/*"btn_bg_04"*/);
    sub_1C93AD4(&StringLiteral_17569/*"btn_bg_03"*/);
    byte_4D2BB47 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  sort1Button = (UnityEngine_Component_o *)this->fields.sort1Button;
  if ( !sort1Button )
    goto LABEL_35;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             sort1Button,
                                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = this->fields.operationSortInfo;
  if ( !operationSortInfo || !sort1Button )
    goto LABEL_35;
  v5 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)sort1Button, *v5, 0);
  sort1Button = (UnityEngine_Component_o *)this->fields.sort2Button;
  if ( !sort1Button )
    goto LABEL_35;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             sort1Button,
                                             (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v6 = this->fields.operationSortInfo;
  if ( !v6 || !sort1Button )
    goto LABEL_35;
  v7 = (System_String_o **)(v6->fields.sortKind == 2 ? &StringLiteral_17569/*"btn_bg_03"*/ : &StringLiteral_17570/*"btn_bg_04"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)sort1Button, *v7, 0),
        (sort1Button = (UnityEngine_Component_o *)this->fields.sort3Button) == 0)
    || (sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   sort1Button,
                                                   (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v8 = this->fields.operationSortInfo) == 0)
    || !sort1Button
    || (v8->fields.sortKind != 9 ? (v9 = &StringLiteral_17570/*"btn_bg_04"*/) : (v9 = &StringLiteral_17569/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)sort1Button, (System_String_o *)*v9, 0),
        (sort1Button = (UnityEngine_Component_o *)this->fields.useFilterButtonList) == 0) )
  {
LABEL_35:
    sub_1C93D2C(sort1Button, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)sort1Button,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v10 )
      break;
    current = (ServantFilterButtonControl_o *)v20.fields._current;
    if ( !v20.fields._current )
      sub_1C93D2C(v10, v11);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v20.fields._current, 0);
    v14 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v14 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_1C93D2C(0, v13);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_385F51C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v17 = this->fields.operationSortInfo;
      if ( !v17 )
        sub_1C93D2C(0, v16);
      v18 = ListViewSort__CheckSvtGroupFilter(v17, current->fields.filterKind, 0);
      ServantFilterButtonControl__SetButtonMask(current, !v18, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void MaterialEventLogServantSortSelectMenu__SetupButtonLayout(
        MaterialEventLogServantSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  System_Array_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4D2BB46 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805);
    byte_4D2BB46 = 1;
  }
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0);
  servantFilterRoot = this->fields.commandCodeAndEquipFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0);
  if ( kind )
    return;
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot
    || (UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0),
        v6 = (System_Array_o *)sub_1C93B7C(ListViewSort_FilterCategoryKind___TypeInfo, 4),
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
          v6,
          (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
          0),
        MaterialEventLogServantSortSelectMenu__InitCategoryContainer(
          this,
          (ListViewSort_FilterCategoryKind_array *)v6,
          v7),
        (servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.servantFilterScrollView) == 0) )
  {
LABEL_9:
    sub_1C93D2C(servantFilterRoot, *(_QWORD *)&kind);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)servantFilterRoot, 0);
}


void MaterialEventLogServantSortSelectMenu__SetupFilterButtons(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_4D2BB43 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__);
    sub_1C93AD4(&Method_MaterialEventLogServantSortSelectMenu__SetupFilterButtons_b__43_0__);
    sub_1C93AD4(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_1C93AD4(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    byte_4D2BB43 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  filterButtonList = this->fields.filterButtonList;
  v6 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v6,
    (Il2CppObject *)this,
    Method_MaterialEventLogServantSortSelectMenu__SetupFilterButtons_b__43_0__,
    0);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)filterButtonList,
                (System_Predicate_T__o *)v6,
                (const MethodInfo_387A0AC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_1C93A78(
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
    sub_1C93D2C(v7, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)v7,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v16 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1C93D2C(v16, v17);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_1C93D2C(0, v17);
    v20 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            *(_DWORD *)((char *)&v22.fields._current->klass + (unsigned __int64)&qword_20),
            (const MethodInfo_385F51C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v21 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_1C93D20(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__,
      0);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v21, v20, 0, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void MaterialEventLogServantSortSelectMenu__SetupUseFilterKindList(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *v2; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int32_t version; // w8
  int32_t kind; // w9
  FilterKindList_c *v6; // x0
  System_Collections_Generic_List_T__o *v7; // x20
  struct System_Object_array *items; // x9
  _QWORD *v9; // x10

  v2 = this;
  if ( (byte_4D2BB41 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D2BB41 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_18;
  version = useFilterKindList->fields._version;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = version + 1;
  kind = v2->fields.kind;
  if ( kind == 3 || kind == 1 )
  {
    items = useFilterKindList->fields._items;
    v9 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    useFilterKindList->fields._version = version + 2;
    if ( !items )
      goto LABEL_18;
    if ( LODWORD(items->max_length) )
    {
      useFilterKindList->fields._size = 1;
      LODWORD(items->m_Items[0]) = 49;
    }
    else
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        useFilterKindList,
        49,
        *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    }
  }
  else if ( !kind )
  {
    v6 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v6 = FilterKindList_TypeInfo;
    }
    System_Collections_Generic_List_Int32Enum___AddRange(
      useFilterKindList,
      (System_Collections_Generic_IEnumerable_T__o *)v6->static_fields->ClassGroupFilterKindList,
      (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    this = (MaterialEventLogServantSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
    if ( this )
    {
      v7 = (System_Collections_Generic_List_T__o *)v2->fields.useFilterKindList;
      this = (MaterialEventLogServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                          (System_Collections_Generic_List_T__o *)this,
                                                          (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( v7 )
      {
        System_Collections_Generic_List_Int32Enum___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
        this = (MaterialEventLogServantSortSelectMenu_o *)v2->fields.useFilterKindList;
        if ( this )
        {
          System_Collections_Generic_List_Int32Enum___AddRange(
            (System_Collections_Generic_List_T__o *)this,
            (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
            (const MethodInfo_385F3B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
          return;
        }
      }
    }
LABEL_18:
    sub_1C93D2C(this, method);
  }
}


bool MaterialEventLogServantSortSelectMenu___SetupFilterButtons_b__43_0(
        MaterialEventLogServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_4D2BB52 & 1) == 0 )
  {
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_4D2BB52 = 1;
  }
  if ( !x || (this = (MaterialEventLogServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0 )
    sub_1C93D2C(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_385F51C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void MaterialEventLogServantSortSelectMenu__add_callbackFunc(
        MaterialEventLogServantSortSelectMenu_o *this,
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialEventLogServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialEventLogServantSortSelectMenu_o *v10; // x0
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D2BB3E & 1) == 0 )
  {
    sub_1C93AD4(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4D2BB3E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MaterialEventLogServantSortSelectMenu_CallbackFunc_c *)v7->klass != MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialEventLogServantSortSelectMenu_o *)sub_1C940C8(v7);
  MaterialEventLogServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *MaterialEventLogServantSortSelectMenu__get_closeBtnPath(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2BB50 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15741/*"Window/CancelButton"*/);
    byte_4D2BB50 = 1;
  }
  return (System_String_o *)StringLiteral_15741/*"Window/CancelButton"*/;
}


void MaterialEventLogServantSortSelectMenu__remove_callbackFunc(
        MaterialEventLogServantSortSelectMenu_o *this,
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialEventLogServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialEventLogServantSortSelectMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4D2BB3F & 1) == 0 )
  {
    sub_1C93AD4(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_4D2BB3F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MaterialEventLogServantSortSelectMenu_CallbackFunc_c *)v7->klass != MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialEventLogServantSortSelectMenu_o *)sub_1C940C8(v7);
  MaterialEventLogServantSortSelectMenu__Init(v10, v11);
}


void MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC178C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC1744;
}


System_IAsyncResult_o *MaterialEventLogServantSortSelectMenu_CallbackFunc__BeginInvoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D2BB53 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2BB53 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void MaterialEventLogServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void MaterialEventLogServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0___ctor(
        MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0___InitCategoryContainer_b__0(
        MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.categoryKind == this->fields.kind;
}