void __fastcall CoinRoomSortSelectManager___ctor(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438B745 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_438B745 = 1;
  }
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinRoomSortSelectManager__Callback(
        CoinRoomSortSelectManager_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CoinRoomSortSelectManager_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CoinRoomSortSelectManager_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__Close(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinRoomSortSelectManager__Close_25870420(this, 0LL, v2);
}


void __fastcall CoinRoomSortSelectManager__Close_25870420(
        CoinRoomSortSelectManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438B732 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CoinRoomSortSelectManager_EndClose__);
    byte_438B732 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall CoinRoomSortSelectManager__EndClose(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x19

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__InitCategoryContainer(
        CoinRoomSortSelectManager_o *this,
        ListViewSort_FilterCategoryKind_array *categoryKindKist,
        const MethodInfo *method)
{
  __int64 v4; // x8
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float x; // s8
  float y; // s9
  float z; // s10
  unsigned __int64 v14; // x26
  CoinRoomSortSelectManager___c__DisplayClass52_0_o *v15; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *servantFilterCategoryContainerList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x23
  peRenderTexture_ChangeLayerObject_o *v18; // x21
  __int64 v19; // x0
  int v20; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-90h] BYREF
  CoinRoomSortSelectManager_o *v23; // [xsp+48h] [xbp-68h]
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v23 = this;
  if ( (byte_438B734 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B775C4(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B775C4(&Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__);
    this = (CoinRoomSortSelectManager_o *)sub_B775C4(&CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo);
    byte_438B734 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !categoryKindKist )
    goto LABEL_27;
  v4 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v4 )
    goto LABEL_28;
  this = (CoinRoomSortSelectManager_o *)v23->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_B7769C(this, categoryKindKist);
  v20 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v4 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v6 )
    {
      if ( !current )
        sub_B7769C(v6, v7);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  if ( (int)categoryKindKist->max_length >= 1 )
  {
    x = v8;
    y = v9;
    z = v10;
    v14 = 0LL;
    while ( 1 )
    {
      v15 = (CoinRoomSortSelectManager___c__DisplayClass52_0_o *)sub_B77694(CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo);
      CoinRoomSortSelectManager___c__DisplayClass52_0___ctor(v15, 0LL);
      if ( v14 >= categoryKindKist->max_length )
        break;
      if ( !v15 )
        goto LABEL_27;
      v15->fields.kind = categoryKindKist->m_Items[v14 + 1];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v23->fields.servantFilterCategoryContainerList;
      v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v17,
        (Il2CppObject *)v15,
        Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__,
        (const MethodInfo_2C3248C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v17,
              (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (CoinRoomSortSelectManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_27;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v18, 1, 0LL);
        v24.fields.x = x;
        v24.fields.y = y;
        v24.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v18, v24, 0LL);
        ServantFilterCategoryContainer__Layout(
          (ServantFilterCategoryContainer_o *)v18,
          *(&v18->fields.prevLayer + 1) == v20,
          0LL);
        BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(
                           (ServantFilterCategoryContainer_o *)v18,
                           0LL);
        x = BottomPosition.fields.x;
        y = BottomPosition.fields.y;
        z = BottomPosition.fields.z;
      }
      if ( (__int64)++v14 >= (int)categoryKindKist->max_length )
        return;
    }
LABEL_28:
    v19 = sub_B776C8(this);
    sub_B77668(v19, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickCancel(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438B73A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B73A = 1;
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
    CoinRoomSortSelectManager__Callback(this, 0, v3);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickClear(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x1

  if ( (byte_438B73B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B73B = 1;
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
                                                                                   (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B7769C(useFilterKindList, v3);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0LL);
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickDecide(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v2; // x19
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_438B739 & 1) == 0 )
  {
    this = (CoinRoomSortSelectManager_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438B739 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    scrollView = v2->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    this = *(CoinRoomSortSelectManager_o **)&scrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    CoinRoomSortSelectManager__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (CoinRoomSortSelectManager_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_B7769C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    CoinRoomSortSelectManager__Callback(v2, 1, v7);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickFilterButton(
        CoinRoomSortSelectManager_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_438B742 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B742 = 1;
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
      sub_B7769C(0LL, v5);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    CoinRoomSortSelectManager__SetButtenSelect(this, v7);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickHelp(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  System_Action_o *v4; // x20

  if ( (byte_438B743 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CoinRoomSortSelectManager_OnClickHelpClose__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B743 = 1;
  }
  if ( this->fields.state == 2 )
  {
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    {
      sub_B7769C(helpButton, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_OnClickHelpClose__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 32, v4, 0LL);
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
    sub_B7769C(helpButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
}


void __fastcall CoinRoomSortSelectManager__OnClickReset(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x1

  if ( (byte_438B73C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B73C = 1;
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
                                                                                   (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B7769C(useFilterKindList, v3);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0LL);
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSmartSort(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  UISprite_o *smartSortBtnSprite; // x0
  __int64 v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  struct ListViewSort_o *v6; // x8
  __int64 *v7; // x8

  if ( (byte_438B741 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_17345/*"btn_on"*/);
    sub_B775C4(&StringLiteral_17344/*"btn_off"*/);
    byte_438B741 = 1;
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
    if ( !operationSortInfo
      || (operationSortInfo->fields.isSmartSort ^= 1u, (v6 = this->fields.operationSortInfo) == 0LL)
      || (smartSortBtnSprite = this->fields.smartSortBtnSprite) == 0LL )
    {
      sub_B7769C(smartSortBtnSprite, v4);
    }
    if ( v6->fields.isSmartSort )
      v7 = &StringLiteral_17345/*"btn_on"*/;
    else
      v7 = &StringLiteral_17344/*"btn_off"*/;
    UISprite__set_spriteName(smartSortBtnSprite, (System_String_o *)*v7, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortAmount(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_438B73F & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B73F = 1;
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
      sub_B7769C(v3, v4);
    operationSortInfo->fields.sortKind = 14;
    CoinRoomSortSelectManager__SetButtenSelect(this, v4);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortId(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_438B73D & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B73D = 1;
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
      sub_B7769C(v3, v4);
    operationSortInfo->fields.sortKind = 27;
    CoinRoomSortSelectManager__SetButtenSelect(this, v4);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortRarity(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_438B73E & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B73E = 1;
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
      sub_B7769C(v3, v4);
    operationSortInfo->fields.sortKind = 2;
    CoinRoomSortSelectManager__SetButtenSelect(this, v4);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortServantName(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_438B740 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B740 = 1;
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
      sub_B7769C(v3, v4);
    operationSortInfo->fields.sortKind = 26;
    CoinRoomSortSelectManager__SetButtenSelect(this, v4);
  }
}


void __fastcall CoinRoomSortSelectManager__OnEnable(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  int32_t kind; // w8
  void **v4; // x9
  System_String_o **v5; // x8
  System_String_o *v6; // x20
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_438B744 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&StringLiteral_15773/*"Window/FilterList/CancelButton"*/);
    sub_B775C4(&StringLiteral_15780/*"Window/SortList/CancelButton"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B744 = 1;
  }
  kind = this->fields.kind;
  v4 = &StringLiteral_1/*""*/;
  if ( kind == 1 )
    v4 = (void **)&StringLiteral_15773/*"Window/FilterList/CancelButton"*/;
  if ( kind )
    v5 = (System_String_o **)v4;
  else
    v5 = (System_String_o **)&StringLiteral_15780/*"Window/SortList/CancelButton"*/;
  v6 = *v5;
  if ( !System_String__IsNullOrEmpty(*v5, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn_23834620(transform, v6, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__Open(
        CoinRoomSortSelectManager_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        CoinRoomSortSelectManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct ListViewSort_o *baseSortInfo; // x8
  ListViewSort_o *v22; // x21
  ListViewSort_o *v23; // x22
  struct ListViewSort_o **p_operationSortInfo; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
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
  UILabel_o *v44; // x22
  struct UILabel_array *v45; // x8
  UILabel_o *v46; // x22
  struct UILabel_array *v47; // x8
  UILabel_o *v48; // x22
  struct UILabel_array *v49; // x8
  UILabel_o *v50; // x21
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v57; // x8
  struct UIScrollView_o *scrollView; // x8
  System_Action_o *v59; // x20
  __int64 v60; // x0

  if ( (byte_438B731 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CoinRoomSortSelectManager_EndOpen__);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12174/*"SERVANT_SORT_RESET"*/);
    sub_B775C4(&StringLiteral_12506/*"SORT_WINDOW_TITLE"*/);
    sub_B775C4(&StringLiteral_17345/*"btn_on"*/);
    sub_B775C4(&StringLiteral_12024/*"SERVANT_SORT_CANCEL"*/);
    sub_B775C4(&StringLiteral_12028/*"SERVANT_SORT_DECIDE"*/);
    sub_B775C4(&StringLiteral_3273/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/);
    sub_B775C4(&StringLiteral_12176/*"SERVANT_SORT_TITLE2"*/);
    sub_B775C4(&StringLiteral_12025/*"SERVANT_SORT_CLEAR"*/);
    sub_B775C4(&StringLiteral_17344/*"btn_off"*/);
    sub_B775C4(&StringLiteral_3274/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/);
    sub_B775C4(&StringLiteral_12029/*"SERVANT_SORT_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_12030/*"SERVANT_SORT_EXPLANATION2"*/);
    byte_438B731 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)sort,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        baseSortInfo->fields.listViewKind = 5;
        v22 = this->fields.baseSortInfo;
        v23 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
        ListViewSort___ctor_34308964(v23, v22, 0LL);
        p_operationSortInfo = &this->fields.operationSortInfo;
        this->fields.operationSortInfo = v23;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v23,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        titleLabel = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12506/*"SORT_WINDOW_TITLE"*/, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
          title2Label = this->fields.title2Label;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12176/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, (System_String_o *)gameObject, 0LL);
            explanationLabel = this->fields.explanationLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12029/*"SERVANT_SORT_EXPLANATION"*/,
                                                       0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
              explanationLabel2 = this->fields.explanationLabel2;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12030/*"SERVANT_SORT_EXPLANATION2"*/,
                                                         0LL);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0LL);
                decideLabel = this->fields.decideLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_12028/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12024/*"SERVANT_SORT_CANCEL"*/,
                                                             0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                    sortDecideLabel = this->fields.sortDecideLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12028/*"SERVANT_SORT_DECIDE"*/,
                                                               0LL);
                    if ( sortDecideLabel )
                    {
                      UILabel__set_text(sortDecideLabel, (System_String_o *)gameObject, 0LL);
                      sortCancelLabel = this->fields.sortCancelLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12024/*"SERVANT_SORT_CANCEL"*/,
                                                                 0LL);
                      if ( sortCancelLabel )
                      {
                        UILabel__set_text(sortCancelLabel, (System_String_o *)gameObject, 0LL);
                        clearLabel = this->fields.clearLabel;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12025/*"SERVANT_SORT_CLEAR"*/,
                                                                   0LL);
                        if ( clearLabel )
                        {
                          UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
                          resetLabel = this->fields.resetLabel;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_12174/*"SERVANT_SORT_RESET"*/,
                                                                     0LL);
                          if ( resetLabel )
                          {
                            UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0LL);
                            smartSortDetail_1 = this->fields.smartSortDetail_1;
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_3273/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/,
                                                                       0LL);
                            if ( smartSortDetail_1 )
                            {
                              UILabel__set_text(smartSortDetail_1, (System_String_o *)gameObject, 0LL);
                              smartSortDetail_2 = this->fields.smartSortDetail_2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_3274/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/,
                                                                         0LL);
                              if ( smartSortDetail_2 )
                              {
                                UILabel__set_text(smartSortDetail_2, (System_String_o *)gameObject, 0LL);
                                sortLabel = this->fields.sortLabel;
                                if ( sortLabel )
                                {
                                  if ( !sortLabel->max_length )
                                    goto LABEL_47;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_46;
                                  v44 = sortLabel->m_Items[0];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             27,
                                                                             0LL);
                                  if ( !v44 )
                                    goto LABEL_46;
                                  UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
                                  v45 = this->fields.sortLabel;
                                  if ( !v45 )
                                    goto LABEL_46;
                                  if ( v45->max_length <= 1 )
                                    goto LABEL_47;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_46;
                                  v46 = v45->m_Items[1];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             2,
                                                                             0LL);
                                  if ( !v46 )
                                    goto LABEL_46;
                                  UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
                                  v47 = this->fields.sortLabel;
                                  if ( !v47 )
                                    goto LABEL_46;
                                  if ( v47->max_length <= 2 )
                                    goto LABEL_47;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_46;
                                  v48 = v47->m_Items[2];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             14,
                                                                             0LL);
                                  if ( !v48 )
                                    goto LABEL_46;
                                  UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
                                  v49 = this->fields.sortLabel;
                                  if ( !v49 )
                                    goto LABEL_46;
                                  if ( v49->max_length <= 3 )
                                  {
LABEL_47:
                                    v60 = sub_B776C8(gameObject);
                                    sub_B77668(v60, 0LL);
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( *p_operationSortInfo )
                                  {
                                    v50 = v49->m_Items[3];
                                    gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                               (ListViewSort_o *)gameObject,
                                                                               26,
                                                                               0LL);
                                    if ( v50 )
                                    {
                                      UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
                                      CoinRoomSortSelectManager__SetupUseFilterKindList(this, v51);
                                      CoinRoomSortSelectManager__SetupFilterButtons(
                                        this,
                                        this->fields.operationSortInfo,
                                        v52);
                                      CoinRoomSortSelectManager__SetupButtonLayout(this, this->fields.kind, v53);
                                      CoinRoomSortSelectManager__SetButtenEnable(this, 1, v54);
                                      CoinRoomSortSelectManager__SetButtenSelect(this, v55);
                                      operationSortInfo = this->fields.operationSortInfo;
                                      if ( operationSortInfo )
                                      {
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.smartSortBtnSprite;
                                        if ( gameObject )
                                        {
                                          v57 = (System_String_o **)(operationSortInfo->fields.isSmartSort
                                                                   ? &StringLiteral_17345/*"btn_on"*/
                                                                   : &StringLiteral_17344/*"btn_off"*/);
                                          UISprite__set_spriteName((UISprite_o *)gameObject, *v57, 0LL);
                                          scrollView = this->fields.scrollView;
                                          if ( scrollView )
                                          {
                                            if ( *p_baseSortInfo )
                                            {
                                              gameObject = *(UnityEngine_GameObject_o **)&scrollView->fields.showScrollBars;
                                              if ( gameObject )
                                              {
                                                UIProgressBar__set_value(
                                                  (UIProgressBar_o *)gameObject,
                                                  (*p_baseSortInfo)->fields.scrollBarValue,
                                                  0LL);
                                                this->fields.state = 1;
                                                v59 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v59,
                                                  (Il2CppObject *)this,
                                                  Method_CoinRoomSortSelectManager_EndOpen__,
                                                  0LL);
                                                BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
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
LABEL_46:
    sub_B7769C(gameObject, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__SetButtenEnable(
        CoinRoomSortSelectManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  struct UICommonButton_array *sortButton; // x8
  struct UICommonButton_array *v7; // x8
  struct UICommonButton_array *v8; // x8
  struct UICommonButton_array *v9; // x8
  __int64 v10; // x1
  __int64 v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438B736 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_438B736 = 1;
  }
  memset(&v12, 0, sizeof(v12));
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
  v7 = this->fields.sortButton;
  if ( !v7 )
    goto LABEL_26;
  if ( v7->max_length <= 1 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v7->m_Items[1];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  v8 = this->fields.sortButton;
  if ( !v8 )
    goto LABEL_26;
  if ( v8->max_length <= 2 )
    goto LABEL_27;
  decideButton = (UnityEngine_Behaviour_o *)v8->m_Items[2];
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL), (v9 = this->fields.sortButton) == 0LL) )
  {
LABEL_26:
    sub_B7769C(decideButton, isEnable);
  }
  if ( v9->max_length <= 3 )
  {
LABEL_27:
    v11 = sub_B776C8(decideButton);
    sub_B77668(v11, 0LL);
  }
  decideButton = (UnityEngine_Behaviour_o *)v9->m_Items[3];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B7769C(0LL, v10);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v12.fields.current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall CoinRoomSortSelectManager__SetButtenSelect(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v2; // x19
  struct UICommonButton_array *sortButton; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v5; // x8
  struct UICommonButton_array *v6; // x8
  struct ListViewSort_o *v7; // x8
  System_String_o **v8; // x8
  struct UICommonButton_array *v9; // x8
  struct ListViewSort_o *v10; // x8
  __int64 *v11; // x8
  struct UICommonButton_array *v12; // x8
  struct ListViewSort_o *v13; // x8
  System_String_o **v14; // x8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  __int64 v18; // x1
  FilterKindList_c *v19; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v21; // x1
  ListViewSort_o *v22; // x0
  bool v23; // w0
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_438B738 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_B775C4(&StringLiteral_17296/*"btn_bg_04"*/);
    this = (CoinRoomSortSelectManager_o *)sub_B775C4(&StringLiteral_17295/*"btn_bg_03"*/);
    byte_438B738 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  sortButton = v2->fields.sortButton;
  if ( !sortButton )
    goto LABEL_49;
  if ( !sortButton->max_length )
    goto LABEL_51;
  this = (CoinRoomSortSelectManager_o *)sortButton->m_Items[0];
  if ( !this )
    goto LABEL_49;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = v2->fields.operationSortInfo;
  if ( !operationSortInfo || !this )
    goto LABEL_49;
  v5 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17295/*"btn_bg_03"*/ : &StringLiteral_17296/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v5, 0LL);
  v6 = v2->fields.sortButton;
  if ( !v6 )
    goto LABEL_49;
  if ( v6->max_length <= 1 )
    goto LABEL_51;
  this = (CoinRoomSortSelectManager_o *)v6->m_Items[1];
  if ( !this )
    goto LABEL_49;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v7 = v2->fields.operationSortInfo;
  if ( !v7 || !this )
    goto LABEL_49;
  v8 = (System_String_o **)(v7->fields.sortKind == 2 ? &StringLiteral_17295/*"btn_bg_03"*/ : &StringLiteral_17296/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v8, 0LL);
  v9 = v2->fields.sortButton;
  if ( !v9 )
    goto LABEL_49;
  if ( v9->max_length <= 2 )
    goto LABEL_51;
  if ( (this = (CoinRoomSortSelectManager_o *)v9->m_Items[2]) == 0LL
    || (this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v10 = v2->fields.operationSortInfo) == 0LL)
    || !this
    || (v10->fields.sortKind != 14 ? (v11 = &StringLiteral_17296/*"btn_bg_04"*/) : (v11 = &StringLiteral_17295/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v11, 0LL),
        (v12 = v2->fields.sortButton) == 0LL) )
  {
LABEL_49:
    sub_B7769C(this, method);
  }
  if ( v12->max_length <= 3 )
  {
LABEL_51:
    v24 = sub_B776C8(this);
    sub_B77668(v24, 0LL);
  }
  this = (CoinRoomSortSelectManager_o *)v12->m_Items[3];
  if ( !this )
    goto LABEL_49;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v13 = v2->fields.operationSortInfo;
  if ( !v13 || !this )
    goto LABEL_49;
  v14 = (System_String_o **)(v13->fields.sortKind == 26 ? &StringLiteral_17295/*"btn_bg_03"*/ : &StringLiteral_17296/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v14, 0LL);
  this = (CoinRoomSortSelectManager_o *)v2->fields.useFilterButtonList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v15 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B7769C(v15, v16);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v26.fields.current, 0LL);
    v19 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v19 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v19->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B7769C(0LL, v18);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_30E9214 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v22 = v2->fields.operationSortInfo;
      if ( !v22 )
        sub_B7769C(0LL, v21);
      v23 = ListViewSort__CheckSvtGroupFilter(v22, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v23, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__SetupButtonLayout(
        CoinRoomSortSelectManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *servantSortRoot; // x0
  bool v6; // w1
  System_Array_o *v7; // x20
  const MethodInfo *v8; // x2
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_438B737 & 1) == 0 )
  {
    sub_B775C4(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805);
    byte_438B737 = 1;
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
        v6 = 1;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_B7769C(servantSortRoot, *(_QWORD *)&kind);
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
  v6 = 0;
LABEL_11:
  UnityEngine_GameObject__SetActive(servantSortRoot, v6, 0LL);
LABEL_12:
  v7 = (System_Array_o *)sub_B775DC(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v9.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v7, v9, 0LL);
  CoinRoomSortSelectManager__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v7, v8);
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
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v6; // x22
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  bool v20; // w22
  ServantFilterButtonControl_OnClickFilterButton_o *v21; // x23
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_438B735 & 1) == 0 )
  {
    sub_B775C4(&Method_CoinRoomSortSelectManager_OnClickFilterButton__);
    sub_B775C4(&Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_B775C4(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_B775C4(&Method_System_Predicate_ServantFilterButtonControl___ctor__);
    sub_B775C4(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    byte_438B735 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  filterButtonList = this->fields.filterButtonList;
  v6 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)filterButtonList,
                (System_Predicate_T__o *)v6,
                (const MethodInfo_3053C20 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
          (System_Int32_array **)All,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (v7 = this->fields.filterButtonList) == 0LL) )
  {
    sub_B7769C(v7, v8);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v7,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v16 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current )
      sub_B7769C(v16, v17);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B7769C(0LL, v17);
    v20 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v22.fields.current[1].monitor,
            (const MethodInfo_30E9214 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v21 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B77694(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v21,
      (Il2CppObject *)this,
      Method_CoinRoomSortSelectManager_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v21, v20, 0, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall CoinRoomSortSelectManager__SetupUseFilterKindList(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v4; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v5; // x20

  if ( (byte_438B733 & 1) == 0 )
  {
    sub_B775C4(&FilterKindList_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_438B733 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_12;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_30E91CC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v4 = this->fields.useFilterKindList;
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v4
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          v4,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
          (const MethodInfo_30E9014 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList) == 0LL)
    || (v5 = this->fields.useFilterKindList,
        useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray((System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList, (const MethodInfo_30EAECC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v5)
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
          (const MethodInfo_30E9014 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList) == 0LL) )
  {
LABEL_12:
    sub_B7769C(useFilterKindList, method);
  }
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_30E9014 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall CoinRoomSortSelectManager___SetupFilterButtons_b__53_0(
        CoinRoomSortSelectManager_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v4; // x20

  v4 = this;
  if ( (byte_438B746 & 1) == 0 )
  {
    this = (CoinRoomSortSelectManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_438B746 = 1;
  }
  if ( !x || (this = (CoinRoomSortSelectManager_o *)v4->fields.useFilterKindList) == 0LL )
    sub_B7769C(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_30E9214 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_438B72F & 1) == 0 )
  {
    sub_B775C4(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    byte_438B72F = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CoinRoomSortSelectManager_o *)sub_B77990(v7);
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

  if ( (byte_438B730 & 1) == 0 )
  {
    sub_B775C4(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo);
    byte_438B730 = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CoinRoomSortSelectManager_o *)sub_B77990(v7);
  CoinRoomSortSelectManager__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager_CallbackFunc___ctor(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
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
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall CoinRoomSortSelectManager_CallbackFunc__BeginInvoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_43885B5 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43885B5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CoinRoomSortSelectManager_CallbackFunc__EndInvoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager_CallbackFunc__Invoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CoinRoomSortSelectManager_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CoinRoomSortSelectManager_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CoinRoomSortSelectManager_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CoinRoomSortSelectManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
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
    sub_B7769C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == this->fields.kind;
}