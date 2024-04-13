void __fastcall ResultListWindow___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAF3E & 1) == 0 )
  {
    sub_B5D5C4(&ResultListWindow_TypeInfo, v1, v2, v3);
    byte_42EAF3E = 1;
  }
  LODWORD(ResultListWindow_TypeInfo->static_fields->EFFECT_PLAY_TIME) = (struct ResultListWindow_StaticFields)1061997773;
}


void __fastcall ResultListWindow___ctor(ResultListWindow_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Int32_array **v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42EAF3D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_18393/*"ef_boxitem_fall"*/, v15, v16, v17);
    byte_42EAF3D = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_32A5510;
  v18 = (System_Int32_array **)StringLiteral_18393/*"ef_boxitem_fall"*/;
  this->fields.aniName = (struct System_String_o *)StringLiteral_18393/*"ef_boxitem_fall"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.aniName, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fallEffectObjList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dropEffectObjList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x3
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42EAF3B & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)grid, (_DWORD)method, v3);
    byte_42EAF3B = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (ResultListWindow_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      this = (ResultListWindow_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !this )
        break;
      this = (ResultListWindow_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)this, v6, 0LL);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v6 < 0 )
        return;
    }
LABEL_13:
    sub_B5D69C(this, grid);
  }
}


void __fastcall ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UnityEngine_BoxCollider_o *skipCollider; // x0
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x20
  signed __int64 size; // x21
  unsigned __int64 v14; // x22
  UnityEngine_Object_o *v15; // x20
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x20
  signed __int64 v17; // x21
  unsigned __int64 v18; // x22
  UnityEngine_Object_o *v19; // x20

  if ( (byte_42EAF3C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EAF3C = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_37;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0LL) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_37:
    sub_B5D69C(skipCollider, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0LL);
  fallEffectObjList = this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( fallEffectObjList )
  {
    size = fallEffectObjList->fields._size;
    if ( (int)size >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)fallEffectObjList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v15 = (UnityEngine_Object_o *)fallEffectObjList->fields._items->m_Items[v14];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        skipCollider = (struct UnityEngine_BoxCollider_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
        if ( ((unsigned __int8)skipCollider & 1) != 0 )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35620236(v15, 0LL);
        }
        if ( (__int64)++v14 >= size )
          break;
        fallEffectObjList = this->fields.fallEffectObjList;
        if ( !fallEffectObjList )
          goto LABEL_37;
      }
    }
  }
  dropEffectObjList = this->fields.dropEffectObjList;
  if ( dropEffectObjList )
  {
    v17 = dropEffectObjList->fields._size;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)dropEffectObjList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v19 = (UnityEngine_Object_o *)dropEffectObjList->fields._items->m_Items[v18];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        skipCollider = (struct UnityEngine_BoxCollider_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
        if ( ((unsigned __int8)skipCollider & 1) != 0 )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35620236(v19, 0LL);
        }
        if ( (__int64)++v18 >= v17 )
          break;
        dropEffectObjList = this->fields.dropEffectObjList;
        if ( !dropEffectObjList )
          goto LABEL_37;
      }
    }
  }
}


void __fastcall ResultListWindow__Close(ResultListWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42EAF39 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ResultListWindow_EndClose__, v5, v6, v7);
    byte_42EAF39 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  ResultListWindow__Close_29541016(this, v8, v9);
}


void __fastcall ResultListWindow__Close_29541016(
        ResultListWindow_o *this,
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

  if ( (byte_42EAF3A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ResultListWindow_EndClose__, v10, v11, v12);
    byte_42EAF3A = 1;
  }
  this->fields.closeCallBack = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallBack,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall ResultListWindow__EndClose(ResultListWindow_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *closeCallBack; // x20
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  closeCallBack = this->fields.closeCallBack;
  if ( closeCallBack )
  {
    this->fields.closeCallBack = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(closeCallBack, 0LL);
  }
  ResultListWindow__Init(this, method);
  ResultListWindow__ClearAllGrid(this, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UIProgressBar_o *v13; // x0
  System_Action_o *openCallBack; // x20

  if ( (byte_42EAF38 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EAF38 = 1;
  }
  if ( this->fields.maxPlayCnt <= 50 )
    ResultListWindow__SetScrollControllEnabled(this, 0, v2);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL)
    && this->fields.maxPlayCnt + 1 >= 52
    && !this->fields.isLastLineEffectPlay )
  {
    v13 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v13 )
      sub_B5D69C(0LL, v6);
    UIProgressBar__set_value(v13, 1.0, 0LL);
    this->fields.isLastLineEffectPlay = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.openCallBack, 0LL, v7, v8, v9, v10, v11, v12);
    System_Action__Invoke(openCallBack, 0LL);
  }
}


void __fastcall ResultListWindow__Init(ResultListWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *fallEffectObjList; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *dropEffectObjList; // x0

  if ( (byte_42EAF2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    byte_42EAF2D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.skipCollider) == 0LL) )
  {
    sub_B5D69C(gameObject, v9);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  fallEffectObjList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.fallEffectObjList;
  this->fields.playCnt = 0;
  this->fields.maxPlayCnt = 0;
  this->fields.isRare = 0;
  this->fields.isSkip = 0;
  if ( fallEffectObjList && fallEffectObjList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      fallEffectObjList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  dropEffectObjList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.dropEffectObjList;
  if ( dropEffectObjList && dropEffectObjList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      dropEffectObjList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x0
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w21
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Object_o *resultScrollView; // x20
  const MethodInfo *v53; // x2

  if ( (byte_42EAF2E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_GameObject__Clear__,
      (_DWORD)resultIds,
      (_DWORD)rareIdxs,
      baseNos);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42EAF2E = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      ResultListWindow__setDispResultListBg(this, 1, v22);
      fallEffectObjList = this->fields.fallEffectObjList;
      if ( fallEffectObjList )
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)fallEffectObjList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
      dropEffectObjList = this->fields.dropEffectObjList;
      if ( dropEffectObjList )
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)dropEffectObjList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
      this->fields.openCallBack = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.openCallBack,
        (System_Int32_array **)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      this->fields.resultIdList = resultIds;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.resultIdList,
        (System_Int32_array **)resultIds,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      this->fields.rareIdxList = rareIdxs;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.rareIdxList,
        (System_Int32_array **)rareIdxs,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      this->fields.baseNoList = baseNos;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.baseNoList,
        (System_Int32_array **)baseNos,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      this->fields.currentBaseId = baseId;
      this->fields.currentEventId = eventId;
      *(_WORD *)&this->fields.isDischargeGetEffectItem = isDischargeGetEffectItem;
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
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
              goto LABEL_23;
            resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
              goto LABEL_23;
            gameObject = (UnityEngine_GameObject_o *)this->fields.scrollBar;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, max_length > 50, 0LL);
                ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v53);
LABEL_23:
                ResultListWindow__setResultItem(this, v21);
                BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_B5D69C(gameObject, v21);
  }
}


void __fastcall ResultListWindow__SetScrollControllEnabled(
        ResultListWindow_o *this,
        bool enabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *resultScrollView; // x21
  __int64 v7; // x1
  UnityEngine_Behaviour_o *v8; // x0

  if ( (byte_42EAF2F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, enabled, (_DWORD)method, v3);
    byte_42EAF2F = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_Behaviour__set_enabled(v8, enabled, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartDisp(
        ResultListWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EAF31 & 1) == 0 )
  {
    sub_B5D5C4(&ResultListWindow__StartDisp_d__47_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAF31 = 1;
  }
  v5 = sub_B5D694(ResultListWindow__StartDisp_d__47_TypeInfo);
  ResultListWindow__StartDisp_d__47___ctor((ResultListWindow__StartDisp_d__47_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42EAF32 & 1) == 0 )
  {
    sub_B5D5C4(&ResultListWindow__StartRewardAction_d__48_TypeInfo, (_DWORD)rewardAction, (_DWORD)method, v3);
    byte_42EAF32 = 1;
  }
  v6 = sub_B5D694(ResultListWindow__StartRewardAction_d__48_TypeInfo);
  ResultListWindow__StartRewardAction_d__48___ctor((ResultListWindow__StartRewardAction_d__48_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = rewardAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)rewardAction,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
}


bool __fastcall ResultListWindow__checkRare(ResultListWindow_o *this, int32_t idx, const MethodInfo *method)
{
  struct System_Int32_array *rareIdxList; // x8
  __int64 v4; // x9
  _BOOL8 v6; // x0
  unsigned __int64 v8; // x21
  __int64 v9; // x1
  __int64 v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = 0;
  rareIdxList = this->fields.rareIdxList;
  if ( rareIdxList )
  {
    v4 = *(_QWORD *)&rareIdxList->max_length;
    v6 = 0LL;
    if ( v4 && (int)v4 >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)v4 )
        {
          v10 = sub_B5D6C8(v6);
          sub_B5D668(v10, 0LL);
        }
        v12 = rareIdxList->m_Items[v8 + 1];
        v6 = System_Int32__Equals_39741700((int32_t)&v12, idx, 0LL);
        if ( v6 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_B5D69C(v6, v9);
        LODWORD(v4) = rareIdxList->max_length;
        if ( (__int64)++v8 >= (int)v4 )
          goto LABEL_9;
      }
      LOBYTE(v6) = 1;
    }
  }
  else
  {
LABEL_9:
    LOBYTE(v6) = 0;
  }
  return v6;
}


void __fastcall ResultListWindow__endDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t maxPlayCnt; // w8
  _BOOL4 isDischargeGetEffectItem; // w9

  if ( (byte_42EAF37 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6049/*"EndOpen"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22311/*"setDisp"*/, v5, v6, v7);
    byte_42EAF37 = 1;
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
        (System_String_o *)StringLiteral_6049/*"EndOpen"*/,
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
      (System_String_o *)StringLiteral_22311/*"setDisp"*/,
      0.00001,
      0LL);
    if ( !this->fields.isDischargeGetEffectItem && this->fields.playCnt == this->fields.maxPlayCnt - 1 )
      goto LABEL_6;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__playEffectDrop(ResultListWindow_o *this, const MethodInfo *method)
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
  UnityEngine_Collider_o *skipCollider; // x0
  System_String_o **v21; // x8
  System_String_o *v22; // x20
  UnityEngine_Transform_o *transform; // x21
  int v24; // w22
  UnityEngine_GameObject_o *v25; // x20
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  BoxGachaUtility_c *v30; // x0

  if ( (byte_42EAF35 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaResultEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BoxGachaUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18391/*"ef_boxitem_drop_rare"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18390/*"ef_boxitem_drop"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22420/*"showResultItem"*/, v17, v18, v19);
    byte_42EAF35 = 1;
  }
  if ( this->fields.isSkip && !this->fields.isRare )
    goto LABEL_32;
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_33;
  UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL);
  if ( this->fields.isRare )
    v21 = (System_String_o **)&StringLiteral_18391/*"ef_boxitem_drop_rare"*/;
  else
    v21 = (System_String_o **)&StringLiteral_18390/*"ef_boxitem_drop"*/;
  v22 = *v21;
  if ( this->fields.maxPlayCnt < 11 )
  {
    v24 = 0;
LABEL_15:
    skipCollider = (UnityEngine_Collider_o *)GameObjectExtensions__GetParent(this->fields.dispObj, 0LL);
    if ( !skipCollider )
      goto LABEL_33;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
    goto LABEL_17;
  }
  if ( this->fields.playCnt >= 31 )
  {
    v24 = 1;
    goto LABEL_15;
  }
  skipCollider = (UnityEngine_Collider_o *)this->fields.effectRoot;
  if ( !skipCollider )
    goto LABEL_33;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skipCollider, 0LL);
  v24 = 1;
LABEL_17:
  if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
  }
  skipCollider = (UnityEngine_Collider_o *)BoxGachaResultEffectComponent__getEffect(v22, transform, 0LL);
  if ( !skipCollider )
    goto LABEL_33;
  v25 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)skipCollider,
                                             0LL);
  if ( !this->fields.dispObj )
    goto LABEL_33;
  v26 = (UnityEngine_Transform_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispObj, 0LL);
  if ( !skipCollider )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)skipCollider,
                                     0LL);
  if ( !v26 )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  if ( v24 )
  {
    v30 = BoxGachaUtility_TypeInfo;
    if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v30 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v25, v30->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  if ( !this->fields.isRare )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.dropEffectObjList;
    if ( skipCollider )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skipCollider,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      goto LABEL_32;
    }
LABEL_33:
    sub_B5D69C(skipCollider, method);
  }
LABEL_32:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22420/*"showResultItem"*/,
    this->fields.itemDispWaitTime,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ResultListWindow_o *v8; // x19
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
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  __int64 playCnt; // x21
  System_Int32_array **v35; // x1
  UnityEngine_GameObject_o **p_dispObj; // x21
  const MethodInfo *v37; // x2
  bool v38; // w0
  int32_t v39; // w8
  int v40; // w8
  int maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v43; // x20
  UnityEngine_GameObject_o *v44; // x20
  UnityEngine_GameObject_o *v45; // x8
  UnityEngine_Transform_o *v46; // x21
  int v47; // s0
  BoxGachaUtility_c *v50; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_Object_o *v52; // x20

  v8 = this;
  if ( (byte_42EAF34 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaResultEffectComponent_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&BoxGachaUtility_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21780/*"playEffectDrop"*/, v27, v28, v29);
    this = (ResultListWindow_o *)sub_B5D5C4(&StringLiteral_18393/*"ef_boxitem_fall"*/, v30, v31, v32);
    byte_42EAF34 = 1;
  }
  resultItemObjList = v8->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_42;
  playCnt = v8->fields.playCnt;
  if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v35 = (System_Int32_array **)resultItemObjList->fields._items->m_Items[playCnt];
  p_dispObj = &v8->fields.dispObj;
  v8->fields.dispObj = (struct UnityEngine_GameObject_o *)v35;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields.dispObj, v35, v2, v3, v4, v5, v6, v7);
  v38 = ResultListWindow__checkRare(v8, v8->fields.playCnt, v37);
  v39 = v8->fields.playCnt;
  v8->fields.isRare = v38;
  v40 = v39 + 1;
  v8->fields.playCnt = v40;
  if ( !v38 && v8->fields.isSkip )
  {
    ResultListWindow__showResultItem(v8, method);
    return;
  }
  maxPlayCnt = v8->fields.maxPlayCnt;
  if ( v40 > 30 || maxPlayCnt <= 10 )
  {
    this = (ResultListWindow_o *)GameObjectExtensions__GetParent(*p_dispObj, 0LL);
    if ( !this )
      goto LABEL_42;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  }
  else
  {
    this = (ResultListWindow_o *)v8->fields.effectRoot;
    if ( !this )
      goto LABEL_42;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  }
  v43 = transform;
  if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
  }
  this = (ResultListWindow_o *)BoxGachaResultEffectComponent__getEffect(
                                 (System_String_o *)StringLiteral_18393/*"ef_boxitem_fall"*/,
                                 v43,
                                 0LL);
  if ( !this )
    goto LABEL_42;
  v44 = (UnityEngine_GameObject_o *)this;
  this = (ResultListWindow_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v45 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_42;
  v46 = (UnityEngine_Transform_o *)this;
  this = (ResultListWindow_o *)UnityEngine_GameObject__get_transform(v45, 0LL);
  if ( !this )
    goto LABEL_42;
  *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v46 )
    goto LABEL_42;
  UnityEngine_Transform__set_localPosition(v46, *(UnityEngine_Vector3_o *)&v47, 0LL);
  if ( maxPlayCnt >= 11 )
  {
    v50 = BoxGachaUtility_TypeInfo;
    if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v50 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v44, v50->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  this = (ResultListWindow_o *)v8->fields.fallEffectObjList;
  if ( !this )
LABEL_42:
    sub_B5D69C(this, method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  if ( !v8->fields.isSkip )
  {
    ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                          v44,
                                                                          (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    v52 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                    v44,
                                    (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ResultListWindow_o *)UnityEngine_Object__op_Inequality(ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( ComponentInChildren_Dropdown_DropdownItem )
      {
        SimpleAnimation__Play_16676044(
          (SimpleAnimation_o *)ComponentInChildren_Dropdown_DropdownItem,
          v8->fields.aniName,
          0LL);
        goto LABEL_41;
      }
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (ResultListWindow_o *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_41;
      if ( v52 )
      {
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v52, v8->fields.aniName, 0LL);
        goto LABEL_41;
      }
    }
    goto LABEL_42;
  }
LABEL_41:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)v8,
    (System_String_o *)StringLiteral_21780/*"playEffectDrop"*/,
    v8->fields.itemDropTime,
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
    sub_B5D69C(firstLineGrid, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  char *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v46; // x1
  struct UIGrid_o *firstResultGrid; // x8
  float cellWidth; // w23
  struct UIGrid_o *sceResultGrid; // x8
  DataManager_c **v50; // x26
  float v51; // w22
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w27
  signed __int64 v54; // x20
  struct UIGrid_o **v55; // x8
  DataManager_c *v56; // x0
  UnityEngine_Component_o *v57; // x22
  struct System_Int32_array *baseNoList; // x8
  UnityEngine_GameObject_o *resultListItemPrefab; // x24
  BoxGachaBaseEntity_o *v60; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v62; // x22
  UnityEngine_Transform_o *v63; // x24
  int v64; // s0
  ResultItemComponent_o *v67; // x24
  BoxGachaUtility_c *v68; // x8
  struct BoxGachaUtility_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  const MethodInfo *v73; // x1
  UnityEngine_GameObject_o *resultListResultFrame; // x25
  DataManager_c **v75; // x21
  UnityEngine_Transform_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x25
  UnityEngine_Transform_o *v78; // x26
  int v79; // s0
  BoxGachaUtility_c *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **resultScrollView; // x1
  int32_t type; // w8
  const MethodInfo *v91; // x3
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct System_Int32_array *v94; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  float v97; // s0
  double v98; // d0
  const MethodInfo *v99; // x1
  __int64 v100; // x0
  signed __int64 v101; // [xsp+8h] [xbp-98h]
  struct System_Collections_Generic_List_GameObject__o **p_resultItemObjList; // [xsp+10h] [xbp-90h]
  struct UIGrid_o **p_thrResultGrid; // [xsp+18h] [xbp-88h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+20h] [xbp-80h]
  GiftMaster_o *v105; // [xsp+28h] [xbp-78h]
  signed __int64 v106; // [xsp+30h] [xbp-70h]
  int v107; // [xsp+3Ch] [xbp-64h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+40h] [xbp-60h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+48h] [xbp-58h]
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EAF30 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_BoxGachaBaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Math_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_13198/*"StartDisp"*/, v35, v36, v37);
    byte_42EAF30 = 1;
  }
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v38;
  p_resultItemObjList = &this->fields.resultItemObjList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_85;
  cellWidth = firstResultGrid->fields.cellWidth;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_85;
  v50 = &DataManager_TypeInfo;
  v51 = sceResultGrid->fields.cellWidth;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  resultIdList = this->fields.resultIdList;
  v105 = (GiftMaster_o *)Master_WarQuestSelectionMaster;
  if ( !resultIdList )
    goto LABEL_85;
  max_length = resultIdList->max_length;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length >= 1 )
  {
    v54 = 0LL;
    v106 = LODWORD(cellWidth) - 1;
    v101 = LODWORD(v51) + LODWORD(cellWidth) - 1;
    v107 = resultIdList->max_length;
    do
    {
      Master_WarQuestSelectionMaster = (char *)this->fields.resultList;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      Master_WarQuestSelectionMaster = (char *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      if ( max_length < 11 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
        v55 = &this->fields.firstResultGrid;
        if ( v54 > v106 )
        {
          v55 = &this->fields.sceResultGrid;
          if ( v54 > v101 )
            v55 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
        v55 = &this->fields.resultScrollViewGrid;
      }
      v56 = *v50;
      v57 = (UnityEngine_Component_o *)*v55;
      if ( (BYTE3((*v50)->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v56);
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_85;
      if ( v54 >= (unsigned __int64)baseNoList->max_length )
      {
        v100 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v100, 0LL);
      }
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      Master_WarQuestSelectionMaster = (char *)BoxGachaBaseMaster__GetEntity(
                                                 (BoxGachaBaseMaster_o *)Master_WarQuestSelectionMaster,
                                                 this->fields.currentBaseId,
                                                 baseNoList->m_Items[v54 + 1],
                                                 0LL);
      if ( !v57 )
        goto LABEL_85;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v60 = (BoxGachaBaseEntity_o *)Master_WarQuestSelectionMaster;
      transform = UnityEngine_Component__get_transform(v57, 0LL);
      Master_WarQuestSelectionMaster = (char *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 resultListItemPrefab,
                                                 transform,
                                                 0LL,
                                                 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      v62 = (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster;
      v63 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0LL);
      *(UnityEngine_Vector3_o *)&v64 = UnityEngine_Vector3__get_one(0LL);
      if ( !v63 )
        goto LABEL_85;
      UnityEngine_Transform__set_localScale(v63, *(UnityEngine_Vector3_o *)&v64, 0LL);
      Master_WarQuestSelectionMaster = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v62,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v67 = (ResultItemComponent_o *)Master_WarQuestSelectionMaster;
      v68 = BoxGachaUtility_TypeInfo;
      if ( max_length <= 10 )
      {
        if ( (WORD1(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v68 = BoxGachaUtility_TypeInfo;
        }
        p_x = &v68->static_fields->NORMAL_ITEM_SIZE.fields.x;
        p_y = p_x + 1;
        p_z = p_x + 2;
        if ( !v67 )
          goto LABEL_85;
      }
      else
      {
        if ( (WORD1(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v68 = BoxGachaUtility_TypeInfo;
        }
        static_fields = v68->static_fields;
        p_x = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.x;
        p_y = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.y;
        p_z = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.z;
        if ( !v67 )
          goto LABEL_85;
      }
      v110.fields.y = *p_y;
      v110.fields.x = *p_x;
      v110.fields.z = *p_z;
      ResultItemComponent__SetItemIconScale(v67, v110, v46);
      ResultItemComponent__Clear(v67, v73);
      if ( max_length >= 11 )
      {
        Master_WarQuestSelectionMaster = (char *)this->fields.resultScrollViewResultFrameGrid;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_85;
        resultListResultFrame = this->fields.resultListResultFrame;
        v75 = v50;
        v76 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
        Master_WarQuestSelectionMaster = (char *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   resultListResultFrame,
                                                   v76,
                                                   0LL,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_85;
        v77 = (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster;
        v78 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0LL);
        *(UnityEngine_Vector3_o *)&v79 = UnityEngine_Vector3__get_one(0LL);
        if ( !v78 )
          goto LABEL_85;
        UnityEngine_Transform__set_localScale(v78, *(UnityEngine_Vector3_o *)&v79, 0LL);
        v82 = BoxGachaUtility_TypeInfo;
        if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v50 = v75;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v82 = BoxGachaUtility_TypeInfo;
          }
        }
        else
        {
          v50 = v75;
        }
        GameObjectExtensions__SetLocalScale(v77, v82->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        Master_WarQuestSelectionMaster = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v62,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_85;
        resultScrollView = (System_Int32_array **)this->fields.resultScrollView;
        *((_QWORD *)Master_WarQuestSelectionMaster + 3) = resultScrollView;
        sub_B5D560(
          (BattleServantConfConponent_o *)(Master_WarQuestSelectionMaster + 24),
          resultScrollView,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88);
        max_length = v107;
      }
      if ( v60 )
      {
        if ( v60->fields.isRare )
          ResultItemComponent__SetRareItem(v67, v46);
        type = v60->fields.type;
        if ( type == 1 )
        {
          Master_WarQuestSelectionMaster = (char *)v105;
          if ( !v105 )
            goto LABEL_85;
          Master_WarQuestSelectionMaster = (char *)GiftMaster__getDataById(v105, v60->fields.targetId, 0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            if ( *((int *)Master_WarQuestSelectionMaster + 7) <= 1 )
              v92 = 0;
            else
              v92 = *((_DWORD *)Master_WarQuestSelectionMaster + 7);
            ResultItemComponent__Set(v67, (GiftEntity_o *)Master_WarQuestSelectionMaster, v92, v91);
            goto LABEL_60;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          Master_WarQuestSelectionMaster = (char *)BoxGachaBaseEntity__getRewardSetData(
                                                     v60,
                                                     this->fields.currentEventId,
                                                     0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            ResultItemComponent__SetExtra(
              v67,
              *((_DWORD *)Master_WarQuestSelectionMaster + 7),
              *((_DWORD *)Master_WarQuestSelectionMaster + 12),
              v93);
LABEL_60:
            UnityEngine_GameObject__SetActive(v62, 0, 0LL);
            Master_WarQuestSelectionMaster = (char *)*p_resultItemObjList;
            if ( !*p_resultItemObjList )
              goto LABEL_85;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
      }
      v94 = this->fields.resultIdList;
      if ( !v94 )
        goto LABEL_85;
      ++v54;
    }
    while ( v54 < (int)v94->max_length );
  }
  if ( max_length >= 11 )
  {
    adjustSprite = (UnityEngine_Object_o *)this->fields.adjustSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(adjustSprite, 0LL, 0LL) )
    {
      maxPlayCnt = this->fields.maxPlayCnt;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (char *)this->fields.adjustSprite;
      if ( Master_WarQuestSelectionMaster )
      {
        v97 = ceilf((float)maxPlayCnt / 10.0);
        if ( v97 == INFINITY )
          v98 = -v97;
        else
          v98 = v97;
        UIWidget__set_height((UIWidget_o *)Master_WarQuestSelectionMaster, 60 * (int)v98 + 5, 0LL);
        goto LABEL_77;
      }
LABEL_85:
      sub_B5D69C(Master_WarQuestSelectionMaster, v46);
    }
  }
LABEL_77:
  Master_WarQuestSelectionMaster = (char *)*p_firstResultGrid;
  if ( !*p_firstResultGrid )
    goto LABEL_85;
  UIGrid__set_repositionNow((UIGrid_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (char *)*p_sceResultGrid;
  if ( !*p_sceResultGrid )
    goto LABEL_85;
  UIGrid__set_repositionNow((UIGrid_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (char *)*p_thrResultGrid;
  if ( !*p_thrResultGrid )
    goto LABEL_85;
  UIGrid__set_repositionNow((UIGrid_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (char *)*p_resultScrollViewGrid;
  if ( !*p_resultScrollViewGrid )
    goto LABEL_85;
  UIGrid__set_repositionNow((UIGrid_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (char *)this->fields.resultScrollViewResultFrameGrid;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_85;
  UIGrid__set_repositionNow((UIGrid_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( max_length < 11 )
    ResultListWindow__showResultEffect(this, v99);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13198/*"StartDisp"*/,
      0LL);
}


void __fastcall ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAF33 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22311/*"setDisp"*/, (_DWORD)method, v2, v3);
    byte_42EAF33 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22311/*"setDisp"*/,
    0.3,
    0LL);
}


void __fastcall ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *dispObj; // x0

  if ( (byte_42EAF36 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18574/*"endDisp"*/, (_DWORD)method, v2, v3);
    byte_42EAF36 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_18574/*"endDisp"*/,
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ResultListWindow__StartDisp_d__47_o *v8; // x20
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x19
  UnityEngine_WaitForSeconds_o *v41; // x19
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  bool result; // w0
  BattleServantConfConponent_o *p_listRewardAction_5__2; // x21
  _DWORD *listRewardAction_5__2; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x22
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  unsigned int v58; // w23
  __int64 v59; // x22
  float v60; // s0
  unsigned int v61; // w9
  int maxPlayCnt; // w8
  signed int v63; // w9
  int v64; // w9
  unsigned int v65; // w8
  __int64 v68; // x24
  __int64 v69; // x25
  int v70; // w8
  __int64 v71; // x22
  System_Collections_IEnumerator_o *started; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  int v79; // w8
  __int64 v80; // x8
  BattleServantConfConponent_c *klass; // x22
  __int64 v82; // x20
  int namespaze; // w8
  __int64 v84; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v86; // x20
  int size; // w8
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v89; // x1
  ResultListWindow_c *v90; // x0
  BattleServantConfConponent_o *p__2__current; // x20

  v8 = this;
  if ( (byte_42E7F5C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ResultListWindow_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ResultListWindow_RewardAction_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v33, v34, v35);
    this = (ResultListWindow__StartDisp_d__47_o *)sub_B5D5C4(&StringLiteral_6049/*"EndOpen"*/, v36, v37, v38);
    byte_42E7F5C = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&v8->fields._listRewardAction_5__2;
    listRewardAction_5__2 = v8->fields._listRewardAction_5__2;
    v8->fields.__1__state = -1;
    if ( listRewardAction_5__2 )
      goto LABEL_38;
    goto LABEL_77;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v41 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v41, 0.2, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v41;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields.__2__current,
        (System_Int32_array **)v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      result = 1;
      v8->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&v8->fields._listRewardAction_5__2;
  v8->fields.__1__state = -1;
  while ( 1 )
  {
    v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v51,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    p_listRewardAction_5__2->klass = (BattleServantConfConponent_c *)v51;
    sub_B5D560(p_listRewardAction_5__2, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
    if ( !_4__this )
      goto LABEL_77;
    v58 = 0;
    while ( (signed int)(v58 + _4__this->fields.playCnt) < _4__this->fields.maxPlayCnt )
    {
      v59 = sub_B5D694(ResultListWindow_RewardAction_TypeInfo);
      System_Object___ctor((Il2CppObject *)v59, 0LL);
      if ( !v59 )
        goto LABEL_77;
      *(_DWORD *)(v59 + 16) = v58;
      v60 = 0.0;
      v61 = v58 + _4__this->fields.playCnt;
      *(_DWORD *)(v59 + 20) = v61;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v61 + 1) >= 51 )
      {
        v63 = v61 / 0xA;
        v60 = (float)v63 / (float)((maxPlayCnt - 1) / 10);
        v64 = v63 + 1;
        v65 = maxPlayCnt / 0xAu;
        if ( v60 >= 0.85 || v64 == v65 )
          v60 = 1.0;
      }
      *(float *)(v59 + 24) = v60;
      this = (ResultListWindow__StartDisp_d__47_o *)p_listRewardAction_5__2->klass;
      if ( !p_listRewardAction_5__2->klass )
        goto LABEL_77;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__);
      if ( v58++ > 8 )
        break;
    }
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_77;
    _4__this->fields.playCnt += LODWORD(p_listRewardAction_5__2->klass->_1.namespaze);
    listRewardAction_5__2 = p_listRewardAction_5__2->klass;
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_77;
    v68 = 0LL;
    v69 = 32LL;
    while ( 1 )
    {
      v70 = listRewardAction_5__2[6];
      if ( (int)v68 >= v70 )
        break;
      if ( v70 <= (unsigned int)v68 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v71 = *(_QWORD *)(*((_QWORD *)listRewardAction_5__2 + 2) + v69);
      if ( listRewardAction_5__2[6] <= (unsigned int)v68 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      started = ResultListWindow__StartRewardAction(
                  _4__this,
                  *(ResultListWindow_RewardAction_o **)(*((_QWORD *)listRewardAction_5__2 + 2) + 8 * v68 + 32),
                  0LL);
      this = (ResultListWindow__StartDisp_d__47_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      started,
                                                      0LL);
      if ( v71 )
      {
        *(_QWORD *)(v71 + 32) = this;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v71 + 32),
          (System_Int32_array **)this,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
        listRewardAction_5__2 = p_listRewardAction_5__2->klass;
        ++v68;
        v69 += 8LL;
        if ( p_listRewardAction_5__2->klass )
          continue;
      }
      goto LABEL_77;
    }
    if ( !v70 || v70 == _4__this->fields.maxPlayCnt )
      goto LABEL_65;
LABEL_38:
    v79 = listRewardAction_5__2[6];
    if ( !v79 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v80 = *(_QWORD *)(*((_QWORD *)listRewardAction_5__2 + 2) + 8LL * (v79 - 1) + 32);
    if ( !v80 )
      goto LABEL_77;
    if ( *(_BYTE *)(v80 + 28) )
    {
      if ( !_4__this )
        goto LABEL_77;
      goto LABEL_46;
    }
    if ( !_4__this )
      goto LABEL_77;
    if ( !_4__this->fields.isSkip )
      break;
LABEL_46:
    if ( _4__this->fields.isSkip )
    {
      klass = p_listRewardAction_5__2->klass;
      if ( p_listRewardAction_5__2->klass )
      {
        v82 = 0LL;
        while ( 1 )
        {
          namespaze = (int)klass->_1.namespaze;
          if ( (int)v82 >= namespaze )
            break;
          if ( namespaze <= (unsigned int)v82 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v84 = *(_QWORD *)&klass->_1.name[8 * v82 + 32];
          if ( v84 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_35615756(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              *(UnityEngine_Coroutine_o **)(v84 + 32),
              0LL);
            klass = p_listRewardAction_5__2->klass;
            ++v82;
            if ( p_listRewardAction_5__2->klass )
              continue;
          }
          goto LABEL_77;
        }
        resultItemObjList = _4__this->fields.resultItemObjList;
        if ( resultItemObjList )
        {
          v86 = 0LL;
          while ( 1 )
          {
            size = resultItemObjList->fields._size;
            if ( (int)v86 >= size )
              break;
            if ( size <= (unsigned int)v86 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            this = (ResultListWindow__StartDisp_d__47_o *)resultItemObjList->fields._items->m_Items[v86];
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              resultItemObjList = _4__this->fields.resultItemObjList;
              ++v86;
              if ( resultItemObjList )
                continue;
            }
            goto LABEL_77;
          }
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          ResultListWindow__EndOpen(_4__this, 0LL);
LABEL_65:
          this = (ResultListWindow__StartDisp_d__47_o *)_4__this->fields.skipCollider;
          if ( this )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
            if ( _4__this->fields.isDischargeGetEffectItem )
            {
              EFFECT_PLAY_TIME = 0.5;
              v89 = (System_String_o *)StringLiteral_6049/*"EndOpen"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v90 = ResultListWindow_TypeInfo;
              if ( (BYTE3(ResultListWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v90 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v90->static_fields->EFFECT_PLAY_TIME;
              v89 = (System_String_o *)StringLiteral_6049/*"EndOpen"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v89, EFFECT_PLAY_TIME, 0LL);
            return 0;
          }
        }
      }
LABEL_77:
      sub_B5D69C(this, method);
    }
    p_listRewardAction_5__2->klass = 0LL;
    sub_B5D560(p_listRewardAction_5__2, 0LL, v2, v3, v4, v5, v6, v7);
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B5D560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ResultListWindow__StartDisp_d__47_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  ResultListWindow__StartRewardAction_d__48_o *v4; // x19
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  struct ResultListWindow_o *_4__this; // x20
  int32_t v45; // w9
  int32_t i_5__2; // w8
  struct ResultListWindow_RewardAction_o *rewardAction; // x8
  float maxDrawItemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v49; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  bool result; // w0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int isRare; // w8
  System_String_o **v65; // x8
  int v66; // w23
  System_String_o *v67; // x21
  UnityEngine_Transform_o *v68; // x22
  UnityEngine_GameObject_o *v69; // x21
  struct ResultListWindow_RewardAction_o *v70; // x8
  struct System_Collections_Generic_List_GameObject__o *v71; // x24
  __int64 v72; // x25
  ResultListWindow__StartRewardAction_d__48_o *v73; // x22
  BoxGachaUtility_c *v74; // x0
  BattleServantConfConponent_o *v75; // x19
  int v76; // w8
  struct ResultListWindow_RewardAction_o *v77; // x8
  struct System_Collections_Generic_List_GameObject__o *v78; // x21
  __int64 v79; // x22
  struct ResultListWindow_RewardAction_o *v80; // x8
  struct ResultListWindow_RewardAction_o *v81; // x8
  ResultListWindow_c *v82; // x0
  float scrollValue; // s0
  bool v84; // w0
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v87; // x21
  struct ResultListWindow_RewardAction_o *v88; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x24
  __int64 playCnt; // x25
  ResultListWindow__StartRewardAction_d__48_o *v91; // x22
  BoxGachaUtility_c *v92; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x22
  UnityEngine_Object_o *v94; // x21
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7

  v4 = this;
  if ( (byte_42E7F5D & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaResultEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BoxGachaUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ResultListWindow_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_18391/*"ef_boxitem_drop_rare"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_18392/*"ef_boxitem_drop_scalable"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_18394/*"ef_boxitem_fall_scalable"*/, v38, v39, v40);
    this = (ResultListWindow__StartRewardAction_d__48_o *)sub_B5D5C4(&StringLiteral_6049/*"EndOpen"*/, v41, v42, v43);
    byte_42E7F5D = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v45 = 0;
      v4->fields.__1__state = -1;
      v4->fields._i_5__2 = 0;
      goto LABEL_6;
    case 1:
      i_5__2 = v4->fields._i_5__2;
      v4->fields.__1__state = -1;
      v45 = i_5__2 + 1;
      v4->fields._i_5__2 = i_5__2 + 1;
LABEL_6:
      rewardAction = v4->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_97;
      if ( v45 < rewardAction->fields.index )
      {
        if ( _4__this )
        {
          maxDrawItemDispWaitTime = _4__this->fields.maxDrawItemDispWaitTime;
          v49 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v49, maxDrawItemDispWaitTime, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v49;
          p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
          sub_B5D560(p__2__current, (System_Int32_array **)v49, v51, v52, v53, v54, v55, v56);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
          return result;
        }
LABEL_97:
        sub_B5D69C(this, method);
      }
      scrollValue = rewardAction->fields.scrollValue;
      if ( scrollValue > 0.0 && rewardAction->fields.playCnt + 1 >= 51 )
      {
        if ( !_4__this )
          goto LABEL_97;
        if ( !_4__this->fields.isLastLineEffectPlay )
        {
          this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.scrollBar;
          if ( !this )
            goto LABEL_97;
          UIProgressBar__set_value((UIProgressBar_o *)this, scrollValue, 0LL);
          rewardAction = v4->fields.rewardAction;
          if ( !rewardAction )
            goto LABEL_97;
          if ( rewardAction->fields.scrollValue >= 1.0 )
          {
            _4__this->fields.isLastLineEffectPlay = 1;
            rewardAction = v4->fields.rewardAction;
            if ( !rewardAction )
              goto LABEL_97;
          }
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_97;
      }
      v84 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, 0LL);
      _4__this->fields.isRare = v84;
      if ( v84 || !_4__this->fields.isSkip )
      {
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.effectRoot;
        if ( !this )
          goto LABEL_97;
        maxPlayCnt = _4__this->fields.maxPlayCnt;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
        }
        this = (ResultListWindow__StartRewardAction_d__48_o *)BoxGachaResultEffectComponent__getEffect(
                                                                (System_String_o *)StringLiteral_18394/*"ef_boxitem_fall_scalable"*/,
                                                                transform,
                                                                0LL);
        if ( !this )
          goto LABEL_97;
        v87 = (UnityEngine_GameObject_o *)this;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v88 = v4->fields.rewardAction;
        if ( !v88 )
          goto LABEL_97;
        resultItemObjList = _4__this->fields.resultItemObjList;
        if ( !resultItemObjList )
          goto LABEL_97;
        playCnt = v88->fields.playCnt;
        v91 = this;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = (ResultListWindow__StartRewardAction_d__48_o *)resultItemObjList->fields._items->m_Items[playCnt];
        if ( !this )
          goto LABEL_97;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
        if ( !v91 )
          goto LABEL_97;
        SyncPositionComponent__SetTarget((SyncPositionComponent_o *)v91, (UnityEngine_Transform_o *)this, 0LL);
        if ( maxPlayCnt >= 11 )
        {
          v92 = BoxGachaUtility_TypeInfo;
          if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v92 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(v87, v92->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        }
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.fallEffectObjList;
        if ( !this )
          goto LABEL_97;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                v87,
                                                                                (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v94 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                          v87,
                                          (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_Object__op_Inequality(
                                                                  ComponentInChildren_Dropdown_DropdownItem,
                                                                  0LL,
                                                                  0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !ComponentInChildren_Dropdown_DropdownItem )
              goto LABEL_97;
            SimpleAnimation__Play_16676044(
              (SimpleAnimation_o *)ComponentInChildren_Dropdown_DropdownItem,
              _4__this->fields.aniName,
              0LL);
          }
          else
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_Object__op_Inequality(v94, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v94 )
                goto LABEL_97;
              UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v94, _4__this->fields.aniName, 0LL);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v96 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v96, itemDropTime, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v96;
      v75 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(v75, (System_Int32_array **)v96, v97, v98, v99, v100, v101, v102);
      v76 = 2;
LABEL_96:
      *(_DWORD *)&v75[-1].fields.isOpenAfter = v76;
      return 1;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_97;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.skipCollider;
      if ( !this )
        goto LABEL_97;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 1, 0LL);
      isRare = _4__this->fields.isRare;
      if ( !_4__this->fields.isSkip )
        goto LABEL_15;
      if ( !_4__this->fields.isRare )
        goto LABEL_37;
      isRare = 1;
LABEL_15:
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.effectRoot;
      if ( isRare )
        v65 = (System_String_o **)&StringLiteral_18391/*"ef_boxitem_drop_rare"*/;
      else
        v65 = (System_String_o **)&StringLiteral_18392/*"ef_boxitem_drop_scalable"*/;
      if ( !this )
        goto LABEL_97;
      v66 = _4__this->fields.maxPlayCnt;
      v67 = *v65;
      v68 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
      }
      this = (ResultListWindow__StartRewardAction_d__48_o *)BoxGachaResultEffectComponent__getEffect(v67, v68, 0LL);
      if ( !this )
        goto LABEL_97;
      v69 = (UnityEngine_GameObject_o *)this;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v70 = v4->fields.rewardAction;
      if ( !v70 )
        goto LABEL_97;
      v71 = _4__this->fields.resultItemObjList;
      if ( !v71 )
        goto LABEL_97;
      v72 = v70->fields.playCnt;
      v73 = this;
      if ( v71->fields._size <= (unsigned int)v72 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (ResultListWindow__StartRewardAction_d__48_o *)v71->fields._items->m_Items[v72];
      if ( !this )
        goto LABEL_97;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
      if ( !v73 )
        goto LABEL_97;
      SyncPositionComponent__SetTarget((SyncPositionComponent_o *)v73, (UnityEngine_Transform_o *)this, 0LL);
      if ( v66 >= 11 )
      {
        v74 = BoxGachaUtility_TypeInfo;
        if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v74 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(v69, v74->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_37;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.dropEffectObjList;
      if ( !this )
        goto LABEL_97;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
LABEL_37:
      v4->fields.__2__current = 0LL;
      v75 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(v75, 0LL, v58, v59, v60, v61, v62, v63);
      v76 = 3;
      goto LABEL_96;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_97;
      v77 = v4->fields.rewardAction;
      if ( !v77 )
        goto LABEL_97;
      v78 = _4__this->fields.resultItemObjList;
      if ( !v78 )
        goto LABEL_97;
      v79 = v77->fields.playCnt;
      if ( v78->fields._size <= (unsigned int)v79 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (ResultListWindow__StartRewardAction_d__48_o *)v78->fields._items->m_Items[v79];
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v80 = v4->fields.rewardAction;
      if ( !v80 )
        goto LABEL_97;
      v80->fields.isEnd = 1;
      if ( _4__this->fields.isDischargeGetEffectItem )
        return 0;
      v81 = v4->fields.rewardAction;
      if ( !v81 )
        goto LABEL_97;
      if ( v81->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
      {
        v82 = ResultListWindow_TypeInfo;
        if ( (BYTE3(ResultListWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ResultListWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
          v82 = ResultListWindow_TypeInfo;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          (System_String_o *)StringLiteral_6049/*"EndOpen"*/,
          v82->static_fields->EFFECT_PLAY_TIME,
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ResultListWindow__StartRewardAction_d__48_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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