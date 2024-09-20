void __fastcall BoardOptionEventTargetListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A57CEA & 1) == 0 )
  {
    sub_1B885B0(&BoardOptionEventTargetListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_21482/*"missiontarget_bg"*/);
    byte_4A57CEA = 1;
  }
  BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields->BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21482/*"missiontarget_bg"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_21482/*"missiontarget_bg"*/,
    v1,
    v2);
}


void __fastcall BoardOptionEventTargetListViewItemDraw___ctor(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57CE9 & 1) == 0 )
  {
    sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4A57CE9 = 1;
  }
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  QuestInformationListViewItemDraw___ctor((QuestInformationListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetListViewItemDraw__SetAlpha(
        BoardOptionEventTargetListViewItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct UISprite_o *iconBaseSprite; // x0

  iconBaseSprite = this->fields.iconBaseSprite;
  if ( !iconBaseSprite )
    sub_1B8880C(0LL, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))iconBaseSprite->klass->vtable._8_set_alpha.method)(
    iconBaseSprite,
    iconBaseSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    *(long double *)&alpha);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetListViewItemDraw__SetDispType(
        BoardOptionEventTargetListViewItemDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        const MethodInfo *method)
{
  BoardOptionEventTargetListViewItemDraw_o *v6; // x20
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s3
  UnityEngine_Material_o *v11; // x20
  UnityEngine_Material_o *v12; // x21
  float *v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4A57CE6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    this = (BoardOptionEventTargetListViewItemDraw_o *)sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4A57CE6 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v14.fields.r = 1.0;
        v14.fields.g = 1.0;
        v14.fields.b = 1.0;
        v14.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v14, 0LL);
        this = (BoardOptionEventTargetListViewItemDraw_o *)v6->fields.eventTargetComponent;
        if ( this )
        {
          v11 = BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
                  (BoardOptionEventTargetComponent_o *)this,
                  0LL);
          v12 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_69322740(v12, v11, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v12, 0LL);
          return;
        }
      }
      goto LABEL_17;
    case 2:
      this = (BoardOptionEventTargetListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        this = (BoardOptionEventTargetListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        v13 = *(float **)&this[1].fields.m_CachedPtr;
        v9 = v13[11];
        v10 = v13[12];
        v7 = v13[9];
        v8 = v13[10];
        goto LABEL_15;
      }
LABEL_17:
      sub_1B8880C(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v7 = 1.0;
        v8 = 1.0;
        v9 = 1.0;
        v10 = 1.0;
LABEL_15:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v7, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetListViewItemDraw__SetDispType_33471096(
        BoardOptionEventTargetListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  BoardOptionEventTargetListViewItemDraw_o *v6; // x20
  BoardOptionEventTargetListViewItemDraw_o *v7; // x20
  QuestInformationListViewItemDraw_c *v8; // x0
  UnityEngine_Material_o *v9; // x20
  UnityEngine_Shader_o *v10; // x0
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4A57CE7 & 1) == 0 )
  {
    sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    this = (BoardOptionEventTargetListViewItemDraw_o *)sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    byte_4A57CE7 = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v12.fields.r = 1.0;
      v12.fields.g = 1.0;
      v12.fields.b = 1.0;
      v12.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v12, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      this = (BoardOptionEventTargetListViewItemDraw_o *)v6->fields.eventTargetComponent;
      if ( this )
      {
        v9 = BoardOptionEventTargetComponent__NewChocoMaterialForTexture((BoardOptionEventTargetComponent_o *)this, 0LL);
        this = (BoardOptionEventTargetListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                             texture,
                                                             texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v9 )
        {
          UnityEngine_Material__SetTexture(
            v9,
            (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v9,
            texture->klass->vtable._26_get_mainTexture.methodPtr);
          ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._30_MarkAsChanged.method)(
            texture,
            texture->klass->vtable._31_Awake.methodPtr);
          return;
        }
      }
    }
    goto LABEL_28;
  }
  if ( dispTp != 2 )
  {
    if ( dispTp != 1 )
      return;
    if ( texture )
    {
      v11.fields.r = 1.0;
      v11.fields.g = 1.0;
      v11.fields.b = 1.0;
      v11.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v11, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      this = (BoardOptionEventTargetListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                           texture,
                                                           texture->klass->vtable._29_set_shader.methodPtr);
      if ( this )
      {
        this = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__get_name(
                                                             (UnityEngine_Object_o *)this,
                                                             0LL);
        v7 = this;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        if ( v7 )
        {
          if ( !System_String__Equals_61715348(
                  (System_String_o *)v7,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v8 = QuestInformationListViewItemDraw_TypeInfo;
            if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              goto LABEL_26;
            goto LABEL_27;
          }
          return;
        }
      }
    }
LABEL_28:
    sub_1B8880C(this, *(_QWORD *)&dispTp);
  }
  this = (BoardOptionEventTargetListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    this = (BoardOptionEventTargetListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_28;
  UIWidget__set_color(
    (UIWidget_o *)texture,
    *(UnityEngine_Color_o *)(*(_QWORD *)&this[1].fields.m_CachedPtr + 36LL),
    0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  this = (BoardOptionEventTargetListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                       texture,
                                                       texture->klass->vtable._29_set_shader.methodPtr);
  if ( !this )
    goto LABEL_28;
  this = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( !System_String__Equals_61715348(
          (System_String_o *)this,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v8 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v8);
      v8 = QuestInformationListViewItemDraw_TypeInfo;
    }
LABEL_27:
    v10 = UnityEngine_Shader__Find(v8->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v10,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall BoardOptionEventTargetListViewItemDraw__SetFrame(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetListViewItemDraw_c *v3; // x0
  UISprite_o *iconBaseSprite; // x20
  System_String_o *BASE_SPRITE_NAME; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_4A57CE8 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BoardOptionEventTargetListViewItemDraw_TypeInfo);
    byte_4A57CE8 = 1;
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
  AtlasManager__SetEventUI(iconBaseSprite, BASE_SPRITE_NAME, 0LL);
  v7 = this->fields.iconBaseSprite;
  if ( !v7 )
    sub_1B8880C(0LL, v6);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
    v7,
    v7->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall BoardOptionEventTargetListViewItemDraw__SetItem(
        BoardOptionEventTargetListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x21
  UnityEngine_Component_o *SvtImg; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  QuestInformationListViewItem_o *v16; // x0
  UISprite_o *enemySp; // x20
  __int64 v18; // x8
  UISprite_o *v19; // x20
  const MethodInfo *v20; // x3
  UISpriteAltMat_o *v21; // x2
  int32_t v22; // w1
  struct UITexture_o **p_SvtImg; // x21
  UnityEngine_Component_o *v24; // x8
  UITexture_o *v25; // x24
  int32_t monitor; // w22
  int32_t klass_high; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x3
  UISprite_o *v32; // x22
  int32_t v33; // w23
  QuestInformationListViewItem_o *v34; // x20
  System_Action_o *v35; // x22

  if ( (byte_4A57CE5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__);
    sub_1B885B0(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
    byte_4A57CE5 = 1;
  }
  v7 = sub_1B887FC(BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_54;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = item;
  v12 = v7 + 24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)item, v13, v14);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v15);
  v16 = *(QuestInformationListViewItem_o **)(v7 + 24);
  if ( !v16 )
  {
    SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
    if ( !SvtImg )
      goto LABEL_54;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
    if ( !SvtImg )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
LABEL_28:
    SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( SvtImg )
    {
      SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
      if ( SvtImg )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
        return;
      }
    }
    goto LABEL_54;
  }
  if ( mode && v16->fields.infoType == 1 )
  {
    if ( QuestInformationListViewItem__isEnemyUnknown(v16, 0LL) )
    {
      SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
      if ( SvtImg )
      {
        SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
        if ( SvtImg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
          SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
          if ( SvtImg )
          {
            SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
            if ( SvtImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
              enemySp = (UISprite_o *)this->fields.enemySp;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4A5629D )
              {
                sub_1B885B0(&TerminalSceneComponent_TypeInfo);
                byte_4A5629D = 1;
              }
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              }
              v18 = **(_QWORD **)&SvtImg[7].fields.m_CachedPtr;
              if ( v18 && enemySp )
              {
                UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v18 + 304), 0LL);
                v19 = (UISprite_o *)this->fields.enemySp;
                SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItemDraw_TypeInfo;
                if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
                if ( v19 )
                {
                  UISprite__set_spriteName(
                    v19,
                    QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                    0LL);
                  v21 = this->fields.enemySp;
                  v22 = 1;
LABEL_52:
                  BoardOptionEventTargetListViewItemDraw__SetDispType(this, v22, v21, v20);
                  return;
                }
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
    SvtImg = *(UnityEngine_Component_o **)v12;
    if ( !*(_QWORD *)v12 )
      goto LABEL_54;
    if ( QuestInformationListViewItem__isEnemyServant((QuestInformationListViewItem_o *)SvtImg, 0LL) )
    {
      p_SvtImg = &this->fields.SvtImg;
      SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
      if ( !SvtImg )
        goto LABEL_54;
      SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
      if ( !SvtImg )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
      v24 = *(UnityEngine_Component_o **)v12;
      if ( !*(_QWORD *)v12 )
        goto LABEL_54;
      v25 = *p_SvtImg;
      klass_high = HIDWORD(v24[5].klass);
      monitor = (int32_t)v24[5].monitor;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v25, klass_high, monitor, monitor, 0LL);
      *p_SvtImg = Manager__loadCommandCard;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.SvtImg,
        (int32_t)Manager__loadCommandCard,
        v29,
        v30);
      if ( !*(_QWORD *)v12 )
        goto LABEL_54;
      BoardOptionEventTargetListViewItemDraw__SetDispType_33471096(
        this,
        *(_DWORD *)(*(_QWORD *)v12 + 140LL),
        this->fields.SvtImg,
        v31);
      goto LABEL_28;
    }
    SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
    if ( !SvtImg )
      goto LABEL_54;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
    if ( !SvtImg )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
    SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !SvtImg )
      goto LABEL_54;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
    if ( !SvtImg )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
    if ( !*(_QWORD *)v12 )
      goto LABEL_54;
    v32 = (UISprite_o *)this->fields.enemySp;
    v33 = *(_DWORD *)(*(_QWORD *)v12 + 132LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEnemy(v32, v33, 0LL) )
    {
      SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( SvtImg )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
        SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
        if ( SvtImg )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
          if ( *(_QWORD *)v12 )
          {
            v22 = *(_DWORD *)(*(_QWORD *)v12 + 140LL);
            v21 = this->fields.enemySp;
            goto LABEL_52;
          }
        }
      }
LABEL_54:
      sub_1B8880C(SvtImg, v9);
    }
    v34 = *(QuestInformationListViewItem_o **)(v7 + 24);
    v35 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      (Il2CppObject *)v7,
      Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
      0LL);
    QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v34, v35, 0LL);
  }
}


void __fastcall BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0___ctor(
        BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0___SetItem_b__0(
        BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  struct BoardOptionEventTargetListViewItemDraw_o *_4__this; // x8
  BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *v3; // x19
  struct BoardOptionEventTargetListViewItemDraw_o *v4; // x8
  struct QuestInformationListViewItem_o *item; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)v4->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL), (item = v3->fields.item) == 0LL)
    || (this = (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)v3->fields.__4__this) == 0LL )
  {
LABEL_8:
    sub_1B8880C(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].fields.__4__this,
    0LL);
}