void __fastcall ResultListWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C261DC & 1) == 0 )
  {
    sub_1C3B764(&ResultListWindow_TypeInfo, v1);
    byte_4C261DC = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4C261DB & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_1C3B764(&StringLiteral_19177/*"following-sibling"*/, v11);
    byte_4C261DB = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_C0DC90;
  v12 = StringLiteral_19177/*"following-sibling"*/;
  this->fields.aniName = (struct System_String_o *)StringLiteral_19177/*"following-sibling"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.aniName, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fallEffectObjList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.dropEffectObjList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_4C261D9 & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, grid);
    byte_4C261D9 = 1;
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
      UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1C3B9C0(this, grid);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x19
  System_Action_object__o *v20; // x20
  Il2CppObject *v21; // x21
  struct ResultListWindow___c_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C261DA & 1) == 0 )
  {
    sub_1C3B764(&System_Action_GameObject__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1C3B764(&Method_ResultListWindow___c__ClickSkip_b__63_0__, v4);
    sub_1C3B764(&Method_ResultListWindow___c__ClickSkip_b__63_1__, v5);
    sub_1C3B764(&ResultListWindow___c_TypeInfo, v6);
    byte_4C261DA = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_25;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0LL) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_25:
    sub_1C3B9C0(skipCollider, method);
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
      v10 = (System_Action_object__o *)sub_1C3B9B0(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v10, v11, Method_ResultListWindow___c__ClickSkip_b__63_0__, 0LL);
      static_fields = ResultListWindow___c_TypeInfo->static_fields;
      static_fields->__9__63_0 = (struct System_Action_GameObject__o *)v10;
      sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__63_0, (int64_t)v10, v13, v14, v15, v16, v17, v18);
    }
    if ( !v9 )
      goto LABEL_25;
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)v9,
      (System_Action_T__o *)v10,
      (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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
    v20 = *(System_Action_object__o **)(*((_QWORD *)skipCollider + 23) + 16LL);
    if ( !v20 )
    {
      if ( !*((_DWORD *)skipCollider + 56) )
      {
        j_il2cpp_runtime_class_init_0(skipCollider);
        skipCollider = ResultListWindow___c_TypeInfo;
      }
      v21 = (Il2CppObject *)**((_QWORD **)skipCollider + 23);
      v20 = (System_Action_object__o *)sub_1C3B9B0(System_Action_GameObject__TypeInfo);
      System_Action_object____ctor(v20, v21, Method_ResultListWindow___c__ClickSkip_b__63_1__, 0LL);
      v22 = ResultListWindow___c_TypeInfo->static_fields;
      v22->__9__63_1 = (struct System_Action_GameObject__o *)v20;
      sub_1C3B708((PartyOrganizationUtility_o *)&v22->__9__63_1, (int64_t)v20, v23, v24, v25, v26, v27, v28);
    }
    if ( dropEffectObjList )
    {
      System_Collections_Generic_List_object___ForEach(
        (System_Collections_Generic_List_object__o *)dropEffectObjList,
        (System_Action_T__o *)v20,
        (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
      return;
    }
    goto LABEL_25;
  }
}


void __fastcall ResultListWindow__Close(ResultListWindow_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_o *v22; // x20

  if ( (byte_4C261D8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__, v5);
    sub_1C3B764(&ResultListWindow___c__DisplayClass60_0_TypeInfo, v6);
    byte_4C261D8 = 1;
  }
  v7 = sub_1C3B9B0(ResultListWindow___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)callback, v16, v17, v18, v19, v20, v21);
  v22 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v7, Method_ResultListWindow___c__DisplayClass60_0__Close_b__0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v22, 0LL);
}


void __fastcall ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  UIProgressBar_o *v7; // x0
  float v8; // s0

  if ( (byte_4C261D7 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&StringLiteral_6428/*"FRIEND_NO_STRING_CLOSE"*/, v4);
    byte_4C261D7 = 1;
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
      sub_1C3B9C0(0LL, v6);
    UIProgressBar__set_value(v7, 1.0, 0LL);
    this->fields.isLastLineEffectPlay = 1;
  }
  if ( this->fields.openCallBack )
  {
    if ( this->fields.isLongPress )
      v8 = *((float *)&qword_C0C758 + (this->fields.maxPlayCnt > 10));
    else
      v8 = 0.0;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_6428/*"FRIEND_NO_STRING_CLOSE"*/,
      v8,
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.openCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !openCallBack )
    sub_1C3B9C0(v10, v11);
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
    sub_1C3B9C0(0LL, method);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int v32; // w9
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w23
  UnityEngine_Object_o *scrollBar; // x22
  UnityEngine_Object_o *resultScrollView; // x22
  const MethodInfo *v55; // x2
  bool v56; // w0

  if ( (byte_4C261CD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Clear__, resultIds);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v18);
    byte_4C261CD = 1;
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
      v25 = (unsigned int)dropEffectObjList->fields._size;
      v32 = dropEffectObjList->fields._version + 1;
      dropEffectObjList->fields._size = 0;
      dropEffectObjList->fields._version = v32;
      if ( (int)v25 >= 1 )
        System_Array__Clear((System_Array_o *)dropEffectObjList->fields._items, 0, v25, 0LL);
    }
    this->fields.openCallBack = callback;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.openCallBack,
      (int64_t)callback,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    this->fields.resultIdList = resultIds;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.resultIdList,
      (int64_t)resultIds,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    this->fields.rareIdxList = rareIdxs;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.rareIdxList,
      (int64_t)rareIdxs,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    this->fields.baseNoList = baseNos;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseNoList, (int64_t)baseNos, v45, v46, v47, v48, v49, v50);
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
              ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v55);
LABEL_25:
              this->fields.isSkip = isResultLongPress;
              this->fields.isLongPress = isResultLongPress;
              v56 = isResultLongPress && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)rareIdxs, 0LL);
              this->fields.forceDropSe = v56;
              ResultListWindow__setResultItem(this, v20);
              BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C3B9C0(gameObject, v20);
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

  if ( (byte_4C261CE & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, enabled);
    byte_4C261CE = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v7 )
      sub_1C3B9C0(0LL, v6);
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

  if ( (byte_4C261D0 & 1) == 0 )
  {
    sub_1C3B764(&ResultListWindow__StartDisp_d__50_TypeInfo, method);
    byte_4C261D0 = 1;
  }
  v3 = sub_1C3B9B0(ResultListWindow__StartDisp_d__50_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4C261D1 & 1) == 0 )
  {
    sub_1C3B764(&ResultListWindow__StartRewardAction_d__51_TypeInfo, rewardAction);
    byte_4C261D1 = 1;
  }
  v5 = sub_1C3B9B0(ResultListWindow__StartRewardAction_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)rewardAction, v12, v13, v14, v15, v16, v17);
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
          sub_1C3B9C8(v6, *(_QWORD *)&idx);
        v10 = rareIdxList->m_Items[v8 + 1];
        v6 = System_Int32__Equals_64174048((int32_t)&v10, idx, 0LL);
        if ( v6 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_1C3B9C0(v6, *(_QWORD *)&idx);
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
  __int64 v3; // x1
  int32_t maxPlayCnt; // w8
  _BOOL4 isDischargeGetEffectItem; // w9

  if ( (byte_4C261D6 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_6133/*"EventSpotCooltimeRewardReceiveButton"*/, method);
    sub_1C3B764(&StringLiteral_23639/*"token="*/, v3);
    byte_4C261D6 = 1;
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
        (System_String_o *)StringLiteral_6133/*"EventSpotCooltimeRewardReceiveButton"*/,
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
      (System_String_o *)StringLiteral_23639/*"token="*/,
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BoxGachaUtility_c *v25; // x0
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 klass_low; // x10
  __int64 v29; // x8

  if ( (byte_4C261D4 & 1) == 0 )
  {
    sub_1C3B764(&BoxGachaUtility_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Add__, v3);
    sub_1C3B764(&StringLiteral_19175/*"follower_setup_recommend_support"*/, v4);
    sub_1C3B764(&StringLiteral_19174/*"follower_setup"*/, v5);
    sub_1C3B764(&StringLiteral_23805/*"ui4"*/, v6);
    byte_4C261D4 = 1;
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
    v10 = (System_String_o **)&StringLiteral_19175/*"follower_setup_recommend_support"*/;
  else
    v10 = (System_String_o **)&StringLiteral_19174/*"follower_setup"*/;
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
    v25 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v25 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v14, v25->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  if ( !this->fields.isRare )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.dropEffectObjList;
    if ( skipCollider )
    {
      v26 = *(_QWORD *)&skipCollider->fields.m_CachedPtr;
      v27 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(skipCollider[1].klass);
      if ( v26 )
      {
        klass_low = SLODWORD(skipCollider[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v26 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skipCollider,
            (Il2CppObject *)v14,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = v26 + 8 * klass_low;
          LODWORD(skipCollider[1].klass) = klass_low + 1;
          *(_QWORD *)(v29 + 32) = v14;
          sub_1C3B708((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v14, v19, v20, v21, v22, v23, v24);
        }
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1C3B9C0(skipCollider, method);
  }
LABEL_30:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23805/*"ui4"*/,
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
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o **p_dispObj; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  bool v20; // w0
  int32_t playCnt; // w8
  _BOOL4 isSkip; // w9
  int32_t v23; // w8
  int32_t maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v26; // x2
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_GameObject_o *v28; // x8
  UnityEngine_Transform_o *v29; // x21
  int v30; // s0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  BoxGachaUtility_c *v39; // x0
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x8
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v45; // x20

  if ( (byte_4C261D3 & 1) == 0 )
  {
    sub_1C3B764(&BoxGachaUtility_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v3);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_23015/*"size must be >= 0"*/, v8);
    sub_1C3B764(&StringLiteral_19177/*"following-sibling"*/, v9);
    byte_4C261D3 = 1;
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  Item = System_Collections_Generic_List_object___get_Item(
           resultItemObjList,
           this->fields.playCnt,
           (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  p_dispObj = &this->fields.dispObj;
  this->fields.dispObj = (struct UnityEngine_GameObject_o *)Item;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.dispObj, (int64_t)Item, v13, v14, v15, v16, v17, v18);
  v20 = ResultListWindow__checkRare(this, this->fields.playCnt, v19);
  playCnt = this->fields.playCnt;
  isSkip = this->fields.isSkip;
  this->fields.isRare = v20;
  v23 = playCnt + 1;
  this->fields.playCnt = v23;
  if ( isSkip && !v20 )
  {
    ResultListWindow__showResultItem(this, method);
    return;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( v23 > 30 || maxPlayCnt <= 10 )
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
                                                                     (System_String_o *)StringLiteral_19177/*"following-sibling"*/,
                                                                     transform,
                                                                     v26);
  if ( !resultItemObjList )
    goto LABEL_38;
  v27 = (UnityEngine_GameObject_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)resultItemObjList,
                                                                     0LL);
  v28 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_38;
  v29 = (UnityEngine_Transform_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v28, 0LL);
  if ( !resultItemObjList )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)resultItemObjList,
                                     0LL);
  if ( !v29 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
  if ( maxPlayCnt >= 11 )
  {
    v39 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v39 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v27, v39->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
  if ( !resultItemObjList
    || (items = resultItemObjList->fields._items,
        v41 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resultItemObjList->fields._version,
        !items) )
  {
LABEL_38:
    sub_1C3B9C0(resultItemObjList, method);
  }
  size = resultItemObjList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resultItemObjList,
      (Il2CppObject *)v27,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &items->obj.klass + size;
    resultItemObjList->fields._size = size + 1;
    v43[4] = (Il2CppClass *)v27;
    sub_1C3B708((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v27, v33, v34, v35, v36, v37, v38);
  }
  if ( this->fields.isSkip )
    goto LABEL_37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v27,
                                 (const MethodInfo_3041C7C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v45 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v27,
          (const MethodInfo_3041C7C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
                                                                       (UnityEngine_Object_o *)v45,
                                                                       0LL,
                                                                       0LL);
    if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
      goto LABEL_37;
    if ( v45 )
    {
      UnityEngine_Animation__Play_70867156((UnityEngine_Animation_o *)v45, this->fields.aniName, 0LL);
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( !ComponentInChildren_object )
    goto LABEL_38;
  SimpleAnimation__Play_65506988((SimpleAnimation_o *)ComponentInChildren_object, this->fields.aniName, 0LL);
LABEL_37:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23015/*"size must be >= 0"*/,
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
    sub_1C3B9C0(firstLineGrid, isDisp);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 Master_object; // x0
  const MethodInfo *v22; // x1
  struct UIGrid_o *firstResultGrid; // x8
  int32_t maxPerLine; // w20
  struct UIGrid_o *sceResultGrid; // x8
  DataManager_c **v26; // x27
  int32_t v27; // w23
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w22
  __int64 v30; // x26
  __int64 v31; // x29
  signed __int64 v32; // x21
  struct UIGrid_o **v33; // x8
  UnityEngine_Component_o *v34; // x23
  struct System_Int32_array *baseNoList; // x8
  UnityEngine_GameObject_o *resultListItemPrefab; // x25
  BoxGachaBaseEntity_o *v37; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v39; // x23
  UnityEngine_Transform_o *v40; // x25
  ResultItemComponent_o *v41; // x25
  BoxGachaUtility_c *v42; // x8
  int *static_fields; // x8
  int v44; // s2
  int v45; // s1
  int v46; // s0
  const MethodInfo *v47; // x1
  __int64 v48; // x22
  __int64 v49; // x29
  UnityEngine_GameObject_o *resultListResultFrame; // x26
  DataManager_c **v51; // x20
  UnityEngine_Transform_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x26
  UnityEngine_Transform_o *v54; // x27
  BoxGachaUtility_c *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct UIScrollView_o *resultScrollView; // x1
  int32_t type; // w8
  const MethodInfo *v64; // x3
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  struct System_Int32_array *v77; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  float v80; // s0
  int32_t v81; // w1
  const MethodInfo *v82; // x1
  signed __int64 v83; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_GameObject__o **p_resultItemObjList; // [xsp+10h] [xbp-A0h]
  struct UIGrid_o **p_thrResultGrid; // [xsp+18h] [xbp-98h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+20h] [xbp-90h]
  GiftMaster_o *v87; // [xsp+28h] [xbp-88h]
  int v88; // [xsp+34h] [xbp-7Ch]
  signed __int64 v89; // [xsp+38h] [xbp-78h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+40h] [xbp-70h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+48h] [xbp-68h]

  if ( (byte_4C261CF & 1) == 0 )
  {
    sub_1C3B764(&BoxGachaUtility_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_BoxGachaBaseMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMaster_GiftMaster___, v4);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___, v6);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_1C3B764(&System_Math_TypeInfo, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_13246/*"TUTORIAL_MESSAGE_BATTLE_321"*/, v13);
    byte_4C261CF = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v14;
  p_resultItemObjList = &this->fields.resultItemObjList;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.resultItemObjList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_87;
  maxPerLine = firstResultGrid->fields.maxPerLine;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_87;
  v26 = &DataManager_TypeInfo;
  v27 = sceResultGrid->fields.maxPerLine;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GiftMaster___);
  resultIdList = this->fields.resultIdList;
  v87 = (GiftMaster_o *)Master_object;
  if ( !resultIdList )
    goto LABEL_87;
  max_length = resultIdList->max_length;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length <= 10 )
    v30 = 8LL;
  else
    v30 = 20LL;
  if ( max_length <= 10 )
    v31 = 4LL;
  else
    v31 = 16LL;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  if ( max_length >= 1 )
  {
    v32 = 0LL;
    v89 = maxPerLine - 1;
    v83 = v27 + maxPerLine - 1;
    v88 = resultIdList->max_length;
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
        v33 = &this->fields.firstResultGrid;
        if ( v32 > v89 )
        {
          v33 = &this->fields.sceResultGrid;
          if ( v32 > v83 )
            v33 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
        v33 = &this->fields.resultScrollViewGrid;
      }
      v34 = (UnityEngine_Component_o *)*v33;
      if ( !(*v26)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v26);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_87;
      if ( v32 >= (unsigned __int64)baseNoList->max_length )
        sub_1C3B9C8(Master_object, v22);
      if ( !Master_object )
        goto LABEL_87;
      Master_object = (__int64)BoxGachaBaseMaster__GetEntity(
                                 (BoxGachaBaseMaster_o *)Master_object,
                                 this->fields.currentBaseId,
                                 baseNoList->m_Items[v32 + 1],
                                 0LL);
      if ( !v34 )
        goto LABEL_87;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v37 = (BoxGachaBaseEntity_o *)Master_object;
      transform = UnityEngine_Component__get_transform(v34, 0LL);
      Master_object = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 resultListItemPrefab,
                                 transform,
                                 0LL,
                                 0LL);
      if ( !Master_object )
        goto LABEL_87;
      v39 = (UnityEngine_GameObject_o *)Master_object;
      Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
      v40 = (UnityEngine_Transform_o *)Master_object;
      if ( !byte_4C1C516 )
      {
        Master_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v22);
        byte_4C1C516 = 1;
      }
      if ( !v40 )
        goto LABEL_87;
      UnityEngine_Transform__set_localScale(v40, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v39,
                                 (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v41 = (ResultItemComponent_o *)Master_object;
      v42 = BoxGachaUtility_TypeInfo;
      if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
        v42 = BoxGachaUtility_TypeInfo;
      }
      if ( !v41 )
        goto LABEL_87;
      static_fields = (int *)v42->static_fields;
      v44 = *(int *)((char *)static_fields + v30);
      v45 = *(int *)((char *)static_fields + v31);
      if ( max_length > 10 )
        static_fields += 3;
      v46 = *static_fields;
      ResultItemComponent__SetItemIconScale(v41, *(UnityEngine_Vector3_o *)(&v45 - 1), v22);
      ResultItemComponent__Clear(v41, v47);
      if ( max_length >= 11 )
      {
        Master_object = (__int64)this->fields.resultScrollViewResultFrameGrid;
        if ( !Master_object )
          goto LABEL_87;
        v48 = v31;
        v49 = v30;
        resultListResultFrame = this->fields.resultListResultFrame;
        v51 = v26;
        v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        Master_object = (__int64)BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   resultListResultFrame,
                                   v52,
                                   0LL,
                                   0LL);
        if ( !Master_object )
          goto LABEL_87;
        v53 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
        v54 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4C1C516 )
        {
          Master_object = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v22);
          byte_4C1C516 = 1;
        }
        if ( !v54 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v54, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v55 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v55 = BoxGachaUtility_TypeInfo;
        }
        v26 = v51;
        GameObjectExtensions__SetLocalScale(v53, v55->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   v39,
                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !Master_object )
          goto LABEL_87;
        resultScrollView = this->fields.resultScrollView;
        *(_QWORD *)(Master_object + 32) = resultScrollView;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)(Master_object + 32),
          (int64_t)resultScrollView,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        v30 = v49;
        v31 = v48;
        max_length = v88;
      }
      if ( v37 )
      {
        if ( v37->fields.isRare )
          ResultItemComponent__SetRareItem(v41, v22);
        type = v37->fields.type;
        if ( type == 1 )
        {
          Master_object = (__int64)v87;
          if ( !v87 )
            goto LABEL_87;
          Master_object = (__int64)GiftMaster__getDataById(v87, v37->fields.targetId, 0LL);
          if ( Master_object )
          {
            if ( *(int *)(Master_object + 28) <= 1 )
              v65 = 0;
            else
              v65 = *(_DWORD *)(Master_object + 28);
            ResultItemComponent__Set(v41, (GiftEntity_o *)Master_object, v65, v64);
            goto LABEL_61;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          Master_object = (__int64)BoxGachaBaseEntity__getRewardSetData(v37, this->fields.currentEventId, 0LL);
          if ( Master_object )
          {
            ResultItemComponent__SetExtra(v41, *(_DWORD *)(Master_object + 28), *(_DWORD *)(Master_object + 48), v66);
LABEL_61:
            UnityEngine_GameObject__SetActive(v39, 0, 0LL);
            Master_object = (__int64)*p_resultItemObjList;
            if ( !*p_resultItemObjList )
              goto LABEL_87;
            v73 = *(_QWORD *)(Master_object + 16);
            v74 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++*(_DWORD *)(Master_object + 28);
            if ( !v73 )
              goto LABEL_87;
            v75 = *(int *)(Master_object + 24);
            if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v39,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              v76 = v73 + 8 * v75;
              *(_DWORD *)(Master_object + 24) = v75 + 1;
              *(_QWORD *)(v76 + 32) = v39;
              sub_1C3B708((PartyOrganizationUtility_o *)(v76 + 32), (int64_t)v39, v67, v68, v69, v70, v71, v72);
            }
          }
        }
      }
      v77 = this->fields.resultIdList;
      if ( !v77 )
        goto LABEL_87;
      ++v32;
    }
    while ( v32 < (int)v77->max_length );
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
        v80 = ceilf((float)maxPlayCnt / 10.0);
        if ( v80 == INFINITY )
          v81 = 5;
        else
          v81 = 60 * (int)v80 + 5;
        UIWidget__set_height((UIWidget_o *)Master_object, v81, 0LL);
        goto LABEL_79;
      }
LABEL_87:
      sub_1C3B9C0(Master_object, v22);
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
    ResultListWindow__showResultEffect(this, v82);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13246/*"TUTORIAL_MESSAGE_BATTLE_321"*/,
      0LL);
}


void __fastcall ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C261D2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23639/*"token="*/, method);
    byte_4C261D2 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23639/*"token="*/,
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

  if ( (byte_4C261D5 & 1) == 0 )
  {
    sub_1C3B764(&Method_ResultListWindow_showResultItem__, method);
    sub_1C3B764(&StringLiteral_17724/*"com.adjust.sdk.AdjustAdRevenue"*/, v3);
    sub_1C3B764(&StringLiteral_19372/*"gdprUrl"*/, v4);
    byte_4C261D5 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_1C3B9C0(0LL, method);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0LL);
  if ( this->fields.playCnt == 1 && this->fields.forceDropSe )
  {
    v6 = Method_ResultListWindow_showResultItem__;
    if ( (*((_BYTE *)Method_ResultListWindow_showResultItem__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3B77C(Method_ResultListWindow_showResultItem__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
    OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)StringLiteral_17724/*"com.adjust.sdk.AdjustAdRevenue"*/, 0, 0LL);
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_19372/*"gdprUrl"*/,
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  bool result; // w0
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  System_Collections_Generic_List_object__o *v26; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int v34; // w23
  int64_t v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  float v42; // s0
  unsigned int v43; // w9
  int maxPlayCnt; // w8
  signed int v45; // w9
  int v46; // w9
  unsigned int v47; // w8
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  int v53; // w8
  int32_t v54; // w22
  System_Collections_Generic_List_object__o *v55; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v57; // x2
  System_Collections_IEnumerator_o *started; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Collections_Generic_List_ResultListWindow_RewardAction__o **v71; // x21
  int32_t v72; // w20
  int32_t v73; // w20
  _QWORD *v74; // x0
  System_Reflection_MethodBase_o *v75; // x0
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v77; // x1
  ResultListWindow_c *v78; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_4C261E0 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7);
    sub_1C3B764(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo, v8);
    sub_1C3B764(&ResultListWindow_TypeInfo, v9);
    sub_1C3B764(&ResultListWindow_RewardAction_TypeInfo, v10);
    sub_1C3B764(&Method_ResultListWindow__StartDisp_d__50_MoveNext__, v11);
    sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_17724/*"com.adjust.sdk.AdjustAdRevenue"*/, v13);
    sub_1C3B764(&StringLiteral_6133/*"EventSpotCooltimeRewardReceiveButton"*/, v14);
    byte_4C261E0 = 1;
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
      v17 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v17, 0.2, 0LL);
      this->fields.__2__current = (Il2CppObject *)v17;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v17, v18, v19, v20, v21, v22, v23);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v26 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)v26;
    p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields._listRewardAction_5__2,
      (int64_t)v26,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( !_4__this )
      goto LABEL_74;
    v34 = 0;
    while ( v34 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
    {
      v35 = sub_1C3B9B0(ResultListWindow_RewardAction_TypeInfo);
      System_Object___ctor((Il2CppObject *)v35, 0LL);
      if ( !v35 )
        goto LABEL_74;
      *(_DWORD *)(v35 + 16) = v34;
      v42 = 0.0;
      v43 = v34 + _4__this->fields.playCnt;
      *(_DWORD *)(v35 + 20) = v43;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v43 + 1) >= 51 )
      {
        v45 = v43 / 0xA;
        v42 = (float)v45 / (float)((maxPlayCnt - 1) / 10);
        v46 = v45 + 1;
        v47 = maxPlayCnt / 0xAu;
        if ( v42 >= 0.85 || v46 == v47 )
          v42 = 1.0;
      }
      *(float *)(v35 + 24) = v42;
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_74;
      items = listRewardAction_5__2->fields._items;
      v50 = Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__;
      ++listRewardAction_5__2->fields._version;
      if ( !items )
        goto LABEL_74;
      size = listRewardAction_5__2->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listRewardAction_5__2,
          (Il2CppObject *)v35,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        listRewardAction_5__2->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v35;
        sub_1C3B708((PartyOrganizationUtility_o *)(v52 + 4), v35, v36, v37, v38, v39, v40, v41);
      }
      if ( ++v34 == 10 )
        break;
    }
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_74;
    v53 = listRewardAction_5__2->fields._size;
    _4__this->fields.playCnt += v53;
    if ( v53 >= 1 )
    {
      v54 = 0;
      do
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v54,
                                                                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_74;
        v55 = listRewardAction_5__2;
        Item = System_Collections_Generic_List_object___get_Item(
                 *p_listRewardAction_5__2,
                 v54,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        started = ResultListWindow__StartRewardAction(_4__this, (ResultListWindow_RewardAction_o *)Item, v57);
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_71108020(
                                                                               (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                               started,
                                                                               0LL);
        if ( !v55 )
          goto LABEL_74;
        v55->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&v55->fields._syncRoot,
          (int64_t)listRewardAction_5__2,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_74;
        v53 = listRewardAction_5__2->fields._size;
      }
      while ( ++v54 < v53 );
    }
    if ( !v53 || v53 == _4__this->fields.maxPlayCnt )
      goto LABEL_63;
LABEL_37:
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           listRewardAction_5__2,
                                                                           listRewardAction_5__2->fields._size - 1,
                                                                           (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
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
    v71 = &this->fields._listRewardAction_5__2;
    if ( _4__this->fields.isSkip )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v71;
      if ( *v71 )
      {
        v72 = 0;
        while ( v72 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v72,
                                                                                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_71108640(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0LL);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v71;
            ++v72;
            if ( *v71 )
              continue;
          }
          goto LABEL_74;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v73 = 0;
          while ( v73 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v73,
                                                                                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0LL);
              if ( !v73 && _4__this->fields.forceDropSe )
              {
                v74 = Method_ResultListWindow__StartDisp_d__50_MoveNext__;
                if ( (*((_BYTE *)Method_ResultListWindow__StartDisp_d__50_MoveNext__ + 83) & 2) != 0 )
                  v74 = (_QWORD *)sub_1C3B77C(Method_ResultListWindow__StartDisp_d__50_MoveNext__);
                v75 = (System_Reflection_MethodBase_o *)sub_1C3B748(v74, v74[4]);
                OverwriteAssetSoundName__PlaySe(v75, (System_String_o *)StringLiteral_17724/*"com.adjust.sdk.AdjustAdRevenue"*/, 0, 0LL);
              }
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v73;
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
              v77 = (System_String_o *)StringLiteral_6133/*"EventSpotCooltimeRewardReceiveButton"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v78 = ResultListWindow_TypeInfo;
              if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v78 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v78->static_fields->EFFECT_PLAY_TIME;
              v77 = (System_String_o *)StringLiteral_6133/*"EventSpotCooltimeRewardReceiveButton"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v77, EFFECT_PLAY_TIME, 0LL);
            return 0;
          }
        }
      }
LABEL_74:
      sub_1C3B9C0(listRewardAction_5__2, method);
    }
    *v71 = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields._listRewardAction_5__2, 0LL, v65, v66, v67, v68, v69, v70);
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708((PartyOrganizationUtility_o *)p__2__current, 0LL, v65, v66, v67, v68, v69, v70);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_ResultListWindow__StartDisp_d__50_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  bool result; // w0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // w23
  System_String_o **v37; // x8
  System_String_o *v38; // x21
  UnityEngine_Transform_o *v39; // x0
  const MethodInfo *v40; // x2
  ResultListWindow__StartRewardAction_d__51_o *v41; // x21
  struct ResultListWindow_RewardAction_o *v42; // x8
  ResultListWindow__StartRewardAction_d__51_o *v43; // x22
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x1
  BoxGachaUtility_c *v51; // x0
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  struct ResultListWindow_RewardAction_o *v56; // x8
  struct ResultListWindow_RewardAction_o *v57; // x8
  ResultListWindow_c *v58; // x0
  float scrollValue; // s0
  bool v60; // w0
  _BOOL4 isSkip; // w8
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v64; // x2
  ResultListWindow__StartRewardAction_d__51_o *v65; // x21
  struct ResultListWindow_RewardAction_o *v66; // x8
  ResultListWindow__StartRewardAction_d__51_o *v67; // x22
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  const MethodInfo *v74; // x1
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  BoxGachaUtility_c *v81; // x0
  __int64 v82; // x8
  _QWORD *v83; // x9
  __int64 _2__current_low; // x10
  __int64 v85; // x8
  Il2CppObject *ComponentInChildren_object; // x22
  Il2CppObject *v87; // x21
  PartyOrganizationUtility_o *v88; // x19
  int v89; // w8
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v91; // x20
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7

  v3 = this;
  if ( (byte_4C261E1 & 1) == 0 )
  {
    sub_1C3B764(&BoxGachaUtility_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&ResultListWindow_TypeInfo, v10);
    sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    sub_1C3B764(&StringLiteral_19175/*"follower_setup_recommend_support"*/, v12);
    sub_1C3B764(&StringLiteral_19176/*"following"*/, v13);
    sub_1C3B764(&StringLiteral_19178/*"font"*/, v14);
    this = (ResultListWindow__StartRewardAction_d__51_o *)sub_1C3B764(&StringLiteral_6133/*"EventSpotCooltimeRewardReceiveButton"*/, v15);
    byte_4C261E1 = 1;
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
          v21 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v21, maxDrawItemDispWaitTime, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v21;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1C3B708(p__2__current, (int64_t)v21, v23, v24, v25, v26, v27, v28);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
LABEL_84:
        sub_1C3B9C0(this, method);
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
      v60 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, v2);
      isSkip = _4__this->fields.isSkip;
      _4__this->fields.isRare = v60;
      if ( !isSkip || v60 )
      {
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.effectRoot;
        if ( !this )
          goto LABEL_84;
        maxPlayCnt = _4__this->fields.maxPlayCnt;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (ResultListWindow__StartRewardAction_d__51_o *)BoxGachaResultEffectComponent__getEffect(
                                                                (System_String_o *)StringLiteral_19178/*"font"*/,
                                                                transform,
                                                                v64);
        if ( !this )
          goto LABEL_84;
        v65 = this;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v66 = v3->fields.rewardAction;
        if ( !v66 )
          goto LABEL_84;
        v67 = this;
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                                (System_Collections_Generic_List_object__o *)this,
                                                                v66->fields.playCnt,
                                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
        if ( !v67 )
          goto LABEL_84;
        v67->fields.__4__this = (struct ResultListWindow_o *)this;
        sub_1C3B708((PartyOrganizationUtility_o *)&v67->fields.__4__this, (int64_t)this, v68, v69, v70, v71, v72, v73);
        SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v67, v74);
        if ( maxPlayCnt >= 11 )
        {
          v81 = BoxGachaUtility_TypeInfo;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v81 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(
            (UnityEngine_GameObject_o *)v65,
            v81->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
            0LL);
        }
        this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.fallEffectObjList;
        if ( !this )
          goto LABEL_84;
        v82 = *(_QWORD *)&this->fields.__1__state;
        v83 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v82 )
          goto LABEL_84;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v82 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v65,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = v82 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v85 + 32) = v65;
          sub_1C3B708((PartyOrganizationUtility_o *)(v85 + 32), (int64_t)v65, v75, v76, v77, v78, v79, v80);
        }
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v65,
                                         (const MethodInfo_3041C7C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v87 = UnityEngine_GameObject__GetComponentInChildren_object_(
                  (UnityEngine_GameObject_o *)v65,
                  (const MethodInfo_3041C7C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
            SimpleAnimation__Play_65506988(
              (SimpleAnimation_o *)ComponentInChildren_object,
              _4__this->fields.aniName,
              0LL);
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)v87,
                                                                    0LL,
                                                                    0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v87 )
                goto LABEL_84;
              UnityEngine_Animation__Play_70867156((UnityEngine_Animation_o *)v87, _4__this->fields.aniName, 0LL);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v91 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v91, itemDropTime, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v91;
      v88 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C3B708(v88, (int64_t)v91, v92, v93, v94, v95, v96, v97);
      v89 = 2;
LABEL_83:
      *(_DWORD *)&v88[-1].fields._IsQuestStartMenuMode_k__BackingField = v89;
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
      v36 = _4__this->fields.maxPlayCnt;
      v37 = (System_String_o **)(_4__this->fields.isRare ? &StringLiteral_19175/*"follower_setup_recommend_support"*/ : &StringLiteral_19176/*"following"*/);
      v38 = *v37;
      v39 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ResultListWindow__StartRewardAction_d__51_o *)BoxGachaResultEffectComponent__getEffect(v38, v39, v40);
      if ( !this )
        goto LABEL_84;
      v41 = this;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_3041930 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v42 = v3->fields.rewardAction;
      if ( !v42 )
        goto LABEL_84;
      v43 = this;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v42->fields.playCnt,
                                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
      if ( !v43 )
        goto LABEL_84;
      v43->fields.__4__this = (struct ResultListWindow_o *)this;
      sub_1C3B708((PartyOrganizationUtility_o *)&v43->fields.__4__this, (int64_t)this, v44, v45, v46, v47, v48, v49);
      SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v43, v50);
      if ( v36 >= 11 )
      {
        v51 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v51 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v41,
          v51->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
          0LL);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.dropEffectObjList;
      if ( !this )
        goto LABEL_84;
      v52 = *(_QWORD *)&this->fields.__1__state;
      v53 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v52 )
        goto LABEL_84;
      v54 = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v41,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = v52 + 8 * v54;
        LODWORD(this->fields.__2__current) = v54 + 1;
        *(_QWORD *)(v55 + 32) = v41;
        sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)v41, v30, v31, v32, v33, v34, v35);
      }
LABEL_76:
      v3->fields.__2__current = 0LL;
      v88 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1C3B708(v88, 0LL, v30, v31, v32, v33, v34, v35);
      v89 = 3;
      goto LABEL_83;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      v56 = v3->fields.rewardAction;
      if ( !v56 )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__51_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v56->fields.playCnt,
                                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v57 = v3->fields.rewardAction;
      if ( !v57 )
        goto LABEL_84;
      v57->fields.isEnd = 1;
      if ( !_4__this->fields.isDischargeGetEffectItem && v57->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
      {
        v58 = ResultListWindow_TypeInfo;
        if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
          v58 = ResultListWindow_TypeInfo;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          (System_String_o *)StringLiteral_6133/*"EventSpotCooltimeRewardReceiveButton"*/,
          v58->static_fields->EFFECT_PLAY_TIME,
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_ResultListWindow__StartRewardAction_d__51_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C261DD & 1) == 0 )
  {
    sub_1C3B764(&ResultListWindow___c_TypeInfo, v1);
    byte_4C261DD = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ResultListWindow___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ResultListWindow___c_TypeInfo->static_fields->__9 = (struct ResultListWindow___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ResultListWindow___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  if ( (byte_4C261DE & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, x);
    byte_4C261DE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)x, 0LL);
  }
}


void __fastcall ResultListWindow___c___ClickSkip_b__63_1(
        ResultListWindow___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C261DF & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, x);
    byte_4C261DF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)x, 0LL);
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
    sub_1C3B9C0(_4__this, method);
  ResultListWindow__ClearAllGrid(_4__this, method);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}