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
  System_String_o *v9; // x1

  v4 = this;
  if ( (byte_418ABA7 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, partyItem);
    sub_B2C35C(&StringLiteral_12546/*"SUPPORT_SELECT_NAME"*/, v5);
    this = (SupportSelectListViewIndicator_o *)sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418ABA7 = 1;
  }
  selectNameLabel = v4->fields.selectNameLabel;
  if ( !partyItem )
  {
    if ( selectNameLabel )
    {
      v9 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B2C434(this, partyItem);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SupportSelectListViewIndicator_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12546/*"SUPPORT_SELECT_NAME"*/, 0LL);
  supportServantData = partyItem->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_13;
  this = (SupportSelectListViewIndicator_o *)System_String__Format(
                                               (System_String_o *)this,
                                               (Il2CppObject *)supportServantData->fields._deckName_k__BackingField,
                                               0LL);
  if ( !selectNameLabel )
    goto LABEL_13;
  v9 = (System_String_o *)this;
LABEL_12:
  UILabel__set_text(selectNameLabel, v9, 0LL);
}


void __fastcall SupportSelectListViewIndicator__OnClickLeft(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v8; // x8

  if ( (byte_418ABA8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418ABA8 = 1;
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


void __fastcall SupportSelectListViewIndicator__OnClickRight(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *manager; // x20
  __int64 v5; // x1
  ListViewManager_o *v6; // x0
  int32_t pageIndex; // w8
  int32_t v8; // w1
  struct ListViewManager_o *v9; // x8

  if ( (byte_418ABA9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418ABA9 = 1;
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
  UnityEngine_GameObject_o *leftObject; // x0
  __int64 v14; // x1
  struct ListViewManager_o *v15; // x8
  _BOOL4 isLoop; // w8
  char v17; // w9
  bool v18; // w8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x10
  ListViewItem_o *v22; // x1
  System_Action_o *modifyCenterItemCallBack; // x0

  v8 = isRight;
  if ( (byte_418ABA4 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectListViewItem_TypeInfo, manager);
    byte_418ABA4 = 1;
  }
  this->fields.manager = manager;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.manager,
    (System_Int32_array **)manager,
    (System_String_array **)item,
    (System_String_array **)isTop,
    (System_Boolean_array **)isBottom,
    (System_Int32_array **)isLeft,
    (System_Int32_array *)isRight,
    (System_Int32_array *)method);
  v15 = this->fields.manager;
  if ( !v15 )
    goto LABEL_21;
  isLoop = v15->fields.isLoop;
  leftObject = this->fields.leftObject;
  v17 = isLeft | v8;
  if ( isLoop )
    v8 |= isLeft;
  if ( !leftObject
    || (!isLoop ? (v18 = isLeft) : (v18 = v17),
        UnityEngine_GameObject__SetActive(leftObject, v18, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
LABEL_21:
    sub_B2C434(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, v8 & 1, 0LL);
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
  __int64 v6; // x1
  bool v7; // w20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v7 = isEnable,
        UnityEngine_GameObject__SetActive(gameObject, v7, 0LL),
        (gameObject = this->fields.pageBaseObject) == 0LL) )
  {
    sub_B2C434(gameObject, v6);
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
    sub_B2C434(leftObject, v4);
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
  __int64 v6; // x0

  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_6;
  if ( pageSpriteList->max_length <= index )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
  }
  this = (SupportSelectListViewIndicator_o *)pageSpriteList->m_Items[index];
  if ( !this
    || (this = (SupportSelectListViewIndicator_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_6:
    sub_B2C434(this, *(_QWORD *)&index);
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
  __int64 v16; // x0
  int v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418ABA6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&StringLiteral_19631/*"img_slider_on"*/, v5);
    sub_B2C35C(&StringLiteral_21431/*"party_txt_"*/, v6);
    sub_B2C35C(&StringLiteral_19630/*"img_slider_off"*/, v7);
    byte_418ABA6 = 1;
  }
  v17 = 0;
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
        {
          v16 = sub_B2C460(v9);
          sub_B2C400(v16, 0LL);
        }
        v9 = pageSpriteList->m_Items[v11];
        if ( !v9 )
          break;
        if ( index == (_DWORD)v11 )
          v13 = &StringLiteral_19631/*"img_slider_on"*/;
        else
          v13 = &StringLiteral_19630/*"img_slider_off"*/;
        UISprite__set_spriteName(v9, (System_String_o *)*v13, 0LL);
        if ( (int)++v11 >= this->fields.pageMax )
          goto LABEL_17;
      }
LABEL_21:
      sub_B2C434(v9, v10);
    }
LABEL_17:
    v17 = index + 1;
    v14 = System_Int32__ToString((int32_t)&v17, 0LL);
    indexSprite = this->fields.indexSprite;
    v9 = (UISprite_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_21431/*"party_txt_"*/, v14, 0LL);
    if ( !indexSprite )
      goto LABEL_21;
    UISprite__set_spriteName(indexSprite, (System_String_o *)v9, 0LL);
    v9 = this->fields.indexSprite;
    if ( !v9 )
      goto LABEL_21;
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
  int32_t max_length; // w8
  UnityEngine_Object_o *pageBaseObject; // x20
  struct UISprite_array *v9; // x8
  __int64 v10; // x20
  int v11; // w9
  System_String_o *v12; // x1
  __int64 v13; // x0

  v4 = this;
  if ( (byte_418ABA5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
    this = (SupportSelectListViewIndicator_o *)sub_B2C35C(&StringLiteral_19630/*"img_slider_off"*/, v5);
    byte_418ABA5 = 1;
  }
  pageSpriteList = v4->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_21;
  max_length = pageSpriteList->max_length;
  if ( max_length >= max )
    max_length = max;
  v4->fields.pageMax = max_length;
  v4->fields.pageIndex = -1;
  if ( max_length <= 1 )
    v4->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v4->fields.pageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SupportSelectListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v9 = v4->fields.pageSpriteList;
  if ( !v9 )
LABEL_21:
    sub_B2C434(this, *(_QWORD *)&max);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = v9->max_length;
    if ( (int)v10 >= v11 )
      break;
    if ( (unsigned int)v10 >= v11 )
    {
      v13 = sub_B2C460(this);
      sub_B2C400(v13, 0LL);
    }
    this = (SupportSelectListViewIndicator_o *)v9->m_Items[v10];
    if ( this )
    {
      v12 = (int)v10 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19630/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v12, 0LL);
      v9 = v4->fields.pageSpriteList;
      ++v10;
      if ( v9 )
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.modifyCenterItemCallBack, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SupportSelectListViewIndicator__createSpriteList(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct UISprite_array *v4; // x8
  BattleServantConfConponent_o *p_pageSpriteList; // x19
  struct UISprite_array *pageSpriteList; // t1
  BalanceConfig_c *v7; // x0
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_418ABA3 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&UISprite___TypeInfo, v3);
    byte_418ABA3 = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  p_pageSpriteList = (BattleServantConfConponent_o *)&this->fields.pageSpriteList;
  v4 = pageSpriteList;
  if ( !pageSpriteList || !*(_QWORD *)&v4->max_length )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    v8 = (System_Int32_array **)sub_B2C374(UISprite___TypeInfo, (unsigned int)v7->static_fields->SupportDeckMax);
    p_pageSpriteList->klass = (BattleServantConfConponent_c *)v8;
    sub_B2C2F8(p_pageSpriteList, v8, v9, v10, v11, v12, v13, v14);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.modifyCenterItemCallBack,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


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
  __int64 v12; // x0
  __int64 v13; // x0

  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    sub_B2C434(this, num);
  if ( sprite )
  {
    this = (SupportSelectListViewIndicator_o *)sub_B2C41C(sprite, pageSpriteList->obj.klass->_1.element_class);
    if ( !this )
    {
      v13 = sub_B2C454(0LL);
      sub_B2C400(v13, 0LL);
    }
  }
  if ( pageSpriteList->max_length <= num )
  {
    v12 = sub_B2C460(this);
    sub_B2C400(v12, 0LL);
  }
  v11 = &pageSpriteList->obj.klass + num;
  v11[4] = (Il2CppClass *)sprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v11 + 4),
    (System_Int32_array **)sprite,
    (System_String_array **)sprite,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
}