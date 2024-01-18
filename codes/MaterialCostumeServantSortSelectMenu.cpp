void __fastcall MaterialCostumeServantSortSelectMenu___ctor(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418816A & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v6);
    byte_418816A = 1;
  }
  v7 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v7,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialCostumeServantSortSelectMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__Close(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeServantSortSelectMenu__Close_25919676(this, 0LL, v2);
}


void __fastcall MaterialCostumeServantSortSelectMenu__Close_25919676(
        MaterialCostumeServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4188162 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_MaterialCostumeServantSortSelectMenu_EndClose__, v10);
    byte_4188162 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x8
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float x; // s8
  float y; // s9
  float z; // s10
  unsigned __int64 v23; // x26
  MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_o *v24; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *filterContainerList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x23
  peRenderTexture_ChangeLayerObject_o *v27; // x21
  __int64 v28; // x0
  int v29; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-90h] BYREF
  MaterialCostumeServantSortSelectMenu_o *v32; // [xsp+48h] [xbp-68h]
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v32 = this;
  if ( (byte_4188161 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__,
      categoryKindKist);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v9);
    sub_B2C35C(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_B2C35C(&Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__, v11);
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_B2C35C(
                                                       &MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo,
                                                       v12);
    byte_4188161 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !categoryKindKist )
    goto LABEL_28;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
    goto LABEL_29;
  this = (MaterialCostumeServantSortSelectMenu_o *)v32->fields.filterContainerList;
  if ( !this )
    goto LABEL_28;
  v29 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v31.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  if ( (int)categoryKindKist->max_length >= 1 )
  {
    x = v17;
    y = v18;
    z = v19;
    v23 = 0LL;
    while ( 1 )
    {
      v24 = (MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_o *)sub_B2C42C(MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0_TypeInfo);
      MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0___ctor(v24, 0LL);
      if ( v23 >= categoryKindKist->max_length )
        break;
      if ( !v24 )
        goto LABEL_28;
      v24->fields.kind = categoryKindKist->m_Items[v23 + 1];
      filterContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v32->fields.filterContainerList;
      v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v26,
        (Il2CppObject *)v24,
        Method_MaterialCostumeServantSortSelectMenu___c__DisplayClass29_0__InitCategoryContainer_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
      if ( !filterContainerList )
        goto LABEL_28;
      v27 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              filterContainerList,
              (System_Predicate_T__o *)v26,
              (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MaterialCostumeServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)v27,
                                                         0LL,
                                                         0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_28;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v27, 1, 0LL);
        v33.fields.x = x;
        v33.fields.y = y;
        v33.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v27, v33, 0LL);
        ServantFilterCategoryContainer__Layout(
          (ServantFilterCategoryContainer_o *)v27,
          *(&v27->fields.prevLayer + 1) == v29,
          0LL);
        BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(
                           (ServantFilterCategoryContainer_o *)v27,
                           0LL);
        x = BottomPosition.fields.x;
        y = BottomPosition.fields.y;
        z = BottomPosition.fields.z;
      }
      if ( (__int64)++v23 >= (int)categoryKindKist->max_length )
        goto LABEL_26;
    }
LABEL_29:
    v28 = sub_B2C460(this);
    sub_B2C400(v28, 0LL);
  }
LABEL_26:
  this = (MaterialCostumeServantSortSelectMenu_o *)v32->fields.filterScrollView;
  if ( !this )
LABEL_28:
    sub_B2C434(this, categoryKindKist);
  UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL);
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickCancel(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4188166 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188166 = 1;
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
    MaterialCostumeServantSortSelectMenu__Callback(this, 0, v3);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickClear(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4188168 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4188168 = 1;
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
                                                                                   (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B2C434(useFilterKindList, v4);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall MaterialCostumeServantSortSelectMenu__OnClickDecide(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v2; // x19
  struct UIScrollView_o *filterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_4188165 & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188165 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    filterScrollView = v2->fields.filterScrollView;
    if ( !filterScrollView )
      goto LABEL_13;
    this = *(MaterialCostumeServantSortSelectMenu_o **)&filterScrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (MaterialCostumeServantSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_B2C434(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    MaterialCostumeServantSortSelectMenu__Callback(v2, 1, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu__OnClickFilterButton(
        MaterialCostumeServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4188167 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&filterKind);
    byte_4188167 = 1;
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
      sub_B2C434(0LL, v5);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v7);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *allSelectResetLabel; // x21
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  System_Array_o *v46; // x21
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  struct UIScrollView_o *filterScrollView; // x8
  System_Action_o *v51; // x20
  System_RuntimeFieldHandle_o v52; // 0:w1.4

  if ( (byte_418815E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, v12);
    sub_B2C35C(&ListViewSort_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_MaterialCostumeServantSortSelectMenu_EndOpen__, v15);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE,
      v16);
    sub_B2C35C(&StringLiteral_11940/*"SERVANT_SORT_RESET"*/, v17);
    sub_B2C35C(&StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, v18);
    sub_B2C35C(&StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, v19);
    sub_B2C35C(&StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, v20);
    sub_B2C35C(&StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, v21);
    byte_418815E = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    baseSortInfo = this->fields.baseSortInfo;
    v32 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
    ListViewSort___ctor_33914748(v32, baseSortInfo, 0LL);
    this->fields.operationSortInfo = v32;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    decideLabel = this->fields.decideLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_17;
    UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
    cancelLabel = this->fields.cancelLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_17;
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
    clearLabel = this->fields.clearLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, 0LL);
    if ( !clearLabel )
      goto LABEL_17;
    UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
    allSelectResetLabel = this->fields.allSelectResetLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_RESET"*/, 0LL);
    if ( !allSelectResetLabel )
      goto LABEL_17;
    UILabel__set_text(allSelectResetLabel, (System_String_o *)gameObject, 0LL);
    MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(this, v44);
    MaterialCostumeServantSortSelectMenu__SetupFilterButtons(this, this->fields.operationSortInfo, v45);
    v46 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 6LL);
    v52.fields.value = Field__PrivateImplementationDetails__254E546EEA15BA06916343C0FDAB6F3C2D1DB240CE5A73224D5036D7C8DFC2BE;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v46, v52, 0LL);
    MaterialCostumeServantSortSelectMenu__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v46, v47);
    MaterialCostumeServantSortSelectMenu__SetButtenEnable(this, 1, v48);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v49);
    filterScrollView = this->fields.filterScrollView;
    if ( !filterScrollView
      || !*p_baseSortInfo
      || (gameObject = *(UnityEngine_GameObject_o **)&filterScrollView->fields.showScrollBars) == 0LL )
    {
LABEL_17:
      sub_B2C434(gameObject, v23);
    }
    UIProgressBar__set_value((UIProgressBar_o *)gameObject, (*p_baseSortInfo)->fields.scrollBarValue, 0LL);
    this->fields.state = 1;
    v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v51, (Il2CppObject *)this, Method_MaterialCostumeServantSortSelectMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu__SetButtenEnable(
        MaterialCostumeServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188163 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4188163 = 1;
  }
  memset(&v10, 0, sizeof(v10));
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
    sub_B2C434(decideButton, isEnable);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B2C434(0LL, v9);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v10.fields.current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetButtenSelect(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  __int64 v12; // x1
  FilterKindList_c *v13; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v15; // x1
  ListViewSort_o *operationSortInfo; // x0
  bool v17; // w0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4188164 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v4);
    sub_B2C35C(&FilterKindList_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4188164 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v19,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v9 )
      break;
    current = v19.fields.current;
    if ( !v19.fields.current )
      sub_B2C434(v9, v10);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v19.fields.current, 0LL);
    v13 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v13 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v13->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B2C434(0LL, v12);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B2C434(0LL, v15);
      v17 = ListViewSort__CheckSvtGroupFilter(operationSortInfo, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v17, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetupFilterButtons(
        MaterialCostumeServantSortSelectMenu_o *this,
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
  __int64 v14; // x1
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x22
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  bool v30; // w22
  ServantFilterButtonControl_OnClickFilterButton_o *v31; // x23
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4188160 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9);
    sub_B2C35C(&Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__, v10);
    sub_B2C35C(&Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__, v11);
    sub_B2C35C(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v12);
    sub_B2C35C(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v13);
    sub_B2C35C(&System_Predicate_ServantFilterButtonControl__TypeInfo, v14);
    byte_4188160 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  filterButtonList = this->fields.filterButtonList;
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)this,
    Method_MaterialCostumeServantSortSelectMenu__SetupFilterButtons_b__28_0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)filterButtonList,
                (System_Predicate_T__o *)v16,
                (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
          (System_Int32_array **)All,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (v17 = this->fields.filterButtonList) == 0LL) )
  {
    sub_B2C434(v17, v18);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v26 )
      break;
    current = v32.fields.current;
    if ( !v32.fields.current )
      sub_B2C434(v26, v27);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B2C434(0LL, v27);
    v30 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v32.fields.current[1].monitor,
            (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v31 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B2C42C(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v31,
      (Il2CppObject *)this,
      Method_MaterialCostumeServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v31, v30, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCostumeServantSortSelectMenu__SetupUseFilterKindList(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v7; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v8; // x20

  if ( (byte_418815F & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_418815F = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_14;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v7 = this->fields.useFilterKindList;
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v7 )
    goto LABEL_14;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_14;
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
  if ( !useFilterKindList
    || (v8 = this->fields.useFilterKindList,
        useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray((System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList, (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v8)
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
          (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList) == 0LL)
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CollectionStateFilterKindList,
          (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList) == 0LL) )
  {
LABEL_14:
    sub_B2C434(useFilterKindList, method);
  }
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->MaterialServantCostumeFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall MaterialCostumeServantSortSelectMenu___SetupFilterButtons_b__28_0(
        MaterialCostumeServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialCostumeServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_418816B & 1) == 0 )
  {
    this = (MaterialCostumeServantSortSelectMenu_o *)sub_B2C35C(
                                                       &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                       x);
    byte_418816B = 1;
  }
  if ( !x || (this = (MaterialCostumeServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_418815C & 1) == 0 )
  {
    sub_B2C35C(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418815C = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantSortSelectMenu_o *)sub_B2C728(v8);
  MaterialCostumeServantSortSelectMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialCostumeServantSortSelectMenu__onClickFilterAllSelectReset(
        MaterialCostumeServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4188169 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4188169 = 1;
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
                                                                                   (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B2C434(useFilterKindList, v4);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0LL);
    MaterialCostumeServantSortSelectMenu__SetButtenSelect(this, v7);
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

  if ( (byte_418815D & 1) == 0 )
  {
    sub_B2C35C(&MaterialCostumeServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418815D = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantSortSelectMenu_o *)sub_B2C728(v8);
  MaterialCostumeServantSortSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc___ctor(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4185D17 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4185D17 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialCostumeServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  MaterialCostumeServantSortSelectMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (MaterialCostumeServantSortSelectMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
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
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == this->fields.kind;
}