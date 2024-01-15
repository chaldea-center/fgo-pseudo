void __fastcall SupportSelectListViewIndicator___ctor(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall SupportSelectListViewIndicator__DrawPartyInfo(
        SupportSelectListViewIndicator_o *this,
        SupportSelectListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *selectNameLabel; // x19
  System_String_o *v8; // x0
  struct SupportServantData_o *supportServantData; // x8
  System_String_o *v10; // x0
  System_String_o *v11; // x1

  if ( (byte_40FD225 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, partyItem);
    sub_B16FFC(&StringLiteral_12490/*"SUPPORT_SELECT_NAME"*/, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FD225 = 1;
  }
  selectNameLabel = this->fields.selectNameLabel;
  if ( !partyItem )
  {
    if ( selectNameLabel )
    {
      v11 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12490/*"SUPPORT_SELECT_NAME"*/, 0LL);
  supportServantData = partyItem->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_13;
  v10 = System_String__Format(v8, (Il2CppObject *)supportServantData->fields._deckName_k__BackingField, 0LL);
  if ( !selectNameLabel )
    goto LABEL_13;
  v11 = v10;
LABEL_12:
  UILabel__set_text(selectNameLabel, v11, 0LL);
}


void __fastcall SupportSelectListViewIndicator__OnClickLeft(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v5; // x0
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v8; // x8

  if ( (byte_40FD226 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FD226 = 1;
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


void __fastcall SupportSelectListViewIndicator__OnClickRight(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  ListViewManager_o *v7; // x0
  int32_t v8; // w1
  struct ListViewManager_o *v9; // x8

  if ( (byte_40FD227 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FD227 = 1;
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
  char v8; // w22
  struct ListViewManager_o *v13; // x8
  _BOOL4 isLoop; // w8
  UnityEngine_GameObject_o *leftObject; // x0
  char v16; // w9
  bool v17; // w8
  UnityEngine_GameObject_o *rightObject; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x10
  ListViewItem_o *v22; // x1
  System_Action_o *modifyCenterItemCallBack; // x0

  v8 = isRight;
  if ( (byte_40FD222 & 1) == 0 )
  {
    sub_B16FFC(&SupportSelectListViewItem_TypeInfo, manager);
    byte_40FD222 = 1;
  }
  this->fields.manager = manager;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)item,
    (System_String_array **)isTop,
    (System_Boolean_array **)isBottom,
    (System_Int32_array **)isLeft,
    (System_Int32_array *)isRight,
    (System_Int32_array *)method);
  v13 = this->fields.manager;
  if ( !v13 )
    goto LABEL_21;
  isLoop = v13->fields.isLoop;
  leftObject = this->fields.leftObject;
  v16 = isLeft | v8;
  if ( isLoop )
    v8 |= isLeft;
  if ( !leftObject
    || (!isLoop ? (v17 = isLeft) : (v17 = v16),
        UnityEngine_GameObject__SetActive(leftObject, v17, 0LL),
        (rightObject = this->fields.rightObject) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(rightObject, v8 & 1, 0LL);
  if ( item )
  {
    SupportSelectListViewIndicator__SetPageIndex(this, item->fields.index, v19);
    v21 = *(&SupportSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v21 )
    {
      if ( (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[v21 - 1] == SupportSelectListViewItem_TypeInfo )
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
  bool v6; // w20
  UnityEngine_GameObject_o *pageBaseObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v6 = isEnable,
        UnityEngine_GameObject__SetActive(gameObject, v6, 0LL),
        (pageBaseObject = this->fields.pageBaseObject) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(pageBaseObject, v6, 0LL);
}


void __fastcall SupportSelectListViewIndicator__SetIndexMax(
        SupportSelectListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *leftObject; // x0
  UnityEngine_GameObject_o *rightObject; // x0

  SupportSelectListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0LL), (rightObject = this->fields.rightObject) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(rightObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewIndicator__SetPageActive(
        SupportSelectListViewIndicator_o *this,
        int32_t index,
        bool active,
        const MethodInfo *method)
{
  struct UISprite_array *pageSpriteList; // x8
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_6;
  if ( pageSpriteList->max_length <= index )
  {
    sub_B17100(this, *(_QWORD *)&index, active);
    sub_B170A0();
  }
  v5 = (UnityEngine_Component_o *)pageSpriteList->m_Items[index];
  if ( !v5 || (gameObject = UnityEngine_Component__get_gameObject(v5, 0LL)) == 0LL )
LABEL_6:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, active, 0LL);
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
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  struct UISprite_array *pageSpriteList; // x8
  UISprite_o *v14; // x0
  __int64 *v15; // x8
  System_String_o *v16; // x0
  UISprite_o *indexSprite; // x20
  System_String_o *v18; // x0
  struct UISprite_o *v19; // x0
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD224 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&StringLiteral_19557/*"img_slider_on"*/, v5);
    sub_B16FFC(&StringLiteral_21339/*"party_txt_"*/, v6);
    sub_B16FFC(&StringLiteral_19556/*"img_slider_off"*/, v7);
    byte_40FD224 = 1;
  }
  v20 = 0;
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
    if ( v9 && this->fields.pageMax >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          break;
        if ( (unsigned int)v12 >= pageSpriteList->max_length )
        {
          sub_B17100(v9, v10, v11);
          sub_B170A0();
        }
        v14 = pageSpriteList->m_Items[v12];
        if ( !v14 )
          break;
        if ( index == (_DWORD)v12 )
          v15 = &StringLiteral_19557/*"img_slider_on"*/;
        else
          v15 = &StringLiteral_19556/*"img_slider_off"*/;
        UISprite__set_spriteName(v14, (System_String_o *)*v15, 0LL);
        if ( (int)++v12 >= this->fields.pageMax )
          goto LABEL_17;
      }
LABEL_21:
      sub_B170D4();
    }
LABEL_17:
    v20 = index + 1;
    v16 = System_Int32__ToString((int32_t)&v20, 0LL);
    indexSprite = this->fields.indexSprite;
    v18 = System_String__Concat_43743732((System_String_o *)StringLiteral_21339/*"party_txt_"*/, v16, 0LL);
    if ( !indexSprite )
      goto LABEL_21;
    UISprite__set_spriteName(indexSprite, v18, 0LL);
    v19 = this->fields.indexSprite;
    if ( !v19 )
      goto LABEL_21;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v19->klass->vtable._33_MakePixelPerfect.method)(
      v19,
      v19->klass->vtable._34_get_minWidth.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewIndicator__SetPageMax(
        SupportSelectListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UISprite_array *pageSpriteList; // x8
  int max_length; // w8
  UnityEngine_Object_o *pageBaseObject; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct UISprite_array *v12; // x8
  __int64 v13; // x20
  int v14; // w9
  UISprite_o *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_40FD223 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    sub_B16FFC(&StringLiteral_19556/*"img_slider_off"*/, v5);
    byte_40FD223 = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_21;
  max_length = pageSpriteList->max_length;
  if ( max_length >= max )
    max_length = max;
  this->fields.pageMax = max_length;
  this->fields.pageIndex = -1;
  if ( max_length <= 1 )
    this->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( !v9 )
    return;
  v12 = this->fields.pageSpriteList;
  if ( !v12 )
LABEL_21:
    sub_B170D4();
  v13 = 0LL;
  while ( 1 )
  {
    v14 = v12->max_length;
    if ( (int)v13 >= v14 )
      break;
    if ( (unsigned int)v13 >= v14 )
    {
      sub_B17100(v9, v10, v11);
      sub_B170A0();
    }
    v15 = v12->m_Items[v13];
    if ( v15 )
    {
      v16 = (int)v13 >= this->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19556/*"img_slider_off"*/;
      UISprite__set_spriteName(v15, v16, 0LL);
      v12 = this->fields.pageSpriteList;
      ++v13;
      if ( v12 )
        continue;
    }
    goto LABEL_21;
  }
}


void __fastcall SupportSelectListViewIndicator__Start(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.modifyCenterItemCallBack = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.modifyCenterItemCallBack, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SupportSelectListViewIndicator__createSpriteList(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct UISprite_array *v5; // x8
  BattleServantConfConponent_o *p_pageSpriteList; // x19
  struct UISprite_array *pageSpriteList; // t1
  BalanceConfig_c *v8; // x0
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FD221 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&UISprite___TypeInfo, v4);
    byte_40FD221 = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  p_pageSpriteList = (BattleServantConfConponent_o *)&this->fields.pageSpriteList;
  v5 = pageSpriteList;
  if ( !pageSpriteList || !*(_QWORD *)&v5->max_length )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    v9 = (System_Int32_array **)sub_B17014(UISprite___TypeInfo, (unsigned int)v8->static_fields->SupportDeckMax, v2);
    p_pageSpriteList->klass = (BattleServantConfConponent_c *)v9;
    sub_B16F98(p_pageSpriteList, v9, v10, v11, v12, v13, v14, v15);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.modifyCenterItemCallBack = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.modifyCenterItemCallBack,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewIndicator__setPageSprite(
        SupportSelectListViewIndicator_o *this,
        int32_t num,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UISprite_array *pageSpriteList; // x21
  Il2CppClass **v11; // x0

  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    sub_B170D4();
  if ( sprite )
  {
    this = (SupportSelectListViewIndicator_o *)sub_B170BC(sprite, pageSpriteList->obj.klass->_1.element_class);
    if ( !this )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( pageSpriteList->max_length <= num )
  {
    sub_B17100(this, *(_QWORD *)&num, sprite);
    sub_B170A0();
  }
  v11 = &pageSpriteList->obj.klass + num;
  v11[4] = (Il2CppClass *)sprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 4),
    (System_Int32_array **)sprite,
    (System_String_array **)sprite,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
}