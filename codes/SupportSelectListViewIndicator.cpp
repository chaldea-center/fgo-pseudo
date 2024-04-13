void __fastcall SupportSelectListViewIndicator___ctor(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


void __fastcall SupportSelectListViewIndicator__DrawPartyInfo(
        SupportSelectListViewIndicator_o *this,
        SupportSelectListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportSelectListViewIndicator_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UILabel_o *selectNameLabel; // x19
  struct SupportServantData_o *supportServantData; // x8
  System_String_o *v14; // x1

  v5 = this;
  if ( (byte_42EB3D5 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)partyItem, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12694/*"SUPPORT_SELECT_NAME"*/, v6, v7, v8);
    this = (SupportSelectListViewIndicator_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EB3D5 = 1;
  }
  selectNameLabel = v5->fields.selectNameLabel;
  if ( !partyItem )
  {
    if ( selectNameLabel )
    {
      v14 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B5D69C(this, partyItem);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SupportSelectListViewIndicator_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12694/*"SUPPORT_SELECT_NAME"*/, 0LL);
  supportServantData = partyItem->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_13;
  this = (SupportSelectListViewIndicator_o *)System_String__Format(
                                               (System_String_o *)this,
                                               (Il2CppObject *)supportServantData->fields._deckName_k__BackingField,
                                               0LL);
  if ( !selectNameLabel )
    goto LABEL_13;
  v14 = (System_String_o *)this;
LABEL_12:
  UILabel__set_text(selectNameLabel, v14, 0LL);
}


void __fastcall SupportSelectListViewIndicator__OnClickLeft(
        SupportSelectListViewIndicator_o *this,
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

  if ( (byte_42EB3D6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EB3D6 = 1;
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


void __fastcall SupportSelectListViewIndicator__OnClickRight(
        SupportSelectListViewIndicator_o *this,
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

  if ( (byte_42EB3D7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EB3D7 = 1;
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
  if ( (byte_42EB3D2 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectListViewItem_TypeInfo, (_DWORD)manager, (_DWORD)item, isTop);
    byte_42EB3D2 = 1;
  }
  this->fields.manager = manager;
  sub_B5D560(
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
    sub_B5D69C(leftObject, v14);
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
    sub_B5D69C(gameObject, v6);
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
    sub_B5D69C(leftObject, v4);
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
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  this = (SupportSelectListViewIndicator_o *)pageSpriteList->m_Items[index];
  if ( !this
    || (this = (SupportSelectListViewIndicator_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_6:
    sub_B5D69C(this, *(_QWORD *)&index);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, active, 0LL);
}


void __fastcall SupportSelectListViewIndicator__SetPageIndex(
        SupportSelectListViewIndicator_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v20; // x8
  System_String_o *v21; // x0
  UISprite_o *indexSprite; // x20
  __int64 v23; // x0
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EB3D4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_19880/*"img_slider_on"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_21716/*"party_txt_"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19879/*"img_slider_off"*/, v12, v13, v14);
    byte_42EB3D4 = 1;
  }
  v24 = 0;
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = (UISprite_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) != 0 && this->fields.pageMax >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          break;
        if ( (unsigned int)v18 >= pageSpriteList->max_length )
        {
          v23 = sub_B5D6C8(v16);
          sub_B5D668(v23, 0LL);
        }
        v16 = pageSpriteList->m_Items[v18];
        if ( !v16 )
          break;
        if ( index == (_DWORD)v18 )
          v20 = &StringLiteral_19880/*"img_slider_on"*/;
        else
          v20 = &StringLiteral_19879/*"img_slider_off"*/;
        UISprite__set_spriteName(v16, (System_String_o *)*v20, 0LL);
        if ( (int)++v18 >= this->fields.pageMax )
          goto LABEL_17;
      }
LABEL_21:
      sub_B5D69C(v16, v17);
    }
LABEL_17:
    v24 = index + 1;
    v21 = System_Int32__ToString((int32_t)&v24, 0LL);
    indexSprite = this->fields.indexSprite;
    v16 = (UISprite_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_21716/*"party_txt_"*/, v21, 0LL);
    if ( !indexSprite )
      goto LABEL_21;
    UISprite__set_spriteName(indexSprite, (System_String_o *)v16, 0LL);
    v16 = this->fields.indexSprite;
    if ( !v16 )
      goto LABEL_21;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
      v16,
      v16->klass->vtable._34_get_minWidth.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectListViewIndicator__SetPageMax(
        SupportSelectListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportSelectListViewIndicator_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w8
  UnityEngine_Object_o *pageBaseObject; // x20
  struct UISprite_array *v12; // x8
  __int64 v13; // x20
  int v14; // w9
  System_String_o *v15; // x1
  __int64 v16; // x0

  v5 = this;
  if ( (byte_42EB3D3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, max, (_DWORD)method, v3);
    this = (SupportSelectListViewIndicator_o *)sub_B5D5C4(&StringLiteral_19879/*"img_slider_off"*/, v6, v7, v8);
    byte_42EB3D3 = 1;
  }
  pageSpriteList = v5->fields.pageSpriteList;
  if ( !pageSpriteList )
    goto LABEL_21;
  max_length = pageSpriteList->max_length;
  if ( max_length >= max )
    max_length = max;
  v5->fields.pageMax = max_length;
  v5->fields.pageIndex = -1;
  if ( max_length <= 1 )
    v5->fields.pageMax = 0;
  pageBaseObject = (UnityEngine_Object_o *)v5->fields.pageBaseObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SupportSelectListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v12 = v5->fields.pageSpriteList;
  if ( !v12 )
LABEL_21:
    sub_B5D69C(this, *(_QWORD *)&max);
  v13 = 0LL;
  while ( 1 )
  {
    v14 = v12->max_length;
    if ( (int)v13 >= v14 )
      break;
    if ( (unsigned int)v13 >= v14 )
    {
      v16 = sub_B5D6C8(this);
      sub_B5D668(v16, 0LL);
    }
    this = (SupportSelectListViewIndicator_o *)v12->m_Items[v13];
    if ( this )
    {
      v15 = (int)v13 >= v5->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_19879/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v15, 0LL);
      v12 = v5->fields.pageSpriteList;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.modifyCenterItemCallBack, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SupportSelectListViewIndicator__createSpriteList(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UISprite_array *v8; // x8
  BattleServantConfConponent_o *p_pageSpriteList; // x19
  struct UISprite_array *pageSpriteList; // t1
  BalanceConfig_c *v11; // x0
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EB3D1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UISprite___TypeInfo, v5, v6, v7);
    byte_42EB3D1 = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  p_pageSpriteList = (BattleServantConfConponent_o *)&this->fields.pageSpriteList;
  v8 = pageSpriteList;
  if ( !pageSpriteList || !*(_QWORD *)&v8->max_length )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v11 = BalanceConfig_TypeInfo;
    }
    v12 = (System_Int32_array **)sub_B5D5DC(UISprite___TypeInfo, (unsigned int)v11->static_fields->SupportDeckMax);
    p_pageSpriteList->klass = (BattleServantConfConponent_c *)v12;
    sub_B5D560(p_pageSpriteList, v12, v13, v14, v15, v16, v17, v18);
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
  sub_B5D560(
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
    sub_B5D69C(this, num);
  if ( sprite )
  {
    this = (SupportSelectListViewIndicator_o *)sub_B5D684(sprite, pageSpriteList->obj.klass->_1.element_class);
    if ( !this )
    {
      v13 = sub_B5D6BC(0LL);
      sub_B5D668(v13, 0LL);
    }
  }
  if ( pageSpriteList->max_length <= num )
  {
    v12 = sub_B5D6C8(this);
    sub_B5D668(v12, 0LL);
  }
  v11 = &pageSpriteList->obj.klass + num;
  v11[4] = (Il2CppClass *)sprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v11 + 4),
    (System_Int32_array **)sprite,
    (System_String_array **)sprite,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
}