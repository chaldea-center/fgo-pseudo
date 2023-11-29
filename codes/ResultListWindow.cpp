void __fastcall ResultListWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC870 & 1) == 0 )
  {
    sub_B16FFC(&ResultListWindow_TypeInfo, v1);
    byte_40FC870 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_40FC86F & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B16FFC(&StringLiteral_18097, v11);
    byte_40FC86F = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_3147190;
  v12 = (System_Int32_array **)StringLiteral_18097;
  this->fields.aniName = (struct System_String_o *)StringLiteral_18097;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.aniName, v12, v2, v3, v4, v5, v6, v7);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fallEffectObjList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dropEffectObjList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_40FC86D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, grid);
    byte_40FC86D = 1;
  }
  if ( !grid )
    goto LABEL_13;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !transform )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
      if ( !v7 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v7, v6, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
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
    sub_B170D4();
  }
}


void __fastcall ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  UnityEngine_Collider_o *v6; // x0
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x20
  signed __int64 size; // x21
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x20
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x20
  signed __int64 v12; // x21
  unsigned __int64 v13; // x22
  UnityEngine_Object_o *v14; // x20

  if ( (byte_40FC86E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FC86E = 1;
  }
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_37;
  if ( !UnityEngine_Collider__get_enabled(skipCollider, 0LL) )
    return;
  v6 = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !v6 )
LABEL_37:
    sub_B170D4();
  UnityEngine_Collider__set_enabled(v6, 0, 0LL);
  fallEffectObjList = this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( fallEffectObjList )
  {
    size = fallEffectObjList->fields._size;
    if ( (int)size >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)fallEffectObjList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v10 = (UnityEngine_Object_o *)fallEffectObjList->fields._items->m_Items[v9];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(v10, 0LL);
        }
        if ( (__int64)++v9 >= size )
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
    v12 = dropEffectObjList->fields._size;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)dropEffectObjList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v14 = (UnityEngine_Object_o *)dropEffectObjList->fields._items->m_Items[v13];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(v14, 0LL);
        }
        if ( (__int64)++v13 >= v12 )
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40FC86B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ResultListWindow_EndClose__, v6);
    byte_40FC86B = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  ResultListWindow__Close_29702576(this, v7, v8);
}


void __fastcall ResultListWindow__Close_29702576(
        ResultListWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FC86C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ResultListWindow_EndClose__, v10);
    byte_40FC86C = 1;
  }
  this->fields.closeCallBack = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallBack,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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

  closeCallBack = this->fields.closeCallBack;
  if ( closeCallBack )
  {
    this->fields.closeCallBack = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(closeCallBack, 0LL);
  }
  ResultListWindow__Init(this, method);
  ResultListWindow__ClearAllGrid(this, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *scrollBar; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UIProgressBar_o *v11; // x0
  System_Action_o *openCallBack; // x20

  if ( (byte_40FC86A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC86A = 1;
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
    v11 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v11 )
      sub_B170D4();
    UIProgressBar__set_value(v11, 1.0, 0LL);
    this->fields.isLastLineEffectPlay = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.openCallBack, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(openCallBack, 0LL);
  }
}


void __fastcall ResultListWindow__Init(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Collider_o *skipCollider; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *fallEffectObjList; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *dropEffectObjList; // x0

  if ( (byte_40FC85F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    byte_40FC85F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
  fallEffectObjList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.fallEffectObjList;
  this->fields.playCnt = 0;
  this->fields.maxPlayCnt = 0;
  this->fields.isRare = 0;
  this->fields.isSkip = 0;
  if ( fallEffectObjList && fallEffectObjList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      fallEffectObjList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  dropEffectObjList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.dropEffectObjList;
  if ( dropEffectObjList && dropEffectObjList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      dropEffectObjList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
        bool isDischargeCostume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x2
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x0
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Int32_array *resultIdList; // x8
  UIProgressBar_o *scrollBar; // x0
  int max_length; // w21
  UnityEngine_Object_o *v49; // x20
  const MethodInfo *v50; // x1
  UnityEngine_Object_o *resultScrollView; // x20
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  const MethodInfo *v54; // x2

  if ( (byte_40FC860 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, resultIds);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    byte_40FC860 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      ResultListWindow__setDispResultListBg(this, 1, v19);
      fallEffectObjList = this->fields.fallEffectObjList;
      if ( fallEffectObjList )
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)fallEffectObjList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
      dropEffectObjList = this->fields.dropEffectObjList;
      if ( dropEffectObjList )
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)dropEffectObjList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
      this->fields.openCallBack = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.openCallBack,
        (System_Int32_array **)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      this->fields.resultIdList = resultIds;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.resultIdList,
        (System_Int32_array **)resultIds,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      this->fields.rareIdxList = rareIdxs;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.rareIdxList,
        (System_Int32_array **)rareIdxs,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      this->fields.baseNoList = baseNos;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseNoList,
        (System_Int32_array **)baseNos,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      this->fields.currentBaseId = baseId;
      this->fields.currentEventId = eventId;
      *(_WORD *)&this->fields.isDischargeCostume = isDischargeCostume;
      if ( resultIds )
      {
        resultIdList = this->fields.resultIdList;
        this->fields.maxPlayCnt = *(_QWORD *)&resultIds->max_length;
        if ( resultIdList )
        {
          scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
          if ( scrollBar )
          {
            max_length = resultIdList->max_length;
            UIProgressBar__set_value(scrollBar, 0.0, 0LL);
            v49 = (UnityEngine_Object_o *)this->fields.scrollBar;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
              goto LABEL_23;
            resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
              goto LABEL_23;
            v52 = (UnityEngine_Component_o *)this->fields.scrollBar;
            if ( v52 )
            {
              v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
              if ( v53 )
              {
                UnityEngine_GameObject__SetActive(v53, max_length > 50, 0LL);
                ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v54);
LABEL_23:
                ResultListWindow__setResultItem(this, v50);
                BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__SetScrollControllEnabled(
        ResultListWindow_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *resultScrollView; // x21
  UnityEngine_Behaviour_o *v6; // x0

  if ( (byte_40FC861 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enabled);
    byte_40FC861 = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(v6, enabled, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartDisp(
        ResultListWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC863 & 1) == 0 )
  {
    sub_B16FFC(&ResultListWindow__StartDisp_d__47_TypeInfo, method);
    byte_40FC863 = 1;
  }
  v6 = sub_B170CC(ResultListWindow__StartDisp_d__47_TypeInfo, method, v2, v3, v4);
  ResultListWindow__StartDisp_d__47___ctor((ResultListWindow__StartDisp_d__47_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FC864 & 1) == 0 )
  {
    sub_B16FFC(&ResultListWindow__StartRewardAction_d__48_TypeInfo, rewardAction);
    byte_40FC864 = 1;
  }
  v7 = sub_B170CC(ResultListWindow__StartRewardAction_d__48_TypeInfo, rewardAction, method, v3, v4);
  ResultListWindow__StartRewardAction_d__48___ctor((ResultListWindow__StartRewardAction_d__48_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = rewardAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)rewardAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ResultListWindow__checkRare(ResultListWindow_o *this, int32_t idx, const MethodInfo *method)
{
  struct System_Int32_array *rareIdxList; // x8
  __int64 v4; // x9
  _BOOL8 v6; // x0
  unsigned __int64 v8; // x21
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = 0;
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
          sub_B17100(v6, *(_QWORD *)&idx, method);
          sub_B170A0();
        }
        v10 = rareIdxList->m_Items[v8 + 1];
        v6 = System_Int32__Equals_38275732((int32_t)&v10, idx, 0LL);
        if ( v6 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_B170D4();
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
  __int64 v3; // x1
  int32_t maxPlayCnt; // w8
  _BOOL4 isDischargeCostume; // w9

  if ( (byte_40FC869 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5953, method);
    sub_B16FFC(&StringLiteral_21920, v3);
    byte_40FC869 = 1;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( this->fields.playCnt >= maxPlayCnt )
  {
    isDischargeCostume = this->fields.isDischargeCostume;
    this->fields.playCnt = 0;
    if ( isDischargeCostume )
    {
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_5953,
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
      (System_String_o *)StringLiteral_21920,
      0.00001,
      0LL);
    if ( !this->fields.isDischargeCostume && this->fields.playCnt == this->fields.maxPlayCnt - 1 )
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
  __int64 v7; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  System_String_o **v9; // x8
  System_String_o *v10; // x20
  UnityEngine_GameObject_o *effectRoot; // x0
  UnityEngine_Transform_o *transform; // x21
  int v13; // w22
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *Effect; // x0
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Transform_o *v18; // x21
  UnityEngine_Transform_o *v19; // x0
  int v20; // s0
  BoxGachaUtility_c *v23; // x0
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x0

  if ( (byte_40FC867 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaResultEffectComponent_TypeInfo, method);
    sub_B16FFC(&BoxGachaUtility_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B16FFC(&StringLiteral_18095, v5);
    sub_B16FFC(&StringLiteral_18094, v6);
    sub_B16FFC(&StringLiteral_22026, v7);
    byte_40FC867 = 1;
  }
  if ( this->fields.isSkip && !this->fields.isRare )
    goto LABEL_32;
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_33;
  UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL);
  if ( this->fields.isRare )
    v9 = (System_String_o **)&StringLiteral_18095;
  else
    v9 = (System_String_o **)&StringLiteral_18094;
  v10 = *v9;
  if ( this->fields.maxPlayCnt < 11 )
  {
    v13 = 0;
LABEL_15:
    Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(this->fields.dispObj, 0LL);
    if ( !Parent )
      goto LABEL_33;
    transform = UnityEngine_Component__get_transform(Parent, 0LL);
    goto LABEL_17;
  }
  if ( this->fields.playCnt >= 31 )
  {
    v13 = 1;
    goto LABEL_15;
  }
  effectRoot = this->fields.effectRoot;
  if ( !effectRoot )
    goto LABEL_33;
  transform = UnityEngine_GameObject__get_transform(effectRoot, 0LL);
  v13 = 1;
LABEL_17:
  if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
  }
  Effect = BoxGachaResultEffectComponent__getEffect(v10, transform, 0LL);
  if ( !Effect )
    goto LABEL_33;
  v16 = Effect;
  v17 = UnityEngine_GameObject__get_transform(Effect, 0LL);
  if ( !this->fields.dispObj )
    goto LABEL_33;
  v18 = v17;
  v19 = UnityEngine_GameObject__get_transform(this->fields.dispObj, 0LL);
  if ( !v19 )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition(v19, 0LL);
  if ( !v18 )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v20, 0LL);
  if ( v13 )
  {
    v23 = BoxGachaUtility_TypeInfo;
    if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v23 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v16, v23->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  if ( !this->fields.isRare )
  {
    dropEffectObjList = this->fields.dropEffectObjList;
    if ( dropEffectObjList )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)dropEffectObjList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      goto LABEL_32;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_32:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22026,
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x20
  __int64 playCnt; // x21
  struct UnityEngine_GameObject_o *v19; // x1
  UnityEngine_GameObject_o **p_dispObj; // x21
  const MethodInfo *v21; // x2
  bool v22; // w0
  const MethodInfo *v23; // x1
  int32_t v24; // w8
  int32_t v25; // w8
  int32_t maxPlayCnt; // w22
  UnityEngine_GameObject_o *effectRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_Transform_o *v30; // x20
  UnityEngine_GameObject_o *Effect; // x0
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x8
  UnityEngine_Transform_o *v35; // x21
  UnityEngine_Transform_o *v36; // x0
  int v37; // s0
  BoxGachaUtility_c *v40; // x0
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_Object_o *v43; // x20

  if ( (byte_40FC866 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaResultEffectComponent_TypeInfo, method);
    sub_B16FFC(&BoxGachaUtility_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_21399, v15);
    sub_B16FFC(&StringLiteral_18097, v16);
    byte_40FC866 = 1;
  }
  resultItemObjList = this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_42;
  playCnt = this->fields.playCnt;
  if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v19 = resultItemObjList->fields._items->m_Items[playCnt];
  p_dispObj = &this->fields.dispObj;
  this->fields.dispObj = v19;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dispObj, (System_Int32_array **)v19, v2, v3, v4, v5, v6, v7);
  v22 = ResultListWindow__checkRare(this, this->fields.playCnt, v21);
  v24 = this->fields.playCnt;
  this->fields.isRare = v22;
  v25 = v24 + 1;
  this->fields.playCnt = v25;
  if ( !v22 && this->fields.isSkip )
  {
    ResultListWindow__showResultItem(this, v23);
    return;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( v25 > 30 || maxPlayCnt <= 10 )
  {
    Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(*p_dispObj, 0LL);
    if ( !Parent )
      goto LABEL_42;
    transform = UnityEngine_Component__get_transform(Parent, 0LL);
  }
  else
  {
    effectRoot = this->fields.effectRoot;
    if ( !effectRoot )
      goto LABEL_42;
    transform = UnityEngine_GameObject__get_transform(effectRoot, 0LL);
  }
  v30 = transform;
  if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
  }
  Effect = BoxGachaResultEffectComponent__getEffect((System_String_o *)StringLiteral_18097, v30, 0LL);
  if ( !Effect )
    goto LABEL_42;
  v32 = Effect;
  v33 = UnityEngine_GameObject__get_transform(Effect, 0LL);
  v34 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_42;
  v35 = v33;
  v36 = UnityEngine_GameObject__get_transform(v34, 0LL);
  if ( !v36 )
    goto LABEL_42;
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_localPosition(v36, 0LL);
  if ( !v35 )
    goto LABEL_42;
  UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v37, 0LL);
  if ( maxPlayCnt >= 11 )
  {
    v40 = BoxGachaUtility_TypeInfo;
    if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v40 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v32, v40->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  fallEffectObjList = this->fields.fallEffectObjList;
  if ( !fallEffectObjList )
LABEL_42:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)fallEffectObjList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  if ( !this->fields.isSkip )
  {
    ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                  v32,
                                                  (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    v43 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                    v32,
                                    (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL) )
    {
      if ( ComponentInChildren_Dropdown_DropdownItem )
      {
        SimpleAnimation__Play_16380456(
          (SimpleAnimation_o *)ComponentInChildren_Dropdown_DropdownItem,
          this->fields.aniName,
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
      if ( !UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
        goto LABEL_41;
      if ( v43 )
      {
        UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v43, this->fields.aniName, 0LL);
        goto LABEL_41;
      }
    }
    goto LABEL_42;
  }
LABEL_41:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_21399,
    this->fields.itemDropTime,
    0LL);
}


void __fastcall ResultListWindow__setDispResultListBg(ResultListWindow_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *firstLineGrid; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *sceLineGrid; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *thrLineGrid; // x0
  UnityEngine_GameObject_o *v10; // x0

  firstLineGrid = (UnityEngine_Component_o *)this->fields.firstLineGrid;
  if ( !firstLineGrid
    || (gameObject = UnityEngine_Component__get_gameObject(firstLineGrid, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL),
        (sceLineGrid = (UnityEngine_Component_o *)this->fields.sceLineGrid) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(sceLineGrid, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v8, isDisp, 0LL),
        (thrLineGrid = (UnityEngine_Component_o *)this->fields.thrLineGrid) == 0LL)
    || (v10 = UnityEngine_Component__get_gameObject(thrLineGrid, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v10, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UIGrid_o *firstResultGrid; // x8
  float cellWidth; // w23
  struct UIGrid_o *sceResultGrid; // x8
  DataManager_c **v27; // x26
  float v28; // w22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w27
  signed __int64 v32; // x20
  UnityEngine_GameObject_o *resultList; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIGrid_o **v35; // x8
  DataManager_c *v36; // x0
  UnityEngine_Component_o *v37; // x22
  BoxGachaBaseMaster_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct System_Int32_array *baseNoList; // x8
  BoxGachaBaseEntity_o *Entity; // x0
  UnityEngine_GameObject_o *resultListItemPrefab; // x24
  BoxGachaBaseEntity_o *v44; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v47; // x22
  UnityEngine_Transform_o *v48; // x24
  int v49; // s0
  const MethodInfo *v52; // x1
  ResultItemComponent_o *Component_srcLineSprite; // x24
  BoxGachaUtility_c *v54; // x8
  struct BoxGachaUtility_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  UnityEngine_Component_o *resultScrollViewResultFrameGrid; // x0
  UnityEngine_GameObject_o *resultListResultFrame; // x25
  DataManager_c **v63; // x21
  UnityEngine_Transform_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x25
  UnityEngine_Transform_o *v67; // x26
  int v68; // s0
  BoxGachaUtility_c *v71; // x0
  srcLineSprite_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **resultScrollView; // x1
  int32_t type; // w8
  GiftEntity_o *DataById; // x0
  const MethodInfo *v82; // x3
  int32_t num; // w2
  EventRewardSetEntity_o *RewardSetData; // x0
  const MethodInfo *v85; // x3
  struct System_Int32_array *v86; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  UIWidget_o *v89; // x0
  float v90; // s0
  double v91; // d0
  UIGrid_o *v92; // x0
  const MethodInfo *v93; // x1
  signed __int64 v94; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_resultItemObjList; // [xsp+10h] [xbp-90h]
  UIGrid_o **p_thrResultGrid; // [xsp+18h] [xbp-88h]
  UIGrid_o **p_sceResultGrid; // [xsp+20h] [xbp-80h]
  GiftMaster_o *v98; // [xsp+28h] [xbp-78h]
  signed __int64 v99; // [xsp+30h] [xbp-70h]
  int v100; // [xsp+3Ch] [xbp-64h]
  UIGrid_o **p_resultScrollViewGrid; // [xsp+40h] [xbp-60h]
  UIGrid_o **p_firstResultGrid; // [xsp+48h] [xbp-58h]
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC862 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaUtility_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_BoxGachaBaseMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_B16FFC(&System_Math_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_12986, v16);
    byte_40FC862 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v17;
  p_resultItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.resultItemObjList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_85;
  cellWidth = firstResultGrid->fields.cellWidth;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_85;
  v27 = &DataManager_TypeInfo;
  v28 = sceResultGrid->fields.cellWidth;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  resultIdList = this->fields.resultIdList;
  v98 = (GiftMaster_o *)Master_WarQuestSelectionMaster;
  if ( !resultIdList )
    goto LABEL_85;
  max_length = resultIdList->max_length;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length >= 1 )
  {
    v32 = 0LL;
    v99 = LODWORD(cellWidth) - 1;
    v94 = LODWORD(v28) + LODWORD(cellWidth) - 1;
    v100 = resultIdList->max_length;
    do
    {
      resultList = this->fields.resultList;
      if ( !resultList )
        goto LABEL_85;
      gameObject = UnityEngine_GameObject__get_gameObject(resultList, 0LL);
      if ( !gameObject )
        goto LABEL_85;
      if ( max_length < 11 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v35 = &this->fields.firstResultGrid;
        if ( v32 > v99 )
        {
          v35 = &this->fields.sceResultGrid;
          if ( v32 > v94 )
            v35 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        v35 = &this->fields.resultScrollViewGrid;
      }
      v36 = *v27;
      v37 = (UnityEngine_Component_o *)*v35;
      if ( (BYTE3((*v27)->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v36);
      v38 = (BoxGachaBaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_85;
      if ( v32 >= (unsigned __int64)baseNoList->max_length )
      {
        sub_B17100(v38, v39, v40);
        sub_B170A0();
      }
      if ( !v38 )
        goto LABEL_85;
      Entity = BoxGachaBaseMaster__GetEntity(v38, this->fields.currentBaseId, baseNoList->m_Items[v32 + 1], 0LL);
      if ( !v37 )
        goto LABEL_85;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v44 = Entity;
      transform = UnityEngine_Component__get_transform(v37, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, resultListItemPrefab, transform, 0LL, 0LL);
      if ( !Object )
        goto LABEL_85;
      v47 = Object;
      v48 = UnityEngine_GameObject__get_transform(Object, 0LL);
      *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_one(0LL);
      if ( !v48 )
        goto LABEL_85;
      UnityEngine_Transform__set_localScale(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
      Component_srcLineSprite = (ResultItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v47,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v54 = BoxGachaUtility_TypeInfo;
      if ( max_length <= 10 )
      {
        if ( (WORD1(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v54 = BoxGachaUtility_TypeInfo;
        }
        p_x = &v54->static_fields->NORMAL_ITEM_SIZE.fields.x;
        p_y = p_x + 1;
        p_z = p_x + 2;
        if ( !Component_srcLineSprite )
          goto LABEL_85;
      }
      else
      {
        if ( (WORD1(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v54 = BoxGachaUtility_TypeInfo;
        }
        static_fields = v54->static_fields;
        p_x = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.x;
        p_y = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.y;
        p_z = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.z;
        if ( !Component_srcLineSprite )
          goto LABEL_85;
      }
      v103.fields.y = *p_y;
      v103.fields.x = *p_x;
      v103.fields.z = *p_z;
      ResultItemComponent__SetItemIconScale(Component_srcLineSprite, v103, v52);
      ResultItemComponent__Clear(Component_srcLineSprite, v59);
      if ( max_length >= 11 )
      {
        resultScrollViewResultFrameGrid = (UnityEngine_Component_o *)this->fields.resultScrollViewResultFrameGrid;
        if ( !resultScrollViewResultFrameGrid )
          goto LABEL_85;
        resultListResultFrame = this->fields.resultListResultFrame;
        v63 = v27;
        v64 = UnityEngine_Component__get_transform(resultScrollViewResultFrameGrid, 0LL);
        v65 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, resultListResultFrame, v64, 0LL, 0LL);
        if ( !v65 )
          goto LABEL_85;
        v66 = v65;
        v67 = UnityEngine_GameObject__get_transform(v65, 0LL);
        *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Vector3__get_one(0LL);
        if ( !v67 )
          goto LABEL_85;
        UnityEngine_Transform__set_localScale(v67, *(UnityEngine_Vector3_o *)&v68, 0LL);
        v71 = BoxGachaUtility_TypeInfo;
        if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v27 = v63;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v71 = BoxGachaUtility_TypeInfo;
          }
        }
        else
        {
          v27 = v63;
        }
        GameObjectExtensions__SetLocalScale(v66, v71->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        v72 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                v47,
                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !v72 )
          goto LABEL_85;
        resultScrollView = (System_Int32_array **)this->fields.resultScrollView;
        v72->fields.mFSM = (struct CStateManager_srcLineSprite__o *)resultScrollView;
        sub_B16F98((BattleServantConfConponent_o *)&v72->fields.mFSM, resultScrollView, v73, v74, v75, v76, v77, v78);
        max_length = v100;
      }
      if ( v44 )
      {
        if ( v44->fields.isRare )
          ResultItemComponent__SetRareItem(Component_srcLineSprite, v60);
        type = v44->fields.type;
        if ( type == 1 )
        {
          if ( !v98 )
            goto LABEL_85;
          DataById = GiftMaster__getDataById(v98, v44->fields.targetId, 0LL);
          if ( DataById )
          {
            if ( DataById->fields.num <= 1 )
              num = 0;
            else
              num = DataById->fields.num;
            ResultItemComponent__Set(Component_srcLineSprite, DataById, num, v82);
            goto LABEL_60;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          RewardSetData = BoxGachaBaseEntity__getRewardSetData(v44, this->fields.currentEventId, 0LL);
          if ( RewardSetData )
          {
            ResultItemComponent__SetExtra(
              Component_srcLineSprite,
              RewardSetData->fields.iconId,
              RewardSetData->fields.bgImageId,
              v85);
LABEL_60:
            UnityEngine_GameObject__SetActive(v47, 0, 0LL);
            if ( !*p_resultItemObjList )
              goto LABEL_85;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              *p_resultItemObjList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
      }
      v86 = this->fields.resultIdList;
      if ( !v86 )
        goto LABEL_85;
      ++v32;
    }
    while ( v32 < (int)v86->max_length );
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
      v89 = (UIWidget_o *)this->fields.adjustSprite;
      if ( v89 )
      {
        v90 = ceilf((float)maxPlayCnt / 10.0);
        if ( v90 == INFINITY )
          v91 = -v90;
        else
          v91 = v90;
        UIWidget__set_height(v89, 60 * (int)v91 + 5, 0LL);
        goto LABEL_77;
      }
LABEL_85:
      sub_B170D4();
    }
  }
LABEL_77:
  if ( !*p_firstResultGrid )
    goto LABEL_85;
  UIGrid__set_repositionNow(*p_firstResultGrid, 1, 0LL);
  if ( !*p_sceResultGrid )
    goto LABEL_85;
  UIGrid__set_repositionNow(*p_sceResultGrid, 1, 0LL);
  if ( !*p_thrResultGrid )
    goto LABEL_85;
  UIGrid__set_repositionNow(*p_thrResultGrid, 1, 0LL);
  if ( !*p_resultScrollViewGrid )
    goto LABEL_85;
  UIGrid__set_repositionNow(*p_resultScrollViewGrid, 1, 0LL);
  v92 = this->fields.resultScrollViewResultFrameGrid;
  if ( !v92 )
    goto LABEL_85;
  UIGrid__set_repositionNow(v92, 1, 0LL);
  if ( max_length < 11 )
    ResultListWindow__showResultEffect(this, v93);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12986,
      0LL);
}


void __fastcall ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_40FC865 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21920, method);
    byte_40FC865 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_21920,
    0.3,
    0LL);
}


void __fastcall ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObj; // x0

  if ( (byte_40FC868 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18276, method);
    byte_40FC868 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(dispObj, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_18276,
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x19
  UnityEngine_WaitForSeconds_o *v21; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  bool result; // w0
  BattleServantConfConponent_o *p_listRewardAction_5__2; // x21
  struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *listRewardAction_5__2; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  unsigned int v39; // w23
  __int64 v40; // x22
  float v41; // s0
  unsigned int v42; // w9
  int maxPlayCnt; // w8
  signed int v44; // w9
  int v45; // w9
  unsigned int v46; // w8
  __int64 v49; // x24
  __int64 v50; // x25
  int size; // w8
  __int64 v52; // x22
  System_Collections_IEnumerator_o *started; // x0
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t v61; // w8
  ResultListWindow_RewardAction_o *v62; // x8
  BattleServantConfConponent_c *klass; // x22
  __int64 v64; // x20
  int namespaze; // w8
  __int64 v66; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v68; // x20
  int v69; // w8
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_Collider_o *skipCollider; // x0
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v73; // x1
  ResultListWindow_c *v74; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_40F7433 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__, v13);
    sub_B16FFC(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo, v14);
    sub_B16FFC(&ResultListWindow_TypeInfo, v15);
    sub_B16FFC(&ResultListWindow_RewardAction_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_5953, v18);
    byte_40F7433 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&this->fields._listRewardAction_5__2;
    listRewardAction_5__2 = this->fields._listRewardAction_5__2;
    this->fields.__1__state = -1;
    if ( listRewardAction_5__2 )
      goto LABEL_38;
    goto LABEL_77;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v21 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v21, 0.2, 0LL);
      this->fields.__2__current = (Il2CppObject *)v21;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  p_listRewardAction_5__2 = (BattleServantConfConponent_o *)&this->fields._listRewardAction_5__2;
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    p_listRewardAction_5__2->klass = (BattleServantConfConponent_c *)v31;
    sub_B16F98(p_listRewardAction_5__2, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
    if ( !_4__this )
      goto LABEL_77;
    v39 = 0;
    while ( (signed int)(v39 + _4__this->fields.playCnt) < _4__this->fields.maxPlayCnt )
    {
      v40 = sub_B170CC(ResultListWindow_RewardAction_TypeInfo, v38, v2, v3, v4);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      if ( !v40 )
        goto LABEL_77;
      *(_DWORD *)(v40 + 16) = v39;
      v41 = 0.0;
      v42 = v39 + _4__this->fields.playCnt;
      *(_DWORD *)(v40 + 20) = v42;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v42 + 1) >= 51 )
      {
        v44 = v42 / 0xA;
        v41 = (float)v44 / (float)((maxPlayCnt - 1) / 10);
        v45 = v44 + 1;
        v46 = maxPlayCnt / 0xAu;
        if ( v41 >= 0.85 || v45 == v46 )
          v41 = 1.0;
      }
      *(float *)(v40 + 24) = v41;
      if ( !p_listRewardAction_5__2->klass )
        goto LABEL_77;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listRewardAction_5__2->klass,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__);
      if ( v39++ > 8 )
        break;
    }
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_77;
    _4__this->fields.playCnt += LODWORD(p_listRewardAction_5__2->klass->_1.namespaze);
    listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)p_listRewardAction_5__2->klass;
    if ( !p_listRewardAction_5__2->klass )
      goto LABEL_77;
    v49 = 0LL;
    v50 = 32LL;
    while ( 1 )
    {
      size = listRewardAction_5__2->fields._size;
      if ( (int)v49 >= size )
        break;
      if ( size <= (unsigned int)v49 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v52 = *(__int64 *)((char *)&listRewardAction_5__2->fields._items->obj.klass + v50);
      if ( listRewardAction_5__2->fields._size <= (unsigned int)v49 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      started = ResultListWindow__StartRewardAction(_4__this, listRewardAction_5__2->fields._items->m_Items[v49], 0LL);
      v54 = (System_Int32_array **)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                     started,
                                     0LL);
      if ( v52 )
      {
        *(_QWORD *)(v52 + 32) = v54;
        sub_B16F98((BattleServantConfConponent_o *)(v52 + 32), v54, v55, v56, v57, v58, v59, v60);
        listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)p_listRewardAction_5__2->klass;
        ++v49;
        v50 += 8LL;
        if ( p_listRewardAction_5__2->klass )
          continue;
      }
      goto LABEL_77;
    }
    if ( !size || size == _4__this->fields.maxPlayCnt )
      goto LABEL_65;
LABEL_38:
    v61 = listRewardAction_5__2->fields._size;
    if ( !v61 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v62 = listRewardAction_5__2->fields._items->m_Items[v61 - 1];
    if ( !v62 )
      goto LABEL_77;
    if ( v62->fields.isEnd )
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
        v64 = 0LL;
        while ( 1 )
        {
          namespaze = (int)klass->_1.namespaze;
          if ( (int)v64 >= namespaze )
            break;
          if ( namespaze <= (unsigned int)v64 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v66 = *(_QWORD *)&klass->_1.name[8 * v64 + 32];
          if ( v66 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_34804984(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              *(UnityEngine_Coroutine_o **)(v66 + 32),
              0LL);
            klass = p_listRewardAction_5__2->klass;
            ++v64;
            if ( p_listRewardAction_5__2->klass )
              continue;
          }
          goto LABEL_77;
        }
        resultItemObjList = _4__this->fields.resultItemObjList;
        if ( resultItemObjList )
        {
          v68 = 0LL;
          while ( 1 )
          {
            v69 = resultItemObjList->fields._size;
            if ( (int)v68 >= v69 )
              break;
            if ( v69 <= (unsigned int)v68 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v70 = resultItemObjList->fields._items->m_Items[v68];
            if ( v70 )
            {
              UnityEngine_GameObject__SetActive(v70, 1, 0LL);
              resultItemObjList = _4__this->fields.resultItemObjList;
              ++v68;
              if ( resultItemObjList )
                continue;
            }
            goto LABEL_77;
          }
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          ResultListWindow__EndOpen(_4__this, 0LL);
LABEL_65:
          skipCollider = (UnityEngine_Collider_o *)_4__this->fields.skipCollider;
          if ( skipCollider )
          {
            UnityEngine_Collider__set_enabled(skipCollider, 0, 0LL);
            if ( _4__this->fields.isDischargeCostume )
            {
              EFFECT_PLAY_TIME = 0.5;
              v73 = (System_String_o *)StringLiteral_5953;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v74 = ResultListWindow_TypeInfo;
              if ( (BYTE3(ResultListWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v74 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v74->static_fields->EFFECT_PLAY_TIME;
              v73 = (System_String_o *)StringLiteral_5953;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v73, EFFECT_PLAY_TIME, 0LL);
            return 0;
          }
        }
      }
LABEL_77:
      sub_B170D4();
    }
    p_listRewardAction_5__2->klass = 0LL;
    sub_B16F98(p_listRewardAction_5__2, 0LL, v2, v3, v4, v5, v6, v7);
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ResultListWindow__StartDisp_d__47_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct ResultListWindow_o *_4__this; // x20
  int32_t v20; // w9
  int32_t i_5__2; // w8
  struct ResultListWindow_RewardAction_o *rewardAction; // x8
  float maxDrawItemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v24; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  bool result; // w0
  UnityEngine_Collider_o *skipCollider; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int isRare; // w8
  UnityEngine_GameObject_o *v41; // x0
  System_String_o **v42; // x8
  int v43; // w23
  System_String_o *v44; // x21
  UnityEngine_Transform_o *v45; // x22
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x21
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v48; // x0
  struct ResultListWindow_RewardAction_o *v49; // x8
  struct System_Collections_Generic_List_GameObject__o *v50; // x24
  __int64 v51; // x25
  SyncPositionComponent_o *v52; // x22
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Transform_o *v54; // x0
  BoxGachaUtility_c *v55; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *dropEffectObjList; // x0
  Il2CppObject **v57; // x19
  int v58; // w8
  struct ResultListWindow_RewardAction_o *v59; // x8
  struct System_Collections_Generic_List_GameObject__o *v60; // x21
  __int64 v61; // x22
  UnityEngine_GameObject_o *v62; // x0
  struct ResultListWindow_RewardAction_o *v63; // x8
  struct ResultListWindow_RewardAction_o *v64; // x8
  ResultListWindow_c *v65; // x0
  float scrollValue; // s0
  bool v67; // w0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  UnityEngine_GameObject_o *effectRoot; // x0
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *Effect; // x0
  UnityEngine_GameObject_o *v76; // x21
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v77; // x0
  struct ResultListWindow_RewardAction_o *v78; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x24
  __int64 playCnt; // x25
  SyncPositionComponent_o *v81; // x22
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_Transform_o *v83; // x0
  BoxGachaUtility_c *v84; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *fallEffectObjList; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x22
  UnityEngine_Animation_o *v87; // x21
  UIProgressBar_o *scrollBar; // x0
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v90; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7

  if ( (byte_40F7434 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaResultEffectComponent_TypeInfo, method);
    sub_B16FFC(&BoxGachaUtility_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&ResultListWindow_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_18095, v15);
    sub_B16FFC(&StringLiteral_18096, v16);
    sub_B16FFC(&StringLiteral_18098, v17);
    sub_B16FFC(&StringLiteral_5953, v18);
    byte_40F7434 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      v20 = 0;
      this->fields.__1__state = -1;
      this->fields._i_5__2 = 0;
      goto LABEL_6;
    case 1:
      i_5__2 = this->fields._i_5__2;
      this->fields.__1__state = -1;
      v20 = i_5__2 + 1;
      this->fields._i_5__2 = i_5__2 + 1;
LABEL_6:
      rewardAction = this->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_97;
      if ( v20 < rewardAction->fields.index )
      {
        if ( _4__this )
        {
          maxDrawItemDispWaitTime = _4__this->fields.maxDrawItemDispWaitTime;
          v24 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
          UnityEngine_WaitForSeconds___ctor(v24, maxDrawItemDispWaitTime, 0LL);
          this->fields.__2__current = (Il2CppObject *)v24;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(
            (BattleServantConfConponent_o *)p__2__current,
            (System_Int32_array **)v24,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_97:
        sub_B170D4();
      }
      scrollValue = rewardAction->fields.scrollValue;
      if ( scrollValue > 0.0 && rewardAction->fields.playCnt + 1 >= 51 )
      {
        if ( !_4__this )
          goto LABEL_97;
        if ( !_4__this->fields.isLastLineEffectPlay )
        {
          scrollBar = (UIProgressBar_o *)_4__this->fields.scrollBar;
          if ( !scrollBar )
            goto LABEL_97;
          UIProgressBar__set_value(scrollBar, scrollValue, 0LL);
          rewardAction = this->fields.rewardAction;
          if ( !rewardAction )
            goto LABEL_97;
          if ( rewardAction->fields.scrollValue >= 1.0 )
          {
            _4__this->fields.isLastLineEffectPlay = 1;
            rewardAction = this->fields.rewardAction;
            if ( !rewardAction )
              goto LABEL_97;
          }
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_97;
      }
      v67 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, 0LL);
      _4__this->fields.isRare = v67;
      if ( v67 || !_4__this->fields.isSkip )
      {
        effectRoot = _4__this->fields.effectRoot;
        if ( !effectRoot )
          goto LABEL_97;
        maxPlayCnt = _4__this->fields.maxPlayCnt;
        transform = UnityEngine_GameObject__get_transform(effectRoot, 0LL);
        if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
        }
        Effect = BoxGachaResultEffectComponent__getEffect((System_String_o *)StringLiteral_18098, transform, 0LL);
        if ( !Effect )
          goto LABEL_97;
        v76 = Effect;
        v77 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                Effect,
                (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v78 = this->fields.rewardAction;
        if ( !v78 )
          goto LABEL_97;
        resultItemObjList = _4__this->fields.resultItemObjList;
        if ( !resultItemObjList )
          goto LABEL_97;
        playCnt = v78->fields.playCnt;
        v81 = (SyncPositionComponent_o *)v77;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v82 = resultItemObjList->fields._items->m_Items[playCnt];
        if ( !v82 )
          goto LABEL_97;
        v83 = UnityEngine_GameObject__get_transform(v82, 0LL);
        if ( !v81 )
          goto LABEL_97;
        SyncPositionComponent__SetTarget(v81, v83, 0LL);
        if ( maxPlayCnt >= 11 )
        {
          v84 = BoxGachaUtility_TypeInfo;
          if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v84 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(v76, v84->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        }
        fallEffectObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.fallEffectObjList;
        if ( !fallEffectObjList )
          goto LABEL_97;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          fallEffectObjList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v76,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v87 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                             v76,
                                             (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(
                 (UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem,
                 0LL,
                 0LL) )
          {
            if ( !ComponentInChildren_Dropdown_DropdownItem )
              goto LABEL_97;
            SimpleAnimation__Play_16380456(
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
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v87, 0LL, 0LL) )
            {
              if ( !v87 )
                goto LABEL_97;
              UnityEngine_Animation__Play_49744236(v87, _4__this->fields.aniName, 0LL);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v90 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, v68, v69, v70, v71);
      UnityEngine_WaitForSeconds___ctor(v90, itemDropTime, 0LL);
      this->fields.__2__current = (Il2CppObject *)v90;
      v57 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v57, (System_Int32_array **)v90, v91, v92, v93, v94, v95, v96);
      v58 = 2;
LABEL_96:
      *((_DWORD *)v57 - 2) = v58;
      return 1;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_97;
      skipCollider = (UnityEngine_Collider_o *)_4__this->fields.skipCollider;
      if ( !skipCollider )
        goto LABEL_97;
      UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL);
      isRare = _4__this->fields.isRare;
      if ( !_4__this->fields.isSkip )
        goto LABEL_15;
      if ( !_4__this->fields.isRare )
        goto LABEL_37;
      isRare = 1;
LABEL_15:
      v41 = _4__this->fields.effectRoot;
      if ( isRare )
        v42 = (System_String_o **)&StringLiteral_18095;
      else
        v42 = (System_String_o **)&StringLiteral_18096;
      if ( !v41 )
        goto LABEL_97;
      v43 = _4__this->fields.maxPlayCnt;
      v44 = *v42;
      v45 = UnityEngine_GameObject__get_transform(v41, 0LL);
      if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
      }
      v46 = BoxGachaResultEffectComponent__getEffect(v44, v45, 0LL);
      if ( !v46 )
        goto LABEL_97;
      v47 = v46;
      v48 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
              v46,
              (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v49 = this->fields.rewardAction;
      if ( !v49 )
        goto LABEL_97;
      v50 = _4__this->fields.resultItemObjList;
      if ( !v50 )
        goto LABEL_97;
      v51 = v49->fields.playCnt;
      v52 = (SyncPositionComponent_o *)v48;
      if ( v50->fields._size <= (unsigned int)v51 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v53 = v50->fields._items->m_Items[v51];
      if ( !v53 )
        goto LABEL_97;
      v54 = UnityEngine_GameObject__get_transform(v53, 0LL);
      if ( !v52 )
        goto LABEL_97;
      SyncPositionComponent__SetTarget(v52, v54, 0LL);
      if ( v43 >= 11 )
      {
        v55 = BoxGachaUtility_TypeInfo;
        if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v55 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(v47, v55->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_37;
      dropEffectObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.dropEffectObjList;
      if ( !dropEffectObjList )
        goto LABEL_97;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        dropEffectObjList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
LABEL_37:
      this->fields.__2__current = 0LL;
      v57 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v57, 0LL, v34, v35, v36, v37, v38, v39);
      v58 = 3;
      goto LABEL_96;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_97;
      v59 = this->fields.rewardAction;
      if ( !v59 )
        goto LABEL_97;
      v60 = _4__this->fields.resultItemObjList;
      if ( !v60 )
        goto LABEL_97;
      v61 = v59->fields.playCnt;
      if ( v60->fields._size <= (unsigned int)v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v62 = v60->fields._items->m_Items[v61];
      if ( !v62 )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive(v62, 1, 0LL);
      v63 = this->fields.rewardAction;
      if ( !v63 )
        goto LABEL_97;
      v63->fields.isEnd = 1;
      if ( _4__this->fields.isDischargeCostume )
        return 0;
      v64 = this->fields.rewardAction;
      if ( !v64 )
        goto LABEL_97;
      if ( v64->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
      {
        v65 = ResultListWindow_TypeInfo;
        if ( (BYTE3(ResultListWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ResultListWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
          v65 = ResultListWindow_TypeInfo;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          (System_String_o *)StringLiteral_5953,
          v65->static_fields->EFFECT_PLAY_TIME,
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ResultListWindow__StartRewardAction_d__48_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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