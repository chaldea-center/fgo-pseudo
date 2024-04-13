void __fastcall ServantStatusCharaGraphListViewIndicator___ctor(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UISprite_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6E0B & 1) == 0 )
  {
    sub_B5D5C4(&UISprite___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6E0B = 1;
  }
  v5 = (struct UISprite_array *)sub_B5D5DC(UISprite___TypeInfo, 4LL);
  this->fields.pageSpriteList = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.pageSpriteList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *manager; // x20
  __int64 v9; // x1
  ListViewManager_o *v10; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v12; // x8

  if ( (byte_42E6E09 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E6E09 = 1;
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
LABEL_22:
        ListViewManager__MoveCenterItem(v10, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_24;
    }
    v12 = this->fields.manager;
    if ( !v12 )
      goto LABEL_24;
    if ( v12->fields.isLoop )
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
        goto LABEL_22;
      }
LABEL_24:
      sub_B5D69C(v10, v9);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewIndicator__OnClickRight(
        ServantStatusCharaGraphListViewIndicator_o *this,
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
  int32_t v12; // w1
  struct ListViewManager_o *v13; // x8

  if ( (byte_42E6E0A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E6E0A = 1;
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
        v12 = this->fields.pageIndex + 1;
LABEL_23:
        ListViewManager__MoveCenterItem(v10, v12, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_25;
    }
    v13 = this->fields.manager;
    if ( !v13 )
      goto LABEL_25;
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
        v12 = 0;
        goto LABEL_23;
      }
LABEL_25:
      sub_B5D69C(v10, v9);
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

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  v10 = isRight;
  sub_B5D560(
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
  v17 = isLeft | v10;
  if ( (*p_manager)->fields.isLoop )
    v10 |= isLeft;
  v18 = isEnableArrowObj;
  if ( !leftObject
    || ((v19 = isEnableArrowObj, !isLoop) ? (v20 = isLeft) : (v20 = v17),
        UnityEngine_GameObject__SetActive(leftObject, v20 && v19, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, v10 & v18, 0LL);
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
  ServantStatusCharaGraphListViewIndicator_o *v4; // x19
  struct ListViewManager_o *v5; // x8
  _BOOL4 isLoop; // w10
  _BOOL4 v7; // w9
  _BOOL4 isEnableArrowObj; // w10
  int v9; // w9
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
  v4 = this;
  this = (ServantStatusCharaGraphListViewIndicator_o *)ListViewManager__GetCanScrollList(
                                                         manager,
                                                         &isTop,
                                                         &isBottom,
                                                         &isLeft,
                                                         &isRight,
                                                         0LL);
  v5 = v4->fields.manager;
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
  isEnableArrowObj = v4->fields.isEnableArrowObj;
  v9 = isEnableArrowObj && v7;
  isLeft = v9;
  isRight = (unsigned __int8)v5 & isEnableArrowObj;
  this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.leftObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9 != 0, 0LL),
        (this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.rightObject) == 0LL) )
  {
LABEL_8:
    sub_B5D69C(this, manager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isRight, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
        ServantStatusCharaGraphListViewIndicator_o *this,
        bool active,
        const MethodInfo *method)
{
  ListViewManager_o *manager; // x0
  bool v6; // w20
  bool v7; // [xsp+0h] [xbp-20h] BYREF
  bool isLeft; // [xsp+4h] [xbp-1Ch] BYREF
  bool isBottom; // [xsp+8h] [xbp-18h] BYREF
  bool isTop; // [xsp+Ch] [xbp-14h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  v7 = 0;
  manager = this->fields.manager;
  this->fields.isEnableArrowObj = active;
  if ( !manager
    || (ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &v7, 0LL),
        (manager = (ListViewManager_o *)this->fields.leftObject) == 0LL)
    || (v6 = active,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)manager, isLeft && v6, 0LL),
        (manager = (ListViewManager_o *)this->fields.rightObject) == 0LL) )
  {
    sub_B5D69C(manager, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)manager, v7 && v6, 0LL);
}


void __fastcall ServantStatusCharaGraphListViewIndicator__SetIndexMax(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *leftObject; // x0

  ServantStatusCharaGraphListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0LL), (leftObject = this->fields.rightObject) == 0LL) )
  {
    sub_B5D69C(leftObject, v4);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewIndicator__SetPageIndex(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusCharaGraphListViewIndicator_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int pageMax; // w8
  __int64 v10; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v12; // x8
  __int64 v13; // x0

  v5 = this;
  if ( (byte_42E6E08 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19880/*"img_slider_on"*/, index, (_DWORD)method, v3);
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_B5D5C4(&StringLiteral_19879/*"img_slider_off"*/, v6, v7, v8);
    byte_42E6E08 = 1;
  }
  pageMax = v5->fields.pageMax;
  v5->fields.pageIndex = index;
  if ( pageMax >= 1 )
  {
    v10 = 0LL;
    do
    {
      pageSpriteList = v5->fields.pageSpriteList;
      if ( !pageSpriteList )
        goto LABEL_13;
      if ( (unsigned int)v10 >= pageSpriteList->max_length )
      {
        v13 = sub_B5D6C8(this);
        sub_B5D668(v13, 0LL);
      }
      this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v10];
      if ( !this )
LABEL_13:
        sub_B5D69C(this, *(_QWORD *)&index);
      if ( index == (_DWORD)v10 )
        v12 = &StringLiteral_19880/*"img_slider_on"*/;
      else
        v12 = &StringLiteral_19879/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v12, 0LL);
      ++v10;
    }
    while ( (int)v10 < v5->fields.pageMax );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewIndicator__SetPageMax(
        ServantStatusCharaGraphListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantStatusCharaGraphListViewIndicator_o *v5; // x19
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w9
  __int64 v8; // x21
  int v9; // w9
  System_String_o *v10; // x1
  float v11; // s1
  float v12; // s2
  int32_t pageMax; // w19
  float v14; // s8
  float v15; // s9
  __int64 v16; // x0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E6E07 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_B5D5C4(&StringLiteral_19879/*"img_slider_off"*/, max, (_DWORD)method, v3);
    byte_42E6E07 = 1;
  }
  pageSpriteList = v5->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_14;
  max_length = pageSpriteList->max_length;
  v8 = 0LL;
  if ( max_length >= max )
    max_length = max;
  v5->fields.pageMax = max_length;
  v5->fields.pageIndex = -1;
  while ( 1 )
  {
    v9 = pageSpriteList->max_length;
    if ( (int)v8 >= v9 )
      break;
    if ( (unsigned int)v8 >= v9 )
    {
      v16 = sub_B5D6C8(this);
      sub_B5D668(v16, 0LL);
    }
    this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v8];
    if ( this )
    {
      v10 = (int)v8 >= v5->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19879/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v10, 0LL);
      pageSpriteList = v5->fields.pageSpriteList;
      ++v8;
      if ( pageSpriteList )
        continue;
    }
    goto LABEL_14;
  }
  this = (ServantStatusCharaGraphListViewIndicator_o *)v5->fields.pageBaseObject;
  if ( !this
    || (this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                               (UnityEngine_GameObject_o *)this,
                                                               0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL),
        (this = (ServantStatusCharaGraphListViewIndicator_o *)v5->fields.pageBaseObject) == 0LL)
    || (pageMax = v5->fields.pageMax,
        v14 = v11,
        v15 = v12,
        (this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(this, *(_QWORD *)&max);
  }
  v17.fields.x = (float)(-10 * pageMax + 10);
  v17.fields.y = v14;
  v17.fields.z = v15;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v17, 0LL);
}