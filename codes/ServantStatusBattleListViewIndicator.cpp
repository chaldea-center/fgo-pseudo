void __fastcall ServantStatusBattleListViewIndicator___ctor(
        ServantStatusBattleListViewIndicator_o *this,
        const MethodInfo *method)
{
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


int32_t __fastcall ServantStatusBattleListViewIndicator__GetPageIndex(
        ServantStatusBattleListViewIndicator_o *this,
        const MethodInfo *method)
{
  return this->fields.pageIndex;
}


void __fastcall ServantStatusBattleListViewIndicator__OnClickBottom(
        ServantStatusBattleListViewIndicator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *manager; // x20
  __int64 v9; // x1
  ListViewManager_o *v10; // x0
  int32_t pageIndex; // w8
  bool v12; // w3
  int32_t v13; // w1
  struct ListViewManager_o *v14; // x8

  if ( (byte_42E6DE8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E6DE8 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_25;
    ListViewManager__FowardLoopItem(v10, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v10 = this->fields.manager;
      if ( v10 )
      {
        v12 = 1;
        v13 = this->fields.pageIndex + 1;
LABEL_23:
        ListViewManager__MoveCenterItem(v10, v13, 1, v12, 0.0, 0LL);
        return;
      }
      goto LABEL_25;
    }
    v14 = this->fields.manager;
    if ( !v14 )
      goto LABEL_25;
    if ( v14->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v10 = this->fields.manager;
      if ( v10 )
      {
        v13 = 0;
        v12 = 0;
        goto LABEL_23;
      }
LABEL_25:
      sub_B5D69C(v10, v9);
    }
  }
}


void __fastcall ServantStatusBattleListViewIndicator__OnClickTop(
        ServantStatusBattleListViewIndicator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *manager; // x20
  __int64 v9; // x1
  ListViewManager_o *v10; // x0
  int32_t pageIndex; // w8
  bool v12; // w3
  struct ListViewManager_o *v13; // x8

  if ( (byte_42E6DE7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E6DE7 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_24;
    ListViewManager__BackLoopItem(v10, 0LL);
    if ( this->fields.pageIndex >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v10 = this->fields.manager;
      if ( v10 )
      {
        pageIndex = this->fields.pageIndex;
        v12 = 1;
LABEL_22:
        ListViewManager__MoveCenterItem(v10, pageIndex - 1, 1, v12, 0.0, 0LL);
        return;
      }
      goto LABEL_24;
    }
    v13 = this->fields.manager;
    if ( !v13 )
      goto LABEL_24;
    if ( v13->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v10 = this->fields.manager;
      if ( v10 )
      {
        pageIndex = this->fields.pageMax;
        v12 = 0;
        goto LABEL_22;
      }
LABEL_24:
      sub_B5D69C(v10, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewIndicator__OnModifyCenterItem(
        ServantStatusBattleListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        bool isTop,
        bool isBottom,
        bool isLeft,
        bool isRight,
        const MethodInfo *method)
{
  struct ListViewManager_o **p_manager; // x23
  __int64 v13; // x1
  UnityEngine_GameObject_o *bottomObject; // x0
  int32_t index; // w8

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)item,
    (System_String_array **)isTop,
    (System_Boolean_array **)isBottom,
    (System_Int32_array **)isLeft,
    (System_Int32_array *)isRight,
    (System_Int32_array *)method);
  bottomObject = (UnityEngine_GameObject_o *)*(p_manager - 2);
  if ( !bottomObject
    || (UnityEngine_GameObject__SetActive(bottomObject, isTop, 0LL), (bottomObject = this->fields.bottomObject) == 0LL) )
  {
    sub_B5D69C(bottomObject, v13);
  }
  UnityEngine_GameObject__SetActive(bottomObject, isBottom, 0LL);
  if ( item )
    index = item->fields.index;
  else
    index = -1;
  this->fields.pageIndex = index;
}


void __fastcall ServantStatusBattleListViewIndicator__OnModifyPosition(
        ServantStatusBattleListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusBattleListViewIndicator_o *v4; // x19
  bool isRight; // [xsp+8h] [xbp-18h] BYREF
  bool isLeft; // [xsp+Ch] [xbp-14h] BYREF
  bool isBottom; // [xsp+18h] [xbp-8h] BYREF
  bool isTop; // [xsp+1Ch] [xbp-4h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  isRight = 0;
  if ( !manager
    || (v4 = this,
        ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &isRight, 0LL),
        (this = (ServantStatusBattleListViewIndicator_o *)v4->fields.topObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isTop, 0LL),
        (this = (ServantStatusBattleListViewIndicator_o *)v4->fields.bottomObject) == 0LL) )
  {
    sub_B5D69C(this, manager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBottom, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewIndicator__SetIndexMax(
        ServantStatusBattleListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *topObject; // x0

  topObject = this->fields.topObject;
  this->fields.pageMax = max;
  this->fields.pageIndex = -1;
  if ( !topObject
    || (UnityEngine_GameObject__SetActive(topObject, 0, 0LL), (topObject = this->fields.bottomObject) == 0LL) )
  {
    sub_B5D69C(topObject, *(_QWORD *)&max);
  }
  UnityEngine_GameObject__SetActive(topObject, 0, 0LL);
}


void __fastcall ServantStatusBattleListViewIndicator__SetPageIndex(
        ServantStatusBattleListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.pageIndex = index;
}


void __fastcall ServantStatusBattleListViewIndicator__SetPageMax(
        ServantStatusBattleListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  this->fields.pageMax = max;
  this->fields.pageIndex = -1;
}