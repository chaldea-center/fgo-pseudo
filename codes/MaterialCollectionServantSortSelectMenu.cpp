void __fastcall MaterialCollectionServantSortSelectMenu___ctor(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
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

  if ( (byte_40FCBBC & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v9);
    byte_40FCBBC = 1;
  }
  this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.x = 0x41F4000000000000LL;
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


void __fastcall MaterialCollectionServantSortSelectMenu__Callback(
        MaterialCollectionServantSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialCollectionServantSortSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__Close(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionServantSortSelectMenu__Close_30117220(this, 0LL, v2);
}


void __fastcall MaterialCollectionServantSortSelectMenu__Close_30117220(
        MaterialCollectionServantSortSelectMenu_o *this,
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

  if ( (byte_40FCBAF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_MaterialCollectionServantSortSelectMenu_EndClose__, v10);
    byte_40FCBAF = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MaterialCollectionServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall MaterialCollectionServantSortSelectMenu__EndClose(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
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


void __fastcall MaterialCollectionServantSortSelectMenu__EndOpen(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall MaterialCollectionServantSortSelectMenu__Init(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__InitCategoryContainer(
        MaterialCollectionServantSortSelectMenu_o *this,
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
  MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_o *v27; // x21
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v30; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x23
  peRenderTexture_ChangeLayerObject_o *v32; // x21
  int v33; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-90h] BYREF
  MaterialCollectionServantSortSelectMenu_o *v36; // [xsp+48h] [xbp-68h]
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v36 = this;
  if ( (byte_40FCBAD & 1) == 0 )
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
    sub_B16FFC(&Method_MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__, v11);
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_B16FFC(
                                                          &MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_TypeInfo,
                                                          v12);
    byte_40FCBAD = 1;
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
      v27 = (MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_o *)sub_B170CC(
                                                                                 MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_TypeInfo,
                                                                                 v16,
                                                                                 v17,
                                                                                 v18,
                                                                                 v19);
      MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0___ctor(v27, 0LL);
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
        Method_MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
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


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickCancel(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FCBB4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCBB4 = 1;
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
    MaterialCollectionServantSortSelectMenu__Callback(this, 0, v3);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickClear(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  ListViewSort_FilterKind_array *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40FCBB5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FCBB5 = 1;
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
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickDecide(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  struct UIScrollView_o *servantFilterScrollView; // x8
  UIProgressBar_o *v4; // x0
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x2
  float value; // s0
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v9; // x2

  if ( (byte_40FCBB3 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCBB3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantFilterScrollView = this->fields.servantFilterScrollView;
    if ( !servantFilterScrollView )
      goto LABEL_13;
    v4 = *(UIProgressBar_o **)&servantFilterScrollView->fields.showScrollBars;
    if ( !v4 )
      goto LABEL_13;
    operationSortInfo = this->fields.operationSortInfo;
    value = UIProgressBar__get_value(v4, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialCollectionServantSortSelectMenu__SetButtenEnable(this, 0, v6);
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
    MaterialCollectionServantSortSelectMenu__Callback(this, 1, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__OnClickFilterButton(
        MaterialCollectionServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40FCBBA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&filterKind);
    byte_40FCBBA = 1;
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
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickReset(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  ListViewSort_FilterKind_array *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40FCBB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FCBB6 = 1;
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
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortId(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40FCBB7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCBB7 = 1;
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
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v3);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortLimitCount(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40FCBB9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCBB9 = 1;
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
    operationSortInfo->fields.sortKind = 9;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v3);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortRarity(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40FCBB8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCBB8 = 1;
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
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__Open(
        MaterialCollectionServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *callback,
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
  UnityEngine_GameObject_o *gameObject; // x0
  struct ListViewSort_o **p_baseSortInfo; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w8
  struct ListViewSort_o *v36; // x8
  int v37; // w9
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v47; // x0
  UILabel_o *title2Label; // x21
  System_String_o *v49; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o *v51; // x0
  UILabel_o *explanationLabel2; // x21
  System_String_o *v53; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v55; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v57; // x0
  UILabel_o *clearLabel; // x21
  System_String_o *v59; // x0
  UILabel_o *resetLabel; // x21
  System_String_o *v61; // x0
  ListViewSort_o *operationSortInfo; // x0
  UILabel_o *sort1Label; // x21
  System_String_o *SortKindText; // x0
  ListViewSort_o *v65; // x0
  UILabel_o *sort2Label; // x21
  System_String_o *v67; // x0
  ListViewSort_o *v68; // x0
  UILabel_o *sort3Label; // x21
  System_String_o *v70; // x0
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  struct UIScrollView_o *servantFilterScrollView; // x9
  UIProgressBar_o *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Action_o *v82; // x20

  if ( (byte_40FCBAB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&ListViewSort_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_MaterialCollectionServantSortSelectMenu_EndOpen__, v14);
    sub_B16FFC(&StringLiteral_11890, v15);
    sub_B16FFC(&StringLiteral_11759, v16);
    sub_B16FFC(&StringLiteral_11763, v17);
    sub_B16FFC(&StringLiteral_11892, v18);
    sub_B16FFC(&StringLiteral_11760, v19);
    sub_B16FFC(&StringLiteral_11764, v20);
    sub_B16FFC(&StringLiteral_11891, v21);
    sub_B16FFC(&StringLiteral_11765, v22);
    byte_40FCBAB = 1;
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
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    p_baseSortInfo = &this->fields.baseSortInfo;
    this->fields.baseSortInfo = sort;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v35 = this->fields.kind;
    if ( v35 == 3 )
    {
      v36 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_33;
      v37 = 3;
    }
    else
    {
      if ( v35 != 1 )
      {
LABEL_12:
        baseSortInfo = this->fields.baseSortInfo;
        v39 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v31, v32, v33, v34);
        ListViewSort___ctor_30209040(v39, baseSortInfo, 0LL);
        this->fields.operationSortInfo = v39;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v39,
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
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_11891, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, v47, 0LL);
          title2Label = this->fields.title2Label;
          v49 = LocalizationManager__Get((System_String_o *)StringLiteral_11892, 0LL);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, v49, 0LL);
            explanationLabel = this->fields.explanationLabel;
            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_11764, 0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, v51, 0LL);
              explanationLabel2 = this->fields.explanationLabel2;
              v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11765, 0LL);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, v53, 0LL);
                decideLabel = this->fields.decideLabel;
                v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11763, 0LL);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, v55, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_11759, 0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, v57, 0LL);
                    clearLabel = this->fields.clearLabel;
                    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11760, 0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, v59, 0LL);
                      resetLabel = this->fields.resetLabel;
                      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_11890, 0LL);
                      if ( resetLabel )
                      {
                        UILabel__set_text(resetLabel, v61, 0LL);
                        operationSortInfo = this->fields.operationSortInfo;
                        if ( operationSortInfo )
                        {
                          sort1Label = this->fields.sort1Label;
                          SortKindText = ListViewSort__GetSortKindText(operationSortInfo, 27, 0LL);
                          if ( sort1Label )
                          {
                            UILabel__set_text(sort1Label, SortKindText, 0LL);
                            v65 = this->fields.operationSortInfo;
                            if ( v65 )
                            {
                              sort2Label = this->fields.sort2Label;
                              v67 = ListViewSort__GetSortKindText(v65, 2, 0LL);
                              if ( sort2Label )
                              {
                                UILabel__set_text(sort2Label, v67, 0LL);
                                v68 = this->fields.operationSortInfo;
                                if ( v68 )
                                {
                                  sort3Label = this->fields.sort3Label;
                                  v70 = ListViewSort__GetSortKindText(v68, 9, 0LL);
                                  if ( sort3Label )
                                  {
                                    UILabel__set_text(sort3Label, v70, 0LL);
                                    MaterialCollectionServantSortSelectMenu__SetupUseFilterKindList(this, v71);
                                    MaterialCollectionServantSortSelectMenu__SetupFilterButtons(
                                      this,
                                      this->fields.operationSortInfo,
                                      v72);
                                    MaterialCollectionServantSortSelectMenu__SetupButtonLayout(
                                      this,
                                      this->fields.kind,
                                      v73);
                                    MaterialCollectionServantSortSelectMenu__SetButtenEnable(this, 1, v74);
                                    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v75);
                                    servantFilterScrollView = this->fields.servantFilterScrollView;
                                    if ( servantFilterScrollView )
                                    {
                                      if ( *p_baseSortInfo )
                                      {
                                        v77 = *(UIProgressBar_o **)&servantFilterScrollView->fields.showScrollBars;
                                        if ( v77 )
                                        {
                                          UIProgressBar__set_value(v77, (*p_baseSortInfo)->fields.scrollBarValue, 0LL);
                                          this->fields.state = 1;
                                          v82 = (System_Action_o *)sub_B170CC(
                                                                     System_Action_TypeInfo,
                                                                     v78,
                                                                     v79,
                                                                     v80,
                                                                     v81);
                                          System_Action___ctor(
                                            v82,
                                            (Il2CppObject *)this,
                                            Method_MaterialCollectionServantSortSelectMenu_EndOpen__,
                                            0LL);
                                          BaseDialog__Open((BaseDialog_o *)this, v82, 0, 0LL);
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
LABEL_33:
        sub_B170D4();
      }
      v36 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_33;
      v37 = 1;
    }
    v36->fields.listViewKind = v37;
    goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__SetButtenEnable(
        MaterialCollectionServantSortSelectMenu_o *this,
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
  UnityEngine_Behaviour_o *sort1Button; // x0
  UnityEngine_Behaviour_o *sort2Button; // x0
  UnityEngine_Behaviour_o *sort3Button; // x0
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FCBB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_40FCBB0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  cancelButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(cancelButton, isEnable, 0LL);
  clearButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
  if ( !clearButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(clearButton, isEnable, 0LL);
  resetButton = (UnityEngine_Behaviour_o *)this->fields.resetButton;
  if ( !resetButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(resetButton, isEnable, 0LL);
  sort1Button = (UnityEngine_Behaviour_o *)this->fields.sort1Button;
  if ( !sort1Button
    || (UnityEngine_Behaviour__set_enabled(sort1Button, isEnable, 0LL),
        (sort2Button = (UnityEngine_Behaviour_o *)this->fields.sort2Button) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(sort2Button, isEnable, 0LL),
        (sort3Button = (UnityEngine_Behaviour_o *)this->fields.sort3Button) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(sort3Button, isEnable, 0LL),
        (useFilterButtonList = this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B170D4();
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v16.fields.current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetButtenSelect(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Component_o *sort1Button; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v14; // x8
  UnityEngine_Component_o *sort2Button; // x0
  WebViewObject_o *v16; // x0
  struct ListViewSort_o *v17; // x8
  System_String_o **v18; // x8
  UnityEngine_Component_o *sort3Button; // x0
  WebViewObject_o *v20; // x0
  struct ListViewSort_o *v21; // x8
  __int64 *v22; // x8
  struct System_Collections_Generic_List_ServantFilterButtonControl__o *useFilterButtonList; // x0
  Il2CppObject *current; // x20
  FilterKindList_c *v25; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  ListViewSort_o *v27; // x0
  bool v28; // w0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FCBB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v5);
    sub_B16FFC(&FilterKindList_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v8);
    sub_B16FFC(&StringLiteral_16891, v9);
    sub_B16FFC(&StringLiteral_16890, v10);
    byte_40FCBB2 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  sort1Button = (UnityEngine_Component_o *)this->fields.sort1Button;
  if ( !sort1Button )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              sort1Button,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = this->fields.operationSortInfo;
  if ( !operationSortInfo || !Component_WebViewObject )
    goto LABEL_36;
  v14 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_16890 : &StringLiteral_16891);
  UISprite__set_spriteName((UISprite_o *)Component_WebViewObject, *v14, 0LL);
  sort2Button = (UnityEngine_Component_o *)this->fields.sort2Button;
  if ( !sort2Button )
    goto LABEL_36;
  v16 = UnityEngine_Component__GetComponent_WebViewObject_(
          sort2Button,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v17 = this->fields.operationSortInfo;
  if ( !v17 || !v16 )
    goto LABEL_36;
  v18 = (System_String_o **)(v17->fields.sortKind == 2 ? &StringLiteral_16890 : &StringLiteral_16891);
  if ( (UISprite__set_spriteName((UISprite_o *)v16, *v18, 0LL),
        (sort3Button = (UnityEngine_Component_o *)this->fields.sort3Button) == 0LL)
    || (v20 = UnityEngine_Component__GetComponent_WebViewObject_(
                sort3Button,
                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v21 = this->fields.operationSortInfo) == 0LL)
    || !v20
    || (v21->fields.sortKind != 9 ? (v22 = &StringLiteral_16891) : (v22 = &StringLiteral_16890),
        UISprite__set_spriteName((UISprite_o *)v20, (System_String_o *)*v22, 0LL),
        (useFilterButtonList = this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_36:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)useFilterButtonList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    current = v30.fields.current;
    if ( !v30.fields.current )
      sub_B170D4();
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v30.fields.current, 0LL);
    v25 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v25 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v25->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B170D4();
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v27 = this->fields.operationSortInfo;
      if ( !v27 )
        sub_B170D4();
      v28 = ListViewSort__CheckSvtGroupFilter(v27, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v28, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__SetupButtonLayout(
        MaterialCollectionServantSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  UnityEngine_GameObject_o *commandCodeAndEquipFilterRoot; // x0
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  struct UIGrid_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  __int64 v12; // x2
  System_Array_o *v13; // x20
  const MethodInfo *v14; // x2
  UIScrollView_o *servantFilterScrollView; // x0
  UnityEngine_Component_o *sort3Button; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o *sortButtonGrid; // x0
  UnityEngine_GameObject_o *v19; // x0
  System_RuntimeFieldHandle_o v20; // 0:w1.4

  if ( (byte_40FCBB1 & 1) == 0 )
  {
    sub_B16FFC(&ListViewSort_FilterCategoryKind___TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__6264D1E09B01537F0D39D6A65A2204D7B37920D11B1193137B3A264A68190205,
      v5);
    byte_40FCBB1 = 1;
  }
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
  commandCodeAndEquipFilterRoot = this->fields.commandCodeAndEquipFilterRoot;
  if ( !commandCodeAndEquipFilterRoot )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(commandCodeAndEquipFilterRoot, 0, 0LL);
  if ( kind == 3 || kind == 1 )
  {
    sort3Button = (UnityEngine_Component_o *)this->fields.sort3Button;
    if ( !sort3Button )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject(sort3Button, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    sortButtonGrid = this->fields.sortButtonGrid;
    if ( !sortButtonGrid )
      goto LABEL_20;
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))sortButtonGrid->klass->vtable._8_Reposition.method)(
      sortButtonGrid,
      sortButtonGrid->klass->vtable._9_ResetPosition.methodPtr);
    v19 = this->fields.commandCodeAndEquipFilterRoot;
    if ( !v19 )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(v19, 1, 0LL);
  }
  else if ( !kind )
  {
    v8 = (UnityEngine_Component_o *)this->fields.sort3Button;
    if ( v8 )
    {
      v9 = UnityEngine_Component__get_gameObject(v8, 0LL);
      if ( v9 )
      {
        UnityEngine_GameObject__SetActive(v9, 1, 0LL);
        v10 = this->fields.sortButtonGrid;
        if ( v10 )
        {
          ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v10->klass->vtable._8_Reposition.method)(
            v10,
            v10->klass->vtable._9_ResetPosition.methodPtr);
          v11 = this->fields.servantFilterRoot;
          if ( v11 )
          {
            UnityEngine_GameObject__SetActive(v11, 1, 0LL);
            v13 = (System_Array_o *)sub_B17014(ListViewSort_FilterCategoryKind___TypeInfo, 5LL, v12);
            v20.fields.value = Field__PrivateImplementationDetails__6264D1E09B01537F0D39D6A65A2204D7B37920D11B1193137B3A264A68190205;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v13, v20, 0LL);
            MaterialCollectionServantSortSelectMenu__InitCategoryContainer(
              this,
              (ListViewSort_FilterCategoryKind_array *)v13,
              v14);
            servantFilterScrollView = this->fields.servantFilterScrollView;
            if ( servantFilterScrollView )
            {
              UIScrollView__ResetPosition(servantFilterScrollView, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetupFilterButtons(
        MaterialCollectionServantSortSelectMenu_o *this,
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

  if ( (byte_40FCBAE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v11);
    sub_B16FFC(&Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__, v12);
    sub_B16FFC(&Method_MaterialCollectionServantSortSelectMenu__SetupFilterButtons_b__43_0__, v13);
    sub_B16FFC(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v14);
    sub_B16FFC(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v15);
    sub_B16FFC(&System_Predicate_ServantFilterButtonControl__TypeInfo, v16);
    byte_40FCBAE = 1;
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
    Method_MaterialCollectionServantSortSelectMenu__SetupFilterButtons_b__43_0__,
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
      Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v34, v29, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetupUseFilterKindList(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0
  int32_t kind; // w8
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v9; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v10; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *ClassFilterKindList; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v12; // x20
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v14; // x0
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *v15; // x0

  if ( (byte_40FCBAC & 1) == 0 )
  {
    sub_B16FFC(&FilterKindList_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_40FCBAC = 1;
  }
  useFilterKindList = this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_19;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)useFilterKindList,
    (const MethodInfo_2F138D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  kind = this->fields.kind;
  if ( kind == 3 || kind == 1 )
  {
    v15 = this->fields.useFilterKindList;
    if ( !v15 )
      goto LABEL_19;
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      (System_Collections_Generic_List_VoiceCondType_Type__o *)v15,
      49,
      (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  }
  else if ( !kind )
  {
    v9 = this->fields.useFilterKindList;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    }
    if ( v9 )
    {
      System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
        (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      v10 = this->fields.useFilterKindList;
      if ( v10 )
      {
        System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          v10,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
          (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
        ClassFilterKindList = FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
        if ( ClassFilterKindList )
        {
          v12 = this->fields.useFilterKindList;
          v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                                                 (System_Collections_Generic_List_Voice_BATTLE__o *)ClassFilterKindList,
                                                                 (const MethodInfo_2F155D4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
          if ( v12 )
          {
            System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
              v12,
              v13,
              (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
            v14 = this->fields.useFilterKindList;
            if ( v14 )
            {
              System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
                v14,
                (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CollectionStateFilterKindList,
                (const MethodInfo_2F1371C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_B170D4();
  }
}


bool __fastcall MaterialCollectionServantSortSelectMenu___SetupFilterButtons_b__43_0(
        MaterialCollectionServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewSort_FilterKind__o *useFilterKindList; // x0

  if ( (byte_40FCBBD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, x);
    byte_40FCBBD = 1;
  }
  if ( !x || (useFilterKindList = this->fields.useFilterKindList) == 0LL )
    sub_B170D4();
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
           (int32_t)x->fields.button,
           (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall MaterialCollectionServantSortSelectMenu__add_callbackFunc(
        MaterialCollectionServantSortSelectMenu_o *this,
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCollectionServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCollectionServantSortSelectMenu_o *v10; // x0
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FCBA9 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FCBA9 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialCollectionServantSortSelectMenu_CallbackFunc_c *)v7->klass != MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  MaterialCollectionServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall MaterialCollectionServantSortSelectMenu__get_closeBtnPath(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FCBBB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414, method);
    byte_40FCBBB = 1;
  }
  return (System_String_o *)StringLiteral_15414;
}


void __fastcall MaterialCollectionServantSortSelectMenu__remove_callbackFunc(
        MaterialCollectionServantSortSelectMenu_o *this,
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct MaterialCollectionServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MaterialCollectionServantSortSelectMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FCBAA & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_40FCBAA = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialCollectionServantSortSelectMenu_CallbackFunc_c *)v7->klass != MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  MaterialCollectionServantSortSelectMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc__BeginInvoke(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F6962 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F6962 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o **v7; // x25
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
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v18; // x8
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
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o **)(v3 + 32);
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


void __fastcall MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0___ctor(
        MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0___InitCategoryContainer_b__0(
        MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return *(&x->fields.categoryKind + 1) == this->fields.kind;
}