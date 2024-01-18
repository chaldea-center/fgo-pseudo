void __fastcall ServantStatusCharaGraphListViewIndicator___ctor(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185FA5 & 1) == 0 )
  {
    sub_B2C35C(&UISprite___TypeInfo, method);
    byte_4185FA5 = 1;
  }
  v3 = (struct UISprite_array *)sub_B2C374(UISprite___TypeInfo, 4LL);
  this->fields.pageSpriteList = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.pageSpriteList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v8; // x8

  if ( (byte_4185FA3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4185FA3 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_24;
    ListViewManager__BackLoopItem(v6, 0LL);
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
      sub_B2C434(v6, v5);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewIndicator__OnClickRight(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  int32_t v8; // w1
  struct ListViewManager_o *v9; // x8

  if ( (byte_4185FA4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4185FA4 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_25;
    ListViewManager__FowardLoopItem(v6, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
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
        v8 = this->fields.pageIndex + 1;
LABEL_23:
        ListViewManager__MoveCenterItem(v6, v8, 1, 0, 0.0, 0LL);
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
      v6 = this->fields.manager;
      if ( v6 )
      {
        v8 = 0;
        goto LABEL_23;
      }
LABEL_25:
      sub_B2C434(v6, v5);
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
  sub_B2C2F8(
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
    sub_B2C434(leftObject, v14);
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
    sub_B2C434(this, manager);
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
    sub_B2C434(manager, active);
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
    sub_B2C434(leftObject, v4);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0LL);
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
  __int64 *v9; // x8
  __int64 v10; // x0

  v4 = this;
  if ( (byte_4185FA2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19631/*"img_slider_on"*/, *(_QWORD *)&index);
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_B2C35C(&StringLiteral_19630/*"img_slider_off"*/, v5);
    byte_4185FA2 = 1;
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
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
      }
      this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v7];
      if ( !this )
LABEL_13:
        sub_B2C434(this, *(_QWORD *)&index);
      if ( index == (_DWORD)v7 )
        v9 = &StringLiteral_19631/*"img_slider_on"*/;
      else
        v9 = &StringLiteral_19630/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v9, 0LL);
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
  System_String_o *v9; // x1
  float v10; // s1
  float v11; // s2
  int32_t pageMax; // w19
  float v13; // s8
  float v14; // s9
  __int64 v15; // x0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4185FA1 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_B2C35C(&StringLiteral_19630/*"img_slider_off"*/, *(_QWORD *)&max);
    byte_4185FA1 = 1;
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
      v15 = sub_B2C460(this);
      sub_B2C400(v15, 0LL);
    }
    this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v7];
    if ( this )
    {
      v9 = (int)v7 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19630/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v9, 0LL);
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
                                                               0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL),
        (this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageBaseObject) == 0LL)
    || (pageMax = v4->fields.pageMax,
        v13 = v10,
        v14 = v11,
        (this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL) )
  {
LABEL_14:
    sub_B2C434(this, *(_QWORD *)&max);
  }
  v16.fields.x = (float)(-10 * pageMax + 10);
  v16.fields.y = v13;
  v16.fields.z = v14;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v16, 0LL);
}