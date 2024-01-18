void __fastcall MaterialEventLogServantSortSelectMenu___ctor(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_41881B4 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v6);
    byte_41881B4 = 1;
  }
  this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.x = 0x41F4000000000000LL;
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


void __fastcall MaterialEventLogServantSortSelectMenu__Callback(
        MaterialEventLogServantSortSelectMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialEventLogServantSortSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__Close(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialEventLogServantSortSelectMenu__Close_25950136(this, 0LL, v2);
}


void __fastcall MaterialEventLogServantSortSelectMenu__Close_25950136(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_41881A7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_MaterialEventLogServantSortSelectMenu_EndClose__, v10);
    byte_41881A7 = 1;
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialEventLogServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall MaterialEventLogServantSortSelectMenu__EndClose(
        MaterialEventLogServantSortSelectMenu_o *this,
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__EndOpen(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall MaterialEventLogServantSortSelectMenu__Init(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu__InitCategoryContainer(
        MaterialEventLogServantSortSelectMenu_o *this,
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
  MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_o *v24; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *servantFilterCategoryContainerList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x23
  peRenderTexture_ChangeLayerObject_o *v27; // x21
  __int64 v28; // x0
  int v29; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-90h] BYREF
  MaterialEventLogServantSortSelectMenu_o *v32; // [xsp+48h] [xbp-68h]
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v32 = this;
  if ( (byte_41881A5 & 1) == 0 )
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
    sub_B2C35C(&Method_MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__, v11);
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_B2C35C(
                                                        &MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_TypeInfo,
                                                        v12);
    byte_41881A5 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !categoryKindKist )
    goto LABEL_27;
  v13 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v13 )
    goto LABEL_28;
  this = (MaterialEventLogServantSortSelectMenu_o *)v32->fields.servantFilterCategoryContainerList;
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
      v24 = (MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_o *)sub_B2C42C(MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_TypeInfo);
      MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0___ctor(v24, 0LL);
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
        Method_MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
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
      this = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v27,
                                                          0LL,
                                                          0LL);
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


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickCancel(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_41881AC & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41881AC = 1;
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
    MaterialEventLogServantSortSelectMenu__Callback(this, 0, v3);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickClear(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x1

  if ( (byte_41881AD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41881AD = 1;
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
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickDecide(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *v2; // x19
  struct UIScrollView_o *servantFilterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_41881AB & 1) == 0 )
  {
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41881AB = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantFilterScrollView = v2->fields.servantFilterScrollView;
    if ( !servantFilterScrollView )
      goto LABEL_13;
    this = *(MaterialEventLogServantSortSelectMenu_o **)&servantFilterScrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialEventLogServantSortSelectMenu__SetButtenEnable(v2, 0, v5);
    v2->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (MaterialEventLogServantSortSelectMenu_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_B2C434(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    MaterialEventLogServantSortSelectMenu__Callback(v2, 1, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu__OnClickFilterButton(
        MaterialEventLogServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_41881B2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&filterKind);
    byte_41881B2 = 1;
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
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickReset(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_Voice_BATTLE__o *useFilterKindList; // x0
  ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x1

  if ( (byte_41881AE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41881AE = 1;
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
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v7);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickSortId(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_41881AF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41881AF = 1;
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
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v4);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickSortLimitCount(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_41881B1 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41881B1 = 1;
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
    operationSortInfo->fields.sortKind = 9;
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v4);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickSortRarity(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_41881B0 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41881B0 = 1;
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
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu__Open(
        MaterialEventLogServantSortSelectMenu_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *callback,
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
  int32_t v31; // w8
  struct ListViewSort_o *v32; // x8
  int v33; // w9
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UILabel_o *title2Label; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanationLabel2; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *resetLabel; // x21
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x1
  struct UIScrollView_o *servantFilterScrollView; // x9
  System_Action_o *v55; // x20

  if ( (byte_41881A3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ListViewSort_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_MaterialEventLogServantSortSelectMenu_EndOpen__, v14);
    sub_B2C35C(&StringLiteral_11940/*"SERVANT_SORT_RESET"*/, v15);
    sub_B2C35C(&StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, v16);
    sub_B2C35C(&StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, v17);
    sub_B2C35C(&StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, v18);
    sub_B2C35C(&StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, v19);
    sub_B2C35C(&StringLiteral_11814/*"SERVANT_SORT_EXPLANATION"*/, v20);
    sub_B2C35C(&StringLiteral_11815/*"SERVANT_SORT_EXPLANATION2"*/, v21);
    byte_41881A3 = 1;
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
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    p_baseSortInfo = &this->fields.baseSortInfo;
    this->fields.baseSortInfo = sort;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v31 = this->fields.kind;
    if ( v31 == 3 )
    {
      v32 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_26;
      v33 = 3;
    }
    else
    {
      if ( v31 != 1 )
      {
LABEL_12:
        baseSortInfo = this->fields.baseSortInfo;
        v35 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
        ListViewSort___ctor_33914748(v35, baseSortInfo, 0LL);
        this->fields.operationSortInfo = v35;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        title2Label = this->fields.title2Label;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11942/*"SERVANT_SORT_TITLE2"*/, 0LL);
        if ( title2Label )
        {
          UILabel__set_text(title2Label, (System_String_o *)gameObject, 0LL);
          explanationLabel = this->fields.explanationLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11814/*"SERVANT_SORT_EXPLANATION"*/, 0LL);
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
                      MaterialEventLogServantSortSelectMenu__SetupUseFilterKindList(this, v49);
                      MaterialEventLogServantSortSelectMenu__SetupFilterButtons(
                        this,
                        this->fields.operationSortInfo,
                        v50);
                      MaterialEventLogServantSortSelectMenu__SetupButtonLayout(this, this->fields.kind, v51);
                      MaterialEventLogServantSortSelectMenu__SetButtenEnable(this, 1, v52);
                      MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v53);
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
                            v55 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                            System_Action___ctor(
                              v55,
                              (Il2CppObject *)this,
                              Method_MaterialEventLogServantSortSelectMenu_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0LL);
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
        sub_B2C434(gameObject, v23);
      }
      v32 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_26;
      v33 = 1;
    }
    v32->fields.listViewKind = v33;
    goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu__SetButtenEnable(
        MaterialEventLogServantSortSelectMenu_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *decideButton; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41881A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, isEnable);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v7);
    byte_41881A8 = 1;
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
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.resetButton) == 0LL)
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


void __fastcall MaterialEventLogServantSortSelectMenu__SetButtenSelect(
        MaterialEventLogServantSortSelectMenu_o *this,
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
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v13; // x8
  struct ListViewSort_o *v14; // x8
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  __int64 *v17; // x8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x20
  __int64 v21; // x1
  FilterKindList_c *v22; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v24; // x1
  ListViewSort_o *v25; // x0
  bool v26; // w0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_41881AA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v5);
    sub_B2C35C(&FilterKindList_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v8);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v9);
    sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v10);
    byte_41881AA = 1;
  }
  memset(&v28, 0, sizeof(v28));
  sort1Button = (UnityEngine_Component_o *)this->fields.sort1Button;
  if ( !sort1Button )
    goto LABEL_36;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             sort1Button,
                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = this->fields.operationSortInfo;
  if ( !operationSortInfo || !sort1Button )
    goto LABEL_36;
  v13 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_16956/*"btn_bg_03"*/ : &StringLiteral_16957/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)sort1Button, *v13, 0LL);
  sort1Button = (UnityEngine_Component_o *)this->fields.sort2Button;
  if ( !sort1Button )
    goto LABEL_36;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             sort1Button,
                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v14 = this->fields.operationSortInfo;
  if ( !v14 || !sort1Button )
    goto LABEL_36;
  v15 = (System_String_o **)(v14->fields.sortKind == 2 ? &StringLiteral_16956/*"btn_bg_03"*/ : &StringLiteral_16957/*"btn_bg_04"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)sort1Button, *v15, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.sort3Button) == 0LL)
    || (sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   sort1Button,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v16 = this->fields.operationSortInfo) == 0LL)
    || !sort1Button
    || (v16->fields.sortKind != 9 ? (v17 = &StringLiteral_16957/*"btn_bg_04"*/) : (v17 = &StringLiteral_16956/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)sort1Button, (System_String_o *)*v17, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_36:
    sub_B2C434(sort1Button, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sort1Button,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v18 )
      break;
    current = v28.fields.current;
    if ( !v28.fields.current )
      sub_B2C434(v18, v19);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v28.fields.current, 0LL);
    v22 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v22 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v22->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B2C434(0LL, v21);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v25 = this->fields.operationSortInfo;
      if ( !v25 )
        sub_B2C434(0LL, v24);
      v26 = ListViewSort__CheckSvtGroupFilter(v25, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v26, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu__SetupButtonLayout(
        MaterialEventLogServantSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  System_Array_o *v7; // x20
  const MethodInfo *v8; // x2
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_41881A9 & 1) == 0 )
  {
    sub_B2C35C(&ListViewSort_FilterCategoryKind___TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
      v5);
    byte_41881A9 = 1;
  }
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
  servantFilterRoot = this->fields.commandCodeAndEquipFilterRoot;
  if ( !servantFilterRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(servantFilterRoot, 0, 0LL);
  if ( kind )
    return;
  servantFilterRoot = this->fields.servantFilterRoot;
  if ( !servantFilterRoot
    || (UnityEngine_GameObject__SetActive(servantFilterRoot, 1, 0LL),
        v7 = (System_Array_o *)sub_B2C374(ListViewSort_FilterCategoryKind___TypeInfo, 4LL),
        v9.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v7, v9, 0LL),
        MaterialEventLogServantSortSelectMenu__InitCategoryContainer(
          this,
          (ListViewSort_FilterCategoryKind_array *)v7,
          v8),
        (servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.servantFilterScrollView) == 0LL) )
  {
LABEL_9:
    sub_B2C434(servantFilterRoot, *(_QWORD *)&kind);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)servantFilterRoot, 0LL);
}


void __fastcall MaterialEventLogServantSortSelectMenu__SetupFilterButtons(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_41881A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__FindAll__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v9);
    sub_B2C35C(&Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__, v10);
    sub_B2C35C(&Method_MaterialEventLogServantSortSelectMenu__SetupFilterButtons_b__43_0__, v11);
    sub_B2C35C(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v12);
    sub_B2C35C(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v13);
    sub_B2C35C(&System_Predicate_ServantFilterButtonControl__TypeInfo, v14);
    byte_41881A6 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  filterButtonList = this->fields.filterButtonList;
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)this,
    Method_MaterialEventLogServantSortSelectMenu__SetupFilterButtons_b__43_0__,
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
      Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v31, v30, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialEventLogServantSortSelectMenu__SetupUseFilterKindList(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  int32_t kind; // w8
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v9; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v10; // x20

  if ( (byte_41881A4 & 1) == 0 )
  {
    sub_B2C35C(&FilterKindList_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    byte_41881A4 = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_18;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_2F6A3DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  kind = this->fields.kind;
  if ( kind == 3 || kind == 1 )
  {
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      goto LABEL_18;
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
      49,
      (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  }
  else if ( !kind )
  {
    v9 = this->fields.useFilterKindList;
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    }
    if ( v9 )
    {
      System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
        (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
      if ( useFilterKindList )
      {
        v10 = this->fields.useFilterKindList;
        useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray((System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList, (const MethodInfo_2F6C0DC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v10 )
        {
          System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
            v10,
            (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
            (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
          useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
          if ( useFilterKindList )
          {
            System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
              (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
              (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
              (const MethodInfo_2F6A224 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B2C434(useFilterKindList, method);
  }
}


bool __fastcall MaterialEventLogServantSortSelectMenu___SetupFilterButtons_b__43_0(
        MaterialEventLogServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  MaterialEventLogServantSortSelectMenu_o *v4; // x20

  v4 = this;
  if ( (byte_41881B5 & 1) == 0 )
  {
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_B2C35C(
                                                        &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                        x);
    byte_41881B5 = 1;
  }
  if ( !x || (this = (MaterialEventLogServantSortSelectMenu_o *)v4->fields.useFilterKindList) == 0LL )
    sub_B2C434(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall MaterialEventLogServantSortSelectMenu__add_callbackFunc(
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

  if ( (byte_41881A1 & 1) == 0 )
  {
    sub_B2C35C(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_41881A1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialEventLogServantSortSelectMenu_CallbackFunc_c *)v7->klass != MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialEventLogServantSortSelectMenu_o *)sub_B2C728(v7);
  MaterialEventLogServantSortSelectMenu__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall MaterialEventLogServantSortSelectMenu__get_closeBtnPath(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_41881B3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15477/*"Window/CancelButton"*/, method);
    byte_41881B3 = 1;
  }
  return (System_String_o *)StringLiteral_15477/*"Window/CancelButton"*/;
}


void __fastcall MaterialEventLogServantSortSelectMenu__remove_callbackFunc(
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

  if ( (byte_41881A2 & 1) == 0 )
  {
    sub_B2C35C(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, value);
    byte_41881A2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MaterialEventLogServantSortSelectMenu_CallbackFunc_c *)v7->klass != MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MaterialEventLogServantSortSelectMenu_o *)sub_B2C728(v7);
  MaterialEventLogServantSortSelectMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall MaterialEventLogServantSortSelectMenu_CallbackFunc__BeginInvoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_4185D1E & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4185D1E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall MaterialEventLogServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o **v8; // x25
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
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v20; // x8
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
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o **)(v4 + 32);
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


void __fastcall MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0___ctor(
        MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0___InitCategoryContainer_b__0(
        MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_o *this,
        ServantFilterCategoryContainer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return *(&x->fields.categoryKind + 1) == this->fields.kind;
}