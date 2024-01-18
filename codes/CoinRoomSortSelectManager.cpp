void __fastcall CoinRoomSortSelectManager___ctor(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
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

  if ( (byte_41888A0 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v6);
    byte_41888A0 = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CoinRoomSortSelectManager_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__Close(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CoinRoomSortSelectManager__Close_26783056(this, 0LL, v2);
}


void __fastcall CoinRoomSortSelectManager__Close_26783056(
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
  System_Action_o *v11; // x20

  if ( (byte_418888D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_CoinRoomSortSelectManager_EndClose__, v10);
    byte_418888D = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  CoinRoomSortSelectManager___c__DisplayClass52_0_o *v24; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *servantFilterCategoryContainerList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x23
  peRenderTexture_ChangeLayerObject_o *v27; // x21
  __int64 v28; // x0
  int v29; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-90h] BYREF
  CoinRoomSortSelectManager_o *v32; // [xsp+48h] [xbp-68h]
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v32 = this;
  if ( (byte_418888F & 1) == 0 )
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
    sub_B2C35C(&Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__, v11);
    this = (CoinRoomSortSelectManager_o *)sub_B2C35C(&CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo, v12);
    byte_418888F = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !categoryKindKist )
    goto LABEL_27;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
    goto LABEL_28;
  this = (CoinRoomSortSelectManager_o *)v32->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_B2C434(this, categoryKindKist);
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
      v24 = (CoinRoomSortSelectManager___c__DisplayClass52_0_o *)sub_B2C42C(CoinRoomSortSelectManager___c__DisplayClass52_0_TypeInfo);
      CoinRoomSortSelectManager___c__DisplayClass52_0___ctor(v24, 0LL);
      if ( v23 >= categoryKindKist->max_length )
        break;
      if ( !v24 )
        goto LABEL_27;
      v24->fields.kind = categoryKindKist->m_Items[v23 + 1];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v32->fields.servantFilterCategoryContainerList;
      v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v26,
        (Il2CppObject *)v24,
        Method_CoinRoomSortSelectManager___c__DisplayClass52_0__InitCategoryContainer_b__0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v27 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v26,
              (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (CoinRoomSortSelectManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_27;
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
        return;
    }
LABEL_28:
    v28 = sub_B2C460(this);
    sub_B2C400(v28, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickCancel(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4188895 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188895 = 1;
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
  __int64 v4; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4188896 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4188896 = 1;
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
    CoinRoomSortSelectManager__SetButtenSelect(this, v7);
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
  if ( (byte_4188894 & 1) == 0 )
  {
    this = (CoinRoomSortSelectManager_o *)sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188894 = 1;
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
      sub_B2C434(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    CoinRoomSortSelectManager__Callback(v2, 1, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager__OnClickFilterButton(
        CoinRoomSortSelectManager_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_418889D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&filterKind);
    byte_418889D = 1;
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
    CoinRoomSortSelectManager__SetButtenSelect(this, v7);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickHelp(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *helpButton; // x0
  System_Action_o *v6; // x20

  if ( (byte_418889E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CoinRoomSortSelectManager_OnClickHelpClose__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418889E = 1;
  }
  if ( this->fields.state == 2 )
  {
    helpButton = (UnityEngine_Component_o *)this->fields.helpButton;
    if ( !helpButton
      || (helpButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(helpButton, 0LL)) == 0LL )
    {
      sub_B2C434(helpButton, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_CoinRoomSortSelectManager_OnClickHelpClose__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 32, v6, 0LL);
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
    sub_B2C434(helpButton, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)helpButton, 1, 0LL);
}


void __fastcall CoinRoomSortSelectManager__OnClickReset(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4188897 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4188897 = 1;
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
    CoinRoomSortSelectManager__SetButtenSelect(this, v7);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSmartSort(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *smartSortBtnSprite; // x0
  __int64 v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  struct ListViewSort_o *v8; // x8
  __int64 *v9; // x8

  if ( (byte_418889C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, v3);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v4);
    byte_418889C = 1;
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
      || (operationSortInfo->fields.isSmartSort ^= 1u, (v8 = this->fields.operationSortInfo) == 0LL)
      || (smartSortBtnSprite = this->fields.smartSortBtnSprite) == 0LL )
    {
      sub_B2C434(smartSortBtnSprite, v6);
    }
    if ( v8->fields.isSmartSort )
      v9 = &StringLiteral_17006/*"btn_on"*/;
    else
      v9 = &StringLiteral_17005/*"btn_off"*/;
    UISprite__set_spriteName(smartSortBtnSprite, (System_String_o *)*v9, 0LL);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortAmount(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_418889A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418889A = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 14;
    CoinRoomSortSelectManager__SetButtenSelect(this, v4);
  }
}


void __fastcall CoinRoomSortSelectManager__OnClickSortId(CoinRoomSortSelectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_4188898 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188898 = 1;
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
      sub_B2C434(v3, v4);
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

  if ( (byte_4188899 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188899 = 1;
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
      sub_B2C434(v3, v4);
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

  if ( (byte_418889B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418889B = 1;
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
      sub_B2C434(v3, v4);
    operationSortInfo->fields.sortKind = 26;
    CoinRoomSortSelectManager__SetButtenSelect(this, v4);
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

  if ( (byte_418889F & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15482/*"Window/FilterList/CancelButton"*/, v3);
    sub_B2C35C(&StringLiteral_15489/*"Window/SortList/CancelButton"*/, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418889F = 1;
  }
  kind = this->fields.kind;
  v7 = &StringLiteral_1/*""*/;
  if ( kind == 1 )
    v7 = (void **)&StringLiteral_15482/*"Window/FilterList/CancelButton"*/;
  if ( kind )
    v8 = (System_String_o **)v7;
  else
    v8 = (System_String_o **)&StringLiteral_15489/*"Window/SortList/CancelButton"*/;
  v9 = *v8;
  if ( !System_String__IsNullOrEmpty(*v8, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn_21105064(transform, v9, 0LL);
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
  __int64 v28; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct ListViewSort_o *baseSortInfo; // x8
  ListViewSort_o *v37; // x21
  ListViewSort_o *v38; // x22
  struct ListViewSort_o **p_operationSortInfo; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
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
  UILabel_o *v59; // x22
  struct UILabel_array *v60; // x8
  UILabel_o *v61; // x22
  struct UILabel_array *v62; // x8
  UILabel_o *v63; // x22
  struct UILabel_array *v64; // x8
  UILabel_o *v65; // x21
  const MethodInfo *v66; // x1
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x1
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v72; // x8
  struct UIScrollView_o *scrollView; // x8
  System_Action_o *v74; // x20
  __int64 v75; // x0

  if ( (byte_418888C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_CoinRoomSortSelectManager_EndOpen__, v12);
    sub_B2C35C(&ListViewSort_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_11940/*"SERVANT_SORT_RESET"*/, v15);
    sub_B2C35C(&StringLiteral_12274/*"SORT_WINDOW_TITLE"*/, v16);
    sub_B2C35C(&StringLiteral_17006/*"btn_on"*/, v17);
    sub_B2C35C(&StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, v18);
    sub_B2C35C(&StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, v19);
    sub_B2C35C(&StringLiteral_3148/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/, v20);
    sub_B2C35C(&StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, v21);
    sub_B2C35C(&StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, v22);
    sub_B2C35C(&StringLiteral_17005/*"btn_off"*/, v23);
    sub_B2C35C(&StringLiteral_3149/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/, v24);
    sub_B2C35C(&StringLiteral_11814/*"SERVANT_SORT_EXPLANATION"*/, v25);
    sub_B2C35C(&StringLiteral_11815/*"SERVANT_SORT_EXPLANATION2"*/, v26);
    byte_418888C = 1;
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
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      baseSortInfo = this->fields.baseSortInfo;
      if ( baseSortInfo )
      {
        baseSortInfo->fields.listViewKind = 5;
        v37 = this->fields.baseSortInfo;
        v38 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
        ListViewSort___ctor_33914748(v38, v37, 0LL);
        p_operationSortInfo = &this->fields.operationSortInfo;
        this->fields.operationSortInfo = v38;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v38,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        titleLabel = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12274/*"SORT_WINDOW_TITLE"*/, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
          title2Label = this->fields.title2Label;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, (System_String_o *)gameObject, 0LL);
            explanationLabel = this->fields.explanationLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11814/*"SERVANT_SORT_EXPLANATION"*/,
                                                       0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
              explanationLabel2 = this->fields.explanationLabel2;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11815/*"SERVANT_SORT_EXPLANATION2"*/,
                                                         0LL);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0LL);
                decideLabel = this->fields.decideLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/,
                                                             0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                    sortDecideLabel = this->fields.sortDecideLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/,
                                                               0LL);
                    if ( sortDecideLabel )
                    {
                      UILabel__set_text(sortDecideLabel, (System_String_o *)gameObject, 0LL);
                      sortCancelLabel = this->fields.sortCancelLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/,
                                                                 0LL);
                      if ( sortCancelLabel )
                      {
                        UILabel__set_text(sortCancelLabel, (System_String_o *)gameObject, 0LL);
                        clearLabel = this->fields.clearLabel;
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/,
                                                                   0LL);
                        if ( clearLabel )
                        {
                          UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
                          resetLabel = this->fields.resetLabel;
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_11940/*"SERVANT_SORT_RESET"*/,
                                                                     0LL);
                          if ( resetLabel )
                          {
                            UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0LL);
                            smartSortDetail_1 = this->fields.smartSortDetail_1;
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_3148/*"COIN_ROOM_SMART_SORT_DETAIL_1"*/,
                                                                       0LL);
                            if ( smartSortDetail_1 )
                            {
                              UILabel__set_text(smartSortDetail_1, (System_String_o *)gameObject, 0LL);
                              smartSortDetail_2 = this->fields.smartSortDetail_2;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_3149/*"COIN_ROOM_SMART_SORT_DETAIL_2"*/,
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
                                  v59 = sortLabel->m_Items[0];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             27,
                                                                             0LL);
                                  if ( !v59 )
                                    goto LABEL_46;
                                  UILabel__set_text(v59, (System_String_o *)gameObject, 0LL);
                                  v60 = this->fields.sortLabel;
                                  if ( !v60 )
                                    goto LABEL_46;
                                  if ( v60->max_length <= 1 )
                                    goto LABEL_47;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_46;
                                  v61 = v60->m_Items[1];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             2,
                                                                             0LL);
                                  if ( !v61 )
                                    goto LABEL_46;
                                  UILabel__set_text(v61, (System_String_o *)gameObject, 0LL);
                                  v62 = this->fields.sortLabel;
                                  if ( !v62 )
                                    goto LABEL_46;
                                  if ( v62->max_length <= 2 )
                                    goto LABEL_47;
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( !*p_operationSortInfo )
                                    goto LABEL_46;
                                  v63 = v62->m_Items[2];
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             14,
                                                                             0LL);
                                  if ( !v63 )
                                    goto LABEL_46;
                                  UILabel__set_text(v63, (System_String_o *)gameObject, 0LL);
                                  v64 = this->fields.sortLabel;
                                  if ( !v64 )
                                    goto LABEL_46;
                                  if ( v64->max_length <= 3 )
                                  {
LABEL_47:
                                    v75 = sub_B2C460(gameObject);
                                    sub_B2C400(v75, 0LL);
                                  }
                                  gameObject = (UnityEngine_GameObject_o *)*p_operationSortInfo;
                                  if ( *p_operationSortInfo )
                                  {
                                    v65 = v64->m_Items[3];
                                    gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                               (ListViewSort_o *)gameObject,
                                                                               26,
                                                                               0LL);
                                    if ( v65 )
                                    {
                                      UILabel__set_text(v65, (System_String_o *)gameObject, 0LL);
                                      CoinRoomSortSelectManager__SetupUseFilterKindList(this, v66);
                                      CoinRoomSortSelectManager__SetupFilterButtons(
                                        this,
                                        this->fields.operationSortInfo,
                                        v67);
                                      CoinRoomSortSelectManager__SetupButtonLayout(this, this->fields.kind, v68);
                                      CoinRoomSortSelectManager__SetButtenEnable(this, 1, v69);
                                      CoinRoomSortSelectManager__SetButtenSelect(this, v70);
                                      operationSortInfo = this->fields.operationSortInfo;
                                      if ( operationSortInfo )
                                      {
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.smartSortBtnSprite;
                                        if ( gameObject )
                                        {
                                          v72 = (System_String_o **)(operationSortInfo->fields.isSmartSort
                                                                   ? &StringLiteral_17006/*"btn_on"*/
                                                                   : &StringLiteral_17005/*"btn_off"*/);
                                          UISprite__set_spriteName((UISprite_o *)gameObject, *v72, 0LL);
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
                                                v74 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                                System_Action___ctor(
                                                  v74,
                                                  (Il2CppObject *)this,
                                                  Method_CoinRoomSortSelectManager_EndOpen__,
                                                  0LL);
                                                BaseDialog__Open((BaseDialog_o *)this, v74, 0, 0LL);
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
    sub_B2C434(gameObject, v28);
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
  __int64 v14; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4188891 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_4188891 = 1;
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
    sub_B2C434(decideButton, isEnable);
  }
  if ( v12->max_length <= 3 )
  {
LABEL_27:
    v14 = sub_B2C460(decideButton);
    sub_B2C400(v14, 0LL);
  }
  decideButton = (UnityEngine_Behaviour_o *)v12->m_Items[3];
  if ( !decideButton )
    goto LABEL_26;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList;
  if ( !decideButton )
    goto LABEL_26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v15.fields.current )
      sub_B2C434(0LL, v13);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v15.fields.current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
  Il2CppObject *current; // x20
  __int64 v26; // x1
  FilterKindList_c *v27; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v29; // x1
  ListViewSort_o *v30; // x0
  bool v31; // w0
  __int64 v32; // x0
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4188893 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v5);
    sub_B2C35C(&FilterKindList_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v8);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v9);
    this = (CoinRoomSortSelectManager_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v10);
    byte_4188893 = 1;
  }
  memset(&v34, 0, sizeof(v34));
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
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = v2->fields.operationSortInfo;
  if ( !operationSortInfo || !this )
    goto LABEL_49;
  v13 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_16956/*"btn_bg_03"*/ : &StringLiteral_16957/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v13, 0LL);
  v14 = v2->fields.sortButton;
  if ( !v14 )
    goto LABEL_49;
  if ( v14->max_length <= 1 )
    goto LABEL_51;
  this = (CoinRoomSortSelectManager_o *)v14->m_Items[1];
  if ( !this )
    goto LABEL_49;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v15 = v2->fields.operationSortInfo;
  if ( !v15 || !this )
    goto LABEL_49;
  v16 = (System_String_o **)(v15->fields.sortKind == 2 ? &StringLiteral_16956/*"btn_bg_03"*/ : &StringLiteral_16957/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v16, 0LL);
  v17 = v2->fields.sortButton;
  if ( !v17 )
    goto LABEL_49;
  if ( v17->max_length <= 2 )
    goto LABEL_51;
  if ( (this = (CoinRoomSortSelectManager_o *)v17->m_Items[2]) == 0LL
    || (this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                (UnityEngine_Component_o *)this,
                                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v18 = v2->fields.operationSortInfo) == 0LL)
    || !this
    || (v18->fields.sortKind != 14 ? (v19 = &StringLiteral_16957/*"btn_bg_04"*/) : (v19 = &StringLiteral_16956/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v19, 0LL),
        (v20 = v2->fields.sortButton) == 0LL) )
  {
LABEL_49:
    sub_B2C434(this, method);
  }
  if ( v20->max_length <= 3 )
  {
LABEL_51:
    v32 = sub_B2C460(this);
    sub_B2C400(v32, 0LL);
  }
  this = (CoinRoomSortSelectManager_o *)v20->m_Items[3];
  if ( !this )
    goto LABEL_49;
  this = (CoinRoomSortSelectManager_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                          (UnityEngine_Component_o *)this,
                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v21 = v2->fields.operationSortInfo;
  if ( !v21 || !this )
    goto LABEL_49;
  v22 = (System_String_o **)(v21->fields.sortKind == 26 ? &StringLiteral_16956/*"btn_bg_03"*/ : &StringLiteral_16957/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)this, *v22, 0LL);
  this = (CoinRoomSortSelectManager_o *)v2->fields.useFilterButtonList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v34 = v33;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v23 )
      break;
    current = v34.fields.current;
    if ( !v34.fields.current )
      sub_B2C434(v23, v24);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v34.fields.current, 0LL);
    v27 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v27 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v27->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B2C434(0LL, v26);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v30 = v2->fields.operationSortInfo;
      if ( !v30 )
        sub_B2C434(0LL, v29);
      v31 = ListViewSort__CheckSvtGroupFilter(v30, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v31, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
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
  System_Array_o *v8; // x20
  const MethodInfo *v9; // x2
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_4188892 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
      v5);
    byte_4188892 = 1;
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
    sub_B2C434(servantSortRoot, *(_QWORD *)&kind);
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
  v8 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 4LL);
  v10.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v8, v10, 0LL);
  CoinRoomSortSelectManager__InitCategoryContainer(this, (ListViewSort_FilterCategoryKind_array *)v8, v9);
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

  if ( (byte_4188890 & 1) == 0 )
  {
    sub_B2C35C(&Method_CoinRoomSortSelectManager_OnClickFilterButton__, sort);
    sub_B2C35C(&Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v11);
    sub_B2C35C(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v12);
    sub_B2C35C(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v13);
    sub_B2C35C(&System_Predicate_ServantFilterButtonControl__TypeInfo, v14);
    byte_4188890 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  filterButtonList = this->fields.filterButtonList;
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)this,
    Method_CoinRoomSortSelectManager__SetupFilterButtons_b__53_0__,
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
      Method_CoinRoomSortSelectManager_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v31, v30, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall CoinRoomSortSelectManager__SetupUseFilterKindList(
        CoinRoomSortSelectManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v7; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v8; // x20

  if ( (byte_418888E & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v5);
    byte_418888E = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_12;
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
  if ( !v7
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
          (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList) == 0LL)
    || (v8 = this->fields.useFilterKindList,
        useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray((System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList, (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
        !v8)
    || (System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
          (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__),
        (useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList) == 0LL) )
  {
LABEL_12:
    sub_B2C434(useFilterKindList, method);
  }
  System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
    (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
    (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
    (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
}


bool __fastcall CoinRoomSortSelectManager___SetupFilterButtons_b__53_0(
        CoinRoomSortSelectManager_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  CoinRoomSortSelectManager_o *v4; // x20

  v4 = this;
  if ( (byte_41888A1 & 1) == 0 )
  {
    this = (CoinRoomSortSelectManager_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                            x);
    byte_41888A1 = 1;
  }
  if ( !x || (this = (CoinRoomSortSelectManager_o *)v4->fields.useFilterKindList) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_418888A & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, value);
    byte_418888A = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CoinRoomSortSelectManager_o *)sub_B2C728(v7);
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

  if ( (byte_418888B & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomSortSelectManager_CallbackFunc_TypeInfo, value);
    byte_418888B = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CoinRoomSortSelectManager_o *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184F15 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4184F15 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CoinRoomSortSelectManager_CallbackFunc__EndInvoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomSortSelectManager_CallbackFunc__Invoke(
        CoinRoomSortSelectManager_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CoinRoomSortSelectManager_CallbackFunc_o **v8; // x25
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
  CoinRoomSortSelectManager_CallbackFunc_o *v20; // x8
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
  CoinRoomSortSelectManager_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (CoinRoomSortSelectManager_CallbackFunc_o **)(v4 + 32);
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
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == this->fields.kind;
}