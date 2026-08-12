void BoardOptionEventTargetListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596CE51 & 1) == 0 )
  {
    sub_2213A60(&BoardOptionEventTargetListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_22728/*"missiontarget_bg"*/);
    byte_596CE51 = 1;
  }
  v7 = StringLiteral_22728/*"missiontarget_bg"*/;
  BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields->BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_22728/*"missiontarget_bg"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void BoardOptionEventTargetListViewItemDraw___ctor(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CE50 & 1) == 0 )
  {
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    byte_596CE50 = 1;
  }
  if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method, v2);
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
  if ( isSprite )
  {
    if ( eventTargetComponent )
      return BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
               eventTargetComponent,
               (const MethodInfo *)isSprite);
LABEL_6:
    sub_2213CDC(eventTargetComponent, isSprite);
  }
  if ( !eventTargetComponent )
    goto LABEL_6;
  return BoardOptionEventTargetComponent__NewChocoMaterialForTexture(eventTargetComponent, (const MethodInfo *)isSprite);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Material_o *BoardOptionEventTargetListViewItemDraw__GetNewColorShadowMaterial(
        BoardOptionEventTargetListViewItemDraw_o *this,
        bool isSprite,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0

  eventTargetComponent = this->fields.eventTargetComponent;
  if ( isSprite )
  {
    if ( eventTargetComponent )
      return BoardOptionEventTargetComponent__NewColorShadowMaterialForSprite(
               eventTargetComponent,
               (const MethodInfo *)isSprite);
LABEL_6:
    sub_2213CDC(eventTargetComponent, isSprite);
  }
  if ( !eventTargetComponent )
    goto LABEL_6;
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
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))iconBaseSprite->klass->vtable._8_set_alpha.methodPtr)(
    iconBaseSprite,
    iconBaseSprite->klass->vtable._8_set_alpha.method,
    alpha);
}


void BoardOptionEventTargetListViewItemDraw__SetFrame(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BoardOptionEventTargetListViewItemDraw_c *v4; // x0
  UISprite_o *iconBaseSprite; // x20
  System_String_o *BASE_SPRITE_NAME; // x21
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_596CE4F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BoardOptionEventTargetListViewItemDraw_TypeInfo);
    byte_596CE4F = 1;
  }
  v4 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  iconBaseSprite = this->fields.iconBaseSprite;
  if ( !*(&BoardOptionEventTargetListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BoardOptionEventTargetListViewItemDraw_TypeInfo, method, v2);
    v4 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  }
  BASE_SPRITE_NAME = v4->static_fields->BASE_SPRITE_NAME;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetEventUI(iconBaseSprite, BASE_SPRITE_NAME, 0);
  v8 = this->fields.iconBaseSprite;
  if ( !v8 )
    sub_2213CDC(0, v7);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v8->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v8,
    v8->klass->vtable._33_MakePixelPerfect.method);
}


void BoardOptionEventTargetListViewItemDraw__SetItem(
        BoardOptionEventTargetListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_Component_o *SvtImg; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  QuestInformationListViewItem_o **v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1
  QuestInformationListViewItem_o *v24; // x0
  __int64 v25; // x2
  UISprite_o *enemySp; // x21
  __int64 v27; // x8
  __int64 v28; // x2
  UISprite_o *v29; // x21
  UISpriteAltMat_o *v30; // x2
  QuestInformationListViewItem_o *v31; // x3
  QuestInformationListViewItemDraw_o *v32; // x0
  int32_t dispType; // w1
  bool isEnemyServant; // w8
  struct UITexture_o **p_SvtImg; // x22
  __int64 v36; // x2
  QuestInformationListViewItem_o *v37; // x8
  UITexture_o *v38; // x23
  int32_t targetCnt; // w21
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x2
  UISprite_o *v49; // x22
  int32_t iconId; // w23
  QuestInformationListViewItem_o *v51; // x20
  System_Action_o *v52; // x22

  if ( (byte_596CE4E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__);
    sub_2213A60(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
    byte_596CE4E = 1;
  }
  v7 = sub_2213CCC(BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_54;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  v16 = (QuestInformationListViewItem_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)item, v17, v18, v19, v20, v21, v22);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v23);
  v24 = *(QuestInformationListViewItem_o **)(v7 + 24);
  if ( !v24 )
  {
    SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
    if ( !SvtImg )
      goto LABEL_54;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
    if ( !SvtImg )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
LABEL_29:
    SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !SvtImg )
      goto LABEL_54;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
    if ( !SvtImg )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
    return;
  }
  if ( !mode || v24->fields.infoType != 1 )
    return;
  if ( QuestInformationListViewItem__isEnemyUnknown(v24, 0) )
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
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9, v25);
            if ( !byte_596A090 )
            {
              sub_2213A60(&TerminalSceneComponent_TypeInfo);
              byte_596A090 = 1;
            }
            SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9, v25);
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            }
            v27 = *(_QWORD *)SvtImg[7].fields.m_CachedPtr;
            if ( v27 && enemySp )
            {
              UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v27 + 304), 0);
              v29 = (UISprite_o *)this->fields.enemySp;
              SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItemDraw_TypeInfo;
              if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, v9, v28);
              if ( v29 )
              {
                UISprite__set_spriteName(
                  v29,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                  0);
                v30 = this->fields.enemySp;
                v31 = *v16;
                v32 = (QuestInformationListViewItemDraw_o *)this;
                dispType = 1;
LABEL_24:
                QuestInformationListViewItemDraw__SetDispType(v32, dispType, v30, v31, 0);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_54;
  }
  SvtImg = (UnityEngine_Component_o *)*v16;
  if ( !*v16 )
    goto LABEL_54;
  isEnemyServant = QuestInformationListViewItem__isEnemyServant((QuestInformationListViewItem_o *)SvtImg, 0);
  p_SvtImg = &this->fields.SvtImg;
  SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
  if ( isEnemyServant )
  {
    if ( !SvtImg )
      goto LABEL_54;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
    if ( !SvtImg )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
    v37 = *v16;
    if ( !*v16 )
      goto LABEL_54;
    v38 = *p_SvtImg;
    targetId = v37->fields.targetId;
    targetCnt = v37->fields.targetCnt;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9, v36);
    Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v38, targetId, targetCnt, targetCnt, 0);
    *p_SvtImg = Manager__loadCommandCard;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.SvtImg,
      (int32_t)Manager__loadCommandCard,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    if ( !*v16 )
      goto LABEL_54;
    QuestInformationListViewItemDraw__SetDispType_43367988(
      (QuestInformationListViewItemDraw_o *)this,
      (*v16)->fields.dispType,
      this->fields.SvtImg,
      *v16,
      0);
    goto LABEL_29;
  }
  if ( !SvtImg )
    goto LABEL_54;
  SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
  if ( !SvtImg )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
  SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
  if ( !SvtImg )
    goto LABEL_54;
  SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0);
  if ( !SvtImg )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
  if ( !*v16 )
    goto LABEL_54;
  v49 = (UISprite_o *)this->fields.enemySp;
  iconId = (*v16)->fields.iconId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v48);
  if ( AtlasManager__SetEnemy(v49, iconId, 0) )
  {
    SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( SvtImg )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0);
      SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
      if ( SvtImg )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0);
        v31 = *v16;
        if ( *v16 )
        {
          dispType = v31->fields.dispType;
          v30 = this->fields.enemySp;
          v32 = (QuestInformationListViewItemDraw_o *)this;
          goto LABEL_24;
        }
      }
    }
LABEL_54:
    sub_2213CDC(SvtImg, v9);
  }
  v51 = *(QuestInformationListViewItem_o **)(v7 + 24);
  v52 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v7,
    Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
    0);
  QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v51, v52, 0);
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
    sub_2213CDC(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    *((UITexture_o **)this + 18),
    item,
    0);
}