void ResultListWindow___cctor(const MethodInfo *method)
{
  if ( (byte_596A827 & 1) == 0 )
  {
    sub_2213A60(&ResultListWindow_TypeInfo);
    byte_596A827 = 1;
  }
  LODWORD(ResultListWindow_TypeInfo->static_fields->EFFECT_PLAY_TIME) = (struct ResultListWindow_StaticFields)1061997773;
}


void ResultListWindow___ctor(ResultListWindow_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x2

  if ( (byte_596A826 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&StringLiteral_19672/*"ef_boxitem_fall"*/);
    byte_596A826 = 1;
  }
  v9 = StringLiteral_19672/*"ef_boxitem_fall"*/;
  this->fields.aniName = (struct System_String_o *)StringLiteral_19672/*"ef_boxitem_fall"*/;
  *(_OWORD *)&this->fields.itemDropTime = xmmword_E9BC30;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.aniName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fallEffectObjList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dropEffectObjList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v24, v25);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ResultListWindow__ClearAllGrid(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ResultListWindow_o *v4; // x0
  const MethodInfo *v5; // x2
  ResultListWindow_o *v6; // x0
  const MethodInfo *v7; // x2
  ResultListWindow_o *v8; // x0
  const MethodInfo *v9; // x2
  ResultListWindow_o *v10; // x0
  const MethodInfo *v11; // x2

  ResultListWindow__ClearGridAllChild(this, this->fields.firstResultGrid, v2);
  ResultListWindow__ClearGridAllChild(v4, this->fields.sceResultGrid, v5);
  ResultListWindow__ClearGridAllChild(v6, this->fields.thrResultGrid, v7);
  ResultListWindow__ClearGridAllChild(v8, this->fields.resultScrollViewGrid, v9);
  ResultListWindow__ClearGridAllChild(v10, this->fields.resultScrollViewResultFrameGrid, v11);
}


void ResultListWindow__ClearGridAllChild(ResultListWindow_o *this, UIGrid_o *grid, const MethodInfo *method)
{
  int32_t childCount; // w0
  int v5; // w22
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_596A824 & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A824 = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (ResultListWindow_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      this = (ResultListWindow_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
      if ( !this )
        break;
      this = (ResultListWindow_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v5 - 2, 0);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      if ( (unsigned int)--v5 <= 1 )
        return;
    }
LABEL_13:
    sub_2213CDC(this, grid);
  }
}


void ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  void *skipCollider; // x0
  System_Collections_ICollection_o *fallEffectObjList; // x0
  __int64 v5; // x2
  struct System_Collections_Generic_List_GameObject__o *v6; // x20
  struct ResultListWindow___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__63_0; // x21
  Il2CppObject *v9; // x22
  struct ResultListWindow___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x19
  struct ResultListWindow___c_StaticFields *v19; // x8
  System_Action_object__o *_9__63_1; // x20
  Il2CppObject *v21; // x21
  struct ResultListWindow___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_596A825 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_2213A60(&Method_ResultListWindow___c__ClickSkip_b__63_0__);
    sub_2213A60(&Method_ResultListWindow___c__ClickSkip_b__63_1__);
    sub_2213A60(&ResultListWindow___c_TypeInfo);
    byte_596A825 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_25;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_25:
    sub_2213CDC(skipCollider, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0);
  fallEffectObjList = (System_Collections_ICollection_o *)this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( !BasicHelper__IsNullOrEmpty(fallEffectObjList, 0) )
  {
    v6 = this->fields.fallEffectObjList;
    skipCollider = ResultListWindow___c_TypeInfo;
    if ( !*(&ResultListWindow___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResultListWindow___c_TypeInfo, method, v5);
      skipCollider = ResultListWindow___c_TypeInfo;
    }
    static_fields = (struct ResultListWindow___c_StaticFields *)*((_QWORD *)skipCollider + 23);
    _9__63_0 = (System_Action_object__o *)static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( !*((_DWORD *)skipCollider + 57) )
      {
        j_il2cpp_runtime_class_init_0(skipCollider, method, v5);
        static_fields = ResultListWindow___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__63_0, v9, Method_ResultListWindow___c__ClickSkip_b__63_0__, 0);
      v10 = ResultListWindow___c_TypeInfo->static_fields;
      v10->__9__63_0 = (struct System_Action_GameObject__o *)_9__63_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__63_0, (int32_t)_9__63_0, v11, v12, v13, v14, v15, v16);
    }
    if ( !v6 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v6,
      (System_Action_T__o *)_9__63_0,
      (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropEffectObjList, 0) )
  {
    dropEffectObjList = this->fields.dropEffectObjList;
    skipCollider = ResultListWindow___c_TypeInfo;
    if ( !*(&ResultListWindow___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResultListWindow___c_TypeInfo, method, v17);
      skipCollider = ResultListWindow___c_TypeInfo;
    }
    v19 = (struct ResultListWindow___c_StaticFields *)*((_QWORD *)skipCollider + 23);
    _9__63_1 = (System_Action_object__o *)v19->__9__63_1;
    if ( !_9__63_1 )
    {
      if ( !*((_DWORD *)skipCollider + 57) )
      {
        j_il2cpp_runtime_class_init_0(skipCollider, method, v17);
        v19 = ResultListWindow___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)v19->__9;
      _9__63_1 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(_9__63_1, v21, Method_ResultListWindow___c__ClickSkip_b__63_1__, 0);
      v22 = ResultListWindow___c_TypeInfo->static_fields;
      v22->__9__63_1 = (struct System_Action_GameObject__o *)_9__63_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__63_1, (int32_t)_9__63_1, v23, v24, v25, v26, v27, v28);
    }
    if ( dropEffectObjList )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)dropEffectObjList,
        (System_Action_T__o *)_9__63_1,
        (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
      return;
    }
    goto LABEL_25;
  }
}


void ResultListWindow__Close(ResultListWindow_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20

  if ( (byte_596A823 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__);
    sub_2213A60(&ResultListWindow___c__DisplayClass60_0_TypeInfo);
    byte_596A823 = 1;
  }
  v5 = sub_2213CCC(ResultListWindow___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0);
}


void ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v5; // x1
  UIProgressBar_o *v6; // x0
  float v7; // s0

  if ( (byte_596A822 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6575/*"ExecuteOpenCallBack"*/);
    byte_596A822 = 1;
  }
  if ( this->fields.maxPlayCnt <= 50 )
    ResultListWindow__SetScrollControllEnabled(this, 0, v2);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0)
    && this->fields.maxPlayCnt + 1 >= 52
    && !this->fields.isLastLineEffectPlay )
  {
    v6 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v6 )
      sub_2213CDC(0, v5);
    UIProgressBar__set_value(v6, 1.0, 0);
    this->fields.isLastLineEffectPlay = 1;
  }
  if ( this->fields.openCallBack )
  {
    if ( this->fields.isLongPress )
      v7 = flt_E9A768[this->fields.maxPlayCnt > 10];
    else
      v7 = 0.0;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6575/*"ExecuteOpenCallBack"*/, v7, 0);
  }
}


void ResultListWindow__ExecuteOpenCallBack(ResultListWindow_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_bool__o *openCallBack; // x20
  __int64 v10; // x0
  __int64 v11; // x1

  openCallBack = this->fields.openCallBack;
  this->fields.openCallBack = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack, 0, v2, v3, v4, v5, v6, v7);
  if ( !openCallBack )
    sub_2213CDC(v10, v11);
  ((void (__fastcall *)(intptr_t, bool, intptr_t))openCallBack->fields.invoke_impl)(
    openCallBack->fields.method_code,
    this->fields.isLongPress,
    openCallBack->fields.method);
}


void ResultListWindow__Init(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0

  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0);
  this->fields.isRare = 0;
  *(_QWORD *)&this->fields.maxPlayCnt = 0;
  this->fields.isSkip = 0;
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ResultListWindow__LongPressSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  this->fields.isLongPress = 1;
  ResultListWindow__ClickSkip(this, method);
}


void ResultListWindow__OpenResultList(
        ResultListWindow_o *this,
        System_Int32_array *resultIds,
        System_Int32_array *rareIdxs,
        System_Int32_array *baseNos,
        int32_t baseId,
        int32_t eventId,
        bool isDischargeGetEffectItem,
        bool isResultLongPress,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  int v23; // w9
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int v31; // w9
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w23
  __int64 v52; // x1
  __int64 v53; // x2
  UnityEngine_Object_o *scrollBar; // x22
  __int64 v55; // x2
  UnityEngine_Object_o *resultScrollView; // x22
  const MethodInfo *v57; // x2
  bool v58; // w0

  if ( (byte_596A818 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A818 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    ResultListWindow__setDispResultListBg(this, 1, v20);
    gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)this->fields.fallEffectObjList,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      fallEffectObjList = this->fields.fallEffectObjList;
      if ( !fallEffectObjList )
        goto LABEL_29;
      size = fallEffectObjList->fields._size;
      v23 = fallEffectObjList->fields._version + 1;
      fallEffectObjList->fields._size = 0;
      fallEffectObjList->fields._version = v23;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, size, 0);
    }
    gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)this->fields.dropEffectObjList,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      dropEffectObjList = this->fields.dropEffectObjList;
      if ( !dropEffectObjList )
        goto LABEL_29;
      v24 = (System_String_o *)(unsigned int)dropEffectObjList->fields._size;
      v31 = dropEffectObjList->fields._version + 1;
      dropEffectObjList->fields._size = 0;
      dropEffectObjList->fields._version = v31;
      if ( (int)v24 >= 1 )
        System_Array__Clear((System_Array_o *)dropEffectObjList->fields._items, 0, (int32_t)v24, 0);
    }
    this->fields.openCallBack = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallBack,
      (int32_t)callback,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    this->fields.resultIdList = resultIds;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.resultIdList,
      (int32_t)resultIds,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this->fields.rareIdxList = rareIdxs;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rareIdxList,
      (int32_t)rareIdxs,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    this->fields.baseNoList = baseNos;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseNoList,
      (int32_t)baseNos,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    this->fields.currentBaseId = baseId;
    this->fields.currentEventId = eventId;
    this->fields.isDischargeGetEffectItem = isDischargeGetEffectItem;
    this->fields.isLastLineEffectPlay = 0;
    if ( resultIds )
    {
      resultIdList = this->fields.resultIdList;
      this->fields.maxPlayCnt = resultIds->max_length;
      if ( resultIdList )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.scrollBar;
        if ( gameObject )
        {
          max_length = resultIdList->max_length;
          UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0);
          scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52, v53);
          if ( !UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
            goto LABEL_25;
          resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v55);
          if ( !UnityEngine_Object__op_Inequality(resultScrollView, 0, 0) )
            goto LABEL_25;
          gameObject = (UnityEngine_GameObject_o *)this->fields.scrollBar;
          if ( gameObject )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, max_length > 50, 0);
              ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v57);
LABEL_25:
              this->fields.isSkip = isResultLongPress;
              this->fields.isLongPress = isResultLongPress;
              v58 = isResultLongPress && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)rareIdxs, 0);
              this->fields.forceDropSe = v58;
              ResultListWindow__setResultItem(this, v19);
              BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_2213CDC(gameObject, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void ResultListWindow__SetScrollControllEnabled(ResultListWindow_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Object_o *resultScrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_596A819 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A819 = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enabled, method);
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0);
  }
}


System_Collections_IEnumerator_o *ResultListWindow__StartDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A81B & 1) == 0 )
  {
    sub_2213A60(&ResultListWindow__StartDisp_d__50_TypeInfo);
    byte_596A81B = 1;
  }
  v3 = sub_2213CCC(ResultListWindow__StartDisp_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596A81C & 1) == 0 )
  {
    sub_2213A60(&ResultListWindow__StartRewardAction_d__51_TypeInfo);
    byte_596A81C = 1;
  }
  v5 = sub_2213CCC(ResultListWindow__StartRewardAction_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)rewardAction, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void ResultListWindow__Update(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( !UnityEngine_Input__get_touchCount(0) )
    this->fields.isLongPress = 0;
}


bool ResultListWindow__checkRare(ResultListWindow_o *this, int32_t idx, const MethodInfo *method)
{
  struct System_Int32_array *rareIdxList; // x8
  ResultListWindow_o *v5; // x20
  signed __int64 i; // x22
  unsigned __int64 max_length_low; // x9
  bool v8; // w21
  __int64 v9; // x1
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  rareIdxList = this->fields.rareIdxList;
  v11 = 0;
  if ( !rareIdxList || !rareIdxList->max_length )
    return 0;
  v5 = this;
  for ( i = 0; ; ++i )
  {
    max_length_low = LODWORD(rareIdxList->max_length);
    v8 = i < (int)max_length_low;
    if ( i >= (int)max_length_low )
      break;
    if ( i >= max_length_low )
      sub_2213CE4(this);
    v11 = rareIdxList->m_Items[i];
    this = (ResultListWindow_o *)System_Int32__Equals_77138484((int32_t)&v11, idx, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    rareIdxList = v5->fields.rareIdxList;
    if ( !rareIdxList )
      sub_2213CDC(this, v9);
  }
  return v8;
}


void ResultListWindow__endDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  int32_t maxPlayCnt; // w8
  _BOOL4 isDischargeGetEffectItem; // w9

  if ( (byte_596A821 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6271/*"EndOpen"*/);
    sub_2213A60(&StringLiteral_24557/*"setDisp"*/);
    byte_596A821 = 1;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( this->fields.playCnt >= maxPlayCnt )
  {
    isDischargeGetEffectItem = this->fields.isDischargeGetEffectItem;
    this->fields.playCnt = 0;
    if ( isDischargeGetEffectItem )
    {
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_6271/*"EndOpen"*/,
        0.5,
        0);
    }
    else if ( maxPlayCnt == 1 )
    {
LABEL_6:
      ResultListWindow__EndOpen(this, method);
    }
  }
  else
  {
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_24557/*"setDisp"*/,
      0.00001,
      0);
    if ( !this->fields.isDischargeGetEffectItem && this->fields.playCnt == this->fields.maxPlayCnt - 1 )
      goto LABEL_6;
  }
}


void ResultListWindow__playEffectDrop(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0
  int32_t maxPlayCnt; // w22
  System_String_o **v5; // x8
  System_String_o *v6; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v8; // x2
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BoxGachaUtility_c *v17; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 klass_low; // x10
  intptr_t v21; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A81F & 1) == 0 )
  {
    sub_2213A60(&BoxGachaUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&StringLiteral_19670/*"ef_boxitem_drop_rare"*/);
    sub_2213A60(&StringLiteral_19669/*"ef_boxitem_drop"*/);
    sub_2213A60(&StringLiteral_24726/*"showResultItem"*/);
    byte_596A81F = 1;
  }
  if ( !this->fields.isSkip || this->fields.isRare )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
    if ( !skipCollider )
      goto LABEL_30;
    UnityEngine_Collider__set_enabled(skipCollider, 1, 0);
    maxPlayCnt = this->fields.maxPlayCnt;
    if ( this->fields.isRare )
      v5 = (System_String_o **)&StringLiteral_19670/*"ef_boxitem_drop_rare"*/;
    else
      v5 = (System_String_o **)&StringLiteral_19669/*"ef_boxitem_drop"*/;
    v6 = *v5;
    if ( maxPlayCnt < 11 || this->fields.playCnt >= 31 )
    {
      skipCollider = (UnityEngine_Collider_o *)GameObjectExtensions__GetParent(this->fields.dispObj, 0);
      if ( !skipCollider )
        goto LABEL_30;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
    }
    else
    {
      skipCollider = (UnityEngine_Collider_o *)this->fields.effectRoot;
      if ( !skipCollider )
        goto LABEL_30;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skipCollider, 0);
    }
    skipCollider = (UnityEngine_Collider_o *)BoxGachaResultEffectComponent__getEffect(v6, transform, v8);
    if ( !skipCollider
      || (v9 = (UnityEngine_GameObject_o *)skipCollider,
          skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)skipCollider,
                                                     0),
          !this->fields.dispObj)
      || (v10 = (UnityEngine_Transform_o *)skipCollider,
          (skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispObj, 0)) == 0)
      || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skipCollider, 0), !v10) )
    {
LABEL_30:
      sub_2213CDC(skipCollider, method);
    }
    UnityEngine_Transform__set_localPosition(v10, localPosition, 0);
    if ( maxPlayCnt >= 11 )
    {
      v17 = BoxGachaUtility_TypeInfo;
      if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, method, v11);
        v17 = BoxGachaUtility_TypeInfo;
      }
      GameObjectExtensions__SetLocalScale(v9, v17->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
    }
    if ( !this->fields.isRare )
    {
      skipCollider = (UnityEngine_Collider_o *)this->fields.dropEffectObjList;
      if ( skipCollider )
      {
        m_CachedPtr = skipCollider->fields.m_CachedPtr;
        v19 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(skipCollider[1].klass);
        if ( m_CachedPtr )
        {
          klass_low = SLODWORD(skipCollider[1].klass);
          if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)skipCollider,
              (Il2CppObject *)v9,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = m_CachedPtr + 8 * klass_low;
            LODWORD(skipCollider[1].klass) = klass_low + 1;
            *(_QWORD *)(v21 + 32) = v9;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), (int32_t)v9, v11, v12, v13, v14, v15, v16);
          }
          goto LABEL_29;
        }
      }
      goto LABEL_30;
    }
  }
LABEL_29:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_24726/*"showResultItem"*/,
    this->fields.itemDispWaitTime,
    0);
}


void ResultListWindow__setDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *resultItemObjList; // x0
  Il2CppObject *Item; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x2
  bool v12; // w0
  int32_t playCnt; // w8
  _BOOL4 isSkip; // w10
  int32_t v15; // w8
  int32_t maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_Transform_o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  BoxGachaUtility_c *v27; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  Il2CppObject *ComponentInChildren_object; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *v35; // x20
  __int64 v36; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A81E & 1) == 0 )
  {
    sub_2213A60(&BoxGachaUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_23888/*"playEffectDrop"*/);
    sub_2213A60(&StringLiteral_19672/*"ef_boxitem_fall"*/);
    byte_596A81E = 1;
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  Item = System_Collections_Generic_List_object___get_Item(
           resultItemObjList,
           this->fields.playCnt,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  this->fields.dispObj = (struct UnityEngine_GameObject_o *)Item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dispObj, (int32_t)Item, v5, v6, v7, v8, v9, v10);
  v12 = ResultListWindow__checkRare(this, this->fields.playCnt, v11);
  playCnt = this->fields.playCnt;
  isSkip = this->fields.isSkip;
  this->fields.isRare = v12;
  v15 = playCnt + 1;
  this->fields.playCnt = v15;
  if ( isSkip && !v12 )
  {
    ResultListWindow__showResultItem(this, method);
    return;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( v15 > 30 || maxPlayCnt <= 10 )
  {
    resultItemObjList = (System_Collections_Generic_List_object__o *)GameObjectExtensions__GetParent(
                                                                       this->fields.dispObj,
                                                                       0);
    if ( !resultItemObjList )
      goto LABEL_38;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resultItemObjList, 0);
  }
  else
  {
    resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.effectRoot;
    if ( !resultItemObjList )
      goto LABEL_38;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resultItemObjList, 0);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)BoxGachaResultEffectComponent__getEffect(
                                                                     (System_String_o *)StringLiteral_19672/*"ef_boxitem_fall"*/,
                                                                     transform,
                                                                     v18);
  if ( !resultItemObjList )
    goto LABEL_38;
  v19 = (UnityEngine_GameObject_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)resultItemObjList,
                                                                     0);
  if ( !this->fields.dispObj )
    goto LABEL_38;
  v20 = (UnityEngine_Transform_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                     this->fields.dispObj,
                                                                     0);
  if ( !resultItemObjList )
    goto LABEL_38;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)resultItemObjList, 0);
  if ( !v20 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v20, localPosition, 0);
  if ( maxPlayCnt >= 11 )
  {
    v27 = BoxGachaUtility_TypeInfo;
    if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, method, v21);
      v27 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v19, v27->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
  if ( !resultItemObjList
    || (items = resultItemObjList->fields._items,
        v29 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resultItemObjList->fields._version,
        !items) )
  {
LABEL_38:
    sub_2213CDC(resultItemObjList, method);
  }
  size = resultItemObjList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resultItemObjList,
      (Il2CppObject *)v19,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    resultItemObjList->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v19;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v19, v21, v22, v23, v24, v25, v26);
  }
  if ( this->fields.isSkip )
    goto LABEL_37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v19,
                                 (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v35 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v19,
          (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v36);
    resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                       (UnityEngine_Object_o *)v35,
                                                                       0,
                                                                       0);
    if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
      goto LABEL_37;
    if ( v35 )
    {
      UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v35, this->fields.aniName, 0);
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( !ComponentInChildren_object )
    goto LABEL_38;
  SimpleAnimation__Play_78552168((SimpleAnimation_o *)ComponentInChildren_object, this->fields.aniName, 0);
LABEL_37:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23888/*"playEffectDrop"*/,
    this->fields.itemDropTime,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ResultListWindow__setDispResultListBg(ResultListWindow_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *firstLineGrid; // x0

  firstLineGrid = (UnityEngine_Component_o *)this->fields.firstLineGrid;
  if ( !firstLineGrid
    || (firstLineGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(firstLineGrid, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0),
        (firstLineGrid = (UnityEngine_Component_o *)this->fields.sceLineGrid) == 0)
    || (firstLineGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(firstLineGrid, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0),
        (firstLineGrid = (UnityEngine_Component_o *)this->fields.thrLineGrid) == 0)
    || (firstLineGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(firstLineGrid, 0)) == 0 )
  {
    sub_2213CDC(firstLineGrid, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0);
}


void ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 resultList; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  struct UIGrid_o *firstResultGrid; // x8
  struct UIGrid_o *sceResultGrid; // x9
  int32_t maxPerLine; // w22
  int32_t v16; // w20
  __int64 v17; // x2
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w28
  BoxGachaBaseMaster_o *v20; // x21
  signed __int64 v21; // x29
  struct UIGrid_o **v22; // x8
  struct System_Int32_array *baseNoList; // x9
  UnityEngine_Component_o *v24; // x23
  BoxGachaBaseEntity_o *v25; // x24
  UnityEngine_GameObject_o *resultListItemPrefab; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v28; // x23
  UnityEngine_Transform_o *v29; // x25
  __int64 v30; // x2
  BoxGachaUtility_c *v31; // x8
  ResultItemComponent_o *v32; // x25
  int v33; // w9
  struct BoxGachaUtility_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  const MethodInfo *v38; // x1
  UnityEngine_GameObject_o *resultListResultFrame; // x26
  UnityEngine_Transform_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x26
  UnityEngine_Transform_o *v42; // x27
  __int64 v43; // x1
  __int64 v44; // x2
  BoxGachaUtility_c *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct UIScrollView_o *resultScrollView; // x1
  int32_t IntValue; // w26
  int32_t v54; // w27
  int32_t type; // w8
  const MethodInfo *v56; // x4
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  __int64 v70; // x2
  int32_t maxPlayCnt; // w20
  float v72; // s0
  unsigned int v73; // w8
  int32_t v74; // w1
  const MethodInfo *v75; // x1
  struct UIGrid_o **p_thrResultGrid; // [xsp+10h] [xbp-90h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+18h] [xbp-88h]
  GiftMaster_o *Master_object; // [xsp+20h] [xbp-80h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+30h] [xbp-70h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+38h] [xbp-68h]
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A81A & 1) == 0 )
  {
    sub_2213A60(&BoxGachaUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BoxGachaBaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_23695/*"overwriteFirstTimeDispItemId"*/);
    sub_2213A60(&StringLiteral_13600/*"StartDisp"*/);
    sub_2213A60(&StringLiteral_23686/*"overwriteDispItemId"*/);
    sub_2213A60(&StringLiteral_23694/*"overwriteFirstTimeDispItemGet"*/);
    byte_596A81A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.resultItemObjList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_67;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_67;
  maxPerLine = firstResultGrid->fields.maxPerLine;
  v16 = sceResultGrid->fields.maxPerLine;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v12);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  resultList = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
  resultIdList = this->fields.resultIdList;
  if ( !resultIdList )
    goto LABEL_67;
  max_length = resultIdList->max_length;
  v20 = (BoxGachaBaseMaster_o *)resultList;
  p_thrResultGrid = &this->fields.thrResultGrid;
  v21 = 0;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  while ( v21 < SLODWORD(resultIdList->max_length) )
  {
    resultList = (__int64)this->fields.resultList;
    if ( max_length < 11 )
    {
      if ( !resultList )
        goto LABEL_67;
      resultList = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resultList, 0);
      if ( !resultList )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultList, 1, 0);
      v22 = &this->fields.firstResultGrid;
      if ( v21 > maxPerLine - 1 )
      {
        v22 = &this->fields.sceResultGrid;
        if ( v21 > v16 + maxPerLine - 1 )
          v22 = &this->fields.thrResultGrid;
      }
    }
    else
    {
      if ( !resultList )
        goto LABEL_67;
      resultList = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resultList, 0);
      if ( !resultList )
        goto LABEL_67;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultList, 0, 0);
      v22 = &this->fields.resultScrollViewGrid;
    }
    baseNoList = this->fields.baseNoList;
    if ( !baseNoList )
      goto LABEL_67;
    if ( v21 >= (unsigned __int64)LODWORD(baseNoList->max_length) )
      sub_2213CE4(resultList);
    if ( !v20 )
      goto LABEL_67;
    v24 = (UnityEngine_Component_o *)*v22;
    resultList = (__int64)BoxGachaBaseMaster__GetEntity(v20, this->fields.currentBaseId, baseNoList->m_Items[v21], 0);
    if ( !v24 )
      goto LABEL_67;
    v25 = (BoxGachaBaseEntity_o *)resultList;
    resultListItemPrefab = this->fields.resultListItemPrefab;
    transform = UnityEngine_Component__get_transform(v24, 0);
    resultList = (__int64)BaseMonoBehaviour__createObject(
                            (BaseMonoBehaviour_o *)this,
                            resultListItemPrefab,
                            transform,
                            0,
                            0);
    if ( !resultList )
      goto LABEL_67;
    v28 = (UnityEngine_GameObject_o *)resultList;
    resultList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resultList, 0);
    v29 = (UnityEngine_Transform_o *)resultList;
    if ( !byte_5969AE5 )
    {
      resultList = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v29 )
      goto LABEL_67;
    UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    resultList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            v28,
                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
    v31 = BoxGachaUtility_TypeInfo;
    v32 = (ResultItemComponent_o *)resultList;
    v33 = *(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1);
    if ( max_length <= 10 )
    {
      if ( !v33 )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v11, v30);
        v31 = BoxGachaUtility_TypeInfo;
      }
      p_x = &v31->static_fields->NORMAL_ITEM_SIZE.fields.x;
      p_y = p_x + 1;
      p_z = p_x + 2;
    }
    else
    {
      if ( !v33 )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v11, v30);
        v31 = BoxGachaUtility_TypeInfo;
      }
      static_fields = v31->static_fields;
      p_x = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.x;
      p_y = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.y;
      p_z = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.z;
    }
    if ( !v32 )
      goto LABEL_67;
    v81.fields.z = *p_z;
    v81.fields.y = *p_y;
    v81.fields.x = *p_x;
    ResultItemComponent__SetItemIconScale(v32, v81, v11);
    ResultItemComponent__Clear(v32, v38);
    if ( max_length >= 11 )
    {
      resultList = (__int64)this->fields.resultScrollViewResultFrameGrid;
      if ( !resultList )
        goto LABEL_67;
      resultListResultFrame = this->fields.resultListResultFrame;
      v40 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resultList, 0);
      resultList = (__int64)BaseMonoBehaviour__createObject(
                              (BaseMonoBehaviour_o *)this,
                              resultListResultFrame,
                              v40,
                              0,
                              0);
      if ( !resultList )
        goto LABEL_67;
      v41 = (UnityEngine_GameObject_o *)resultList;
      resultList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resultList, 0);
      v42 = (UnityEngine_Transform_o *)resultList;
      if ( !byte_5969AE5 )
      {
        resultList = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v42 )
        goto LABEL_67;
      UnityEngine_Transform__set_localScale(v42, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v45 = BoxGachaUtility_TypeInfo;
      if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v43, v44);
        v45 = BoxGachaUtility_TypeInfo;
      }
      GameObjectExtensions__SetLocalScale(v41, v45->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
      resultList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v28,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
      if ( !resultList )
        goto LABEL_67;
      resultScrollView = this->fields.resultScrollView;
      *(_QWORD *)(resultList + 32) = resultScrollView;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(resultList + 32),
        (int32_t)resultScrollView,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    if ( v25 )
    {
      if ( v25->fields.isRare )
        ResultItemComponent__SetRareItem(v32, v11);
      IntValue = EntityScriptUtil__GetIntValue(v25->fields.script, (System_String_o *)StringLiteral_23686/*"overwriteDispItemId"*/, 0, 0);
      resultList = EntityScriptUtil__GetIntValue(v25->fields.script, (System_String_o *)StringLiteral_23695/*"overwriteFirstTimeDispItemId"*/, 0, 0);
      if ( (int)resultList >= 1 )
      {
        v54 = resultList;
        resultList = UnityEngine_PlayerPrefs__GetInt_83396820((System_String_o *)StringLiteral_23694/*"overwriteFirstTimeDispItemGet"*/, 0);
        if ( !(_DWORD)resultList )
          IntValue = v54;
      }
      type = v25->fields.type;
      if ( type == 1 )
      {
        resultList = (__int64)Master_object;
        if ( !Master_object )
          goto LABEL_67;
        resultList = (__int64)GiftMaster__getDataById(Master_object, v25->fields.targetId, 0);
        if ( !resultList )
          goto LABEL_66;
        if ( *(int *)(resultList + 28) <= 1 )
          v57 = 0;
        else
          v57 = *(_DWORD *)(resultList + 28);
        ResultItemComponent__Set(v32, (GiftEntity_o *)resultList, v57, IntValue, v56);
      }
      else
      {
        if ( (type & 0xFFFFFFFE) != 2 )
          goto LABEL_66;
        resultList = (__int64)BoxGachaBaseEntity__getRewardSetData(v25, this->fields.currentEventId, 0);
        if ( !resultList )
          goto LABEL_66;
        ResultItemComponent__SetExtra(v32, *(_DWORD *)(resultList + 28), *(_DWORD *)(resultList + 48), v58);
      }
      UnityEngine_GameObject__SetActive(v28, 0, 0);
      resultList = (__int64)this->fields.resultItemObjList;
      if ( !resultList )
        goto LABEL_67;
      v65 = *(_QWORD *)(resultList + 16);
      v66 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(resultList + 28);
      if ( !v65 )
        goto LABEL_67;
      v67 = *(int *)(resultList + 24);
      if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)resultList,
          (Il2CppObject *)v28,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = v65 + 8 * v67;
        *(_DWORD *)(resultList + 24) = v67 + 1;
        *(_QWORD *)(v68 + 32) = v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v68 + 32), (int32_t)v28, v59, v60, v61, v62, v63, v64);
      }
    }
LABEL_66:
    resultIdList = this->fields.resultIdList;
    ++v21;
    if ( !resultIdList )
      goto LABEL_67;
  }
  if ( max_length >= 11 )
  {
    adjustSprite = (UnityEngine_Object_o *)this->fields.adjustSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v17);
    if ( UnityEngine_Object__op_Inequality(adjustSprite, 0, 0) )
    {
      maxPlayCnt = this->fields.maxPlayCnt;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v11, v70);
      resultList = (__int64)this->fields.adjustSprite;
      if ( resultList )
      {
        v72 = (float)maxPlayCnt / 10.0;
        v73 = 60 * vcvtps_s32_f32(v72) + 5;
        if ( ceilf(v72) == INFINITY )
          v74 = 5;
        else
          v74 = v73;
        UIWidget__set_height((UIWidget_o *)resultList, v74, 0);
        goto LABEL_79;
      }
LABEL_67:
      sub_2213CDC(resultList, v11);
    }
  }
LABEL_79:
  resultList = (__int64)*p_firstResultGrid;
  if ( !*p_firstResultGrid )
    goto LABEL_67;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  resultList = (__int64)*p_sceResultGrid;
  if ( !*p_sceResultGrid )
    goto LABEL_67;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  resultList = (__int64)*p_thrResultGrid;
  if ( !*p_thrResultGrid )
    goto LABEL_67;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  resultList = (__int64)*p_resultScrollViewGrid;
  if ( !*p_resultScrollViewGrid )
    goto LABEL_67;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  resultList = (__int64)this->fields.resultScrollViewResultFrameGrid;
  if ( !resultList )
    goto LABEL_67;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  if ( max_length < 11 )
    ResultListWindow__showResultEffect(this, v75);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13600/*"StartDisp"*/,
      0);
}


void ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_596A81D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24557/*"setDisp"*/);
    byte_596A81D = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_24557/*"setDisp"*/, 0.3, 0);
}


void ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_596A820 & 1) == 0 )
  {
    sub_2213A60(&Method_ResultListWindow_showResultItem__);
    sub_2213A60(&StringLiteral_18118/*"box3"*/);
    sub_2213A60(&StringLiteral_19896/*"endDisp"*/);
    byte_596A820 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0);
  if ( this->fields.playCnt == 1 && this->fields.forceDropSe )
  {
    v4 = Method_ResultListWindow_showResultItem__;
    if ( (*((_BYTE *)Method_ResultListWindow_showResultItem__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_ResultListWindow_showResultItem__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySe(v5, (System_String_o *)StringLiteral_18118/*"box3"*/, 0, 0);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_19896/*"endDisp"*/,
    this->fields.itemDispTime,
    0);
}


void ResultListWindow_RewardAction___ctor(ResultListWindow_RewardAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ResultListWindow__StartDisp_d__50___ctor(
        ResultListWindow__StartDisp_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ResultListWindow__StartDisp_d__50__MoveNext(ResultListWindow__StartDisp_d__50_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x19
  UnityEngine_WaitForSeconds_o *v5; // x19
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  bool result; // w0
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  System_Collections_Generic_List_object__o *v14; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int v22; // w23
  __int64 v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  float v30; // s0
  int maxPlayCnt; // w8
  unsigned int v32; // w9
  signed int v33; // w9
  signed int v34; // w10
  float v35; // s0
  unsigned int v36; // w8
  int v37; // w9
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  int32_t v43; // w22
  int32_t v44; // w8
  System_Collections_Generic_List_object__o *v45; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v47; // x2
  System_Collections_IEnumerator_o *started; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w21
  int32_t v62; // w20
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v68; // x1
  ResultListWindow_c *v69; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_596A82B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    sub_2213A60(&ResultListWindow_TypeInfo);
    sub_2213A60(&ResultListWindow_RewardAction_TypeInfo);
    sub_2213A60(&Method_ResultListWindow__StartDisp_d__50_MoveNext__);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_18118/*"box3"*/);
    sub_2213A60(&StringLiteral_6271/*"EndOpen"*/);
    byte_596A82B = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
    this->fields.__1__state = -1;
    if ( listRewardAction_5__2 )
      goto LABEL_37;
    goto LABEL_34;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v5 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, 0.2, 0);
      this->fields.__2__current = (Il2CppObject *)v5;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7, v8, v9, v10, v11);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)v14;
    p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._listRewardAction_5__2,
      (int32_t)v14,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( !_4__this )
      goto LABEL_34;
    v22 = 0;
    while ( v22 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
    {
      v23 = sub_2213CCC(ResultListWindow_RewardAction_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0);
      if ( !v23 )
        goto LABEL_34;
      v30 = 0.0;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      v32 = v22 + _4__this->fields.playCnt;
      *(_DWORD *)(v23 + 16) = v22;
      *(_DWORD *)(v23 + 20) = v32;
      if ( maxPlayCnt >= 51 && (int)(v32 + 1) >= 51 )
      {
        v33 = v32 / 0xA;
        v34 = (maxPlayCnt - 1) / 0xAu;
        v35 = (float)v33;
        v36 = maxPlayCnt / 0xAu;
        v37 = v33 + 1;
        v30 = v35 / (float)v34;
        if ( v30 >= 0.85 || v37 == v36 )
          v30 = 1.0;
      }
      *(float *)(v23 + 24) = v30;
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_34;
      items = listRewardAction_5__2->fields._items;
      v40 = Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__;
      ++listRewardAction_5__2->fields._version;
      if ( !items )
        goto LABEL_34;
      size = listRewardAction_5__2->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listRewardAction_5__2,
          (Il2CppObject *)v23,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        listRewardAction_5__2->fields._size = size + 1;
        v42[4] = (Il2CppClass *)v23;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), v23, v24, v25, v26, v27, v28, v29);
      }
      if ( ++v22 == 10 )
        break;
    }
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_34;
    v43 = 0;
    _4__this->fields.playCnt += listRewardAction_5__2->fields._size;
    while ( 1 )
    {
      v44 = listRewardAction_5__2->fields._size;
      if ( v43 >= v44 )
        break;
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                             listRewardAction_5__2,
                                                                             v43,
                                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
      if ( *p_listRewardAction_5__2 )
      {
        v45 = listRewardAction_5__2;
        Item = System_Collections_Generic_List_object___get_Item(
                 *p_listRewardAction_5__2,
                 v43,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        started = ResultListWindow__StartRewardAction(_4__this, (ResultListWindow_RewardAction_o *)Item, v47);
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                                                               (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                               started,
                                                                               0);
        if ( v45 )
        {
          v45->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v45->fields._syncRoot,
            (int32_t)listRewardAction_5__2,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
          listRewardAction_5__2 = *p_listRewardAction_5__2;
          ++v43;
          if ( *p_listRewardAction_5__2 )
            continue;
        }
      }
      goto LABEL_34;
    }
    if ( !v44 || v44 == _4__this->fields.maxPlayCnt )
      goto LABEL_62;
LABEL_37:
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           listRewardAction_5__2,
                                                                           listRewardAction_5__2->fields._size - 1,
                                                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
    if ( !listRewardAction_5__2 )
      goto LABEL_34;
    if ( !LOBYTE(listRewardAction_5__2->fields._version) )
      break;
    if ( !_4__this )
      goto LABEL_34;
    if ( _4__this->fields.isSkip )
      goto LABEL_44;
    this->fields._listRewardAction_5__2 = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._listRewardAction_5__2,
      0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  if ( !_4__this )
LABEL_34:
    sub_2213CDC(listRewardAction_5__2, method);
  if ( _4__this->fields.isSkip )
  {
LABEL_44:
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
    if ( listRewardAction_5__2 )
    {
      v61 = 0;
      while ( v61 < listRewardAction_5__2->fields._size )
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v61,
                                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        if ( listRewardAction_5__2 )
        {
          UnityEngine_MonoBehaviour__StopCoroutine_83445360(
            (UnityEngine_MonoBehaviour_o *)_4__this,
            (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
            0);
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
          ++v61;
          if ( listRewardAction_5__2 )
            continue;
        }
        goto LABEL_34;
      }
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
      if ( listRewardAction_5__2 )
      {
        v62 = 0;
        while ( v62 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v62,
                                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0);
            if ( !v62 && _4__this->fields.forceDropSe )
            {
              v63 = Method_ResultListWindow__StartDisp_d__50_MoveNext__;
              if ( (*((_BYTE *)Method_ResultListWindow__StartDisp_d__50_MoveNext__ + 83) & 2) != 0 )
                v63 = (_QWORD *)sub_2213A78(Method_ResultListWindow__StartDisp_d__50_MoveNext__);
              v64 = (System_Reflection_MethodBase_o *)sub_2213A44(v63, v63[4]);
              OverwriteAssetSoundName__PlaySe(v64, (System_String_o *)StringLiteral_18118/*"box3"*/, 0, 0);
            }
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
            ++v62;
            if ( listRewardAction_5__2 )
              continue;
          }
          goto LABEL_34;
        }
        _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
        ResultListWindow__EndOpen(_4__this, method);
LABEL_62:
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.skipCollider;
        if ( listRewardAction_5__2 )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)listRewardAction_5__2, 0, 0);
          if ( _4__this->fields.isDischargeGetEffectItem )
          {
            EFFECT_PLAY_TIME = 0.5;
            v68 = (System_String_o *)StringLiteral_6271/*"EndOpen"*/;
          }
          else
          {
            if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
              return 0;
            v69 = ResultListWindow_TypeInfo;
            if ( !*(&ResultListWindow_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo, v65, v66);
              v69 = ResultListWindow_TypeInfo;
            }
            EFFECT_PLAY_TIME = v69->static_fields->EFFECT_PLAY_TIME;
            v68 = (System_String_o *)StringLiteral_6271/*"EndOpen"*/;
          }
          UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v68, EFFECT_PLAY_TIME, 0);
          return 0;
        }
      }
    }
    goto LABEL_34;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v55, v56, v57, v58, v59, v60);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 2;
  return result;
}


Il2CppObject *ResultListWindow__StartDisp_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ResultListWindow__StartDisp_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ResultListWindow__StartDisp_d__50__System_Collections_IEnumerator_Reset(
        ResultListWindow__StartDisp_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ResultListWindow__StartDisp_d__50_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ResultListWindow__StartDisp_d__50__System_Collections_IEnumerator_get_Current(
        ResultListWindow__StartDisp_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ResultListWindow__StartDisp_d__50__System_IDisposable_Dispose(
        ResultListWindow__StartDisp_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void ResultListWindow__StartRewardAction_d__51___ctor(
        ResultListWindow__StartRewardAction_d__51_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ResultListWindow__StartRewardAction_d__51__MoveNext(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x20
  UIProgressBar_o *scrollBar; // x0
  int32_t i_5__2; // w8
  int32_t v8; // w9
  struct ResultListWindow_RewardAction_o *v9; // x8
  __int64 v10; // x2
  struct ResultListWindow_RewardAction_o *v11; // x8
  _BOOL4 isDischargeGetEffectItem; // w9
  ResultListWindow_c *v13; // x0
  struct ResultListWindow_RewardAction_o *rewardAction; // x8
  float maxDrawItemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v16; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int v30; // w23
  System_String_o **v31; // x8
  System_String_o *v32; // x21
  UnityEngine_Transform_o *v33; // x0
  const MethodInfo *v34; // x2
  UnityEngine_GameObject_o *v35; // x21
  struct ResultListWindow_RewardAction_o *v36; // x8
  UIProgressBar_o *v37; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  const MethodInfo *v44; // x1
  BoxGachaUtility_c *v45; // x0
  intptr_t v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  intptr_t v49; // x8
  float scrollValue; // s0
  bool v51; // w0
  _BOOL4 isSkip; // w8
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v55; // x2
  UnityEngine_GameObject_o *v56; // x21
  struct ResultListWindow_RewardAction_o *v57; // x8
  UIProgressBar_o *v58; // x22
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  const MethodInfo *v65; // x1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  BoxGachaUtility_c *v72; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v74; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v76; // x8
  Il2CppObject *ComponentInChildren_object; // x22
  __int64 v78; // x1
  __int64 v79; // x2
  Il2CppObject *v80; // x21
  __int64 v81; // x2
  Il2CppObject **v82; // x19
  int v83; // w8
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v85; // x20
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7

  if ( (byte_596A82C & 1) == 0 )
  {
    sub_2213A60(&BoxGachaUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ResultListWindow_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_19670/*"ef_boxitem_drop_rare"*/);
    sub_2213A60(&StringLiteral_19671/*"ef_boxitem_drop_scalable"*/);
    sub_2213A60(&StringLiteral_19673/*"ef_boxitem_fall_scalable"*/);
    sub_2213A60(&StringLiteral_6271/*"EndOpen"*/);
    byte_596A82C = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  scrollBar = 0;
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)scrollBar;
      i_5__2 = this->fields._i_5__2;
      this->fields.__1__state = -1;
      v8 = i_5__2 + 1;
      this->fields._i_5__2 = i_5__2 + 1;
    }
    else
    {
      v8 = 0;
      this->fields._i_5__2 = 0;
      this->fields.__1__state = -1;
    }
    rewardAction = this->fields.rewardAction;
    if ( !rewardAction )
      goto LABEL_89;
    if ( v8 < rewardAction->fields.index )
    {
      if ( _4__this )
      {
        maxDrawItemDispWaitTime = _4__this->fields.maxDrawItemDispWaitTime;
        v16 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v16, maxDrawItemDispWaitTime, 0);
        this->fields.__2__current = (Il2CppObject *)v16;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v16, v18, v19, v20, v21, v22, v23);
        LOBYTE(scrollBar) = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return (char)scrollBar;
      }
LABEL_89:
      sub_2213CDC(scrollBar, method);
    }
    scrollValue = rewardAction->fields.scrollValue;
    if ( scrollValue > 0.0 && rewardAction->fields.playCnt + 1 >= 51 )
    {
      if ( !_4__this )
        goto LABEL_89;
      if ( !_4__this->fields.isLastLineEffectPlay )
      {
        scrollBar = (UIProgressBar_o *)_4__this->fields.scrollBar;
        if ( !scrollBar )
          goto LABEL_89;
        UIProgressBar__set_value(scrollBar, scrollValue, 0);
        rewardAction = this->fields.rewardAction;
        if ( !rewardAction )
          goto LABEL_89;
        if ( rewardAction->fields.scrollValue >= 1.0 )
          _4__this->fields.isLastLineEffectPlay = 1;
      }
    }
    else if ( !_4__this )
    {
      goto LABEL_89;
    }
    v51 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, v2);
    isSkip = _4__this->fields.isSkip;
    _4__this->fields.isRare = v51;
    if ( !isSkip || v51 )
    {
      scrollBar = (UIProgressBar_o *)_4__this->fields.effectRoot;
      if ( !scrollBar )
        goto LABEL_89;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollBar, 0);
      scrollBar = (UIProgressBar_o *)BoxGachaResultEffectComponent__getEffect(
                                       (System_String_o *)StringLiteral_19673/*"ef_boxitem_fall_scalable"*/,
                                       transform,
                                       v55);
      if ( !scrollBar )
        goto LABEL_89;
      v56 = (UnityEngine_GameObject_o *)scrollBar;
      scrollBar = (UIProgressBar_o *)UnityEngine_GameObject__AddComponent_object_(
                                       (UnityEngine_GameObject_o *)scrollBar,
                                       (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v57 = this->fields.rewardAction;
      if ( !v57 )
        goto LABEL_89;
      v58 = scrollBar;
      scrollBar = (UIProgressBar_o *)_4__this->fields.resultItemObjList;
      if ( !scrollBar )
        goto LABEL_89;
      scrollBar = (UIProgressBar_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)scrollBar,
                                       v57->fields.playCnt,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !scrollBar )
        goto LABEL_89;
      scrollBar = (UIProgressBar_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollBar, 0);
      if ( !v58 )
        goto LABEL_89;
      v58->fields.onDragFinished = (struct UIProgressBar_OnDragFinished_o *)scrollBar;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v58->fields.onDragFinished,
        (int32_t)scrollBar,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v58, v65);
      if ( maxPlayCnt >= 11 )
      {
        v72 = BoxGachaUtility_TypeInfo;
        if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, method, v66);
          v72 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(v56, v72->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
      }
      scrollBar = (UIProgressBar_o *)_4__this->fields.fallEffectObjList;
      if ( !scrollBar )
        goto LABEL_89;
      m_CachedPtr = scrollBar->fields.m_CachedPtr;
      v74 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(scrollBar->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_89;
      m_CancellationTokenSource_low = SLODWORD(scrollBar->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)scrollBar,
          (Il2CppObject *)v56,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(scrollBar->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v76 + 32) = v56;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 32), (int32_t)v56, v66, v67, v68, v69, v70, v71);
      }
      if ( !_4__this->fields.isSkip )
      {
        ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                       v56,
                                       (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
        v80 = UnityEngine_GameObject__GetComponentInChildren_object_(
                v56,
                (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v78, v79);
        scrollBar = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(
                                         (UnityEngine_Object_o *)ComponentInChildren_object,
                                         0,
                                         0);
        if ( ((unsigned __int8)scrollBar & 1) != 0 )
        {
          if ( !ComponentInChildren_object )
            goto LABEL_89;
          SimpleAnimation__Play_78552168((SimpleAnimation_o *)ComponentInChildren_object, _4__this->fields.aniName, 0);
        }
        else
        {
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v81);
          scrollBar = (UIProgressBar_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v80, 0, 0);
          if ( ((unsigned __int8)scrollBar & 1) != 0 )
          {
            if ( !v80 )
              goto LABEL_89;
            UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v80, _4__this->fields.aniName, 0);
          }
        }
      }
    }
    itemDropTime = _4__this->fields.itemDropTime;
    v85 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v85, itemDropTime, 0);
    this->fields.__2__current = (Il2CppObject *)v85;
    v82 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v82, (int32_t)v85, v86, v87, v88, v89, v90, v91);
    v83 = 2;
LABEL_87:
    LOBYTE(scrollBar) = 1;
    *((_DWORD *)v82 - 2) = v83;
    return (char)scrollBar;
  }
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_89;
    scrollBar = (UIProgressBar_o *)_4__this->fields.skipCollider;
    if ( !scrollBar )
      goto LABEL_89;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)scrollBar, 1, 0);
    if ( !_4__this->fields.isSkip || _4__this->fields.isRare )
    {
      scrollBar = (UIProgressBar_o *)_4__this->fields.effectRoot;
      if ( !scrollBar )
        goto LABEL_89;
      v30 = _4__this->fields.maxPlayCnt;
      v31 = (System_String_o **)(_4__this->fields.isRare ? &StringLiteral_19670/*"ef_boxitem_drop_rare"*/ : &StringLiteral_19671/*"ef_boxitem_drop_scalable"*/);
      v32 = *v31;
      v33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollBar, 0);
      scrollBar = (UIProgressBar_o *)BoxGachaResultEffectComponent__getEffect(v32, v33, v34);
      if ( !scrollBar )
        goto LABEL_89;
      v35 = (UnityEngine_GameObject_o *)scrollBar;
      scrollBar = (UIProgressBar_o *)UnityEngine_GameObject__AddComponent_object_(
                                       (UnityEngine_GameObject_o *)scrollBar,
                                       (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v36 = this->fields.rewardAction;
      if ( !v36 )
        goto LABEL_89;
      v37 = scrollBar;
      scrollBar = (UIProgressBar_o *)_4__this->fields.resultItemObjList;
      if ( !scrollBar )
        goto LABEL_89;
      scrollBar = (UIProgressBar_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)scrollBar,
                                       v36->fields.playCnt,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !scrollBar )
        goto LABEL_89;
      scrollBar = (UIProgressBar_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollBar, 0);
      if ( !v37 )
        goto LABEL_89;
      v37->fields.onDragFinished = (struct UIProgressBar_OnDragFinished_o *)scrollBar;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v37->fields.onDragFinished,
        (int32_t)scrollBar,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v37, v44);
      if ( v30 >= 11 )
      {
        v45 = BoxGachaUtility_TypeInfo;
        if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, method, v24);
          v45 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(v35, v45->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
      }
      if ( !_4__this->fields.isRare )
      {
        scrollBar = (UIProgressBar_o *)_4__this->fields.dropEffectObjList;
        if ( !scrollBar )
          goto LABEL_89;
        v46 = scrollBar->fields.m_CachedPtr;
        v47 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(scrollBar->fields.m_CancellationTokenSource);
        if ( !v46 )
          goto LABEL_89;
        v48 = SLODWORD(scrollBar->fields.m_CancellationTokenSource);
        if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)scrollBar,
            (Il2CppObject *)v35,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = v46 + 8 * v48;
          LODWORD(scrollBar->fields.m_CancellationTokenSource) = v48 + 1;
          *(_QWORD *)(v49 + 32) = v35;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 32), (int32_t)v35, v24, v25, v26, v27, v28, v29);
        }
      }
    }
    this->fields.__2__current = 0;
    v82 = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v82, 0, v24, v25, v26, v27, v28, v29);
    v83 = 3;
    goto LABEL_87;
  }
  if ( _1__state != 3 )
    return (char)scrollBar;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_89;
  v9 = this->fields.rewardAction;
  if ( !v9 )
    goto LABEL_89;
  scrollBar = (UIProgressBar_o *)_4__this->fields.resultItemObjList;
  if ( !scrollBar )
    goto LABEL_89;
  scrollBar = (UIProgressBar_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)scrollBar,
                                   v9->fields.playCnt,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  if ( !scrollBar )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 1, 0);
  v11 = this->fields.rewardAction;
  if ( !v11 )
    goto LABEL_89;
  isDischargeGetEffectItem = _4__this->fields.isDischargeGetEffectItem;
  v11->fields.isEnd = 1;
  if ( !isDischargeGetEffectItem && v11->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
  {
    v13 = ResultListWindow_TypeInfo;
    if ( !*(&ResultListWindow_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo, method, v10);
      v13 = ResultListWindow_TypeInfo;
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)_4__this,
      (System_String_o *)StringLiteral_6271/*"EndOpen"*/,
      v13->static_fields->EFFECT_PLAY_TIME,
      0);
  }
  LOBYTE(scrollBar) = 0;
  return (char)scrollBar;
}


Il2CppObject *ResultListWindow__StartRewardAction_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ResultListWindow__StartRewardAction_d__51__System_Collections_IEnumerator_Reset(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ResultListWindow__StartRewardAction_d__51_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ResultListWindow__StartRewardAction_d__51__System_Collections_IEnumerator_get_Current(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ResultListWindow__StartRewardAction_d__51__System_IDisposable_Dispose(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  ;
}


void ResultListWindow___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596A828 & 1) == 0 )
  {
    sub_2213A60(&ResultListWindow___c_TypeInfo);
    byte_596A828 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ResultListWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ResultListWindow___c_TypeInfo->static_fields->__9 = (struct ResultListWindow___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ResultListWindow___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ResultListWindow___c___ctor(ResultListWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ResultListWindow___c___ClickSkip_b__63_0(
        ResultListWindow___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596A829 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A829 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)x, 0);
  }
}


void ResultListWindow___c___ClickSkip_b__63_1(
        ResultListWindow___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_596A82A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A82A = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)x, 0);
  }
}


void ResultListWindow___c__DisplayClass60_0___ctor(
        ResultListWindow___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ResultListWindow___c__DisplayClass60_0___Close_b__0(
        ResultListWindow___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  ResultListWindow_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (ResultListWindow__Init(_4__this, method), (_4__this = this->fields.__4__this) == 0) )
    sub_2213CDC(_4__this, method);
  ResultListWindow__ClearAllGrid(_4__this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}