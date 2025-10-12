void BoardOptionEventTargetListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C34251 & 1) == 0 )
  {
    sub_1C32C20(&BoardOptionEventTargetListViewItemDraw_TypeInfo);
    sub_1C32C20(&StringLiteral_21624/*"missiontarget_bg"*/);
    byte_4C34251 = 1;
  }
  BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields->BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21624/*"missiontarget_bg"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_21624/*"missiontarget_bg"*/,
    v1,
    v2);
}


void BoardOptionEventTargetListViewItemDraw___ctor(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C34250 & 1) == 0 )
  {
    sub_1C32C20(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4C34250 = 1;
  }
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  QuestInformationListViewItemDraw___ctor((QuestInformationListViewItemDraw_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Material_o *BoardOptionEventTargetListViewItemDraw__GetNewChocoMaterial(
        BoardOptionEventTargetListViewItemDraw_o *this,
        bool isSprite,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0

  eventTargetComponent = this->fields.eventTargetComponent;
  if ( !eventTargetComponent )
    sub_1C32E7C(0);
  if ( isSprite )
    return BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
             eventTargetComponent,
             (const MethodInfo *)isSprite);
  else
    return BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
             eventTargetComponent,
             (const MethodInfo *)isSprite);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Material_o *BoardOptionEventTargetListViewItemDraw__GetNewColorShadowMaterial(
        BoardOptionEventTargetListViewItemDraw_o *this,
        bool isSprite,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0

  eventTargetComponent = this->fields.eventTargetComponent;
  if ( !eventTargetComponent )
    sub_1C32E7C(0);
  if ( isSprite )
    return BoardOptionEventTargetComponent__NewColorShadowMaterialForSprite(
             eventTargetComponent,
             (const MethodInfo *)isSprite);
  else
    return BoardOptionEventTargetComponent__NewColorShadowMaterialForTexture(
             eventTargetComponent,
             (const MethodInfo *)isSprite);
}


void BoardOptionEventTargetListViewItemDraw__SetAlpha(
        BoardOptionEventTargetListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct UISprite_o *iconBaseSprite; // x0

  iconBaseSprite = this->fields.iconBaseSprite;
  if ( !iconBaseSprite )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))iconBaseSprite->klass->vtable._8_set_alpha.methodPtr)(
    iconBaseSprite,
    iconBaseSprite->klass->vtable._8_set_alpha.method,
    alpha);
}


void BoardOptionEventTargetListViewItemDraw__SetFrame(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetListViewItemDraw_c *v3; // x0
  UISprite_o *iconBaseSprite; // x20
  System_String_o *BASE_SPRITE_NAME; // x21
  struct UISprite_o *v6; // x0

  if ( (byte_4C3424F & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BoardOptionEventTargetListViewItemDraw_TypeInfo);
    byte_4C3424F = 1;
  }
  v3 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  iconBaseSprite = this->fields.iconBaseSprite;
  if ( !BoardOptionEventTargetListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoardOptionEventTargetListViewItemDraw_TypeInfo);
    v3 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  }
  BASE_SPRITE_NAME = v3->static_fields->BASE_SPRITE_NAME;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(iconBaseSprite, BASE_SPRITE_NAME, 0);
  v6 = this->fields.iconBaseSprite;
  if ( !v6 )
    sub_1C32E7C(0);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v6,
    v6->klass->vtable._33_MakePixelPerfect.method);
}


void BoardOptionEventTargetListViewItemDraw__SetItem(
        BoardOptionEventTargetListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_Component_o *SvtImg; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  QuestInformationListViewItem_o **v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  QuestInformationListViewItem_o *v15; // x0
  UISprite_o *enemySp; // x21
  __int64 v17; // x8
  UISprite_o *v18; // x21
  UISpriteAltMat_o *v19; // x2
  QuestInformationListViewItem_o *v20; // x3
  int32_t dispType; // w1
  struct UITexture_o **p_SvtImg; // x22
  char v23; // w23
  QuestInformationListViewItem_o *v24; // x8
  UITexture_o *v25; // x24
  int32_t targetCnt; // w21
  int32_t targetId; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UISprite_o *v31; // x22
  int32_t iconId; // w23
  QuestInformationListViewItem_o *v33; // x20
  System_Action_o *v34; // x22

  if ( (byte_4C3424E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__);
    sub_1C32C20(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
    byte_4C3424E = 1;
  }
  v7 = sub_1C32E6C(BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_52;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = item;
  v11 = (QuestInformationListViewItem_o **)(v7 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)item, v12, v13);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v14);
  v15 = *(QuestInformationListViewItem_o **)(v7 + 24);
  if ( !v15 )
  {
    SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
    if ( !SvtImg )
      goto LABEL_52;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
    if ( !SvtImg )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
LABEL_28:
    SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( SvtImg )
    {
      SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
      if ( SvtImg )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
        return;
      }
    }
    goto LABEL_52;
  }
  if ( mode && v15->fields.infoType == 1 )
  {
    if ( QuestInformationListViewItem__isEnemyUnknown(v15, 0) )
    {
      SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
      if ( SvtImg )
      {
        SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
        if ( SvtImg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
          if ( SvtImg )
          {
            SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
            if ( SvtImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
              enemySp = (UISprite_o *)this->fields.enemySp;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4C319B6 )
              {
                sub_1C32C20(&TerminalSceneComponent_TypeInfo);
                byte_4C319B6 = 1;
              }
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              }
              v17 = *(_QWORD *)SvtImg[7].fields.m_CachedPtr;
              if ( v17 && enemySp )
              {
                UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v17 + 304), 0);
                v18 = (UISprite_o *)this->fields.enemySp;
                SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItemDraw_TypeInfo;
                if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
                if ( v18 )
                {
                  UISprite__set_spriteName(
                    v18,
                    QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                    0);
                  v19 = this->fields.enemySp;
                  v20 = *v11;
                  dispType = 1;
LABEL_50:
                  QuestInformationListViewItemDraw__SetDispType(
                    (QuestInformationListViewItemDraw_o *)this,
                    dispType,
                    v19,
                    v20,
                    0);
                  return;
                }
              }
            }
          }
        }
      }
      goto LABEL_52;
    }
    SvtImg = (UnityEngine_Component_o *)*v11;
    if ( !*v11 )
      goto LABEL_52;
    SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__isEnemyServant(
                                          (QuestInformationListViewItem_o *)SvtImg,
                                          0);
    p_SvtImg = &this->fields.SvtImg;
    if ( !this->fields.SvtImg )
      goto LABEL_52;
    v23 = (char)SvtImg;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.SvtImg,
                                          0);
    if ( !SvtImg )
      goto LABEL_52;
    if ( (v23 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
      v24 = *v11;
      if ( !*v11 )
        goto LABEL_52;
      v25 = *p_SvtImg;
      targetId = v24->fields.targetId;
      targetCnt = v24->fields.targetCnt;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v25, targetId, targetCnt, targetCnt, 0);
      *p_SvtImg = Manager__loadCommandCard;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.SvtImg, (int32_t)Manager__loadCommandCard, v29, v30);
      if ( !*v11 )
        goto LABEL_52;
      QuestInformationListViewItemDraw__SetDispType_36466304(
        (QuestInformationListViewItemDraw_o *)this,
        (*v11)->fields.dispType,
        this->fields.SvtImg,
        *v11,
        0);
      goto LABEL_28;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
    SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !SvtImg )
      goto LABEL_52;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
    if ( !SvtImg )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
    if ( !*v11 )
      goto LABEL_52;
    v31 = (UISprite_o *)this->fields.enemySp;
    iconId = (*v11)->fields.iconId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEnemy(v31, iconId, 0) )
    {
      SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( SvtImg )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0);
        SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
        if ( SvtImg )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0);
          v20 = *v11;
          if ( *v11 )
          {
            dispType = v20->fields.dispType;
            v19 = this->fields.enemySp;
            goto LABEL_50;
          }
        }
      }
LABEL_52:
      sub_1C32E7C(SvtImg);
    }
    v33 = *(QuestInformationListViewItem_o **)(v7 + 24);
    v34 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v7,
      Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
      0);
    QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v33, v34, 0);
  }
}


void BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0___ctor(
        BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0___SetItem_b__0(
        BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct BoardOptionEventTargetListViewItemDraw_o *_4__this; // x8
  BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *v3; // x19
  struct BoardOptionEventTargetListViewItemDraw_o *v4; // x8
  QuestInformationListViewItem_o *item; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0), (v4 = v3->fields.__4__this) == 0)
    || (this = (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)v4->fields.enemyTexture) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0), (item = v3->fields.item) == 0)
    || (this = (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)v3->fields.__4__this) == 0 )
  {
LABEL_8:
    sub_1C32E7C(this);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].fields.__4__this,
    item,
    0);
}