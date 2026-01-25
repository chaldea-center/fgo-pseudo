void ServantStatusCharaGraphListViewIndicator___ctor(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEA804 & 1) == 0 )
  {
    sub_1C7BAE8(&UISprite___TypeInfo);
    byte_4CEA804 = 1;
  }
  v3 = (struct UISprite_array *)sub_1C7BB90(UISprite___TypeInfo, 4);
  this->fields.pageSpriteList = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.pageSpriteList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


int32_t ServantStatusCharaGraphListViewIndicator__GetPageIndex(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  return this->fields.pageIndex;
}


void ServantStatusCharaGraphListViewIndicator__OnClickLeft(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4CEA802 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
    byte_4CEA802 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_21;
    ListViewManager__BackLoopItem(v5, 0);
    if ( this->fields.pageIndex >= 1 )
    {
      v6 = Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C7BB00(Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_19:
        ListViewManager__MoveCenterItem(v5, pageIndex - 1, 1, 0, 0.0, 0);
        return;
      }
      goto LABEL_21;
    }
    v9 = this->fields.manager;
    if ( !v9 )
      goto LABEL_21;
    if ( v9->fields.isLoop )
    {
      v10 = Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C7BB00(Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_19;
      }
LABEL_21:
      sub_1C7BD40(v5, v4);
    }
  }
}


void ServantStatusCharaGraphListViewIndicator__OnClickRight(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t v9; // w1
  struct ListViewManager_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4CEA803 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
    byte_4CEA803 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_22;
    ListViewManager__FowardLoopItem(v5, 0);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v7 = Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C7BB00(Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v9 = this->fields.pageIndex + 1;
LABEL_20:
        ListViewManager__MoveCenterItem(v5, v9, 1, 0, 0.0, 0);
        return;
      }
      goto LABEL_22;
    }
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_22;
    if ( v10->fields.isLoop )
    {
      v11 = Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C7BB00(Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v9 = 0;
        goto LABEL_20;
      }
LABEL_22:
      sub_1C7BD40(v5, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__OnModifyCenterItem(
        ServantStatusCharaGraphListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        bool isTop,
        bool isBottom,
        bool isLeft,
        bool isRight,
        const MethodInfo *method)
{
  struct ListViewManager_o **p_manager; // x23
  int v10; // w22
  _BOOL4 v11; // w21
  UnityEngine_GameObject_o *leftObject; // x0
  __int64 v14; // x1
  _BOOL4 isLoop; // w8
  char v16; // w9
  _BOOL4 isEnableArrowObj; // w23
  bool v18; // w8
  const MethodInfo *v19; // x2
  int32_t index; // w1

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  v10 = isRight;
  v11 = isLeft;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)item,
    isTop,
    (System_String_o *)isBottom,
    isLeft,
    isRight,
    (System_String_o *)method);
  if ( !*p_manager )
    goto LABEL_13;
  isLoop = (*p_manager)->fields.isLoop;
  leftObject = this->fields.leftObject;
  v16 = v11 | v10;
  if ( (*p_manager)->fields.isLoop )
    v10 |= v11;
  if ( !leftObject
    || ((isEnableArrowObj = this->fields.isEnableArrowObj, isLoop) ? (v18 = v16) : (v18 = v11),
        UnityEngine_GameObject__SetActive(leftObject, v18 && isEnableArrowObj, 0),
        (leftObject = this->fields.rightObject) == 0) )
  {
LABEL_13:
    sub_1C7BD40(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, (v10 & isEnableArrowObj) != 0, 0);
  if ( item )
    index = item->fields.index;
  else
    index = -1;
  ServantStatusCharaGraphListViewIndicator__SetPageIndex(this, index, v19);
}


void ServantStatusCharaGraphListViewIndicator__OnModifyPosition(
        ServantStatusCharaGraphListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewIndicator_o *v4; // x19
  struct ListViewManager_o *v5; // x8
  bool v6; // w10
  bool isEnableArrowObj; // w11
  bool v8; // w8
  bool v9; // w8
  bool value; // [xsp+0h] [xbp-20h] BYREF
  bool isLeft; // [xsp+4h] [xbp-1Ch] BYREF
  bool isBottom; // [xsp+8h] [xbp-18h] BYREF
  bool isTop; // [xsp+Ch] [xbp-14h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  value = 0;
  if ( !manager )
    goto LABEL_9;
  v4 = this;
  this = (ServantStatusCharaGraphListViewIndicator_o *)ListViewManager__GetCanScrollList(
                                                         manager,
                                                         &isTop,
                                                         &isBottom,
                                                         &isLeft,
                                                         &value,
                                                         0);
  v5 = v4->fields.manager;
  if ( !v5 )
    goto LABEL_9;
  v6 = value;
  isEnableArrowObj = v4->fields.isEnableArrowObj;
  if ( v5->fields.isLoop )
  {
    v6 = value || isLeft;
    v8 = value || isLeft;
  }
  else
  {
    v8 = isLeft;
  }
  v9 = isEnableArrowObj && v8;
  isLeft = v9;
  value = v6 && isEnableArrowObj;
  this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.leftObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9, 0),
        (this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.rightObject) == 0) )
  {
LABEL_9:
    sub_1C7BD40(this, manager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, value, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
        ServantStatusCharaGraphListViewIndicator_o *this,
        bool active,
        const MethodInfo *method)
{
  ListViewManager_o *manager; // x0
  bool v6; // w20
  bool isRight; // [xsp+8h] [xbp-28h] BYREF
  bool isLeft; // [xsp+Ch] [xbp-24h] BYREF
  bool isBottom; // [xsp+18h] [xbp-18h] BYREF
  bool isTop; // [xsp+1Ch] [xbp-14h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  isRight = 0;
  manager = this->fields.manager;
  this->fields.isEnableArrowObj = active;
  if ( !manager
    || (ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &isRight, 0),
        (manager = (ListViewManager_o *)this->fields.leftObject) == 0)
    || (v6 = active,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)manager, isLeft && v6, 0),
        (manager = (ListViewManager_o *)this->fields.rightObject) == 0) )
  {
    sub_1C7BD40(manager, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)manager, isRight && v6, 0);
}


void ServantStatusCharaGraphListViewIndicator__SetIndexMax(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *leftObject; // x0

  ServantStatusCharaGraphListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0), (leftObject = this->fields.rightObject) == 0) )
  {
    sub_1C7BD40(leftObject, v4);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__SetPageIndex(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewIndicator_o *v4; // x19
  int pageMax; // w8
  __int64 v6; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v8; // x8

  v4 = this;
  if ( (byte_4CEA801 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20751/*"img_slider_on"*/);
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_1C7BAE8(&StringLiteral_20750/*"img_slider_off"*/);
    byte_4CEA801 = 1;
  }
  pageMax = v4->fields.pageMax;
  v4->fields.pageIndex = index;
  if ( pageMax >= 1 )
  {
    v6 = 0;
    do
    {
      pageSpriteList = v4->fields.pageSpriteList;
      if ( !pageSpriteList )
        goto LABEL_13;
      if ( (unsigned int)v6 >= LODWORD(pageSpriteList->max_length) )
        sub_1C7BD48(this);
      this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v6];
      if ( !this )
LABEL_13:
        sub_1C7BD40(this, *(_QWORD *)&index);
      if ( index == (_DWORD)v6 )
        v8 = &StringLiteral_20751/*"img_slider_on"*/;
      else
        v8 = &StringLiteral_20750/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v8, 0);
      ++v6;
    }
    while ( (int)v6 < v4->fields.pageMax );
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusCharaGraphListViewIndicator__SetPageMax(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewIndicator_o *v4; // x19
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w9
  int32_t v7; // w11
  int32_t v8; // w20
  System_String_o *v9; // x1
  int32_t pageMax; // w19
  float y; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CEA800 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_1C7BAE8(&StringLiteral_20750/*"img_slider_off"*/);
    byte_4CEA800 = 1;
  }
  pageSpriteList = v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_21;
  max_length = pageSpriteList->max_length;
  if ( max_length >= max )
    v7 = max;
  else
    v7 = pageSpriteList->max_length;
  v4->fields.pageMax = v7;
  v4->fields.pageIndex = -1;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C7BD48(this);
      this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v8];
      if ( !this )
        break;
      v9 = v8 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20750/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v9, 0);
      pageSpriteList = v4->fields.pageSpriteList;
      if ( !pageSpriteList )
        break;
      max_length = pageSpriteList->max_length;
      if ( ++v8 >= max_length )
        goto LABEL_16;
    }
LABEL_21:
    sub_1C7BD40(this, *(_QWORD *)&max);
  }
LABEL_16:
  this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageBaseObject;
  if ( !this )
    goto LABEL_21;
  this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0);
  if ( !this )
    goto LABEL_21;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageBaseObject;
  if ( !this )
    goto LABEL_21;
  pageMax = v4->fields.pageMax;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0);
  if ( !this )
    goto LABEL_21;
  v14.fields.x = (float)(-10 * pageMax + 10);
  v14.fields.y = y;
  v14.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v14, 0);
}