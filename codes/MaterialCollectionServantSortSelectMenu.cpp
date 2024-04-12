void __fastcall MaterialCollectionServantSortSelectMenu___ctor(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
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

  if ( (byte_42B3717 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_42B3717 = 1;
  }
  this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.x = 0x41F4000000000000LL;
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  this->fields.useFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.useFilterKindList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__);
  this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)v10;
  sub_B52920(
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialCollectionServantSortSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__Close(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionServantSortSelectMenu__Close_31520128(this, 0LL, v2);
}


void __fastcall MaterialCollectionServantSortSelectMenu__Close_31520128(
        MaterialCollectionServantSortSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B370A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MaterialCollectionServantSortSelectMenu_EndClose__);
    byte_42B370A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MaterialCollectionServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_o *v15; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *servantFilterCategoryContainerList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x23
  peRenderTexture_ChangeLayerObject_o *v18; // x21
  __int64 v19; // x0
  int v20; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-90h] BYREF
  MaterialCollectionServantSortSelectMenu_o *v23; // [xsp+48h] [xbp-68h]
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v23 = this;
  if ( (byte_42B3708 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
    sub_B52984(&System_Predicate_ServantFilterCategoryContainer__TypeInfo);
    sub_B52984(&Method_MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__);
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_B52984(&MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_TypeInfo);
    byte_42B3708 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !categoryKindKist )
    goto LABEL_27;
  v4 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v4 )
    goto LABEL_28;
  this = (MaterialCollectionServantSortSelectMenu_o *)v23->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_B52A5C(this, categoryKindKist);
  v20 = *(int32_t *)((char *)&categoryKindKist->m_Items[1] + (((v4 << 32) - 0x100000000LL) >> 30));
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__MoveNext__) )
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
        sub_B52A5C(v6, v7);
      ServantFilterCategoryContainer__SetActive((ServantFilterCategoryContainer_o *)current, 0, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterCategoryContainer__Dispose__);
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  if ( (int)categoryKindKist->max_length >= 1 )
  {
    x = v8;
    y = v9;
    z = v10;
    v14 = 0LL;
    while ( 1 )
    {
      v15 = (MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_o *)sub_B52A54(MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0_TypeInfo);
      MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0___ctor(v15, 0LL);
      if ( v14 >= categoryKindKist->max_length )
        break;
      if ( !v15 )
        goto LABEL_27;
      v15->fields.kind = categoryKindKist->m_Items[v14 + 1];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v23->fields.servantFilterCategoryContainerList;
      v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v17,
        (Il2CppObject *)v15,
        Method_MaterialCollectionServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v17,
              (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MaterialCollectionServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v18,
                                                            0LL,
                                                            0LL);
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
    v19 = sub_B52A88(this);
    sub_B52A28(v19, 0LL);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickCancel(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B370F & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B370F = 1;
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
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x1

  if ( (byte_42B3710 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3710 = 1;
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
                                                                                   (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B52A5C(useFilterKindList, v3);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 0, 0LL);
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickDecide(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *v2; // x19
  struct UIScrollView_o *servantFilterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_42B370E & 1) == 0 )
  {
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_B52984(&SoundManager_TypeInfo);
    byte_42B370E = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantFilterScrollView = v2->fields.servantFilterScrollView;
    if ( !servantFilterScrollView )
      goto LABEL_13;
    this = *(MaterialCollectionServantSortSelectMenu_o **)&servantFilterScrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialCollectionServantSortSelectMenu__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (MaterialCollectionServantSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_B52A5C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    MaterialCollectionServantSortSelectMenu__Callback(v2, 1, v7);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickFilterButton(
        MaterialCollectionServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42B3715 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3715 = 1;
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
      sub_B52A5C(0LL, v5);
    ListViewSort__SwitchFilter(operationSortInfo, filterKind, 0LL);
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickReset(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x1

  if ( (byte_42B3711 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3711 = 1;
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
                                                                                   (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__),
          !operationSortInfo) )
    {
      sub_B52A5C(useFilterKindList, v3);
    }
    ListViewSort__SetFilters(operationSortInfo, (ListViewSort_FilterKind_array *)useFilterKindList, 1, 0LL);
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortId(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42B3712 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3712 = 1;
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
      sub_B52A5C(v3, v4);
    operationSortInfo->fields.sortKind = 27;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v4);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortLimitCount(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42B3714 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3714 = 1;
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
      sub_B52A5C(v3, v4);
    operationSortInfo->fields.sortKind = 9;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v4);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__OnClickSortRarity(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42B3713 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3713 = 1;
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
      sub_B52A5C(v3, v4);
    operationSortInfo->fields.sortKind = 2;
    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v4);
  }
}


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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  struct ListViewSort_o **p_baseSortInfo; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t v21; // w8
  struct ListViewSort_o *v22; // x8
  int v23; // w9
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *title2Label; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanationLabel2; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *resetLabel; // x21
  UILabel_o *sort1Label; // x21
  UILabel_o *sort2Label; // x21
  UILabel_o *sort3Label; // x21
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x1
  struct UIScrollView_o *servantFilterScrollView; // x9
  System_Action_o *v49; // x20

  if ( (byte_42B3706 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_MaterialCollectionServantSortSelectMenu_EndOpen__);
    sub_B52984(&StringLiteral_12032/*"SERVANT_SORT_RESET"*/);
    sub_B52984(&StringLiteral_11883/*"SERVANT_SORT_CANCEL"*/);
    sub_B52984(&StringLiteral_11887/*"SERVANT_SORT_DECIDE"*/);
    sub_B52984(&StringLiteral_12034/*"SERVANT_SORT_TITLE2"*/);
    sub_B52984(&StringLiteral_11884/*"SERVANT_SORT_CLEAR"*/);
    sub_B52984(&StringLiteral_11888/*"SERVANT_SORT_EXPLANATION"*/);
    sub_B52984(&StringLiteral_12033/*"SERVANT_SORT_TITLE"*/);
    sub_B52984(&StringLiteral_11889/*"SERVANT_SORT_EXPLANATION2"*/);
    byte_42B3706 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B52920(
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
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = this->fields.kind;
    if ( v21 == 3 )
    {
      v22 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_33;
      v23 = 3;
    }
    else
    {
      if ( v21 != 1 )
      {
LABEL_12:
        baseSortInfo = this->fields.baseSortInfo;
        v25 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
        ListViewSort___ctor_33999772(v25, baseSortInfo, 0LL);
        this->fields.operationSortInfo = v25;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        titleLabel = this->fields.titleLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_SORT_TITLE"*/, 0LL);
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
          title2Label = this->fields.title2Label;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_SORT_TITLE2"*/, 0LL);
          if ( title2Label )
          {
            UILabel__set_text(title2Label, (System_String_o *)gameObject, 0LL);
            explanationLabel = this->fields.explanationLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11888/*"SERVANT_SORT_EXPLANATION"*/,
                                                       0LL);
            if ( explanationLabel )
            {
              UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
              explanationLabel2 = this->fields.explanationLabel2;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11889/*"SERVANT_SORT_EXPLANATION2"*/,
                                                         0LL);
              if ( explanationLabel2 )
              {
                UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0LL);
                decideLabel = this->fields.decideLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11887/*"SERVANT_SORT_DECIDE"*/,
                                                           0LL);
                if ( decideLabel )
                {
                  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                  cancelLabel = this->fields.cancelLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11883/*"SERVANT_SORT_CANCEL"*/,
                                                             0LL);
                  if ( cancelLabel )
                  {
                    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                    clearLabel = this->fields.clearLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11884/*"SERVANT_SORT_CLEAR"*/,
                                                               0LL);
                    if ( clearLabel )
                    {
                      UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
                      resetLabel = this->fields.resetLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12032/*"SERVANT_SORT_RESET"*/,
                                                                 0LL);
                      if ( resetLabel )
                      {
                        UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0LL);
                        gameObject = (UnityEngine_GameObject_o *)this->fields.operationSortInfo;
                        if ( gameObject )
                        {
                          sort1Label = this->fields.sort1Label;
                          gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                     (ListViewSort_o *)gameObject,
                                                                     27,
                                                                     0LL);
                          if ( sort1Label )
                          {
                            UILabel__set_text(sort1Label, (System_String_o *)gameObject, 0LL);
                            gameObject = (UnityEngine_GameObject_o *)this->fields.operationSortInfo;
                            if ( gameObject )
                            {
                              sort2Label = this->fields.sort2Label;
                              gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                         (ListViewSort_o *)gameObject,
                                                                         2,
                                                                         0LL);
                              if ( sort2Label )
                              {
                                UILabel__set_text(sort2Label, (System_String_o *)gameObject, 0LL);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.operationSortInfo;
                                if ( gameObject )
                                {
                                  sort3Label = this->fields.sort3Label;
                                  gameObject = (UnityEngine_GameObject_o *)ListViewSort__GetSortKindText(
                                                                             (ListViewSort_o *)gameObject,
                                                                             9,
                                                                             0LL);
                                  if ( sort3Label )
                                  {
                                    UILabel__set_text(sort3Label, (System_String_o *)gameObject, 0LL);
                                    MaterialCollectionServantSortSelectMenu__SetupUseFilterKindList(this, v43);
                                    MaterialCollectionServantSortSelectMenu__SetupFilterButtons(
                                      this,
                                      this->fields.operationSortInfo,
                                      v44);
                                    MaterialCollectionServantSortSelectMenu__SetupButtonLayout(
                                      this,
                                      this->fields.kind,
                                      v45);
                                    MaterialCollectionServantSortSelectMenu__SetButtenEnable(this, 1, v46);
                                    MaterialCollectionServantSortSelectMenu__SetButtenSelect(this, v47);
                                    servantFilterScrollView = this->fields.servantFilterScrollView;
                                    if ( servantFilterScrollView )
                                    {
                                      if ( *p_baseSortInfo )
                                      {
                                        gameObject = *(UnityEngine_GameObject_o **)&servantFilterScrollView->fields.showScrollBars;
                                        if ( gameObject )
                                        {
                                          UIProgressBar__set_value(
                                            (UIProgressBar_o *)gameObject,
                                            (*p_baseSortInfo)->fields.scrollBarValue,
                                            0LL);
                                          this->fields.state = 1;
                                          v49 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                          System_Action___ctor(
                                            v49,
                                            (Il2CppObject *)this,
                                            Method_MaterialCollectionServantSortSelectMenu_EndOpen__,
                                            0LL);
                                          BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
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
        sub_B52A5C(gameObject, v13);
      }
      v22 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_33;
      v23 = 1;
    }
    v22->fields.listViewKind = v23;
    goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__SetButtenEnable(
        MaterialCollectionServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B370B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    byte_42B370B = 1;
  }
  memset(&v7, 0, sizeof(v7));
  decideButton = (UnityEngine_Behaviour_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.resetButton;
  if ( !decideButton )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL);
  decideButton = (UnityEngine_Behaviour_o *)this->fields.sort1Button;
  if ( !decideButton
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.sort2Button) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.sort3Button) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(decideButton, isEnable, 0LL),
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(decideButton, isEnable);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__) )
  {
    if ( !v7.fields.current )
      sub_B52A5C(0LL, v6);
    ServantFilterButtonControl__SetButtonEnable((ServantFilterButtonControl_o *)v7.fields.current, isEnable, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetButtenSelect(
        MaterialCollectionServantSortSelectMenu_o *this,
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
  Il2CppObject *current; // x20
  __int64 v13; // x1
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v16; // x1
  ListViewSort_o *v17; // x0
  bool v18; // w0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B370D & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_B52984(&StringLiteral_17075/*"btn_bg_04"*/);
    sub_B52984(&StringLiteral_17074/*"btn_bg_03"*/);
    byte_42B370D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  sort1Button = (UnityEngine_Component_o *)this->fields.sort1Button;
  if ( !sort1Button )
    goto LABEL_36;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             sort1Button,
                                             (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = this->fields.operationSortInfo;
  if ( !operationSortInfo || !sort1Button )
    goto LABEL_36;
  v5 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17074/*"btn_bg_03"*/ : &StringLiteral_17075/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)sort1Button, *v5, 0LL);
  sort1Button = (UnityEngine_Component_o *)this->fields.sort2Button;
  if ( !sort1Button )
    goto LABEL_36;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             sort1Button,
                                             (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v6 = this->fields.operationSortInfo;
  if ( !v6 || !sort1Button )
    goto LABEL_36;
  v7 = (System_String_o **)(v6->fields.sortKind == 2 ? &StringLiteral_17074/*"btn_bg_03"*/ : &StringLiteral_17075/*"btn_bg_04"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)sort1Button, *v7, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.sort3Button) == 0LL)
    || (sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   sort1Button,
                                                   (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v8 = this->fields.operationSortInfo) == 0LL)
    || !sort1Button
    || (v8->fields.sortKind != 9 ? (v9 = &StringLiteral_17075/*"btn_bg_04"*/) : (v9 = &StringLiteral_17074/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)sort1Button, (System_String_o *)*v9, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_36:
    sub_B52A5C(sort1Button, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sort1Button,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v10 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B52A5C(v10, v11);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v20.fields.current, 0LL);
    v14 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v14 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v14->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B52A5C(0LL, v13);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_305A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v17 = this->fields.operationSortInfo;
      if ( !v17 )
        sub_B52A5C(0LL, v16);
      v18 = ListViewSort__CheckSvtGroupFilter(v17, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v18, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu__SetupButtonLayout(
        MaterialCollectionServantSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  System_Array_o *v6; // x20
  const MethodInfo *v7; // x2
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_42B370C & 1) == 0 )
  {
    sub_B52984(&ListViewSort_FilterCategoryKind___TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__6264D1E09B01537F0D39D6A65A2204D7B37920D11B1193137B3A264A68190205);
    byte_42B370C = 1;
  }
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
  servantFilterRoot = this->fields.commandCodeAndEquipFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
  if ( kind == 3 || kind == 1 )
  {
    servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sort3Button;
    if ( !servantFilterRoot )
      goto LABEL_20;
    servantFilterRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFilterRoot, 0LL);
    if ( !servantFilterRoot )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
    servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sortButtonGrid;
    if ( !servantFilterRoot )
      goto LABEL_20;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))servantFilterRoot->klass[1]._1.castClass)(
      servantFilterRoot,
      servantFilterRoot->klass[1]._1.declaringType);
    servantFilterRoot = this->fields.commandCodeAndEquipFilterRoot;
    if ( !servantFilterRoot )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0LL);
  }
  else if ( !kind )
  {
    servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sort3Button;
    if ( servantFilterRoot )
    {
      servantFilterRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFilterRoot, 0LL);
      if ( servantFilterRoot )
      {
        UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0LL);
        servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.sortButtonGrid;
        if ( servantFilterRoot )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))servantFilterRoot->klass[1]._1.castClass)(
            servantFilterRoot,
            servantFilterRoot->klass[1]._1.declaringType);
          servantFilterRoot = this->fields.servantFilterRoot;
          if ( servantFilterRoot )
          {
            UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0LL);
            v6 = (System_Array_o *)sub_B5299C(ListViewSort_FilterCategoryKind___TypeInfo, 5LL);
            v8.fields.value = Field__PrivateImplementationDetails__6264D1E09B01537F0D39D6A65A2204D7B37920D11B1193137B3A264A68190205;
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v6, v8, 0LL);
            MaterialCollectionServantSortSelectMenu__InitCategoryContainer(
              this,
              (ListViewSort_FilterCategoryKind_array *)v6,
              v7);
            servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.servantFilterScrollView;
            if ( servantFilterRoot )
            {
              UIScrollView__ResetPosition((UIScrollView_o *)servantFilterRoot, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_20:
    sub_B52A5C(servantFilterRoot, *(_QWORD *)&kind);
  }
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetupFilterButtons(
        MaterialCollectionServantSortSelectMenu_o *this,
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

  if ( (byte_42B3709 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
    sub_B52984(&Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__);
    sub_B52984(&Method_MaterialCollectionServantSortSelectMenu__SetupFilterButtons_b__43_0__);
    sub_B52984(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    sub_B52984(&Method_System_Predicate_ServantFilterButtonControl___ctor__);
    sub_B52984(&System_Predicate_ServantFilterButtonControl__TypeInfo);
    byte_42B3709 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  filterButtonList = this->fields.filterButtonList;
  v6 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v6,
    (Il2CppObject *)this,
    Method_MaterialCollectionServantSortSelectMenu__SetupFilterButtons_b__43_0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_ServantFilterButtonControl___ctor__);
  if ( !filterButtonList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)filterButtonList,
                (System_Predicate_T__o *)v6,
                (const MethodInfo_2FF1F8C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__),
        this->fields.useFilterButtonList = (struct System_Collections_Generic_List_ServantFilterButtonControl__o *)All,
        sub_B52920(
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
    sub_B52A5C(v7, v8);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v7,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v16 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current )
      sub_B52A5C(v16, v17);
    useFilterKindList = this->fields.useFilterKindList;
    if ( !useFilterKindList )
      sub_B52A5C(0LL, v17);
    v20 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
            (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
            (int32_t)v22.fields.current[1].monitor,
            (const MethodInfo_305A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    v21 = (ServantFilterButtonControl_OnClickFilterButton_o *)sub_B52A54(ServantFilterButtonControl_OnClickFilterButton_TypeInfo);
    ServantFilterButtonControl_OnClickFilterButton___ctor(
      v21,
      (Il2CppObject *)this,
      Method_MaterialCollectionServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v21, v20, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialCollectionServantSortSelectMenu__SetupUseFilterKindList(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  int32_t kind; // w8
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v5; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v6; // x20

  if ( (byte_42B3707 & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_42B3707 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_19;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_305A394 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  kind = this->fields.kind;
  if ( kind == 3 || kind == 1 )
  {
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      goto LABEL_19;
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
      49,
      (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  }
  else if ( !kind )
  {
    v5 = this->fields.useFilterKindList;
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    }
    if ( v5 )
    {
      System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
        v5,
        (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
        (const MethodInfo_305A1DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
      if ( useFilterKindList )
      {
        System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
          (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
          (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
          (const MethodInfo_305A1DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
        useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
        if ( useFilterKindList )
        {
          v6 = this->fields.useFilterKindList;
          useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray((System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList, (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
          if ( v6 )
          {
            System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
              v6,
              (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
              (const MethodInfo_305A1DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
            useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
            if ( useFilterKindList )
            {
              System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
                (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
                (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->CollectionStateFilterKindList,
                (const MethodInfo_305A1DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
              return;
            }
          }
        }
      }
    }
LABEL_19:
    sub_B52A5C(useFilterKindList, method);
  }
}


bool __fastcall MaterialCollectionServantSortSelectMenu___SetupFilterButtons_b__43_0(
        MaterialCollectionServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialCollectionServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_42B3718 & 1) == 0 )
  {
    this = (MaterialCollectionServantSortSelectMenu_o *)sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
    byte_42B3718 = 1;
  }
  if ( !x || (this = (MaterialCollectionServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_B52A5C(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_305A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
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

  if ( (byte_42B3704 & 1) == 0 )
  {
    sub_B52984(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_42B3704 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  MaterialCollectionServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall MaterialCollectionServantSortSelectMenu__get_closeBtnPath(
        MaterialCollectionServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B3716 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15582/*"Window/CancelButton"*/);
    byte_42B3716 = 1;
  }
  return (System_String_o *)StringLiteral_15582/*"Window/CancelButton"*/;
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

  if ( (byte_42B3705 & 1) == 0 )
  {
    sub_B52984(&MaterialCollectionServantSortSelectMenu_CallbackFunc_TypeInfo);
    byte_42B3705 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  MaterialCollectionServantSortSelectMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc___ctor(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
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
  sub_B52920(p_method);
}


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
  if ( (byte_42ADCB8 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42ADCB8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialCollectionServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o **v8; // x25
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
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v20; // x8
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
  MaterialCollectionServantSortSelectMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (MaterialCollectionServantSortSelectMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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
    sub_B52A5C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == this->fields.kind;
}