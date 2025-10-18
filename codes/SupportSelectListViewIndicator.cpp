void SupportSelectListViewIndicator___ctor(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


void SupportSelectListViewIndicator__DrawPartyInfo(
        SupportSelectListViewIndicator_o *this,
        SupportSelectListViewItem_o *partyItem,
        const MethodInfo *method)
{
  SupportSelectListViewIndicator_o *v4; // x19
  UILabel_o *selectNameLabel; // x19
  struct SupportServantData_o *supportServantData; // x8
  SupportSelectListViewIndicator_o *v7; // x1

  v4 = this;
  if ( (byte_4C3F65E & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_12556/*"SUPPORT_SELECT_NAME"*/);
    this = (SupportSelectListViewIndicator_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F65E = 1;
  }
  selectNameLabel = v4->fields.selectNameLabel;
  if ( !partyItem )
  {
    if ( selectNameLabel )
    {
      v7 = (SupportSelectListViewIndicator_o *)StringLiteral_1/*""*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C372B4(this);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SupportSelectListViewIndicator_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12556/*"SUPPORT_SELECT_NAME"*/, 0);
  supportServantData = partyItem->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_12;
  this = (SupportSelectListViewIndicator_o *)System_String__Format(
                                               (System_String_o *)this,
                                               (Il2CppObject *)supportServantData->fields._deckName_k__BackingField,
                                               0);
  if ( !selectNameLabel )
    goto LABEL_12;
  v7 = this;
LABEL_11:
  UILabel__set_text(selectNameLabel, (System_String_o *)v7, 0);
}


void SupportSelectListViewIndicator__OnClickLeft(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4C3F65F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SupportSelectListViewIndicator_OnClickLeft__);
    byte_4C3F65F = 1;
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
      v5 = Method_SupportSelectListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C37070(Method_SupportSelectListViewIndicator_OnClickLeft__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_19:
        ListViewManager__MoveCenterItem(v4, pageIndex - 1, 1, 0, 0.0, 0);
        return;
      }
      goto LABEL_21;
    }
    v8 = this->fields.manager;
    if ( !v8 )
      goto LABEL_21;
    if ( v8->fields.isLoop )
    {
      v9 = Method_SupportSelectListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C37070(Method_SupportSelectListViewIndicator_OnClickLeft__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_19;
      }
LABEL_21:
      sub_1C372B4(v4);
    }
  }
}


void SupportSelectListViewIndicator__OnClickRight(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v4; // x0
  int32_t pageIndex; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t v8; // w1
  struct ListViewManager_o *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4C3F660 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SupportSelectListViewIndicator_OnClickRight__);
    byte_4C3F660 = 1;
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
      v6 = Method_SupportSelectListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C37070(Method_SupportSelectListViewIndicator_OnClickRight__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        v8 = this->fields.pageIndex + 1;
LABEL_20:
        ListViewManager__MoveCenterItem(v4, v8, 1, 0, 0.0, 0);
        return;
      }
      goto LABEL_22;
    }
    v9 = this->fields.manager;
    if ( !v9 )
      goto LABEL_22;
    if ( v9->fields.isLoop )
    {
      v10 = Method_SupportSelectListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C37070(Method_SupportSelectListViewIndicator_OnClickRight__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C3703C(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0, 0);
      v4 = this->fields.manager;
      if ( v4 )
      {
        v8 = 0;
        goto LABEL_20;
      }
LABEL_22:
      sub_1C372B4(v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectListViewIndicator__OnModifyCenterItem(
        SupportSelectListViewIndicator_o *this,
        ListViewManager_o *manager,
        ListViewItem_o *item,
        bool isTop,
        bool isBottom,
        bool isLeft,
        bool isRight,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *leftObject; // x0
  struct ListViewManager_o *v14; // x8
  _BOOL4 isLoop; // w8
  bool v16; // w9
  bool v17; // w8
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  __int64 naturalAligment; // x10
  ListViewItem_o *v21; // x1
  System_Action_o *modifyCenterItemCallBack; // x0

  if ( (byte_4C3F65B & 1) == 0 )
  {
    sub_1C37058(&SupportSelectListViewItem_TypeInfo);
    byte_4C3F65B = 1;
  }
  this->fields.manager = manager;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)item,
    (const MethodInfo *)isTop);
  v14 = this->fields.manager;
  if ( !v14 )
    goto LABEL_21;
  isLoop = v14->fields.isLoop;
  leftObject = this->fields.leftObject;
  v16 = isLeft || isRight;
  if ( isLoop )
    isRight |= isLeft;
  if ( !leftObject
    || (isLoop ? (v17 = v16) : (v17 = isLeft),
        UnityEngine_GameObject__SetActive(leftObject, v17, 0),
        (leftObject = this->fields.rightObject) == 0) )
  {
LABEL_21:
    sub_1C372B4(leftObject);
  }
  UnityEngine_GameObject__SetActive(leftObject, isRight, 0);
  if ( item )
  {
    SupportSelectListViewIndicator__SetPageIndex(this, item->fields.index, v18);
    naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
        v21 = item;
      else
        v21 = 0;
      goto LABEL_18;
    }
  }
  else
  {
    SupportSelectListViewIndicator__SetPageIndex(this, -1, v18);
  }
  v21 = 0;
LABEL_18:
  SupportSelectListViewIndicator__DrawPartyInfo(this, (SupportSelectListViewItem_o *)v21, v19);
  modifyCenterItemCallBack = this->fields.modifyCenterItemCallBack;
  if ( modifyCenterItemCallBack )
    ActionExtensions__Call(modifyCenterItemCallBack, 0);
}


void SupportSelectListViewIndicator__SetActive(
        SupportSelectListViewIndicator_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  bool v6; // w20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (v6 = isEnable,
        UnityEngine_GameObject__SetActive(gameObject, v6, 0),
        (gameObject = this->fields.pageBaseObject) == 0) )
  {
    sub_1C372B4(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, v6, 0);
}


void SupportSelectListViewIndicator__SetIndexMax(
        SupportSelectListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *leftObject; // x0

  SupportSelectListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0), (leftObject = this->fields.rightObject) == 0) )
  {
    sub_1C372B4(leftObject);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0);
}


void SupportSelectListViewIndicator__SetPageActive(
        SupportSelectListViewIndicator_o *this,
        int32_t index,
        bool active,
        const MethodInfo *method)
{
  struct UISprite_array *pageSpriteList; // x8

  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_6;
  if ( LODWORD(pageSpriteList->max_length) <= index )
    sub_1C372BC(this);
  this = (SupportSelectListViewIndicator_o *)pageSpriteList->m_Items[index];
  if ( !this
    || (this = (SupportSelectListViewIndicator_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0)) == 0 )
  {
LABEL_6:
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, active, 0);
}


void SupportSelectListViewIndicator__SetPageIndex(
        SupportSelectListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *v6; // x0
  __int64 v7; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v9; // x8
  System_String_o *v10; // x0
  UISprite_o *indexSprite; // x20
  int v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3F65D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_20580/*"img_slider_on"*/);
    sub_1C37058(&StringLiteral_22649/*"party_txt_"*/);
    sub_1C37058(&StringLiteral_20579/*"img_slider_off"*/);
    byte_4C3F65D = 1;
  }
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UISprite_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0, 0);
    if ( ((unsigned __int8)v6 & 1) != 0 && this->fields.pageMax >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          break;
        if ( (unsigned int)v7 >= LODWORD(pageSpriteList->max_length) )
          sub_1C372BC(v6);
        v6 = pageSpriteList->m_Items[v7];
        if ( !v6 )
          break;
        if ( index == (_DWORD)v7 )
          v9 = &StringLiteral_20580/*"img_slider_on"*/;
        else
          v9 = &StringLiteral_20579/*"img_slider_off"*/;
        UISprite__set_spriteName(v6, (System_String_o *)*v9, 0);
        if ( (int)++v7 >= this->fields.pageMax )
          goto LABEL_16;
      }
LABEL_20:
      sub_1C372B4(v6);
    }
LABEL_16:
    v12 = index + 1;
    v10 = System_Int32__ToString((int32_t)&v12, 0);
    indexSprite = this->fields.indexSprite;
    v6 = (UISprite_o *)System_String__Concat_63561656((System_String_o *)StringLiteral_22649/*"party_txt_"*/, v10, 0);
    if ( !indexSprite )
      goto LABEL_20;
    UISprite__set_spriteName(indexSprite, (System_String_o *)v6, 0);
    v6 = this->fields.indexSprite;
    if ( !v6 )
      goto LABEL_20;
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
}


void SupportSelectListViewIndicator__SetPageMax(
        SupportSelectListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  SupportSelectListViewIndicator_o *v4; // x19
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w9
  UnityEngine_Object_o *pageBaseObject; // x20
  struct UISprite_array *v8; // x8
  __int64 v9; // x20
  int v10; // w9
  System_String_o *v11; // x1

  v4 = this;
  if ( (byte_4C3F65C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewIndicator_o *)sub_1C37058(&StringLiteral_20579/*"img_slider_off"*/);
    byte_4C3F65C = 1;
  }
  pageSpriteList = v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_20;
  max_length = pageSpriteList->max_length;
  if ( max_length >= max )
    max_length = max;
  v4->fields.pageMax = max_length;
  v4->fields.pageIndex = -1;
  if ( max_length <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SupportSelectListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v8 = v4->fields.pageSpriteList;
  if ( !v8 )
LABEL_20:
    sub_1C372B4(this);
  v9 = 0;
  while ( 1 )
  {
    v10 = v8->max_length;
    if ( (int)v9 >= v10 )
      break;
    if ( (unsigned int)v9 >= v10 )
      sub_1C372BC(this);
    this = (SupportSelectListViewIndicator_o *)v8->m_Items[v9];
    if ( this )
    {
      v11 = (int)v9 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20579/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v11, 0);
      v8 = v4->fields.pageSpriteList;
      ++v9;
      if ( v8 )
        continue;
    }
    goto LABEL_20;
  }
}


void SupportSelectListViewIndicator__Start(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.modifyCenterItemCallBack = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.modifyCenterItemCallBack, 0, v2, v3);
}


void SupportSelectListViewIndicator__createSpriteList(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x8
  CGThumbnailListItem_o *p_pageSpriteList; // x19
  struct UISprite_array *pageSpriteList; // t1
  BalanceConfig_c *v6; // x0
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3F65A & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&UISprite___TypeInfo);
    byte_4C3F65A = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  p_pageSpriteList = (CGThumbnailListItem_o *)&this->fields.pageSpriteList;
  v3 = pageSpriteList;
  if ( !pageSpriteList || !v3->max_length )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    v7 = sub_1C37100(UISprite___TypeInfo, (unsigned int)v6->static_fields->SupportDeckMax);
    p_pageSpriteList->klass = (CGThumbnailListItem_c *)v7;
    sub_1C36FFC(p_pageSpriteList, v7, v8, v9);
  }
}


int32_t SupportSelectListViewIndicator__getPageIndex(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  return this->fields.pageIndex;
}


void SupportSelectListViewIndicator__setModifyCenterItemCallBack(
        SupportSelectListViewIndicator_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.modifyCenterItemCallBack = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.modifyCenterItemCallBack, (int32_t)callback, (int32_t)method, v3);
}


void SupportSelectListViewIndicator__setPageSprite(
        SupportSelectListViewIndicator_o *this,
        int32_t num,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  struct UISprite_array *pageSpriteList; // x21
  Il2CppClass **v7; // x0
  __int64 v8; // x0

  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    sub_1C372B4(this);
  if ( sprite )
  {
    this = (SupportSelectListViewIndicator_o *)sub_1C37194(sprite, pageSpriteList->obj.klass->_1.element_class);
    if ( !this )
    {
      v8 = sub_1C372D8();
      sub_1C37180(v8, 0);
    }
  }
  if ( LODWORD(pageSpriteList->max_length) <= num )
    sub_1C372BC(this);
  v7 = &pageSpriteList->obj.klass + num;
  v7[4] = (Il2CppClass *)sprite;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 4), (int32_t)sprite, (int32_t)sprite, method);
}