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
  if ( (byte_4CEABF8 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12614/*"SUPPORT_SELECT_NAME"*/);
    this = (SupportSelectListViewIndicator_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEABF8 = 1;
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
    sub_1C7BD40(this, partyItem);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (SupportSelectListViewIndicator_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12614/*"SUPPORT_SELECT_NAME"*/, 0);
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
  __int64 v4; // x1
  ListViewManager_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t pageIndex; // w8
  struct ListViewManager_o *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4CEABF9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SupportSelectListViewIndicator_OnClickLeft__);
    byte_4CEABF9 = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_21;
    ListViewManager__BackLoopItem(v5, 0);
    if ( this->fields.pageIndex >= 1 )
    {
      v6 = Method_SupportSelectListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C7BB00(Method_SupportSelectListViewIndicator_OnClickLeft__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageIndex;
LABEL_19:
        ListViewManager__MoveCenterItem(v5, pageIndex - 1, 1, 0, 0.0, 0);
        return;
      }
      goto LABEL_21;
    }
    v9 = this->fields.manager;
    if ( !v9 )
      goto LABEL_21;
    if ( v9->fields.isLoop )
    {
      v10 = Method_SupportSelectListViewIndicator_OnClickLeft__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickLeft__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1C7BB00(Method_SupportSelectListViewIndicator_OnClickLeft__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        pageIndex = this->fields.pageMax;
        goto LABEL_19;
      }
LABEL_21:
      sub_1C7BD40(v5, v4);
    }
  }
}


void SupportSelectListViewIndicator__OnClickRight(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *manager; // x20
  __int64 v4; // x1
  ListViewManager_o *v5; // x0
  int32_t pageIndex; // w8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t v9; // w1
  struct ListViewManager_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4CEABFA & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SupportSelectListViewIndicator_OnClickRight__);
    byte_4CEABFA = 1;
  }
  manager = (UnityEngine_Object_o *)this->fields.manager;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(manager, 0, 0) && (this->fields.pageIndex & 0x80000000) == 0 )
  {
    v5 = this->fields.manager;
    if ( !v5 )
      goto LABEL_22;
    ListViewManager__FowardLoopItem(v5, 0);
    pageIndex = this->fields.pageIndex;
    if ( (pageIndex & 0x80000000) == 0 && pageIndex < this->fields.pageMax - 1 )
    {
      v7 = Method_SupportSelectListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C7BB00(Method_SupportSelectListViewIndicator_OnClickRight__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v9 = this->fields.pageIndex + 1;
LABEL_20:
        ListViewManager__MoveCenterItem(v5, v9, 1, 0, 0.0, 0);
        return;
      }
      goto LABEL_22;
    }
    v10 = this->fields.manager;
    if ( !v10 )
      goto LABEL_22;
    if ( v10->fields.isLoop )
    {
      v11 = Method_SupportSelectListViewIndicator_OnClickRight__;
      if ( (*((_BYTE *)Method_SupportSelectListViewIndicator_OnClickRight__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C7BB00(Method_SupportSelectListViewIndicator_OnClickRight__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0);
      v5 = this->fields.manager;
      if ( v5 )
      {
        v9 = 0;
        goto LABEL_20;
      }
LABEL_22:
      sub_1C7BD40(v5, v4);
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
  char v8; // w22
  UnityEngine_GameObject_o *leftObject; // x0
  __int64 v14; // x1
  struct ListViewManager_o *v15; // x8
  _BOOL4 isLoop; // w8
  char v17; // w9
  bool v18; // w8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 naturalAligment; // x10
  ListViewItem_o *v22; // x1
  System_Action_o *modifyCenterItemCallBack; // x0

  v8 = isRight;
  if ( (byte_4CEABF5 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportSelectListViewItem_TypeInfo);
    byte_4CEABF5 = 1;
  }
  this->fields.manager = manager;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)item,
    isTop,
    (System_String_o *)isBottom,
    isLeft,
    isRight,
    (System_String_o *)method);
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
        UnityEngine_GameObject__SetActive(leftObject, v18, 0),
        (leftObject = this->fields.rightObject) == 0) )
  {
LABEL_21:
    sub_1C7BD40(leftObject, v14);
  }
  UnityEngine_GameObject__SetActive(leftObject, v8 & 1, 0);
  if ( item )
  {
    SupportSelectListViewIndicator__SetPageIndex(this, item->fields.index, v19);
    naturalAligment = SupportSelectListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SupportSelectListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == SupportSelectListViewItem_TypeInfo )
        v22 = item;
      else
        v22 = 0;
      goto LABEL_18;
    }
  }
  else
  {
    SupportSelectListViewIndicator__SetPageIndex(this, -1, v19);
  }
  v22 = 0;
LABEL_18:
  SupportSelectListViewIndicator__DrawPartyInfo(this, (SupportSelectListViewItem_o *)v22, v20);
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
  __int64 v6; // x1
  bool v7; // w20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (v7 = isEnable,
        UnityEngine_GameObject__SetActive(gameObject, v7, 0),
        (gameObject = this->fields.pageBaseObject) == 0) )
  {
    sub_1C7BD40(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, v7, 0);
}


void SupportSelectListViewIndicator__SetIndexMax(
        SupportSelectListViewIndicator_o *this,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *leftObject; // x0

  SupportSelectListViewIndicator__SetPageMax(this, max, method);
  leftObject = this->fields.leftObject;
  if ( !leftObject
    || (UnityEngine_GameObject__SetActive(leftObject, 0, 0), (leftObject = this->fields.rightObject) == 0) )
  {
    sub_1C7BD40(leftObject, v4);
  }
  UnityEngine_GameObject__SetActive(leftObject, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C7BD48(this);
  this = (SupportSelectListViewIndicator_o *)pageSpriteList->m_Items[index];
  if ( !this
    || (this = (SupportSelectListViewIndicator_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0)) == 0 )
  {
LABEL_6:
    sub_1C7BD40(this, *(_QWORD *)&index);
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
  __int64 v7; // x1
  __int64 v8; // x21
  struct UISprite_array *pageSpriteList; // x8
  __int64 *v10; // x8
  System_String_o *v11; // x0
  UISprite_o *indexSprite; // x20
  int v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEABF7 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20751/*"img_slider_on"*/);
    sub_1C7BAE8(&StringLiteral_22861/*"party_txt_"*/);
    sub_1C7BAE8(&StringLiteral_20750/*"img_slider_off"*/);
    byte_4CEABF7 = 1;
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
      v8 = 0;
      while ( 1 )
      {
        pageSpriteList = this->fields.pageSpriteList;
        if ( !pageSpriteList )
          break;
        if ( (unsigned int)v8 >= LODWORD(pageSpriteList->max_length) )
          sub_1C7BD48(v6);
        v6 = pageSpriteList->m_Items[v8];
        if ( !v6 )
          break;
        if ( index == (_DWORD)v8 )
          v10 = &StringLiteral_20751/*"img_slider_on"*/;
        else
          v10 = &StringLiteral_20750/*"img_slider_off"*/;
        UISprite__set_spriteName(v6, (System_String_o *)*v10, 0);
        if ( (int)++v8 >= this->fields.pageMax )
          goto LABEL_16;
      }
LABEL_20:
      sub_1C7BD40(v6, v7);
    }
LABEL_16:
    v13 = index + 1;
    v11 = System_Int32__ToString((int32_t)&v13, 0);
    indexSprite = this->fields.indexSprite;
    v6 = (UISprite_o *)System_String__Concat_64176912((System_String_o *)StringLiteral_22861/*"party_txt_"*/, v11, 0);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4CEABF6 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (SupportSelectListViewIndicator_o *)sub_1C7BAE8(&StringLiteral_20750/*"img_slider_off"*/);
    byte_4CEABF6 = 1;
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
    sub_1C7BD40(this, *(_QWORD *)&max);
  v9 = 0;
  while ( 1 )
  {
    v10 = v8->max_length;
    if ( (int)v9 >= v10 )
      break;
    if ( (unsigned int)v9 >= v10 )
      sub_1C7BD48(this);
    this = (SupportSelectListViewIndicator_o *)v8->m_Items[v9];
    if ( this )
    {
      v11 = (int)v9 >= v4->fields.pageMax ? 0LL : (System_String_o *)StringLiteral_20750/*"img_slider_off"*/;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.modifyCenterItemCallBack = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.modifyCenterItemCallBack, 0, v2, v3, v4, v5, v6, v7);
}


void SupportSelectListViewIndicator__createSpriteList(SupportSelectListViewIndicator_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x8
  GrandQuestFolderBoardItem_o *p_pageSpriteList; // x19
  struct UISprite_array *pageSpriteList; // t1
  BalanceConfig_c *v6; // x0
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEABF4 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&UISprite___TypeInfo);
    byte_4CEABF4 = 1;
  }
  pageSpriteList = this->fields.pageSpriteList;
  p_pageSpriteList = (GrandQuestFolderBoardItem_o *)&this->fields.pageSpriteList;
  v3 = pageSpriteList;
  if ( !pageSpriteList || !v3->max_length )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    v7 = sub_1C7BB90(UISprite___TypeInfo, (unsigned int)v6->static_fields->SupportDeckMax);
    p_pageSpriteList->klass = (GrandQuestFolderBoardItem_c *)v7;
    sub_1C7BA8C(p_pageSpriteList, v7, v8, v9, v10, v11, v12, v13);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.modifyCenterItemCallBack = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.modifyCenterItemCallBack,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SupportSelectListViewIndicator__setPageSprite(
        SupportSelectListViewIndicator_o *this,
        int32_t num,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UISprite_array *pageSpriteList; // x21
  Il2CppClass **v11; // x0
  __int64 v12; // x0

  pageSpriteList = this->fields.pageSpriteList;
  if ( !pageSpriteList )
    sub_1C7BD40(this, num);
  if ( sprite )
  {
    this = (SupportSelectListViewIndicator_o *)sub_1C7BC24(sprite, pageSpriteList->obj.klass->_1.element_class);
    if ( !this )
    {
      v12 = sub_1C7BD64();
      sub_1C7BC10(v12, 0);
    }
  }
  if ( LODWORD(pageSpriteList->max_length) <= num )
    sub_1C7BD48(this);
  v11 = &pageSpriteList->obj.klass + num;
  v11[4] = (Il2CppClass *)sprite;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)(v11 + 4),
    (int32_t)sprite,
    (int32_t)sprite,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}