void __fastcall ResultListWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A2B7 & 1) == 0 )
  {
    sub_1BCA7E0(&ResultListWindow_TypeInfo, v1, v2);
    byte_4B1A2B7 = 1;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1

  if ( (byte_4B1A2B6 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_19004/*"ef_boxitem_fall"*/, v13, v14);
    byte_4B1A2B6 = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_BD2F20;
  v15 = StringLiteral_19004/*"ef_boxitem_fall"*/;
  this->fields.aniName = (struct System_String_o *)StringLiteral_19004/*"ef_boxitem_fall"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.aniName, v15, v2, v3, v4, v5, v6, v7);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fallEffectObjList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dropEffectObjList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v36);
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
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4B1A2B4 & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, grid, method);
    byte_4B1A2B4 = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1BCAA3C(this, grid);
  }
}


void __fastcall ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *skipCollider; // x0
  int v9; // w22
  int32_t v10; // w20
  __int64 v11; // x1
  Il2CppObject *Item; // x21
  int v13; // w22
  int32_t v14; // w20
  __int64 v15; // x1
  Il2CppObject *v16; // x21

  if ( (byte_4B1A2B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A2B5 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_29;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0LL) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_29:
    sub_1BCAA3C(skipCollider, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0LL);
  skipCollider = this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( skipCollider )
  {
    v9 = *((_DWORD *)skipCollider + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)skipCollider,
                 v10,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Item, 0LL);
        }
        if ( v9 == ++v10 )
          break;
        skipCollider = this->fields.fallEffectObjList;
        if ( !skipCollider )
          goto LABEL_29;
      }
    }
  }
  skipCollider = this->fields.dropEffectObjList;
  if ( skipCollider )
  {
    v13 = *((_DWORD *)skipCollider + 6);
    if ( v13 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)skipCollider,
                v14,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v16, 0LL);
        }
        if ( v13 == ++v14 )
          break;
        skipCollider = this->fields.dropEffectObjList;
        if ( !skipCollider )
          goto LABEL_29;
      }
    }
  }
}


void __fastcall ResultListWindow__Close(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B1A2B2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ResultListWindow_EndClose__, v5, v6);
    byte_4B1A2B2 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  ResultListWindow__Close_46644476(this, v7, v8);
}


void __fastcall ResultListWindow__Close_46644476(
        ResultListWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B1A2B3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ResultListWindow_EndClose__, v10, v11);
    byte_4B1A2B3 = 1;
  }
  this->fields.closeCallBack = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallBack,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ResultListWindow__EndClose(ResultListWindow_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *closeCallBack; // x20
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  closeCallBack = this->fields.closeCallBack;
  if ( closeCallBack )
  {
    this->fields.closeCallBack = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallBack->fields.m_target)(
      closeCallBack->fields.original_method_info,
      *(_QWORD *)&closeCallBack->fields.extra_arg);
  }
  ResultListWindow__Init(this, method);
  ResultListWindow__ClearAllGrid(this, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UIProgressBar_o *v12; // x0
  struct System_Action_o *openCallBack; // x20

  if ( (byte_4B1A2B1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A2B1 = 1;
  }
  if ( this->fields.maxPlayCnt <= 50 )
    ResultListWindow__SetScrollControllEnabled(this, 0, v2);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL)
    && this->fields.maxPlayCnt + 1 >= 52
    && !this->fields.isLastLineEffectPlay )
  {
    v12 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v12 )
      sub_1BCAA3C(0LL, v5);
    UIProgressBar__set_value(v12, 1.0, 0LL);
    this->fields.isLastLineEffectPlay = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.openCallBack, 0LL, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
}


void __fastcall ResultListWindow__Init(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v11; // w9
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int32_t v13; // w2
  System_Array_o *v14; // x0
  int v15; // w9

  if ( (byte_4B1A2A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    byte_4B1A2A6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.skipCollider) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v7);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  fallEffectObjList = this->fields.fallEffectObjList;
  this->fields.playCnt = 0;
  this->fields.maxPlayCnt = 0;
  this->fields.isRare = 0;
  this->fields.isSkip = 0;
  if ( fallEffectObjList )
  {
    size = fallEffectObjList->fields._size;
    if ( size >= 1 )
    {
      items = (System_Array_o *)fallEffectObjList->fields._items;
      v11 = fallEffectObjList->fields._version + 1;
      fallEffectObjList->fields._size = 0;
      fallEffectObjList->fields._version = v11;
      System_Array__Clear(items, 0, size, 0LL);
    }
  }
  dropEffectObjList = this->fields.dropEffectObjList;
  if ( dropEffectObjList )
  {
    v13 = dropEffectObjList->fields._size;
    if ( v13 >= 1 )
    {
      v14 = (System_Array_o *)dropEffectObjList->fields._items;
      v15 = dropEffectObjList->fields._version + 1;
      dropEffectObjList->fields._size = 0;
      dropEffectObjList->fields._version = v15;
      System_Array__Clear(v14, 0, v13, 0LL);
    }
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ResultListWindow__OpenResultList(
        ResultListWindow_o *this,
        System_Int32_array *resultIds,
        System_Int32_array *rareIdxs,
        System_Int32_array *baseNos,
        int32_t baseId,
        int32_t eventId,
        bool isDischargeGetEffectItem,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x1
  bool v21; // w26
  const MethodInfo *v22; // x2
  int64_t size; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int v30; // w9
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
  int max_length; // w21
  __int64 v53; // x1
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Object_o *resultScrollView; // x20
  const MethodInfo *v56; // x2

  if ( (byte_4B1A2A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, resultIds, rareIdxs);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B1A2A7 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v21 = isDischargeGetEffectItem;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      ResultListWindow__setDispResultListBg(this, 1, v22);
      fallEffectObjList = this->fields.fallEffectObjList;
      if ( fallEffectObjList )
      {
        size = (unsigned int)fallEffectObjList->fields._size;
        v30 = fallEffectObjList->fields._version + 1;
        fallEffectObjList->fields._size = 0;
        fallEffectObjList->fields._version = v30;
        if ( (int)size >= 1 )
          System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, size, 0LL);
      }
      dropEffectObjList = this->fields.dropEffectObjList;
      if ( dropEffectObjList )
      {
        size = (unsigned int)dropEffectObjList->fields._size;
        v32 = dropEffectObjList->fields._version + 1;
        dropEffectObjList->fields._size = 0;
        dropEffectObjList->fields._version = v32;
        if ( (int)size >= 1 )
          System_Array__Clear((System_Array_o *)dropEffectObjList->fields._items, 0, size, 0LL);
      }
      this->fields.openCallBack = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.openCallBack,
        (int64_t)callback,
        size,
        v24,
        v25,
        v26,
        v27,
        v28);
      this->fields.resultIdList = resultIds;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.resultIdList,
        (int64_t)resultIds,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      this->fields.rareIdxList = rareIdxs;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.rareIdxList,
        (int64_t)rareIdxs,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      this->fields.baseNoList = baseNos;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.baseNoList,
        (int64_t)baseNos,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
      this->fields.currentBaseId = baseId;
      this->fields.currentEventId = eventId;
      this->fields.isDischargeGetEffectItem = v21;
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
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
            if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
              goto LABEL_23;
            resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
            if ( !UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
              goto LABEL_23;
            gameObject = (UnityEngine_GameObject_o *)this->fields.scrollBar;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, max_length > 50, 0LL);
                ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v56);
LABEL_23:
                ResultListWindow__setResultItem(this, v20);
                BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_1BCAA3C(gameObject, v20);
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

  if ( (byte_4B1A2A8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enabled, method);
    byte_4B1A2A8 = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enabled);
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartDisp(
        ResultListWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B1A2AA & 1) == 0 )
  {
    sub_1BCA7E0(&ResultListWindow__StartDisp_d__47_TypeInfo, method, v2);
    byte_4B1A2AA = 1;
  }
  v5 = sub_1BCAA2C(ResultListWindow__StartDisp_d__47_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1A2AB & 1) == 0 )
  {
    sub_1BCA7E0(&ResultListWindow__StartRewardAction_d__48_TypeInfo, rewardAction, method);
    byte_4B1A2AB = 1;
  }
  v6 = sub_1BCAA2C(ResultListWindow__StartRewardAction_d__48_TypeInfo, rewardAction, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = rewardAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)rewardAction, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
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
          sub_1BCAA44(v6, *(_QWORD *)&idx);
        v10 = rareIdxList->m_Items[v8 + 1];
        v6 = System_Int32__Equals_63206656((int32_t)&v10, idx, 0LL);
        if ( v6 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_1BCAA3C(v6, *(_QWORD *)&idx);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t maxPlayCnt; // w8
  _BOOL4 isDischargeGetEffectItem; // w9

  if ( (byte_4B1A2B0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6096/*"EndOpen"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_23396/*"setDisp"*/, v4, v5);
    byte_4B1A2B0 = 1;
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
        (System_String_o *)StringLiteral_6096/*"EndOpen"*/,
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
      (System_String_o *)StringLiteral_23396/*"setDisp"*/,
      0.00001,
      0LL);
    if ( !this->fields.isDischargeGetEffectItem && this->fields.playCnt == this->fields.maxPlayCnt - 1 )
      goto LABEL_6;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__playEffectDrop(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Collider_o *skipCollider; // x0
  int32_t maxPlayCnt; // w8
  _BOOL4 v14; // w22
  System_String_o **v15; // x9
  System_String_o *v16; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_Transform_o *v20; // x21
  int v21; // s0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  BoxGachaUtility_c *v30; // x0
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 klass_low; // x10
  __int64 v34; // x8

  if ( (byte_4B1A2AE & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v4, v5);
    sub_1BCA7E0(&StringLiteral_19002/*"ef_boxitem_drop_rare"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_19001/*"ef_boxitem_drop"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_23561/*"showResultItem"*/, v10, v11);
    byte_4B1A2AE = 1;
  }
  if ( this->fields.isSkip && !this->fields.isRare )
    goto LABEL_30;
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_31;
  UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL);
  maxPlayCnt = this->fields.maxPlayCnt;
  v14 = maxPlayCnt > 10;
  if ( this->fields.isRare )
    v15 = (System_String_o **)&StringLiteral_19002/*"ef_boxitem_drop_rare"*/;
  else
    v15 = (System_String_o **)&StringLiteral_19001/*"ef_boxitem_drop"*/;
  v16 = *v15;
  if ( maxPlayCnt < 11 )
  {
    v14 = 0;
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
  skipCollider = (UnityEngine_Collider_o *)BoxGachaResultEffectComponent__getEffect(v16, transform, v18);
  if ( !skipCollider )
    goto LABEL_31;
  v19 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)skipCollider,
                                             0LL);
  if ( !this->fields.dispObj )
    goto LABEL_31;
  v20 = (UnityEngine_Transform_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispObj, 0LL);
  if ( !skipCollider )
    goto LABEL_31;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)skipCollider,
                                     0LL);
  if ( !v20 )
    goto LABEL_31;
  UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
  if ( v14 )
  {
    v30 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, method);
      v30 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v19, v30->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  if ( !this->fields.isRare )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.dropEffectObjList;
    if ( skipCollider )
    {
      v31 = *(_QWORD *)&skipCollider->fields.m_CachedPtr;
      v32 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(skipCollider[1].klass);
      if ( v31 )
      {
        klass_low = SLODWORD(skipCollider[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v31 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skipCollider,
            (Il2CppObject *)v19,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = v31 + 8 * klass_low;
          LODWORD(skipCollider[1].klass) = klass_low + 1;
          *(_QWORD *)(v34 + 32) = v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v19, v24, v25, v26, v27, v28, v29);
        }
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1BCAA3C(skipCollider, method);
  }
LABEL_30:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23561/*"showResultItem"*/,
    this->fields.itemDispWaitTime,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *resultItemObjList; // x0
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o **p_dispObj; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x2
  bool v28; // w0
  int32_t playCnt; // w8
  _BOOL4 isSkip; // w9
  int32_t v31; // w8
  int32_t maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v34; // x2
  UnityEngine_GameObject_o *v35; // x20
  UnityEngine_GameObject_o *v36; // x8
  UnityEngine_Transform_o *v37; // x21
  int v38; // s0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  BoxGachaUtility_c *v47; // x0
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x8
  Il2CppObject *ComponentInChildren_object; // x21
  __int64 v53; // x1
  Il2CppObject *v54; // x20

  if ( (byte_4B1A2AD & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_22792/*"playEffectDrop"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_19004/*"ef_boxitem_fall"*/, v16, v17);
    byte_4B1A2AD = 1;
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  Item = System_Collections_Generic_List_object___get_Item(
           resultItemObjList,
           this->fields.playCnt,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  p_dispObj = &this->fields.dispObj;
  this->fields.dispObj = (struct UnityEngine_GameObject_o *)Item;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispObj, (int64_t)Item, v21, v22, v23, v24, v25, v26);
  v28 = ResultListWindow__checkRare(this, this->fields.playCnt, v27);
  playCnt = this->fields.playCnt;
  isSkip = this->fields.isSkip;
  this->fields.isRare = v28;
  v31 = playCnt + 1;
  this->fields.playCnt = v31;
  if ( isSkip && !v28 )
  {
    ResultListWindow__showResultItem(this, method);
    return;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( v31 > 30 || maxPlayCnt <= 10 )
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
                                                                     (System_String_o *)StringLiteral_19004/*"ef_boxitem_fall"*/,
                                                                     transform,
                                                                     v34);
  if ( !resultItemObjList )
    goto LABEL_38;
  v35 = (UnityEngine_GameObject_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)resultItemObjList,
                                                                     0LL);
  v36 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_38;
  v37 = (UnityEngine_Transform_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v36, 0LL);
  if ( !resultItemObjList )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)resultItemObjList,
                                     0LL);
  if ( !v37 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
  if ( maxPlayCnt >= 11 )
  {
    v47 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, method);
      v47 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v35, v47->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
  if ( !resultItemObjList
    || (items = resultItemObjList->fields._items,
        v49 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resultItemObjList->fields._version,
        !items) )
  {
LABEL_38:
    sub_1BCAA3C(resultItemObjList, method);
  }
  size = resultItemObjList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resultItemObjList,
      (Il2CppObject *)v35,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &items->obj.klass + size;
    resultItemObjList->fields._size = size + 1;
    v51[4] = (Il2CppClass *)v35;
    sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)v35, v41, v42, v43, v44, v45, v46);
  }
  if ( this->fields.isSkip )
    goto LABEL_37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v35,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v54 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v35,
          (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                     0LL,
                                                                     0LL);
  if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                       (UnityEngine_Object_o *)v54,
                                                                       0LL,
                                                                       0LL);
    if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
      goto LABEL_37;
    if ( v54 )
    {
      UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v54, this->fields.aniName, 0LL);
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( !ComponentInChildren_object )
    goto LABEL_38;
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)ComponentInChildren_object, this->fields.aniName, 0LL);
LABEL_37:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22792/*"playEffectDrop"*/,
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
    sub_1BCAA3C(firstLineGrid, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 Master_object; // x0
  const MethodInfo *v35; // x1
  struct UIGrid_o *firstResultGrid; // x8
  int32_t maxPerLine; // w20
  struct UIGrid_o *sceResultGrid; // x8
  DataManager_c **v39; // x27
  int32_t v40; // w23
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w22
  __int64 v43; // x26
  __int64 v44; // x29
  signed __int64 v45; // x21
  __int64 v46; // x1
  struct UIGrid_o **v47; // x8
  UnityEngine_Component_o *v48; // x23
  struct System_Int32_array *baseNoList; // x8
  UnityEngine_GameObject_o *resultListItemPrefab; // x25
  BoxGachaBaseEntity_o *v51; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v53; // x23
  __int64 v54; // x2
  UnityEngine_Transform_o *v55; // x25
  ResultItemComponent_o *v56; // x25
  BoxGachaUtility_c *v57; // x8
  int *static_fields; // x8
  int v59; // s2
  int v60; // s1
  int v61; // s0
  const MethodInfo *v62; // x1
  __int64 v63; // x22
  __int64 v64; // x29
  UnityEngine_GameObject_o *resultListResultFrame; // x26
  DataManager_c **v66; // x20
  UnityEngine_Transform_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x26
  __int64 v69; // x2
  UnityEngine_Transform_o *v70; // x27
  __int64 v71; // x1
  BoxGachaUtility_c *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct UIScrollView_o *resultScrollView; // x1
  int32_t type; // w8
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  struct System_Int32_array *v94; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  float v97; // s0
  int32_t v98; // w1
  const MethodInfo *v99; // x1
  signed __int64 v100; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_GameObject__o **p_resultItemObjList; // [xsp+10h] [xbp-A0h]
  struct UIGrid_o **p_thrResultGrid; // [xsp+18h] [xbp-98h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+20h] [xbp-90h]
  GiftMaster_o *v104; // [xsp+28h] [xbp-88h]
  int v105; // [xsp+34h] [xbp-7Ch]
  signed __int64 v106; // [xsp+38h] [xbp-78h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+40h] [xbp-70h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+48h] [xbp-68h]

  if ( (byte_4B1A2A9 & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BoxGachaBaseMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Math_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_13116/*"StartDisp"*/, v25, v26);
    byte_4B1A2A9 = 1;
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v27;
  p_resultItemObjList = &this->fields.resultItemObjList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resultItemObjList, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_87;
  maxPerLine = firstResultGrid->fields.maxPerLine;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_87;
  v39 = &DataManager_TypeInfo;
  v40 = sceResultGrid->fields.maxPerLine;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  resultIdList = this->fields.resultIdList;
  v104 = (GiftMaster_o *)Master_object;
  if ( !resultIdList )
    goto LABEL_87;
  max_length = resultIdList->max_length;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length <= 10 )
    v43 = 8LL;
  else
    v43 = 20LL;
  if ( max_length <= 10 )
    v44 = 4LL;
  else
    v44 = 16LL;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  if ( max_length >= 1 )
  {
    v45 = 0LL;
    v106 = maxPerLine - 1;
    v100 = v40 + maxPerLine - 1;
    v105 = resultIdList->max_length;
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
        v47 = &this->fields.firstResultGrid;
        if ( v45 > v106 )
        {
          v47 = &this->fields.sceResultGrid;
          if ( v45 > v100 )
            v47 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
        v47 = &this->fields.resultScrollViewGrid;
      }
      v48 = (UnityEngine_Component_o *)*v47;
      if ( !(*v39)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v39, v46);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_87;
      if ( v45 >= (unsigned __int64)baseNoList->max_length )
        sub_1BCAA44(Master_object, v35);
      if ( !Master_object )
        goto LABEL_87;
      Master_object = (__int64)BoxGachaBaseMaster__GetEntity(
                                 (BoxGachaBaseMaster_o *)Master_object,
                                 this->fields.currentBaseId,
                                 baseNoList->m_Items[v45 + 1],
                                 0LL);
      if ( !v48 )
        goto LABEL_87;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v51 = (BoxGachaBaseEntity_o *)Master_object;
      transform = UnityEngine_Component__get_transform(v48, 0LL);
      Master_object = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 resultListItemPrefab,
                                 transform,
                                 0LL,
                                 0LL);
      if ( !Master_object )
        goto LABEL_87;
      v53 = (UnityEngine_GameObject_o *)Master_object;
      Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
      v55 = (UnityEngine_Transform_o *)Master_object;
      if ( !byte_4B109C6 )
      {
        Master_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v35, v54);
        byte_4B109C6 = 1;
      }
      if ( !v55 )
        goto LABEL_87;
      UnityEngine_Transform__set_localScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v53,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v56 = (ResultItemComponent_o *)Master_object;
      v57 = BoxGachaUtility_TypeInfo;
      if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v35);
        v57 = BoxGachaUtility_TypeInfo;
      }
      if ( !v56 )
        goto LABEL_87;
      static_fields = (int *)v57->static_fields;
      v59 = *(int *)((char *)static_fields + v43);
      v60 = *(int *)((char *)static_fields + v44);
      if ( max_length > 10 )
        static_fields += 3;
      v61 = *static_fields;
      ResultItemComponent__SetItemIconScale(v56, *(UnityEngine_Vector3_o *)(&v60 - 1), v35);
      ResultItemComponent__Clear(v56, v62);
      if ( max_length >= 11 )
      {
        Master_object = (__int64)this->fields.resultScrollViewResultFrameGrid;
        if ( !Master_object )
          goto LABEL_87;
        v63 = v44;
        v64 = v43;
        resultListResultFrame = this->fields.resultListResultFrame;
        v66 = v39;
        v67 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        Master_object = (__int64)BaseMonoBehaviour__createObject(
                                   (BaseMonoBehaviour_o *)this,
                                   resultListResultFrame,
                                   v67,
                                   0LL,
                                   0LL);
        if ( !Master_object )
          goto LABEL_87;
        v68 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
        v70 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4B109C6 )
        {
          Master_object = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v35, v69);
          byte_4B109C6 = 1;
        }
        if ( !v70 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v70, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v72 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v71);
          v72 = BoxGachaUtility_TypeInfo;
        }
        v39 = v66;
        GameObjectExtensions__SetLocalScale(v68, v72->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   v53,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !Master_object )
          goto LABEL_87;
        resultScrollView = this->fields.resultScrollView;
        *(_QWORD *)(Master_object + 32) = resultScrollView;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)(Master_object + 32),
          (int64_t)resultScrollView,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
        v43 = v64;
        v44 = v63;
        max_length = v105;
      }
      if ( v51 )
      {
        if ( v51->fields.isRare )
          ResultItemComponent__SetRareItem(v56, v35);
        type = v51->fields.type;
        if ( type == 1 )
        {
          Master_object = (__int64)v104;
          if ( !v104 )
            goto LABEL_87;
          Master_object = (__int64)GiftMaster__getDataById(v104, v51->fields.targetId, 0LL);
          if ( Master_object )
          {
            if ( *(int *)(Master_object + 28) <= 1 )
              v82 = 0;
            else
              v82 = *(_DWORD *)(Master_object + 28);
            ResultItemComponent__Set(v56, (GiftEntity_o *)Master_object, v82, v81);
            goto LABEL_61;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          Master_object = (__int64)BoxGachaBaseEntity__getRewardSetData(v51, this->fields.currentEventId, 0LL);
          if ( Master_object )
          {
            ResultItemComponent__SetExtra(v56, *(_DWORD *)(Master_object + 28), *(_DWORD *)(Master_object + 48), v83);
LABEL_61:
            UnityEngine_GameObject__SetActive(v53, 0, 0LL);
            Master_object = (__int64)*p_resultItemObjList;
            if ( !*p_resultItemObjList )
              goto LABEL_87;
            v90 = *(_QWORD *)(Master_object + 16);
            v91 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++*(_DWORD *)(Master_object + 28);
            if ( !v90 )
              goto LABEL_87;
            v92 = *(int *)(Master_object + 24);
            if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v53,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
            }
            else
            {
              v93 = v90 + 8 * v92;
              *(_DWORD *)(Master_object + 24) = v92 + 1;
              *(_QWORD *)(v93 + 32) = v53;
              sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 32), (int64_t)v53, v84, v85, v86, v87, v88, v89);
            }
          }
        }
      }
      v94 = this->fields.resultIdList;
      if ( !v94 )
        goto LABEL_87;
      ++v45;
    }
    while ( v45 < (int)v94->max_length );
  }
  if ( max_length >= 11 )
  {
    adjustSprite = (UnityEngine_Object_o *)this->fields.adjustSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    if ( UnityEngine_Object__op_Inequality(adjustSprite, 0LL, 0LL) )
    {
      maxPlayCnt = this->fields.maxPlayCnt;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v35);
      Master_object = (__int64)this->fields.adjustSprite;
      if ( Master_object )
      {
        v97 = ceilf((float)maxPlayCnt / 10.0);
        if ( v97 == INFINITY )
          v98 = 5;
        else
          v98 = 60 * (int)v97 + 5;
        UIWidget__set_height((UIWidget_o *)Master_object, v98, 0LL);
        goto LABEL_79;
      }
LABEL_87:
      sub_1BCAA3C(Master_object, v35);
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
    ResultListWindow__showResultEffect(this, v99);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13116/*"StartDisp"*/,
      0LL);
}


void __fastcall ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A2AC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23396/*"setDisp"*/, method, v2);
    byte_4B1A2AC = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23396/*"setDisp"*/,
    0.3,
    0LL);
}


void __fastcall ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *dispObj; // x0

  if ( (byte_4B1A2AF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19196/*"endDisp"*/, method, v2);
    byte_4B1A2AF = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_19196/*"endDisp"*/,
    this->fields.itemDispTime,
    0LL);
}


void __fastcall ResultListWindow_RewardAction___ctor(ResultListWindow_RewardAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ResultListWindow__StartDisp_d__47___ctor(
        ResultListWindow__StartDisp_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ResultListWindow__StartDisp_d__47__MoveNext(
        ResultListWindow__StartDisp_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x19
  UnityEngine_WaitForSeconds_o *v27; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  bool result; // w0
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  System_Collections_Generic_List_object__o *v36; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x2
  __int64 v45; // x3
  int v46; // w23
  int64_t v47; // x22
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  float v54; // s0
  unsigned int v55; // w9
  int maxPlayCnt; // w8
  signed int v57; // w9
  int v58; // w9
  unsigned int v59; // w8
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x8
  int v65; // w8
  int32_t v66; // w22
  System_Collections_Generic_List_object__o *v67; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v69; // x2
  System_Collections_IEnumerator_o *started; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Collections_Generic_List_ResultListWindow_RewardAction__o **v83; // x21
  int32_t v84; // w20
  int32_t v85; // w20
  __int64 v86; // x1
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v88; // x1
  ResultListWindow_c *v89; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_4B1A2B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo, v15, v16);
    sub_1BCA7E0(&ResultListWindow_TypeInfo, v17, v18);
    sub_1BCA7E0(&ResultListWindow_RewardAction_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_6096/*"EndOpen"*/, v23, v24);
    byte_4B1A2B8 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)this->fields._listRewardAction_5__2;
    this->fields.__1__state = -1;
    if ( listRewardAction_5__2 )
      goto LABEL_37;
    goto LABEL_69;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v27 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v27, 0.2, 0LL);
      this->fields.__2__current = (Il2CppObject *)v27;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v27, v28, v29, v30, v31, v32, v33);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v36 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v36,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)v36;
    p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._listRewardAction_5__2,
      (int64_t)v36,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    if ( !_4__this )
      goto LABEL_69;
    v46 = 0;
    while ( v46 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
    {
      v47 = sub_1BCAA2C(ResultListWindow_RewardAction_TypeInfo, method, v44, v45);
      System_Object___ctor((Il2CppObject *)v47, 0LL);
      if ( !v47 )
        goto LABEL_69;
      *(_DWORD *)(v47 + 16) = v46;
      v54 = 0.0;
      v55 = v46 + _4__this->fields.playCnt;
      *(_DWORD *)(v47 + 20) = v55;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v55 + 1) >= 51 )
      {
        v57 = v55 / 0xA;
        v54 = (float)v57 / (float)((maxPlayCnt - 1) / 10);
        v58 = v57 + 1;
        v59 = maxPlayCnt / 0xAu;
        if ( v54 >= 0.85 || v58 == v59 )
          v54 = 1.0;
      }
      *(float *)(v47 + 24) = v54;
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_69;
      items = listRewardAction_5__2->fields._items;
      v62 = Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__;
      ++listRewardAction_5__2->fields._version;
      if ( !items )
        goto LABEL_69;
      size = listRewardAction_5__2->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listRewardAction_5__2,
          (Il2CppObject *)v47,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        listRewardAction_5__2->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v47;
        sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), v47, v48, v49, v50, v51, v52, v53);
      }
      if ( ++v46 == 10 )
        break;
    }
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_69;
    v65 = listRewardAction_5__2->fields._size;
    _4__this->fields.playCnt += v65;
    if ( v65 >= 1 )
    {
      v66 = 0;
      do
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v66,
                                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_69;
        v67 = listRewardAction_5__2;
        Item = System_Collections_Generic_List_object___get_Item(
                 *p_listRewardAction_5__2,
                 v66,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        started = ResultListWindow__StartRewardAction(_4__this, (ResultListWindow_RewardAction_o *)Item, v69);
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                                               (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                               started,
                                                                               0LL);
        if ( !v67 )
          goto LABEL_69;
        v67->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v67->fields._syncRoot,
          (int64_t)listRewardAction_5__2,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_69;
        v65 = listRewardAction_5__2->fields._size;
      }
      while ( ++v66 < v65 );
    }
    if ( !v65 || v65 == _4__this->fields.maxPlayCnt )
      goto LABEL_58;
LABEL_37:
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           listRewardAction_5__2,
                                                                           listRewardAction_5__2->fields._size - 1,
                                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
    if ( !listRewardAction_5__2 )
      goto LABEL_69;
    if ( LOBYTE(listRewardAction_5__2->fields._version) )
    {
      if ( !_4__this )
        goto LABEL_69;
      goto LABEL_43;
    }
    if ( !_4__this )
      goto LABEL_69;
    if ( !_4__this->fields.isSkip )
      break;
LABEL_43:
    v83 = &this->fields._listRewardAction_5__2;
    if ( _4__this->fields.isSkip )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v83;
      if ( *v83 )
      {
        v84 = 0;
        while ( v84 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v84,
                                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_70140136(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0LL);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v83;
            ++v84;
            if ( *v83 )
              continue;
          }
          goto LABEL_69;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v85 = 0;
          while ( v85 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v85,
                                                                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0LL);
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v85;
              if ( listRewardAction_5__2 )
                continue;
            }
            goto LABEL_69;
          }
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          ResultListWindow__EndOpen(_4__this, method);
LABEL_58:
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.skipCollider;
          if ( listRewardAction_5__2 )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)listRewardAction_5__2, 0, 0LL);
            if ( _4__this->fields.isDischargeGetEffectItem )
            {
              EFFECT_PLAY_TIME = 0.5;
              v88 = (System_String_o *)StringLiteral_6096/*"EndOpen"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v89 = ResultListWindow_TypeInfo;
              if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo, v86);
                v89 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v89->static_fields->EFFECT_PLAY_TIME;
              v88 = (System_String_o *)StringLiteral_6096/*"EndOpen"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v88, EFFECT_PLAY_TIME, 0LL);
            return 0;
          }
        }
      }
LABEL_69:
      sub_1BCAA3C(listRewardAction_5__2, method);
    }
    *v83 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._listRewardAction_5__2, 0LL, v77, v78, v79, v80, v81, v82);
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v77, v78, v79, v80, v81, v82);
  *((_DWORD *)p__2__current - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall ResultListWindow__StartDisp_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ResultListWindow__StartDisp_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ResultListWindow__StartDisp_d__47__System_Collections_IEnumerator_Reset(
        ResultListWindow__StartDisp_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ResultListWindow__StartDisp_d__47_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall ResultListWindow__StartDisp_d__47__System_Collections_IEnumerator_get_Current(
        ResultListWindow__StartDisp_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ResultListWindow__StartDisp_d__47__System_IDisposable_Dispose(
        ResultListWindow__StartDisp_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ResultListWindow__StartRewardAction_d__48___ctor(
        ResultListWindow__StartRewardAction_d__48_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ResultListWindow__StartRewardAction_d__48__MoveNext(
        ResultListWindow__StartRewardAction_d__48_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  ResultListWindow__StartRewardAction_d__48_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct ResultListWindow_o *_4__this; // x20
  int32_t v30; // w9
  int32_t i_5__2; // w8
  struct ResultListWindow_RewardAction_o *rewardAction; // x8
  float maxDrawItemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v34; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  bool result; // w0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int v49; // w23
  System_String_o **v50; // x8
  System_String_o *v51; // x21
  UnityEngine_Transform_o *v52; // x0
  const MethodInfo *v53; // x2
  ResultListWindow__StartRewardAction_d__48_o *v54; // x21
  struct ResultListWindow_RewardAction_o *v55; // x8
  ResultListWindow__StartRewardAction_d__48_o *v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  const MethodInfo *v63; // x1
  BoxGachaUtility_c *v64; // x0
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  struct ResultListWindow_RewardAction_o *v69; // x8
  struct ResultListWindow_RewardAction_o *v70; // x8
  ResultListWindow_c *v71; // x0
  float scrollValue; // s0
  bool v73; // w0
  __int64 v74; // x2
  __int64 v75; // x3
  _BOOL4 isSkip; // w8
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v79; // x2
  ResultListWindow__StartRewardAction_d__48_o *v80; // x21
  struct ResultListWindow_RewardAction_o *v81; // x8
  ResultListWindow__StartRewardAction_d__48_o *v82; // x22
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  const MethodInfo *v89; // x1
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  BoxGachaUtility_c *v96; // x0
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 _2__current_low; // x10
  __int64 v100; // x8
  Il2CppObject *ComponentInChildren_object; // x22
  __int64 v102; // x1
  Il2CppObject *v103; // x21
  PartyOrganizationUtility_o *v104; // x19
  int v105; // w8
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v107; // x20
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7

  v4 = this;
  if ( (byte_4B1A2B9 & 1) == 0 )
  {
    sub_1BCA7E0(&BoxGachaUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&ResultListWindow_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_19002/*"ef_boxitem_drop_rare"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_19003/*"ef_boxitem_drop_scalable"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_19005/*"ef_boxitem_fall_scalable"*/, v25, v26);
    this = (ResultListWindow__StartRewardAction_d__48_o *)sub_1BCA7E0(&StringLiteral_6096/*"EndOpen"*/, v27, v28);
    byte_4B1A2B9 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v30 = 0;
      v4->fields.__1__state = -1;
      v4->fields._i_5__2 = 0;
      goto LABEL_6;
    case 1:
      i_5__2 = v4->fields._i_5__2;
      v4->fields.__1__state = -1;
      v30 = i_5__2 + 1;
      v4->fields._i_5__2 = i_5__2 + 1;
LABEL_6:
      rewardAction = v4->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_84;
      if ( v30 < rewardAction->fields.index )
      {
        if ( _4__this )
        {
          maxDrawItemDispWaitTime = _4__this->fields.maxDrawItemDispWaitTime;
          v34 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
          UnityEngine_WaitForSeconds___ctor(v34, maxDrawItemDispWaitTime, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v34;
          p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
          sub_1BCA784(p__2__current, (int64_t)v34, v36, v37, v38, v39, v40, v41);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
LABEL_84:
        sub_1BCAA3C(this, method);
      }
      scrollValue = rewardAction->fields.scrollValue;
      if ( scrollValue > 0.0 && rewardAction->fields.playCnt + 1 >= 51 )
      {
        if ( !_4__this )
          goto LABEL_84;
        if ( !_4__this->fields.isLastLineEffectPlay )
        {
          this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.scrollBar;
          if ( !this )
            goto LABEL_84;
          UIProgressBar__set_value((UIProgressBar_o *)this, scrollValue, 0LL);
          rewardAction = v4->fields.rewardAction;
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
      v73 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, v2);
      isSkip = _4__this->fields.isSkip;
      _4__this->fields.isRare = v73;
      if ( !isSkip || v73 )
      {
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.effectRoot;
        if ( !this )
          goto LABEL_84;
        maxPlayCnt = _4__this->fields.maxPlayCnt;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (ResultListWindow__StartRewardAction_d__48_o *)BoxGachaResultEffectComponent__getEffect(
                                                                (System_String_o *)StringLiteral_19005/*"ef_boxitem_fall_scalable"*/,
                                                                transform,
                                                                v79);
        if ( !this )
          goto LABEL_84;
        v80 = this;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v81 = v4->fields.rewardAction;
        if ( !v81 )
          goto LABEL_84;
        v82 = this;
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.resultItemObjList;
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                                (System_Collections_Generic_List_object__o *)this,
                                                                v81->fields.playCnt,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
        if ( !v82 )
          goto LABEL_84;
        v82->fields.__4__this = (struct ResultListWindow_o *)this;
        sub_1BCA784((PartyOrganizationUtility_o *)&v82->fields.__4__this, (int64_t)this, v83, v84, v85, v86, v87, v88);
        SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v82, v89);
        if ( maxPlayCnt >= 11 )
        {
          v96 = BoxGachaUtility_TypeInfo;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, method);
            v96 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(
            (UnityEngine_GameObject_o *)v80,
            v96->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
            0LL);
        }
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.fallEffectObjList;
        if ( !this )
          goto LABEL_84;
        v97 = *(_QWORD *)&this->fields.__1__state;
        v98 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v97 )
          goto LABEL_84;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v97 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v80,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
        }
        else
        {
          v100 = v97 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v100 + 32) = v80;
          sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 32), (int64_t)v80, v90, v91, v92, v93, v94, v95);
        }
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v80,
                                         (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v103 = UnityEngine_GameObject__GetComponentInChildren_object_(
                   (UnityEngine_GameObject_o *)v80,
                   (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
          this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                  0LL,
                                                                  0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !ComponentInChildren_object )
              goto LABEL_84;
            SimpleAnimation__Play_64539336(
              (SimpleAnimation_o *)ComponentInChildren_object,
              _4__this->fields.aniName,
              0LL);
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
            this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)v103,
                                                                    0LL,
                                                                    0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v103 )
                goto LABEL_84;
              UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v103, _4__this->fields.aniName, 0LL);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v107 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v74, v75);
      UnityEngine_WaitForSeconds___ctor(v107, itemDropTime, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v107;
      v104 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(v104, (int64_t)v107, v108, v109, v110, v111, v112, v113);
      v105 = 2;
LABEL_83:
      *(_DWORD *)&v104[-1].fields._IsQuestStartMenuMode_k__BackingField = v105;
      return 1;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.skipCollider;
      if ( !this )
        goto LABEL_84;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 1, 0LL);
      if ( _4__this->fields.isSkip && !_4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.effectRoot;
      if ( !this )
        goto LABEL_84;
      v49 = _4__this->fields.maxPlayCnt;
      v50 = (System_String_o **)(_4__this->fields.isRare ? &StringLiteral_19002/*"ef_boxitem_drop_rare"*/ : &StringLiteral_19003/*"ef_boxitem_drop_scalable"*/);
      v51 = *v50;
      v52 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ResultListWindow__StartRewardAction_d__48_o *)BoxGachaResultEffectComponent__getEffect(v51, v52, v53);
      if ( !this )
        goto LABEL_84;
      v54 = this;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v55 = v4->fields.rewardAction;
      if ( !v55 )
        goto LABEL_84;
      v56 = this;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v55->fields.playCnt,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
      if ( !v56 )
        goto LABEL_84;
      v56->fields.__4__this = (struct ResultListWindow_o *)this;
      sub_1BCA784((PartyOrganizationUtility_o *)&v56->fields.__4__this, (int64_t)this, v57, v58, v59, v60, v61, v62);
      SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v56, v63);
      if ( v49 >= 11 )
      {
        v64 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, method);
          v64 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v54,
          v64->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
          0LL);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.dropEffectObjList;
      if ( !this )
        goto LABEL_84;
      v65 = *(_QWORD *)&this->fields.__1__state;
      v66 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v65 )
        goto LABEL_84;
      v67 = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v54,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = v65 + 8 * v67;
        LODWORD(this->fields.__2__current) = v67 + 1;
        *(_QWORD *)(v68 + 32) = v54;
        sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 32), (int64_t)v54, v43, v44, v45, v46, v47, v48);
      }
LABEL_76:
      v4->fields.__2__current = 0LL;
      v104 = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(v104, 0LL, v43, v44, v45, v46, v47, v48);
      v105 = 3;
      goto LABEL_83;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      v69 = v4->fields.rewardAction;
      if ( !v69 )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v69->fields.playCnt,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v70 = v4->fields.rewardAction;
      if ( !v70 )
        goto LABEL_84;
      v70->fields.isEnd = 1;
      if ( !_4__this->fields.isDischargeGetEffectItem && v70->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
      {
        v71 = ResultListWindow_TypeInfo;
        if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo, method);
          v71 = ResultListWindow_TypeInfo;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          (System_String_o *)StringLiteral_6096/*"EndOpen"*/,
          v71->static_fields->EFFECT_PLAY_TIME,
          0LL);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ResultListWindow__StartRewardAction_d__48__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ResultListWindow__StartRewardAction_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ResultListWindow__StartRewardAction_d__48__System_Collections_IEnumerator_Reset(
        ResultListWindow__StartRewardAction_d__48_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ResultListWindow__StartRewardAction_d__48_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall ResultListWindow__StartRewardAction_d__48__System_Collections_IEnumerator_get_Current(
        ResultListWindow__StartRewardAction_d__48_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ResultListWindow__StartRewardAction_d__48__System_IDisposable_Dispose(
        ResultListWindow__StartRewardAction_d__48_o *this,
        const MethodInfo *method)
{
  ;
}