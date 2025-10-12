void ServantStatusBattleListViewIndicator___ctor(
        ServantStatusBattleListViewIndicator_o *this,
        const MethodInfo *method)
{
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


int32_t ServantStatusBattleListViewIndicator__GetPageIndex(
        ServantStatusBattleListViewIndicator_o *this,
        const MethodInfo *method)
{
  return this->fields.pageIndex;
}


void ServantStatusBattleListViewIndicator__OnClickBottom(
        ServantStatusBattleListViewIndicator_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v4; // x0
  int32_t pageIndex; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  bool v8; // w3
  int32_t v9; // w1
  struct ListViewManager_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4C32DFD & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ServantStatusBattleListViewIndicator_OnClickBottom__);
    byte_4C32DFD = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v4 = this->fields.manager;
    if ( !v4 )
      goto LABEL_22;
    ListViewManager__FowardLoopItem(v4, 0);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v6 = Method_ServantStatusBattleListViewIndicator_OnClickBottom__;
      if ( (*((_BYTE *)Method_ServantStatusBattleListViewIndicator_OnClickBottom__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C32C38(Method_ServantStatusBattleListViewIndicator_OnClickBottom__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        v8 = 1;
        v9 = this->fields.pageIndex + 1;
LABEL_20:
        ListViewManager__MoveCenterItem(v4, v9, 1, v8, 0.0, 0);
        return;
      }
      goto LABEL_22;
    }
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_22;
    if ( v10->fields.isLoop )
    {
      v11 = Method_ServantStatusBattleListViewIndicator_OnClickBottom__;
      if ( (*((_BYTE *)Method_ServantStatusBattleListViewIndicator_OnClickBottom__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C32C38(Method_ServantStatusBattleListViewIndicator_OnClickBottom__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C32C04(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        v9 = 0;
        v8 = 0;
        goto LABEL_20;
      }
LABEL_22:
      sub_1C32E7C(v4);
    }
  }
}


void ServantStatusBattleListViewIndicator__OnClickTop(
        ServantStatusBattleListViewIndicator_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t pageIndex; // w8
  bool v8; // w3
  struct ListViewManager_o *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4C32DFC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_ServantStatusBattleListViewIndicator_OnClickTop__);
    byte_4C32DFC = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v4 = this->fields.manager;
    if ( !v4 )
      goto LABEL_21;
    ListViewManager__BackLoopItem(v4, 0);
    if ( this->fields.pageIndex >= 1 )
    {
      v5 = Method_ServantStatusBattleListViewIndicator_OnClickTop__;
      if ( (*((_BYTE *)Method_ServantStatusBattleListViewIndicator_OnClickTop__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C32C38(Method_ServantStatusBattleListViewIndicator_OnClickTop__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        pageIndex = this->fields.pageIndex;
        v8 = 1;
LABEL_19:
        ListViewManager__MoveCenterItem(v4, pageIndex - 1, 1, v8, 0.0, 0);
        return;
      }
      goto LABEL_21;
    }
    v9 = this->fields.manager;
    if ( !v9 )
      goto LABEL_21;
    if ( v9->fields.isLoop )
    {
      v10 = Method_ServantStatusBattleListViewIndicator_OnClickTop__;
      if ( (*((_BYTE *)Method_ServantStatusBattleListViewIndicator_OnClickTop__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C32C38(Method_ServantStatusBattleListViewIndicator_OnClickTop__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        pageIndex = this->fields.pageMax;
        v8 = 0;
        goto LABEL_19;
      }
LABEL_21:
      sub_1C32E7C(v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusBattleListViewIndicator__OnModifyCenterItem(
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
  UnityEngine_GameObject_o *bottomObject; // x0
  int32_t index; // w8

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)item,
    (const MethodInfo *)isTop);
  bottomObject = (UnityEngine_GameObject_o *)*(p_manager - 2);
  if ( !bottomObject
    || (UnityEngine_GameObject__SetActive(bottomObject, isTop, 0), (bottomObject = this->fields.bottomObject) == 0) )
  {
    sub_1C32E7C(bottomObject);
  }
  UnityEngine_GameObject__SetActive(bottomObject, isBottom, 0);
  if ( item )
    index = item->fields.index;
  else
    index = -1;
  this->fields.pageIndex = index;
}


void ServantStatusBattleListViewIndicator__OnModifyPosition(
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
        ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &v5, 0),
        (this = (ServantStatusBattleListViewIndicator_o *)v4->fields.topObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isTop, 0),
        (this = (ServantStatusBattleListViewIndicator_o *)v4->fields.bottomObject) == 0) )
  {
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBottom, 0);
}


void ServantStatusBattleListViewIndicator__SetIndexMax(
        ServantStatusBattleListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *topObject; // x0

  topObject = this->fields.topObject;
  this->fields.pageMax = max;
  this->fields.pageIndex = -1;
  if ( !topObject || (UnityEngine_GameObject__SetActive(topObject, 0, 0), (topObject = this->fields.bottomObject) == 0) )
    sub_1C32E7C(topObject);
  UnityEngine_GameObject__SetActive(topObject, 0, 0);
}


void ServantStatusBattleListViewIndicator__SetPageIndex(
        ServantStatusBattleListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  this->fields.pageIndex = index;
}


void ServantStatusBattleListViewIndicator__SetPageMax(
        ServantStatusBattleListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  this->fields.pageMax = max;
  this->fields.pageIndex = -1;
}