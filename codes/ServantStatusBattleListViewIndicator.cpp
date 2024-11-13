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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v7; // x1
  ListViewManager_o *v8; // x0
  int32_t pageIndex; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  bool v12; // w3
  int32_t v13; // w1
  struct ListViewManager_o *v14; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_4B11A21 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusBattleListViewIndicator_OnClickBottom__, v4, v5);
    byte_4B11A21 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v8 = this->fields.manager;
    if ( !v8 )
      goto LABEL_22;
    ListViewManager__FowardLoopItem(v8, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v10 = Method_ServantStatusBattleListViewIndicator_OnClickBottom__;
      if ( (*((_BYTE *)Method_ServantStatusBattleListViewIndicator_OnClickBottom__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusBattleListViewIndicator_OnClickBottom__);
      v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        v12 = 1;
        v13 = this->fields.pageIndex + 1;
LABEL_20:
        ListViewManager__MoveCenterItem(v8, v13, 1, v12, 0.0, 0LL);
        return;
      }
      goto LABEL_22;
    }
    v14 = this->fields.manager;
    if ( !v14 )
      goto LABEL_22;
    if ( v14->fields.isLoop )
    {
      v15 = Method_ServantStatusBattleListViewIndicator_OnClickBottom__;
      if ( (*((_BYTE *)Method_ServantStatusBattleListViewIndicator_OnClickBottom__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusBattleListViewIndicator_OnClickBottom__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        v13 = 0;
        v12 = 0;
        goto LABEL_20;
      }
LABEL_22:
      sub_1BCAA3C(v8, v7);
    }
  }
}


void __fastcall ServantStatusBattleListViewIndicator__OnClickTop(
        ServantStatusBattleListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v7; // x1
  ListViewManager_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t pageIndex; // w8
  bool v12; // w3
  struct ListViewManager_o *v13; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4B11A20 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusBattleListViewIndicator_OnClickTop__, v4, v5);
    byte_4B11A20 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v8 = this->fields.manager;
    if ( !v8 )
      goto LABEL_21;
    ListViewManager__BackLoopItem(v8, 0LL);
    if ( this->fields.pageIndex >= 1 )
    {
      v9 = Method_ServantStatusBattleListViewIndicator_OnClickTop__;
      if ( (*((_BYTE *)Method_ServantStatusBattleListViewIndicator_OnClickTop__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusBattleListViewIndicator_OnClickTop__);
      v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        pageIndex = this->fields.pageIndex;
        v12 = 1;
LABEL_19:
        ListViewManager__MoveCenterItem(v8, pageIndex - 1, 1, v12, 0.0, 0LL);
        return;
      }
      goto LABEL_21;
    }
    v13 = this->fields.manager;
    if ( !v13 )
      goto LABEL_21;
    if ( v13->fields.isLoop )
    {
      v14 = Method_ServantStatusBattleListViewIndicator_OnClickTop__;
      if ( (*((_BYTE *)Method_ServantStatusBattleListViewIndicator_OnClickTop__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusBattleListViewIndicator_OnClickTop__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        pageIndex = this->fields.pageMax;
        v12 = 0;
        goto LABEL_19;
      }
LABEL_21:
      sub_1BCAA3C(v8, v7);
    }
  }
}


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
  sub_1BCA784(&this->fields.manager, manager);
  bottomObject = (UnityEngine_GameObject_o *)*(p_manager - 2);
  if ( !bottomObject
    || (UnityEngine_GameObject__SetActive(bottomObject, isTop, 0LL), (bottomObject = this->fields.bottomObject) == 0LL) )
  {
    sub_1BCAA3C(bottomObject, v13);
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
  bool v5; // [xsp+0h] [xbp-20h] BYREF
  bool isLeft; // [xsp+4h] [xbp-1Ch] BYREF
  bool isBottom; // [xsp+8h] [xbp-18h] BYREF
  bool isTop; // [xsp+Ch] [xbp-14h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  v5 = 0;
  if ( !manager
    || (v4 = this,
        ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &v5, 0LL),
        (this = (ServantStatusBattleListViewIndicator_o *)v4->fields.topObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isTop, 0LL),
        (this = (ServantStatusBattleListViewIndicator_o *)v4->fields.bottomObject) == 0LL) )
  {
    sub_1BCAA3C(this, manager);
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
    sub_1BCAA3C(topObject, *(_QWORD *)&max);
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