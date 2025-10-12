void ResultListWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4C31F37 & 1) == 0 )
  {
    sub_1C32C20(&ResultListWindow_TypeInfo);
    byte_4C31F37 = 1;
  }
  LODWORD(ResultListWindow_TypeInfo->static_fields->EFFECT_PLAY_TIME) = (struct ResultListWindow_StaticFields)1061997773;
}


void ResultListWindow___ctor(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x20

  if ( (byte_4C31F36 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&StringLiteral_18805/*"ef_boxitem_fall"*/);
    byte_4C31F36 = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_C0D110;
  v3 = StringLiteral_18805/*"ef_boxitem_fall"*/;
  this->fields.aniName = (struct System_String_o *)StringLiteral_18805/*"ef_boxitem_fall"*/;
  sub_1C32BC4(&this->fields.aniName, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C32BC4(&this->fields.fallEffectObjList, v4);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1C32BC4(&this->fields.dropEffectObjList, v5);
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

  if ( (byte_4C31F34 & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31F34 = 1;
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
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1C32E7C(this);
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

  if ( (byte_4C31F35 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_GameObject__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C32C20(&Method_ResultListWindow___c__ClickSkip_b__63_0__);
    sub_1C32C20(&Method_ResultListWindow___c__ClickSkip_b__63_1__);
    sub_1C32C20(&ResultListWindow___c_TypeInfo);
    byte_4C31F35 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_25;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_25:
    sub_1C32E7C(skipCollider);
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
      v6 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v6, v7, Method_ResultListWindow___c__ClickSkip_b__63_0__, 0);
      static_fields = ResultListWindow___c_TypeInfo->static_fields;
      static_fields->__9__63_0 = (struct System_Action_GameObject__o *)v6;
      skipCollider = (void *)sub_1C32BC4(&static_fields->__9__63_0, v6);
    }
    if ( !v5 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v5,
      (System_Action_T__o *)v6,
      (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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
      v10 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v10, v11, Method_ResultListWindow___c__ClickSkip_b__63_1__, 0);
      v12 = ResultListWindow___c_TypeInfo->static_fields;
      v12->__9__63_1 = (struct System_Action_GameObject__o *)v10;
      skipCollider = (void *)sub_1C32BC4(&v12->__9__63_1, v10);
    }
    if ( dropEffectObjList )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)dropEffectObjList,
        (System_Action_T__o *)v10,
        (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
      return;
    }
    goto LABEL_25;
  }
}


void ResultListWindow__Close(ResultListWindow_o *this, System_Action_o *callback, const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4C31F33 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__);
    sub_1C32C20(&ResultListWindow___c__DisplayClass60_0_TypeInfo);
    byte_4C31F33 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(ResultListWindow___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v5[1], this);
  v5[1].monitor = callback;
  sub_1C32BC4(&v5[1].monitor, callback);
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, v5, Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0);
}


void ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *scrollBar; // x20
  UIProgressBar_o *v5; // x0
  float v6; // s0

  if ( (byte_4C31F32 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_6303/*"ExecuteOpenCallBack"*/);
    byte_4C31F32 = 1;
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
    v5 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v5 )
      sub_1C32E7C(0);
    UIProgressBar__set_value(v5, 1.0, 0);
    this->fields.isLastLineEffectPlay = 1;
  }
  if ( this->fields.openCallBack )
  {
    if ( this->fields.isLongPress )
      v6 = flt_C0A470[this->fields.maxPlayCnt > 10];
    else
      v6 = 0.0;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_6303/*"ExecuteOpenCallBack"*/, v6, 0);
  }
}


void ResultListWindow__ExecuteOpenCallBack(ResultListWindow_o *this, const MethodInfo *method)
{
  struct System_Action_bool__o *openCallBack; // x20
  __int64 v4; // x0

  openCallBack = this->fields.openCallBack;
  this->fields.openCallBack = 0;
  v4 = sub_1C32BC4(&this->fields.openCallBack, 0);
  if ( !openCallBack )
    sub_1C32E7C(v4);
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
    sub_1C32E7C(0);
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
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  int v22; // w9
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int32_t v24; // w2
  int v25; // w9
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w23
  UnityEngine_Object_o *scrollBar; // x22
  const MethodInfo *v29; // x1
  UnityEngine_Object_o *resultScrollView; // x22
  const MethodInfo *v31; // x2
  bool v32; // w0

  if ( (byte_4C31F28 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31F28 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    ResultListWindow__setDispResultListBg(this, 1, v19);
    gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)this->fields.fallEffectObjList,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      fallEffectObjList = this->fields.fallEffectObjList;
      if ( !fallEffectObjList )
        goto LABEL_29;
      size = fallEffectObjList->fields._size;
      v22 = fallEffectObjList->fields._version + 1;
      fallEffectObjList->fields._size = 0;
      fallEffectObjList->fields._version = v22;
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
      v24 = dropEffectObjList->fields._size;
      v25 = dropEffectObjList->fields._version + 1;
      dropEffectObjList->fields._size = 0;
      dropEffectObjList->fields._version = v25;
      if ( v24 >= 1 )
        System_Array__Clear((System_Array_o *)dropEffectObjList->fields._items, 0, v24, 0);
    }
    this->fields.openCallBack = callback;
    sub_1C32BC4(&this->fields.openCallBack, callback);
    this->fields.resultIdList = resultIds;
    sub_1C32BC4(&this->fields.resultIdList, resultIds);
    this->fields.rareIdxList = rareIdxs;
    sub_1C32BC4(&this->fields.rareIdxList, rareIdxs);
    this->fields.baseNoList = baseNos;
    gameObject = (UnityEngine_GameObject_o *)sub_1C32BC4(&this->fields.baseNoList, baseNos);
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
              ResultListWindow__setResultItem(this, v29);
              BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C32E7C(gameObject);
  }
}


void ResultListWindow__SetScrollControllEnabled(ResultListWindow_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Object_o *resultScrollView; // x21
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_4C31F29 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31F29 = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0, 0) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v6 )
      sub_1C32E7C(0);
    UnityEngine_Behaviour__set_enabled(v6, enabled, 0);
  }
}


System_Collections_IEnumerator_o *ResultListWindow__StartDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4C31F2B & 1) == 0 )
  {
    sub_1C32C20(&ResultListWindow__StartDisp_d__50_TypeInfo);
    byte_4C31F2B = 1;
  }
  v3 = sub_1C32E6C(ResultListWindow__StartDisp_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C31F2C & 1) == 0 )
  {
    sub_1C32C20(&ResultListWindow__StartRewardAction_d__51_TypeInfo);
    byte_4C31F2C = 1;
  }
  v5 = sub_1C32E6C(ResultListWindow__StartRewardAction_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1C32BC4(v5 + 40, rewardAction);
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
  il2cpp_array_size_t max_length; // x9
  _BOOL8 v6; // x0
  unsigned __int64 v8; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = 0;
  rareIdxList = this->fields.rareIdxList;
  if ( rareIdxList )
  {
    max_length = rareIdxList->max_length;
    v6 = 0;
    if ( max_length && (int)max_length >= 1 )
    {
      v8 = 0;
      do
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C32E84(v6);
        v10 = rareIdxList->m_Items[v8];
        v6 = System_Int32__Equals_65028480((int32_t)&v10, idx, 0);
        if ( v6 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_1C32E7C(v6);
        LODWORD(max_length) = rareIdxList->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)max_length );
    }
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  return v6;
}


void ResultListWindow__endDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  int32_t maxPlayCnt; // w8
  _BOOL4 isDischargeGetEffectItem; // w9

  if ( (byte_4C31F31 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6016/*"EndOpen"*/);
    sub_1C32C20(&StringLiteral_23318/*"setDisp"*/);
    byte_4C31F31 = 1;
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
        (System_String_o *)StringLiteral_6016/*"EndOpen"*/,
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
      (System_String_o *)StringLiteral_23318/*"setDisp"*/,
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

  if ( (byte_4C31F2F & 1) == 0 )
  {
    sub_1C32C20(&BoxGachaUtility_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&StringLiteral_18803/*"ef_boxitem_drop_rare"*/);
    sub_1C32C20(&StringLiteral_18802/*"ef_boxitem_drop"*/);
    sub_1C32C20(&StringLiteral_23484/*"showResultItem"*/);
    byte_4C31F2F = 1;
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
    v6 = (System_String_o **)&StringLiteral_18803/*"ef_boxitem_drop_rare"*/;
  else
    v6 = (System_String_o **)&StringLiteral_18802/*"ef_boxitem_drop"*/;
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
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = m_CachedPtr + 8 * klass_low;
          LODWORD(skipCollider[1].klass) = klass_low + 1;
          *(_QWORD *)(v16 + 32) = v10;
          sub_1C32BC4(v16 + 32, v10);
        }
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1C32E7C(skipCollider);
  }
LABEL_30:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23484/*"showResultItem"*/,
    this->fields.itemDispWaitTime,
    0);
}


void ResultListWindow__setDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *resultItemObjList; // x0
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o **p_dispObj; // x21
  const MethodInfo *v6; // x2
  bool v7; // w0
  const MethodInfo *v8; // x1
  int32_t playCnt; // w8
  _BOOL4 isSkip; // w9
  int32_t v11; // w8
  int32_t maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x8
  UnityEngine_Transform_o *v17; // x21
  BoxGachaUtility_c *v18; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v24; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C31F2E & 1) == 0 )
  {
    sub_1C32C20(&BoxGachaUtility_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_22714/*"playEffectDrop"*/);
    sub_1C32C20(&StringLiteral_18805/*"ef_boxitem_fall"*/);
    byte_4C31F2E = 1;
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  Item = System_Collections_Generic_List_object___get_Item(
           resultItemObjList,
           this->fields.playCnt,
           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  p_dispObj = &this->fields.dispObj;
  this->fields.dispObj = (struct UnityEngine_GameObject_o *)Item;
  sub_1C32BC4(&this->fields.dispObj, Item);
  v7 = ResultListWindow__checkRare(this, this->fields.playCnt, v6);
  playCnt = this->fields.playCnt;
  isSkip = this->fields.isSkip;
  this->fields.isRare = v7;
  v11 = playCnt + 1;
  this->fields.playCnt = v11;
  if ( isSkip && !v7 )
  {
    ResultListWindow__showResultItem(this, v8);
    return;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( v11 > 30 || maxPlayCnt <= 10 )
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
                                                                     (System_String_o *)StringLiteral_18805/*"ef_boxitem_fall"*/,
                                                                     transform,
                                                                     v14);
  if ( !resultItemObjList )
    goto LABEL_38;
  v15 = (UnityEngine_GameObject_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)resultItemObjList,
                                                                     0);
  v16 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_38;
  v17 = (UnityEngine_Transform_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v16, 0);
  if ( !resultItemObjList )
    goto LABEL_38;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)resultItemObjList, 0);
  if ( !v17 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v17, localPosition, 0);
  if ( maxPlayCnt >= 11 )
  {
    v18 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v18 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v15, v18->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
  if ( !resultItemObjList
    || (items = resultItemObjList->fields._items,
        v20 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resultItemObjList->fields._version,
        !items) )
  {
LABEL_38:
    sub_1C32E7C(resultItemObjList);
  }
  size = resultItemObjList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resultItemObjList,
      (Il2CppObject *)v15,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    resultItemObjList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v15;
    sub_1C32BC4(v22 + 4, v15);
  }
  if ( this->fields.isSkip )
    goto LABEL_37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v15,
                                 (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v24 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v15,
          (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
                                                                       (UnityEngine_Object_o *)v24,
                                                                       0,
                                                                       0);
    if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
      goto LABEL_37;
    if ( v24 )
    {
      UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)v24, this->fields.aniName, 0);
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( !ComponentInChildren_object )
    goto LABEL_38;
  SimpleAnimation__Play_66464300((SimpleAnimation_o *)ComponentInChildren_object, this->fields.aniName, 0);
LABEL_37:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22714/*"playEffectDrop"*/,
    this->fields.itemDropTime,
    0);
}


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
    sub_1C32E7C(firstLineGrid);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0);
}


// local variable allocation has failed, the output may be wrong!
void ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  __int64 resultList; // x0
  struct UIGrid_o *firstResultGrid; // x8
  int32_t maxPerLine; // w21
  struct UIGrid_o *sceResultGrid; // x8
  int32_t v8; // w24
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w29
  __int64 v11; // x12
  __int64 v12; // x8
  BoxGachaBaseMaster_o *v13; // x22
  signed __int64 v14; // x20
  struct UIGrid_o **v15; // x8
  struct System_Int32_array *baseNoList; // x9
  UnityEngine_Component_o *v17; // x24
  UnityEngine_GameObject_o *resultListItemPrefab; // x26
  BoxGachaBaseEntity_o *v19; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v21; // x24
  UnityEngine_Transform_o *v22; // x26
  const MethodInfo *v23; // x1
  BoxGachaUtility_c *v24; // x8
  ResultItemComponent_o *v25; // x26
  int *static_fields; // x8
  int v27; // s2
  int v28; // s1 OVERLAPPED
  int v29; // s0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  UnityEngine_GameObject_o *resultListResultFrame; // x27
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x27
  UnityEngine_Transform_o *v35; // x28
  BoxGachaUtility_c *v36; // x0
  struct UIScrollView_o *resultScrollView; // x1
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

  if ( (byte_4C31F2A & 1) == 0 )
  {
    sub_1C32C20(&BoxGachaUtility_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_BoxGachaBaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_22550/*"overwriteFirstTimeDispItemId"*/);
    sub_1C32C20(&StringLiteral_13053/*"StartDisp"*/);
    sub_1C32C20(&StringLiteral_22541/*"overwriteDispItemId"*/);
    sub_1C32C20(&StringLiteral_22549/*"overwriteFirstTimeDispItemGet"*/);
    byte_4C31F2A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  p_resultItemObjList = &this->fields.resultItemObjList;
  resultList = sub_1C32BC4(&this->fields.resultItemObjList, v3);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_88;
  maxPerLine = firstResultGrid->fields.maxPerLine;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_88;
  v8 = sceResultGrid->fields.maxPerLine;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftMaster___);
  resultList = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
  resultIdList = this->fields.resultIdList;
  if ( !resultIdList )
    goto LABEL_88;
  max_length = resultIdList->max_length;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length <= 10 )
    v11 = 8;
  else
    v11 = 20;
  if ( max_length <= 10 )
    v12 = 4;
  else
    v12 = 16;
  v61 = v12;
  v62 = v11;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  if ( max_length >= 1 )
  {
    v13 = (BoxGachaBaseMaster_o *)resultList;
    v14 = 0;
    v54 = v8 + maxPerLine - 1;
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
        v15 = &this->fields.firstResultGrid;
        if ( v14 > maxPerLine - 1 )
        {
          v15 = &this->fields.sceResultGrid;
          if ( v14 > v54 )
            v15 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultList, 0, 0);
        v15 = &this->fields.resultScrollViewGrid;
      }
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_88;
      if ( v14 >= (unsigned __int64)LODWORD(baseNoList->max_length) )
        sub_1C32E84(resultList);
      if ( !v13 )
        goto LABEL_88;
      v17 = (UnityEngine_Component_o *)*v15;
      resultList = (__int64)BoxGachaBaseMaster__GetEntity(v13, this->fields.currentBaseId, baseNoList->m_Items[v14], 0);
      if ( !v17 )
        goto LABEL_88;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v19 = (BoxGachaBaseEntity_o *)resultList;
      transform = UnityEngine_Component__get_transform(v17, 0);
      resultList = (__int64)BaseMonoBehaviour__createObject(
                              (BaseMonoBehaviour_o *)this,
                              resultListItemPrefab,
                              transform,
                              0,
                              0);
      if ( !resultList )
        goto LABEL_88;
      v21 = (UnityEngine_GameObject_o *)resultList;
      resultList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resultList, 0);
      v22 = (UnityEngine_Transform_o *)resultList;
      if ( !byte_4C313D6 )
      {
        resultList = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      if ( !v22 )
        goto LABEL_88;
      UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      resultList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                              v21,
                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v24 = BoxGachaUtility_TypeInfo;
      v25 = (ResultItemComponent_o *)resultList;
      if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
        v24 = BoxGachaUtility_TypeInfo;
      }
      if ( !v25 )
        goto LABEL_88;
      static_fields = (int *)v24->static_fields;
      v27 = *(int *)((char *)static_fields + v62);
      v28 = *(int *)((char *)static_fields + v61);
      if ( max_length > 10 )
        static_fields += 3;
      v29 = *static_fields;
      ResultItemComponent__SetItemIconScale(v25, *(UnityEngine_Vector3_o *)(&v28 - 1), v23);
      ResultItemComponent__Clear(v25, v30);
      if ( max_length >= 11 )
      {
        resultList = (__int64)this->fields.resultScrollViewResultFrameGrid;
        if ( !resultList )
          goto LABEL_88;
        resultListResultFrame = this->fields.resultListResultFrame;
        v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resultList, 0);
        resultList = (__int64)BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                resultListResultFrame,
                                v33,
                                0,
                                0);
        if ( !resultList )
          goto LABEL_88;
        v34 = (UnityEngine_GameObject_o *)resultList;
        resultList = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resultList, 0);
        v35 = (UnityEngine_Transform_o *)resultList;
        if ( !byte_4C313D6 )
        {
          resultList = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
          byte_4C313D6 = 1;
        }
        if ( !v35 )
          goto LABEL_88;
        UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        v36 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v36 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(v34, v36->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0);
        resultList = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                v21,
                                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !resultList )
          goto LABEL_88;
        resultScrollView = this->fields.resultScrollView;
        *(_QWORD *)(resultList + 32) = resultScrollView;
        resultList = sub_1C32BC4(resultList + 32, resultScrollView);
      }
      if ( v19 )
      {
        if ( v19->fields.isRare )
          ResultItemComponent__SetRareItem(v25, v31);
        IntValue = EntityScriptUtil__GetIntValue(v19->fields.script, (System_String_o *)StringLiteral_22541/*"overwriteDispItemId"*/, 0, 0);
        resultList = EntityScriptUtil__GetIntValue(v19->fields.script, (System_String_o *)StringLiteral_22550/*"overwriteFirstTimeDispItemId"*/, 0, 0);
        if ( (int)resultList >= 1 )
        {
          v39 = resultList;
          resultList = UnityEngine_PlayerPrefs__GetInt_71181884((System_String_o *)StringLiteral_22549/*"overwriteFirstTimeDispItemGet"*/, 0);
          if ( !(_DWORD)resultList )
            IntValue = v39;
        }
        type = v19->fields.type;
        if ( type == 1 )
        {
          resultList = (__int64)Master_object;
          if ( !Master_object )
            goto LABEL_88;
          resultList = (__int64)GiftMaster__getDataById(Master_object, v19->fields.targetId, 0);
          if ( resultList )
          {
            if ( *(int *)(resultList + 28) <= 1 )
              v42 = 0;
            else
              v42 = *(_DWORD *)(resultList + 28);
            ResultItemComponent__Set(v25, (GiftEntity_o *)resultList, v42, IntValue, v41);
            goto LABEL_62;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          resultList = (__int64)BoxGachaBaseEntity__getRewardSetData(v19, this->fields.currentEventId, 0);
          if ( resultList )
          {
            ResultItemComponent__SetExtra(v25, *(_DWORD *)(resultList + 28), *(_DWORD *)(resultList + 48), v43);
LABEL_62:
            UnityEngine_GameObject__SetActive(v21, 0, 0);
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
                (Il2CppObject *)v21,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = v44 + 8 * v46;
              *(_DWORD *)(resultList + 24) = v46 + 1;
              *(_QWORD *)(v47 + 32) = v21;
              resultList = sub_1C32BC4(v47 + 32, v21);
            }
          }
        }
      }
      v48 = this->fields.resultIdList;
      if ( !v48 )
        goto LABEL_88;
      ++v14;
    }
    while ( v14 < SLODWORD(v48->max_length) );
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
      sub_1C32E7C(resultList);
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
      (System_String_o *)StringLiteral_13053/*"StartDisp"*/,
      0);
}


void ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C31F2D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23318/*"setDisp"*/);
    byte_4C31F2D = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_23318/*"setDisp"*/, 0.3, 0);
}


void ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C31F30 & 1) == 0 )
  {
    sub_1C32C20(&Method_ResultListWindow_showResultItem__);
    sub_1C32C20(&StringLiteral_17359/*"box3"*/);
    sub_1C32C20(&StringLiteral_19007/*"endDisp"*/);
    byte_4C31F30 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0);
  if ( this->fields.playCnt == 1 && this->fields.forceDropSe )
  {
    v4 = Method_ResultListWindow_showResultItem__;
    if ( (*((_BYTE *)Method_ResultListWindow_showResultItem__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_ResultListWindow_showResultItem__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
    OverwriteAssetSoundName__PlaySe(v5, (System_String_o *)StringLiteral_17359/*"box3"*/, 0, 0);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_19007/*"endDisp"*/,
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
  const MethodInfo *v29; // x1
  struct System_Collections_Generic_List_ResultListWindow_RewardAction__o **v30; // x21
  int32_t v31; // w20
  int32_t v32; // w20
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v36; // x1
  ResultListWindow_c *v37; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_4C31F3B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    sub_1C32C20(&ResultListWindow_TypeInfo);
    sub_1C32C20(&ResultListWindow_RewardAction_TypeInfo);
    sub_1C32C20(&Method_ResultListWindow__StartDisp_d__50_MoveNext__);
    sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C32C20(&StringLiteral_17359/*"box3"*/);
    sub_1C32C20(&StringLiteral_6016/*"EndOpen"*/);
    byte_4C31F3B = 1;
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
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, 0.2, 0);
      this->fields.__2__current = (Il2CppObject *)v5;
      sub_1C32BC4(&this->fields.__2__current, v5);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)v8;
    p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)sub_1C32BC4(
                                                                           &this->fields._listRewardAction_5__2,
                                                                           v8);
    if ( !_4__this )
      goto LABEL_74;
    v10 = 0;
    while ( v10 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
    {
      v11 = sub_1C32E6C(ResultListWindow_RewardAction_TypeInfo);
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
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        listRewardAction_5__2->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v11;
        sub_1C32BC4(v22 + 4, v11);
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
                                                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_74;
        v25 = listRewardAction_5__2;
        Item = System_Collections_Generic_List_object___get_Item(
                 *p_listRewardAction_5__2,
                 v24,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        started = ResultListWindow__StartRewardAction(_4__this, (ResultListWindow_RewardAction_o *)Item, v27);
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_71209212(
                                                                               (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                               started,
                                                                               0);
        if ( !v25 )
          goto LABEL_74;
        v25->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
        sub_1C32BC4(&v25->fields._syncRoot, listRewardAction_5__2);
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
                                                                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
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
    v30 = &this->fields._listRewardAction_5__2;
    if ( _4__this->fields.isSkip )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v30;
      if ( *v30 )
      {
        v31 = 0;
        while ( v31 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v31,
                                                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_71209832(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v30;
            ++v31;
            if ( *v30 )
              continue;
          }
          goto LABEL_74;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v32 = 0;
          while ( v32 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v32,
                                                                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0);
              if ( !v32 && _4__this->fields.forceDropSe )
              {
                v33 = Method_ResultListWindow__StartDisp_d__50_MoveNext__;
                if ( (*((_BYTE *)Method_ResultListWindow__StartDisp_d__50_MoveNext__ + 83) & 2) != 0 )
                  v33 = (_QWORD *)sub_1C32C38(Method_ResultListWindow__StartDisp_d__50_MoveNext__);
                v34 = (System_Reflection_MethodBase_o *)sub_1C32C04(v33, v33[4]);
                OverwriteAssetSoundName__PlaySe(v34, (System_String_o *)StringLiteral_17359/*"box3"*/, 0, 0);
              }
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v32;
              if ( listRewardAction_5__2 )
                continue;
            }
            goto LABEL_74;
          }
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          ResultListWindow__EndOpen(_4__this, v29);
LABEL_63:
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.skipCollider;
          if ( listRewardAction_5__2 )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)listRewardAction_5__2, 0, 0);
            if ( _4__this->fields.isDischargeGetEffectItem )
            {
              EFFECT_PLAY_TIME = 0.5;
              v36 = (System_String_o *)StringLiteral_6016/*"EndOpen"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v37 = ResultListWindow_TypeInfo;
              if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v37 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v37->static_fields->EFFECT_PLAY_TIME;
              v36 = (System_String_o *)StringLiteral_6016/*"EndOpen"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v36, EFFECT_PLAY_TIME, 0);
            return 0;
          }
        }
      }
LABEL_74:
      sub_1C32E7C(listRewardAction_5__2);
    }
    *v30 = 0;
    sub_1C32BC4(&this->fields._listRewardAction_5__2, 0);
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C32BC4(p__2__current, 0);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ResultListWindow__StartDisp_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  if ( (byte_4C31F3C & 1) == 0 )
  {
    sub_1C32C20(&BoxGachaUtility_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ResultListWindow_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C32C20(&StringLiteral_18803/*"ef_boxitem_drop_rare"*/);
    sub_1C32C20(&StringLiteral_18804/*"ef_boxitem_drop_scalable"*/);
    sub_1C32C20(&StringLiteral_18806/*"ef_boxitem_fall_scalable"*/);
    this = (ResultListWindow__StartRewardAction_d__51_o *)sub_1C32C20(&StringLiteral_6016/*"EndOpen"*/);
    byte_4C31F3C = 1;
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
          v9 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v9, maxDrawItemDispWaitTime, 0);
          v3->fields.__2__current = (Il2CppObject *)v9;
          p__2__current = &v3->fields.__2__current;
          sub_1C32BC4(p__2__current, v9);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_84:
        sub_1C32E7C(this);
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
                                                                (System_String_o *)StringLiteral_18806/*"ef_boxitem_fall_scalable"*/,
                                                                transform,
                                                                v34);
        if ( !this )
          goto LABEL_84;
        v35 = this;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
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
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0);
        if ( !v37 )
          goto LABEL_84;
        v37->fields.targetTransform = (struct UnityEngine_Transform_o *)this;
        sub_1C32BC4(&v37->fields.targetTransform, this);
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
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = v40 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v43 + 32) = v35;
          sub_1C32BC4(v43 + 32, v35);
        }
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v35,
                                         (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v45 = UnityEngine_GameObject__GetComponentInChildren_object_(
                  (UnityEngine_GameObject_o *)v35,
                  (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
            SimpleAnimation__Play_66464300((SimpleAnimation_o *)ComponentInChildren_object, _4__this->fields.aniName, 0);
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
              UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)v45, _4__this->fields.aniName, 0);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v49 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v49, itemDropTime, 0);
      v3->fields.__2__current = (Il2CppObject *)v49;
      v46 = &v3->fields.__2__current;
      sub_1C32BC4(v46, v49);
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
      v13 = (System_String_o **)(_4__this->fields.isRare ? &StringLiteral_18803/*"ef_boxitem_drop_rare"*/ : &StringLiteral_18804/*"ef_boxitem_drop_scalable"*/);
      v14 = *v13;
      v15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (ResultListWindow__StartRewardAction_d__51_o *)BoxGachaResultEffectComponent__getEffect(v14, v15, v16);
      if ( !this )
        goto LABEL_84;
      v17 = this;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
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
                                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0);
      if ( !v19 )
        goto LABEL_84;
      v19->fields.targetTransform = (struct UnityEngine_Transform_o *)this;
      sub_1C32BC4(&v19->fields.targetTransform, this);
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
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = v22 + 8 * v24;
        LODWORD(this->fields.__2__current) = v24 + 1;
        *(_QWORD *)(v25 + 32) = v17;
        sub_1C32BC4(v25 + 32, v17);
      }
LABEL_76:
      v3->fields.__2__current = 0;
      v46 = &v3->fields.__2__current;
      sub_1C32BC4(v46, 0);
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
                                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
          (System_String_o *)StringLiteral_6016/*"EndOpen"*/,
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ResultListWindow__StartRewardAction_d__51_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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

  if ( (byte_4C31F38 & 1) == 0 )
  {
    sub_1C32C20(&ResultListWindow___c_TypeInfo);
    byte_4C31F38 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ResultListWindow___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ResultListWindow___c_TypeInfo->static_fields->__9 = (struct ResultListWindow___c_o *)v1;
  sub_1C32BC4(ResultListWindow___c_TypeInfo->static_fields, v1);
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
  if ( (byte_4C31F39 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31F39 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)x, 0);
  }
}


void ResultListWindow___c___ClickSkip_b__63_1(
        ResultListWindow___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C31F3A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31F3A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)x, 0);
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
  const MethodInfo *v4; // x1
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (ResultListWindow__Init(_4__this, method), (_4__this = this->fields.__4__this) == 0) )
    sub_1C32E7C(_4__this);
  ResultListWindow__ClearAllGrid(_4__this, v4);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}