void __fastcall ResultListWindow___cctor(const MethodInfo *method)
{
  if ( (byte_4A5F0C4 & 1) == 0 )
  {
    sub_1B885B0(&ResultListWindow_TypeInfo);
    byte_4A5F0C4 = 1;
  }
  LODWORD(ResultListWindow_TypeInfo->static_fields->EFFECT_PLAY_TIME) = (struct ResultListWindow_StaticFields)1061997773;
}


void __fastcall ResultListWindow___ctor(ResultListWindow_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5F0C3 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&StringLiteral_18810/*"ef_boxitem_fall"*/);
    byte_4A5F0C3 = 1;
  }
  *(_OWORD *)&this->fields.itemDropTime = xmmword_BB4D60;
  v5 = StringLiteral_18810/*"ef_boxitem_fall"*/;
  this->fields.aniName = (struct System_String_o *)StringLiteral_18810/*"ef_boxitem_fall"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aniName, v5, v2, v3);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.fallEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fallEffectObjList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.dropEffectObjList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dropEffectObjList, (int32_t)v9, v10, v11);
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

  if ( (byte_4A5F0C1 & 1) == 0 )
  {
    this = (ResultListWindow_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0C1 = 1;
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
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_13:
    sub_1B8880C(this, grid);
  }
}


void __fastcall ResultListWindow__ClickSkip(ResultListWindow_o *this, const MethodInfo *method)
{
  void *skipCollider; // x0
  int v4; // w22
  int32_t v5; // w20
  Il2CppObject *Item; // x21
  int v7; // w22
  int32_t v8; // w20
  Il2CppObject *v9; // x21

  if ( (byte_4A5F0C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0C2 = 1;
  }
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
    goto LABEL_29;
  if ( !UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)skipCollider, 0LL) )
    return;
  skipCollider = this->fields.skipCollider;
  if ( !skipCollider )
LABEL_29:
    sub_1B8880C(skipCollider, method);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)skipCollider, 0, 0LL);
  skipCollider = this->fields.fallEffectObjList;
  this->fields.isSkip = 1;
  if ( skipCollider )
  {
    v4 = *((_DWORD *)skipCollider + 6);
    if ( v4 >= 1 )
    {
      v5 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)skipCollider,
                 v5,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Item, 0LL);
        }
        if ( v4 == ++v5 )
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
    v7 = *((_DWORD *)skipCollider + 6);
    if ( v7 >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)skipCollider,
               v8,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v9, 0LL);
        }
        if ( v7 == ++v8 )
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
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A5F0BF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ResultListWindow_EndClose__);
    byte_4A5F0BF = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  ResultListWindow__Close_45773016(this, v3, v4);
}


void __fastcall ResultListWindow__Close_45773016(
        ResultListWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5F0C0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ResultListWindow_EndClose__);
    byte_4A5F0C0 = 1;
  }
  this->fields.closeCallBack = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ResultListWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall ResultListWindow__EndClose(ResultListWindow_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *closeCallBack; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1

  closeCallBack = this->fields.closeCallBack;
  if ( closeCallBack )
  {
    this->fields.closeCallBack = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallBack, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallBack->fields.m_target)(
      closeCallBack->fields.original_method_info,
      *(_QWORD *)&closeCallBack->fields.extra_arg);
  }
  ResultListWindow__Init(this, method);
  ResultListWindow__ClearAllGrid(this, v6);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ResultListWindow__EndOpen(ResultListWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  UIProgressBar_o *v8; // x0
  struct System_Action_o *openCallBack; // x20

  if ( (byte_4A5F0BE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0BE = 1;
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
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1B8880C(0LL, v5);
    UIProgressBar__set_value(v8, 1.0, 0LL);
    this->fields.isLastLineEffectPlay = 1;
  }
  openCallBack = this->fields.openCallBack;
  if ( openCallBack )
  {
    this->fields.openCallBack = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, 0, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallBack->fields.m_target)(
      openCallBack->fields.original_method_info,
      *(_QWORD *)&openCallBack->fields.extra_arg);
  }
}


void __fastcall ResultListWindow__Init(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *fallEffectObjList; // x8
  int32_t size; // w2
  System_Array_o *items; // x0
  int v8; // w9
  struct System_Collections_Generic_List_GameObject__o *dropEffectObjList; // x8
  int32_t v10; // w2
  System_Array_o *v11; // x0
  int v12; // w9

  if ( (byte_4A5F0B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4A5F0B3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.skipCollider) == 0LL) )
  {
    sub_1B8880C(gameObject, v4);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v18; // x1
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
  UnityEngine_Object_o *resultScrollView; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4A5F0B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0B4 = 1;
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallBack, (int32_t)callback, size, v22);
      this->fields.resultIdList = resultIds;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultIdList, (int32_t)resultIds, v27, v28);
      this->fields.rareIdxList = rareIdxs;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rareIdxList, (int32_t)rareIdxs, v29, v30);
      this->fields.baseNoList = baseNos;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseNoList, (int32_t)baseNos, v31, v32);
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
                ResultListWindow__SetScrollControllEnabled(this, max_length > 50, v37);
LABEL_23:
                ResultListWindow__setResultItem(this, v18);
                BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    sub_1B8880C(gameObject, v18);
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

  if ( (byte_4A5F0B5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0B5 = 1;
  }
  resultScrollView = (UnityEngine_Object_o *)this->fields.resultScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(resultScrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.resultScrollView;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ResultListWindow__StartDisp(
        ResultListWindow_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5F0B7 & 1) == 0 )
  {
    sub_1B885B0(&ResultListWindow__StartDisp_d__47_TypeInfo);
    byte_4A5F0B7 = 1;
  }
  v3 = sub_1B887FC(ResultListWindow__StartDisp_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
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

  if ( (byte_4A5F0B8 & 1) == 0 )
  {
    sub_1B885B0(&ResultListWindow__StartRewardAction_d__48_TypeInfo);
    byte_4A5F0B8 = 1;
  }
  v5 = sub_1B887FC(ResultListWindow__StartRewardAction_d__48_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = rewardAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)rewardAction, v8, v9);
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
          sub_1B88814(v6, *(_QWORD *)&idx);
        v10 = rareIdxList->m_Items[v8 + 1];
        v6 = System_Int32__Equals_62512140((int32_t)&v10, idx, 0LL);
        if ( v6 )
          break;
        rareIdxList = this->fields.rareIdxList;
        if ( !rareIdxList )
          sub_1B8880C(v6, *(_QWORD *)&idx);
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

  if ( (byte_4A5F0BD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5982/*"EndOpen"*/);
    sub_1B885B0(&StringLiteral_23152/*"setDisp"*/);
    byte_4A5F0BD = 1;
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
        (System_String_o *)StringLiteral_5982/*"EndOpen"*/,
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
      (System_String_o *)StringLiteral_23152/*"setDisp"*/,
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
  int32_t v15; // w2
  int32_t v16; // w3
  BoxGachaUtility_c *v17; // x0
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 klass_low; // x10
  __int64 v21; // x8

  if ( (byte_4A5F0BB & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&StringLiteral_18808/*"ef_boxitem_drop_rare"*/);
    sub_1B885B0(&StringLiteral_18807/*"ef_boxitem_drop"*/);
    sub_1B885B0(&StringLiteral_23313/*"showResultItem"*/);
    byte_4A5F0BB = 1;
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
    v6 = (System_String_o **)&StringLiteral_18808/*"ef_boxitem_drop_rare"*/;
  else
    v6 = (System_String_o **)&StringLiteral_18807/*"ef_boxitem_drop"*/;
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
    v17 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v17 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v10, v17->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  if ( !this->fields.isRare )
  {
    skipCollider = (UnityEngine_Collider_o *)this->fields.dropEffectObjList;
    if ( skipCollider )
    {
      v18 = *(_QWORD *)&skipCollider->fields.m_CachedPtr;
      v19 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(skipCollider[1].klass);
      if ( v18 )
      {
        klass_low = SLODWORD(skipCollider[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v18 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)skipCollider,
            (Il2CppObject *)v10,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = v18 + 8 * klass_low;
          LODWORD(skipCollider[1].klass) = klass_low + 1;
          *(_QWORD *)(v21 + 32) = v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v10, v15, v16);
        }
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_1B8880C(skipCollider, method);
  }
LABEL_30:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23313/*"showResultItem"*/,
    this->fields.itemDispWaitTime,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setDisp(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *resultItemObjList; // x0
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o **p_dispObj; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x2
  bool v9; // w0
  int32_t playCnt; // w8
  _BOOL4 isSkip; // w9
  int32_t v12; // w8
  int32_t maxPlayCnt; // w22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v15; // x2
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x8
  UnityEngine_Transform_o *v18; // x21
  int v19; // s0
  int32_t v22; // w2
  int32_t v23; // w3
  BoxGachaUtility_c *v24; // x0
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  Il2CppObject *ComponentInChildren_object; // x21
  Il2CppObject *v30; // x20

  if ( (byte_4A5F0BA & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_22550/*"playEffectDrop"*/);
    sub_1B885B0(&StringLiteral_18810/*"ef_boxitem_fall"*/);
    byte_4A5F0BA = 1;
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.resultItemObjList;
  if ( !resultItemObjList )
    goto LABEL_38;
  Item = System_Collections_Generic_List_object___get_Item(
           resultItemObjList,
           this->fields.playCnt,
           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  p_dispObj = &this->fields.dispObj;
  this->fields.dispObj = (struct UnityEngine_GameObject_o *)Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dispObj, (int32_t)Item, v6, v7);
  v9 = ResultListWindow__checkRare(this, this->fields.playCnt, v8);
  playCnt = this->fields.playCnt;
  isSkip = this->fields.isSkip;
  this->fields.isRare = v9;
  v12 = playCnt + 1;
  this->fields.playCnt = v12;
  if ( isSkip && !v9 )
  {
    ResultListWindow__showResultItem(this, method);
    return;
  }
  maxPlayCnt = this->fields.maxPlayCnt;
  if ( v12 > 30 || maxPlayCnt <= 10 )
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
                                                                     (System_String_o *)StringLiteral_18810/*"ef_boxitem_fall"*/,
                                                                     transform,
                                                                     v15);
  if ( !resultItemObjList )
    goto LABEL_38;
  v16 = (UnityEngine_GameObject_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                     (UnityEngine_GameObject_o *)resultItemObjList,
                                                                     0LL);
  v17 = *p_dispObj;
  if ( !*p_dispObj )
    goto LABEL_38;
  v18 = (UnityEngine_Transform_o *)resultItemObjList;
  resultItemObjList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v17, 0LL);
  if ( !resultItemObjList )
    goto LABEL_38;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)resultItemObjList,
                                     0LL);
  if ( !v18 )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  if ( maxPlayCnt >= 11 )
  {
    v24 = BoxGachaUtility_TypeInfo;
    if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
      v24 = BoxGachaUtility_TypeInfo;
    }
    GameObjectExtensions__SetLocalScale(v16, v24->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
  }
  resultItemObjList = (System_Collections_Generic_List_object__o *)this->fields.fallEffectObjList;
  if ( !resultItemObjList
    || (items = resultItemObjList->fields._items,
        v26 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++resultItemObjList->fields._version,
        !items) )
  {
LABEL_38:
    sub_1B8880C(resultItemObjList, method);
  }
  size = resultItemObjList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      resultItemObjList,
      (Il2CppObject *)v16,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    resultItemObjList->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v16, v22, v23);
  }
  if ( this->fields.isSkip )
    goto LABEL_37;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 v16,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
  v30 = UnityEngine_GameObject__GetComponentInChildren_object_(
          v16,
          (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
                                                                       (UnityEngine_Object_o *)v30,
                                                                       0LL,
                                                                       0LL);
    if ( ((unsigned __int8)resultItemObjList & 1) == 0 )
      goto LABEL_37;
    if ( v30 )
    {
      UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v30, this->fields.aniName, 0LL);
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  if ( !ComponentInChildren_object )
    goto LABEL_38;
  SimpleAnimation__Play_63844704((SimpleAnimation_o *)ComponentInChildren_object, this->fields.aniName, 0LL);
LABEL_37:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_22550/*"playEffectDrop"*/,
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
    sub_1B8880C(firstLineGrid, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)firstLineGrid, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ResultListWindow__setResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  char *Master_object; // x0
  const MethodInfo *v7; // x1
  struct UIGrid_o *firstResultGrid; // x8
  int32_t maxPerLine; // w20
  struct UIGrid_o *sceResultGrid; // x8
  DataManager_c **v11; // x27
  int32_t v12; // w23
  struct System_Int32_array *resultIdList; // x8
  int max_length; // w22
  __int64 v15; // x26
  __int64 v16; // x29
  signed __int64 v17; // x21
  struct UIGrid_o **v18; // x8
  UnityEngine_Component_o *v19; // x23
  struct System_Int32_array *baseNoList; // x8
  UnityEngine_GameObject_o *resultListItemPrefab; // x25
  BoxGachaBaseEntity_o *v22; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v24; // x23
  UnityEngine_Transform_o *v25; // x25
  ResultItemComponent_o *v26; // x25
  BoxGachaUtility_c *v27; // x8
  int *static_fields; // x8
  int v29; // s2
  int v30; // s1
  int v31; // s0
  const MethodInfo *v32; // x1
  __int64 v33; // x22
  __int64 v34; // x29
  UnityEngine_GameObject_o *resultListResultFrame; // x26
  DataManager_c **v36; // x20
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x26
  UnityEngine_Transform_o *v39; // x27
  BoxGachaUtility_c *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct UIScrollView_o *resultScrollView; // x1
  int32_t type; // w8
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  struct System_Int32_array *v54; // x8
  UnityEngine_Object_o *adjustSprite; // x20
  int32_t maxPlayCnt; // w20
  float v57; // s0
  int32_t v58; // w1
  const MethodInfo *v59; // x1
  signed __int64 v60; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_GameObject__o **p_resultItemObjList; // [xsp+10h] [xbp-A0h]
  struct UIGrid_o **p_thrResultGrid; // [xsp+18h] [xbp-98h]
  struct UIGrid_o **p_sceResultGrid; // [xsp+20h] [xbp-90h]
  GiftMaster_o *v64; // [xsp+28h] [xbp-88h]
  int v65; // [xsp+34h] [xbp-7Ch]
  signed __int64 v66; // [xsp+38h] [xbp-78h]
  struct UIGrid_o **p_resultScrollViewGrid; // [xsp+40h] [xbp-70h]
  struct UIGrid_o **p_firstResultGrid; // [xsp+48h] [xbp-68h]

  if ( (byte_4A5F0B6 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BoxGachaBaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_12956/*"StartDisp"*/);
    byte_4A5F0B6 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.resultItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  p_resultItemObjList = &this->fields.resultItemObjList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultItemObjList, (int32_t)v3, v4, v5);
  firstResultGrid = this->fields.firstResultGrid;
  p_firstResultGrid = &this->fields.firstResultGrid;
  if ( !firstResultGrid )
    goto LABEL_87;
  maxPerLine = firstResultGrid->fields.maxPerLine;
  sceResultGrid = this->fields.sceResultGrid;
  p_sceResultGrid = &this->fields.sceResultGrid;
  if ( !sceResultGrid )
    goto LABEL_87;
  v11 = &DataManager_TypeInfo;
  v12 = sceResultGrid->fields.maxPerLine;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  resultIdList = this->fields.resultIdList;
  v64 = (GiftMaster_o *)Master_object;
  if ( !resultIdList )
    goto LABEL_87;
  max_length = resultIdList->max_length;
  p_thrResultGrid = &this->fields.thrResultGrid;
  if ( max_length <= 10 )
    v15 = 8LL;
  else
    v15 = 20LL;
  if ( max_length <= 10 )
    v16 = 4LL;
  else
    v16 = 16LL;
  p_resultScrollViewGrid = &this->fields.resultScrollViewGrid;
  if ( max_length >= 1 )
  {
    v17 = 0LL;
    v66 = maxPerLine - 1;
    v60 = v12 + maxPerLine - 1;
    v65 = resultIdList->max_length;
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
        v18 = &this->fields.firstResultGrid;
        if ( v17 > v66 )
        {
          v18 = &this->fields.sceResultGrid;
          if ( v17 > v60 )
            v18 = &this->fields.thrResultGrid;
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
        v18 = &this->fields.resultScrollViewGrid;
      }
      v19 = (UnityEngine_Component_o *)*v18;
      if ( !(*v11)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v11);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BoxGachaBaseMaster___);
      baseNoList = this->fields.baseNoList;
      if ( !baseNoList )
        goto LABEL_87;
      if ( v17 >= (unsigned __int64)baseNoList->max_length )
        sub_1B88814(Master_object, v7);
      if ( !Master_object )
        goto LABEL_87;
      Master_object = (char *)BoxGachaBaseMaster__GetEntity(
                                (BoxGachaBaseMaster_o *)Master_object,
                                this->fields.currentBaseId,
                                baseNoList->m_Items[v17 + 1],
                                0LL);
      if ( !v19 )
        goto LABEL_87;
      resultListItemPrefab = this->fields.resultListItemPrefab;
      v22 = (BoxGachaBaseEntity_o *)Master_object;
      transform = UnityEngine_Component__get_transform(v19, 0LL);
      Master_object = (char *)BaseMonoBehaviour__createObject(
                                (BaseMonoBehaviour_o *)this,
                                resultListItemPrefab,
                                transform,
                                0LL,
                                0LL);
      if ( !Master_object )
        goto LABEL_87;
      v24 = (UnityEngine_GameObject_o *)Master_object;
      Master_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
      v25 = (UnityEngine_Transform_o *)Master_object;
      if ( !byte_4A55CE6 )
      {
        Master_object = (char *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v25 )
        goto LABEL_87;
      UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      Master_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                v24,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ResultItemComponent___);
      v26 = (ResultItemComponent_o *)Master_object;
      v27 = BoxGachaUtility_TypeInfo;
      if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
        v27 = BoxGachaUtility_TypeInfo;
      }
      if ( !v26 )
        goto LABEL_87;
      static_fields = (int *)v27->static_fields;
      v29 = *(int *)((char *)static_fields + v15);
      v30 = *(int *)((char *)static_fields + v16);
      if ( max_length > 10 )
        static_fields += 3;
      v31 = *static_fields;
      ResultItemComponent__SetItemIconScale(v26, *(UnityEngine_Vector3_o *)(&v30 - 1), v7);
      ResultItemComponent__Clear(v26, v32);
      if ( max_length >= 11 )
      {
        Master_object = (char *)this->fields.resultScrollViewResultFrameGrid;
        if ( !Master_object )
          goto LABEL_87;
        v33 = v16;
        v34 = v15;
        resultListResultFrame = this->fields.resultListResultFrame;
        v36 = v11;
        v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
        Master_object = (char *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  resultListResultFrame,
                                  v37,
                                  0LL,
                                  0LL);
        if ( !Master_object )
          goto LABEL_87;
        v38 = (UnityEngine_GameObject_o *)Master_object;
        Master_object = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Master_object, 0LL);
        v39 = (UnityEngine_Transform_o *)Master_object;
        if ( !byte_4A55CE6 )
        {
          Master_object = (char *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        if ( !v39 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        v40 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v40 = BoxGachaUtility_TypeInfo;
        }
        v11 = v36;
        GameObjectExtensions__SetLocalScale(v38, v40->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE, 0LL);
        Master_object = (char *)UnityEngine_GameObject__GetComponent_object_(
                                  v24,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIDragScrollView___);
        if ( !Master_object )
          goto LABEL_87;
        resultScrollView = this->fields.resultScrollView;
        *((_QWORD *)Master_object + 4) = resultScrollView;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(Master_object + 32), (int32_t)resultScrollView, v41, v42);
        v15 = v34;
        v16 = v33;
        max_length = v65;
      }
      if ( v22 )
      {
        if ( v22->fields.isRare )
          ResultItemComponent__SetRareItem(v26, v7);
        type = v22->fields.type;
        if ( type == 1 )
        {
          Master_object = (char *)v64;
          if ( !v64 )
            goto LABEL_87;
          Master_object = (char *)GiftMaster__getDataById(v64, v22->fields.targetId, 0LL);
          if ( Master_object )
          {
            if ( *((int *)Master_object + 7) <= 1 )
              v46 = 0;
            else
              v46 = *((_DWORD *)Master_object + 7);
            ResultItemComponent__Set(v26, (GiftEntity_o *)Master_object, v46, v45);
            goto LABEL_61;
          }
        }
        else if ( (type & 0xFFFFFFFE) == 2 )
        {
          Master_object = (char *)BoxGachaBaseEntity__getRewardSetData(v22, this->fields.currentEventId, 0LL);
          if ( Master_object )
          {
            ResultItemComponent__SetExtra(v26, *((_DWORD *)Master_object + 7), *((_DWORD *)Master_object + 12), v47);
LABEL_61:
            UnityEngine_GameObject__SetActive(v24, 0, 0LL);
            Master_object = (char *)*p_resultItemObjList;
            if ( !*p_resultItemObjList )
              goto LABEL_87;
            v50 = *((_QWORD *)Master_object + 2);
            v51 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++*((_DWORD *)Master_object + 7);
            if ( !v50 )
              goto LABEL_87;
            v52 = *((int *)Master_object + 6);
            if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                (Il2CppObject *)v24,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = v50 + 8 * v52;
              *((_DWORD *)Master_object + 6) = v52 + 1;
              *(_QWORD *)(v53 + 32) = v24;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 32), (int32_t)v24, v48, v49);
            }
          }
        }
      }
      v54 = this->fields.resultIdList;
      if ( !v54 )
        goto LABEL_87;
      ++v17;
    }
    while ( v17 < (int)v54->max_length );
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
        v57 = ceilf((float)maxPlayCnt / 10.0);
        if ( v57 == INFINITY )
          v58 = 5;
        else
          v58 = 60 * (int)v57 + 5;
        UIWidget__set_height((UIWidget_o *)Master_object, v58, 0LL);
        goto LABEL_79;
      }
LABEL_87:
      sub_1B8880C(Master_object, v7);
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
    ResultListWindow__showResultEffect(this, v59);
  else
    UnityEngine_MonoBehaviour__StartCoroutine(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12956/*"StartDisp"*/,
      0LL);
}


void __fastcall ResultListWindow__showResultEffect(ResultListWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F0B9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23152/*"setDisp"*/);
    byte_4A5F0B9 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_23152/*"setDisp"*/,
    0.3,
    0LL);
}


void __fastcall ResultListWindow__showResultItem(ResultListWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObj; // x0

  if ( (byte_4A5F0BC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19002/*"endDisp"*/);
    byte_4A5F0BC = 1;
  }
  dispObj = this->fields.dispObj;
  if ( !dispObj )
    sub_1B8880C(0LL, method);
  UnityEngine_GameObject__SetActive(dispObj, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_19002/*"endDisp"*/,
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
  int32_t _1__state; // w8
  struct ResultListWindow_o *_4__this; // x19
  UnityEngine_WaitForSeconds_o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  System_Collections_Generic_List_object__o *listRewardAction_5__2; // x0
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_Generic_List_object__o **p_listRewardAction_5__2; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  int v14; // w23
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  float v18; // s0
  unsigned int v19; // w9
  int maxPlayCnt; // w8
  signed int v21; // w9
  int v22; // w9
  unsigned int v23; // w8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  int v29; // w8
  int32_t v30; // w22
  System_Collections_Generic_List_object__o *v31; // x23
  Il2CppObject *Item; // x0
  const MethodInfo *v33; // x2
  System_Collections_IEnumerator_o *started; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Collections_Generic_List_ResultListWindow_RewardAction__o **v39; // x21
  int32_t v40; // w20
  int32_t v41; // w20
  float EFFECT_PLAY_TIME; // s0
  System_String_o *v43; // x1
  ResultListWindow_c *v44; // x0
  Il2CppObject **p__2__current; // x20

  if ( (byte_4A5F0C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    sub_1B885B0(&ResultListWindow_TypeInfo);
    sub_1B885B0(&ResultListWindow_RewardAction_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1B885B0(&StringLiteral_5982/*"EndOpen"*/);
    byte_4A5F0C5 = 1;
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
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, 0.2, 0LL);
      this->fields.__2__current = (Il2CppObject *)v5;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
      result = 1;
      this->fields.__1__state = 1;
      return result;
    }
    return 0;
  }
  this->fields.__1__state = -1;
  while ( 1 )
  {
    v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ResultListWindow_RewardAction__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction___ctor__);
    this->fields._listRewardAction_5__2 = (struct System_Collections_Generic_List_ResultListWindow_RewardAction__o *)v10;
    p_listRewardAction_5__2 = (System_Collections_Generic_List_object__o **)&this->fields._listRewardAction_5__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._listRewardAction_5__2, (int32_t)v10, v12, v13);
    if ( !_4__this )
      goto LABEL_69;
    v14 = 0;
    while ( v14 + _4__this->fields.playCnt < _4__this->fields.maxPlayCnt )
    {
      v15 = sub_1B887FC(ResultListWindow_RewardAction_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
      if ( !v15 )
        goto LABEL_69;
      *(_DWORD *)(v15 + 16) = v14;
      v18 = 0.0;
      v19 = v14 + _4__this->fields.playCnt;
      *(_DWORD *)(v15 + 20) = v19;
      maxPlayCnt = _4__this->fields.maxPlayCnt;
      if ( maxPlayCnt >= 51 && (int)(v19 + 1) >= 51 )
      {
        v21 = v19 / 0xA;
        v18 = (float)v21 / (float)((maxPlayCnt - 1) / 10);
        v22 = v21 + 1;
        v23 = maxPlayCnt / 0xAu;
        if ( v18 >= 0.85 || v22 == v23 )
          v18 = 1.0;
      }
      *(float *)(v15 + 24) = v18;
      listRewardAction_5__2 = *p_listRewardAction_5__2;
      if ( !*p_listRewardAction_5__2 )
        goto LABEL_69;
      items = listRewardAction_5__2->fields._items;
      v26 = Method_System_Collections_Generic_List_ResultListWindow_RewardAction__Add__;
      ++listRewardAction_5__2->fields._version;
      if ( !items )
        goto LABEL_69;
      size = listRewardAction_5__2->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listRewardAction_5__2,
          (Il2CppObject *)v15,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        listRewardAction_5__2->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), v15, v16, v17);
      }
      if ( ++v14 == 10 )
        break;
    }
    listRewardAction_5__2 = *p_listRewardAction_5__2;
    if ( !*p_listRewardAction_5__2 )
      goto LABEL_69;
    v29 = listRewardAction_5__2->fields._size;
    _4__this->fields.playCnt += v29;
    if ( v29 >= 1 )
    {
      v30 = 0;
      do
      {
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               listRewardAction_5__2,
                                                                               v30,
                                                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_69;
        v31 = listRewardAction_5__2;
        Item = System_Collections_Generic_List_object___get_Item(
                 *p_listRewardAction_5__2,
                 v30,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
        started = ResultListWindow__StartRewardAction(_4__this, (ResultListWindow_RewardAction_o *)Item, v33);
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                                                                               (UnityEngine_MonoBehaviour_o *)_4__this,
                                                                               started,
                                                                               0LL);
        if ( !v31 )
          goto LABEL_69;
        v31->fields._syncRoot = (Il2CppObject *)listRewardAction_5__2;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v31->fields._syncRoot,
          (int32_t)listRewardAction_5__2,
          v35,
          v36);
        listRewardAction_5__2 = *p_listRewardAction_5__2;
        if ( !*p_listRewardAction_5__2 )
          goto LABEL_69;
        v29 = listRewardAction_5__2->fields._size;
      }
      while ( ++v30 < v29 );
    }
    if ( !v29 || v29 == _4__this->fields.maxPlayCnt )
      goto LABEL_58;
LABEL_37:
    listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           listRewardAction_5__2,
                                                                           listRewardAction_5__2->fields._size - 1,
                                                                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
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
    v39 = &this->fields._listRewardAction_5__2;
    if ( _4__this->fields.isSkip )
    {
      listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v39;
      if ( *v39 )
      {
        v40 = 0;
        while ( v40 < listRewardAction_5__2->fields._size )
        {
          listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 listRewardAction_5__2,
                                                                                 v40,
                                                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ResultListWindow_RewardAction__get_Item__);
          if ( listRewardAction_5__2 )
          {
            UnityEngine_MonoBehaviour__StopCoroutine_69445272(
              (UnityEngine_MonoBehaviour_o *)_4__this,
              (UnityEngine_Coroutine_o *)listRewardAction_5__2->fields._syncRoot,
              0LL);
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)*v39;
            ++v40;
            if ( *v39 )
              continue;
          }
          goto LABEL_69;
        }
        listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
        if ( listRewardAction_5__2 )
        {
          v41 = 0;
          while ( v41 < listRewardAction_5__2->fields._size )
          {
            listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                   listRewardAction_5__2,
                                                                                   v41,
                                                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
            if ( listRewardAction_5__2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRewardAction_5__2, 1, 0LL);
              listRewardAction_5__2 = (System_Collections_Generic_List_object__o *)_4__this->fields.resultItemObjList;
              ++v41;
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
              v43 = (System_String_o *)StringLiteral_5982/*"EndOpen"*/;
            }
            else
            {
              if ( _4__this->fields.maxPlayCnt != 1 && _4__this->fields.playCnt != _4__this->fields.maxPlayCnt - 1 )
                return 0;
              v44 = ResultListWindow_TypeInfo;
              if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
                v44 = ResultListWindow_TypeInfo;
              }
              EFFECT_PLAY_TIME = v44->static_fields->EFFECT_PLAY_TIME;
              v43 = (System_String_o *)StringLiteral_5982/*"EndOpen"*/;
            }
            UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)_4__this, v43, EFFECT_PLAY_TIME, 0LL);
            return 0;
          }
        }
      }
LABEL_69:
      sub_1B8880C(listRewardAction_5__2, method);
    }
    *v39 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._listRewardAction_5__2, 0, v37, v38);
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v37, v38);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ResultListWindow__StartDisp_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  struct ResultListWindow_o *_4__this; // x20
  int32_t v5; // w9
  int32_t i_5__2; // w8
  struct ResultListWindow_RewardAction_o *rewardAction; // x8
  float maxDrawItemDispWaitTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  bool result; // w0
  int32_t v14; // w2
  int32_t v15; // w3
  int v16; // w23
  System_String_o **v17; // x8
  System_String_o *v18; // x21
  UnityEngine_Transform_o *v19; // x0
  const MethodInfo *v20; // x2
  ResultListWindow__StartRewardAction_d__48_o *v21; // x21
  struct ResultListWindow_RewardAction_o *v22; // x8
  ResultListWindow__StartRewardAction_d__48_o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x1
  BoxGachaUtility_c *v27; // x0
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  struct ResultListWindow_RewardAction_o *v32; // x8
  struct ResultListWindow_RewardAction_o *v33; // x8
  ResultListWindow_c *v34; // x0
  float scrollValue; // s0
  bool v36; // w0
  _BOOL4 isSkip; // w8
  int maxPlayCnt; // w23
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v40; // x2
  ResultListWindow__StartRewardAction_d__48_o *v41; // x21
  struct ResultListWindow_RewardAction_o *v42; // x8
  ResultListWindow__StartRewardAction_d__48_o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  const MethodInfo *v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  BoxGachaUtility_c *v49; // x0
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 _2__current_low; // x10
  __int64 v53; // x8
  Il2CppObject *ComponentInChildren_object; // x22
  Il2CppObject *v55; // x21
  ServantStatusBattleListViewItem_o *v56; // x19
  int v57; // w8
  float itemDropTime; // s8
  UnityEngine_WaitForSeconds_o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3

  v3 = this;
  if ( (byte_4A5F0C6 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ResultListWindow_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1B885B0(&StringLiteral_18808/*"ef_boxitem_drop_rare"*/);
    sub_1B885B0(&StringLiteral_18809/*"ef_boxitem_drop_scalable"*/);
    sub_1B885B0(&StringLiteral_18811/*"ef_boxitem_fall_scalable"*/);
    this = (ResultListWindow__StartRewardAction_d__48_o *)sub_1B885B0(&StringLiteral_5982/*"EndOpen"*/);
    byte_4A5F0C6 = 1;
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
          v9 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v9, maxDrawItemDispWaitTime, 0LL);
          v3->fields.__2__current = (Il2CppObject *)v9;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
          sub_1B88554(p__2__current, (int32_t)v9, v11, v12);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
LABEL_84:
        sub_1B8880C(this, method);
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
      v36 = ResultListWindow__checkRare(_4__this, rewardAction->fields.playCnt, v2);
      isSkip = _4__this->fields.isSkip;
      _4__this->fields.isRare = v36;
      if ( !isSkip || v36 )
      {
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.effectRoot;
        if ( !this )
          goto LABEL_84;
        maxPlayCnt = _4__this->fields.maxPlayCnt;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        this = (ResultListWindow__StartRewardAction_d__48_o *)BoxGachaResultEffectComponent__getEffect(
                                                                (System_String_o *)StringLiteral_18811/*"ef_boxitem_fall_scalable"*/,
                                                                transform,
                                                                v40);
        if ( !this )
          goto LABEL_84;
        v41 = this;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
        v42 = v3->fields.rewardAction;
        if ( !v42 )
          goto LABEL_84;
        v43 = this;
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.resultItemObjList;
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                                (System_Collections_Generic_List_object__o *)this,
                                                                v42->fields.playCnt,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !this )
          goto LABEL_84;
        this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL);
        if ( !v43 )
          goto LABEL_84;
        v43->fields.__4__this = (struct ResultListWindow_o *)this;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->fields.__4__this, (int32_t)this, v44, v45);
        SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v43, v46);
        if ( maxPlayCnt >= 11 )
        {
          v49 = BoxGachaUtility_TypeInfo;
          if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            v49 = BoxGachaUtility_TypeInfo;
          }
          GameObjectExtensions__SetLocalScale(
            (UnityEngine_GameObject_o *)v41,
            v49->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
            0LL);
        }
        this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.fallEffectObjList;
        if ( !this )
          goto LABEL_84;
        v50 = *(_QWORD *)&this->fields.__1__state;
        v51 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++HIDWORD(this->fields.__2__current);
        if ( !v50 )
          goto LABEL_84;
        _2__current_low = SLODWORD(this->fields.__2__current);
        if ( (unsigned int)_2__current_low >= *(_DWORD *)(v50 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v41,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = v50 + 8 * _2__current_low;
          LODWORD(this->fields.__2__current) = _2__current_low + 1;
          *(_QWORD *)(v53 + 32) = v41;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 32), (int32_t)v41, v47, v48);
        }
        if ( !_4__this->fields.isSkip )
        {
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         (UnityEngine_GameObject_o *)v41,
                                         (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
          v55 = UnityEngine_GameObject__GetComponentInChildren_object_(
                  (UnityEngine_GameObject_o *)v41,
                  (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
            SimpleAnimation__Play_63844704(
              (SimpleAnimation_o *)ComponentInChildren_object,
              _4__this->fields.aniName,
              0LL);
          }
          else
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)v55,
                                                                    0LL,
                                                                    0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v55 )
                goto LABEL_84;
              UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v55, _4__this->fields.aniName, 0LL);
            }
          }
        }
      }
      itemDropTime = _4__this->fields.itemDropTime;
      v59 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v59, itemDropTime, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v59;
      v56 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B88554(v56, (int32_t)v59, v60, v61);
      v57 = 2;
LABEL_83:
      *(_DWORD *)&v56[-1].fields.isMine = v57;
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
      v16 = _4__this->fields.maxPlayCnt;
      v17 = (System_String_o **)(_4__this->fields.isRare ? &StringLiteral_18808/*"ef_boxitem_drop_rare"*/ : &StringLiteral_18809/*"ef_boxitem_drop_scalable"*/);
      v18 = *v17;
      v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (ResultListWindow__StartRewardAction_d__48_o *)BoxGachaResultEffectComponent__getEffect(v18, v19, v20);
      if ( !this )
        goto LABEL_84;
      v21 = this;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__AddComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_SyncPositionComponent___);
      v22 = v3->fields.rewardAction;
      if ( !v22 )
        goto LABEL_84;
      v23 = this;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v22->fields.playCnt,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)this,
                                                              0LL);
      if ( !v23 )
        goto LABEL_84;
      v23->fields.__4__this = (struct ResultListWindow_o *)this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->fields.__4__this, (int32_t)this, v24, v25);
      SyncPositionComponent__SyncPosition((SyncPositionComponent_o *)v23, v26);
      if ( v16 >= 11 )
      {
        v27 = BoxGachaUtility_TypeInfo;
        if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
          v27 = BoxGachaUtility_TypeInfo;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v21,
          v27->static_fields->CHANGE_MAX_DRAW_EFFECT_SCALE,
          0LL);
      }
      if ( _4__this->fields.isRare )
        goto LABEL_76;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.dropEffectObjList;
      if ( !this )
        goto LABEL_84;
      v28 = *(_QWORD *)&this->fields.__1__state;
      v29 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v28 )
        goto LABEL_84;
      v30 = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v21,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = v28 + 8 * v30;
        LODWORD(this->fields.__2__current) = v30 + 1;
        *(_QWORD *)(v31 + 32) = v21;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v21, v14, v15);
      }
LABEL_76:
      v3->fields.__2__current = 0LL;
      v56 = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
      sub_1B88554(v56, 0, v14, v15);
      v57 = 3;
      goto LABEL_83;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_84;
      v32 = v3->fields.rewardAction;
      if ( !v32 )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)_4__this->fields.resultItemObjList;
      if ( !this )
        goto LABEL_84;
      this = (ResultListWindow__StartRewardAction_d__48_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              v32->fields.playCnt,
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !this )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v33 = v3->fields.rewardAction;
      if ( !v33 )
        goto LABEL_84;
      v33->fields.isEnd = 1;
      if ( !_4__this->fields.isDischargeGetEffectItem && v33->fields.playCnt == _4__this->fields.maxPlayCnt - 1 )
      {
        v34 = ResultListWindow_TypeInfo;
        if ( !ResultListWindow_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ResultListWindow_TypeInfo);
          v34 = ResultListWindow_TypeInfo;
        }
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)_4__this,
          (System_String_o *)StringLiteral_5982/*"EndOpen"*/,
          v34->static_fields->EFFECT_PLAY_TIME,
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ResultListWindow__StartRewardAction_d__48_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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