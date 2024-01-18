void __fastcall ResultListWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418BB91 & 1) == 0 )
  {
    sub_B2C35C(&ResultListWindow_TypeInfo, v1);
    byte_418BB91 = 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_418BB90 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B2C35C(&StringLiteral_18165/*"ef_boxitem_fall"*/, v11);
    byte_418BB90 = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_31B47C0;
  v12 = (System_Int32_array **)StringLiteral_18165/*"ef_boxitem_fall"*/;
  this->fields.aniName = (struct System_String_o *)StringLiteral_18165/*"ef_boxitem_fall"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.aniName, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fallEffectObjList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dropEffectObjList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_418BB8E & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, grid);
    byte_418BB8E = 1;
  }
  if ( !grid )
    goto LABEL_13;
  this = (ResultListWindow_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)grid, 0LL);
  if ( !this )
    goto LABEL_13;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)this, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 )
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyObject(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_B2C434(this, grid);
  }
}


void __fastcall ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_BoxCollider_o *skipCollider; // x0
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x20
  signed __int64 size; // x21
  unsigned __int64 v8; // x22
  UnityEngine_Object_o *v9; // x20
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x20
  signed __int64 v11; // x21
  unsigned __int64 v12; // x22
  UnityEngine_Object_o *v13; // x20

  if ( (byte_418BB8F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_418BB8F = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_37;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0LL) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_37:
    sub_B2C434(skipCollider, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0LL);
  fallEffectObjList = this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( fallEffectObjList )
  {
    size = fallEffectObjList->fields._size;
    if ( (int)size >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)fallEffectObjList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v9 = (UnityEngine_Object_o *)fallEffectObjList->fields._items->m_Items[v8];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        skipCollider = (struct UnityEngine_BoxCollider_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
        if ( ((unsigned __int8)skipCollider & 1) != 0 )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35314896(v9, 0LL);
        }
        if ( (__int64)++v8 >= size )
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
    v11 = dropEffectObjList->fields._size;
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)dropEffectObjList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v13 = (UnityEngine_Object_o *)dropEffectObjList->fields._items->m_Items[v12];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        skipCollider = (struct UnityEngine_BoxCollider_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
        if ( ((unsigned __int8)skipCollider & 1) != 0 )
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35314896(v13, 0LL);
        }
        if ( (__int64)++v12 >= v11 )
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
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_418BB8C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ResultListWindow_EndClose__, v3);
    byte_418BB8C = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  ResultListWindow__Close_32892568(this, v4, v5);
}


void __fastcall ResultListWindow__Close_32892568(
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
  System_Action_o *v11; // x20

  if ( (byte_418BB8D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ResultListWindow_EndClose__, v10);
    byte_418BB8D = 1;
  }
  this->fields.closeCallBack = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallBack,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallBack, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(closeCallBack, 0LL);
  }
  ResultListWindow__Init(this, method);
  ResultListWindow__ClearAllGrid(this, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v12);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UIProgressBar_o *v12; // x0
  System_Action_o *openCallBack; // x20

  if ( (byte_418BB8B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418BB8B = 1;
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
    v12 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v12 )
      sub_B2C434(0LL, v5);
    UIProgressBar__set_value(v12, 1.0, 0LL);
    this->fields.isLastLineEffectPlay = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.openCallBack, 0LL, v6, v7, v8, v9, v10, v11);
    System_Action__Invoke(openCallBack, 0LL);
  }
}


void __fastcall ResultListWindow__Init(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *fallEffectObjList; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *dropEffectObjList; // x0

  if ( (byte_418BB80 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    byte_418BB80 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.skipCollider) == 0LL) )
  {
    sub_B2C434(gameObject, v5);
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
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  dropEffectObjList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.dropEffectObjList;
  if ( dropEffectObjList && dropEffectObjList->fields._size >= 1 )
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      dropEffectObjList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x0
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w21
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Object_o *resultScrollView; // x20
  const MethodInfo *v51; // x2

  if ( (byte_418BB81 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, resultIds);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    byte_418BB81 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      ResultListWindow__setDispResultListBg(this, 1, v20);
      fallEffectObjList = this->fields.fallEffectObjList;
      if ( fallEffectObjList )
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)fallEffectObjList,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
      dropEffectObjList = this->fields.dropEffectObjList;
      if ( dropEffectObjList )
        System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)dropEffectObjList,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
      this->fields.openCallBack = callback;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.openCallBack,
        (System_Int32_array **)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      this->fields.resultIdList = resultIds;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.resultIdList,
        (System_Int32_array **)resultIds,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      this->fields.rareIdxList = rareIdxs;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.rareIdxList,
        (System_Int32_array **)rareIdxs,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      this->fields.baseNoList = baseNos;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.baseNoList,
        (System_Int32_array **)baseNos,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
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
                ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v51);
LABEL_23:
                ResultListWindow__setResultItem(this, v19);
                BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_B2C434(gameObject, v19);
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

  if ( (byte_418BB82 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enabled);
    byte_418BB82 = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartDisp(
        ResultListWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418BB84 & 1) == 0 )
  {
    sub_B2C35C(&ResultListWindow__StartDisp_d__47_TypeInfo, method);
    byte_418BB84 = 1;
  }
  v3 = sub_B2C42C(ResultListWindow__StartDisp_d__47_TypeInfo);
  ResultListWindow__StartDisp_d__47___ctor((ResultListWindow__StartDisp_d__47_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_418BB85 & 1) == 0 )
  {
    sub_B2C35C(&ResultListWindow__StartRewardAction_d__48_TypeInfo, rewardAction);
    byte_418BB85 = 1;
  }
  v5 = sub_B2C42C(ResultListWindow__StartRewardAction_d__48_TypeInfo);
  ResultListWindow__StartRewardAction_d__48___ctor((ResultListWindow__StartRewardAction_d__48_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)rewardAction,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
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
          v10 = sub_B2C460(v6);
          sub_B2C400(v10, 0LL);
        }
        v12 = rareIdxList->m_Items[v8 + 1];
        v6 = System_Int32__Equals_38381340((int32_t)&v12, idx, 0LL);
        if ( v6 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_B2C434(v6, v9);
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
  _BOOL4 isDischargeGetEffectItem; // w9

  if ( (byte_418BB8A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5970/*"EndOpen"*/, method);
    sub_B2C35C(&StringLiteral_22012/*"setDisp"*/, v3);
    byte_418BB8A = 1;
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
        (System_String_o *)StringLiteral_5970/*"EndOpen"*/,
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
      (System_String_o *)StringLiteral_22012/*"setDisp"*/,
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
  __int64 v7; // x1
  UnityEngine_Collider_o *skipCollider; // x0
  System_String_o **v9; // x8
  System_String_o *v10; // x20
  UnityEngine_Transform_o *transform; // x21
  int v12; // w22
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *v14; // x21
  int v15; // s0
  BoxGachaUtility_c *v18; // x0

  if ( (byte_418BB88 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaResultEffectComponent_TypeInfo, method);
    sub_B2C35C(&BoxGachaUtility_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_B2C35C(&StringLiteral_18163/*"ef_boxitem_drop_rare"*/, v5);
    sub_B2C35C(&StringLiteral_18162/*"ef_boxitem_drop"*/, v6);
    sub_B2C35C(&StringLiteral_22118/*"showResultItem"*/, v7);
    byte_418BB88 = 1;
  }
  if ( this->fields.isSkip && !this->fields.isRare )
    goto LABEL_32;
  skipCollider = (UnityEngine_Collider_o *)this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_33;
  UnityEngine_Collider__set_enabled(skipCollider, 1, 0LL);
  if ( this->fields.isRare )
    v9 = (System_String_o **)&StringLiteral_18163/*"ef_boxitem_drop_rare"*/;
  else
    v9 = (System_String_o **)&StringLiteral_18162/*"ef_boxitem_drop"*/;
  v10 = *v9;
  if ( this->fields.maxPlayCnt < 11 )
  {
    v12 = 0;
LABEL_15:
    skipCollider = (UnityEngine_Collider_o *)GameObjectExtensions__GetParent(this->fields.dispObj, 0LL);
    if ( !skipCollider )
      goto LABEL_33;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skipCollider, 0LL);
    goto LABEL_17;
  }
  if ( this->fields.playCnt >= 31 )
  {
    v12 = 1;
    goto LABEL_15;
  }
  skipCollider = (UnityEngine_Collider_o *)this->fields.effectRoot;
  if ( !skipCollider )
    goto LABEL_33;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skipCollider, 0LL);
  v12 = 1;
LABEL_17:
  if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
  }
  skipCollider = (UnityEngine_Collider_o *)BoxGachaResultEffectComponent__getEffect(v10, transform, 0LL);
  if ( !skipCollider )
    goto LABEL_33;
  v13 = (UnityEngine_GameObject_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)skipCollider,
                                             0LL);
  if ( !this->fields.dispObj )
    goto LABEL_33;
  v14 = (UnityEngine_Transform_o *)skipCollider;
  skipCollider = (UnityEngine_Collider_o *)UnityEngine_GameObject__get_transform(this->fields.dispObj, 0LL);
  if ( !skipCollider )
    goto LABEL_33;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)skipCollider,
                                     0LL);
  if ( !v14 )
    goto LABEL_33;
  UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
  if ( v12 )
  {
    v18 = BoxGachaUtility_TypeInfo;
    if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v18 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v13, v18->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  if ( !this->fields.isRare )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.dropEffectObjList;
    if ( skipCollider )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skipCollider,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
      goto LABEL_32;
    }
LABEL_33:
    sub_B2C434(skipCollider, method);
  }
LABEL_32:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22118/*"showResultItem"*/,
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
  System_Int32_array **v19; // x1
  UnityEngine_GameObject_o **p_dispObj; // x21
  const MethodInfo *v21; // x2
  bool v22; // w0
  int32_t v23; // w8
  int v24; // w8
  int maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v27; // x20
  UnityEngine_GameObject_o *v28; // x20
  UnityEngine_GameObject_o *v29; // x8
  UnityEngine_Transform_o *v30; // x21
  int v31; // s0
  BoxGachaUtility_c *v34; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_Object_o *v36; // x20

  v8 = this;
  if ( (byte_418BB87 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaResultEffectComponent_TypeInfo, method);
    sub_B2C35C(&BoxGachaUtility_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_21491/*"playEffectDrop"*/, v15);
    this = (ResultListWindow_o *)sub_B2C35C(&StringLiteral_18165/*"ef_boxitem_fall"*/, v16);
    byte_418BB87 = 1;
  }
  resultItemObjList = v8->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_42;
  playCnt = v8->fields.playCnt;
  if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v19 = (System_Int32_array **)resultItemObjList->fields._items->m_Items[playCnt];
  p_dispObj = &v8->fields.dispObj;
  v8->fields.dispObj = (struct UnityEngine_GameObject_o *)v19;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.dispObj, v19, v2, v3, v4, v5, v6, v7);
  v22 = ResultListWindow__checkRare(v8, v8->fields.playCnt, v21);
  v23 = v8->fields.playCnt;
  v8->fields.isRare = v22;
  v24 = v23 + 1;
  v8->fields.playCnt = v24;
  if ( !v22 && v8->fields.isSkip )
  {
    ResultListWindow__showResultItem(v8, method);
    return;
  }
  maxPlayCnt = v8->fields.maxPlayCnt;
  if ( v24 > 30 || maxPlayCnt <= 10 )
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
  v27 = transform;
  if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
  }
  this = (ResultListWindow_o *)BoxGachaResultEffectComponent__getEffect(
                                 (System_String_o *)StringLiteral_18165/*"ef_boxitem_fall"*/,
                                 v27,
                                 0LL);
  if ( !this )
    goto LABEL_42;
  v28 = (UnityEngine_GameObject_o *)this;
  this = (ResultListWindow_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v29 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_42;
  v30 = (UnityEngine_Transform_o *)this;
  this = (ResultListWindow_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
  if ( !this )
    goto LABEL_42;
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_42;
  UnityEngine_Transform__set_localPosition(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
  if ( maxPlayCnt >= 11 )
  {
    v34 = BoxGachaUtility_TypeInfo;
    if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v34 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v28, v34->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  this = (ResultListWindow_o *)v8->fields.fallEffectObjList;
  if ( !this )
LABEL_42:
    sub_B2C434(this, method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
  if ( !v8->fields.isSkip )
  {
    ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                          v28,
                                                                          (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    v36 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                    v28,
                                    (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
        SimpleAnimation__Play_16486620(
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
      this = (ResultListWindow_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_41;
      if ( v36 )
      {
        UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v36, v8->fields.aniName, 0LL);
        goto LABEL_41;
      }
    }
    goto LABEL_42;
  }
LABEL_41:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)v8,
    (System_String_o *)StringLiteral_21491/*"playEffectDrop"*/,
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
    sub_B2C434(firstLineGrid, isDisp);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  char *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v22; // x1
  struct UIGrid_o *firstResultGrid; // x8
  float cellWidth; // w23
  struct UIGrid_o *sceResultGrid; // x8
  DataManager_c **v26; // x26
  float v27; // w22
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w27
  signed __int64 v30; // x20
  struct UIGrid_o **v31; // x8
  DataManager_c *v32; // x0
  UnityEngine_Component_o *v33; // x22
  struct System_Int32_array *baseNoList; // x8
  UnityEngine_GameObject_o *resultListItemPrefab; // x24
  BoxGachaBaseEntity_o *v36; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v38; // x22
  UnityEngine_Transform_o *v39; // x24
  int v40; // s0
  ResultItemComponent_o *v43; // x24
  BoxGachaUtility_c *v44; // x8
  struct BoxGachaUtility_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  const MethodInfo *v49; // x1
  UnityEngine_GameObject_o *resultListResultFrame; // x25
  DataManager_c **v51; // x21
  UnityEngine_Transform_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x25
  UnityEngine_Transform_o *v54; // x26
  int v55; // s0
  BoxGachaUtility_c *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **resultScrollView; // x1
  int32_t type; // w8
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Int32_array *v70; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  float v73; // s0
  double v74; // d0
  const MethodInfo *v75; // x1
  __int64 v76; // x0
  signed __int64 v77; // [xsp+8h] [xbp-98h]
  struct System_Collections_Generic_List_GameObject__o **p_resultItemObjList; // [xsp+10h] [xbp-90h]
  struct UIGrid_o **p_thrResultGrid; // [xsp+18h] [xbp-88h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+20h] [xbp-80h]
  GiftMaster_o *v81; // [xsp+28h] [xbp-78h]
  signed __int64 v82; // [xsp+30h] [xbp-70h]
  int v83; // [xsp+3Ch] [xbp-64h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+40h] [xbp-60h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+48h] [xbp-58h]
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418BB83 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaUtility_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_BoxGachaBaseMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    sub_B2C35C(&System_Math_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_13042/*"StartDisp"*/, v13);
    byte_418BB83 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v14;
  p_resultItemObjList = &this->fields.resultItemObjList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resultItemObjList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_85;
  cellWidth = firstResultGrid->fields.cellWidth;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_85;
  v26 = &DataManager_TypeInfo;
  v27 = sceResultGrid->fields.cellWidth;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  resultIdList = this->fields.resultIdList;
  v81 = (GiftMaster_o *)Master_WarQuestSelectionMaster;
  if ( !resultIdList )
    goto LABEL_85;
  max_length = resultIdList->max_length;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length >= 1 )
  {
    v30 = 0LL;
    v82 = LODWORD(cellWidth) - 1;
    v77 = LODWORD(v27) + LODWORD(cellWidth) - 1;
    v83 = resultIdList->max_length;
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
        v31 = &this->fields.firstResultGrid;
        if ( v30 > v82 )
        {
          v31 = &this->fields.sceResultGrid;
          if ( v30 > v77 )
            v31 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
        v31 = &this->fields.resultScrollViewGrid;
      }
      v32 = *v26;
      v33 = (UnityEngine_Component_o *)*v31;
      if ( (BYTE3((*v26)->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v32);
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_85;
      if ( v30 >= (unsigned __int64)baseNoList->max_length )
      {
        v76 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v76, 0LL);
      }
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      Master_WarQuestSelectionMaster = (char *)BoxGachaBaseMaster__GetEntity(
                                                 (BoxGachaBaseMaster_o *)Master_WarQuestSelectionMaster,
                                                 this->fields.currentBaseId,
                                                 baseNoList->m_Items[v30 + 1],
                                                 0LL);
      if ( !v33 )
        goto LABEL_85;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v36 = (BoxGachaBaseEntity_o *)Master_WarQuestSelectionMaster;
      transform = UnityEngine_Component__get_transform(v33, 0LL);
      Master_WarQuestSelectionMaster = (char *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 resultListItemPrefab,
                                                 transform,
                                                 0LL,
                                                 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_85;
      v38 = (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster;
      v39 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0LL);
      *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL);
      if ( !v39 )
        goto LABEL_85;
      UnityEngine_Transform__set_localScale(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
      Master_WarQuestSelectionMaster = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v38,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v43 = (ResultItemComponent_o *)Master_WarQuestSelectionMaster;
      v44 = BoxGachaUtility_TypeInfo;
      if ( max_length <= 10 )
      {
        if ( (WORD1(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v44 = BoxGachaUtility_TypeInfo;
        }
        p_x = &v44->static_fields->NORMAL_ITEM_SIZE.fields.x;
        p_y = p_x + 1;
        p_z = p_x + 2;
        if ( !v43 )
          goto LABEL_85;
      }
      else
      {
        if ( (WORD1(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v44 = BoxGachaUtility_TypeInfo;
        }
        static_fields = v44->static_fields;
        p_x = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.x;
        p_y = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.y;
        p_z = &static_fields->CHANGE_MAX_ITEM_SIZE.fields.z;
        if ( !v43 )
          goto LABEL_85;
      }
      v86.fields.y = *p_y;
      v86.fields.x = *p_x;
      v86.fields.z = *p_z;
      ResultItemComponent__SetItemIconScale(v43, v86, v22);
      ResultItemComponent__Clear(v43, v49);
      if ( max_length >= 11 )
      {
        Master_WarQuestSelectionMaster = (char *)this->fields.resultScrollViewResultFrameGrid;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_85;
        resultListResultFrame = this->fields.resultListResultFrame;
        v51 = v26;
        v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
        Master_WarQuestSelectionMaster = (char *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   resultListResultFrame,
                                                   v52,
                                                   0LL,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_85;
        v53 = (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster;
        v54 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0LL);
        *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_one(0LL);
        if ( !v54 )
          goto LABEL_85;
        UnityEngine_Transform__set_localScale(v54, *(UnityEngine_Vector3_o *)&v55, 0LL);
        v58 = BoxGachaUtility_TypeInfo;
        if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v26 = v51;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v58 = BoxGachaUtility_TypeInfo;
          }
        }
        else
        {
          v26 = v51;
        }
        GameObjectExtensions__SetLocalScale(v53, v58->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        Master_WarQuestSelectionMaster = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v38,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_85;
        resultScrollView = (System_Int32_array **)this->fields.resultScrollView;
        *((_QWORD *)Master_WarQuestSelectionMaster + 3) = resultScrollView;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(Master_WarQuestSelectionMaster + 24),
          resultScrollView,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        max_length = v83;
      }
      if ( v36 )
      {
        if ( v36->fields.isRare )
          ResultItemComponent__SetRareItem(v43, v22);
        type = v36->fields.type;
        if ( type == 1 )
        {
          Master_WarQuestSelectionMaster = (char *)v81;
          if ( !v81 )
            goto LABEL_85;
          Master_WarQuestSelectionMaster = (char *)GiftMaster__getDataById(v81, v36->fields.targetId, 0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            if ( *((int *)Master_WarQuestSelectionMaster + 7) <= 1 )
              v68 = 0;
            else
              v68 = *((_DWORD *)Master_WarQuestSelectionMaster + 7);
            ResultItemComponent__Set(v43, (GiftEntity_o *)Master_WarQuestSelectionMaster, v68, v67);
            goto LABEL_60;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          Master_WarQuestSelectionMaster = (char *)BoxGachaBaseEntity__getRewardSetData(
                                                     v36,
                                                     this->fields.currentEventId,
                                                     0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            ResultItemComponent__SetExtra(
              v43,
              *((_DWORD *)Master_WarQuestSelectionMaster + 7),
              *((_DWORD *)Master_WarQuestSelectionMaster + 12),
              v69);
LABEL_60:
            UnityEngine_GameObject__SetActive(v38, 0, 0LL);
            Master_WarQuestSelectionMaster = (char *)*p_resultItemObjList;
            if ( !*p_resultItemObjList )
              goto LABEL_85;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
          }
        }
      }
      v70 = this->fields.resultIdList;
      if ( !v70 )
        goto LABEL_85;
      ++v30;
    }
    while ( v30 < (int)v70->max_length );
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
        v73 = ceilf((float)maxPlayCnt / 10.0);
        if ( v73 == INFINITY )
          v74 = -v73;
        else
          v74 = v73;
        UIWidget__set_height((UIWidget_o *)Master_WarQuestSelectionMaster, 60 * (int)v74 + 5, 0LL);
        goto LABEL_77;
      }
LABEL_85:
      sub_B2C434(Master_WarQuestSelectionMaster, v22);
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
    ResultListWindow__showResultEffect(this, v75);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13042/*"StartDisp"*/,
      0LL);
}


void __fastcall ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_418BB86 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22012/*"setDisp"*/, method);
    byte_418BB86 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22012/*"setDisp"*/,
    0.3,
    0LL);
}


void __fastcall ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObj; // x0

  if ( (byte_418BB89 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18345/*"endDisp"*/, method);
    byte_418BB89 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_18345/*"endDisp"*/,
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
  ResultListWindow__StartDisp_d__47_o *v2; // x20
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
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x19
  UnityEngine_WaitForSeconds_o *v15; // x19
  bool result; // w0
  ResultListWindow__StartDisp_d__47_o **p_listRewardAction_5__2; // x21
  ResultListWindow__StartDisp_d__47_o *listRewardAction_5__2; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x22
  unsigned int v20; // w23
  __int64 v21; // x22
  float v22; // s0
  unsigned int v23; // w9
  int maxPlayCnt; // w8
  signed int v25; // w9
  int v26; // w9
  unsigned int v27; // w8
  __int64 v30; // x24
  __int64 v31; // x25
  int _2__current; // w8
  __int64 v33; // x22
  System_Collections_IEnumerator_o *started; // x0
  int v35; // w8
  __int64 v36; // x8
  ResultListWindow__StartDisp_d__47_o *v37; // x22
  __int64 v38; // x20
  int v39; // w8
  __int64 v40; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x21
  __int64 v42; // x20
  int size; // w8
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v45; // x1
  ResultListWindow_c *v46; // x0
  Il2CppObject **p__2__current; // x20

  v2 = this;
  if ( (byte_4185665 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo, v8);
    sub_B2C35C(&ResultListWindow_TypeInfo, v9);
    sub_B2C35C(&ResultListWindow_RewardAction_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    this = (ResultListWindow__StartDisp_d__47_o *)sub_B2C35C(&StringLiteral_5970/*"EndOpen"*/, v12);
    byte_4185665 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    p_listRewardAction_5__2 = (ResultListWindow__StartDisp_d__47_o **)&v2->fields._listRewardAction_5__2;
    listRewardAction_5__2 = (ResultListWindow__StartDisp_d__47_o *)v2->fields._listRewardAction_5__2;
    v2->fields.__1__state = -1;
    if ( listRewardAction_5__2 )
      goto LABEL_38;
    goto LABEL_77;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v15 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v15, 0.2, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v15;
      sub_B2C2F8(&v2->fields.__2__current, v15);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  p_listRewardAction_5__2 = (ResultListWindow__StartDisp_d__47_o **)&v2->fields._listRewardAction_5__2;
  v2->fields.__1__state = -1;
  while ( 1 )
  {
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    *p_listRewardAction_5__2 = (ResultListWindow__StartDisp_d__47_o *)v19;
    sub_B2C2F8(p_listRewardAction_5__2, v19);
    if ( !_4__this )
      goto LABEL_77;
    v20 = 0;
    while ( (signed int)(v20 + _4__this->fields.playCnt) < _4__this->fields.maxPlayCnt )
    {
      v21 = sub_B2C42C(ResultListWindow_RewardAction_TypeInfo);
      System_Object___ctor((Il2CppObject *)v21, 0LL);
      if ( !v21 )
        goto LABEL_77;
      *(_DWORD *)(v21 + 16) = v20;
      v22 = 0.0;
      v23 = v20 + _4__this->fields.playCnt;
      *(_DWORD *)(v21 + 20) = v23;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v23 + 1) >= 51 )
      {
        v25 = v23 / 0xA;
        v22 = (float)v25 / (float)((maxPlayCnt - 1) / 10);
        v26 = v25 + 1;
        v27 = maxPlayCnt / 0xAu;
        if ( v22 >= 0.85 || v26 == v27 )
          v22 = 1.0;
      }
      *(float *)(v21 + 24) = v22;
      this = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_77;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__);
      if ( v20++ > 8 )
        break;
    }
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_77;
    _4__this->fields.playCnt += LODWORD((*p_listRewardAction_5__2)->fields.__2__current);
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_77;
    v30 = 0LL;
    v31 = 32LL;
    while ( 1 )
    {
      _2__current = (int)listRewardAction_5__2->fields.__2__current;
      if ( (int)v30 >= _2__current )
        break;
      if ( _2__current <= (unsigned int)v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v33 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + v31);
      if ( LODWORD(listRewardAction_5__2->fields.__2__current) <= (unsigned int)v30 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      started = ResultListWindow__StartRewardAction(
                  _4__this,
                  *(ResultListWindow_RewardAction_o **)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state
                                                      + 8 * v30
                                                      + 32),
                  0LL);
      this = (ResultListWindow__StartDisp_d__47_o *)UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      started,
                                                      0LL);
      if ( v33 )
      {
        *(_QWORD *)(v33 + 32) = this;
        sub_B2C2F8(v33 + 32, this);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        ++v30;
        v31 += 8LL;
        if ( *p_listRewardAction_5__2 )
          continue;
      }
      goto LABEL_77;
    }
    if ( !_2__current || _2__current == _4__this->fields.maxPlayCnt )
      goto LABEL_65;
LABEL_38:
    v35 = (int)listRewardAction_5__2->fields.__2__current;
    if ( !v35 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v36 = *(_QWORD *)(*(_QWORD *)&listRewardAction_5__2->fields.__1__state + 8LL * (v35 - 1) + 32);
    if ( !v36 )
      goto LABEL_77;
    if ( *(_BYTE *)(v36 + 28) )
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
      v37 = *p_listRewardAction_5__2;
      if ( *p_listRewardAction_5__2 )
      {
        v38 = 0LL;
        while ( 1 )
        {
          v39 = (int)v37->fields.__2__current;
          if ( (int)v38 >= v39 )
            break;
          if ( v39 <= (unsigned int)v38 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v40 = *(_QWORD *)(*(_QWORD *)&v37->fields.__1__state + 8 * v38 + 32);
          if ( v40 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_35310416(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              *(UnityEngine_Coroutine_o **)(v40 + 32),
              0LL);
            v37 = *p_listRewardAction_5__2;
            ++v38;
            if ( *p_listRewardAction_5__2 )
              continue;
          }
          goto LABEL_77;
        }
        resultItemObjList = _4__this->fields.resultItemObjList;
        if ( resultItemObjList )
        {
          v42 = 0LL;
          while ( 1 )
          {
            size = resultItemObjList->fields._size;
            if ( (int)v42 >= size )
              break;
            if ( size <= (unsigned int)v42 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            this = (ResultListWindow__StartDisp_d__47_o *)resultItemObjList->fields._items->m_Items[v42];
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              resultItemObjList = _4__this->fields.resultItemObjList;
              ++v42;
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
              v45 = (System_String_o *)StringLiteral_5970/*"EndOpen"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v46 = ResultListWindow_TypeInfo;
              if ( (BYTE3(ResultListWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v46 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v46->static_fields->EFFECT_PLAY_TIME;
              v45 = (System_String_o *)StringLiteral_5970/*"EndOpen"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v45, EFFECT_PLAY_TIME, 0LL);
            return 0;
          }
        }
      }
LABEL_77:
      sub_B2C434(this, method);
    }
    *p_listRewardAction_5__2 = 0LL;
    sub_B2C2F8(p_listRewardAction_5__2, 0LL);
  }
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ResultListWindow__StartDisp_d__47_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  ResultListWindow__StartRewardAction_d__48_o *v2; // x19
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
  __int64 v15; // x1
  struct ResultListWindow_o *_4__this; // x20
  int32_t v17; // w9
  int32_t i_5__2; // w8
  struct ResultListWindow_RewardAction_o *rewardAction; // x8
  float maxDrawItemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v21; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int isRare; // w8
  System_String_o **v25; // x8
  int v26; // w23
  System_String_o *v27; // x21
  UnityEngine_Transform_o *v28; // x22
  UnityEngine_GameObject_o *v29; // x21
  struct ResultListWindow_RewardAction_o *v30; // x8
  struct System_Collections_Generic_List_GameObject__o *v31; // x24
  __int64 v32; // x25
  ResultListWindow__StartRewardAction_d__48_o *v33; // x22
  BoxGachaUtility_c *v34; // x0
  Il2CppObject **v35; // x19
  int v36; // w8
  struct ResultListWindow_RewardAction_o *v37; // x8
  struct System_Collections_Generic_List_GameObject__o *v38; // x21
  __int64 v39; // x22
  struct ResultListWindow_RewardAction_o *v40; // x8
  struct ResultListWindow_RewardAction_o *v41; // x8
  ResultListWindow_c *v42; // x0
  float scrollValue; // s0
  bool v44; // w0
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v47; // x21
  struct ResultListWindow_RewardAction_o *v48; // x8
  struct System_Collections_Generic_List_GameObject__o *resultItemObjList; // x24
  __int64 playCnt; // x25
  ResultListWindow__StartRewardAction_d__48_o *v51; // x22
  BoxGachaUtility_c *v52; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x22
  UnityEngine_Object_o *v54; // x21
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v56; // x20

  v2 = this;
  if ( (byte_4185666 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaResultEffectComponent_TypeInfo, method);
    sub_B2C35C(&BoxGachaUtility_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&ResultListWindow_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_18163/*"ef_boxitem_drop_rare"*/, v12);
    sub_B2C35C(&StringLiteral_18164/*"ef_boxitem_drop_scalable"*/, v13);
    sub_B2C35C(&StringLiteral_18166/*"ef_boxitem_fall_scalable"*/, v14);
    this = (ResultListWindow__StartRewardAction_d__48_o *)sub_B2C35C(&StringLiteral_5970/*"EndOpen"*/, v15);
    byte_4185666 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v17 = 0;
      v2->fields.__1__state = -1;
      v2->fields._i_5__2 = 0;
      goto LABEL_6;
    case 1:
      i_5__2 = v2->fields._i_5__2;
      v2->fields.__1__state = -1;
      v17 = i_5__2 + 1;
      v2->fields._i_5__2 = i_5__2 + 1;
LABEL_6:
      rewardAction = v2->fields.rewardAction;
      if ( !rewardAction )
        goto LABEL_97;
      if ( v17 < rewardAction->fields.index )
      {
        if ( _4__this )
        {
          maxDrawItemDispWaitTime = _4__this->fields.maxDrawItemDispWaitTime;
          v21 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v21, maxDrawItemDispWaitTime, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v21;
          p__2__current = &v2->fields.__2__current;
          sub_B2C2F8(p__2__current, v21);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_97:
        sub_B2C434(this, method);
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
          rewardAction = v2->fields.rewardAction;
          if ( !rewardAction )
            goto LABEL_97;
          if ( rewardAction->fields.scrollValue >= 1.0 )
          {
            _4__this->fields.isLastLineEffectPlay = 1;
            rewardAction = v2->fields.rewardAction;
            if ( !rewardAction )
              goto LABEL_97;
          }
        }
      }
      else if ( !_4__this )
      {
        goto LABEL_97;
      }
      v44 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, 0LL);
      _4__this->fields.isRare = v44;
      if ( v44 || !_4__this->fields.isSkip )
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
                                                                (System_String_o *)StringLiteral_18166/*"ef_boxitem_fall_scalable"*/,
                                                                transform,
                                                                0LL);
        if ( !this )
          goto LABEL_97;
        v47 = (UnityEngine_GameObject_o *)this;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v48 = v2->fields.rewardAction;
        if ( !v48 )
          goto LABEL_97;
        resultItemObjList = _4__this->fields.resultItemObjList;
        if ( !resultItemObjList )
          goto LABEL_97;
        playCnt = v48->fields.playCnt;
        v51 = this;
        if ( resultItemObjList->fields._size <= (unsigned int)playCnt )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this = (ResultListWindow__StartRewardAction_d__48_o *)resultItemObjList->fields._items->m_Items[playCnt];
        if ( !this )
          goto LABEL_97;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
        if ( !v51 )
          goto LABEL_97;
        SyncPositionComponent__SetTarget((SyncPositionComponent_o *)v51, (UnityEngine_Transform_o *)this, 0LL);
        if ( maxPlayCnt >= 11 )
        {
          v52 = BoxGachaUtility_TypeInfo;
          if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v52 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(v47, v52->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        }
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.fallEffectObjList;
        if ( !this )
          goto LABEL_97;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                v47,
                                                                                (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v54 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                          v47,
                                          (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
            SimpleAnimation__Play_16486620(
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
            this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v54 )
                goto LABEL_97;
              UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)v54, _4__this->fields.aniName, 0LL);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v56 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v56, itemDropTime, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v56;
      v35 = &v2->fields.__2__current;
      sub_B2C2F8(v35, v56);
      v36 = 2;
LABEL_96:
      *((_DWORD *)v35 - 2) = v36;
      return 1;
    case 2:
      v2->fields.__1__state = -1;
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
        v25 = (System_String_o **)&StringLiteral_18163/*"ef_boxitem_drop_rare"*/;
      else
        v25 = (System_String_o **)&StringLiteral_18164/*"ef_boxitem_drop_scalable"*/;
      if ( !this )
        goto LABEL_97;
      v26 = _4__this->fields.maxPlayCnt;
      v27 = *v25;
      v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( (BYTE3(BoxGachaResultEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BoxGachaResultEffectComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaResultEffectComponent_TypeInfo);
      }
      this = (ResultListWindow__StartRewardAction_d__48_o *)BoxGachaResultEffectComponent__getEffect(v27, v28, 0LL);
      if ( !this )
        goto LABEL_97;
      v29 = (UnityEngine_GameObject_o *)this;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v30 = v2->fields.rewardAction;
      if ( !v30 )
        goto LABEL_97;
      v31 = _4__this->fields.resultItemObjList;
      if ( !v31 )
        goto LABEL_97;
      v32 = v30->fields.playCnt;
      v33 = this;
      if ( v31->fields._size <= (unsigned int)v32 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (ResultListWindow__StartRewardAction_d__48_o *)v31->fields._items->m_Items[v32];
      if ( !this )
        goto LABEL_97;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
      if ( !v33 )
        goto LABEL_97;
      SyncPositionComponent__SetTarget((SyncPositionComponent_o *)v33, (UnityEngine_Transform_o *)this, 0LL);
      if ( v26 >= 11 )
      {
        v34 = BoxGachaUtility_TypeInfo;
        if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v34 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(v29, v34->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_37;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.dropEffectObjList;
      if ( !this )
        goto LABEL_97;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
LABEL_37:
      v2->fields.__2__current = 0LL;
      v35 = &v2->fields.__2__current;
      sub_B2C2F8(v35, 0LL);
      v36 = 3;
      goto LABEL_96;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_97;
      v37 = v2->fields.rewardAction;
      if ( !v37 )
        goto LABEL_97;
      v38 = _4__this->fields.resultItemObjList;
      if ( !v38 )
        goto LABEL_97;
      v39 = v37->fields.playCnt;
      if ( v38->fields._size <= (unsigned int)v39 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (ResultListWindow__StartRewardAction_d__48_o *)v38->fields._items->m_Items[v39];
      if ( !this )
        goto LABEL_97;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v40 = v2->fields.rewardAction;
      if ( !v40 )
        goto LABEL_97;
      v40->fields.isEnd = 1;
      if ( _4__this->fields.isDischargeGetEffectItem )
        return 0;
      v41 = v2->fields.rewardAction;
      if ( !v41 )
        goto LABEL_97;
      if ( v41->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
      {
        v42 = ResultListWindow_TypeInfo;
        if ( (BYTE3(ResultListWindow_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ResultListWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
          v42 = ResultListWindow_TypeInfo;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          (System_String_o *)StringLiteral_5970/*"EndOpen"*/,
          v42->static_fields->EFFECT_PLAY_TIME,
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ResultListWindow__StartRewardAction_d__48_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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