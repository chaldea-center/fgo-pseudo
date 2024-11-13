void __fastcall ServantStatusCharaGraphListViewIndicator___ctor(
        ServantStatusCharaGraphListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1219B & 1) == 0 )
  {
    sub_1BCA7E0(&UISprite___TypeInfo, method, v2);
    byte_4B1219B = 1;
  }
  v4 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, 4LL);
  this->fields.pageSpriteList = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.pageSpriteList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *manager; // x20
  __int64 v7; // x1
  ListViewManager_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v12; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4B12199 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__, v4, v5);
    byte_4B12199 = 1;
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
      v9 = Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
      v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_19:
        ListViewManager__MoveCenterItem(v8, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_21;
    }
    v12 = this->fields.manager;
    if ( !v12 )
      goto LABEL_21;
    if ( v12->fields.isLoop )
    {
      v13 = Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusCharaGraphListViewIndicator_OnClickLeft__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_19;
      }
LABEL_21:
      sub_1BCAA3C(v8, v7);
    }
  }
}


void __fastcall ServantStatusCharaGraphListViewIndicator__OnClickRight(
        ServantStatusCharaGraphListViewIndicator_o *this,
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
  int32_t v12; // w1
  struct ListViewManager_o *v13; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4B1219A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__, v4, v5);
    byte_4B1219A = 1;
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
      v10 = Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
      v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        v12 = this->fields.pageIndex + 1;
LABEL_20:
        ListViewManager__MoveCenterItem(v8, v12, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_22;
    }
    v13 = this->fields.manager;
    if ( !v13 )
      goto LABEL_22;
    if ( v13->fields.isLoop )
    {
      v14 = Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusCharaGraphListViewIndicator_OnClickRight__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 7, 0LL);
      v8 = this->fields.manager;
      if ( v8 )
      {
        v12 = 0;
        goto LABEL_20;
      }
LABEL_22:
      sub_1BCAA3C(v8, v7);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.manager,
    (int64_t)manager,
    (int64_t)item,
    isTop,
    (System_String_o *)isBottom,
    (BattleSetupInfo_o *)isLeft,
    (FollowerInfo_o *)isRight,
    (PartyListViewItem_o *)method);
  if ( !*p_manager )
    goto LABEL_13;
  isLoop = (*p_manager)->fields.isLoop;
  leftObject = this->fields.leftObject;
  v16 = v11 | v10;
  if ( (*p_manager)->fields.isLoop )
    v10 |= v11;
  if ( !leftObject
    || ((isEnableArrowObj = this->fields.isEnableArrowObj, isLoop) ? (v18 = v16) : (v18 = v11),
        UnityEngine_GameObject__SetActive(leftObject, v18 && isEnableArrowObj, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, (v10 & isEnableArrowObj) != 0, 0LL);
  if ( item )
    index = item->fields.index;
  else
    index = -1;
  ServantStatusCharaGraphListViewIndicator__SetPageIndex(this, index, v19);
}


void __fastcall ServantStatusCharaGraphListViewIndicator__OnModifyPosition(
        ServantStatusCharaGraphListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusCharaGraphListViewIndicator_o *v4; // x19
  struct ListViewManager_o *v5; // x8
  bool v6; // w10
  _BOOL4 isLoop; // w8
  bool isEnableArrowObj; // w11
  bool v9; // w8
  bool v10; // w8
  bool value; // [xsp+0h] [xbp-20h] BYREF
  bool isLeft; // [xsp+4h] [xbp-1Ch] BYREF
  bool isBottom; // [xsp+8h] [xbp-18h] BYREF
  bool isTop; // [xsp+Ch] [xbp-14h] BYREF

  isTop = 0;
  isBottom = 0;
  isLeft = 0;
  value = 0;
  if ( !manager )
    goto LABEL_11;
  v4 = this;
  this = (ServantStatusCharaGraphListViewIndicator_o *)ListViewManager__GetCanScrollList(
                                                         manager,
                                                         &isTop,
                                                         &isBottom,
                                                         &isLeft,
                                                         &value,
                                                         0LL);
  v5 = v4->fields.manager;
  if ( !v5 )
    goto LABEL_11;
  v6 = value;
  isLoop = v5->fields.isLoop;
  isEnableArrowObj = v4->fields.isEnableArrowObj;
  if ( isLoop )
    v6 = value || isLeft;
  v9 = isLoop ? value || isLeft : isLeft;
  v10 = isEnableArrowObj && v9;
  isLeft = v10;
  value = v6 && isEnableArrowObj;
  this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.leftObject;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v10, 0LL),
        (this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.rightObject) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, manager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, value, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusCharaGraphListViewIndicator__SetActiveArrowObject(
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
    || (ListViewManager__GetCanScrollList(manager, &isTop, &isBottom, &isLeft, &isRight, 0LL),
        (manager = (ListViewManager_o *)this->fields.leftObject) == 0LL)
    || (v6 = active,
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)manager, isLeft && v6, 0LL),
        (manager = (ListViewManager_o *)this->fields.rightObject) == 0LL) )
  {
    sub_1BCAA3C(manager, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)manager, isRight && v6, 0LL);
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
    sub_1BCAA3C(leftObject, v4);
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
  __int64 v6; // x2
  int pageMax; // w8
  __int64 v8; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v10; // x8

  v4 = this;
  if ( (byte_4B12198 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20687/*"img_slider_on"*/, *(_QWORD *)&index, method);
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_1BCA7E0(&StringLiteral_20686/*"img_slider_off"*/, v5, v6);
    byte_4B12198 = 1;
  }
  pageMax = v4->fields.pageMax;
  v4->fields.pageIndex = index;
  if ( pageMax >= 1 )
  {
    v8 = 0LL;
    do
    {
      pageSpriteList = v4->fields.pageSpriteList;
      if ( !pageSpriteList )
        goto LABEL_13;
      if ( (unsigned int)v8 >= pageSpriteList->max_length )
        sub_1BCAA44(this, *(_QWORD *)&index);
      this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v8];
      if ( !this )
LABEL_13:
        sub_1BCAA3C(this, *(_QWORD *)&index);
      if ( index == (_DWORD)v8 )
        v10 = &StringLiteral_20687/*"img_slider_on"*/;
      else
        v10 = &StringLiteral_20686/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v10, 0LL);
      ++v8;
    }
    while ( (int)v8 < v4->fields.pageMax );
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
  int32_t v7; // w11
  int32_t v8; // w20
  System_String_o *v9; // x1
  float v10; // s1
  float v11; // s2
  int32_t pageMax; // w19
  float v13; // s8
  float v14; // s9
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B12197 & 1) == 0 )
  {
    this = (ServantStatusCharaGraphListViewIndicator_o *)sub_1BCA7E0(&StringLiteral_20686/*"img_slider_off"*/, *(_QWORD *)&max, method);
    byte_4B12197 = 1;
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
        sub_1BCAA44(this, *(_QWORD *)&max);
      this = (ServantStatusCharaGraphListViewIndicator_o *)pageSpriteList->m_Items[v8];
      if ( !this )
        break;
      v9 = v8 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20686/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v9, 0LL);
      pageSpriteList = v4->fields.pageSpriteList;
      if ( !pageSpriteList )
        break;
      max_length = pageSpriteList->max_length;
      if ( ++v8 >= max_length )
        goto LABEL_16;
    }
LABEL_21:
    sub_1BCAA3C(this, *(_QWORD *)&max);
  }
LABEL_16:
  this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageBaseObject;
  if ( !this )
    goto LABEL_21;
  this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
  if ( !this )
    goto LABEL_21;
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (ServantStatusCharaGraphListViewIndicator_o *)v4->fields.pageBaseObject;
  if ( !this )
    goto LABEL_21;
  pageMax = v4->fields.pageMax;
  v13 = v10;
  v14 = v11;
  this = (ServantStatusCharaGraphListViewIndicator_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
  if ( !this )
    goto LABEL_21;
  v15.fields.x = (float)(-10 * pageMax + 10);
  v15.fields.y = v13;
  v15.fields.z = v14;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v15, 0LL);
}