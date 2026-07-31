void ServantStatusCharaGraphListViewIndicator___ctor(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593410E & 1) == 0 )
  {
    sub_21FFC50(&UISprite___TypeInfo);
    byte_593410E = 1;
  }
  v3 = (struct UISprite_array *)sub_21FFD10(UISprite___TypeInfo, 4);
  this->fields.pageSpriteList = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.pageSpriteList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  __int64 v2; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  int32_t *p_pageIndex; // x20
  ListViewManager_o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct ListViewManager_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_593410C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
    byte_593410C = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) )
  {
    p_pageIndex = &this->fields.pageIndex;
    if ( (this->fields.pageIndex & 0x80000000) == 0 )
    {
      v7 = this->fields.manager;
      if ( !v7 )
        goto LABEL_21;
      ListViewManager__BackLoopItem(v7, 0);
      if ( *p_pageIndex >= 1 )
      {
        v8 = Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__;
        if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_21FFC68(Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
        v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
        v7 = this->fields.manager;
        if ( !v7 )
          goto LABEL_21;
LABEL_19:
        ListViewManager__MoveCenterItem(v7, *p_pageIndex - 1, 1, 0, 0.0, 0, 0);
        return;
      }
      v10 = this->fields.manager;
      if ( !v10 )
        goto LABEL_21;
      if ( v10->fields.isLoop )
      {
        v11 = Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__;
        if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_21FFC68(Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
        v12 = (System_Reflection_MethodBase_o *)sub_21FFC34(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0);
        v7 = this->fields.manager;
        if ( !v7 )
LABEL_21:
          sub_21FFECC(v7, v5);
        p_pageIndex = &this->fields.pageMax;
        goto LABEL_19;
      }
    }
  }
}


void ServantStatusCharaGraphListViewIndicator__OnClickRight(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  int32_t v10; // w1
  struct ListViewManager_o *v11; // x8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0

  if ( (byte_593410D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
    byte_593410D = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_22;
    ListViewManager__FowardLoopItem(v6, 0);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v8 = Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_21FFC68(Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
      v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0, 0);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = this->fields.pageIndex + 1;
LABEL_20:
        ListViewManager__MoveCenterItem(v6, v10, 1, 0, 0.0, 0, 0);
        return;
      }
      goto LABEL_22;
    }
    v11 = this->fields.manager;
    if ( !v11 )
      goto LABEL_22;
    if ( v11->fields.isLoop )
    {
      v12 = Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_21FFC68(Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
      v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 7, 0, 0);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = 0;
        goto LABEL_20;
      }
LABEL_22:
      sub_21FFECC(v6, v5);
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
  char v9; // w22
  struct ListViewManager_o **p_manager; // x23
  UnityEngine_GameObject_o *leftObject; // x0
  __int64 v14; // x1
  _BOOL4 isLoop; // w8
  _BOOL4 isEnableArrowObj; // w10
  char v17; // w9
  bool v18; // w23
  bool v19; // w10
  bool v20; // w8
  const MethodInfo *v21; // x2
  int32_t index; // w1

  v9 = isRight;
  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (System_String_o *)item,
    (System_String_o *)isTop,
    isBottom,
    isLeft,
    isRight,
    (bool)method);
  if ( !*p_manager )
    goto LABEL_13;
  isLoop = (*p_manager)->fields.isLoop;
  isEnableArrowObj = this->fields.isEnableArrowObj;
  v17 = isLeft | v9;
  leftObject = this->fields.leftObject;
  if ( (*p_manager)->fields.isLoop )
    v9 |= isLeft;
  v18 = isEnableArrowObj;
  if ( !leftObject
    || ((v19 = isEnableArrowObj, isLoop) ? (v20 = v17) : (v20 = isLeft),
        UnityEngine_GameObject__SetActive(leftObject, v20 && v19, 0),
        (leftObject = this->fields.rightObject) == 0) )
  {
LABEL_13:
    sub_21FFECC(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, v9 & v18, 0);
  if ( item )
    index = item->fields.index;
  else
    index = -1;
  ServantStatusCharaGraphListViewIndicator__SetPageIndex(this, index, v21);
}


void ServantStatusCharaGraphListViewIndicator__OnModifyPosition(
        ServantStatusCharaGraphListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewIndicator_o *v4; // x19
  struct ListViewManager_o *v5; // x8
  _BOOL4 isLoop; // w10
  _BOOL4 v7; // w9
  _BOOL4 isEnableArrowObj; // w10
  int v9; // w9
  bool value; // [xsp+0h] [xbp-20h] BYREF
  bool isLeft; // [xsp+4h] [xbp-1Ch] BYREF
  bool isBottom; // [xsp+8h] [xbp-18h] BYREF
  bool isTop; // [xsp+Ch] [xbp-14h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  value = 0;
  if ( !manager )
    goto LABEL_8;
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
    goto LABEL_8;
  isLoop = v5->fields.isLoop;
  v7 = isLeft;
  LOBYTE(v5) = value;
  if ( isLoop )
  {
    LODWORD(v5) = value || isLeft;
    v7 = (int)v5;
    value |= isLeft;
    isLeft = (char)v5;
  }
  isEnableArrowObj = v4->fields.isEnableArrowObj;
  this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.leftObject;
  v9 = isEnableArrowObj && v7;
  isLeft = v9;
  value = (unsigned __int8)v5 & isEnableArrowObj;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9 != 0, 0),
        (this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.rightObject) == 0) )
  {
LABEL_8:
    sub_21FFECC(this, manager);
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

  manager = this->fields.manager;
  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  isRight = 0;
  this->fields.isEnableArrowObj = active;
  if ( !manager
    || (ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &isRight, 0),
        (manager = (ListViewManager_o *)this->fields.leftObject) == 0)
    || (v6 = active,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)manager, isLeft && v6, 0),
        (manager = (ListViewManager_o *)this->fields.rightObject) == 0) )
  {
    sub_21FFECC(manager, active);
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
    sub_21FFECC(leftObject, v4);
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
  if ( (byte_593410B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21533/*"img_slider_on"*/);
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_21FFC50(&StringLiteral_21532/*"img_slider_off"*/);
    byte_593410B = 1;
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
        sub_21FFED4(this);
      this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v6];
      if ( !this )
LABEL_13:
        sub_21FFECC(this, *(_QWORD *)&index);
      if ( index == (_DWORD)v6 )
        v8 = &StringLiteral_21533/*"img_slider_on"*/;
      else
        v8 = &StringLiteral_21532/*"img_slider_off"*/;
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
  __int64 v7; // x21
  int v8; // w9
  System_String_o *v9; // x1
  int32_t pageMax; // w19
  float y; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_593410A & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_21FFC50(&StringLiteral_21532/*"img_slider_off"*/);
    byte_593410A = 1;
  }
  pageSpriteList = v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_14;
  max_length = pageSpriteList->max_length;
  v7 = 0;
  if ( max_length >= max )
    max_length = max;
  v4->fields.pageMax = max_length;
  v4->fields.pageIndex = -1;
  while ( 1 )
  {
    v8 = pageSpriteList->max_length;
    if ( (int)v7 >= v8 )
      break;
    if ( (unsigned int)v7 >= v8 )
      sub_21FFED4(this);
    this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v7];
    if ( this )
    {
      v9 = (int)v7 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_21532/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v9, 0);
      pageSpriteList = v4->fields.pageSpriteList;
      ++v7;
      if ( pageSpriteList )
        continue;
    }
    goto LABEL_14;
  }
  this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageBaseObject;
  if ( !this
    || (this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageBaseObject) == 0)
    || (pageMax = v4->fields.pageMax,
        y = localPosition.fields.y,
        z = localPosition.fields.z,
        (this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0)) == 0) )
  {
LABEL_14:
    sub_21FFECC(this, *(_QWORD *)&max);
  }
  v14.fields.y = y;
  v14.fields.z = z;
  v14.fields.x = (float)(-10 * pageMax + 10);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v14, 0);
}