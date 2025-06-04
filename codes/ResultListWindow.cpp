void __fastcall ResultListWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFC6AC & 1) == 0 )
  {
    sub_1BC3008(&ResultListWindow_TypeInfo, v1);
    byte_4AFC6AC = 1;
  }
  LODWORD(ResultListWindow_TypeInfo->static_fields->EFFECT_PLAY_TIME) = (struct ResultListWindow_StaticFields)1061997773;
}


void __fastcall ResultListWindow___ctor(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x20

  if ( (byte_4AFC6AB & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    sub_1BC3008(&StringLiteral_18632/*"ef_boxitem_fall"*/, v5);
    byte_4AFC6AB = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_BDEB70;
  this->fields.aniName = (struct System_String_o *)StringLiteral_18632/*"ef_boxitem_fall"*/;
  sub_1BC2FAC(&this->fields.aniName);
  v6 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1BC2FAC(&this->fields.fallEffectObjList);
  v7 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BC2FAC(&this->fields.dropEffectObjList);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultListWindow__ClearAllGrid(ResultListWindow_o *this, const MethodInfo *method)
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


void __fastcall ResultListWindow__ClearGridAllChild(ResultListWindow_o *this, UIGrid_o *grid, const MethodInfo *method)
{
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4AFC6A9 & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, grid);
    byte_4AFC6A9 = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (ResultListWindow_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 && (v5 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      this = (ResultListWindow_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      this = (ResultListWindow_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v5, 0LL);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1BC3264(this, grid);
  }
}


void __fastcall ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *skipCollider; // x0
  System_Collections_ICollection_o *fallEffectObjList; // x0
  struct System_Collections_Generic_List_GameObject__o *v9; // x20
  System_Action_object__o *v10; // x21
  Il2CppObject *v11; // x22
  struct ResultListWindow___c_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x19
  System_Action_object__o *v14; // x20
  Il2CppObject *v15; // x21
  struct ResultListWindow___c_StaticFields *v16; // x0

  if ( (byte_4AFC6AA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_GameObject__TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1BC3008(&Method_ResultListWindow___c__ClickSkip_b__63_0__, v4);
    sub_1BC3008(&Method_ResultListWindow___c__ClickSkip_b__63_1__, v5);
    sub_1BC3008(&ResultListWindow___c_TypeInfo, v6);
    byte_4AFC6AA = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_25;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0LL) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_25:
    sub_1BC3264(skipCollider, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0LL);
  fallEffectObjList = (System_Collections_ICollection_o *)this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( !BasicHelper__IsNullOrEmpty(fallEffectObjList, 0LL) )
  {
    v9 = this->fields.fallEffectObjList;
    skipCollider = ResultListWindow___c_TypeInfo;
    if ( !ResultListWindow___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResultListWindow___c_TypeInfo);
      skipCollider = ResultListWindow___c_TypeInfo;
    }
    v10 = *(System_Action_object__o **)(*((_QWORD *)skipCollider + 23) + 8LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)skipCollider + 56) )
      {
        j_il2cpp_runtime_class_init_0(skipCollider);
        skipCollider = ResultListWindow___c_TypeInfo;
      }
      v11 = (Il2CppObject *)**((_QWORD **)skipCollider + 23);
      v10 = (System_Action_object__o *)sub_1BC3254(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v10, v11, Method_ResultListWindow___c__ClickSkip_b__63_0__, 0LL);
      static_fields = ResultListWindow___c_TypeInfo->static_fields;
      static_fields->__9__63_0 = (struct System_Action_GameObject__o *)v10;
      skipCollider = (void *)sub_1BC2FAC(&static_fields->__9__63_0);
    }
    if ( !v9 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v9,
      (System_Action_T__o *)v10,
      (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.dropEffectObjList, 0LL) )
  {
    dropEffectObjList = this->fields.dropEffectObjList;
    skipCollider = ResultListWindow___c_TypeInfo;
    if ( !ResultListWindow___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ResultListWindow___c_TypeInfo);
      skipCollider = ResultListWindow___c_TypeInfo;
    }
    v14 = *(System_Action_object__o **)(*((_QWORD *)skipCollider + 23) + 16LL);
    if ( !v14 )
    {
      if ( !*((_DWORD *)skipCollider + 56) )
      {
        j_il2cpp_runtime_class_init_0(skipCollider);
        skipCollider = ResultListWindow___c_TypeInfo;
      }
      v15 = (Il2CppObject *)**((_QWORD **)skipCollider + 23);
      v14 = (System_Action_object__o *)sub_1BC3254(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v14, v15, Method_ResultListWindow___c__ClickSkip_b__63_1__, 0LL);
      v16 = ResultListWindow___c_TypeInfo->static_fields;
      v16->__9__63_1 = (struct System_Action_GameObject__o *)v14;
      skipCollider = (void *)sub_1BC2FAC(&v16->__9__63_1);
    }
    if ( dropEffectObjList )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)dropEffectObjList,
        (System_Action_T__o *)v14,
        (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
      return;
    }
    goto LABEL_25;
  }
}


void __fastcall ResultListWindow__Close(ResultListWindow_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4AFC6A8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__, v5);
    sub_1BC3008(&ResultListWindow___c__DisplayClass60_0_TypeInfo, v6);
    byte_4AFC6A8 = 1;
  }
  v7 = (Il2CppObject *)sub_1BC3254(ResultListWindow___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  v7[1].klass = (Il2CppClass *)this;
  sub_1BC2FAC(&v7[1]);
  v7[1].monitor = callback;
  sub_1BC2FAC(&v7[1].monitor);
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v10, v7, Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  UIProgressBar_o *v7; // x0
  float v8; // s0

  if ( (byte_4AFC6A7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_6249/*"ExecuteOpenCallBack"*/, v4);
    byte_4AFC6A7 = 1;
  }
  if ( this->fields.maxPlayCnt <= 50 )
    ResultListWindow__SetScrollControllEnabled(this, 0, v2);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL)
    && this->fields.maxPlayCnt + 1 >= 52
    && !this->fields.isLastLineEffectPlay )
  {
    v7 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    UIProgressBar__set_value(v7, 1.0, 0LL);
    this->fields.isLastLineEffectPlay = 1;
  }
  if ( this->fields.openCallBack )
  {
    if ( this->fields.isLongPress )
      v8 = *((float *)&qword_BDD668 + (this->fields.maxPlayCnt > 10));
    else
      v8 = 0.0;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6249/*"ExecuteOpenCallBack"*/,
      v8,
      0LL);
  }
}


void __fastcall ResultListWindow__ExecuteOpenCallBack(ResultListWindow_o *this, const MethodInfo *method)
{
  struct System_Action_bool__o *openCallBack; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  openCallBack = this->fields.openCallBack;
  this->fields.openCallBack = 0LL;
  v4 = sub_1BC2FAC(&this->fields.openCallBack);
  if ( !openCallBack )
    sub_1BC3264(v4, v5);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))openCallBack->fields.m_target)(
    openCallBack->fields.original_method_info,
    this->fields.isLongPress,
    *(_QWORD *)&openCallBack->fields.extra_arg);
}


void __fastcall ResultListWindow__Init(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *skipCollider; // x0

  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    sub_1BC3264(0LL, method);
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  this->fields.playCnt = 0;
  this->fields.maxPlayCnt = 0;
  this->fields.isRare = 0;
  this->fields.isSkip = 0;
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultListWindow__LongPressSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  this->fields.isLongPress = 1;
  ResultListWindow__ClickSkip(this, method);
}


void __fastcall ResultListWindow__OpenResultList(
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
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  int v24; // w9
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int32_t v26; // w2
  int v27; // w9
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w23
  UnityEngine_Object_o *scrollBar; // x22
  UnityEngine_Object_o *resultScrollView; // x22
  const MethodInfo *v32; // x2
  bool v33; // w0

  if ( (byte_4AFC69D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, resultIds);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v18);
    byte_4AFC69D = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    ResultListWindow__setDispResultListBg(this, 1, v21);
    gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)this->fields.fallEffectObjList,
                                               0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      fallEffectObjList = this->fields.fallEffectObjList;
      if ( !fallEffectObjList )
        goto LABEL_29;
      size = fallEffectObjList->fields._size;
      v24 = fallEffectObjList->fields._version + 1;
      fallEffectObjList->fields._size = 0;
      fallEffectObjList->fields._version = v24;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, size, 0LL);
    }
    gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)this->fields.dropEffectObjList,
                                               0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      dropEffectObjList = this->fields.dropEffectObjList;
      if ( !dropEffectObjList )
        goto LABEL_29;
      v26 = dropEffectObjList->fields._size;
      v27 = dropEffectObjList->fields._version + 1;
      dropEffectObjList->fields._size = 0;
      dropEffectObjList->fields._version = v27;
      if ( v26 >= 1 )
        System_Array__Clear((System_Array_o *)dropEffectObjList->fields._items, 0, v26, 0LL);
    }
    this->fields.openCallBack = callback;
    sub_1BC2FAC(&this->fields.openCallBack);
    this->fields.resultIdList = resultIds;
    sub_1BC2FAC(&this->fields.resultIdList);
    this->fields.rareIdxList = rareIdxs;
    sub_1BC2FAC(&this->fields.rareIdxList);
    this->fields.baseNoList = baseNos;
    gameObject = (UnityEngine_GameObject_o *)sub_1BC2FAC(&this->fields.baseNoList);
    this->fields.currentBaseId = baseId;
    this->fields.currentEventId = eventId;
    this->fields.isDischargeGetEffectItem = isDischargeGetEffectItem;
    this->fields.isLastLineEffectPlay = 0;
    if ( resultIds )
    {
      resultIdList = this->fields.resultIdList;
      this->fields.maxPlayCnt = *(_QWORD *)&resultIds->max_length;
      if ( resultIdList )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.scrollBar;
        if ( gameObject )
        {
          max_length = resultIdList->max_length;
          UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0LL);
          scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
            goto LABEL_25;
          resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
            goto LABEL_25;
          gameObject = (UnityEngine_GameObject_o *)this->fields.scrollBar;
          if ( gameObject )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, max_length > 50, 0LL);
              ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v32);
LABEL_25:
              this->fields.isSkip = isResultLongPress;
              this->fields.isLongPress = isResultLongPress;
              v33 = isResultLongPress && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)rareIdxs, 0LL);
              this->fields.forceDropSe = v33;
              ResultListWindow__setResultItem(this, v20);
              BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1BC3264(gameObject, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__SetScrollControllEnabled(
        ResultListWindow_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *resultScrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4AFC69E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, enabled);
    byte_4AFC69E = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartDisp(
        ResultListWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4AFC6A0 & 1) == 0 )
  {
    sub_1BC3008(&ResultListWindow__StartDisp_d__50_TypeInfo, method);
    byte_4AFC6A0 = 1;
  }
  v3 = sub_1BC3254(ResultListWindow__StartDisp_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC(v3 + 32);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4AFC6A1 & 1) == 0 )
  {
    sub_1BC3008(&ResultListWindow__StartRewardAction_d__51_TypeInfo, rewardAction);
    byte_4AFC6A1 = 1;
  }
  v5 = sub_1BC3254(ResultListWindow__StartRewardAction_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BC2FAC(v5 + 32);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1BC2FAC(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall ResultListWindow__Update(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( !UnityEngine_Input__get_touchCount(0LL) )
    this->fields.isLongPress = 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ResultListWindow__checkRare(ResultListWindow_o *this, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Int32_array *rareIdxList; // x8
  __int64 v5; // x9
  _BOOL8 v7; // x0
  unsigned __int64 v9; // x21
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = 0;
  rareIdxList = this->fields.rareIdxList;
  if ( rareIdxList )
  {
    v5 = *(_QWORD *)&rareIdxList->max_length;
    v7 = 0LL;
    if ( v5 && (int)v5 >= 1 )
    {
      v9 = 0LL;
      do
      {
        if ( v9 >= (unsigned int)v5 )
          sub_1BC326C(v7, *(_QWORD *)&idx, method, v3);
        v11 = rareIdxList->m_Items[v9 + 1];
        v7 = System_Int32__Equals_63857188((int32_t)&v11, idx, 0LL);
        if ( v7 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_1BC3264(v7, *(_QWORD *)&idx);
        LODWORD(v5) = rareIdxList->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v5 );
    }
  }
  else
  {
    LOBYTE(v7) = 0;
  }
  return v7;
}


void __fastcall ResultListWindow__endDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t maxPlayCnt; // w8
  _BOOL4 isDischargeGetEffectItem; // w9

  if ( (byte_4AFC6A6 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_5963/*"EndOpen"*/, method);
    sub_1BC3008(&StringLiteral_23090/*"setDisp"*/, v3);
    byte_4AFC6A6 = 1;
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
        (System_String_o *)StringLiteral_5963/*"EndOpen"*/,
        0.5,
        0LL);
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
      (System_String_o *)StringLiteral_23090/*"setDisp"*/,
      0.00001,
      0LL);
    if ( !this->fields.isDischargeGetEffectItem && this->fields.playCnt == this->fields.maxPlayCnt - 1 )
      goto LABEL_6;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__playEffectDrop(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  int32_t maxPlayCnt; // w8
  _BOOL4 v9; // w22
  System_String_o **v10; // x9
  System_String_o *v11; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  BoxGachaUtility_c *v19; // x0
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 klass_low; // x10
  __int64 v23; // x8

  if ( (byte_4AFC6A4 & 1) == 0 )
  {
    sub_1BC3008(&BoxGachaUtility_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v3);
    sub_1BC3008(&StringLiteral_18630/*"ef_boxitem_drop_rare"*/, v4);
    sub_1BC3008(&StringLiteral_18629/*"ef_boxitem_drop"*/, v5);
    sub_1BC3008(&StringLiteral_23256/*"showResultItem"*/, v6);
    byte_4AFC6A4 = 1;
  }
  if ( this->fields.isSkip && !this->fields.isRare )
    goto LABEL_30;
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_31;
  UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL);
  maxPlayCnt = this->fields.maxPlayCnt;
  v9 = maxPlayCnt > 10;
  if ( this->fields.isRare )
    v10 = (System_String_o **)&StringLiteral_18630/*"ef_boxitem_drop_rare"*/;
  else
    v10 = (System_String_o **)&StringLiteral_18629/*"ef_boxitem_drop"*/;
  v11 = *v10;
  if ( maxPlayCnt < 11 )
  {
    v9 = 0;
LABEL_14:
    skipCollider = (UnityEngine_Collider_o *)GameObjectExtensions__GetParent(this->fields.dispObj, 0LL);
    if ( !skipCollider )
      goto LABEL_31;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
    goto LABEL_16;
  }
  if ( this->fields.playCnt >= 31 )
    goto LABEL_14;
  skipCollider = (UnityEngine_Collider_o *)this->fields.effectRoot;
  if ( !skipCollider )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skipCollider, 0LL);
LABEL_16:
  skipCollider = (UnityEngine_Collider_o *)BoxGachaResultEffectComponent__getEffect(v11, transform, v13);
  if ( !skipCollider )
    goto LABEL_31;
  v14 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)skipCollider,
                                             0LL);
  if ( !this->fields.dispObj )
    goto LABEL_31;
  v15 = (UnityEngine_Transform_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispObj, 0LL);
  if ( !skipCollider )
    goto LABEL_31;
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)skipCollider,
                                     0LL);
  if ( !v15 )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  if ( v9 )
  {
    v19 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v19 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v14, v19->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  if ( !this->fields.isRare )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.dropEffectObjList;
    if ( skipCollider )
    {
      v20 = *(_QWORD *)&skipCollider->fields.m_CachedPtr;
      v21 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(skipCollider[1].klass);
      if ( v20 )
      {
        klass_low = SLODWORD(skipCollider[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skipCollider,
            (Il2CppObject *)v14,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * klass_low;
          LODWORD(skipCollider[1].klass) = klass_low + 1;
          *(_QWORD *)(v23 + 32) = v14;
          sub_1BC2FAC(v23 + 32);
        }
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1BC3264(skipCollider, method);
  }
LABEL_30:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23256/*"showResultItem"*/,
    this->fields.itemDispWaitTime,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *resultItemObjList; // x0
  UnityEngine_GameObject_o **p_dispObj; // x21
  const MethodInfo *v12; // x2
  bool v13; // w0
  int32_t playCnt; // w8
  _BOOL4 isSkip; // w9
  int32_t v16; // w8
  int32_t maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x8
  UnityEngine_Transform_o *v22; // x21
  int v23; // s0
  BoxGachaUtility_c *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v32; // x20

  if ( (byte_4AFC6A3 & 1) == 0 )
  {
    sub_1BC3008(&BoxGachaUtility_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v3);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_22491/*"playEffectDrop"*/, v8);
    sub_1BC3008(&StringLiteral_18632/*"ef_boxitem_fall"*/, v9);
    byte_4AFC6A3 = 1;
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  p_dispObj = &this->fields.dispObj;
  this->fields.dispObj = (struct UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                              resultItemObjList,
                                                              this->fields.playCnt,
                                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  sub_1BC2FAC(&this->fields.dispObj);
  v13 = ResultListWindow__checkRare(this, this->fields.playCnt, v12);
  playCnt = this->fields.playCnt;
  isSkip = this->fields.isSkip;
  this->fields.isRare = v13;
  v16 = playCnt + 1;
  this->fields.playCnt = v16;
  if ( isSkip && !v13 )
  {
    ResultListWindow__showResultItem(this, method);
    return;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( v16 > 30 || maxPlayCnt <= 10 )
  {
    resultItemObjList = (System_Collections_Generic_List_object__o *)GameObjectExtensions__GetParent(*p_dispObj, 0LL);
    if ( !resultItemObjList )
      goto LABEL_38;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)resultItemObjList, 0LL);
  }
  else
  {
    resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.effectRoot;
    if ( !resultItemObjList )
      goto LABEL_38;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resultItemObjList, 0LL);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)BoxGachaResultEffectComponent__getEffect(
                                                                     (System_String_o *)StringLiteral_18632/*"ef_boxitem_fall"*/,
                                                                     transform,
                                                                     v19);
  if ( !resultItemObjList )
    goto LABEL_38;
  v20 = (UnityEngine_GameObject_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)resultItemObjList,
                                                                     0LL);
  v21 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_38;
  v22 = (UnityEngine_Transform_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v21, 0LL);
  if ( !resultItemObjList )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)resultItemObjList,
                                     0LL);
  if ( !v22 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  if ( maxPlayCnt >= 11 )
  {
    v26 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v26 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v20, v26->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
  if ( !resultItemObjList
    || (items = resultItemObjList->fields._items,
        v28 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resultItemObjList->fields._version,
        !items) )
  {
LABEL_38:
    sub_1BC3264(resultItemObjList, method);
  }
  size = resultItemObjList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resultItemObjList,
      (Il2CppObject *)v20,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    resultItemObjList->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v20;
    sub_1BC2FAC(v30 + 4);
  }
  if ( this->fields.isSkip )
    goto LABEL_37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v20,
                                 (const MethodInfo_3055BFC *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v32 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v20,
          (const MethodInfo_3055BFC *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                     0LL,
                                                                     0LL);
  if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                       (UnityEngine_Object_o *)v32,
                                                                       0LL,
                                                                       0LL);
    if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
      goto LABEL_37;
    if ( v32 )
    {
      UnityEngine_Animation__Play_69779584((UnityEngine_Animation_o *)v32, this->fields.aniName, 0LL);
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( !ComponentInChildren_object )
    goto LABEL_38;
  SimpleAnimation__Play_65293968((SimpleAnimation_o *)ComponentInChildren_object, this->fields.aniName, 0LL);
LABEL_37:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22491/*"playEffectDrop"*/,
    this->fields.itemDropTime,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setDispResultListBg(ResultListWindow_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *firstLineGrid; // x0

  firstLineGrid = (UnityEngine_Component_o *)this->fields.firstLineGrid;
  if ( !firstLineGrid
    || (firstLineGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(firstLineGrid, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0LL),
        (firstLineGrid = (UnityEngine_Component_o *)this->fields.sceLineGrid) == 0LL)
    || (firstLineGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(firstLineGrid, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0LL),
        (firstLineGrid = (UnityEngine_Component_o *)this->fields.thrLineGrid) == 0LL)
    || (firstLineGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(firstLineGrid, 0LL)) == 0LL )
  {
    sub_1BC3264(firstLineGrid, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 Master_object; // x0
  const MethodInfo *v16; // x1
  struct UIGrid_o *firstResultGrid; // x8
  int32_t maxPerLine; // w20
  struct UIGrid_o *sceResultGrid; // x8
  DataManager_c **v20; // x27
  int32_t v21; // w23
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w22
  __int64 v24; // x26
  __int64 v25; // x29
  signed __int64 v26; // x21
  struct UIGrid_o **v27; // x8
  UnityEngine_Component_o *v28; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  struct System_Int32_array *baseNoList; // x8
  UnityEngine_GameObject_o *resultListItemPrefab; // x25
  BoxGachaBaseEntity_o *v33; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v35; // x23
  UnityEngine_Transform_o *v36; // x25
  ResultItemComponent_o *v37; // x25
  BoxGachaUtility_c *v38; // x8
  int *static_fields; // x8
  int v40; // s2
  int v41; // s1
  int v42; // s0
  const MethodInfo *v43; // x1
  __int64 v44; // x22
  __int64 v45; // x29
  UnityEngine_GameObject_o *resultListResultFrame; // x26
  DataManager_c **v47; // x20
  UnityEngine_Transform_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x26
  UnityEngine_Transform_o *v50; // x27
  BoxGachaUtility_c *v51; // x0
  int32_t type; // w8
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  __int64 v59; // x8
  struct System_Int32_array *v60; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  float v63; // s0
  int32_t v64; // w1
  const MethodInfo *v65; // x1
  signed __int64 v66; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_GameObject__o **p_resultItemObjList; // [xsp+10h] [xbp-A0h]
  struct UIGrid_o **p_thrResultGrid; // [xsp+18h] [xbp-98h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+20h] [xbp-90h]
  GiftMaster_o *v70; // [xsp+28h] [xbp-88h]
  int v71; // [xsp+34h] [xbp-7Ch]
  signed __int64 v72; // [xsp+38h] [xbp-78h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+40h] [xbp-70h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+48h] [xbp-68h]

  if ( (byte_4AFC69F & 1) == 0 )
  {
    sub_1BC3008(&BoxGachaUtility_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_BoxGachaBaseMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_GiftMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___, v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_1BC3008(&System_Math_TypeInfo, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_12926/*"StartDisp"*/, v13);
    byte_4AFC69F = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v14;
  p_resultItemObjList = &this->fields.resultItemObjList;
  Master_object = sub_1BC2FAC(&this->fields.resultItemObjList);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_87;
  maxPerLine = firstResultGrid->fields.maxPerLine;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_87;
  v20 = &DataManager_TypeInfo;
  v21 = sceResultGrid->fields.maxPerLine;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GiftMaster___);
  resultIdList = this->fields.resultIdList;
  v70 = (GiftMaster_o *)Master_object;
  if ( !resultIdList )
    goto LABEL_87;
  max_length = resultIdList->max_length;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length <= 10 )
    v24 = 8LL;
  else
    v24 = 20LL;
  if ( max_length <= 10 )
    v25 = 4LL;
  else
    v25 = 16LL;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  if ( max_length >= 1 )
  {
    v26 = 0LL;
    v72 = maxPerLine - 1;
    v66 = v21 + maxPerLine - 1;
    v71 = resultIdList->max_length;
    do
    {
      Master_object = (__int64)this->fields.resultList;
      if ( !Master_object )
        goto LABEL_87;
      Master_object = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
      if ( !Master_object )
        goto LABEL_87;
      if ( max_length < 11 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        v27 = &this->fields.firstResultGrid;
        if ( v26 > v72 )
        {
          v27 = &this->fields.sceResultGrid;
          if ( v26 > v66 )
            v27 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
        v27 = &this->fields.resultScrollViewGrid;
      }
      v28 = (UnityEngine_Component_o *)*v27;
      if ( !(*v20)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v20);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_87;
      if ( v26 >= (unsigned __int64)baseNoList->max_length )
        sub_1BC326C(Master_object, v16, v29, v30);
      if ( !Master_object )
        goto LABEL_87;
      Master_object = (__int64)BoxGachaBaseMaster__GetEntity(
                                 (BoxGachaBaseMaster_o *)Master_object,
                                 this->fields.currentBaseId,
                                 baseNoList->m_Items[v26 + 1],
                                 0LL);
      if ( !v28 )
        goto LABEL_87;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v33 = (BoxGachaBaseEntity_o *)Master_object;
      transform = UnityEngine_Component__get_transform(v28, 0LL);
      Master_object = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 resultListItemPrefab,
                                 transform,
                                 0LL,
                                 0LL);
      if ( !Master_object )
        goto LABEL_87;
      v35 = (UnityEngine_GameObject_o *)Master_object;
      Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
      v36 = (UnityEngine_Transform_o *)Master_object;
      if ( !byte_4AFBDB6 )
      {
        Master_object = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v16);
        byte_4AFBDB6 = 1;
      }
      if ( !v36 )
        goto LABEL_87;
      UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v35,
                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v37 = (ResultItemComponent_o *)Master_object;
      v38 = BoxGachaUtility_TypeInfo;
      if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
        v38 = BoxGachaUtility_TypeInfo;
      }
      if ( !v37 )
        goto LABEL_87;
      static_fields = (int *)v38->static_fields;
      v40 = *(int *)((char *)static_fields + v24);
      v41 = *(int *)((char *)static_fields + v25);
      if ( max_length > 10 )
        static_fields += 3;
      v42 = *static_fields;
      ResultItemComponent__SetItemIconScale(v37, *(UnityEngine_Vector3_o *)(&v41 - 1), v16);
      ResultItemComponent__Clear(v37, v43);
      if ( max_length >= 11 )
      {
        Master_object = (__int64)this->fields.resultScrollViewResultFrameGrid;
        if ( !Master_object )
          goto LABEL_87;
        v44 = v25;
        v45 = v24;
        resultListResultFrame = this->fields.resultListResultFrame;
        v47 = v20;
        v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        Master_object = (__int64)BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   resultListResultFrame,
                                   v48,
                                   0LL,
                                   0LL);
        if ( !Master_object )
          goto LABEL_87;
        v49 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
        v50 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4AFBDB6 )
        {
          Master_object = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v16);
          byte_4AFBDB6 = 1;
        }
        if ( !v50 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v50, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v51 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v51 = BoxGachaUtility_TypeInfo;
        }
        v20 = v47;
        GameObjectExtensions__SetLocalScale(v49, v51->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   v35,
                                   (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !Master_object )
          goto LABEL_87;
        *(_QWORD *)(Master_object + 32) = this->fields.resultScrollView;
        Master_object = sub_1BC2FAC(Master_object + 32);
        v24 = v45;
        v25 = v44;
        max_length = v71;
      }
      if ( v33 )
      {
        if ( v33->fields.isRare )
          ResultItemComponent__SetRareItem(v37, v16);
        type = v33->fields.type;
        if ( type == 1 )
        {
          Master_object = (__int64)v70;
          if ( !v70 )
            goto LABEL_87;
          Master_object = (__int64)GiftMaster__getDataById(v70, v33->fields.targetId, 0LL);
          if ( Master_object )
          {
            if ( *(int *)(Master_object + 28) <= 1 )
              v54 = 0;
            else
              v54 = *(_DWORD *)(Master_object + 28);
            ResultItemComponent__Set(v37, (GiftEntity_o *)Master_object, v54, v53);
            goto LABEL_61;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          Master_object = (__int64)BoxGachaBaseEntity__getRewardSetData(v33, this->fields.currentEventId, 0LL);
          if ( Master_object )
          {
            ResultItemComponent__SetExtra(v37, *(_DWORD *)(Master_object + 28), *(_DWORD *)(Master_object + 48), v55);
LABEL_61:
            UnityEngine_GameObject__SetActive(v35, 0, 0LL);
            Master_object = (__int64)*p_resultItemObjList;
            if ( !*p_resultItemObjList )
              goto LABEL_87;
            v56 = *(_QWORD *)(Master_object + 16);
            v57 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++*(_DWORD *)(Master_object + 28);
            if ( !v56 )
              goto LABEL_87;
            v58 = *(int *)(Master_object + 24);
            if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v35,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = v56 + 8 * v58;
              *(_DWORD *)(Master_object + 24) = v58 + 1;
              *(_QWORD *)(v59 + 32) = v35;
              Master_object = sub_1BC2FAC(v59 + 32);
            }
          }
        }
      }
      v60 = this->fields.resultIdList;
      if ( !v60 )
        goto LABEL_87;
      ++v26;
    }
    while ( v26 < (int)v60->max_length );
  }
  if ( max_length >= 11 )
  {
    adjustSprite = (UnityEngine_Object_o *)this->fields.adjustSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(adjustSprite, 0LL, 0LL) )
    {
      maxPlayCnt = this->fields.maxPlayCnt;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      Master_object = (__int64)this->fields.adjustSprite;
      if ( Master_object )
      {
        v63 = ceilf((float)maxPlayCnt / 10.0);
        if ( v63 == INFINITY )
          v64 = 5;
        else
          v64 = 60 * (int)v63 + 5;
        UIWidget__set_height((UIWidget_o *)Master_object, v64, 0LL);
        goto LABEL_79;
      }
LABEL_87:
      sub_1BC3264(Master_object, v16);
    }
  }
LABEL_79:
  Master_object = (__int64)*p_firstResultGrid;
  if ( !*p_firstResultGrid )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  Master_object = (__int64)*p_sceResultGrid;
  if ( !*p_sceResultGrid )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  Master_object = (__int64)*p_thrResultGrid;
  if ( !*p_thrResultGrid )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  Master_object = (__int64)*p_resultScrollViewGrid;
  if ( !*p_resultScrollViewGrid )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  Master_object = (__int64)this->fields.resultScrollViewResultFrameGrid;
  if ( !Master_object )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  if ( max_length < 11 )
    ResultListWindow__showResultEffect(this, v65);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12926/*"StartDisp"*/,
      0LL);
}


void __fastcall ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4AFC6A2 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23090/*"setDisp"*/, method);
    byte_4AFC6A2 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23090/*"setDisp"*/,
    0.3,
    0LL);
}


void __fastcall ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObj; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4AFC6A5 & 1) == 0 )
  {
    sub_1BC3008(&Method_ResultListWindow_showResultItem__, method);
    sub_1BC3008(&StringLiteral_17210/*"box3"*/, v3);
    sub_1BC3008(&StringLiteral_18830/*"endDisp"*/, v4);
    byte_4AFC6A5 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_1BC3264(0LL, method);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0LL);
  if ( this->fields.playCnt == 1 && this->fields.forceDropSe )
  {
    v6 = Method_ResultListWindow_showResultItem__;
    if ( (*((_BYTE *)Method_ResultListWindow_showResultItem__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_ResultListWindow_showResultItem__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)StringLiteral_17210/*"box3"*/, 0, 0LL);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_18830/*"endDisp"*/,
    this->fields.itemDispTime,
    0LL);
}


void __fastcall ResultListWindow_RewardAction___ctor(ResultListWindow_RewardAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ResultListWindow__StartDisp_d__50___ctor(
        ResultListWindow__StartDisp_d__50_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ResultListWindow__StartDisp_d__50__MoveNext(
        ResultListWindow__StartDisp_d__50_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x19
  UnityEngine_WaitForSeconds_o *v17; // x19
  bool result; // w0
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  System_Collections_Generic_List_object__o *v20; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  int v22; // w23
  __int64 v23; // x22
  float v24; // s0
  unsigned int v25; // w9
  int maxPlayCnt; // w8
  signed int v27; // w9
  int v28; // w9
  unsigned int v29; // w8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  int v35; // w8
  int32_t v36; // w22
  System_Collections_Generic_List_object__o *v37; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v39; // x2
  System_Collections_IEnumerator_o *started; // x0
  struct System_Collections_Generic_List_ResultListWindow_RewardAction__o **v41; // x21
  int32_t v42; // w20
  int32_t v43; // w20
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v47; // x1
  ResultListWindow_c *v48; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_4AFC6B0 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1BC3008(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo, v8);
    sub_1BC3008(&ResultListWindow_TypeInfo, v9);
    sub_1BC3008(&ResultListWindow_RewardAction_TypeInfo, v10);
    sub_1BC3008(&Method_ResultListWindow__StartDisp_d__50_MoveNext__, v11);
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_17210/*"box3"*/, v13);
    sub_1BC3008(&StringLiteral_5963/*"EndOpen"*/, v14);
    byte_4AFC6B0 = 1;
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
      v17 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v17, 0.2, 0LL);
      this->fields.__2__current = (Il2CppObject *)v17;
      sub_1BC2FAC(&this->fields.__2__current);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v20 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)v20;
    p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)sub_1BC2FAC(&this->fields._listRewardAction_5__2);
    if ( !_4__this )
      goto LABEL_74;
    v22 = 0;
    while ( v22 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
    {
      v23 = sub_1BC3254(ResultListWindow_RewardAction_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      if ( !v23 )
        goto LABEL_74;
      *(_DWORD *)(v23 + 16) = v22;
      v24 = 0.0;
      v25 = v22 + _4__this->fields.playCnt;
      *(_DWORD *)(v23 + 20) = v25;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v25 + 1) >= 51 )
      {
        v27 = v25 / 0xA;
        v24 = (float)v27 / (float)((maxPlayCnt - 1) / 10);
        v28 = v27 + 1;
        v29 = maxPlayCnt / 0xAu;
        if ( v24 >= 0.85 || v28 == v29 )
          v24 = 1.0;
      }
      *(float *)(v23 + 24) = v24;
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_74;
      items = listRewardAction_5__2->fields._items;
      v32 = Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__;
      ++listRewardAction_5__2->fields._version;
      if ( !items )
        goto LABEL_74;
      size = listRewardAction_5__2->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listRewardAction_5__2,
          (Il2CppObject *)v23,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        listRewardAction_5__2->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v23;
        sub_1BC2FAC(v34 + 4);
      }
      if ( ++v22 == 10 )
        break;
    }
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_74;
    v35 = listRewardAction_5__2->fields._size;
    _4__this->fields.playCnt += v35;
    if ( v35 >= 1 )
    {
      v36 = 0;
      do
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v36,
                                                                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_74;
        v37 = listRewardAction_5__2;
        Item = System_Collections_Generic_List_object___get_Item(
                 *p_listRewardAction_5__2,
                 v36,
                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        started = ResultListWindow__StartRewardAction(_4__this, (ResultListWindow_RewardAction_o *)Item, v39);
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_70019872(
                                                                               (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                               started,
                                                                               0LL);
        if ( !v37 )
          goto LABEL_74;
        v37->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
        sub_1BC2FAC(&v37->fields._syncRoot);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_74;
        v35 = listRewardAction_5__2->fields._size;
      }
      while ( ++v36 < v35 );
    }
    if ( !v35 || v35 == _4__this->fields.maxPlayCnt )
      goto LABEL_63;
LABEL_37:
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           listRewardAction_5__2,
                                                                           listRewardAction_5__2->fields._size - 1,
                                                                           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
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
    v41 = &this->fields._listRewardAction_5__2;
    if ( _4__this->fields.isSkip )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v41;
      if ( *v41 )
      {
        v42 = 0;
        while ( v42 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v42,
                                                                                 (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_70020492(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0LL);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v41;
            ++v42;
            if ( *v41 )
              continue;
          }
          goto LABEL_74;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v43 = 0;
          while ( v43 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v43,
                                                                                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0LL);
              if ( !v43 && _4__this->fields.forceDropSe )
              {
                v44 = Method_ResultListWindow__StartDisp_d__50_MoveNext__;
                if ( (*((_BYTE *)Method_ResultListWindow__StartDisp_d__50_MoveNext__ + 83) & 2) != 0 )
                  v44 = (_QWORD *)sub_1BC3020(Method_ResultListWindow__StartDisp_d__50_MoveNext__);
                v45 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v44, v44[4]);
                OverwriteAssetSoundName__PlaySe(v45, (System_String_o *)StringLiteral_17210/*"box3"*/, 0, 0LL);
              }
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v43;
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
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)listRewardAction_5__2, 0, 0LL);
            if ( _4__this->fields.isDischargeGetEffectItem )
            {
              EFFECT_PLAY_TIME = 0.5;
              v47 = (System_String_o *)StringLiteral_5963/*"EndOpen"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v48 = ResultListWindow_TypeInfo;
              if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v48 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v48->static_fields->EFFECT_PLAY_TIME;
              v47 = (System_String_o *)StringLiteral_5963/*"EndOpen"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v47, EFFECT_PLAY_TIME, 0LL);
            return 0;
          }
        }
      }
LABEL_74:
      sub_1BC3264(listRewardAction_5__2, method);
    }
    *v41 = 0LL;
    sub_1BC2FAC(&this->fields._listRewardAction_5__2);
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BC2FAC(p__2__current);
  *((_DWORD *)p__2__current - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall ResultListWindow__StartDisp_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ResultListWindow__StartDisp_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ResultListWindow__StartDisp_d__50__System_Collections_IEnumerator_Reset(
        ResultListWindow__StartDisp_d__50_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ResultListWindow__StartDisp_d__50_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ResultListWindow__StartDisp_d__50__System_Collections_IEnumerator_get_Current(
        ResultListWindow__StartDisp_d__50_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ResultListWindow__StartDisp_d__50__System_IDisposable_Dispose(
        ResultListWindow__StartDisp_d__50_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ResultListWindow__StartRewardAction_d__51___ctor(
        ResultListWindow__StartRewardAction_d__51_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ResultListWindow__StartRewardAction_d__51__MoveNext(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ResultListWindow__StartRewardAction_d__51_o *v3; // x19
  __int64 v4; // x1
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
  __int64 v15; // x1
  struct ResultListWindow_o *_4__this; // x20
  int32_t v17; // w9
  int32_t i_5__2; // w8
  struct ResultListWindow_RewardAction_o *rewardAction; // x8
  float maxDrawItemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v21; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int v24; // w23
  System_String_o **v25; // x8
  System_String_o *v26; // x21
  UnityEngine_Transform_o *v27; // x0
  const MethodInfo *v28; // x2
  ResultListWindow__StartRewardAction_d__51_o *v29; // x21
  struct ResultListWindow_RewardAction_o *v30; // x8
  SyncPositionComponent_o *v31; // x22
  const MethodInfo *v32; // x1
  BoxGachaUtility_c *v33; // x0
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  struct ResultListWindow_RewardAction_o *v38; // x8
  struct ResultListWindow_RewardAction_o *v39; // x8
  ResultListWindow_c *v40; // x0
  float scrollValue; // s0
  bool v42; // w0
  _BOOL4 isSkip; // w8
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v46; // x2
  ResultListWindow__StartRewardAction_d__51_o *v47; // x21
  struct ResultListWindow_RewardAction_o *v48; // x8
  SyncPositionComponent_o *v49; // x22
  const MethodInfo *v50; // x1
  BoxGachaUtility_c *v51; // x0
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 _2__current_low; // x10
  __int64 v55; // x8
  Il2CppObject *ComponentInChildren_object; // x22
  Il2CppObject *v57; // x21
  Il2CppObject **v58; // x19
  int v59; // w8
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v61; // x20

  v3 = this;
  if ( (byte_4AFC6B1 & 1) == 0 )
  {
    sub_1BC3008(&BoxGachaUtility_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&ResultListWindow_TypeInfo, v10);
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_18630/*"ef_boxitem_drop_rare"*/, v12);
    sub_1BC3008(&StringLiteral_18631/*"ef_boxitem_drop_scalable"*/, v13);
    sub_1BC3008(&StringLiteral_18633/*"ef_boxitem_fall_scalable"*/, v14);
    this = (ResultListWindow__StartRewardAction_d__51_o *)sub_1BC3008(&StringLiteral_5963/*"EndOpen"*/, v15);
    byte_4AFC6B1 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v17 = 0;
      v3->fields.__1__state = -1;
      v3->fields._i_5__2 = 0;
      goto LABEL_6;
    case 1:
      i_5__2 = v3->fields._i_5__2;
      v3->fields.__1__state = -1;
      v17 = i_5__2 + 1;
      v3->fields._i_5__2 = i_5__2 + 1;
LABEL_6:
      rewardAction = v3->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_84;
      if ( v17 < rewardAction->fields.index )
      {
        if ( _4__this )
        {
          maxDrawItemDispWaitTime = _4__this->fields.maxDrawItemDispWaitTime;
          v21 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v21, maxDrawItemDispWaitTime, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v21;
          p__2__current = &v3->fields.__2__current;
          sub_1BC2FAC(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_84:
        sub_1BC3264(this, method);
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
          UIProgressBar__set_value((UIProgressBar_o *)this, scrollValue, 0LL);
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
      v42 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, v2);
      isSkip = _4__this->fields.isSkip;
      _4__this->fields.isRare = v42;
      if ( !isSkip || v42 )
      {
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.effectRoot;
        if ( !this )
          goto LABEL_84;
        maxPlayCnt = _4__this->fields.maxPlayCnt;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (ResultListWindow__StartRewardAction_d__51_o *)BoxGachaResultEffectComponent__getEffect(
                                                                (System_String_o *)StringLiteral_18633/*"ef_boxitem_fall_scalable"*/,
                                                                transform,
                                                                v46);
        if ( !this )
          goto LABEL_84;
        v47 = this;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v48 = v3->fields.rewardAction;
        if ( !v48 )
          goto LABEL_84;
        v49 = (SyncPositionComponent_o *)this;
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                                (System_Collections_Generic_List_object__o *)this,
                                                                v48->fields.playCnt,
                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
        if ( !v49 )
          goto LABEL_84;
        v49->fields.targetTransform = (struct UnityEngine_Transform_o *)this;
        sub_1BC2FAC(&v49->fields.targetTransform);
        SyncPositionComponent__SyncPosition(v49, v50);
        if ( maxPlayCnt >= 11 )
        {
          v51 = BoxGachaUtility_TypeInfo;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v51 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(
            (UnityEngine_GameObject_o *)v47,
            v51->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
            0LL);
        }
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.fallEffectObjList;
        if ( !this )
          goto LABEL_84;
        v52 = *(_QWORD *)&this->fields.__1__state;
        v53 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v52 )
          goto LABEL_84;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v52 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v47,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = v52 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v55 + 32) = v47;
          sub_1BC2FAC(v55 + 32);
        }
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v47,
                                         (const MethodInfo_3055BFC *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v57 = UnityEngine_GameObject__GetComponentInChildren_object_(
                  (UnityEngine_GameObject_o *)v47,
                  (const MethodInfo_3055BFC *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                  0LL,
                                                                  0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !ComponentInChildren_object )
              goto LABEL_84;
            SimpleAnimation__Play_65293968(
              (SimpleAnimation_o *)ComponentInChildren_object,
              _4__this->fields.aniName,
              0LL);
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)v57,
                                                                    0LL,
                                                                    0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v57 )
                goto LABEL_84;
              UnityEngine_Animation__Play_69779584((UnityEngine_Animation_o *)v57, _4__this->fields.aniName, 0LL);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v61 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v61, itemDropTime, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v61;
      v58 = &v3->fields.__2__current;
      sub_1BC2FAC(v58);
      v59 = 2;
LABEL_83:
      *((_DWORD *)v58 - 2) = v59;
      return 1;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.skipCollider;
      if ( !this )
        goto LABEL_84;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 1, 0LL);
      if ( _4__this->fields.isSkip && !_4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.effectRoot;
      if ( !this )
        goto LABEL_84;
      v24 = _4__this->fields.maxPlayCnt;
      v25 = (System_String_o **)(_4__this->fields.isRare ? &StringLiteral_18630/*"ef_boxitem_drop_rare"*/ : &StringLiteral_18631/*"ef_boxitem_drop_scalable"*/);
      v26 = *v25;
      v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ResultListWindow__StartRewardAction_d__51_o *)BoxGachaResultEffectComponent__getEffect(v26, v27, v28);
      if ( !this )
        goto LABEL_84;
      v29 = this;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v30 = v3->fields.rewardAction;
      if ( !v30 )
        goto LABEL_84;
      v31 = (SyncPositionComponent_o *)this;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v30->fields.playCnt,
                                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
      if ( !v31 )
        goto LABEL_84;
      v31->fields.targetTransform = (struct UnityEngine_Transform_o *)this;
      sub_1BC2FAC(&v31->fields.targetTransform);
      SyncPositionComponent__SyncPosition(v31, v32);
      if ( v24 >= 11 )
      {
        v33 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v33 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v29,
          v33->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
          0LL);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.dropEffectObjList;
      if ( !this )
        goto LABEL_84;
      v34 = *(_QWORD *)&this->fields.__1__state;
      v35 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v34 )
        goto LABEL_84;
      v36 = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v29,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = v34 + 8 * v36;
        LODWORD(this->fields.__2__current) = v36 + 1;
        *(_QWORD *)(v37 + 32) = v29;
        sub_1BC2FAC(v37 + 32);
      }
LABEL_76:
      v3->fields.__2__current = 0LL;
      v58 = &v3->fields.__2__current;
      sub_1BC2FAC(v58);
      v59 = 3;
      goto LABEL_83;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      v38 = v3->fields.rewardAction;
      if ( !v38 )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v38->fields.playCnt,
                                                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v39 = v3->fields.rewardAction;
      if ( !v39 )
        goto LABEL_84;
      v39->fields.isEnd = 1;
      if ( !_4__this->fields.isDischargeGetEffectItem && v39->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
      {
        v40 = ResultListWindow_TypeInfo;
        if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
          v40 = ResultListWindow_TypeInfo;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          (System_String_o *)StringLiteral_5963/*"EndOpen"*/,
          v40->static_fields->EFFECT_PLAY_TIME,
          0LL);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ResultListWindow__StartRewardAction_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ResultListWindow__StartRewardAction_d__51__System_Collections_IEnumerator_Reset(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ResultListWindow__StartRewardAction_d__51_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ResultListWindow__StartRewardAction_d__51__System_Collections_IEnumerator_get_Current(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ResultListWindow__StartRewardAction_d__51__System_IDisposable_Dispose(
        ResultListWindow__StartRewardAction_d__51_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ResultListWindow___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFC6AD & 1) == 0 )
  {
    sub_1BC3008(&ResultListWindow___c_TypeInfo, v1);
    byte_4AFC6AD = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ResultListWindow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ResultListWindow___c_TypeInfo->static_fields->__9 = (struct ResultListWindow___c_o *)v2;
  sub_1BC2FAC(ResultListWindow___c_TypeInfo->static_fields);
}


void __fastcall ResultListWindow___c___ctor(ResultListWindow___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ResultListWindow___c___ClickSkip_b__63_0(
        ResultListWindow___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4AFC6AE & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, x);
    byte_4AFC6AE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)x, 0LL);
  }
}


void __fastcall ResultListWindow___c___ClickSkip_b__63_1(
        ResultListWindow___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4AFC6AF & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, x);
    byte_4AFC6AF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)x, 0LL);
  }
}


void __fastcall ResultListWindow___c__DisplayClass60_0___ctor(
        ResultListWindow___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ResultListWindow___c__DisplayClass60_0___Close_b__0(
        ResultListWindow___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  ResultListWindow_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (ResultListWindow__Init(_4__this, method), (_4__this = this->fields.__4__this) == 0LL) )
    sub_1BC3264(_4__this, method);
  ResultListWindow__ClearAllGrid(_4__this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}