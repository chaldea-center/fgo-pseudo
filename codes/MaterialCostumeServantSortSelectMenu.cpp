void __fastcall MaterialCostumeServantSortSelectMenu___ctor(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42EC325 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v14, v15, v16);
    byte_42EC325 = 1;
  }
  v17 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v17,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantSortSelectMenu__Callback(
        MaterialCostumeServantSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v9; // x19
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialCostumeServantSortSelectMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__Close(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantSortSelectMenu__Close_32000716(this, 0LL, v2);
}


void __fastcall MaterialCostumeServantSortSelectMenu__Close_32000716(
        MaterialCostumeServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EC31D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MaterialCostumeServantSortSelectMenu_EndClose__, v10, v11, v12);
    byte_42EC31D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall MaterialCostumeServantSortSelectMenu__EndClose(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu__InitCategoryContainer(
        MaterialCostumeServantSortSelectMenu_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  __int64 v32; // x8
  Il2CppObject *current; // x21
  _BOOL8 v34; // x0
  __int64 v35; // x1
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float x; // s8
  float y; // s9
  float z; // s10
  unsigned __int64 v42; // x26
  MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_o *v43; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *filterContainerList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x23
  peRenderTexture_ChangeLayerObject_o *v46; // x21
  __int64 v47; // x0
  int v48; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-90h] BYREF
  MaterialCostumeServantSortSelectMenu_o *v51; // [xsp+48h] [xbp-68h]
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v51 = this;
  if ( (byte_42EC31C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__,
      (_DWORD)categoryKindKist,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v23, v24, v25);
    sub_B5D5C4(
      &Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__,
      v26,
      v27,
      v28);
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_B5D5C4(
                                                       &MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
    byte_42EC31C = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !categoryKindKist )
    goto LABEL_28;
  v32 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v32 )
    goto LABEL_29;
  this = (MaterialCostumeServantSortSelectMenu_o *)v51->fields.filterContainerList;
  if ( !this )
    goto LABEL_28;
  v48 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v32 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v50 = v49;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v50,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v50.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v34 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v34 )
    {
      if ( !current )
        sub_B5D69C(v34, v35);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v50,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_zero(0LL);
  if ( (int)categoryKindKist->max_length >= 1 )
  {
    x = v36;
    y = v37;
    z = v38;
    v42 = 0LL;
    while ( 1 )
    {
      v43 = (MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_o *)sub_B5D694(MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo);
      MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0___ctor(v43, 0LL);
      if ( v42 >= categoryKindKist->max_length )
        break;
      if ( !v43 )
        goto LABEL_28;
      v43->fields.kind = categoryKindKist->m_Items[v42 + 1];
      filterContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v51->fields.filterContainerList;
      v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v45,
        (Il2CppObject *)v43,
        Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
      if ( !filterContainerList )
        goto LABEL_28;
      v46 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              filterContainerList,
              (System_Predicate_T__o *)v45,
              (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MaterialCostumeServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)v46,
                                                         0LL,
                                                         0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_28;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v46, 1, 0LL);
        v52.fields.x = x;
        v52.fields.y = y;
        v52.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v46, v52, 0LL);
        ServantFilterCategoryContainer__Layout(
          (ServantFilterCategoryContainer_o *)v46,
          *(&v46->fields.prevLayer + 1) == v48,
          0LL);
        BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(
                           (ServantFilterCategoryContainer_o *)v46,
                           0LL);
        x = BottomPosition.fields.x;
        y = BottomPosition.fields.y;
        z = BottomPosition.fields.z;
      }
      if ( (__int64)++v42 >= (int)categoryKindKist->max_length )
        goto LABEL_26;
    }
LABEL_29:
    v47 = sub_B5D6C8(this);
    sub_B5D668(v47, 0LL);
  }
LABEL_26:
  this = (MaterialCostumeServantSortSelectMenu_o *)v51->fields.filterScrollView;
  if ( !this )
LABEL_28:
    sub_B5D69C(this, categoryKindKist);
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickCancel(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EC321 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC321 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    MaterialCostumeServantSortSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickClear(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v11; // x1

  if ( (byte_42EC323 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC323 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                   useFilterKindList,
                                                                                   (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B5D69C(useFilterKindList, v8);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v11);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickDecide(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MaterialCostumeServantSortSelectMenu_o *v4; // x19
  struct UIScrollView_o *filterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x2
  float value; // s0
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_42EC320 & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC320 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    filterScrollView = v4->fields.filterScrollView;
    if ( !filterScrollView )
      goto LABEL_13;
    this = *(MaterialCostumeServantSortSelectMenu_o **)&filterScrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v4->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(v4, 0, v7);
    v4->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_B5D69C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v4->fields.operationSortInfo, 0LL);
    MaterialCostumeServantSortSelectMenu__Callback(v4, 1, v9);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickFilterButton(
        MaterialCostumeServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_42EC322 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, filterKind, (_DWORD)method, v3);
    byte_42EC322 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(0LL, v6);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v8);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__Open(
        MaterialCostumeServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *allSelectResetLabel; // x21
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x2
  System_Array_o *v66; // x21
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x1
  struct UIScrollView_o *filterScrollView; // x8
  System_Action_o *v71; // x20
  System_RuntimeFieldHandle_o v72; // 0:w1.4

  if ( (byte_42EC319 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)sort, callback);
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ListViewSort_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_MaterialCostumeServantSortSelectMenu_EndOpen__, v21, v22, v23);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE,
      v24,
      v25,
      v26);
    sub_B5D5C4(&StringLiteral_12089/*"SERVANT_SORT_RESET"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12091/*"SERVANT_SORT_TITLE2"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, v39, v40, v41);
    byte_42EC319 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)sort,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.baseSortInfo = sort;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    baseSortInfo = this->fields.baseSortInfo;
    v52 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
    ListViewSort___ctor_34029496(v52, baseSortInfo, 0LL);
    this->fields.operationSortInfo = v52;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SERVANT_SORT_TITLE2"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_17;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
    cancelLabel = this->fields.cancelLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_17;
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
    clearLabel = this->fields.clearLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, 0LL);
    if ( !clearLabel )
      goto LABEL_17;
    UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
    allSelectResetLabel = this->fields.allSelectResetLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12089/*"SERVANT_SORT_RESET"*/, 0LL);
    if ( !allSelectResetLabel )
      goto LABEL_17;
    UILabel__set_text(allSelectResetLabel, (System_String_o *)gameObject, 0LL);
    MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(this, v64);
    MaterialCostumeServantSortSelectMenu__SetupFilterButtons(this, this->fields.operationSortInfo, v65);
    v66 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 6LL);
    v72.fields.value = Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v66, v72, 0LL);
    MaterialCostumeServantSortSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v66, v67);
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(this, 1, v68);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v69);
    filterScrollView = this->fields.filterScrollView;
    if ( !filterScrollView
      || !*p_baseSortInfo
      || (gameObject = *(UnityEngine_GameObject_o **)&filterScrollView->fields.showScrollBars) == 0LL )
    {
LABEL_17:
      sub_B5D69C(gameObject, v43);
    }
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, (*p_baseSortInfo)->fields.scrollBarValue, 0LL);
    this->fields.state = 1;
    v71 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v71, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v71, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu__SetButtenEnable(
        MaterialCostumeServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EC31E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      isEnable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v12, v13, v14);
    byte_42EC31E = 1;
  }
  memset(&v17, 0, sizeof(v17));
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
    sub_B5D69C(decideButton, isEnable);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B5D69C(0LL, v16);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v17.fields.current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetButtenSelect(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x20
  __int64 v24; // x1
  FilterKindList_c *v25; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v27; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v29; // w0
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EC31F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&FilterKindList_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v17, v18, v19);
    byte_42EC31F = 1;
  }
  memset(&v31, 0, sizeof(v31));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v21 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B5D69C(v21, v22);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v31.fields.current, 0LL);
    v25 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v25 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v25->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B5D69C(0LL, v24);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B5D69C(0LL, v27);
      v29 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v29, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetupFilterButtons(
        MaterialCostumeServantSortSelectMenu_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v37; // x22
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  _BOOL8 v47; // x0
  __int64 v48; // x1
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  bool v51; // w22
  ServantFilterButtonControl_OnClickFilterButton_o *v52; // x23
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_42EC31B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__,
      (_DWORD)sort,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__, v21, v22, v23);
    sub_B5D5C4(&Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__, v24, v25, v26);
    sub_B5D5C4(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Predicate_ServantFilterButtonControl__TypeInfo, v33, v34, v35);
    byte_42EC31B = 1;
  }
  memset(&v53, 0, sizeof(v53));
  filterButtonList = this->fields.filterButtonList;
  v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v37,
    (Il2CppObject *)this,
    Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)filterButtonList,
                (System_Predicate_T__o *)v37,
                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
          (System_Int32_array **)All,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46),
        (v38 = this->fields.filterButtonList) == 0LL) )
  {
    sub_B5D69C(v38, v39);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v53,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v47 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v53,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v47 )
      break;
    current = v53.fields.current;
    if ( !v53.fields.current )
      sub_B5D69C(v47, v48);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B5D69C(0LL, v48);
    v51 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v53.fields.current[1].monitor,
            (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v52 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B5D694(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v52,
      (Il2CppObject *)this,
      Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v52, v51, 0, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v15; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v16; // x20

  if ( (byte_42EC31A & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v11, v12, v13);
    byte_42EC31A = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_14;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v15 = this->fields.useFilterKindList;
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v15 )
    goto LABEL_14;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_14;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList
    || (v16 = this->fields.useFilterKindList,
        useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray((System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList, (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v16)
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          v16,
          (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
          (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList) == 0LL)
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CollectionStateFilterKindList,
          (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(useFilterKindList, method);
  }
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->MaterialServantCostumeFilterKindList,
    (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall MaterialCostumeServantSortSelectMenu___SetupFilterButtons_b__28_0(
        MaterialCostumeServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MaterialCostumeServantSortSelectMenu_o *v5; // x20

  v5 = this;
  if ( (byte_42EC326 & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_B5D5C4(
                                                       &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                       (_DWORD)x,
                                                       (_DWORD)method,
                                                       v3);
    byte_42EC326 = 1;
  }
  if ( !x || (this = (MaterialCostumeServantSortSelectMenu_o *)v5->fields.useFilterKindList) == 0LL )
    sub_B5D69C(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__add_callbackFunc(
        MaterialCostumeServantSortSelectMenu_o *this,
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MaterialCostumeServantSortSelectMenu_o *v12; // x0
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC317 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC317 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MaterialCostumeServantSortSelectMenu_CallbackFunc_c *)v9->klass != MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  MaterialCostumeServantSortSelectMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall MaterialCostumeServantSortSelectMenu__onClickFilterAllSelectReset(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v11; // x1

  if ( (byte_42EC324 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC324 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    useFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          useFilterKindList = (System_Collections_Generic_List_Voice_BATTLE__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                                   useFilterKindList,
                                                                                   (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B5D69C(useFilterKindList, v8);
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
  __int64 v3; // x3
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MaterialCostumeServantSortSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MaterialCostumeServantSortSelectMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EC318 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC318 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MaterialCostumeServantSortSelectMenu_CallbackFunc_c *)v9->klass != MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  MaterialCostumeServantSortSelectMenu__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc__BeginInvoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42E5F41 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5F41 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (MaterialCostumeServantSortSelectMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
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
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == this->fields.kind;
}