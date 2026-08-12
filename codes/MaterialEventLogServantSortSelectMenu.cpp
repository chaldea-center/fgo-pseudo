void MaterialEventLogServantSortSelectMenu___ctor(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ListViewSort_FilterKind__c *v3; // x0
  System_Collections_Generic_List_T__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 v19; // x2

  if ( (byte_596B79D & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    byte_596B79D = 1;
  }
  v3 = System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo;
  this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.x = 0x41F4000000000000LL;
  v4 = (System_Collections_Generic_List_T__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v4,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.useFilterKindList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.useFilterButtonList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v18, v19);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MaterialEventLogServantSortSelectMenu__Callback(
        MaterialEventLogServantSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct MaterialEventLogServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x20

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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

  MaterialEventLogServantSortSelectMenu__Close_40048336(this, 0, v2);
}


void MaterialEventLogServantSortSelectMenu__Close_40048336(
        MaterialEventLogServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596B790 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_EndClose__);
    byte_596B790 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialEventLogServantSortSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void MaterialEventLogServantSortSelectMenu__EndClose(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  int v5; // w29
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  unsigned __int64 v11; // x25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v16; // x21
  System_Collections_Generic_List_object__o *servantFilterCategoryContainerList; // x22
  System_Predicate_object__o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o BottomPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596B78E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__);
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_2213A60(&MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_TypeInfo);
    byte_596B78E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !categoryKindKist )
    goto LABEL_27;
  if ( !LODWORD(categoryKindKist->max_length) )
    goto LABEL_28;
  this = (MaterialEventLogServantSortSelectMenu_o *)v4->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_2213CDC(this, categoryKindKist);
  v5 = *(int32_t *)((char *)categoryKindKist->m_Items
                  + ((__int64)(((unsigned __int64)LODWORD(categoryKindKist->max_length) << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( SLODWORD(categoryKindKist->max_length) >= 1 )
  {
    v11 = 0;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    x = static_fields->zeroVector.fields.x;
    while ( 1 )
    {
      v16 = sub_2213CCC(MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0);
      if ( v11 >= LODWORD(categoryKindKist->max_length) )
        break;
      if ( !v16 )
        goto LABEL_27;
      *(_DWORD *)(v16 + 16) = categoryKindKist->m_Items[v11];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_object__o *)v4->fields.servantFilterCategoryContainerList;
      v18 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_object____ctor(
        v18,
        (Il2CppObject *)v16,
        Method_MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
        0);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v21 = System_Collections_Generic_List_object___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v18,
              (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
      this = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v21,
                                                          0,
                                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_27;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v21, 1, 0);
        v25.fields.x = x;
        v25.fields.y = y;
        v25.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v21, v25, 0);
        ServantFilterCategoryContainer__Layout(
          (ServantFilterCategoryContainer_o *)v21,
          HIDWORD(v21[3].monitor) == v5,
          0);
        BottomPosition = ServantFilterCategoryContainer__get_BottomPosition((ServantFilterCategoryContainer_o *)v21, 0);
        x = BottomPosition.fields.x;
        y = BottomPosition.fields.y;
        z = BottomPosition.fields.z;
      }
      if ( (__int64)++v11 >= SLODWORD(categoryKindKist->max_length) )
        return;
    }
LABEL_28:
    sub_2213CE4(this);
  }
}


void MaterialEventLogServantSortSelectMenu__OnClickCancel(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596B795 & 1) == 0 )
  {
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_OnClickCancel__);
    byte_596B795 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MaterialEventLogServantSortSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596B796 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_OnClickClear__);
    byte_596B796 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MaterialEventLogServantSortSelectMenu_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_2213CDC(useFilterKindList, v5);
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
  if ( (byte_596B794 & 1) == 0 )
  {
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_OnClickDecide__);
    byte_596B794 = 1;
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
      v7 = (_QWORD *)sub_2213A78(Method_MaterialEventLogServantSortSelectMenu_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    this = (MaterialEventLogServantSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_2213CDC(this, method);
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

  if ( (byte_596B79B & 1) == 0 )
  {
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__);
    byte_596B79B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(0, v7);
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

  if ( (byte_596B797 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_OnClickReset__);
    byte_596B797 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickReset__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickReset__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MaterialEventLogServantSortSelectMenu_OnClickReset__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                        useFilterKindList,
                                                                        (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_2213CDC(useFilterKindList, v5);
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

  if ( (byte_596B798 & 1) == 0 )
  {
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_OnClickSortId__);
    byte_596B798 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickSortId__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickSortId__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MaterialEventLogServantSortSelectMenu_OnClickSortId__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596B79A & 1) == 0 )
  {
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_OnClickSortLimitCount__);
    byte_596B79A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickSortLimitCount__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickSortLimitCount__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MaterialEventLogServantSortSelectMenu_OnClickSortLimitCount__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596B799 & 1) == 0 )
  {
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_OnClickSortRarity__);
    byte_596B799 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialEventLogServantSortSelectMenu_OnClickSortRarity__;
    if ( (*((_BYTE *)Method_MaterialEventLogServantSortSelectMenu_OnClickSortRarity__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_MaterialEventLogServantSortSelectMenu_OnClickSortRarity__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_2213CDC(v5, v6);
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
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t v20; // w8
  struct ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  __int64 v30; // x2
  UILabel_o *title2Label; // x20
  UILabel_o *explanationLabel; // x20
  UILabel_o *explanationLabel2; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *resetLabel; // x20
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  struct UIScrollView_o *servantFilterScrollView; // x9
  struct ListViewSort_o *v44; // x8
  System_Action_o *v45; // x20

  if ( (byte_596B78C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_EndOpen__);
    sub_2213A60(&StringLiteral_12396/*"SERVANT_SORT_RESET"*/);
    sub_2213A60(&StringLiteral_12227/*"SERVANT_SORT_CANCEL"*/);
    sub_2213A60(&StringLiteral_12231/*"SERVANT_SORT_DECIDE"*/);
    sub_2213A60(&StringLiteral_12398/*"SERVANT_SORT_TITLE2"*/);
    sub_2213A60(&StringLiteral_12228/*"SERVANT_SORT_CLEAR"*/);
    sub_2213A60(&StringLiteral_12232/*"SERVANT_SORT_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12233/*"SERVANT_SORT_EXPLANATION2"*/);
    byte_596B78C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)sort,
      (System_String_o *)callback,
      (int32_t)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.baseSortInfo = sort;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
      (int32_t)sort,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = this->fields.kind;
    baseSortInfo = this->fields.baseSortInfo;
    if ( v20 == 3 || v20 == 1 )
    {
      if ( !baseSortInfo )
        goto LABEL_22;
      baseSortInfo->fields.listViewKind = v20;
    }
    v22 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
    ListViewSort___ctor_50855524(v22, baseSortInfo, 0);
    this->fields.operationSortInfo = v22;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    title2Label = this->fields.title2Label;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12398/*"SERVANT_SORT_TITLE2"*/, 0);
    if ( title2Label )
    {
      UILabel__set_text(title2Label, (System_String_o *)gameObject, 0);
      explanationLabel = this->fields.explanationLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_SORT_EXPLANATION"*/, 0);
      if ( explanationLabel )
      {
        UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
        explanationLabel2 = this->fields.explanationLabel2;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SERVANT_SORT_EXPLANATION2"*/, 0);
        if ( explanationLabel2 )
        {
          UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0);
          decideLabel = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_SORT_DECIDE"*/, 0);
          if ( decideLabel )
          {
            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
            cancelLabel = this->fields.cancelLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12227/*"SERVANT_SORT_CANCEL"*/, 0);
            if ( cancelLabel )
            {
              UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
              clearLabel = this->fields.clearLabel;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12228/*"SERVANT_SORT_CLEAR"*/,
                                                         0);
              if ( clearLabel )
              {
                UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0);
                resetLabel = this->fields.resetLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12396/*"SERVANT_SORT_RESET"*/,
                                                           0);
                if ( resetLabel )
                {
                  UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0);
                  MaterialEventLogServantSortSelectMenu__SetupUseFilterKindList(this, v38);
                  MaterialEventLogServantSortSelectMenu__SetupFilterButtons(this, this->fields.operationSortInfo, v39);
                  MaterialEventLogServantSortSelectMenu__SetupButtonLayout(this, this->fields.kind, v40);
                  MaterialEventLogServantSortSelectMenu__SetButtenEnable(this, 1, v41);
                  MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v42);
                  servantFilterScrollView = this->fields.servantFilterScrollView;
                  if ( servantFilterScrollView )
                  {
                    v44 = this->fields.baseSortInfo;
                    if ( v44 )
                    {
                      gameObject = (UnityEngine_GameObject_o *)servantFilterScrollView->fields.verticalScrollBar;
                      if ( gameObject )
                      {
                        UIProgressBar__set_value((UIProgressBar_o *)gameObject, v44->fields.scrollBarValue, 0);
                        this->fields.state = 1;
                        v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                        System_Action___ctor(
                          v45,
                          (Il2CppObject *)this,
                          Method_MaterialEventLogServantSortSelectMenu_EndOpen__,
                          0);
                        BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0, 0);
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
LABEL_22:
    sub_2213CDC(gameObject, v13);
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596B791 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_596B791 = 1;
  }
  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  memset(&v7, 0, sizeof(v7));
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
    sub_2213CDC(decideButton, isEnable);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)decideButton,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v7.fields._current )
      sub_2213CDC(0, v6);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v7.fields._current, isEnable, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
  __int64 v14; // x2
  FilterKindList_c *v15; // x0
  System_Collections_Generic_List_T__o *ClassFilterKindList; // x0
  __int64 v17; // x1
  ListViewSort_o *v18; // x0
  bool v19; // w0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596B793 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_2213A60(&StringLiteral_18201/*"btn_bg_04"*/);
    sub_2213A60(&StringLiteral_18200/*"btn_bg_03"*/);
    byte_596B793 = 1;
  }
  sort1Button = (UnityEngine_Component_o *)this->fields.sort1Button;
  memset(&v21, 0, sizeof(v21));
  if ( !sort1Button )
    goto LABEL_35;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             sort1Button,
                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = this->fields.operationSortInfo;
  if ( !operationSortInfo || !sort1Button )
    goto LABEL_35;
  v5 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)sort1Button, *v5, 0);
  sort1Button = (UnityEngine_Component_o *)this->fields.sort2Button;
  if ( !sort1Button )
    goto LABEL_35;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             sort1Button,
                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v6 = this->fields.operationSortInfo;
  if ( !v6 || !sort1Button )
    goto LABEL_35;
  v7 = (System_String_o **)(v6->fields.sortKind == 2 ? &StringLiteral_18200/*"btn_bg_03"*/ : &StringLiteral_18201/*"btn_bg_04"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)sort1Button, *v7, 0),
        (sort1Button = (UnityEngine_Component_o *)this->fields.sort3Button) == 0)
    || (sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   sort1Button,
                                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v8 = this->fields.operationSortInfo) == 0)
    || !sort1Button
    || (v8->fields.sortKind != 9 ? (v9 = &StringLiteral_18201/*"btn_bg_04"*/) : (v9 = &StringLiteral_18200/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)sort1Button, (System_String_o *)*v9, 0),
        (sort1Button = (UnityEngine_Component_o *)this->fields.useFilterButtonList) == 0) )
  {
LABEL_35:
    sub_2213CDC(sort1Button, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)sort1Button,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v21 = v20;
  v20.fields._list = 0;
  *(_QWORD *)&v20.fields._index = &v21;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v10 )
      break;
    current = (ServantFilterButtonControl_o *)v21.fields._current;
    if ( !v21.fields._current )
      sub_2213CDC(v10, v11);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v21.fields._current, 0);
    v15 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, v13, v14);
      v15 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_T__o *)v15->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_2213CDC(0, v13);
    if ( System_Collections_Generic_List_Int32Enum___Contains(
           ClassFilterKindList,
           current->fields.filterKind,
           (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v18 = this->fields.operationSortInfo;
      if ( !v18 )
        sub_2213CDC(0, v17);
      v19 = ListViewSort__CheckSvtGroupFilter(v18, current->fields.filterKind, 0);
      ServantFilterButtonControl__SetButtonMask(current, !v19, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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

  if ( (byte_596B792 & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805);
    byte_596B792 = 1;
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
        v6 = (System_Array_o *)sub_2213B20(ListViewSort_FilterCategoryKind___TypeInfo, 4),
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
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
    sub_2213CDC(servantFilterRoot, *(_QWORD *)&kind);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  System_Collections_Generic_List_T__o *useFilterKindList; // x0
  bool v20; // w22
  ServantFilterButtonControl_OnClickFilterButton_o *v21; // x23
  __int64 v22; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_Enumerator_object__o *v23; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_596B78F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__);
    sub_2213A60(&Method_MaterialEventLogServantSortSelectMenu__SetupFilterButtons_b__43_0__);
    sub_2213A60(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_2213A60(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    byte_596B78F = 1;
  }
  filterButtonList = this->fields.filterButtonList;
  memset(&v24, 0, sizeof(v24));
  v6 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_object____ctor(
    v6,
    (Il2CppObject *)this,
    Method_MaterialEventLogServantSortSelectMenu__SetupFilterButtons_b__43_0__,
    0);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_object___FindAll(
                (System_Collections_Generic_List_object__o *)filterButtonList,
                (System_Predicate_T__o *)v6,
                (const MethodInfo_448436C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.useFilterButtonList,
          (int32_t)All,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (v7 = this->fields.filterButtonList) == 0) )
  {
    sub_2213CDC(v7, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)v7,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v22 = 0;
  v23 = &v24;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v16 )
      break;
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_2213CDC(v16, v17);
    useFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_2213CDC(0, v17);
    v20 = System_Collections_Generic_List_Int32Enum___Contains(
            useFilterKindList,
            *(_DWORD *)((char *)&v24.fields._current->klass + (unsigned __int64)&qword_20),
            (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v21 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_2213CCC(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__,
      0);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v21, v20, 0, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void MaterialEventLogServantSortSelectMenu__SetupUseFilterKindList(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MaterialEventLogServantSortSelectMenu_o *v3; // x19
  System_Collections_Generic_List_T__o *useFilterKindList; // x20
  int32_t version; // w8
  int32_t kind; // w9
  FilterKindList_c *v7; // x0
  System_Collections_Generic_List_T__o *v8; // x20
  struct System_Object_array *items; // x9

  v3 = this;
  if ( (byte_596B78D & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596B78D = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_18;
  version = useFilterKindList->fields._version;
  kind = v3->fields.kind;
  useFilterKindList->fields._size = 0;
  useFilterKindList->fields._version = version + 1;
  if ( kind == 3 || kind == 1 )
  {
    items = useFilterKindList->fields._items;
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
        *(const MethodInfo_4469A88 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__
                                                   + 4)
                                                 + 192LL)
                                     + 112LL));
    }
  }
  else if ( !kind )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, method, v2);
      v7 = FilterKindList_TypeInfo;
    }
    System_Collections_Generic_List_Int32Enum___AddRange(
      useFilterKindList,
      (System_Collections_Generic_IEnumerable_T__o *)v7->static_fields->ClassGroupFilterKindList,
      (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    this = (MaterialEventLogServantSortSelectMenu_o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
    if ( this )
    {
      v8 = (System_Collections_Generic_List_T__o *)v3->fields.useFilterKindList;
      this = (MaterialEventLogServantSortSelectMenu_o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                          (System_Collections_Generic_List_T__o *)this,
                                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
      if ( v8 )
      {
        System_Collections_Generic_List_Int32Enum___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
        this = (MaterialEventLogServantSortSelectMenu_o *)v3->fields.useFilterKindList;
        if ( this )
        {
          System_Collections_Generic_List_Int32Enum___AddRange(
            (System_Collections_Generic_List_T__o *)this,
            (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
            (const MethodInfo_4469C94 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
          return;
        }
      }
    }
LABEL_18:
    sub_2213CDC(this, method);
  }
}


bool MaterialEventLogServantSortSelectMenu___SetupFilterButtons_b__43_0(
        MaterialEventLogServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_596B79E & 1) == 0 )
  {
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_596B79E = 1;
  }
  if ( !x || (this = (MaterialEventLogServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0 )
    sub_2213CDC(this, x);
  return System_Collections_Generic_List_Int32Enum___Contains(
           (System_Collections_Generic_List_T__o *)this,
           x->fields.filterKind,
           (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void MaterialEventLogServantSortSelectMenu__add_callbackFunc(
        MaterialEventLogServantSortSelectMenu_o *this,
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MaterialEventLogServantSortSelectMenu_o *v11; // x0
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596B78A & 1) == 0 )
  {
    sub_2213A60(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_596B78A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MaterialEventLogServantSortSelectMenu_CallbackFunc_c *)v6->klass != MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialEventLogServantSortSelectMenu_o *)sub_221405C(
                                                     v6,
                                                     MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                     v7,
                                                     v8);
  MaterialEventLogServantSortSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *MaterialEventLogServantSortSelectMenu__get_closeBtnPath(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_596B79C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596B79C = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}


void MaterialEventLogServantSortSelectMenu__remove_callbackFunc(
        MaterialEventLogServantSortSelectMenu_o *this,
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MaterialEventLogServantSortSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596B78B & 1) == 0 )
  {
    sub_2213A60(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_596B78B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MaterialEventLogServantSortSelectMenu_CallbackFunc_c *)v6->klass != MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialEventLogServantSortSelectMenu_o *)sub_221405C(
                                                     v6,
                                                     MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                     v7,
                                                     v8);
  MaterialEventLogServantSortSelectMenu__Init(v11, v12);
}


void MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200256C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2002524;
}


System_IAsyncResult_o *MaterialEventLogServantSortSelectMenu_CallbackFunc__BeginInvoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void MaterialEventLogServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
    sub_2213CDC(this, 0);
  return x->fields.categoryKind == this->fields.kind;
}