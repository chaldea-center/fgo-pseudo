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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *selectNameLabel; // x19
  struct SupportServantData_o *supportServantData; // x8
  SupportSelectListViewIndicator_o *v11; // x1

  v4 = this;
  if ( (byte_4B12B16 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, partyItem, method);
    sub_1BCA7E0(&StringLiteral_12609/*"SUPPORT_SELECT_NAME"*/, v5, v6);
    this = (SupportSelectListViewIndicator_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B12B16 = 1;
  }
  selectNameLabel = v4->fields.selectNameLabel;
  if ( !partyItem )
  {
    if ( selectNameLabel )
    {
      v11 = (SupportSelectListViewIndicator_o *)StringLiteral_1/*""*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(this, partyItem);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, partyItem);
  this = (SupportSelectListViewIndicator_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12609/*"SUPPORT_SELECT_NAME"*/, 0LL);
  supportServantData = partyItem->fields.supportServantData;
  if ( !supportServantData )
    goto LABEL_12;
  this = (SupportSelectListViewIndicator_o *)System_String__Format(
                                               (System_String_o *)this,
                                               (Il2CppObject *)supportServantData->fields._deckName_k__BackingField,
                                               0LL);
  if ( !selectNameLabel )
    goto LABEL_12;
  v11 = this;
LABEL_11:
  UILabel__set_text(selectNameLabel, (System_String_o *)v11, 0LL);
}


void __fastcall SupportSelectListViewIndicator__OnClickLeft(
        SupportSelectListViewIndicator_o *this,
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

  if ( (byte_4B12B17 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportSelectListViewIndicator_OnClickLeft__, v4, v5);
    byte_4B12B17 = 1;
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
      v9 = Method_SupportSelectListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectListViewIndicator_OnClickLeft__);
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
      v13 = Method_SupportSelectListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectListViewIndicator_OnClickLeft__);
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


void __fastcall SupportSelectListViewIndicator__OnClickRight(
        SupportSelectListViewIndicator_o *this,
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

  if ( (byte_4B12B18 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportSelectListViewIndicator_OnClickRight__, v4, v5);
    byte_4B12B18 = 1;
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
      v10 = Method_SupportSelectListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectListViewIndicator_OnClickRight__);
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
      v14 = Method_SupportSelectListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectListViewIndicator_OnClickRight__);
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
  __int64 methodPtr_low; // x10
  ListViewItem_o *v22; // x1
  System_Action_o *modifyCenterItemCallBack; // x0

  v8 = isRight;
  if ( (byte_4B12B13 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectListViewItem_TypeInfo, manager, item);
    byte_4B12B13 = 1;
  }
  this->fields.manager = manager;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.manager,
    (int64_t)manager,
    (int64_t)item,
    isTop,
    (System_String_o *)isBottom,
    (BattleSetupInfo_o *)isLeft,
    (FollowerInfo_o *)isRight,
    (PartyListViewItem_o *)method);
  v15 = this->fields.manager;
  if ( !v15 )
    goto LABEL_21;
  isLoop = v15->fields.isLoop;
  leftObject = this->fields.leftObject;
  v17 = isLeft | v8;
  if ( isLoop )
    v8 |= isLeft;
  if ( !leftObject
    || (isLoop ? (v18 = v17) : (v18 = isLeft),
        UnityEngine_GameObject__SetActive(leftObject, v18, 0LL),
        (leftObject = this->fields.rightObject) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, v8 & 1, 0LL);
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
    sub_1BCAA3C(gameObject, v6);
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
    sub_1BCAA3C(leftObject, v4);
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
    sub_1BCAA44(this, index);
  this = (SupportSelectListViewIndicator_o *)pageSpriteList->m_Items[index];
  if ( !this
    || (this = (SupportSelectListViewIndicator_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_6:
    sub_1BCAA3C(this, *(_QWORD *)&index);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *pageBaseObject; // x21
  UISprite_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v16; // x8
  System_String_o *v17; // x0
  UISprite_o *indexSprite; // x20
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B12B15 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&StringLiteral_20687/*"img_slider_on"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22718/*"party_txt_"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20686/*"img_slider_off"*/, v9, v10);
    byte_4B12B15 = 1;
  }
  this->fields.pageIndex = index;
  if ( (index & 0x80000000) == 0 )
  {
    pageBaseObject = (UnityEngine_Object_o *)this->fields.pageBaseObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    v12 = (UISprite_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) != 0 && this->fields.pageMax >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          break;
        if ( (unsigned int)v14 >= pageSpriteList->max_length )
          sub_1BCAA44(v12, v13);
        v12 = pageSpriteList->m_Items[v14];
        if ( !v12 )
          break;
        if ( index == (_DWORD)v14 )
          v16 = &StringLiteral_20687/*"img_slider_on"*/;
        else
          v16 = &StringLiteral_20686/*"img_slider_off"*/;
        UISprite__set_spriteName(v12, (System_String_o *)*v16, 0LL);
        if ( (int)++v14 >= this->fields.pageMax )
          goto LABEL_16;
      }
LABEL_20:
      sub_1BCAA3C(v12, v13);
    }
LABEL_16:
    v19 = index + 1;
    v17 = System_Int32__ToString((int32_t)&v19, 0LL);
    indexSprite = this->fields.indexSprite;
    v12 = (UISprite_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_22718/*"party_txt_"*/, v17, 0LL);
    if ( !indexSprite )
      goto LABEL_20;
    UISprite__set_spriteName(indexSprite, (System_String_o *)v12, 0LL);
    v12 = this->fields.indexSprite;
    if ( !v12 )
      goto LABEL_20;
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
      v12,
      v12->klass->vtable._34_get_minWidth.methodPtr);
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
  __int64 v6; // x2
  struct UISprite_array *pageSpriteList; // x8
  int32_t max_length; // w9
  UnityEngine_Object_o *pageBaseObject; // x20
  struct UISprite_array *v10; // x8
  __int64 v11; // x20
  int v12; // w9
  System_String_o *v13; // x1

  v4 = this;
  if ( (byte_4B12B14 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&max, method);
    this = (SupportSelectListViewIndicator_o *)sub_1BCA7E0(&StringLiteral_20686/*"img_slider_off"*/, v5, v6);
    byte_4B12B14 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&max);
  this = (SupportSelectListViewIndicator_o *)UnityEngine_Object__op_Inequality(pageBaseObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  v10 = v4->fields.pageSpriteList;
  if ( !v10 )
LABEL_20:
    sub_1BCAA3C(this, *(_QWORD *)&max);
  v11 = 0LL;
  while ( 1 )
  {
    v12 = v10->max_length;
    if ( (int)v11 >= v12 )
      break;
    if ( (unsigned int)v11 >= v12 )
      sub_1BCAA44(this, *(_QWORD *)&max);
    this = (SupportSelectListViewIndicator_o *)v10->m_Items[v11];
    if ( this )
    {
      v13 = (int)v11 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20686/*"img_slider_off"*/;
      UISprite__set_spriteName((UISprite_o *)this, v13, 0LL);
      v10 = v4->fields.pageSpriteList;
      ++v11;
      if ( v10 )
        continue;
    }
    goto LABEL_20;
  }
}


void __fastcall SupportSelectListViewIndicator__Start(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.modifyCenterItemCallBack = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.modifyCenterItemCallBack, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall SupportSelectListViewIndicator__createSpriteList(
        SupportSelectListViewIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UISprite_array *v6; // x8
  PartyOrganizationUtility_o *p_pageSpriteList; // x19
  struct UISprite_array *pageSpriteList; // t1
  BalanceConfig_c *v9; // x0
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B12B12 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UISprite___TypeInfo, v4, v5);
    byte_4B12B12 = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  p_pageSpriteList = (PartyOrganizationUtility_o *)&this->fields.pageSpriteList;
  v6 = pageSpriteList;
  if ( !pageSpriteList || !*(_QWORD *)&v6->max_length )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v9 = BalanceConfig_TypeInfo;
    }
    v10 = sub_1BCA888(UISprite___TypeInfo, (unsigned int)v9->static_fields->SupportDeckMax);
    p_pageSpriteList->klass = (PartyOrganizationUtility_c *)v10;
    sub_1BCA784(p_pageSpriteList, v10, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.modifyCenterItemCallBack = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.modifyCenterItemCallBack,
    (int64_t)callback,
    (int64_t)method,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UISprite_array *pageSpriteList; // x21
  Il2CppClass **v11; // x0
  __int64 v12; // x0

  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    sub_1BCAA3C(this, *(_QWORD *)&num);
  if ( sprite )
  {
    this = (SupportSelectListViewIndicator_o *)sub_1BCA91C(sprite, pageSpriteList->obj.klass->_1.element_class);
    if ( !this )
    {
      v12 = sub_1BCAA60();
      sub_1BCA908(v12, 0LL);
    }
  }
  if ( pageSpriteList->max_length <= num )
    sub_1BCAA44(this, *(_QWORD *)&num);
  v11 = &pageSpriteList->obj.klass + num;
  v11[4] = (Il2CppClass *)sprite;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v11 + 4),
    (int64_t)sprite,
    (int64_t)sprite,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}