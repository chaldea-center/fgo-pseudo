void __fastcall ResultListWindow___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A002D8 & 1) == 0 )
  {
    sub_1B640C8(&ResultListWindow_TypeInfo, v1);
    byte_4A002D8 = 1;
  }
  LODWORD(ResultListWindow_TypeInfo->static_fields->EFFECT_PLAY_TIME) = (struct ResultListWindow_StaticFields)1061997773;
}


void __fastcall ResultListWindow___ctor(ResultListWindow_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A002D7 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_1B640C8(&StringLiteral_18737/*"ef_boxitem_fall"*/, v7);
    byte_4A002D7 = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_BA3570;
  v8 = StringLiteral_18737/*"ef_boxitem_fall"*/;
  this->fields.aniName = (struct System_String_o *)StringLiteral_18737/*"ef_boxitem_fall"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aniName, v8, v2, v3);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fallEffectObjList, (int32_t)v11, v12, v13);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dropEffectObjList, (int32_t)v16, v17, v18);
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

  if ( (byte_4A002D5 & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, grid);
    byte_4A002D5 = 1;
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
      UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1B64324(this);
  }
}


void __fastcall ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *skipCollider; // x0
  int v6; // w22
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  int v9; // w22
  int32_t v10; // w20
  Il2CppObject *v11; // x21

  if ( (byte_4A002D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A002D6 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_29;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0LL) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_29:
    sub_1B64324(skipCollider);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0LL);
  skipCollider = this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( skipCollider )
  {
    v6 = *((_DWORD *)skipCollider + 6);
    if ( v6 >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)skipCollider,
                 v7,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)Item, 0LL);
        }
        if ( v6 == ++v7 )
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
    v9 = *((_DWORD *)skipCollider + 6);
    if ( v9 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)skipCollider,
                v10,
                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)v11, 0LL);
        }
        if ( v9 == ++v10 )
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
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A002D3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ResultListWindow_EndClose__, v4);
    byte_4A002D3 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  ResultListWindow__Close_45397696(this, v5, v6);
}


void __fastcall ResultListWindow__Close_45397696(
        ResultListWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_4A002D4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_ResultListWindow_EndClose__, v6);
    byte_4A002D4 = 1;
  }
  this->fields.closeCallBack = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, (int32_t)callback, (int32_t)method, v3);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall ResultListWindow__EndClose(ResultListWindow_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *closeCallBack; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  closeCallBack = this->fields.closeCallBack;
  if ( closeCallBack )
  {
    this->fields.closeCallBack = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallBack->fields.m_target)(
      closeCallBack->fields.original_method_info,
      *(_QWORD *)&closeCallBack->fields.extra_arg);
  }
  ResultListWindow__Init(this, method);
  ResultListWindow__ClearAllGrid(this, v6);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *scrollBar; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  UIProgressBar_o *v7; // x0
  struct System_Action_o *openCallBack; // x20

  if ( (byte_4A002D2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A002D2 = 1;
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
      sub_1B64324(0LL);
    UIProgressBar__set_value(v7, 1.0, 0LL);
    this->fields.isLastLineEffectPlay = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
}


void __fastcall ResultListWindow__Init(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v8; // w9
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int32_t v10; // w2
  System_Array_o *v11; // x0
  int v12; // w9

  if ( (byte_4A002C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    byte_4A002C7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.skipCollider) == 0LL) )
  {
    sub_1B64324(gameObject);
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
      v8 = fallEffectObjList->fields._version + 1;
      fallEffectObjList->fields._size = 0;
      fallEffectObjList->fields._version = v8;
      System_Array__Clear(items, 0, size, 0LL);
    }
  }
  dropEffectObjList = this->fields.dropEffectObjList;
  if ( dropEffectObjList )
  {
    v10 = dropEffectObjList->fields._size;
    if ( v10 >= 1 )
    {
      v11 = (System_Array_o *)dropEffectObjList->fields._items;
      v12 = dropEffectObjList->fields._version + 1;
      dropEffectObjList->fields._size = 0;
      dropEffectObjList->fields._version = v12;
      System_Array__Clear(v11, 0, v10, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  bool v19; // w26
  const MethodInfo *v20; // x2
  int32_t size; // w2
  int32_t v22; // w3
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int v24; // w9
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int v26; // w9
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w21
  UnityEngine_Object_o *scrollBar; // x20
  const MethodInfo *v36; // x1
  UnityEngine_Object_o *resultScrollView; // x20
  const MethodInfo *v38; // x2

  if ( (byte_4A002C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, resultIds);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    byte_4A002C8 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      v19 = isDischargeGetEffectItem;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      ResultListWindow__setDispResultListBg(this, 1, v20);
      fallEffectObjList = this->fields.fallEffectObjList;
      if ( fallEffectObjList )
      {
        size = fallEffectObjList->fields._size;
        v24 = fallEffectObjList->fields._version + 1;
        fallEffectObjList->fields._size = 0;
        fallEffectObjList->fields._version = v24;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)fallEffectObjList->fields._items, 0, size, 0LL);
      }
      dropEffectObjList = this->fields.dropEffectObjList;
      if ( dropEffectObjList )
      {
        size = dropEffectObjList->fields._size;
        v26 = dropEffectObjList->fields._version + 1;
        dropEffectObjList->fields._size = 0;
        dropEffectObjList->fields._version = v26;
        if ( size >= 1 )
          System_Array__Clear((System_Array_o *)dropEffectObjList->fields._items, 0, size, 0LL);
      }
      this->fields.openCallBack = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, size, v22);
      this->fields.resultIdList = resultIds;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultIdList, (int32_t)resultIds, v27, v28);
      this->fields.rareIdxList = rareIdxs;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.rareIdxList, (int32_t)rareIdxs, v29, v30);
      this->fields.baseNoList = baseNos;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseNoList, (int32_t)baseNos, v31, v32);
      this->fields.currentBaseId = baseId;
      this->fields.currentEventId = eventId;
      this->fields.isDischargeGetEffectItem = v19;
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
              goto LABEL_23;
            resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
              goto LABEL_23;
            gameObject = (UnityEngine_GameObject_o *)this->fields.scrollBar;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, max_length > 50, 0LL);
                ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v38);
LABEL_23:
                ResultListWindow__setResultItem(this, v36);
                BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_1B64324(gameObject);
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

  if ( (byte_4A002C9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enabled);
    byte_4A002C9 = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_Behaviour__set_enabled(v6, enabled, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartDisp(
        ResultListWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A002CB & 1) == 0 )
  {
    sub_1B640C8(&ResultListWindow__StartDisp_d__47_TypeInfo, method);
    byte_4A002CB = 1;
  }
  v4 = sub_1B64314(ResultListWindow__StartDisp_d__47_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartRewardAction(
        ResultListWindow_o *this,
        ResultListWindow_RewardAction_o *rewardAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A002CC & 1) == 0 )
  {
    sub_1B640C8(&ResultListWindow__StartRewardAction_d__48_TypeInfo, rewardAction);
    byte_4A002CC = 1;
  }
  v5 = sub_1B64314(ResultListWindow__StartRewardAction_d__48_TypeInfo, rewardAction, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)rewardAction, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
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
          sub_1B6432C(v6, *(_QWORD *)&idx);
        v10 = rareIdxList->m_Items[v8 + 1];
        v6 = System_Int32__Equals_62180496((int32_t)&v10, idx, 0LL);
        if ( v6 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_1B64324(v6);
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

  if ( (byte_4A002D1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5956/*"EndOpen"*/, method);
    sub_1B640C8(&StringLiteral_23056/*"setDisp"*/, v3);
    byte_4A002D1 = 1;
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
        (System_String_o *)StringLiteral_5956/*"EndOpen"*/,
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
      (System_String_o *)StringLiteral_23056/*"setDisp"*/,
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
  int32_t v19; // w2
  int32_t v20; // w3
  BoxGachaUtility_c *v21; // x0
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  __int64 v25; // x8

  if ( (byte_4A002CF & 1) == 0 )
  {
    sub_1B640C8(&BoxGachaUtility_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v3);
    sub_1B640C8(&StringLiteral_18735/*"ef_boxitem_drop_rare"*/, v4);
    sub_1B640C8(&StringLiteral_18734/*"ef_boxitem_drop"*/, v5);
    sub_1B640C8(&StringLiteral_23215/*"showResultItem"*/, v6);
    byte_4A002CF = 1;
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
    v10 = (System_String_o **)&StringLiteral_18735/*"ef_boxitem_drop_rare"*/;
  else
    v10 = (System_String_o **)&StringLiteral_18734/*"ef_boxitem_drop"*/;
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
    v21 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v21 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v14, v21->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
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
            (Il2CppObject *)v14,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = v22 + 8 * klass_low;
          LODWORD(skipCollider[1].klass) = klass_low + 1;
          *(_QWORD *)(v25 + 32) = v14;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v14, v19, v20);
        }
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1B64324(skipCollider);
  }
LABEL_30:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23215/*"showResultItem"*/,
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
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  bool v16; // w0
  const MethodInfo *v17; // x1
  int32_t playCnt; // w8
  _BOOL4 isSkip; // w9
  int32_t v20; // w8
  int32_t maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v23; // x2
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x8
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  int32_t v30; // w2
  int32_t v31; // w3
  BoxGachaUtility_c *v32; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x8
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v38; // x20

  if ( (byte_4A002CE & 1) == 0 )
  {
    sub_1B640C8(&BoxGachaUtility_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_22459/*"playEffectDrop"*/, v8);
    sub_1B640C8(&StringLiteral_18737/*"ef_boxitem_fall"*/, v9);
    byte_4A002CE = 1;
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  Item = System_Collections_Generic_List_object___get_Item(
           resultItemObjList,
           this->fields.playCnt,
           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  p_dispObj = &this->fields.dispObj;
  this->fields.dispObj = (struct UnityEngine_GameObject_o *)Item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dispObj, (int32_t)Item, v13, v14);
  v16 = ResultListWindow__checkRare(this, this->fields.playCnt, v15);
  playCnt = this->fields.playCnt;
  isSkip = this->fields.isSkip;
  this->fields.isRare = v16;
  v20 = playCnt + 1;
  this->fields.playCnt = v20;
  if ( isSkip && !v16 )
  {
    ResultListWindow__showResultItem(this, v17);
    return;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( v20 > 30 || maxPlayCnt <= 10 )
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
                                                                     (System_String_o *)StringLiteral_18737/*"ef_boxitem_fall"*/,
                                                                     transform,
                                                                     v23);
  if ( !resultItemObjList )
    goto LABEL_38;
  v24 = (UnityEngine_GameObject_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)resultItemObjList,
                                                                     0LL);
  v25 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_38;
  v26 = (UnityEngine_Transform_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v25, 0LL);
  if ( !resultItemObjList )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)resultItemObjList,
                                     0LL);
  if ( !v26 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  if ( maxPlayCnt >= 11 )
  {
    v32 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v32 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v24, v32->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
  if ( !resultItemObjList
    || (items = resultItemObjList->fields._items,
        v34 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resultItemObjList->fields._version,
        !items) )
  {
LABEL_38:
    sub_1B64324(resultItemObjList);
  }
  size = resultItemObjList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resultItemObjList,
      (Il2CppObject *)v24,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    resultItemObjList->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v24, v30, v31);
  }
  if ( this->fields.isSkip )
    goto LABEL_37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v24,
                                 (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v38 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v24,
          (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
      UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v38, this->fields.aniName, 0LL);
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( !ComponentInChildren_object )
    goto LABEL_38;
  SimpleAnimation__Play_63513060((SimpleAnimation_o *)ComponentInChildren_object, this->fields.aniName, 0LL);
LABEL_37:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22459/*"playEffectDrop"*/,
    this->fields.itemDropTime,
    0LL);
}


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
    sub_1B64324(firstLineGrid);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 Master_object; // x0
  struct UIGrid_o *firstResultGrid; // x8
  int32_t maxPerLine; // w20
  struct UIGrid_o *sceResultGrid; // x8
  DataManager_c **v22; // x27
  int32_t v23; // w23
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w22
  __int64 v26; // x26
  __int64 v27; // x29
  signed __int64 v28; // x21
  struct UIGrid_o **v29; // x8
  UnityEngine_Component_o *v30; // x23
  __int64 v31; // x1
  struct System_Int32_array *baseNoList; // x8
  UnityEngine_GameObject_o *resultListItemPrefab; // x25
  BoxGachaBaseEntity_o *v34; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v36; // x23
  __int64 v37; // x1
  UnityEngine_Transform_o *v38; // x25
  const MethodInfo *v39; // x1
  ResultItemComponent_o *v40; // x25
  BoxGachaUtility_c *v41; // x8
  int *static_fields; // x8
  int v43; // s2
  int v44; // s1
  int v45; // s0
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  __int64 v48; // x22
  __int64 v49; // x29
  UnityEngine_GameObject_o *resultListResultFrame; // x26
  DataManager_c **v51; // x20
  UnityEngine_Transform_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x26
  __int64 v54; // x1
  UnityEngine_Transform_o *v55; // x27
  BoxGachaUtility_c *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  struct UIScrollView_o *resultScrollView; // x1
  int32_t type; // w8
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x8
  struct System_Int32_array *v70; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  float v73; // s0
  int32_t v74; // w1
  const MethodInfo *v75; // x1
  signed __int64 v76; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_GameObject__o **p_resultItemObjList; // [xsp+10h] [xbp-A0h]
  struct UIGrid_o **p_thrResultGrid; // [xsp+18h] [xbp-98h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+20h] [xbp-90h]
  GiftMaster_o *v80; // [xsp+28h] [xbp-88h]
  int v81; // [xsp+34h] [xbp-7Ch]
  signed __int64 v82; // [xsp+38h] [xbp-78h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+40h] [xbp-70h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+48h] [xbp-68h]

  if ( (byte_4A002CA & 1) == 0 )
  {
    sub_1B640C8(&BoxGachaUtility_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_BoxGachaBaseMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1B640C8(&System_Math_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_12892/*"StartDisp"*/, v14);
    byte_4A002CA = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v15;
  p_resultItemObjList = &this->fields.resultItemObjList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.resultItemObjList, (int32_t)v15, v16, v17);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_87;
  maxPerLine = firstResultGrid->fields.maxPerLine;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_87;
  v22 = &DataManager_TypeInfo;
  v23 = sceResultGrid->fields.maxPerLine;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  resultIdList = this->fields.resultIdList;
  v80 = (GiftMaster_o *)Master_object;
  if ( !resultIdList )
    goto LABEL_87;
  max_length = resultIdList->max_length;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length <= 10 )
    v26 = 8LL;
  else
    v26 = 20LL;
  if ( max_length <= 10 )
    v27 = 4LL;
  else
    v27 = 16LL;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  if ( max_length >= 1 )
  {
    v28 = 0LL;
    v82 = maxPerLine - 1;
    v76 = v23 + maxPerLine - 1;
    v81 = resultIdList->max_length;
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
        v29 = &this->fields.firstResultGrid;
        if ( v28 > v82 )
        {
          v29 = &this->fields.sceResultGrid;
          if ( v28 > v76 )
            v29 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
        v29 = &this->fields.resultScrollViewGrid;
      }
      v30 = (UnityEngine_Component_o *)*v29;
      if ( !(*v22)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v22);
      Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_87;
      if ( v28 >= (unsigned __int64)baseNoList->max_length )
        sub_1B6432C(Master_object, v31);
      if ( !Master_object )
        goto LABEL_87;
      Master_object = (__int64)BoxGachaBaseMaster__GetEntity(
                                 (BoxGachaBaseMaster_o *)Master_object,
                                 this->fields.currentBaseId,
                                 baseNoList->m_Items[v28 + 1],
                                 0LL);
      if ( !v30 )
        goto LABEL_87;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v34 = (BoxGachaBaseEntity_o *)Master_object;
      transform = UnityEngine_Component__get_transform(v30, 0LL);
      Master_object = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 resultListItemPrefab,
                                 transform,
                                 0LL,
                                 0LL);
      if ( !Master_object )
        goto LABEL_87;
      v36 = (UnityEngine_GameObject_o *)Master_object;
      Master_object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
      v38 = (UnityEngine_Transform_o *)Master_object;
      if ( !byte_49F7116 )
      {
        Master_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v37);
        byte_49F7116 = 1;
      }
      if ( !v38 )
        goto LABEL_87;
      UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v36,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v40 = (ResultItemComponent_o *)Master_object;
      v41 = BoxGachaUtility_TypeInfo;
      if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
        v41 = BoxGachaUtility_TypeInfo;
      }
      if ( !v40 )
        goto LABEL_87;
      static_fields = (int *)v41->static_fields;
      v43 = *(int *)((char *)static_fields + v26);
      v44 = *(int *)((char *)static_fields + v27);
      if ( max_length > 10 )
        static_fields += 3;
      v45 = *static_fields;
      ResultItemComponent__SetItemIconScale(v40, *(UnityEngine_Vector3_o *)(&v44 - 1), v39);
      ResultItemComponent__Clear(v40, v46);
      if ( max_length >= 11 )
      {
        Master_object = (__int64)this->fields.resultScrollViewResultFrameGrid;
        if ( !Master_object )
          goto LABEL_87;
        v48 = v27;
        v49 = v26;
        resultListResultFrame = this->fields.resultListResultFrame;
        v51 = v22;
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
        v55 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_49F7116 )
        {
          Master_object = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v54);
          byte_49F7116 = 1;
        }
        if ( !v55 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v56 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v56 = BoxGachaUtility_TypeInfo;
        }
        v22 = v51;
        GameObjectExtensions__SetLocalScale(v53, v56->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        Master_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                   v36,
                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !Master_object )
          goto LABEL_87;
        resultScrollView = this->fields.resultScrollView;
        *(_QWORD *)(Master_object + 32) = resultScrollView;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(Master_object + 32), (int32_t)resultScrollView, v57, v58);
        v26 = v49;
        v27 = v48;
        max_length = v81;
      }
      if ( v34 )
      {
        if ( v34->fields.isRare )
          ResultItemComponent__SetRareItem(v40, v47);
        type = v34->fields.type;
        if ( type == 1 )
        {
          Master_object = (__int64)v80;
          if ( !v80 )
            goto LABEL_87;
          Master_object = (__int64)GiftMaster__getDataById(v80, v34->fields.targetId, 0LL);
          if ( Master_object )
          {
            if ( *(int *)(Master_object + 28) <= 1 )
              v62 = 0;
            else
              v62 = *(_DWORD *)(Master_object + 28);
            ResultItemComponent__Set(v40, (GiftEntity_o *)Master_object, v62, v61);
            goto LABEL_61;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          Master_object = (__int64)BoxGachaBaseEntity__getRewardSetData(v34, this->fields.currentEventId, 0LL);
          if ( Master_object )
          {
            ResultItemComponent__SetExtra(v40, *(_DWORD *)(Master_object + 28), *(_DWORD *)(Master_object + 48), v63);
LABEL_61:
            UnityEngine_GameObject__SetActive(v36, 0, 0LL);
            Master_object = (__int64)*p_resultItemObjList;
            if ( !*p_resultItemObjList )
              goto LABEL_87;
            v66 = *(_QWORD *)(Master_object + 16);
            v67 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++*(_DWORD *)(Master_object + 28);
            if ( !v66 )
              goto LABEL_87;
            v68 = *(int *)(Master_object + 24);
            if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v36,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
            }
            else
            {
              v69 = v66 + 8 * v68;
              *(_DWORD *)(Master_object + 24) = v68 + 1;
              *(_QWORD *)(v69 + 32) = v36;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 32), (int32_t)v36, v64, v65);
            }
          }
        }
      }
      v70 = this->fields.resultIdList;
      if ( !v70 )
        goto LABEL_87;
      ++v28;
    }
    while ( v28 < (int)v70->max_length );
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
        v73 = ceilf((float)maxPlayCnt / 10.0);
        if ( v73 == INFINITY )
          v74 = 5;
        else
          v74 = 60 * (int)v73 + 5;
        UIWidget__set_height((UIWidget_o *)Master_object, v74, 0LL);
        goto LABEL_79;
      }
LABEL_87:
      sub_1B64324(Master_object);
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
    ResultListWindow__showResultEffect(this, v75);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12892/*"StartDisp"*/,
      0LL);
}


void __fastcall ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4A002CD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23056/*"setDisp"*/, method);
    byte_4A002CD = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23056/*"setDisp"*/,
    0.3,
    0LL);
}


void __fastcall ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObj; // x0

  if ( (byte_4A002D0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18929/*"endDisp"*/, method);
    byte_4A002D0 = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_18929/*"endDisp"*/,
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
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x19
  UnityEngine_WaitForSeconds_o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  bool result; // w0
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  System_Collections_Generic_List_object__o *v21; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  int v27; // w23
  __int64 v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  float v31; // s0
  unsigned int v32; // w9
  int maxPlayCnt; // w8
  signed int v34; // w9
  int v35; // w9
  unsigned int v36; // w8
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  int v42; // w8
  int32_t v43; // w22
  System_Collections_Generic_List_object__o *v44; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v46; // x2
  System_Collections_IEnumerator_o *started; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  const MethodInfo *v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Collections_Generic_List_ResultListWindow_RewardAction__o **v53; // x21
  int32_t v54; // w20
  int32_t v55; // w20
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v57; // x1
  ResultListWindow_c *v58; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_4A002D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo, v9);
    sub_1B640C8(&ResultListWindow_TypeInfo, v10);
    sub_1B640C8(&ResultListWindow_RewardAction_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_5956/*"EndOpen"*/, v13);
    byte_4A002D9 = 1;
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
      v16 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v16, 0.2, 0LL);
      this->fields.__2__current = (Il2CppObject *)v16;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v16, v17, v18);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)v21;
    p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._listRewardAction_5__2, (int32_t)v21, v23, v24);
    if ( !_4__this )
      goto LABEL_69;
    v27 = 0;
    while ( v27 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
    {
      v28 = sub_1B64314(ResultListWindow_RewardAction_TypeInfo, v25, v26);
      System_Object___ctor((Il2CppObject *)v28, 0LL);
      if ( !v28 )
        goto LABEL_69;
      *(_DWORD *)(v28 + 16) = v27;
      v31 = 0.0;
      v32 = v27 + _4__this->fields.playCnt;
      *(_DWORD *)(v28 + 20) = v32;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v32 + 1) >= 51 )
      {
        v34 = v32 / 0xA;
        v31 = (float)v34 / (float)((maxPlayCnt - 1) / 10);
        v35 = v34 + 1;
        v36 = maxPlayCnt / 0xAu;
        if ( v31 >= 0.85 || v35 == v36 )
          v31 = 1.0;
      }
      *(float *)(v28 + 24) = v31;
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_69;
      items = listRewardAction_5__2->fields._items;
      v39 = Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__;
      ++listRewardAction_5__2->fields._version;
      if ( !items )
        goto LABEL_69;
      size = listRewardAction_5__2->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listRewardAction_5__2,
          (Il2CppObject *)v28,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        listRewardAction_5__2->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v28;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), v28, v29, v30);
      }
      if ( ++v27 == 10 )
        break;
    }
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_69;
    v42 = listRewardAction_5__2->fields._size;
    _4__this->fields.playCnt += v42;
    if ( v42 >= 1 )
    {
      v43 = 0;
      do
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v43,
                                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_69;
        v44 = listRewardAction_5__2;
        Item = System_Collections_Generic_List_object___get_Item(
                 *p_listRewardAction_5__2,
                 v43,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        started = ResultListWindow__StartRewardAction(_4__this, (ResultListWindow_RewardAction_o *)Item, v46);
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                                               (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                               started,
                                                                               0LL);
        if ( !v44 )
          goto LABEL_69;
        v44->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&v44->fields._syncRoot,
          (int32_t)listRewardAction_5__2,
          v48,
          v49);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_69;
        v42 = listRewardAction_5__2->fields._size;
      }
      while ( ++v43 < v42 );
    }
    if ( !v42 || v42 == _4__this->fields.maxPlayCnt )
      goto LABEL_58;
LABEL_37:
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           listRewardAction_5__2,
                                                                           listRewardAction_5__2->fields._size - 1,
                                                                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
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
    v53 = &this->fields._listRewardAction_5__2;
    if ( _4__this->fields.isSkip )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v53;
      if ( *v53 )
      {
        v54 = 0;
        while ( v54 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v54,
                                                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_69113628(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0LL);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v53;
            ++v54;
            if ( *v53 )
              continue;
          }
          goto LABEL_69;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v55 = 0;
          while ( v55 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v55,
                                                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0LL);
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v55;
              if ( listRewardAction_5__2 )
                continue;
            }
            goto LABEL_69;
          }
          _4__this->fields.playCnt = _4__this->fields.maxPlayCnt;
          ResultListWindow__EndOpen(_4__this, v50);
LABEL_58:
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.skipCollider;
          if ( listRewardAction_5__2 )
          {
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)listRewardAction_5__2, 0, 0LL);
            if ( _4__this->fields.isDischargeGetEffectItem )
            {
              EFFECT_PLAY_TIME = 0.5;
              v57 = (System_String_o *)StringLiteral_5956/*"EndOpen"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v58 = ResultListWindow_TypeInfo;
              if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v58 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v58->static_fields->EFFECT_PLAY_TIME;
              v57 = (System_String_o *)StringLiteral_5956/*"EndOpen"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v57, EFFECT_PLAY_TIME, 0LL);
            return 0;
          }
        }
      }
LABEL_69:
      sub_1B64324(listRewardAction_5__2);
    }
    *v53 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._listRewardAction_5__2, 0, v51, v52);
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v51, v52);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ResultListWindow__StartDisp_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  ResultListWindow__StartRewardAction_d__48_o *v3; // x19
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  bool result; // w0
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w23
  System_String_o **v29; // x8
  System_String_o *v30; // x21
  UnityEngine_Transform_o *v31; // x0
  const MethodInfo *v32; // x2
  ResultListWindow__StartRewardAction_d__48_o *v33; // x21
  struct ResultListWindow_RewardAction_o *v34; // x8
  ResultListWindow__StartRewardAction_d__48_o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
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
  __int64 v49; // x1
  __int64 v50; // x2
  _BOOL4 isSkip; // w8
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v54; // x2
  ResultListWindow__StartRewardAction_d__48_o *v55; // x21
  struct ResultListWindow_RewardAction_o *v56; // x8
  ResultListWindow__StartRewardAction_d__48_o *v57; // x22
  int32_t v58; // w2
  int32_t v59; // w3
  const MethodInfo *v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  BoxGachaUtility_c *v63; // x0
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 _2__current_low; // x10
  __int64 v67; // x8
  Il2CppObject *ComponentInChildren_object; // x22
  Il2CppObject *v69; // x21
  ServantStatusBattleListViewItem_o *v70; // x19
  int v71; // w8
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v73; // x20
  int32_t v74; // w2
  int32_t v75; // w3

  v3 = this;
  if ( (byte_4A002DA & 1) == 0 )
  {
    sub_1B640C8(&BoxGachaUtility_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&ResultListWindow_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_18735/*"ef_boxitem_drop_rare"*/, v12);
    sub_1B640C8(&StringLiteral_18736/*"ef_boxitem_drop_scalable"*/, v13);
    sub_1B640C8(&StringLiteral_18738/*"ef_boxitem_fall_scalable"*/, v14);
    this = (ResultListWindow__StartRewardAction_d__48_o *)sub_1B640C8(&StringLiteral_5956/*"EndOpen"*/, v15);
    byte_4A002DA = 1;
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
          v21 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
          UnityEngine_WaitForSeconds___ctor(v21, maxDrawItemDispWaitTime, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v21;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B6406C(p__2__current, (int32_t)v21, v23, v24);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
LABEL_84:
        sub_1B64324(this);
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
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.effectRoot;
        if ( !this )
          goto LABEL_84;
        maxPlayCnt = _4__this->fields.maxPlayCnt;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (ResultListWindow__StartRewardAction_d__48_o *)BoxGachaResultEffectComponent__getEffect(
                                                                (System_String_o *)StringLiteral_18738/*"ef_boxitem_fall_scalable"*/,
                                                                transform,
                                                                v54);
        if ( !this )
          goto LABEL_84;
        v55 = this;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v56 = v3->fields.rewardAction;
        if ( !v56 )
          goto LABEL_84;
        v57 = this;
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.resultItemObjList;
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                                (System_Collections_Generic_List_object__o *)this,
                                                                v56->fields.playCnt,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
        if ( !v57 )
          goto LABEL_84;
        v57->fields.__4__this = (struct ResultListWindow_o *)this;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v57->fields.__4__this, (int32_t)this, v58, v59);
        SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v57, v60);
        if ( maxPlayCnt >= 11 )
        {
          v63 = BoxGachaUtility_TypeInfo;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v63 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(
            (UnityEngine_GameObject_o *)v55,
            v63->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
            0LL);
        }
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.fallEffectObjList;
        if ( !this )
          goto LABEL_84;
        v64 = *(_QWORD *)&this->fields.__1__state;
        v65 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v64 )
          goto LABEL_84;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v64 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v55,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = v64 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v67 + 32) = v55;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 32), (int32_t)v55, v61, v62);
        }
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v55,
                                         (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v69 = UnityEngine_GameObject__GetComponentInChildren_object_(
                  (UnityEngine_GameObject_o *)v55,
                  (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                  0LL,
                                                                  0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !ComponentInChildren_object )
              goto LABEL_84;
            SimpleAnimation__Play_63513060(
              (SimpleAnimation_o *)ComponentInChildren_object,
              _4__this->fields.aniName,
              0LL);
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)v69,
                                                                    0LL,
                                                                    0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v69 )
                goto LABEL_84;
              UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v69, _4__this->fields.aniName, 0LL);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v73 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v49, v50);
      UnityEngine_WaitForSeconds___ctor(v73, itemDropTime, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v73;
      v70 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(v70, (int32_t)v73, v74, v75);
      v71 = 2;
LABEL_83:
      *(_DWORD *)&v70[-1].fields.isMine = v71;
      return 1;
    case 2:
      v3->fields.__1__state = -1;
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
      v28 = _4__this->fields.maxPlayCnt;
      v29 = (System_String_o **)(_4__this->fields.isRare ? &StringLiteral_18735/*"ef_boxitem_drop_rare"*/ : &StringLiteral_18736/*"ef_boxitem_drop_scalable"*/);
      v30 = *v29;
      v31 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ResultListWindow__StartRewardAction_d__48_o *)BoxGachaResultEffectComponent__getEffect(v30, v31, v32);
      if ( !this )
        goto LABEL_84;
      v33 = this;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v34 = v3->fields.rewardAction;
      if ( !v34 )
        goto LABEL_84;
      v35 = this;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v34->fields.playCnt,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
      if ( !v35 )
        goto LABEL_84;
      v35->fields.__4__this = (struct ResultListWindow_o *)this;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->fields.__4__this, (int32_t)this, v36, v37);
      SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v35, v38);
      if ( v28 >= 11 )
      {
        v39 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v39 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v33,
          v39->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
          0LL);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.dropEffectObjList;
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
          (Il2CppObject *)v33,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = v40 + 8 * v42;
        LODWORD(this->fields.__2__current) = v42 + 1;
        *(_QWORD *)(v43 + 32) = v33;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 32), (int32_t)v33, v26, v27);
      }
LABEL_76:
      v3->fields.__2__current = 0LL;
      v70 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B6406C(v70, 0, v26, v27);
      v71 = 3;
      goto LABEL_83;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      v44 = v3->fields.rewardAction;
      if ( !v44 )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v44->fields.playCnt,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
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
          (System_String_o *)StringLiteral_5956/*"EndOpen"*/,
          v46->static_fields->EFFECT_PLAY_TIME,
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ResultListWindow__StartRewardAction_d__48_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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