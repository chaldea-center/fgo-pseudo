void __fastcall CoinRoomSortSelectManager___ctor(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F9A83 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v9);
    byte_40F9A83 = 1;
  }
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CoinRoomSortSelectManager_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__Close(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinRoomSortSelectManager__Close_24404056(this, 0LL, v2);
}


void __fastcall CoinRoomSortSelectManager__Close_24404056(
        CoinRoomSortSelectManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F9A70 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_CoinRoomSortSelectManager_EndClose__, v10);
    byte_40F9A70 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *servantFilterCategoryContainerList; // x0
  Il2CppObject *current; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float x; // s8
  float y; // s9
  float z; // s10
  unsigned __int64 v26; // x26
  CoinRoomSortSelectManager___c__DisplayClass52_0_o *v27; // x21
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v30; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x23
  peRenderTexture_ChangeLayerObject_o *v32; // x21
  int v33; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-90h] BYREF
  CoinRoomSortSelectManager_o *v36; // [xsp+48h] [xbp-68h]
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v36 = this;
  if ( (byte_40F9A72 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__,
      categoryKindKist);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__, v9);
    sub_B16FFC(&System_Predicate_ServantFilterCategoryContainer__TypeInfo, v10);
    sub_B16FFC(&Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__, v11);
    this = (CoinRoomSortSelectManager_o *)sub_B16FFC(&CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo, v12);
    byte_40F9A72 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  if ( !categoryKindKist )
    goto LABEL_27;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
    goto LABEL_28;
  servantFilterCategoryContainerList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v36->fields.servantFilterCategoryContainerList;
  if ( !servantFilterCategoryContainerList )
LABEL_27:
    sub_B170D4();
  v33 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v13 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    servantFilterCategoryContainerList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
  {
    current = v35.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
  if ( (int)categoryKindKist->max_length >= 1 )
  {
    x = v20;
    y = v21;
    z = v22;
    v26 = 0LL;
    while ( 1 )
    {
      v27 = (CoinRoomSortSelectManager___c__DisplayClass52_0_o *)sub_B170CC(
                                                                   CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo,
                                                                   v16,
                                                                   v17,
                                                                   v18,
                                                                   v19);
      CoinRoomSortSelectManager___c__DisplayClass52_0___ctor(v27, 0LL);
      if ( v26 >= categoryKindKist->max_length )
        break;
      if ( !v27 )
        goto LABEL_27;
      v27->fields.kind = categoryKindKist->m_Items[v26 + 1];
      v30 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v36->fields.servantFilterCategoryContainerList;
      v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                       System_Predicate_ServantFilterCategoryContainer__TypeInfo,
                                                                       categoryKindKist,
                                                                       method,
                                                                       v28,
                                                                       v29);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v31,
        (Il2CppObject *)v27,
        Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
      if ( !v30 )
        goto LABEL_27;
      v32 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              v30,
              (System_Predicate_T__o *)v31,
              (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL) )
      {
        if ( !v32 )
          goto LABEL_27;
        ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)v32, 1, 0LL);
        v37.fields.x = x;
        v37.fields.y = y;
        v37.fields.z = z;
        ServantFilterCategoryContainer__SetPosition((ServantFilterCategoryContainer_o *)v32, v37, 0LL);
        ServantFilterCategoryContainer__Layout(
          (ServantFilterCategoryContainer_o *)v32,
          *(&v32->fields.prevLayer + 1) == v33,
          0LL);
        BottomPosition = ServantFilterCategoryContainer__get_BottomPosition(
                           (ServantFilterCategoryContainer_o *)v32,
                           0LL);
        x = BottomPosition.fields.x;
        y = BottomPosition.fields.y;
        z = BottomPosition.fields.z;
      }
      if ( (__int64)++v26 >= (int)categoryKindKist->max_length )
        return;
    }
LABEL_28:
    sub_B17100(this, categoryKindKist, method);
    sub_B170A0();
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickCancel(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40F9A78 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A78 = 1;
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
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  ListViewSort_FilterKind_array *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40F9A79 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F9A79 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          v6 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                  (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                                                  (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B170D4();
    }
    ListViewSort__SetFilters(operationSortInfo, v6, 0, 0LL);
    CoinRoomSortSelectManager__SetButtenSelect(this, v7);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickDecide(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *scrollView; // x8
  UIProgressBar_o *v4; // x0
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x2
  float value; // s0
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v9; // x2

  if ( (byte_40F9A77 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A77 = 1;
  }
  if ( this->fields.state == 2 )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_13;
    v4 = *(UIProgressBar_o **)&scrollView->fields.showScrollBars;
    if ( !v4 )
      goto LABEL_13;
    operationSortInfo = this->fields.operationSortInfo;
    value = UIProgressBar__get_value(v4, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    CoinRoomSortSelectManager__SetButtenEnable(this, 0, v6);
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo )
LABEL_13:
      sub_B170D4();
    ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL);
    CoinRoomSortSelectManager__Callback(this, 1, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__OnClickFilterButton(
        CoinRoomSortSelectManager_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40F9A80 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&filterKind);
    byte_40F9A80 = 1;
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
      sub_B170D4();
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    CoinRoomSortSelectManager__SetButtenSelect(this, v6);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickHelp(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *helpButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40F9A81 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_CoinRoomSortSelectManager_OnClickHelpClose__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9A81 = 1;
  }
  if ( this->fields.state == 2 )
  {
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton || (gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_OnClickHelpClose__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 32, v11, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickHelpClose(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *helpButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
  if ( !helpButton || (gameObject = UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall CoinRoomSortSelectManager__OnClickReset(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  ListViewSort_FilterKind_array *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40F9A7A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F9A7A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList
      || (operationSortInfo = this->fields.operationSortInfo,
          v6 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                  (System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList,
                                                  (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B170D4();
    }
    ListViewSort__SetFilters(operationSortInfo, v6, 1, 0LL);
    CoinRoomSortSelectManager__SetButtenSelect(this, v7);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSmartSort(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  struct ListViewSort_o *v6; // x8
  UISprite_o *smartSortBtnSprite; // x0
  __int64 *v8; // x8

  if ( (byte_40F9A7F & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, v3);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v4);
    byte_40F9A7F = 1;
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
      sub_B170D4();
    }
    if ( v6->fields.isSmartSort )
      v8 = &StringLiteral_16940/*"btn_on"*/;
    else
      v8 = &StringLiteral_16939/*"btn_off"*/;
    UISprite__set_spriteName(smartSortBtnSprite, (System_String_o *)*v8, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortAmount(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F9A7D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A7D = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 14;
    CoinRoomSortSelectManager__SetButtenSelect(this, v3);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortId(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F9A7B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A7B = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 27;
    CoinRoomSortSelectManager__SetButtenSelect(this, v3);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortRarity(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F9A7C & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A7C = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 2;
    CoinRoomSortSelectManager__SetButtenSelect(this, v3);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortServantName(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F9A7E & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9A7E = 1;
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
      sub_B170D4();
    operationSortInfo->fields.sortKind = 26;
    CoinRoomSortSelectManager__SetButtenSelect(this, v3);
  }
}


void __fastcall CoinRoomSortSelectManager__OnEnable(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t kind; // w8
  void **v7; // x9
  System_String_o **v8; // x8
  System_String_o *v9; // x20
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40F9A82 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15419/*"Window/FilterList/CancelButton"*/, v3);
    sub_B16FFC(&StringLiteral_15426/*"Window/SortList/CancelButton"*/, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40F9A82 = 1;
  }
  kind = this->fields.kind;
  v7 = &StringLiteral_1/*""*/;
  if ( kind == 1 )
    v7 = (void **)&StringLiteral_15419/*"Window/FilterList/CancelButton"*/;
  if ( kind )
    v8 = (System_String_o **)v7;
  else
    v8 = (System_String_o **)&StringLiteral_15426/*"Window/SortList/CancelButton"*/;
  v9 = *v8;
  if ( !System_String__IsNullOrEmpty(*v8, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn_21111220(transform, v9, 0LL);
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct ListViewSort_o **p_baseSortInfo; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct ListViewSort_o *baseSortInfo; // x8
  ListViewSort_o *v40; // x21
  ListViewSort_o *v41; // x22
  ListViewSort_o **p_operationSortInfo; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *v50; // x0
  UILabel_o *title2Label; // x22
  System_String_o *v52; // x0
  UILabel_o *explanationLabel; // x22
  System_String_o *v54; // x0
  UILabel_o *explanationLabel2; // x22
  System_String_o *v56; // x0
  UILabel_o *decideLabel; // x22
  System_String_o *v58; // x0
  UILabel_o *cancelLabel; // x22
  System_String_o *v60; // x0
  UILabel_o *sortDecideLabel; // x22
  System_String_o *v62; // x0
  UILabel_o *sortCancelLabel; // x22
  System_String_o *v64; // x0
  UILabel_o *clearLabel; // x22
  System_String_o *v66; // x0
  UILabel_o *resetLabel; // x22
  System_String_o *v68; // x0
  UILabel_o *smartSortDetail_1; // x22
  System_String_o *v70; // x0
  UILabel_o *smartSortDetail_2; // x22
  System_String_o *v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  struct UILabel_array *sortLabel; // x8
  UILabel_o *v77; // x22
  System_String_o *SortKindText; // x0
  struct UILabel_array *v79; // x8
  UILabel_o *v80; // x22
  System_String_o *v81; // x0
  struct UILabel_array *v82; // x8
  UILabel_o *v83; // x22
  System_String_o *v84; // x0
  struct UILabel_array *v85; // x8
  ListViewSort_o *v86; // x0
  UILabel_o *v87; // x21
  System_String_o *v88; // x0
  const MethodInfo *v89; // x1
  const MethodInfo *v90; // x2
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x2
  const MethodInfo *v93; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  UISprite_o *smartSortBtnSprite; // x0
  System_String_o **v96; // x8
  struct UIScrollView_o *scrollView; // x8
  UIProgressBar_o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  System_Action_o *v103; // x20

  if ( (byte_40F9A6F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_CoinRoomSortSelectManager_EndOpen__, v12);
    sub_B16FFC(&ListViewSort_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_11890/*"SERVANT_SORT_RESET"*/, v15);
    sub_B16FFC(&StringLiteral_12221/*"SORT_WINDOW_TITLE"*/, v16);
    sub_B16FFC(&StringLiteral_16940/*"btn_on"*/, v17);
    sub_B16FFC(&StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, v18);
    sub_B16FFC(&StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, v19);
    sub_B16FFC(&StringLiteral_3139/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/, v20);
    sub_B16FFC(&StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, v21);
    sub_B16FFC(&StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, v22);
    sub_B16FFC(&StringLiteral_16939/*"btn_off"*/, v23);
    sub_B16FFC(&StringLiteral_3140/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/, v24);
    sub_B16FFC(&StringLiteral_11764/*"SERVANT_SORT_EXPLANATION"*/, v25);
    sub_B16FFC(&StringLiteral_11765/*"SERVANT_SORT_EXPLANATION2"*/, v26);
    byte_40F9A6F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        baseSortInfo->fields.listViewKind = 5;
        v40 = this->fields.baseSortInfo;
        v41 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v35, v36, v37, v38);
        ListViewSort___ctor_30209040(v41, v40, 0LL);
        p_operationSortInfo = &this->fields.operationSortInfo;
        this->fields.operationSortInfo = v41;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v41,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        titleLabel = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12221/*"SORT_WINDOW_TITLE"*/, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, v50, 0LL);
          title2Label = this->fields.title2Label;
          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, v52, 0LL);
            explanationLabel = this->fields.explanationLabel;
            v54 = LocalizationManager__Get((System_String_o *)StringLiteral_11764/*"SERVANT_SORT_EXPLANATION"*/, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, v54, 0LL);
              explanationLabel2 = this->fields.explanationLabel2;
              v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11765/*"SERVANT_SORT_EXPLANATION2"*/, 0LL);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, v56, 0LL);
                decideLabel = this->fields.decideLabel;
                v58 = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, 0LL);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, v58, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, v60, 0LL);
                    sortDecideLabel = this->fields.sortDecideLabel;
                    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, 0LL);
                    if ( sortDecideLabel )
                    {
                      UILabel__set_text(sortDecideLabel, v62, 0LL);
                      sortCancelLabel = this->fields.sortCancelLabel;
                      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, 0LL);
                      if ( sortCancelLabel )
                      {
                        UILabel__set_text(sortCancelLabel, v64, 0LL);
                        clearLabel = this->fields.clearLabel;
                        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, 0LL);
                        if ( clearLabel )
                        {
                          UILabel__set_text(clearLabel, v66, 0LL);
                          resetLabel = this->fields.resetLabel;
                          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_RESET"*/, 0LL);
                          if ( resetLabel )
                          {
                            UILabel__set_text(resetLabel, v68, 0LL);
                            smartSortDetail_1 = this->fields.smartSortDetail_1;
                            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3139/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/, 0LL);
                            if ( smartSortDetail_1 )
                            {
                              UILabel__set_text(smartSortDetail_1, v70, 0LL);
                              smartSortDetail_2 = this->fields.smartSortDetail_2;
                              v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3140/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/, 0LL);
                              if ( smartSortDetail_2 )
                              {
                                UILabel__set_text(smartSortDetail_2, v72, 0LL);
                                sortLabel = this->fields.sortLabel;
                                if ( sortLabel )
                                {
                                  if ( !sortLabel->max_length )
                                    goto LABEL_47;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_46;
                                  v77 = sortLabel->m_Items[0];
                                  SortKindText = ListViewSort__GetSortKindText(*p_operationSortInfo, 27, 0LL);
                                  if ( !v77 )
                                    goto LABEL_46;
                                  UILabel__set_text(v77, SortKindText, 0LL);
                                  v79 = this->fields.sortLabel;
                                  if ( !v79 )
                                    goto LABEL_46;
                                  if ( v79->max_length <= 1 )
                                    goto LABEL_47;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_46;
                                  v80 = v79->m_Items[1];
                                  v81 = ListViewSort__GetSortKindText(*p_operationSortInfo, 2, 0LL);
                                  if ( !v80 )
                                    goto LABEL_46;
                                  UILabel__set_text(v80, v81, 0LL);
                                  v82 = this->fields.sortLabel;
                                  if ( !v82 )
                                    goto LABEL_46;
                                  if ( v82->max_length <= 2 )
                                    goto LABEL_47;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_46;
                                  v83 = v82->m_Items[2];
                                  v84 = ListViewSort__GetSortKindText(*p_operationSortInfo, 14, 0LL);
                                  if ( !v83 )
                                    goto LABEL_46;
                                  UILabel__set_text(v83, v84, 0LL);
                                  v85 = this->fields.sortLabel;
                                  if ( !v85 )
                                    goto LABEL_46;
                                  if ( v85->max_length <= 3 )
                                  {
LABEL_47:
                                    sub_B17100(v73, v74, v75);
                                    sub_B170A0();
                                  }
                                  v86 = *p_operationSortInfo;
                                  if ( *p_operationSortInfo )
                                  {
                                    v87 = v85->m_Items[3];
                                    v88 = ListViewSort__GetSortKindText(v86, 26, 0LL);
                                    if ( v87 )
                                    {
                                      UILabel__set_text(v87, v88, 0LL);
                                      CoinRoomSortSelectManager__SetupUseFilterKindList(this, v89);
                                      CoinRoomSortSelectManager__SetupFilterButtons(
                                        this,
                                        this->fields.operationSortInfo,
                                        v90);
                                      CoinRoomSortSelectManager__SetupButtonLayout(this, this->fields.kind, v91);
                                      CoinRoomSortSelectManager__SetButtenEnable(this, 1, v92);
                                      CoinRoomSortSelectManager__SetButtenSelect(this, v93);
                                      operationSortInfo = this->fields.operationSortInfo;
                                      if ( operationSortInfo )
                                      {
                                        smartSortBtnSprite = this->fields.smartSortBtnSprite;
                                        if ( smartSortBtnSprite )
                                        {
                                          v96 = (System_String_o **)(operationSortInfo->fields.isSmartSort
                                                                   ? &StringLiteral_16940/*"btn_on"*/
                                                                   : &StringLiteral_16939/*"btn_off"*/);
                                          UISprite__set_spriteName(smartSortBtnSprite, *v96, 0LL);
                                          scrollView = this->fields.scrollView;
                                          if ( scrollView )
                                          {
                                            if ( *p_baseSortInfo )
                                            {
                                              v98 = *(UIProgressBar_o **)&scrollView->fields.showScrollBars;
                                              if ( v98 )
                                              {
                                                UIProgressBar__set_value(
                                                  v98,
                                                  (*p_baseSortInfo)->fields.scrollBarValue,
                                                  0LL);
                                                this->fields.state = 1;
                                                v103 = (System_Action_o *)sub_B170CC(
                                                                            System_Action_TypeInfo,
                                                                            v99,
                                                                            v100,
                                                                            v101,
                                                                            v102);
                                                System_Action___ctor(
                                                  v103,
                                                  (Il2CppObject *)this,
                                                  Method_CoinRoomSortSelectManager_EndOpen__,
                                                  0LL);
                                                BaseDialog__Open((BaseDialog_o *)this, v103, 0, 0LL);
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
    sub_B170D4();
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
  UnityEngine_Behaviour_o *cancelButton; // x0
  UnityEngine_Behaviour_o *clearButton; // x0
  UnityEngine_Behaviour_o *resetButton; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct UICommonButton_array *sortButton; // x8
  UnityEngine_Behaviour_o *v16; // x0
  struct UICommonButton_array *v17; // x8
  UnityEngine_Behaviour_o *v18; // x0
  struct UICommonButton_array *v19; // x8
  UnityEngine_Behaviour_o *v20; // x0
  struct UICommonButton_array *v21; // x8
  UnityEngine_Behaviour_o *v22; // x0
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9A74 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_40F9A74 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(cancelButton, isEnable, 0LL);
  clearButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
  if ( !clearButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(clearButton, isEnable, 0LL);
  resetButton = (UnityEngine_Behaviour_o *)this->fields.resetButton;
  if ( !resetButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(resetButton, isEnable, 0LL);
  sortButton = this->fields.sortButton;
  if ( !sortButton )
    goto LABEL_26;
  if ( !sortButton->max_length )
    goto LABEL_27;
  v16 = (UnityEngine_Behaviour_o *)sortButton->m_Items[0];
  if ( !v16 )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(v16, isEnable, 0LL);
  v17 = this->fields.sortButton;
  if ( !v17 )
    goto LABEL_26;
  if ( v17->max_length <= 1 )
    goto LABEL_27;
  v18 = (UnityEngine_Behaviour_o *)v17->m_Items[1];
  if ( !v18 )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(v18, isEnable, 0LL);
  v19 = this->fields.sortButton;
  if ( !v19 )
    goto LABEL_26;
  if ( v19->max_length <= 2 )
    goto LABEL_27;
  v20 = (UnityEngine_Behaviour_o *)v19->m_Items[2];
  if ( !v20 || (UnityEngine_Behaviour__set_enabled(v20, isEnable, 0LL), (v21 = this->fields.sortButton) == 0LL) )
LABEL_26:
    sub_B170D4();
  if ( v21->max_length <= 3 )
  {
LABEL_27:
    sub_B17100(v12, v13, v14);
    sub_B170A0();
  }
  v22 = (UnityEngine_Behaviour_o *)v21->m_Items[3];
  if ( !v22 )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(v22, isEnable, 0LL);
  useFilterButtonList = this->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v24.fields.current )
      sub_B170D4();
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v24.fields.current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall CoinRoomSortSelectManager__SetButtenSelect(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CoinRoomSortSelectManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UICommonButton_array *sortButton; // x8
  UnityEngine_Component_o *v13; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v16; // x8
  struct UICommonButton_array *v17; // x8
  UnityEngine_Component_o *v18; // x0
  WebViewObject_o *v19; // x0
  struct ListViewSort_o *v20; // x8
  System_String_o **v21; // x8
  struct UICommonButton_array *v22; // x8
  UnityEngine_Component_o *v23; // x0
  WebViewObject_o *v24; // x0
  struct ListViewSort_o *v25; // x8
  __int64 *v26; // x8
  struct UICommonButton_array *v27; // x8
  UnityEngine_Component_o *v28; // x0
  WebViewObject_o *v29; // x0
  struct ListViewSort_o *v30; // x8
  System_String_o **v31; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *useFilterButtonList; // x0
  Il2CppObject *current; // x20
  FilterKindList_c *v34; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  ListViewSort_o *v36; // x0
  bool v37; // w0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-50h] BYREF

  v3 = this;
  if ( (byte_40F9A76 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B16FFC(&FilterKindList_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v10);
    this = (CoinRoomSortSelectManager_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v11);
    byte_40F9A76 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  sortButton = v3->fields.sortButton;
  if ( !sortButton )
    goto LABEL_49;
  if ( !sortButton->max_length )
    goto LABEL_51;
  v13 = (UnityEngine_Component_o *)sortButton->m_Items[0];
  if ( !v13 )
    goto LABEL_49;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v13,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = v3->fields.operationSortInfo;
  if ( !operationSortInfo || !Component_WebViewObject )
    goto LABEL_49;
  v16 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_16890/*"btn_bg_03"*/ : &StringLiteral_16891/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, *v16, 0LL);
  v17 = v3->fields.sortButton;
  if ( !v17 )
    goto LABEL_49;
  if ( v17->max_length <= 1 )
    goto LABEL_51;
  v18 = (UnityEngine_Component_o *)v17->m_Items[1];
  if ( !v18 )
    goto LABEL_49;
  v19 = UnityEngine_Component__GetComponent_WebViewObject_(
          v18,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v20 = v3->fields.operationSortInfo;
  if ( !v20 || !v19 )
    goto LABEL_49;
  v21 = (System_String_o **)(v20->fields.sortKind == 2 ? &StringLiteral_16890/*"btn_bg_03"*/ : &StringLiteral_16891/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)v19, *v21, 0LL);
  v22 = v3->fields.sortButton;
  if ( !v22 )
    goto LABEL_49;
  if ( v22->max_length <= 2 )
    goto LABEL_51;
  if ( (v23 = (UnityEngine_Component_o *)v22->m_Items[2]) == 0LL
    || (v24 = UnityEngine_Component__GetComponent_WebViewObject_(
                v23,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v25 = v3->fields.operationSortInfo) == 0LL)
    || !v24
    || (v25->fields.sortKind != 14 ? (v26 = &StringLiteral_16891/*"btn_bg_04"*/) : (v26 = &StringLiteral_16890/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)v24, (System_String_o *)*v26, 0LL),
        (v27 = v3->fields.sortButton) == 0LL) )
  {
LABEL_49:
    sub_B170D4();
  }
  if ( v27->max_length <= 3 )
  {
LABEL_51:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v28 = (UnityEngine_Component_o *)v27->m_Items[3];
  if ( !v28 )
    goto LABEL_49;
  v29 = UnityEngine_Component__GetComponent_WebViewObject_(
          v28,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v30 = v3->fields.operationSortInfo;
  if ( !v30 || !v29 )
    goto LABEL_49;
  v31 = (System_String_o **)(v30->fields.sortKind == 26 ? &StringLiteral_16890/*"btn_bg_03"*/ : &StringLiteral_16891/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)v29, *v31, 0LL);
  useFilterButtonList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3->fields.useFilterButtonList;
  if ( !useFilterButtonList )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    useFilterButtonList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    current = v39.fields.current;
    if ( !v39.fields.current )
      sub_B170D4();
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v39.fields.current, 0LL);
    v34 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v34 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v34->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B170D4();
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v36 = v3->fields.operationSortInfo;
      if ( !v36 )
        sub_B170D4();
      v37 = ListViewSort__CheckSvtGroupFilter(v36, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v37, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__SetupButtonLayout(
        CoinRoomSortSelectManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  bool v8; // w1
  UnityEngine_GameObject_o *servantSortRoot; // x0
  System_Array_o *v10; // x20
  const MethodInfo *v11; // x2
  UIScrollView_o *scrollView; // x0
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_40F9A75 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
      v5);
    byte_40F9A75 = 1;
  }
  if ( kind == 1 )
  {
    servantSortRoot = this->fields.servantSortRoot;
    if ( servantSortRoot )
    {
      UnityEngine_GameObject__SetActive(servantSortRoot, 0, 0LL);
      servantFilterRoot = this->fields.servantFilterRoot;
      if ( servantFilterRoot )
      {
        v8 = 1;
        goto LABEL_11;
      }
    }
LABEL_14:
    sub_B170D4();
  }
  if ( kind )
    goto LABEL_12;
  v6 = this->fields.servantSortRoot;
  if ( !v6 )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(v6, 1, 0LL);
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_14;
  v8 = 0;
LABEL_11:
  UnityEngine_GameObject__SetActive(servantFilterRoot, v8, 0LL);
LABEL_12:
  v10 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 4LL, method);
  v13.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v10, v13, 0LL);
  CoinRoomSortSelectManager__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v10, v11);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall CoinRoomSortSelectManager__SetupFilterButtons(
        CoinRoomSortSelectManager_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *filterButtonList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x22
  System_Collections_Generic_List_T__o *All; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *v26; // x0
  Il2CppObject *current; // x21
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  bool v29; // w22
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ServantFilterButtonControl_OnClickFilterButton_o *v34; // x23
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_40F9A73 & 1) == 0 )
  {
    sub_B16FFC(&Method_CoinRoomSortSelectManager_OnClickFilterButton__, sort);
    sub_B16FFC(&Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v13);
    sub_B16FFC(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v14);
    sub_B16FFC(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v15);
    sub_B16FFC(&System_Predicate_ServantFilterButtonControl__TypeInfo, v16);
    byte_40F9A73 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  filterButtonList = this->fields.filterButtonList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_ServantFilterButtonControl__TypeInfo,
                                                                   sort,
                                                                   method,
                                                                   v3,
                                                                   v4);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)this,
    Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)filterButtonList,
                (System_Predicate_T__o *)v18,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.useFilterButtonList,
          (System_Int32_array **)All,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (v26 = this->fields.filterButtonList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v26,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    current = v35.fields.current;
    if ( !v35.fields.current )
      sub_B170D4();
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B170D4();
    v29 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v35.fields.current[1].monitor,
            (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v34 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B170CC(
                                                                ServantFilterButtonControl_OnClickFilterButton_TypeInfo,
                                                                v30,
                                                                v31,
                                                                v32,
                                                                v33);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v34,
      (Il2CppObject *)this,
      Method_CoinRoomSortSelectManager_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v34, v29, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall CoinRoomSortSelectManager__SetupUseFilterKindList(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v7; // x20
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v9; // x20
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v11; // x0

  if ( (byte_40F9A71 & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_40F9A71 = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_12;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  v7 = this->fields.useFilterKindList;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
  }
  if ( !v7
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
          (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (ClassFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList) == 0LL)
    || (v9 = this->fields.useFilterKindList,
        v10 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                               (System_Collections_Generic_List_Voice_BATTLE__o *)ClassFilterKindList,
                                                               (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v9)
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          v9,
          v10,
          (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (v11 = this->fields.useFilterKindList) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall CoinRoomSortSelectManager___SetupFilterButtons_b__53_0(
        CoinRoomSortSelectManager_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0

  if ( (byte_40F9A84 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, x);
    byte_40F9A84 = 1;
  }
  if ( !x || (useFilterKindList = this->fields.useFilterKindList) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
           (int32_t)x->fields.button,
           (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_40F9A6D & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, value);
    byte_40F9A6D = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CoinRoomSortSelectManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F9A6E & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, value);
    byte_40F9A6E = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CoinRoomSortSelectManager_o *)sub_B173C8(v7);
  CoinRoomSortSelectManager__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager_CallbackFunc___ctor(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
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
  sub_B16F98(
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
  if ( (byte_40F710C & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F710C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CoinRoomSortSelectManager_CallbackFunc__EndInvoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == this->fields.kind;
}