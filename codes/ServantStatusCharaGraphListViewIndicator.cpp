void __fastcall ServantStatusCharaGraphListViewIndicator___ctor(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F8720 & 1) == 0 )
  {
    sub_B16FFC(&UISprite___TypeInfo, method);
    byte_40F8720 = 1;
  }
  v4 = (struct UISprite_array *)sub_B17014(UISprite___TypeInfo, 4LL, v2);
  this->fields.pageSpriteList = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.pageSpriteList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


int32_t __fastcall ServantStatusCharaGraphListViewIndicator__GetPageIndex(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  return this->fields.pageIndex;
}


void __fastcall ServantStatusCharaGraphListViewIndicator__OnClickLeft(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v5; // x0
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v8; // x8

  if ( (byte_40F871E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F871E = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_24;
    ListViewManager__BackLoopItem(v5, 0LL);
    if ( this->fields.pageIndex >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_22:
        ListViewManager__MoveCenterItem(v6, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_24;
    }
    v8 = this->fields.manager;
    if ( !v8 )
      goto LABEL_24;
    if ( v8->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_22;
      }
LABEL_24:
      sub_B170D4();
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewIndicator__OnClickRight(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  ListViewManager_o *v7; // x0
  int32_t v8; // w1
  struct ListViewManager_o *v9; // x8

  if ( (byte_40F871F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F871F = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_25;
    ListViewManager__FowardLoopItem(v5, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v7 = this->fields.manager;
      if ( v7 )
      {
        v8 = this->fields.pageIndex + 1;
LABEL_23:
        ListViewManager__MoveCenterItem(v7, v8, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_25;
    }
    v9 = this->fields.manager;
    if ( !v9 )
      goto LABEL_25;
    if ( v9->fields.isLoop )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(7, 0LL);
      v7 = this->fields.manager;
      if ( v7 )
      {
        v8 = 0;
        goto LABEL_23;
      }
LABEL_25:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewIndicator__OnModifyCenterItem(
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
  char v10; // w22
  _BOOL4 isLoop; // w8
  _BOOL4 isEnableArrowObj; // w10
  UnityEngine_GameObject_o *leftObject; // x0
  char v16; // w9
  bool v17; // w23
  bool v18; // w10
  bool v19; // w8
  UnityEngine_GameObject_o *rightObject; // x0
  const MethodInfo *v21; // x2
  int32_t index; // w1

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  v10 = isRight;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)item,
    (System_String_array **)isTop,
    (System_Boolean_array **)isBottom,
    (System_Int32_array **)isLeft,
    (System_Int32_array *)isRight,
    (System_Int32_array *)method);
  if ( !*p_manager )
    goto LABEL_13;
  isLoop = (*p_manager)->fields.isLoop;
  isEnableArrowObj = this->fields.isEnableArrowObj;
  leftObject = this->fields.leftObject;
  v16 = isLeft | v10;
  if ( (*p_manager)->fields.isLoop )
    v10 |= isLeft;
  v17 = isEnableArrowObj;
  if ( !leftObject
    || ((v18 = isEnableArrowObj, !isLoop) ? (v19 = isLeft) : (v19 = v16),
        UnityEngine_GameObject__SetActive(leftObject, v19 && v18, 0LL),
        (rightObject = this->fields.rightObject) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(rightObject, v10 & v17, 0LL);
  if ( item )
    index = item->fields.index;
  else
    index = -1;
  ServantStatusCharaGraphListViewIndicator__SetPageIndex(this, index, v21);
}


void __fastcall ServantStatusCharaGraphListViewIndicator__OnModifyPosition(
        ServantStatusCharaGraphListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  struct ListViewManager_o *v5; // x8
  _BOOL4 isLoop; // w10
  _BOOL4 v7; // w9
  _BOOL4 isEnableArrowObj; // w10
  int v9; // w9
  UnityEngine_GameObject_o *leftObject; // x0
  UnityEngine_GameObject_o *rightObject; // x0
  bool isRight; // [xsp+8h] [xbp-18h] BYREF
  bool isLeft; // [xsp+Ch] [xbp-14h] BYREF
  bool isBottom; // [xsp+18h] [xbp-8h] BYREF
  bool isTop; // [xsp+1Ch] [xbp-4h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  isRight = 0;
  if ( !manager )
    goto LABEL_8;
  ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &isRight, 0LL);
  v5 = this->fields.manager;
  if ( !v5 )
    goto LABEL_8;
  isLoop = v5->fields.isLoop;
  v7 = isLeft;
  LOBYTE(v5) = isRight;
  if ( isLoop )
  {
    LODWORD(v5) = isRight || isLeft;
    v7 = (int)v5;
    isRight |= isLeft;
    isLeft = (char)v5;
  }
  isEnableArrowObj = this->fields.isEnableArrowObj;
  v9 = isEnableArrowObj && v7;
  isLeft = v9;
  isRight = (unsigned __int8)v5 & isEnableArrowObj;
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, v9 != 0, 0LL), (rightObject = this->fields.rightObject) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(rightObject, isRight, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
        ServantStatusCharaGraphListViewIndicator_o *this,
        bool active,
        const MethodInfo *method)
{
  ListViewManager_o *manager; // x0
  UnityEngine_GameObject_o *leftObject; // x0
  bool v7; // w20
  UnityEngine_GameObject_o *rightObject; // x0
  bool v9; // [xsp+0h] [xbp-20h] BYREF
  bool isLeft; // [xsp+4h] [xbp-1Ch] BYREF
  bool isBottom; // [xsp+8h] [xbp-18h] BYREF
  bool isTop; // [xsp+Ch] [xbp-14h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  v9 = 0;
  manager = this->fields.manager;
  this->fields.isEnableArrowObj = active;
  if ( !manager
    || (ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &v9, 0LL),
        (leftObject = this->fields.leftObject) == 0LL)
    || (v7 = active,
        UnityEngine_GameObject__SetActive(leftObject, isLeft && v7, 0LL),
        (rightObject = this->fields.rightObject) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(rightObject, v9 && v7, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewIndicator__SetIndexMax(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *leftObject; // x0
  UnityEngine_GameObject_o *rightObject; // x0

  ServantStatusCharaGraphListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0LL), (rightObject = this->fields.rightObject) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(rightObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewIndicator__SetPageIndex(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewIndicator_o *v4; // x19
  __int64 v5; // x1
  int pageMax; // w8
  __int64 v7; // x21
  struct UISprite_array *pageSpriteList; // x8
  UISprite_o *v9; // x0
  __int64 *v10; // x8

  v4 = this;
  if ( (byte_40F871D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19557/*"img_slider_on"*/, *(_QWORD *)&index);
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_B16FFC(&StringLiteral_19556/*"img_slider_off"*/, v5);
    byte_40F871D = 1;
  }
  pageMax = v4->fields.pageMax;
  v4->fields.pageIndex = index;
  if ( pageMax >= 1 )
  {
    v7 = 0LL;
    do
    {
      pageSpriteList = v4->fields.pageSpriteList;
      if ( !pageSpriteList )
        goto LABEL_13;
      if ( (unsigned int)v7 >= pageSpriteList->max_length )
      {
        sub_B17100(this, *(_QWORD *)&index, method);
        sub_B170A0();
      }
      v9 = pageSpriteList->m_Items[v7];
      if ( !v9 )
LABEL_13:
        sub_B170D4();
      if ( index == (_DWORD)v7 )
        v10 = &StringLiteral_19557/*"img_slider_on"*/;
      else
        v10 = &StringLiteral_19556/*"img_slider_off"*/;
      UISprite__set_spriteName(v9, (System_String_o *)*v10, 0LL);
      ++v7;
    }
    while ( (int)v7 < v4->fields.pageMax );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewIndicator__SetPageMax(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewIndicator_o *v4; // x19
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w9
  __int64 v7; // x21
  int v8; // w9
  UISprite_o *v9; // x0
  System_String_o *v10; // x1
  UnityEngine_GameObject_o *pageBaseObject; // x0
  UnityEngine_Transform_o *transform; // x0
  float v13; // s1
  float v14; // s2
  UnityEngine_GameObject_o *v15; // x0
  int32_t pageMax; // w19
  float v17; // s8
  float v18; // s9
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_40F871C & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_B16FFC(&StringLiteral_19556/*"img_slider_off"*/, *(_QWORD *)&max);
    byte_40F871C = 1;
  }
  pageSpriteList = v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_14;
  max_length = pageSpriteList->max_length;
  v7 = 0LL;
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
    {
      sub_B17100(this, *(_QWORD *)&max, method);
      sub_B170A0();
    }
    v9 = pageSpriteList->m_Items[v7];
    if ( v9 )
    {
      v10 = (int)v7 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19556/*"img_slider_off"*/;
      UISprite__set_spriteName(v9, v10, 0LL);
      pageSpriteList = v4->fields.pageSpriteList;
      ++v7;
      if ( pageSpriteList )
        continue;
    }
    goto LABEL_14;
  }
  pageBaseObject = v4->fields.pageBaseObject;
  if ( !pageBaseObject
    || (transform = UnityEngine_GameObject__get_transform(pageBaseObject, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v15 = v4->fields.pageBaseObject) == 0LL)
    || (pageMax = v4->fields.pageMax,
        v17 = v13,
        v18 = v14,
        (v19 = UnityEngine_GameObject__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_14:
    sub_B170D4();
  }
  v20.fields.x = (float)(-10 * pageMax + 10);
  v20.fields.y = v17;
  v20.fields.z = v18;
  UnityEngine_Transform__set_localPosition(v19, v20, 0LL);
}