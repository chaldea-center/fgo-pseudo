void ResultListWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4C21868 & 1) == 0 )
  {
    sub_1C2D490(&ResultListWindow_TypeInfo);
    byte_4C21868 = 1;
  }
  LODWORD(ResultListWindow_TypeInfo->static_fields->EFFECT_PLAY_TIME) = (struct ResultListWindow_StaticFields)1061997773;
}


void ResultListWindow___ctor(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4C21867 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&StringLiteral_18796/*"ef_boxitem_fall"*/);
    byte_4C21867 = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_C09D30;
  this->fields.aniName = (struct System_String_o *)StringLiteral_18796/*"ef_boxitem_fall"*/;
  sub_1C2D434(&this->fields.aniName);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C2D434(&this->fields.fallEffectObjList);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C2D434(&this->fields.dropEffectObjList);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4C21865 & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21865 = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (ResultListWindow_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      this = (ResultListWindow_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0);
      if ( !this )
        break;
      this = (ResultListWindow_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v5, 0);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(gameObject, 0);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1C2D6EC(this, grid);
  }
}


void ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  void *skipCollider; // x0
  System_Collections_ICollection_o *fallEffectObjList; // x0
  struct System_Collections_Generic_List_GameObject__o *v5; // x20
  System_Action_object__o *v6; // x21
  Il2CppObject *v7; // x22
  struct ResultListWindow___c_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x19
  System_Action_object__o *v10; // x20
  Il2CppObject *v11; // x21
  struct ResultListWindow___c_StaticFields *v12; // x0

  if ( (byte_4C21866 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_GameObject__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C2D490(&Method_ResultListWindow___c__ClickSkip_b__63_0__);
    sub_1C2D490(&Method_ResultListWindow___c__ClickSkip_b__63_1__);
    sub_1C2D490(&ResultListWindow___c_TypeInfo);
    byte_4C21866 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_25;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_25:
    sub_1C2D6EC(skipCollider, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0);
  fallEffectObjList = (System_Collections_ICollection_o *)this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( !BasicHelper__IsNullOrEmpty(fallEffectObjList, 0) )
  {
    v5 = this->fields.fallEffectObjList;
    skipCollider = ResultListWindow___c_TypeInfo;
    if ( !ResultListWindow___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResultListWindow___c_TypeInfo);
      skipCollider = ResultListWindow___c_TypeInfo;
    }
    v6 = *(System_Action_object__o **)(*((_QWORD *)skipCollider + 23) + 8LL);
    if ( !v6 )
    {
      if ( !*((_DWORD *)skipCollider + 56) )
      {
        j_il2cpp_runtime_class_init_0(skipCollider);
        skipCollider = ResultListWindow___c_TypeInfo;
      }
      v7 = (Il2CppObject *)**((_QWORD **)skipCollider + 23);
      v6 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v6, v7, Method_ResultListWindow___c__ClickSkip_b__63_0__, 0);
      static_fields = ResultListWindow___c_TypeInfo->static_fields;
      static_fields->__9__63_0 = (struct System_Action_GameObject__o *)v6;
      skipCollider = (void *)sub_1C2D434(&static_fields->__9__63_0);
    }
    if ( !v5 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v5,
      (System_Action_T__o *)v6,
      (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropEffectObjList, 0) )
  {
    dropEffectObjList = this->fields.dropEffectObjList;
    skipCollider = ResultListWindow___c_TypeInfo;
    if ( !ResultListWindow___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResultListWindow___c_TypeInfo);
      skipCollider = ResultListWindow___c_TypeInfo;
    }
    v10 = *(System_Action_object__o **)(*((_QWORD *)skipCollider + 23) + 16LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)skipCollider + 56) )
      {
        j_il2cpp_runtime_class_init_0(skipCollider);
        skipCollider = ResultListWindow___c_TypeInfo;
      }
      v11 = (Il2CppObject *)**((_QWORD **)skipCollider + 23);
      v10 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v10, v11, Method_ResultListWindow___c__ClickSkip_b__63_1__, 0);
      v12 = ResultListWindow___c_TypeInfo->static_fields;
      v12->__9__63_1 = (struct System_Action_GameObject__o *)v10;
      skipCollider = (void *)sub_1C2D434(&v12->__9__63_1);
    }
    if ( dropEffectObjList )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)dropEffectObjList,
        (System_Action_T__o *)v10,
        (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
      return;
    }
    goto LABEL_25;
  }
}


void ResultListWindow__Close(ResultListWindow_o *this, System_Action_o *callback, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_4C21864 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__);
    sub_1C2D490(&ResultListWindow___c__DisplayClass60_0_TypeInfo);
    byte_4C21864 = 1;
  }
  v5 = (Il2CppObject *)sub_1C2D6DC(ResultListWindow___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v5[1]);
  v5[1].monitor = callback;
  sub_1C2D434(&v5[1].monitor);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, v5, Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0);
}


void ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v5; // x1
  UIProgressBar_o *v6; // x0
  float v7; // s0

  if ( (byte_4C21863 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6295/*"ExecuteOpenCallBack"*/);
    byte_4C21863 = 1;
  }
  if ( this->fields.maxPlayCnt <= 50 )
    ResultListWindow__SetScrollControllEnabled(this, 0, v2);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0)
    && this->fields.maxPlayCnt + 1 >= 52
    && !this->fields.isLastLineEffectPlay )
  {
    v6 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v6 )
      sub_1C2D6EC(0, v5);
    UIProgressBar__set_value(v6, 1.0, 0);
    this->fields.isLastLineEffectPlay = 1;
  }
  if ( this->fields.openCallBack )
  {
    if ( this->fields.isLongPress )
      v7 = flt_C070C0[this->fields.maxPlayCnt > 10];
    else
      v7 = 0.0;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6295/*"ExecuteOpenCallBack"*/, v7, 0);
  }
}


void ResultListWindow__ExecuteOpenCallBack(ResultListWindow_o *this, const MethodInfo *method)
{
  struct System_Action_bool__o *openCallBack; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  openCallBack = this->fields.openCallBack;
  this->fields.openCallBack = 0;
  v4 = sub_1C2D434(&this->fields.openCallBack);
  if ( !openCallBack )
    sub_1C2D6EC(v4, v5);
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
    sub_1C2D6EC(0, method);
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0);
  this->fields.playCnt = 0;
  this->fields.maxPlayCnt = 0;
  this->fields.isRare = 0;
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
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int32_t v25; // w2
  int v26; // w9
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w23
  UnityEngine_Object_o *scrollBar; // x22
  UnityEngine_Object_o *resultScrollView; // x22
  const MethodInfo *v31; // x2
  bool v32; // w0

  if ( (byte_4C21859 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21859 = 1;
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
      v25 = dropEffectObjList->fields._size;
      v26 = dropEffectObjList->fields._version + 1;
      dropEffectObjList->fields._size = 0;
      dropEffectObjList->fields._version = v26;
      if ( v25 >= 1 )
        System_Array__Clear((System_Array_o *)dropEffectObjList->fields._items, 0, v25, 0);
    }
    this->fields.openCallBack = callback;
    sub_1C2D434(&this->fields.openCallBack);
    this->fields.resultIdList = resultIds;
    sub_1C2D434(&this->fields.resultIdList);
    this->fields.rareIdxList = rareIdxs;
    sub_1C2D434(&this->fields.rareIdxList);
    this->fields.baseNoList = baseNos;
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D434(&this->fields.baseNoList);
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
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
            goto LABEL_25;
          resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(resultScrollView, 0, 0) )
            goto LABEL_25;
          gameObject = (UnityEngine_GameObject_o *)this->fields.scrollBar;
          if ( gameObject )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, max_length > 50, 0);
              ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v31);
LABEL_25:
              this->fields.isSkip = isResultLongPress;
              this->fields.isLongPress = isResultLongPress;
              v32 = isResultLongPress && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)rareIdxs, 0);
              this->fields.forceDropSe = v32;
              ResultListWindow__setResultItem(this, v19);
              BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C2D6EC(gameObject, v19);
  }
}


void ResultListWindow__SetScrollControllEnabled(ResultListWindow_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Object_o *resultScrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4C2185A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2185A = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0, 0) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0);
  }
}


System_Collections_IEnumerator_o *ResultListWindow__StartDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4C2185C & 1) == 0 )
  {
    sub_1C2D490(&ResultListWindow__StartDisp_d__50_TypeInfo);
    byte_4C2185C = 1;
  }
  v3 = sub_1C2D6DC(ResultListWindow__StartDisp_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434(v3 + 32);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C2185D & 1) == 0 )
  {
    sub_1C2D490(&ResultListWindow__StartRewardAction_d__51_TypeInfo);
    byte_4C2185D = 1;
  }
  v5 = sub_1C2D6DC(ResultListWindow__StartRewardAction_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434(v5 + 32);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1C2D434(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


void ResultListWindow__Update(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( !UnityEngine_Input__get_touchCount(0) )
    this->fields.isLongPress = 0;
}


// local variable allocation has failed, the output may be wrong!
bool ResultListWindow__checkRare(ResultListWindow_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Int32_array *rareIdxList; // x8
  il2cpp_array_size_t max_length; // x9
  _BOOL8 v7; // x0
  unsigned __int64 v9; // x21
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = 0;
  rareIdxList = this->fields.rareIdxList;
  if ( rareIdxList )
  {
    max_length = rareIdxList->max_length;
    v7 = 0;
    if ( max_length && (int)max_length >= 1 )
    {
      v9 = 0;
      do
      {
        if ( v9 >= (unsigned int)max_length )
          sub_1C2D6F4(v7, *(_QWORD *)&idx, method, v3);
        v11 = rareIdxList->m_Items[v9];
        v7 = System_Int32__Equals_64968544((int32_t)&v11, idx, 0);
        if ( v7 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_1C2D6EC(v7, *(_QWORD *)&idx);
        LODWORD(max_length) = rareIdxList->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)max_length );
    }
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return v7;
}


void ResultListWindow__endDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  int32_t maxPlayCnt; // w8
  _BOOL4 isDischargeGetEffectItem; // w9

  if ( (byte_4C21862 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6008/*"EndOpen"*/);
    sub_1C2D490(&StringLiteral_23300/*"setDisp"*/);
    byte_4C21862 = 1;
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
        (System_String_o *)StringLiteral_6008/*"EndOpen"*/,
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
      (System_String_o *)StringLiteral_23300/*"setDisp"*/,
      0.00001,
      0);
    if ( !this->fields.isDischargeGetEffectItem && this->fields.playCnt == this->fields.maxPlayCnt - 1 )
      goto LABEL_6;
  }
}


void ResultListWindow__playEffectDrop(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0
  int32_t maxPlayCnt; // w8
  _BOOL4 v5; // w22
  System_String_o **v6; // x9
  System_String_o *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Transform_o *v11; // x21
  BoxGachaUtility_c *v12; // x0
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  intptr_t v16; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21860 & 1) == 0 )
  {
    sub_1C2D490(&BoxGachaUtility_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&StringLiteral_18794/*"ef_boxitem_drop_rare"*/);
    sub_1C2D490(&StringLiteral_18793/*"ef_boxitem_drop"*/);
    sub_1C2D490(&StringLiteral_23466/*"showResultItem"*/);
    byte_4C21860 = 1;
  }
  if ( this->fields.isSkip && !this->fields.isRare )
    goto LABEL_30;
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_31;
  UnityEngine_Collider__set_enabled(skipCollider, 1, 0);
  maxPlayCnt = this->fields.maxPlayCnt;
  v5 = maxPlayCnt > 10;
  if ( this->fields.isRare )
    v6 = (System_String_o **)&StringLiteral_18794/*"ef_boxitem_drop_rare"*/;
  else
    v6 = (System_String_o **)&StringLiteral_18793/*"ef_boxitem_drop"*/;
  v7 = *v6;
  if ( maxPlayCnt < 11 )
  {
    v5 = 0;
LABEL_14:
    skipCollider = (UnityEngine_Collider_o *)GameObjectExtensions__GetParent(this->fields.dispObj, 0);
    if ( !skipCollider )
      goto LABEL_31;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0);
    goto LABEL_16;
  }
  if ( this->fields.playCnt >= 31 )
    goto LABEL_14;
  skipCollider = (UnityEngine_Collider_o *)this->fields.effectRoot;
  if ( !skipCollider )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skipCollider, 0);
LABEL_16:
  skipCollider = (UnityEngine_Collider_o *)BoxGachaResultEffectComponent__getEffect(v7, transform, v9);
  if ( !skipCollider )
    goto LABEL_31;
  v10 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)skipCollider,
                                             0);
  if ( !this->fields.dispObj )
    goto LABEL_31;
  v11 = (UnityEngine_Transform_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispObj, 0);
  if ( !skipCollider )
    goto LABEL_31;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skipCollider, 0);
  if ( !v11 )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition(v11, localPosition, 0);
  if ( v5 )
  {
    v12 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v12 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v10, v12->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
  }
  if ( !this->fields.isRare )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.dropEffectObjList;
    if ( skipCollider )
    {
      m_CachedPtr = skipCollider->fields.m_CachedPtr;
      v14 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(skipCollider[1].klass);
      if ( m_CachedPtr )
      {
        klass_low = SLODWORD(skipCollider[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skipCollider,
            (Il2CppObject *)v10,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = m_CachedPtr + 8 * klass_low;
          LODWORD(skipCollider[1].klass) = klass_low + 1;
          *(_QWORD *)(v16 + 32) = v10;
          sub_1C2D434(v16 + 32);
        }
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1C2D6EC(skipCollider, method);
  }
LABEL_30:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23466/*"showResultItem"*/,
    this->fields.itemDispWaitTime,
    0);
}


void ResultListWindow__setDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *resultItemObjList; // x0
  UnityEngine_GameObject_o **p_dispObj; // x21
  const MethodInfo *v5; // x2
  bool v6; // w0
  int32_t playCnt; // w8
  _BOOL4 isSkip; // w9
  int32_t v9; // w8
  int32_t maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x8
  UnityEngine_Transform_o *v15; // x21
  BoxGachaUtility_c *v16; // x0
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v22; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2185F & 1) == 0 )
  {
    sub_1C2D490(&BoxGachaUtility_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_22697/*"playEffectDrop"*/);
    sub_1C2D490(&StringLiteral_18796/*"ef_boxitem_fall"*/);
    byte_4C2185F = 1;
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  p_dispObj = &this->fields.dispObj;
  this->fields.dispObj = (struct UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                              resultItemObjList,
                                                              this->fields.playCnt,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  sub_1C2D434(&this->fields.dispObj);
  v6 = ResultListWindow__checkRare(this, this->fields.playCnt, v5);
  playCnt = this->fields.playCnt;
  isSkip = this->fields.isSkip;
  this->fields.isRare = v6;
  v9 = playCnt + 1;
  this->fields.playCnt = v9;
  if ( isSkip && !v6 )
  {
    ResultListWindow__showResultItem(this, method);
    return;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( v9 > 30 || maxPlayCnt <= 10 )
  {
    resultItemObjList = (System_Collections_Generic_List_object__o *)GameObjectExtensions__GetParent(*p_dispObj, 0);
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
                                                                     (System_String_o *)StringLiteral_18796/*"ef_boxitem_fall"*/,
                                                                     transform,
                                                                     v12);
  if ( !resultItemObjList )
    goto LABEL_38;
  v13 = (UnityEngine_GameObject_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)resultItemObjList,
                                                                     0);
  v14 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_38;
  v15 = (UnityEngine_Transform_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v14, 0);
  if ( !resultItemObjList )
    goto LABEL_38;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)resultItemObjList, 0);
  if ( !v15 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v15, localPosition, 0);
  if ( maxPlayCnt >= 11 )
  {
    v16 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v16 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v13, v16->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
  if ( !resultItemObjList
    || (items = resultItemObjList->fields._items,
        v18 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resultItemObjList->fields._version,
        !items) )
  {
LABEL_38:
    sub_1C2D6EC(resultItemObjList, method);
  }
  size = resultItemObjList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resultItemObjList,
      (Il2CppObject *)v13,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    resultItemObjList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v13;
    sub_1C2D434(v20 + 4);
  }
  if ( this->fields.isSkip )
    goto LABEL_37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v13,
                                 (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v22 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v13,
          (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                     0,
                                                                     0);
  if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                       (UnityEngine_Object_o *)v22,
                                                                       0,
                                                                       0);
    if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
      goto LABEL_37;
    if ( v22 )
    {
      UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)v22, this->fields.aniName, 0);
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( !ComponentInChildren_object )
    goto LABEL_38;
  SimpleAnimation__Play_66404364((SimpleAnimation_o *)ComponentInChildren_object, this->fields.aniName, 0);
LABEL_37:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22697/*"playEffectDrop"*/,
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
    sub_1C2D6EC(firstLineGrid, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0);
}


// local variable allocation has failed, the output may be wrong!
void ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  __int64 resultList; // x0
  const MethodInfo *v5; // x1
  struct UIGrid_o *firstResultGrid; // x8
  int32_t maxPerLine; // w21
  struct UIGrid_o *sceResultGrid; // x8
  int32_t v9; // w24
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w29
  __int64 v12; // x12
  __int64 v13; // x8
  BoxGachaBaseMaster_o *v14; // x22
  signed __int64 v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  struct UIGrid_o **v18; // x8
  struct System_Int32_array *baseNoList; // x9
  UnityEngine_Component_o *v20; // x24
  UnityEngine_GameObject_o *resultListItemPrefab; // x26
  BoxGachaBaseEntity_o *v22; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v24; // x24
  UnityEngine_Transform_o *v25; // x26
  BoxGachaUtility_c *v26; // x8
  ResultItemComponent_o *v27; // x26
  int *static_fields; // x8
  int v29; // s2
  int v30; // s1 OVERLAPPED
  int v31; // s0
  const MethodInfo *v32; // x1
  UnityEngine_GameObject_o *resultListResultFrame; // x27
  UnityEngine_Transform_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x27
  UnityEngine_Transform_o *v36; // x28
  BoxGachaUtility_c *v37; // x0
  int32_t IntValue; // w27
  int32_t v39; // w28
  int32_t type; // w8
  const MethodInfo *v41; // x4
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  struct System_Int32_array *v48; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  float v51; // s0
  int32_t v52; // w1
  const MethodInfo *v53; // x1
  signed __int64 v54; // [xsp+0h] [xbp-B0h]
  struct System_Collections_Generic_List_GameObject__o **p_resultItemObjList; // [xsp+8h] [xbp-A8h]
  struct UIGrid_o **p_thrResultGrid; // [xsp+10h] [xbp-A0h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+18h] [xbp-98h]
  GiftMaster_o *Master_object; // [xsp+20h] [xbp-90h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+30h] [xbp-80h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+38h] [xbp-78h]
  __int64 v61; // [xsp+40h] [xbp-70h]
  __int64 v62; // [xsp+48h] [xbp-68h]

  if ( (byte_4C2185B & 1) == 0 )
  {
    sub_1C2D490(&BoxGachaUtility_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_BoxGachaBaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_22533/*"overwriteFirstTimeDispItemId"*/);
    sub_1C2D490(&StringLiteral_13050/*"StartDisp"*/);
    sub_1C2D490(&StringLiteral_22524/*"overwriteDispItemId"*/);
    sub_1C2D490(&StringLiteral_22532/*"overwriteFirstTimeDispItemGet"*/);
    byte_4C2185B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  p_resultItemObjList = &this->fields.resultItemObjList;
  resultList = sub_1C2D434(&this->fields.resultItemObjList);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_88;
  maxPerLine = firstResultGrid->fields.maxPerLine;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_88;
  v9 = sceResultGrid->fields.maxPerLine;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
  resultList = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
  resultIdList = this->fields.resultIdList;
  if ( !resultIdList )
    goto LABEL_88;
  max_length = resultIdList->max_length;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length <= 10 )
    v12 = 8;
  else
    v12 = 20;
  if ( max_length <= 10 )
    v13 = 4;
  else
    v13 = 16;
  v61 = v13;
  v62 = v12;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  if ( max_length >= 1 )
  {
    v14 = (BoxGachaBaseMaster_o *)resultList;
    v15 = 0;
    v54 = v9 + maxPerLine - 1;
    do
    {
      resultList = (__int64)this->fields.resultList;
      if ( !resultList )
        goto LABEL_88;
      resultList = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)resultList, 0);
      if ( !resultList )
        goto LABEL_88;
      if ( max_length < 11 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultList, 1, 0);
        v18 = &this->fields.firstResultGrid;
        if ( v15 > maxPerLine - 1 )
        {
          v18 = &this->fields.sceResultGrid;
          if ( v15 > v54 )
            v18 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultList, 0, 0);
        v18 = &this->fields.resultScrollViewGrid;
      }
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_88;
      if ( v15 >= (unsigned __int64)LODWORD(baseNoList->max_length) )
        sub_1C2D6F4(resultList, v5, v16, v17);
      if ( !v14 )
        goto LABEL_88;
      v20 = (UnityEngine_Component_o *)*v18;
      resultList = (__int64)BoxGachaBaseMaster__GetEntity(v14, this->fields.currentBaseId, baseNoList->m_Items[v15], 0);
      if ( !v20 )
        goto LABEL_88;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v22 = (BoxGachaBaseEntity_o *)resultList;
      transform = UnityEngine_Component__get_transform(v20, 0);
      resultList = (__int64)BaseMonoBehaviour__createObject(
                              (BaseMonoBehaviour_o *)this,
                              resultListItemPrefab,
                              transform,
                              0,
                              0);
      if ( !resultList )
        goto LABEL_88;
      v24 = (UnityEngine_GameObject_o *)resultList;
      resultList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resultList, 0);
      v25 = (UnityEngine_Transform_o *)resultList;
      if ( !byte_4C20DA6 )
      {
        resultList = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v25 )
        goto LABEL_88;
      UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      resultList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v24,
                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v26 = BoxGachaUtility_TypeInfo;
      v27 = (ResultItemComponent_o *)resultList;
      if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
        v26 = BoxGachaUtility_TypeInfo;
      }
      if ( !v27 )
        goto LABEL_88;
      static_fields = (int *)v26->static_fields;
      v29 = *(int *)((char *)static_fields + v62);
      v30 = *(int *)((char *)static_fields + v61);
      if ( max_length > 10 )
        static_fields += 3;
      v31 = *static_fields;
      ResultItemComponent__SetItemIconScale(v27, *(UnityEngine_Vector3_o *)(&v30 - 1), v5);
      ResultItemComponent__Clear(v27, v32);
      if ( max_length >= 11 )
      {
        resultList = (__int64)this->fields.resultScrollViewResultFrameGrid;
        if ( !resultList )
          goto LABEL_88;
        resultListResultFrame = this->fields.resultListResultFrame;
        v34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resultList, 0);
        resultList = (__int64)BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                resultListResultFrame,
                                v34,
                                0,
                                0);
        if ( !resultList )
          goto LABEL_88;
        v35 = (UnityEngine_GameObject_o *)resultList;
        resultList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resultList, 0);
        v36 = (UnityEngine_Transform_o *)resultList;
        if ( !byte_4C20DA6 )
        {
          resultList = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
        }
        if ( !v36 )
          goto LABEL_88;
        UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        v37 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v37 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(v35, v37->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
        resultList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v24,
                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !resultList )
          goto LABEL_88;
        *(_QWORD *)(resultList + 32) = this->fields.resultScrollView;
        resultList = sub_1C2D434(resultList + 32);
      }
      if ( v22 )
      {
        if ( v22->fields.isRare )
          ResultItemComponent__SetRareItem(v27, v5);
        IntValue = EntityScriptUtil__GetIntValue(v22->fields.script, (System_String_o *)StringLiteral_22524/*"overwriteDispItemId"*/, 0, 0);
        resultList = EntityScriptUtil__GetIntValue(v22->fields.script, (System_String_o *)StringLiteral_22533/*"overwriteFirstTimeDispItemId"*/, 0, 0);
        if ( (int)resultList >= 1 )
        {
          v39 = resultList;
          resultList = UnityEngine_PlayerPrefs__GetInt_71121948((System_String_o *)StringLiteral_22532/*"overwriteFirstTimeDispItemGet"*/, 0);
          if ( !(_DWORD)resultList )
            IntValue = v39;
        }
        type = v22->fields.type;
        if ( type == 1 )
        {
          resultList = (__int64)Master_object;
          if ( !Master_object )
            goto LABEL_88;
          resultList = (__int64)GiftMaster__getDataById(Master_object, v22->fields.targetId, 0);
          if ( resultList )
          {
            if ( *(int *)(resultList + 28) <= 1 )
              v42 = 0;
            else
              v42 = *(_DWORD *)(resultList + 28);
            ResultItemComponent__Set(v27, (GiftEntity_o *)resultList, v42, IntValue, v41);
            goto LABEL_62;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          resultList = (__int64)BoxGachaBaseEntity__getRewardSetData(v22, this->fields.currentEventId, 0);
          if ( resultList )
          {
            ResultItemComponent__SetExtra(v27, *(_DWORD *)(resultList + 28), *(_DWORD *)(resultList + 48), v43);
LABEL_62:
            UnityEngine_GameObject__SetActive(v24, 0, 0);
            resultList = (__int64)*p_resultItemObjList;
            if ( !*p_resultItemObjList )
              goto LABEL_88;
            v44 = *(_QWORD *)(resultList + 16);
            v45 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++*(_DWORD *)(resultList + 28);
            if ( !v44 )
              goto LABEL_88;
            v46 = *(int *)(resultList + 24);
            if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)resultList,
                (Il2CppObject *)v24,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = v44 + 8 * v46;
              *(_DWORD *)(resultList + 24) = v46 + 1;
              *(_QWORD *)(v47 + 32) = v24;
              resultList = sub_1C2D434(v47 + 32);
            }
          }
        }
      }
      v48 = this->fields.resultIdList;
      if ( !v48 )
        goto LABEL_88;
      ++v15;
    }
    while ( v15 < SLODWORD(v48->max_length) );
  }
  if ( max_length >= 11 )
  {
    adjustSprite = (UnityEngine_Object_o *)this->fields.adjustSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(adjustSprite, 0, 0) )
    {
      maxPlayCnt = this->fields.maxPlayCnt;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      resultList = (__int64)this->fields.adjustSprite;
      if ( resultList )
      {
        v51 = ceilf((float)maxPlayCnt / 10.0);
        if ( v51 == INFINITY )
          v52 = 5;
        else
          v52 = 60 * (int)v51 + 5;
        UIWidget__set_height((UIWidget_o *)resultList, v52, 0);
        goto LABEL_80;
      }
LABEL_88:
      sub_1C2D6EC(resultList, v5);
    }
  }
LABEL_80:
  resultList = (__int64)*p_firstResultGrid;
  if ( !*p_firstResultGrid )
    goto LABEL_88;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  resultList = (__int64)*p_sceResultGrid;
  if ( !*p_sceResultGrid )
    goto LABEL_88;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  resultList = (__int64)*p_thrResultGrid;
  if ( !*p_thrResultGrid )
    goto LABEL_88;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  resultList = (__int64)*p_resultScrollViewGrid;
  if ( !*p_resultScrollViewGrid )
    goto LABEL_88;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  resultList = (__int64)this->fields.resultScrollViewResultFrameGrid;
  if ( !resultList )
    goto LABEL_88;
  UIGrid__set_repositionNow((UIGrid_o *)resultList, 1, 0);
  if ( max_length < 11 )
    ResultListWindow__showResultEffect(this, v53);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13050/*"StartDisp"*/,
      0);
}


void ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C2185E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23300/*"setDisp"*/);
    byte_4C2185E = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_23300/*"setDisp"*/, 0.3, 0);
}


void ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C21861 & 1) == 0 )
  {
    sub_1C2D490(&Method_ResultListWindow_showResultItem__);
    sub_1C2D490(&StringLiteral_17355/*"box3"*/);
    sub_1C2D490(&StringLiteral_18998/*"endDisp"*/);
    byte_4C21861 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_1C2D6EC(0, method);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0);
  if ( this->fields.playCnt == 1 && this->fields.forceDropSe )
  {
    v4 = Method_ResultListWindow_showResultItem__;
    if ( (*((_BYTE *)Method_ResultListWindow_showResultItem__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_ResultListWindow_showResultItem__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
    OverwriteAssetSoundName__PlaySe(v5, (System_String_o *)StringLiteral_17355/*"box3"*/, 0, 0);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_18998/*"endDisp"*/,
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
  bool result; // w0
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  System_Collections_Generic_List_object__o *v8; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  int v10; // w23
  __int64 v11; // x22
  float v12; // s0
  unsigned int v13; // w9
  int maxPlayCnt; // w8
  signed int v15; // w9
  int v16; // w9
  unsigned int v17; // w8
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  int v23; // w8
  int32_t v24; // w22
  System_Collections_Generic_List_object__o *v25; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v27; // x2
  System_Collections_IEnumerator_o *started; // x0
  struct System_Collections_Generic_List_ResultListWindow_RewardAction__o **v29; // x21
  int32_t v30; // w20
  int32_t v31; // w20
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v35; // x1
  ResultListWindow_c *v36; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_4C2186C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    sub_1C2D490(&ResultListWindow_TypeInfo);
    sub_1C2D490(&ResultListWindow_RewardAction_TypeInfo);
    sub_1C2D490(&Method_ResultListWindow__StartDisp_d__50_MoveNext__);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C2D490(&StringLiteral_17355/*"box3"*/);
    sub_1C2D490(&StringLiteral_6008/*"EndOpen"*/);
    byte_4C2186C = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
    this->fields.__1__state = -1;
    if ( listRewardAction_5__2 )
      goto LABEL_37;
    goto LABEL_74;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, 0.2, 0);
      this->fields.__2__current = (Il2CppObject *)v5;
      sub_1C2D434(&this->fields.__2__current);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)v8;
    p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)sub_1C2D434(&this->fields._listRewardAction_5__2);
    if ( !_4__this )
      goto LABEL_74;
    v10 = 0;
    while ( v10 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
    {
      v11 = sub_1C2D6DC(ResultListWindow_RewardAction_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      if ( !v11 )
        goto LABEL_74;
      *(_DWORD *)(v11 + 16) = v10;
      v12 = 0.0;
      v13 = v10 + _4__this->fields.playCnt;
      *(_DWORD *)(v11 + 20) = v13;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v13 + 1) >= 51 )
      {
        v15 = v13 / 0xA;
        v12 = (float)v15 / (float)((maxPlayCnt - 1) / 10);
        v16 = v15 + 1;
        v17 = maxPlayCnt / 0xAu;
        if ( v12 >= 0.85 || v16 == v17 )
          v12 = 1.0;
      }
      *(float *)(v11 + 24) = v12;
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_74;
      items = listRewardAction_5__2->fields._items;
      v20 = Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__;
      ++listRewardAction_5__2->fields._version;
      if ( !items )
        goto LABEL_74;
      size = listRewardAction_5__2->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listRewardAction_5__2,
          (Il2CppObject *)v11,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        listRewardAction_5__2->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v11;
        sub_1C2D434(v22 + 4);
      }
      if ( ++v10 == 10 )
        break;
    }
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_74;
    v23 = listRewardAction_5__2->fields._size;
    _4__this->fields.playCnt += v23;
    if ( v23 >= 1 )
    {
      v24 = 0;
      do
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v24,
                                                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_74;
        v25 = listRewardAction_5__2;
        Item = System_Collections_Generic_List_object___get_Item(
                 *p_listRewardAction_5__2,
                 v24,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        started = ResultListWindow__StartRewardAction(_4__this, (ResultListWindow_RewardAction_o *)Item, v27);
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                                                                               (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                               started,
                                                                               0);
        if ( !v25 )
          goto LABEL_74;
        v25->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
        sub_1C2D434(&v25->fields._syncRoot);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_74;
        v23 = listRewardAction_5__2->fields._size;
      }
      while ( ++v24 < v23 );
    }
    if ( !v23 || v23 == _4__this->fields.maxPlayCnt )
      goto LABEL_63;
LABEL_37:
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           listRewardAction_5__2,
                                                                           listRewardAction_5__2->fields._size - 1,
                                                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
    if ( !listRewardAction_5__2 )
      goto LABEL_74;
    if ( LOBYTE(listRewardAction_5__2->fields._version) )
    {
      if ( !_4__this )
        goto LABEL_74;
      goto LABEL_43;
    }
    if ( !_4__this )
      goto LABEL_74;
    if ( !_4__this->fields.isSkip )
      break;
LABEL_43:
    v29 = &this->fields._listRewardAction_5__2;
    if ( _4__this->fields.isSkip )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v29;
      if ( *v29 )
      {
        v30 = 0;
        while ( v30 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v30,
                                                                                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_71149896(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v29;
            ++v30;
            if ( *v29 )
              continue;
          }
          goto LABEL_74;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v31 = 0;
          while ( v31 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v31,
                                                                                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0);
              if ( !v31 && _4__this->fields.forceDropSe )
              {
                v32 = Method_ResultListWindow__StartDisp_d__50_MoveNext__;
                if ( (*((_BYTE *)Method_ResultListWindow__StartDisp_d__50_MoveNext__ + 83) & 2) != 0 )
                  v32 = (_QWORD *)sub_1C2D4A8(Method_ResultListWindow__StartDisp_d__50_MoveNext__);
                v33 = (System_Reflection_MethodBase_o *)sub_1C2D474(v32, v32[4]);
                OverwriteAssetSoundName__PlaySe(v33, (System_String_o *)StringLiteral_17355/*"box3"*/, 0, 0);
              }
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v31;
              if ( listRewardAction_5__2 )
                continue;
            }
            goto LABEL_74;
          }
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          ResultListWindow__EndOpen(_4__this, method);
LABEL_63:
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.skipCollider;
          if ( listRewardAction_5__2 )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)listRewardAction_5__2, 0, 0);
            if ( _4__this->fields.isDischargeGetEffectItem )
            {
              EFFECT_PLAY_TIME = 0.5;
              v35 = (System_String_o *)StringLiteral_6008/*"EndOpen"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v36 = ResultListWindow_TypeInfo;
              if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v36 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v36->static_fields->EFFECT_PLAY_TIME;
              v35 = (System_String_o *)StringLiteral_6008/*"EndOpen"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v35, EFFECT_PLAY_TIME, 0);
            return 0;
          }
        }
      }
LABEL_74:
      sub_1C2D6EC(listRewardAction_5__2, method);
    }
    *v29 = 0;
    sub_1C2D434(&this->fields._listRewardAction_5__2);
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C2D434(p__2__current);
  *((_DWORD *)p__2__current - 2) = 2;
  return 1;
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ResultListWindow__StartDisp_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  ResultListWindow__StartRewardAction_d__51_o *v3; // x19
  struct ResultListWindow_o *_4__this; // x20
  int32_t v5; // w9
  int32_t i_5__2; // w8
  struct ResultListWindow_RewardAction_o *rewardAction; // x8
  float maxDrawItemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int v12; // w23
  System_String_o **v13; // x8
  System_String_o *v14; // x21
  UnityEngine_Transform_o *v15; // x0
  const MethodInfo *v16; // x2
  ResultListWindow__StartRewardAction_d__51_o *v17; // x21
  struct ResultListWindow_RewardAction_o *v18; // x8
  SyncPositionComponent_o *v19; // x22
  const MethodInfo *v20; // x1
  BoxGachaUtility_c *v21; // x0
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  struct ResultListWindow_RewardAction_o *v26; // x8
  struct ResultListWindow_RewardAction_o *v27; // x8
  ResultListWindow_c *v28; // x0
  float scrollValue; // s0
  bool v30; // w0
  _BOOL4 isSkip; // w8
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v34; // x2
  ResultListWindow__StartRewardAction_d__51_o *v35; // x21
  struct ResultListWindow_RewardAction_o *v36; // x8
  SyncPositionComponent_o *v37; // x22
  const MethodInfo *v38; // x1
  BoxGachaUtility_c *v39; // x0
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 _2__current_low; // x10
  __int64 v43; // x8
  Il2CppObject *ComponentInChildren_object; // x22
  Il2CppObject *v45; // x21
  Il2CppObject **v46; // x19
  int v47; // w8
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v49; // x20

  v3 = this;
  if ( (byte_4C2186D & 1) == 0 )
  {
    sub_1C2D490(&BoxGachaUtility_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ResultListWindow_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C2D490(&StringLiteral_18794/*"ef_boxitem_drop_rare"*/);
    sub_1C2D490(&StringLiteral_18795/*"ef_boxitem_drop_scalable"*/);
    sub_1C2D490(&StringLiteral_18797/*"ef_boxitem_fall_scalable"*/);
    this = (ResultListWindow__StartRewardAction_d__51_o *)sub_1C2D490(&StringLiteral_6008/*"EndOpen"*/);
    byte_4C2186D = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v5 = 0;
      v3->fields.__1__state = -1;
      v3->fields._i_5__2 = 0;
      goto LABEL_6;
    case 1:
      i_5__2 = v3->fields._i_5__2;
      v3->fields.__1__state = -1;
      v5 = i_5__2 + 1;
      v3->fields._i_5__2 = i_5__2 + 1;
LABEL_6:
      rewardAction = v3->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_84;
      if ( v5 < rewardAction->fields.index )
      {
        if ( _4__this )
        {
          maxDrawItemDispWaitTime = _4__this->fields.maxDrawItemDispWaitTime;
          v9 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v9, maxDrawItemDispWaitTime, 0);
          v3->fields.__2__current = (Il2CppObject *)v9;
          p__2__current = &v3->fields.__2__current;
          sub_1C2D434(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_84:
        sub_1C2D6EC(this, method);
      }
      scrollValue = rewardAction->fields.scrollValue;
      if ( scrollValue > 0.0 && rewardAction->fields.playCnt + 1 >= 51 )
      {
        if ( !_4__this )
          goto LABEL_84;
        if ( !_4__this->fields.isLastLineEffectPlay )
        {
          this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.scrollBar;
          if ( !this )
            goto LABEL_84;
          UIProgressBar__set_value((UIProgressBar_o *)this, scrollValue, 0);
          rewardAction = v3->fields.rewardAction;
          if ( !rewardAction )
            goto LABEL_84;
          if ( rewardAction->fields.scrollValue >= 1.0 )
            _4__this->fields.isLastLineEffectPlay = 1;
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_84;
      }
      v30 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, v2);
      isSkip = _4__this->fields.isSkip;
      _4__this->fields.isRare = v30;
      if ( !isSkip || v30 )
      {
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.effectRoot;
        if ( !this )
          goto LABEL_84;
        maxPlayCnt = _4__this->fields.maxPlayCnt;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        this = (ResultListWindow__StartRewardAction_d__51_o *)BoxGachaResultEffectComponent__getEffect(
                                                                (System_String_o *)StringLiteral_18797/*"ef_boxitem_fall_scalable"*/,
                                                                transform,
                                                                v34);
        if ( !this )
          goto LABEL_84;
        v35 = this;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v36 = v3->fields.rewardAction;
        if ( !v36 )
          goto LABEL_84;
        v37 = (SyncPositionComponent_o *)this;
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                                (System_Collections_Generic_List_object__o *)this,
                                                                v36->fields.playCnt,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0);
        if ( !v37 )
          goto LABEL_84;
        v37->fields.targetTransform = (struct UnityEngine_Transform_o *)this;
        sub_1C2D434(&v37->fields.targetTransform);
        SyncPositionComponent__SyncPosition(v37, v38);
        if ( maxPlayCnt >= 11 )
        {
          v39 = BoxGachaUtility_TypeInfo;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v39 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(
            (UnityEngine_GameObject_o *)v35,
            v39->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
            0);
        }
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.fallEffectObjList;
        if ( !this )
          goto LABEL_84;
        v40 = *(_QWORD *)&this->fields.__1__state;
        v41 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v40 )
          goto LABEL_84;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v40 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v35,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = v40 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v43 + 32) = v35;
          sub_1C2D434(v43 + 32);
        }
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v35,
                                         (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v45 = UnityEngine_GameObject__GetComponentInChildren_object_(
                  (UnityEngine_GameObject_o *)v35,
                  (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                  0,
                                                                  0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !ComponentInChildren_object )
              goto LABEL_84;
            SimpleAnimation__Play_66404364((SimpleAnimation_o *)ComponentInChildren_object, _4__this->fields.aniName, 0);
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)v45,
                                                                    0,
                                                                    0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v45 )
                goto LABEL_84;
              UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)v45, _4__this->fields.aniName, 0);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v49 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v49, itemDropTime, 0);
      v3->fields.__2__current = (Il2CppObject *)v49;
      v46 = &v3->fields.__2__current;
      sub_1C2D434(v46);
      v47 = 2;
LABEL_83:
      *((_DWORD *)v46 - 2) = v47;
      return 1;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.skipCollider;
      if ( !this )
        goto LABEL_84;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 1, 0);
      if ( _4__this->fields.isSkip && !_4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.effectRoot;
      if ( !this )
        goto LABEL_84;
      v12 = _4__this->fields.maxPlayCnt;
      v13 = (System_String_o **)(_4__this->fields.isRare ? &StringLiteral_18794/*"ef_boxitem_drop_rare"*/ : &StringLiteral_18795/*"ef_boxitem_drop_scalable"*/);
      v14 = *v13;
      v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (ResultListWindow__StartRewardAction_d__51_o *)BoxGachaResultEffectComponent__getEffect(v14, v15, v16);
      if ( !this )
        goto LABEL_84;
      v17 = this;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v18 = v3->fields.rewardAction;
      if ( !v18 )
        goto LABEL_84;
      v19 = (SyncPositionComponent_o *)this;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v18->fields.playCnt,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
      if ( !v19 )
        goto LABEL_84;
      v19->fields.targetTransform = (struct UnityEngine_Transform_o *)this;
      sub_1C2D434(&v19->fields.targetTransform);
      SyncPositionComponent__SyncPosition(v19, v20);
      if ( v12 >= 11 )
      {
        v21 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v21 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v17,
          v21->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
          0);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.dropEffectObjList;
      if ( !this )
        goto LABEL_84;
      v22 = *(_QWORD *)&this->fields.__1__state;
      v23 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v22 )
        goto LABEL_84;
      v24 = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v17,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = v22 + 8 * v24;
        LODWORD(this->fields.__2__current) = v24 + 1;
        *(_QWORD *)(v25 + 32) = v17;
        sub_1C2D434(v25 + 32);
      }
LABEL_76:
      v3->fields.__2__current = 0;
      v46 = &v3->fields.__2__current;
      sub_1C2D434(v46);
      v47 = 3;
      goto LABEL_83;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      v26 = v3->fields.rewardAction;
      if ( !v26 )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v26->fields.playCnt,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v27 = v3->fields.rewardAction;
      if ( !v27 )
        goto LABEL_84;
      v27->fields.isEnd = 1;
      if ( !_4__this->fields.isDischargeGetEffectItem && v27->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
      {
        v28 = ResultListWindow_TypeInfo;
        if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
          v28 = ResultListWindow_TypeInfo;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          (System_String_o *)StringLiteral_6008/*"EndOpen"*/,
          v28->static_fields->EFFECT_PLAY_TIME,
          0);
      }
      return 0;
    default:
      return 0;
  }
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_ResultListWindow__StartRewardAction_d__51_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C21869 & 1) == 0 )
  {
    sub_1C2D490(&ResultListWindow___c_TypeInfo);
    byte_4C21869 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ResultListWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ResultListWindow___c_TypeInfo->static_fields->__9 = (struct ResultListWindow___c_o *)v1;
  sub_1C2D434(ResultListWindow___c_TypeInfo->static_fields);
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
  if ( (byte_4C2186A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2186A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)x, 0);
  }
}


void ResultListWindow___c___ClickSkip_b__63_1(
        ResultListWindow___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C2186B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2186B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)x, 0);
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
    sub_1C2D6EC(_4__this, method);
  ResultListWindow__ClearAllGrid(_4__this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}