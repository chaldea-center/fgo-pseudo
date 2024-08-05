void __fastcall SupportSelectListViewIndicator___ctor(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall SupportSelectListViewIndicator__DrawPartyInfo(
        SupportSelectListViewIndicator_o *this,
        SupportSelectListViewItem_o *partyItem,
        const MethodInfo *method)
{
  SupportSelectListViewIndicator_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *selectNameLabel; // x19
  struct SupportServantData_o *supportServantData; // x8
  SupportSelectListViewIndicator_o *v9; // x1

  v4 = this;
  if ( (byte_49FAF31 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, partyItem);
    sub_1B64870(&StringLiteral_12401/*"SUPPORT_SELECT_NAME"*/, v5);
    this = (SupportSelectListViewIndicator_o *)sub_1B64870(&StringLiteral_1/*""*/, v6);
    byte_49FAF31 = 1;
  }
  selectNameLabel = v4->fields.selectNameLabel;
  if ( !partyItem )
  {
    if ( selectNameLabel )
    {
      v9 = (SupportSelectListViewIndicator_o *)StringLiteral_1/*""*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_1B64ACC(this, partyItem);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SupportSelectListViewIndicator_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12401/*"SUPPORT_SELECT_NAME"*/, 0LL);
  supportServantData = partyItem->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_12;
  this = (SupportSelectListViewIndicator_o *)System_String__Format(
                                               (System_String_o *)this,
                                               (Il2CppObject *)supportServantData->fields._deckName_k__BackingField,
                                               0LL);
  if ( !selectNameLabel )
    goto LABEL_12;
  v9 = this;
LABEL_11:
  UILabel__set_text(selectNameLabel, (System_String_o *)v9, 0LL);
}


void __fastcall SupportSelectListViewIndicator__OnClickLeft(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_49FAF32 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&Method_SupportSelectListViewIndicator_OnClickLeft__, v3);
    byte_49FAF32 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_21;
    ListViewManager__BackLoopItem(v6, 0LL);
    if ( this->fields.pageIndex >= 1 )
    {
      v7 = Method_SupportSelectListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B64888(Method_SupportSelectListViewIndicator_OnClickLeft__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_19:
        ListViewManager__MoveCenterItem(v6, pageIndex - 1, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_21;
    }
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_21;
    if ( v10->fields.isLoop )
    {
      v11 = Method_SupportSelectListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B64888(Method_SupportSelectListViewIndicator_OnClickLeft__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B64854(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_19;
      }
LABEL_21:
      sub_1B64ACC(v6, v5);
    }
  }
}


void __fastcall SupportSelectListViewIndicator__OnClickRight(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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

  if ( (byte_49FAF33 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&Method_SupportSelectListViewIndicator_OnClickRight__, v3);
    byte_49FAF33 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0LL, 0LL) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v6 = this->fields.manager;
    if ( !v6 )
      goto LABEL_22;
    ListViewManager__FowardLoopItem(v6, 0LL);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v8 = Method_SupportSelectListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B64888(Method_SupportSelectListViewIndicator_OnClickRight__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B64854(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = this->fields.pageIndex + 1;
LABEL_20:
        ListViewManager__MoveCenterItem(v6, v10, 1, 0, 0.0, 0LL);
        return;
      }
      goto LABEL_22;
    }
    v11 = this->fields.manager;
    if ( !v11 )
      goto LABEL_22;
    if ( v11->fields.isLoop )
    {
      v12 = Method_SupportSelectListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1B64888(Method_SupportSelectListViewIndicator_OnClickRight__);
      v13 = (System_Reflection_MethodBase_o *)sub_1B64854(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 7, 0LL);
      v6 = this->fields.manager;
      if ( v6 )
      {
        v10 = 0;
        goto LABEL_20;
      }
LABEL_22:
      sub_1B64ACC(v6, v5);
    }
  }
}


void __fastcall SupportSelectListViewIndicator__OnModifyCenterItem(
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
  __int64 v14; // x1
  struct ListViewManager_o *v15; // x8
  _BOOL4 isLoop; // w8
  bool v17; // w9
  bool v18; // w8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 methodPtr_low; // x10
  ListViewItem_o *v22; // x1
  System_Action_o *modifyCenterItemCallBack; // x0

  if ( (byte_49FAF2E & 1) == 0 )
  {
    sub_1B64870(&SupportSelectListViewItem_TypeInfo, manager);
    byte_49FAF2E = 1;
  }
  this->fields.manager = manager;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)manager, (int32_t)item, isTop);
  v15 = this->fields.manager;
  if ( !v15 )
    goto LABEL_21;
  isLoop = v15->fields.isLoop;
  leftObject = this->fields.leftObject;
  v17 = isLeft || isRight;
  if ( isLoop )
    isRight |= isLeft;
  if ( !leftObject
    || (isLoop ? (v18 = v17) : (v18 = isLeft),
        UnityEngine_GameObject__SetActive(leftObject, v18, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
LABEL_21:
    sub_1B64ACC(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, isRight, 0LL);
  if ( item )
  {
    SupportSelectListViewIndicator__SetPageIndex(this, item->fields.index, v19);
    methodPtr_low = LOBYTE(SupportSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportSelectListViewItem_TypeInfo )
        v22 = item;
      else
        v22 = 0LL;
      goto LABEL_18;
    }
  }
  else
  {
    SupportSelectListViewIndicator__SetPageIndex(this, -1, v19);
  }
  v22 = 0LL;
LABEL_18:
  SupportSelectListViewIndicator__DrawPartyInfo(this, (SupportSelectListViewItem_o *)v22, v20);
  modifyCenterItemCallBack = this->fields.modifyCenterItemCallBack;
  if ( modifyCenterItemCallBack )
    ActionExtensions__Call(modifyCenterItemCallBack, 0LL);
}


void __fastcall SupportSelectListViewIndicator__SetActive(
        SupportSelectListViewIndicator_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  bool v7; // w20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v7 = isEnable,
        UnityEngine_GameObject__SetActive(gameObject, v7, 0LL),
        (gameObject = this->fields.pageBaseObject) == 0LL) )
  {
    sub_1B64ACC(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, v7, 0LL);
}


void __fastcall SupportSelectListViewIndicator__SetIndexMax(
        SupportSelectListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *leftObject; // x0

  SupportSelectListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0LL), (leftObject = this->fields.rightObject) == 0LL) )
  {
    sub_1B64ACC(leftObject, v4);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewIndicator__SetPageActive(
        SupportSelectListViewIndicator_o *this,
        int32_t index,
        bool active,
        const MethodInfo *method)
{
  struct UISprite_array *pageSpriteList; // x8

  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_6;
  if ( pageSpriteList->max_length <= index )
    sub_1B64AD4(this, *(_QWORD *)&index);
  this = (SupportSelectListViewIndicator_o *)pageSpriteList->m_Items[index];
  if ( !this
    || (this = (SupportSelectListViewIndicator_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_6:
    sub_1B64ACC(this, *(_QWORD *)&index);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewIndicator__SetPageIndex(
        SupportSelectListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v13; // x8
  System_String_o *v14; // x0
  UISprite_o *indexSprite; // x20
  int v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FAF30 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_1B64870(&StringLiteral_20390/*"img_slider_on"*/, v5);
    sub_1B64870(&StringLiteral_22388/*"party_txt_"*/, v6);
    sub_1B64870(&StringLiteral_20389/*"img_slider_off"*/, v7);
    byte_49FAF30 = 1;
  }
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UISprite_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 && this->fields.pageMax >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          break;
        if ( (unsigned int)v11 >= pageSpriteList->max_length )
          sub_1B64AD4(v9, v10);
        v9 = pageSpriteList->m_Items[v11];
        if ( !v9 )
          break;
        if ( index == (_DWORD)v11 )
          v13 = &StringLiteral_20390/*"img_slider_on"*/;
        else
          v13 = &StringLiteral_20389/*"img_slider_off"*/;
        UISprite__set_spriteName(v9, (System_String_o *)*v13, 0LL);
        if ( (int)++v11 >= this->fields.pageMax )
          goto LABEL_16;
      }
LABEL_20:
      sub_1B64ACC(v9, v10);
    }
LABEL_16:
    v16 = index + 1;
    v14 = System_Int32__ToString((int32_t)&v16, 0LL);
    indexSprite = this->fields.indexSprite;
    v9 = (UISprite_o *)System_String__Concat_61383576((System_String_o *)StringLiteral_22388/*"party_txt_"*/, v14, 0LL);
    if ( !indexSprite )
      goto LABEL_20;
    UISprite__set_spriteName(indexSprite, (System_String_o *)v9, 0LL);
    v9 = this->fields.indexSprite;
    if ( !v9 )
      goto LABEL_20;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
      v9,
      v9->klass->vtable._34_get_minWidth.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewIndicator__SetPageMax(
        SupportSelectListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  SupportSelectListViewIndicator_o *v4; // x19
  __int64 v5; // x1
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w9
  UnityEngine_Object_o *pageBaseObject; // x20
  struct UISprite_array *v9; // x8
  __int64 v10; // x20
  int v11; // w9
  System_String_o *v12; // x1

  v4 = this;
  if ( (byte_49FAF2F & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    this = (SupportSelectListViewIndicator_o *)sub_1B64870(&StringLiteral_20389/*"img_slider_off"*/, v5);
    byte_49FAF2F = 1;
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
  this = (SupportSelectListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v9 = v4->fields.pageSpriteList;
  if ( !v9 )
LABEL_20:
    sub_1B64ACC(this, *(_QWORD *)&max);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = v9->max_length;
    if ( (int)v10 >= v11 )
      break;
    if ( (unsigned int)v10 >= v11 )
      sub_1B64AD4(this, *(_QWORD *)&max);
    this = (SupportSelectListViewIndicator_o *)v9->m_Items[v10];
    if ( this )
    {
      v12 = (int)v10 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20389/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v12, 0LL);
      v9 = v4->fields.pageSpriteList;
      ++v10;
      if ( v9 )
        continue;
    }
    goto LABEL_20;
  }
}


void __fastcall SupportSelectListViewIndicator__Start(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.modifyCenterItemCallBack = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.modifyCenterItemCallBack, 0, v2, v3);
}


void __fastcall SupportSelectListViewIndicator__createSpriteList(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UISprite_array *v4; // x8
  ServantStatusBattleListViewItem_o *p_pageSpriteList; // x19
  struct UISprite_array *pageSpriteList; // t1
  BalanceConfig_c *v7; // x0
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FAF2D & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, method);
    sub_1B64870(&UISprite___TypeInfo, v3);
    byte_49FAF2D = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  p_pageSpriteList = (ServantStatusBattleListViewItem_o *)&this->fields.pageSpriteList;
  v4 = pageSpriteList;
  if ( !pageSpriteList || !*(_QWORD *)&v4->max_length )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = sub_1B64918(UISprite___TypeInfo, (unsigned int)v7->static_fields->SupportDeckMax);
    p_pageSpriteList->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B64814(p_pageSpriteList, v8, v9, v10);
  }
}


int32_t __fastcall SupportSelectListViewIndicator__getPageIndex(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  return this->fields.pageIndex;
}


void __fastcall SupportSelectListViewIndicator__setModifyCenterItemCallBack(
        SupportSelectListViewIndicator_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.modifyCenterItemCallBack = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.modifyCenterItemCallBack,
    (int32_t)callback,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewIndicator__setPageSprite(
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
    sub_1B64ACC(this, num);
  if ( sprite )
  {
    this = (SupportSelectListViewIndicator_o *)sub_1B649AC(sprite, pageSpriteList->obj.klass->_1.element_class);
    if ( !this )
    {
      v8 = sub_1B64AF0();
      sub_1B64998(v8, 0LL);
    }
  }
  if ( pageSpriteList->max_length <= num )
    sub_1B64AD4(this, *(_QWORD *)&num);
  v7 = &pageSpriteList->obj.klass + num;
  v7[4] = (Il2CppClass *)sprite;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 4), (int32_t)sprite, (int32_t)sprite, (int32_t)method);
}