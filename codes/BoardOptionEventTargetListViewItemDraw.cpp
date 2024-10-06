void __fastcall BoardOptionEventTargetListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A6CA36 & 1) == 0 )
  {
    sub_1B90010(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v1);
    sub_1B90010(&StringLiteral_21511/*"missiontarget_bg"*/, v4);
    byte_4A6CA36 = 1;
  }
  BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields->BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21511/*"missiontarget_bg"*/;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_21511/*"missiontarget_bg"*/,
    v2,
    v3);
}


void __fastcall BoardOptionEventTargetListViewItemDraw___ctor(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6CA35 & 1) == 0 )
  {
    sub_1B90010(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_4A6CA35 = 1;
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
    sub_1B9026C(0LL, method);
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
  __int64 v7; // x1
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Material_o *v13; // x21
  float *v14; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4A6CA32 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    this = (BoardOptionEventTargetListViewItemDraw_o *)sub_1B90010(&QuestInformationListViewItemDraw_TypeInfo, v7);
    byte_4A6CA32 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v15.fields.r = 1.0;
        v15.fields.g = 1.0;
        v15.fields.b = 1.0;
        v15.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v15, 0LL);
        this = (BoardOptionEventTargetListViewItemDraw_o *)v6->fields.eventTargetComponent;
        if ( this )
        {
          v12 = BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
                  (BoardOptionEventTargetComponent_o *)this,
                  0LL);
          v13 = (UnityEngine_Material_o *)sub_1B9025C(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_69402800(v13, v12, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v13, 0LL);
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
        v14 = *(float **)&this[1].fields.m_CachedPtr;
        v10 = v14[11];
        v11 = v14[12];
        v8 = v14[9];
        v9 = v14[10];
        goto LABEL_15;
      }
LABEL_17:
      sub_1B9026C(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v8 = 1.0;
        v9 = 1.0;
        v10 = 1.0;
        v11 = 1.0;
LABEL_15:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v8, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetListViewItemDraw__SetDispType_33586568(
        BoardOptionEventTargetListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  BoardOptionEventTargetListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  BoardOptionEventTargetListViewItemDraw_o *v8; // x20
  QuestInformationListViewItemDraw_c *v9; // x0
  UnityEngine_Material_o *v10; // x20
  UnityEngine_Shader_o *v11; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4A6CA33 & 1) == 0 )
  {
    sub_1B90010(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (BoardOptionEventTargetListViewItemDraw_o *)sub_1B90010(&StringLiteral_16287/*"_MainTex"*/, v7);
    byte_4A6CA33 = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v13.fields.r = 1.0;
      v13.fields.g = 1.0;
      v13.fields.b = 1.0;
      v13.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v13, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      this = (BoardOptionEventTargetListViewItemDraw_o *)v6->fields.eventTargetComponent;
      if ( this )
      {
        v10 = BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
                (BoardOptionEventTargetComponent_o *)this,
                0LL);
        this = (BoardOptionEventTargetListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                             texture,
                                                             texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v10 )
        {
          UnityEngine_Material__SetTexture(
            v10,
            (System_String_o *)StringLiteral_16287/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v10,
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
      v12.fields.r = 1.0;
      v12.fields.g = 1.0;
      v12.fields.b = 1.0;
      v12.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v12, 0LL);
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
        v8 = this;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        if ( v8 )
        {
          if ( !System_String__Equals_61795408(
                  (System_String_o *)v8,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v9 = QuestInformationListViewItemDraw_TypeInfo;
            if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              goto LABEL_26;
            goto LABEL_27;
          }
          return;
        }
      }
    }
LABEL_28:
    sub_1B9026C(this, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_61795408(
          (System_String_o *)this,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v9 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestInformationListViewItemDraw_TypeInfo;
    }
LABEL_27:
    v11 = UnityEngine_Shader__Find(v9->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v11,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall BoardOptionEventTargetListViewItemDraw__SetFrame(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BoardOptionEventTargetListViewItemDraw_c *v4; // x0
  UISprite_o *iconBaseSprite; // x20
  System_String_o *BASE_SPRITE_NAME; // x21
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_4A6CA34 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, method);
    sub_1B90010(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v3);
    byte_4A6CA34 = 1;
  }
  v4 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  iconBaseSprite = this->fields.iconBaseSprite;
  if ( !BoardOptionEventTargetListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoardOptionEventTargetListViewItemDraw_TypeInfo);
    v4 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  }
  BASE_SPRITE_NAME = v4->static_fields->BASE_SPRITE_NAME;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(iconBaseSprite, BASE_SPRITE_NAME, 0LL);
  v8 = this->fields.iconBaseSprite;
  if ( !v8 )
    sub_1B9026C(0LL, v7);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall BoardOptionEventTargetListViewItemDraw__SetItem(
        BoardOptionEventTargetListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  UnityEngine_Component_o *SvtImg; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x1
  QuestInformationListViewItem_o *v22; // x0
  UISprite_o *enemySp; // x20
  __int64 v24; // x8
  UISprite_o *v25; // x20
  const MethodInfo *v26; // x3
  UISpriteAltMat_o *v27; // x2
  int32_t v28; // w1
  struct UITexture_o **p_SvtImg; // x21
  UnityEngine_Component_o *v30; // x8
  UITexture_o *v31; // x24
  int32_t monitor; // w22
  int32_t klass_high; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  const MethodInfo *v37; // x3
  UISprite_o *v38; // x22
  int32_t v39; // w23
  QuestInformationListViewItem_o *v40; // x20
  System_Action_o *v41; // x22

  if ( (byte_4A6CA31 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, item);
    sub_1B90010(&AtlasManager_TypeInfo, v7);
    sub_1B90010(&QuestInformationListViewItemDraw_TypeInfo, v8);
    sub_1B90010(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B90010(&TerminalSceneComponent_TypeInfo, v10);
    sub_1B90010(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__, v11);
    sub_1B90010(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo, v12);
    byte_4A6CA31 = 1;
  }
  v13 = sub_1B9025C(BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_54;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = item;
  v18 = v13 + 24;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)item, v19, v20);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v21);
  v22 = *(QuestInformationListViewItem_o **)(v13 + 24);
  if ( !v22 )
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
  if ( mode && v22->fields.infoType == 1 )
  {
    if ( QuestInformationListViewItem__isEnemyUnknown(v22, 0LL) )
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
              if ( !byte_4A6AF7D )
              {
                sub_1B90010(&TerminalSceneComponent_TypeInfo, v15);
                byte_4A6AF7D = 1;
              }
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              }
              v24 = **(_QWORD **)&SvtImg[7].fields.m_CachedPtr;
              if ( v24 && enemySp )
              {
                UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v24 + 304), 0LL);
                v25 = (UISprite_o *)this->fields.enemySp;
                SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItemDraw_TypeInfo;
                if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
                if ( v25 )
                {
                  UISprite__set_spriteName(
                    v25,
                    QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                    0LL);
                  v27 = this->fields.enemySp;
                  v28 = 1;
LABEL_52:
                  BoardOptionEventTargetListViewItemDraw__SetDispType(this, v28, v27, v26);
                  return;
                }
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
    SvtImg = *(UnityEngine_Component_o **)v18;
    if ( !*(_QWORD *)v18 )
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
      v30 = *(UnityEngine_Component_o **)v18;
      if ( !*(_QWORD *)v18 )
        goto LABEL_54;
      v31 = *p_SvtImg;
      klass_high = HIDWORD(v30[5].klass);
      monitor = (int32_t)v30[5].monitor;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v31, klass_high, monitor, monitor, 0LL);
      *p_SvtImg = Manager__loadCommandCard;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&this->fields.SvtImg,
        (int32_t)Manager__loadCommandCard,
        v35,
        v36);
      if ( !*(_QWORD *)v18 )
        goto LABEL_54;
      BoardOptionEventTargetListViewItemDraw__SetDispType_33586568(
        this,
        *(_DWORD *)(*(_QWORD *)v18 + 140LL),
        this->fields.SvtImg,
        v37);
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
    if ( !*(_QWORD *)v18 )
      goto LABEL_54;
    v38 = (UISprite_o *)this->fields.enemySp;
    v39 = *(_DWORD *)(*(_QWORD *)v18 + 132LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEnemy(v38, v39, 0LL) )
    {
      SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( SvtImg )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
        SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
        if ( SvtImg )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
          if ( *(_QWORD *)v18 )
          {
            v28 = *(_DWORD *)(*(_QWORD *)v18 + 140LL);
            v27 = this->fields.enemySp;
            goto LABEL_52;
          }
        }
      }
LABEL_54:
      sub_1B9026C(SvtImg, v15);
    }
    v40 = *(QuestInformationListViewItem_o **)(v13 + 24);
    v41 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v13,
      Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
      0LL);
    QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v40, v41, 0LL);
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
    sub_1B9026C(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].fields.__4__this,
    0LL);
}