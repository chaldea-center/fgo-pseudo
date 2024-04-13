void __fastcall MaterialEventLogServantSortSelectMenu___ctor(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_42EC36F & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_ServantFilterButtonControl__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v14, v15, v16);
    byte_42EC36F = 1;
  }
  this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.z = 0.0;
  *(_QWORD *)&this->fields.COMMANDCODE_EQUIP_ENCOUNT_BUTTON_POS.fields.x = 0x41F4000000000000LL;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialEventLogServantSortSelectMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__Close(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialEventLogServantSortSelectMenu__Close_32028560(this, 0LL, v2);
}


void __fastcall MaterialEventLogServantSortSelectMenu__Close_32028560(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_42EC362 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MaterialEventLogServantSortSelectMenu_EndClose__, v10, v11, v12);
    byte_42EC362 = 1;
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
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MaterialEventLogServantSortSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_o *v43; // x21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *servantFilterCategoryContainerList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x23
  peRenderTexture_ChangeLayerObject_o *v46; // x21
  __int64 v47; // x0
  int v48; // [xsp+4h] [xbp-ACh]
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-90h] BYREF
  MaterialEventLogServantSortSelectMenu_o *v51; // [xsp+48h] [xbp-68h]
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o BottomPosition; // 0:s0.4,4:s1.4,8:s2.4

  v51 = this;
  if ( (byte_42EC360 & 1) == 0 )
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
      &Method_MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
      v26,
      v27,
      v28);
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_B5D5C4(
                                                        &MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_TypeInfo,
                                                        v29,
                                                        v30,
                                                        v31);
    byte_42EC360 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !categoryKindKist )
    goto LABEL_27;
  v32 = *(_QWORD *)&categoryKindKist->max_length;
  if ( !(_DWORD)v32 )
    goto LABEL_28;
  this = (MaterialEventLogServantSortSelectMenu_o *)v51->fields.servantFilterCategoryContainerList;
  if ( !this )
LABEL_27:
    sub_B5D69C(this, categoryKindKist);
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
      v43 = (MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_o *)sub_B5D694(MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0_TypeInfo);
      MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0___ctor(v43, 0LL);
      if ( v42 >= categoryKindKist->max_length )
        break;
      if ( !v43 )
        goto LABEL_27;
      v43->fields.kind = categoryKindKist->m_Items[v42 + 1];
      servantFilterCategoryContainerList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v51->fields.servantFilterCategoryContainerList;
      v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterCategoryContainer__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v45,
        (Il2CppObject *)v43,
        Method_MaterialEventLogServantSortSelectMenu___c__DisplayClass42_0__InitCategoryContainer_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_ServantFilterCategoryContainer___ctor__);
      if ( !servantFilterCategoryContainerList )
        goto LABEL_27;
      v46 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
              servantFilterCategoryContainerList,
              (System_Predicate_T__o *)v45,
              (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ServantFilterCategoryContainer__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (MaterialEventLogServantSortSelectMenu_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v46,
                                                          0LL,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_27;
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
        return;
    }
LABEL_28:
    v47 = sub_B5D6C8(this);
    sub_B5D668(v47, 0LL);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickCancel(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EC367 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC367 = 1;
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
    MaterialEventLogServantSortSelectMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickClear(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_42EC368 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC368 = 1;
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
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v11);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickDecide(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MaterialEventLogServantSortSelectMenu_o *v4; // x19
  struct UIScrollView_o *servantFilterScrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v7; // x2
  float value; // s0
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_42EC366 & 1) == 0 )
  {
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC366 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    servantFilterScrollView = v4->fields.servantFilterScrollView;
    if ( !servantFilterScrollView )
      goto LABEL_13;
    this = *(MaterialEventLogServantSortSelectMenu_o **)&servantFilterScrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_13;
    operationSortInfo = v4->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_13;
    operationSortInfo->fields.scrollBarValue = value;
    MaterialEventLogServantSortSelectMenu__SetButtenEnable(v4, 0, v7);
    v4->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this = (MaterialEventLogServantSortSelectMenu_o *)v4->fields.baseSortInfo;
    if ( !this )
LABEL_13:
      sub_B5D69C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v4->fields.operationSortInfo, 0LL);
    MaterialEventLogServantSortSelectMenu__Callback(v4, 1, v9);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickFilterButton(
        MaterialEventLogServantSortSelectMenu_o *this,
        int32_t filterKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_42EC36D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, filterKind, (_DWORD)method, v3);
    byte_42EC36D = 1;
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
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v8);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickReset(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_42EC369 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EC369 = 1;
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
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v11);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickSortId(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42EC36A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC36A = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 27;
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickSortLimitCount(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42EC36C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC36C = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 9;
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


void __fastcall MaterialEventLogServantSortSelectMenu__OnClickSortRarity(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42EC36B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC36B = 1;
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
      sub_B5D69C(v5, v6);
    operationSortInfo->fields.sortKind = 2;
    MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v6);
  }
}


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
  int32_t v51; // w8
  struct ListViewSort_o *v52; // x8
  int v53; // w9
  ListViewSort_o *baseSortInfo; // x21
  ListViewSort_o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UILabel_o *title2Label; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *explanationLabel2; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *resetLabel; // x21
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x2
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x1
  struct UIScrollView_o *servantFilterScrollView; // x9
  System_Action_o *v75; // x20

  if ( (byte_42EC35E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)sort, callback);
    sub_B5D5C4(&ListViewSort_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_MaterialEventLogServantSortSelectMenu_EndOpen__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12089/*"SERVANT_SORT_RESET"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_12091/*"SERVANT_SORT_TITLE2"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_11944/*"SERVANT_SORT_EXPLANATION"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_11945/*"SERVANT_SORT_EXPLANATION2"*/, v39, v40, v41);
    byte_42EC35E = 1;
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
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    p_baseSortInfo = &this->fields.baseSortInfo;
    this->fields.baseSortInfo = sort;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)sort,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    v51 = this->fields.kind;
    if ( v51 == 3 )
    {
      v52 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_26;
      v53 = 3;
    }
    else
    {
      if ( v51 != 1 )
      {
LABEL_12:
        baseSortInfo = this->fields.baseSortInfo;
        v55 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
        ListViewSort___ctor_34029496(v55, baseSortInfo, 0LL);
        this->fields.operationSortInfo = v55;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        title2Label = this->fields.title2Label;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12091/*"SERVANT_SORT_TITLE2"*/, 0LL);
        if ( title2Label )
        {
          UILabel__set_text(title2Label, (System_String_o *)gameObject, 0LL);
          explanationLabel = this->fields.explanationLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_SORT_EXPLANATION"*/, 0LL);
          if ( explanationLabel )
          {
            UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
            explanationLabel2 = this->fields.explanationLabel2;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11945/*"SERVANT_SORT_EXPLANATION2"*/,
                                                       0LL);
            if ( explanationLabel2 )
            {
              UILabel__set_text(explanationLabel2, (System_String_o *)gameObject, 0LL);
              decideLabel = this->fields.decideLabel;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11943/*"SERVANT_SORT_DECIDE"*/,
                                                         0LL);
              if ( decideLabel )
              {
                UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                cancelLabel = this->fields.cancelLabel;
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11939/*"SERVANT_SORT_CANCEL"*/,
                                                           0LL);
                if ( cancelLabel )
                {
                  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                  clearLabel = this->fields.clearLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11940/*"SERVANT_SORT_CLEAR"*/,
                                                             0LL);
                  if ( clearLabel )
                  {
                    UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL);
                    resetLabel = this->fields.resetLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_12089/*"SERVANT_SORT_RESET"*/,
                                                               0LL);
                    if ( resetLabel )
                    {
                      UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0LL);
                      MaterialEventLogServantSortSelectMenu__SetupUseFilterKindList(this, v69);
                      MaterialEventLogServantSortSelectMenu__SetupFilterButtons(
                        this,
                        this->fields.operationSortInfo,
                        v70);
                      MaterialEventLogServantSortSelectMenu__SetupButtonLayout(this, this->fields.kind, v71);
                      MaterialEventLogServantSortSelectMenu__SetButtenEnable(this, 1, v72);
                      MaterialEventLogServantSortSelectMenu__SetButtenSelect(this, v73);
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
                            v75 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                            System_Action___ctor(
                              v75,
                              (Il2CppObject *)this,
                              Method_MaterialEventLogServantSortSelectMenu_EndOpen__,
                              0LL);
                            BaseDialog__Open((BaseDialog_o *)this, v75, 0, 0LL);
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
        sub_B5D69C(gameObject, v43);
      }
      v52 = *p_baseSortInfo;
      if ( !*p_baseSortInfo )
        goto LABEL_26;
      v53 = 1;
    }
    v52->fields.listViewKind = v53;
    goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu__SetButtenEnable(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_42EC363 & 1) == 0 )
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
    byte_42EC363 = 1;
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
        (decideButton = (UnityEngine_Behaviour_o *)this->fields.resetButton) == 0LL)
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


void __fastcall MaterialEventLogServantSortSelectMenu__SetButtenSelect(
        MaterialEventLogServantSortSelectMenu_o *this,
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_Component_o *sort1Button; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  System_String_o **v31; // x8
  struct ListViewSort_o *v32; // x8
  System_String_o **v33; // x8
  struct ListViewSort_o *v34; // x8
  __int64 *v35; // x8
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *current; // x20
  __int64 v39; // x1
  FilterKindList_c *v40; // x0
  System_Collections_Generic_List_VoiceCondType_Type__o *ClassFilterKindList; // x0
  __int64 v42; // x1
  ListViewSort_o *v43; // x0
  bool v44; // w0
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EC365 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&FilterKindList_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v26, v27, v28);
    byte_42EC365 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  sort1Button = (UnityEngine_Component_o *)this->fields.sort1Button;
  if ( !sort1Button )
    goto LABEL_36;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             sort1Button,
                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  operationSortInfo = this->fields.operationSortInfo;
  if ( !operationSortInfo || !sort1Button )
    goto LABEL_36;
  v31 = (System_String_o **)(operationSortInfo->fields.sortKind == 27 ? &StringLiteral_17165/*"btn_bg_03"*/ : &StringLiteral_17166/*"btn_bg_04"*/);
  UISprite__set_spriteName((UISprite_o *)sort1Button, *v31, 0LL);
  sort1Button = (UnityEngine_Component_o *)this->fields.sort2Button;
  if ( !sort1Button )
    goto LABEL_36;
  sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             sort1Button,
                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  v32 = this->fields.operationSortInfo;
  if ( !v32 || !sort1Button )
    goto LABEL_36;
  v33 = (System_String_o **)(v32->fields.sortKind == 2 ? &StringLiteral_17165/*"btn_bg_03"*/ : &StringLiteral_17166/*"btn_bg_04"*/);
  if ( (UISprite__set_spriteName((UISprite_o *)sort1Button, *v33, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.sort3Button) == 0LL)
    || (sort1Button = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   sort1Button,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___),
        (v34 = this->fields.operationSortInfo) == 0LL)
    || !sort1Button
    || (v34->fields.sortKind != 9 ? (v35 = &StringLiteral_17166/*"btn_bg_04"*/) : (v35 = &StringLiteral_17165/*"btn_bg_03"*/),
        UISprite__set_spriteName((UISprite_o *)sort1Button, (System_String_o *)*v35, 0LL),
        (sort1Button = (UnityEngine_Component_o *)this->fields.useFilterButtonList) == 0LL) )
  {
LABEL_36:
    sub_B5D69C(sort1Button, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sort1Button,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantFilterButtonControl__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__MoveNext__);
    if ( !v36 )
      break;
    current = v46.fields.current;
    if ( !v46.fields.current )
      sub_B5D69C(v36, v37);
    ServantFilterButtonControl__RefreshButtonSelectState((ServantFilterButtonControl_o *)v46.fields.current, 0LL);
    v40 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v40 = FilterKindList_TypeInfo;
    }
    ClassFilterKindList = (System_Collections_Generic_List_VoiceCondType_Type__o *)v40->static_fields->ClassFilterKindList;
    if ( !ClassFilterKindList )
      sub_B5D69C(0LL, v39);
    if ( System_Collections_Generic_List_VoiceCondType_Type___Contains(
           ClassFilterKindList,
           (int32_t)current[1].monitor,
           (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__) )
    {
      v43 = this->fields.operationSortInfo;
      if ( !v43 )
        sub_B5D69C(0LL, v42);
      v44 = ListViewSort__CheckSvtGroupFilter(v43, (int32_t)current[1].monitor, 0LL);
      ServantFilterButtonControl__SetButtonMask((ServantFilterButtonControl_o *)current, !v44, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu__SetupButtonLayout(
        MaterialEventLogServantSortSelectMenu_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *servantFilterRoot; // x0
  System_Array_o *v10; // x20
  const MethodInfo *v11; // x2
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_42EC364 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewSort_FilterCategoryKind___TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
      v6,
      v7,
      v8);
    byte_42EC364 = 1;
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
        v10 = (System_Array_o *)sub_B5D5DC(ListViewSort_FilterCategoryKind___TypeInfo, 4LL),
        v12.fields.value = Field__PrivateImplementationDetails__0F9817BD50D95010EC11F3FB54C5CFCC06B1F6F9B8A1A053A0169143CC4F9805,
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v10, v12, 0LL),
        MaterialEventLogServantSortSelectMenu__InitCategoryContainer(
          this,
          (ListViewSort_FilterCategoryKind_array *)v10,
          v11),
        (servantFilterRoot = (UnityEngine_GameObject_o *)this->fields.servantFilterScrollView) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(servantFilterRoot, *(_QWORD *)&kind);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)servantFilterRoot, 0LL);
}


void __fastcall MaterialEventLogServantSortSelectMenu__SetupFilterButtons(
        MaterialEventLogServantSortSelectMenu_o *this,
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

  if ( (byte_42EC361 & 1) == 0 )
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
    sub_B5D5C4(&Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__, v21, v22, v23);
    sub_B5D5C4(&Method_MaterialEventLogServantSortSelectMenu__SetupFilterButtons_b__43_0__, v24, v25, v26);
    sub_B5D5C4(&ServantFilterButtonControl_OnClickFilterButton_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Predicate_ServantFilterButtonControl___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Predicate_ServantFilterButtonControl__TypeInfo, v33, v34, v35);
    byte_42EC361 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  filterButtonList = this->fields.filterButtonList;
  v37 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ServantFilterButtonControl__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v37,
    (Il2CppObject *)this,
    Method_MaterialEventLogServantSortSelectMenu__SetupFilterButtons_b__43_0__,
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
      Method_MaterialEventLogServantSortSelectMenu_OnClickFilterButton__,
      0LL);
    ServantFilterButtonControl__Init((ServantFilterButtonControl_o *)current, sort, v52, v51, 0, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v53,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantFilterButtonControl__Dispose__);
}


void __fastcall MaterialEventLogServantSortSelectMenu__SetupUseFilterKindList(
        MaterialEventLogServantSortSelectMenu_o *this,
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
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *useFilterKindList; // x0
  int32_t kind; // w8
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v19; // x20
  System_Collections_Generic_List_ListViewSort_FilterKind__o *v20; // x20

  if ( (byte_42EC35F & 1) == 0 )
  {
    sub_B5D5C4(&FilterKindList_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v14, v15, v16);
    byte_42EC35F = 1;
  }
  useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
  if ( !useFilterKindList )
    goto LABEL_18;
  System_Collections_Generic_List_TitleInfoEventItemComponent_DispType___Clear(
    useFilterKindList,
    (const MethodInfo_3044BBC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Clear__);
  kind = this->fields.kind;
  if ( kind == 3 || kind == 1 )
  {
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
    if ( !useFilterKindList )
      goto LABEL_18;
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      (System_Collections_Generic_List_VoiceCondType_Type__o *)useFilterKindList,
      49,
      (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
  }
  else if ( !kind )
  {
    v19 = this->fields.useFilterKindList;
    useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    }
    if ( v19 )
    {
      System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
        v19,
        (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->ClassGroupFilterKindList,
        (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
      useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)FilterKindList_TypeInfo->static_fields->ClassFilterKindList;
      if ( useFilterKindList )
      {
        v20 = this->fields.useFilterKindList;
        useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)System_Collections_Generic_List_Voice_BATTLE___ToArray((System_Collections_Generic_List_Voice_BATTLE__o *)useFilterKindList, (const MethodInfo_30468BC *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
        if ( v20 )
        {
          System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
            v20,
            (System_Collections_Generic_IEnumerable_T__o *)useFilterKindList,
            (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
          useFilterKindList = (System_Collections_Generic_List_TitleInfoEventItemComponent_DispType__o *)this->fields.useFilterKindList;
          if ( useFilterKindList )
          {
            System_Collections_Generic_List_ListViewSort_FilterKind___AddRange(
              (System_Collections_Generic_List_ListViewSort_FilterKind__o *)useFilterKindList,
              (System_Collections_Generic_IEnumerable_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList,
              (const MethodInfo_3044A04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__AddRange__);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B5D69C(useFilterKindList, method);
  }
}


bool __fastcall MaterialEventLogServantSortSelectMenu___SetupFilterButtons_b__43_0(
        MaterialEventLogServantSortSelectMenu_o *this,
        ServantFilterButtonControl_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MaterialEventLogServantSortSelectMenu_o *v5; // x20

  v5 = this;
  if ( (byte_42EC370 & 1) == 0 )
  {
    this = (MaterialEventLogServantSortSelectMenu_o *)sub_B5D5C4(
                                                        &Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__,
                                                        (_DWORD)x,
                                                        (_DWORD)method,
                                                        v3);
    byte_42EC370 = 1;
  }
  if ( !x || (this = (MaterialEventLogServantSortSelectMenu_o *)v5->fields.useFilterKindList) == 0LL )
    sub_B5D69C(this, x);
  return System_Collections_Generic_List_VoiceCondType_Type___Contains(
           (System_Collections_Generic_List_VoiceCondType_Type__o *)this,
           (int32_t)x->fields.button,
           (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__Contains__);
}


void __fastcall MaterialEventLogServantSortSelectMenu__add_callbackFunc(
        MaterialEventLogServantSortSelectMenu_o *this,
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct MaterialEventLogServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialEventLogServantSortSelectMenu_o *v11; // x0
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EC35C & 1) == 0 )
  {
    sub_B5D5C4(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC35C = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialEventLogServantSortSelectMenu_CallbackFunc_c *)v8->klass != MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  MaterialEventLogServantSortSelectMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall MaterialEventLogServantSortSelectMenu__get_closeBtnPath(
        MaterialEventLogServantSortSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC36E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42EC36E = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
}


void __fastcall MaterialEventLogServantSortSelectMenu__remove_callbackFunc(
        MaterialEventLogServantSortSelectMenu_o *this,
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct MaterialEventLogServantSortSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialEventLogServantSortSelectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EC35D & 1) == 0 )
  {
    sub_B5D5C4(&MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC35D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialEventLogServantSortSelectMenu_CallbackFunc_c *)v8->klass != MaterialEventLogServantSortSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  MaterialEventLogServantSortSelectMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu_CallbackFunc___ctor(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
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
  if ( (byte_42E5F48 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5F48 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall MaterialEventLogServantSortSelectMenu_CallbackFunc__EndInvoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialEventLogServantSortSelectMenu_CallbackFunc__Invoke(
        MaterialEventLogServantSortSelectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o **v7; // x25
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
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v19; // x8
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
  MaterialEventLogServantSortSelectMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (MaterialEventLogServantSortSelectMenu_CallbackFunc_o **)(v3 + 32);
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
    sub_B5D69C(this, 0LL);
  return *(&x->fields.categoryKind + 1) == this->fields.kind;
}