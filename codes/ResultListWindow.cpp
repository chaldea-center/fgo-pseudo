void __fastcall ResultListWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4BE070F & 1) == 0 )
  {
    sub_1C21E38(&ResultListWindow_TypeInfo);
    byte_4BE070F = 1;
  }
  LODWORD(ResultListWindow_TypeInfo->static_fields->EFFECT_PLAY_TIME) = (struct ResultListWindow_StaticFields)1061997773;
}


void __fastcall ResultListWindow___ctor(ResultListWindow_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BE070E & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&StringLiteral_19133/*"ef_boxitem_fall"*/);
    byte_4BE070E = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_BFE8A0;
  v9 = StringLiteral_19133/*"ef_boxitem_fall"*/;
  this->fields.aniName = (struct System_String_o *)StringLiteral_19133/*"ef_boxitem_fall"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.aniName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.fallEffectObjList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dropEffectObjList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_4BE070C & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE070C = 1;
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
      UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1C22094(this, grid);
  }
}


void __fastcall ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  void *skipCollider; // x0
  System_Collections_ICollection_o *fallEffectObjList; // x0
  struct System_Collections_Generic_List_GameObject__o *v5; // x20
  System_Action_object__o *v6; // x21
  Il2CppObject *v7; // x22
  struct ResultListWindow___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x19
  System_Action_object__o *v16; // x20
  Il2CppObject *v17; // x21
  struct ResultListWindow___c_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BE070D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C21E38(&Method_ResultListWindow___c__ClickSkip_b__63_0__);
    sub_1C21E38(&Method_ResultListWindow___c__ClickSkip_b__63_1__);
    sub_1C21E38(&ResultListWindow___c_TypeInfo);
    byte_4BE070D = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_25;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0LL) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_25:
    sub_1C22094(skipCollider, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0LL);
  fallEffectObjList = (System_Collections_ICollection_o *)this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( !BasicHelper__IsNullOrEmpty(fallEffectObjList, 0LL) )
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
      v6 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v6, v7, Method_ResultListWindow___c__ClickSkip_b__63_0__, 0LL);
      static_fields = ResultListWindow___c_TypeInfo->static_fields;
      static_fields->__9__63_0 = (struct System_Action_GameObject__o *)v6;
      sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__63_0, (int64_t)v6, v9, v10, v11, v12, v13, v14);
    }
    if ( !v5 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v5,
      (System_Action_T__o *)v6,
      (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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
    v16 = *(System_Action_object__o **)(*((_QWORD *)skipCollider + 23) + 16LL);
    if ( !v16 )
    {
      if ( !*((_DWORD *)skipCollider + 56) )
      {
        j_il2cpp_runtime_class_init_0(skipCollider);
        skipCollider = ResultListWindow___c_TypeInfo;
      }
      v17 = (Il2CppObject *)**((_QWORD **)skipCollider + 23);
      v16 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v16, v17, Method_ResultListWindow___c__ClickSkip_b__63_1__, 0LL);
      v18 = ResultListWindow___c_TypeInfo->static_fields;
      v18->__9__63_1 = (struct System_Action_GameObject__o *)v16;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v18->__9__63_1, (int64_t)v16, v19, v20, v21, v22, v23, v24);
    }
    if ( dropEffectObjList )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)dropEffectObjList,
        (System_Action_T__o *)v16,
        (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
      return;
    }
    goto LABEL_25;
  }
}


void __fastcall ResultListWindow__Close(ResultListWindow_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *v20; // x20

  if ( (byte_4BE070B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__);
    sub_1C21E38(&ResultListWindow___c__DisplayClass60_0_TypeInfo);
    byte_4BE070B = 1;
  }
  v5 = sub_1C22084(ResultListWindow___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0LL);
}


void __fastcall ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v5; // x1
  UIProgressBar_o *v6; // x0
  float v7; // s0

  if ( (byte_4BE070A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_6434/*"ExecuteOpenCallBack"*/);
    byte_4BE070A = 1;
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
    v6 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v6 )
      sub_1C22094(0LL, v5);
    UIProgressBar__set_value(v6, 1.0, 0LL);
    this->fields.isLastLineEffectPlay = 1;
  }
  if ( this->fields.openCallBack )
  {
    if ( this->fields.isLongPress )
      v7 = *((float *)&qword_BFD370 + (this->fields.maxPlayCnt > 10));
    else
      v7 = 0.0;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6434/*"ExecuteOpenCallBack"*/,
      v7,
      0LL);
  }
}


void __fastcall ResultListWindow__ExecuteOpenCallBack(ResultListWindow_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_bool__o *openCallBack; // x20
  __int64 v10; // x0
  __int64 v11; // x1

  openCallBack = this->fields.openCallBack;
  this->fields.openCallBack = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !openCallBack )
    sub_1C22094(v10, v11);
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
    sub_1C22094(0LL, method);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  int v23; // w9
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int v31; // w9
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w23
  UnityEngine_Object_o *scrollBar; // x22
  UnityEngine_Object_o *resultScrollView; // x22
  const MethodInfo *v54; // x2
  bool v55; // w0

  if ( (byte_4BE0700 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0700 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    ResultListWindow__setDispResultListBg(this, 1, v20);
    gameObject = (UnityEngine_GameObject_o *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)this->fields.fallEffectObjList,
                                               0LL);
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
      v24 = (unsigned int)dropEffectObjList->fields._size;
      v31 = dropEffectObjList->fields._version + 1;
      dropEffectObjList->fields._size = 0;
      dropEffectObjList->fields._version = v31;
      if ( (int)v24 >= 1 )
        System_Array__Clear((System_Array_o *)dropEffectObjList->fields._items, 0, v24, 0LL);
    }
    this->fields.openCallBack = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.openCallBack,
      (int64_t)callback,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    this->fields.resultIdList = resultIds;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.resultIdList,
      (int64_t)resultIds,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this->fields.rareIdxList = rareIdxs;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.rareIdxList,
      (int64_t)rareIdxs,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    this->fields.baseNoList = baseNos;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.baseNoList, (int64_t)baseNos, v44, v45, v46, v47, v48, v49);
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
              ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v54);
LABEL_25:
              this->fields.isSkip = isResultLongPress;
              this->fields.isLongPress = isResultLongPress;
              v55 = isResultLongPress && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)rareIdxs, 0LL);
              this->fields.forceDropSe = v55;
              ResultListWindow__setResultItem(this, v19);
              BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C22094(gameObject, v19);
  }
}


void __fastcall ResultListWindow__SetScrollControllEnabled(
        ResultListWindow_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *resultScrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_4BE0701 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0701 = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartDisp(
        ResultListWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BE0703 & 1) == 0 )
  {
    sub_1C21E38(&ResultListWindow__StartDisp_d__50_TypeInfo);
    byte_4BE0703 = 1;
  }
  v3 = sub_1C22084(ResultListWindow__StartDisp_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BE0704 & 1) == 0 )
  {
    sub_1C21E38(&ResultListWindow__StartRewardAction_d__51_TypeInfo);
    byte_4BE0704 = 1;
  }
  v5 = sub_1C22084(ResultListWindow__StartRewardAction_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)rewardAction, v12, v13, v14, v15, v16, v17);
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
  struct System_Int32_array *rareIdxList; // x8
  __int64 v4; // x9
  _BOOL8 v6; // x0
  unsigned __int64 v8; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = 0;
  rareIdxList = this->fields.rareIdxList;
  if ( rareIdxList )
  {
    v4 = *(_QWORD *)&rareIdxList->max_length;
    v6 = 0LL;
    if ( v4 && (int)v4 >= 1 )
    {
      v8 = 0LL;
      do
      {
        if ( v8 >= (unsigned int)v4 )
          sub_1C2209C(v6, *(_QWORD *)&idx);
        v10 = rareIdxList->m_Items[v8 + 1];
        v6 = System_Int32__Equals_63920912((int32_t)&v10, idx, 0LL);
        if ( v6 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_1C22094(v6, *(_QWORD *)&idx);
        LODWORD(v4) = rareIdxList->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v4 );
    }
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  return v6;
}


void __fastcall ResultListWindow__endDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  int32_t maxPlayCnt; // w8
  _BOOL4 isDischargeGetEffectItem; // w9

  if ( (byte_4BE0709 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_6141/*"EndOpen"*/);
    sub_1C21E38(&StringLiteral_23575/*"setDisp"*/);
    byte_4BE0709 = 1;
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
        (System_String_o *)StringLiteral_6141/*"EndOpen"*/,
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
      (System_String_o *)StringLiteral_23575/*"setDisp"*/,
      0.00001,
      0LL);
    if ( !this->fields.isDischargeGetEffectItem && this->fields.playCnt == this->fields.maxPlayCnt - 1 )
      goto LABEL_6;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__playEffectDrop(ResultListWindow_o *this, const MethodInfo *method)
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
  int v12; // s0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BoxGachaUtility_c *v21; // x0
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  __int64 v25; // x8

  if ( (byte_4BE0707 & 1) == 0 )
  {
    sub_1C21E38(&BoxGachaUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&StringLiteral_19131/*"ef_boxitem_drop_rare"*/);
    sub_1C21E38(&StringLiteral_19130/*"ef_boxitem_drop"*/);
    sub_1C21E38(&StringLiteral_23741/*"showResultItem"*/);
    byte_4BE0707 = 1;
  }
  if ( this->fields.isSkip && !this->fields.isRare )
    goto LABEL_30;
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_31;
  UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL);
  maxPlayCnt = this->fields.maxPlayCnt;
  v5 = maxPlayCnt > 10;
  if ( this->fields.isRare )
    v6 = (System_String_o **)&StringLiteral_19131/*"ef_boxitem_drop_rare"*/;
  else
    v6 = (System_String_o **)&StringLiteral_19130/*"ef_boxitem_drop"*/;
  v7 = *v6;
  if ( maxPlayCnt < 11 )
  {
    v5 = 0;
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
  skipCollider = (UnityEngine_Collider_o *)BoxGachaResultEffectComponent__getEffect(v7, transform, v9);
  if ( !skipCollider )
    goto LABEL_31;
  v10 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)skipCollider,
                                             0LL);
  if ( !this->fields.dispObj )
    goto LABEL_31;
  v11 = (UnityEngine_Transform_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispObj, 0LL);
  if ( !skipCollider )
    goto LABEL_31;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)skipCollider,
                                     0LL);
  if ( !v11 )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
  if ( v5 )
  {
    v21 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v21 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v10, v21->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  if ( !this->fields.isRare )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.dropEffectObjList;
    if ( skipCollider )
    {
      v22 = *(_QWORD *)&skipCollider->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(skipCollider[1].klass);
      if ( v22 )
      {
        klass_low = SLODWORD(skipCollider[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v22 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skipCollider,
            (Il2CppObject *)v10,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = v22 + 8 * klass_low;
          LODWORD(skipCollider[1].klass) = klass_low + 1;
          *(_QWORD *)(v25 + 32) = v10;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)v10, v15, v16, v17, v18, v19, v20);
        }
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1C22094(skipCollider, method);
  }
LABEL_30:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23741/*"showResultItem"*/,
    this->fields.itemDispWaitTime,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *resultItemObjList; // x0
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o **p_dispObj; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  BoxGachaUtility_c *v32; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v38; // x20

  if ( (byte_4BE0706 & 1) == 0 )
  {
    sub_1C21E38(&BoxGachaUtility_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_22962/*"playEffectDrop"*/);
    sub_1C21E38(&StringLiteral_19133/*"ef_boxitem_fall"*/);
    byte_4BE0706 = 1;
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  Item = System_Collections_Generic_List_object___get_Item(
           resultItemObjList,
           this->fields.playCnt,
           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  p_dispObj = &this->fields.dispObj;
  this->fields.dispObj = (struct UnityEngine_GameObject_o *)Item;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dispObj, (int64_t)Item, v6, v7, v8, v9, v10, v11);
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
                                                                     (System_String_o *)StringLiteral_19133/*"ef_boxitem_fall"*/,
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
    v32 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v32 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v20, v32->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
  if ( !resultItemObjList
    || (items = resultItemObjList->fields._items,
        v34 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resultItemObjList->fields._version,
        !items) )
  {
LABEL_38:
    sub_1C22094(resultItemObjList, method);
  }
  size = resultItemObjList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resultItemObjList,
      (Il2CppObject *)v20,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    resultItemObjList->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v20;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v20, v26, v27, v28, v29, v30, v31);
  }
  if ( this->fields.isSkip )
    goto LABEL_37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v20,
                                 (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v38 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v20,
          (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
                                                                       (UnityEngine_Object_o *)v38,
                                                                       0LL,
                                                                       0LL);
    if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
      goto LABEL_37;
    if ( v38 )
    {
      UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)v38, this->fields.aniName, 0LL);
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( !ComponentInChildren_object )
    goto LABEL_38;
  SimpleAnimation__Play_65253852((SimpleAnimation_o *)ComponentInChildren_object, this->fields.aniName, 0LL);
LABEL_37:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22962/*"playEffectDrop"*/,
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
    sub_1C22094(firstLineGrid, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  char *Master_object; // x0
  const MethodInfo *v11; // x1
  struct UIGrid_o *firstResultGrid; // x8
  int32_t maxPerLine; // w20
  struct UIGrid_o *sceResultGrid; // x8
  DataManager_c **v15; // x27
  int32_t v16; // w23
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w22
  __int64 v19; // x26
  __int64 v20; // x29
  signed __int64 v21; // x21
  struct UIGrid_o **v22; // x8
  UnityEngine_Component_o *v23; // x23
  struct System_Int32_array *baseNoList; // x8
  UnityEngine_GameObject_o *resultListItemPrefab; // x25
  BoxGachaBaseEntity_o *v26; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v28; // x23
  UnityEngine_Transform_o *v29; // x25
  ResultItemComponent_o *v30; // x25
  BoxGachaUtility_c *v31; // x8
  int *static_fields; // x8
  int v33; // s2
  int v34; // s1
  int v35; // s0
  const MethodInfo *v36; // x1
  __int64 v37; // x22
  __int64 v38; // x29
  UnityEngine_GameObject_o *resultListResultFrame; // x26
  DataManager_c **v40; // x20
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x26
  UnityEngine_Transform_o *v43; // x27
  BoxGachaUtility_c *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct UIScrollView_o *resultScrollView; // x1
  int32_t type; // w8
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8
  struct System_Int32_array *v66; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  float v69; // s0
  int32_t v70; // w1
  const MethodInfo *v71; // x1
  signed __int64 v72; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_GameObject__o **p_resultItemObjList; // [xsp+10h] [xbp-A0h]
  struct UIGrid_o **p_thrResultGrid; // [xsp+18h] [xbp-98h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+20h] [xbp-90h]
  GiftMaster_o *v76; // [xsp+28h] [xbp-88h]
  int v77; // [xsp+34h] [xbp-7Ch]
  signed __int64 v78; // [xsp+38h] [xbp-78h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+40h] [xbp-70h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+48h] [xbp-68h]

  if ( (byte_4BE0702 & 1) == 0 )
  {
    sub_1C21E38(&BoxGachaUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_BoxGachaBaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13208/*"StartDisp"*/);
    byte_4BE0702 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  p_resultItemObjList = &this->fields.resultItemObjList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.resultItemObjList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_87;
  maxPerLine = firstResultGrid->fields.maxPerLine;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_87;
  v15 = &DataManager_TypeInfo;
  v16 = sceResultGrid->fields.maxPerLine;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
  resultIdList = this->fields.resultIdList;
  v76 = (GiftMaster_o *)Master_object;
  if ( !resultIdList )
    goto LABEL_87;
  max_length = resultIdList->max_length;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length <= 10 )
    v19 = 8LL;
  else
    v19 = 20LL;
  if ( max_length <= 10 )
    v20 = 4LL;
  else
    v20 = 16LL;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  if ( max_length >= 1 )
  {
    v21 = 0LL;
    v78 = maxPerLine - 1;
    v72 = v16 + maxPerLine - 1;
    v77 = resultIdList->max_length;
    do
    {
      Master_object = (char *)this->fields.resultList;
      if ( !Master_object )
        goto LABEL_87;
      Master_object = (char *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
      if ( !Master_object )
        goto LABEL_87;
      if ( max_length < 11 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        v22 = &this->fields.firstResultGrid;
        if ( v21 > v78 )
        {
          v22 = &this->fields.sceResultGrid;
          if ( v21 > v72 )
            v22 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
        v22 = &this->fields.resultScrollViewGrid;
      }
      v23 = (UnityEngine_Component_o *)*v22;
      if ( !(*v15)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v15);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_87;
      if ( v21 >= (unsigned __int64)baseNoList->max_length )
        sub_1C2209C(Master_object, v11);
      if ( !Master_object )
        goto LABEL_87;
      Master_object = (char *)BoxGachaBaseMaster__GetEntity(
                                (BoxGachaBaseMaster_o *)Master_object,
                                this->fields.currentBaseId,
                                baseNoList->m_Items[v21 + 1],
                                0LL);
      if ( !v23 )
        goto LABEL_87;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v26 = (BoxGachaBaseEntity_o *)Master_object;
      transform = UnityEngine_Component__get_transform(v23, 0LL);
      Master_object = (char *)BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                resultListItemPrefab,
                                transform,
                                0LL,
                                0LL);
      if ( !Master_object )
        goto LABEL_87;
      v28 = (UnityEngine_GameObject_o *)Master_object;
      Master_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
      v29 = (UnityEngine_Transform_o *)Master_object;
      if ( !byte_4BD6BB6 )
      {
        Master_object = (char *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v29 )
        goto LABEL_87;
      UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Master_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                v28,
                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v30 = (ResultItemComponent_o *)Master_object;
      v31 = BoxGachaUtility_TypeInfo;
      if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
        v31 = BoxGachaUtility_TypeInfo;
      }
      if ( !v30 )
        goto LABEL_87;
      static_fields = (int *)v31->static_fields;
      v33 = *(int *)((char *)static_fields + v19);
      v34 = *(int *)((char *)static_fields + v20);
      if ( max_length > 10 )
        static_fields += 3;
      v35 = *static_fields;
      ResultItemComponent__SetItemIconScale(v30, *(UnityEngine_Vector3_o *)(&v34 - 1), v11);
      ResultItemComponent__Clear(v30, v36);
      if ( max_length >= 11 )
      {
        Master_object = (char *)this->fields.resultScrollViewResultFrameGrid;
        if ( !Master_object )
          goto LABEL_87;
        v37 = v20;
        v38 = v19;
        resultListResultFrame = this->fields.resultListResultFrame;
        v40 = v15;
        v41 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        Master_object = (char *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  resultListResultFrame,
                                  v41,
                                  0LL,
                                  0LL);
        if ( !Master_object )
          goto LABEL_87;
        v42 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
        v43 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4BD6BB6 )
        {
          Master_object = (char *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        if ( !v43 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v44 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v44 = BoxGachaUtility_TypeInfo;
        }
        v15 = v40;
        GameObjectExtensions__SetLocalScale(v42, v44->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        Master_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                  v28,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !Master_object )
          goto LABEL_87;
        resultScrollView = this->fields.resultScrollView;
        *((_QWORD *)Master_object + 4) = resultScrollView;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)(Master_object + 32),
          (int64_t)resultScrollView,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        v19 = v38;
        v20 = v37;
        max_length = v77;
      }
      if ( v26 )
      {
        if ( v26->fields.isRare )
          ResultItemComponent__SetRareItem(v30, v11);
        type = v26->fields.type;
        if ( type == 1 )
        {
          Master_object = (char *)v76;
          if ( !v76 )
            goto LABEL_87;
          Master_object = (char *)GiftMaster__getDataById(v76, v26->fields.targetId, 0LL);
          if ( Master_object )
          {
            if ( *((int *)Master_object + 7) <= 1 )
              v54 = 0;
            else
              v54 = *((_DWORD *)Master_object + 7);
            ResultItemComponent__Set(v30, (GiftEntity_o *)Master_object, v54, v53);
            goto LABEL_61;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          Master_object = (char *)BoxGachaBaseEntity__getRewardSetData(v26, this->fields.currentEventId, 0LL);
          if ( Master_object )
          {
            ResultItemComponent__SetExtra(v30, *((_DWORD *)Master_object + 7), *((_DWORD *)Master_object + 12), v55);
LABEL_61:
            UnityEngine_GameObject__SetActive(v28, 0, 0LL);
            Master_object = (char *)*p_resultItemObjList;
            if ( !*p_resultItemObjList )
              goto LABEL_87;
            v62 = *((_QWORD *)Master_object + 2);
            v63 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++*((_DWORD *)Master_object + 7);
            if ( !v62 )
              goto LABEL_87;
            v64 = *((int *)Master_object + 6);
            if ( (unsigned int)v64 >= *(_DWORD *)(v62 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v28,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
            }
            else
            {
              v65 = v62 + 8 * v64;
              *((_DWORD *)Master_object + 6) = v64 + 1;
              *(_QWORD *)(v65 + 32) = v28;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v65 + 32), (int64_t)v28, v56, v57, v58, v59, v60, v61);
            }
          }
        }
      }
      v66 = this->fields.resultIdList;
      if ( !v66 )
        goto LABEL_87;
      ++v21;
    }
    while ( v21 < (int)v66->max_length );
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
      Master_object = (char *)this->fields.adjustSprite;
      if ( Master_object )
      {
        v69 = ceilf((float)maxPlayCnt / 10.0);
        if ( v69 == INFINITY )
          v70 = 5;
        else
          v70 = 60 * (int)v69 + 5;
        UIWidget__set_height((UIWidget_o *)Master_object, v70, 0LL);
        goto LABEL_79;
      }
LABEL_87:
      sub_1C22094(Master_object, v11);
    }
  }
LABEL_79:
  Master_object = (char *)*p_firstResultGrid;
  if ( !*p_firstResultGrid )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  Master_object = (char *)*p_sceResultGrid;
  if ( !*p_sceResultGrid )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  Master_object = (char *)*p_thrResultGrid;
  if ( !*p_thrResultGrid )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  Master_object = (char *)*p_resultScrollViewGrid;
  if ( !*p_resultScrollViewGrid )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  Master_object = (char *)this->fields.resultScrollViewResultFrameGrid;
  if ( !Master_object )
    goto LABEL_87;
  UIGrid__set_repositionNow((UIGrid_o *)Master_object, 1, 0LL);
  if ( max_length < 11 )
    ResultListWindow__showResultEffect(this, v71);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13208/*"StartDisp"*/,
      0LL);
}


void __fastcall ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4BE0705 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_23575/*"setDisp"*/);
    byte_4BE0705 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23575/*"setDisp"*/,
    0.3,
    0LL);
}


void __fastcall ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4BE0708 & 1) == 0 )
  {
    sub_1C21E38(&Method_ResultListWindow_showResultItem__);
    sub_1C21E38(&StringLiteral_17679/*"box3"*/);
    sub_1C21E38(&StringLiteral_19327/*"endDisp"*/);
    byte_4BE0708 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_1C22094(0LL, method);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0LL);
  if ( this->fields.playCnt == 1 && this->fields.forceDropSe )
  {
    v4 = Method_ResultListWindow_showResultItem__;
    if ( (*((_BYTE *)Method_ResultListWindow_showResultItem__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_ResultListWindow_showResultItem__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySe(v5, (System_String_o *)StringLiteral_17679/*"box3"*/, 0, 0LL);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_19327/*"endDisp"*/,
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
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x19
  UnityEngine_WaitForSeconds_o *v5; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  bool result; // w0
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  System_Collections_Generic_List_object__o *v14; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int v22; // w23
  int64_t v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  float v30; // s0
  unsigned int v31; // w9
  int maxPlayCnt; // w8
  signed int v33; // w9
  int v34; // w9
  unsigned int v35; // w8
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8
  int v41; // w8
  int32_t v42; // w22
  System_Collections_Generic_List_object__o *v43; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v45; // x2
  System_Collections_IEnumerator_o *started; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Collections_Generic_List_ResultListWindow_RewardAction__o **v59; // x21
  int32_t v60; // w20
  int32_t v61; // w20
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v65; // x1
  ResultListWindow_c *v66; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_4BE0713 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    sub_1C21E38(&ResultListWindow_TypeInfo);
    sub_1C21E38(&ResultListWindow_RewardAction_TypeInfo);
    sub_1C21E38(&Method_ResultListWindow__StartDisp_d__50_MoveNext__);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&StringLiteral_17679/*"box3"*/);
    sub_1C21E38(&StringLiteral_6141/*"EndOpen"*/);
    byte_4BE0713 = 1;
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
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, 0.2, 0LL);
      this->fields.__2__current = (Il2CppObject *)v5;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v5, v6, v7, v8, v9, v10, v11);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)v14;
    p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields._listRewardAction_5__2,
      (int64_t)v14,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( !_4__this )
      goto LABEL_74;
    v22 = 0;
    while ( v22 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
    {
      v23 = sub_1C22084(ResultListWindow_RewardAction_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      if ( !v23 )
        goto LABEL_74;
      *(_DWORD *)(v23 + 16) = v22;
      v30 = 0.0;
      v31 = v22 + _4__this->fields.playCnt;
      *(_DWORD *)(v23 + 20) = v31;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v31 + 1) >= 51 )
      {
        v33 = v31 / 0xA;
        v30 = (float)v33 / (float)((maxPlayCnt - 1) / 10);
        v34 = v33 + 1;
        v35 = maxPlayCnt / 0xAu;
        if ( v30 >= 0.85 || v34 == v35 )
          v30 = 1.0;
      }
      *(float *)(v23 + 24) = v30;
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_74;
      items = listRewardAction_5__2->fields._items;
      v38 = Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__;
      ++listRewardAction_5__2->fields._version;
      if ( !items )
        goto LABEL_74;
      size = listRewardAction_5__2->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listRewardAction_5__2,
          (Il2CppObject *)v23,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        listRewardAction_5__2->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v23;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 4), v23, v24, v25, v26, v27, v28, v29);
      }
      if ( ++v22 == 10 )
        break;
    }
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_74;
    v41 = listRewardAction_5__2->fields._size;
    _4__this->fields.playCnt += v41;
    if ( v41 >= 1 )
    {
      v42 = 0;
      do
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v42,
                                                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_74;
        v43 = listRewardAction_5__2;
        Item = System_Collections_Generic_List_object___get_Item(
                 *p_listRewardAction_5__2,
                 v42,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        started = ResultListWindow__StartRewardAction(_4__this, (ResultListWindow_RewardAction_o *)Item, v45);
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                                               (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                               started,
                                                                               0LL);
        if ( !v43 )
          goto LABEL_74;
        v43->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v43->fields._syncRoot,
          (int64_t)listRewardAction_5__2,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_74;
        v41 = listRewardAction_5__2->fields._size;
      }
      while ( ++v42 < v41 );
    }
    if ( !v41 || v41 == _4__this->fields.maxPlayCnt )
      goto LABEL_63;
LABEL_37:
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           listRewardAction_5__2,
                                                                           listRewardAction_5__2->fields._size - 1,
                                                                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
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
    v59 = &this->fields._listRewardAction_5__2;
    if ( _4__this->fields.isSkip )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v59;
      if ( *v59 )
      {
        v60 = 0;
        while ( v60 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v60,
                                                                                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_70855504(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0LL);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v59;
            ++v60;
            if ( *v59 )
              continue;
          }
          goto LABEL_74;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v61 = 0;
          while ( v61 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v61,
                                                                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0LL);
              if ( !v61 && _4__this->fields.forceDropSe )
              {
                v62 = Method_ResultListWindow__StartDisp_d__50_MoveNext__;
                if ( (*((_BYTE *)Method_ResultListWindow__StartDisp_d__50_MoveNext__ + 83) & 2) != 0 )
                  v62 = (_QWORD *)sub_1C21E50(Method_ResultListWindow__StartDisp_d__50_MoveNext__);
                v63 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v62, v62[4]);
                OverwriteAssetSoundName__PlaySe(v63, (System_String_o *)StringLiteral_17679/*"box3"*/, 0, 0LL);
              }
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v61;
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
              v65 = (System_String_o *)StringLiteral_6141/*"EndOpen"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v66 = ResultListWindow_TypeInfo;
              if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v66 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v66->static_fields->EFFECT_PLAY_TIME;
              v65 = (System_String_o *)StringLiteral_6141/*"EndOpen"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v65, EFFECT_PLAY_TIME, 0LL);
            return 0;
          }
        }
      }
LABEL_74:
      sub_1C22094(listRewardAction_5__2, method);
    }
    *v59 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._listRewardAction_5__2, 0LL, v53, v54, v55, v56, v57, v58);
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v53, v54, v55, v56, v57, v58);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ResultListWindow__StartDisp_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  struct ResultListWindow_o *_4__this; // x20
  int32_t v5; // w9
  int32_t i_5__2; // w8
  struct ResultListWindow_RewardAction_o *rewardAction; // x8
  float maxDrawItemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  bool result; // w0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int v24; // w23
  System_String_o **v25; // x8
  System_String_o *v26; // x21
  UnityEngine_Transform_o *v27; // x0
  const MethodInfo *v28; // x2
  ResultListWindow__StartRewardAction_d__51_o *v29; // x21
  struct ResultListWindow_RewardAction_o *v30; // x8
  ResultListWindow__StartRewardAction_d__51_o *v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x1
  BoxGachaUtility_c *v39; // x0
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  struct ResultListWindow_RewardAction_o *v44; // x8
  struct ResultListWindow_RewardAction_o *v45; // x8
  ResultListWindow_c *v46; // x0
  float scrollValue; // s0
  bool v48; // w0
  _BOOL4 isSkip; // w8
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v52; // x2
  ResultListWindow__StartRewardAction_d__51_o *v53; // x21
  struct ResultListWindow_RewardAction_o *v54; // x8
  ResultListWindow__StartRewardAction_d__51_o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  BoxGachaUtility_c *v69; // x0
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 _2__current_low; // x10
  __int64 v73; // x8
  Il2CppObject *ComponentInChildren_object; // x22
  Il2CppObject *v75; // x21
  PartyOrganizationUtility_o *v76; // x19
  int v77; // w8
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v79; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7

  v3 = this;
  if ( (byte_4BE0714 & 1) == 0 )
  {
    sub_1C21E38(&BoxGachaUtility_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ResultListWindow_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&StringLiteral_19131/*"ef_boxitem_drop_rare"*/);
    sub_1C21E38(&StringLiteral_19132/*"ef_boxitem_drop_scalable"*/);
    sub_1C21E38(&StringLiteral_19134/*"ef_boxitem_fall_scalable"*/);
    this = (ResultListWindow__StartRewardAction_d__51_o *)sub_1C21E38(&StringLiteral_6141/*"EndOpen"*/);
    byte_4BE0714 = 1;
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
          v9 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v9, maxDrawItemDispWaitTime, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v9;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1C21DDC(p__2__current, (int64_t)v9, v11, v12, v13, v14, v15, v16);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
LABEL_84:
        sub_1C22094(this, method);
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
      v48 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, v2);
      isSkip = _4__this->fields.isSkip;
      _4__this->fields.isRare = v48;
      if ( !isSkip || v48 )
      {
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.effectRoot;
        if ( !this )
          goto LABEL_84;
        maxPlayCnt = _4__this->fields.maxPlayCnt;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (ResultListWindow__StartRewardAction_d__51_o *)BoxGachaResultEffectComponent__getEffect(
                                                                (System_String_o *)StringLiteral_19134/*"ef_boxitem_fall_scalable"*/,
                                                                transform,
                                                                v52);
        if ( !this )
          goto LABEL_84;
        v53 = this;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v54 = v3->fields.rewardAction;
        if ( !v54 )
          goto LABEL_84;
        v55 = this;
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                                (System_Collections_Generic_List_object__o *)this,
                                                                v54->fields.playCnt,
                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
        if ( !v55 )
          goto LABEL_84;
        v55->fields.__4__this = (struct ResultListWindow_o *)this;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v55->fields.__4__this, (int64_t)this, v56, v57, v58, v59, v60, v61);
        SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v55, v62);
        if ( maxPlayCnt >= 11 )
        {
          v69 = BoxGachaUtility_TypeInfo;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v69 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(
            (UnityEngine_GameObject_o *)v53,
            v69->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
            0LL);
        }
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.fallEffectObjList;
        if ( !this )
          goto LABEL_84;
        v70 = *(_QWORD *)&this->fields.__1__state;
        v71 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v70 )
          goto LABEL_84;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v70 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v53,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = v70 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v73 + 32) = v53;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v73 + 32), (int64_t)v53, v63, v64, v65, v66, v67, v68);
        }
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v53,
                                         (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v75 = UnityEngine_GameObject__GetComponentInChildren_object_(
                  (UnityEngine_GameObject_o *)v53,
                  (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
            SimpleAnimation__Play_65253852(
              (SimpleAnimation_o *)ComponentInChildren_object,
              _4__this->fields.aniName,
              0LL);
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)v75,
                                                                    0LL,
                                                                    0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v75 )
                goto LABEL_84;
              UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)v75, _4__this->fields.aniName, 0LL);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v79 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v79, itemDropTime, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v79;
      v76 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C21DDC(v76, (int64_t)v79, v80, v81, v82, v83, v84, v85);
      v77 = 2;
LABEL_83:
      *(_DWORD *)&v76[-1].fields._IsQuestStartMenuMode_k__BackingField = v77;
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
      v25 = (System_String_o **)(_4__this->fields.isRare ? &StringLiteral_19131/*"ef_boxitem_drop_rare"*/ : &StringLiteral_19132/*"ef_boxitem_drop_scalable"*/);
      v26 = *v25;
      v27 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ResultListWindow__StartRewardAction_d__51_o *)BoxGachaResultEffectComponent__getEffect(v26, v27, v28);
      if ( !this )
        goto LABEL_84;
      v29 = this;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v30 = v3->fields.rewardAction;
      if ( !v30 )
        goto LABEL_84;
      v31 = this;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v30->fields.playCnt,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
      if ( !v31 )
        goto LABEL_84;
      v31->fields.__4__this = (struct ResultListWindow_o *)this;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v31->fields.__4__this, (int64_t)this, v32, v33, v34, v35, v36, v37);
      SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v31, v38);
      if ( v24 >= 11 )
      {
        v39 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v39 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v29,
          v39->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
          0LL);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.dropEffectObjList;
      if ( !this )
        goto LABEL_84;
      v40 = *(_QWORD *)&this->fields.__1__state;
      v41 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v40 )
        goto LABEL_84;
      v42 = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v29,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = v40 + 8 * v42;
        LODWORD(this->fields.__2__current) = v42 + 1;
        *(_QWORD *)(v43 + 32) = v29;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v43 + 32), (int64_t)v29, v18, v19, v20, v21, v22, v23);
      }
LABEL_76:
      v3->fields.__2__current = 0LL;
      v76 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C21DDC(v76, 0LL, v18, v19, v20, v21, v22, v23);
      v77 = 3;
      goto LABEL_83;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      v44 = v3->fields.rewardAction;
      if ( !v44 )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v44->fields.playCnt,
                                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v45 = v3->fields.rewardAction;
      if ( !v45 )
        goto LABEL_84;
      v45->fields.isEnd = 1;
      if ( !_4__this->fields.isDischargeGetEffectItem && v45->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
      {
        v46 = ResultListWindow_TypeInfo;
        if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
          v46 = ResultListWindow_TypeInfo;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          (System_String_o *)StringLiteral_6141/*"EndOpen"*/,
          v46->static_fields->EFFECT_PLAY_TIME,
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ResultListWindow__StartRewardAction_d__51_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE0710 & 1) == 0 )
  {
    sub_1C21E38(&ResultListWindow___c_TypeInfo);
    byte_4BE0710 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ResultListWindow___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ResultListWindow___c_TypeInfo->static_fields->__9 = (struct ResultListWindow___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ResultListWindow___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4BE0711 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0711 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)x, 0LL);
  }
}


void __fastcall ResultListWindow___c___ClickSkip_b__63_1(
        ResultListWindow___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4BE0712 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0712 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)x, 0LL);
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
    sub_1C22094(_4__this, method);
  ResultListWindow__ClearAllGrid(_4__this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}