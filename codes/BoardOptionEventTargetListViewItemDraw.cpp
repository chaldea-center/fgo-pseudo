void __fastcall BoardOptionEventTargetListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B12CED & 1) == 0 )
  {
    sub_1BCA7E0(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_21714/*"missiontarget_bg"*/, v8, v9);
    byte_4B12CED = 1;
  }
  BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields->BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21714/*"missiontarget_bg"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_21714/*"missiontarget_bg"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BoardOptionEventTargetListViewItemDraw___ctor(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12CEC & 1) == 0 )
  {
    sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, method, v2);
    byte_4B12CEC = 1;
  }
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v8; // x2
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  UnityEngine_Material_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  UnityEngine_Material_o *v17; // x21
  float *v18; // x8
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4B12CE9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp, sp);
    this = (BoardOptionEventTargetListViewItemDraw_o *)sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, v7, v8);
    byte_4B12CE9 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v19.fields.r = 1.0;
        v19.fields.g = 1.0;
        v19.fields.b = 1.0;
        v19.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v19, 0LL);
        this = (BoardOptionEventTargetListViewItemDraw_o *)v6->fields.eventTargetComponent;
        if ( this )
        {
          v13 = BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
                  (BoardOptionEventTargetComponent_o *)this,
                  0LL);
          v17 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v14, v15, v16);
          UnityEngine_Material___ctor_70017516(v17, v13, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v17, 0LL);
          return;
        }
      }
      goto LABEL_17;
    case 2:
      this = (BoardOptionEventTargetListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
        this = (BoardOptionEventTargetListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        v18 = *(float **)&this[1].fields.m_CachedPtr;
        v11 = v18[11];
        v12 = v18[12];
        v9 = v18[9];
        v10 = v18[10];
        goto LABEL_15;
      }
LABEL_17:
      sub_1BCAA3C(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v9 = 1.0;
        v10 = 1.0;
        v11 = 1.0;
        v12 = 1.0;
LABEL_15:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v9, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetListViewItemDraw__SetDispType_34146852(
        BoardOptionEventTargetListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  BoardOptionEventTargetListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  BoardOptionEventTargetListViewItemDraw_o *v9; // x20
  __int64 v10; // x1
  QuestInformationListViewItemDraw_c *v11; // x0
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Shader_o *v13; // x0
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4B12CEA & 1) == 0 )
  {
    sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp, texture);
    this = (BoardOptionEventTargetListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v7, v8);
    byte_4B12CEA = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v15, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      this = (BoardOptionEventTargetListViewItemDraw_o *)v6->fields.eventTargetComponent;
      if ( this )
      {
        v12 = BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
                (BoardOptionEventTargetComponent_o *)this,
                0LL);
        this = (BoardOptionEventTargetListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                             texture,
                                                             texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v12 )
        {
          UnityEngine_Material__SetTexture(
            v12,
            (System_String_o *)StringLiteral_16431/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v12,
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
      v14.fields.r = 1.0;
      v14.fields.g = 1.0;
      v14.fields.b = 1.0;
      v14.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v14, 0LL);
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
        v9 = this;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
        if ( v9 )
        {
          if ( !System_String__Equals_62409536(
                  (System_String_o *)v9,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v11 = QuestInformationListViewItemDraw_TypeInfo;
            if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              goto LABEL_26;
            goto LABEL_27;
          }
          return;
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(this, *(_QWORD *)&dispTp);
  }
  this = (BoardOptionEventTargetListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_62409536(
          (System_String_o *)this,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v11 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v11, v10);
      v11 = QuestInformationListViewItemDraw_TypeInfo;
    }
LABEL_27:
    v13 = UnityEngine_Shader__Find(v11->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v13,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall BoardOptionEventTargetListViewItemDraw__SetFrame(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BoardOptionEventTargetListViewItemDraw_c *v6; // x0
  UISprite_o *iconBaseSprite; // x20
  System_String_o *BASE_SPRITE_NAME; // x21
  __int64 v9; // x1
  struct UISprite_o *v10; // x0

  if ( (byte_4B12CEB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v4, v5);
    byte_4B12CEB = 1;
  }
  v6 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  iconBaseSprite = this->fields.iconBaseSprite;
  if ( !BoardOptionEventTargetListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoardOptionEventTargetListViewItemDraw_TypeInfo, method);
    v6 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  }
  BASE_SPRITE_NAME = v6->static_fields->BASE_SPRITE_NAME;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetEventUI(iconBaseSprite, BASE_SPRITE_NAME, 0LL);
  v10 = this->fields.iconBaseSprite;
  if ( !v10 )
    sub_1BCAA3C(0LL, v9);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
    v10,
    v10->klass->vtable._34_get_minWidth.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetListViewItemDraw__SetItem(
        BoardOptionEventTargetListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  UnityEngine_Component_o *SvtImg; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x1
  QuestInformationListViewItem_o *v36; // x0
  __int64 v37; // x2
  UISprite_o *enemySp; // x20
  __int64 v39; // x8
  UISprite_o *v40; // x20
  const MethodInfo *v41; // x3
  UISpriteAltMat_o *v42; // x2
  int32_t v43; // w1
  struct UITexture_o **p_SvtImg; // x21
  UnityEngine_Component_o *v45; // x8
  UITexture_o *v46; // x24
  int32_t monitor; // w22
  int32_t klass_high; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x3
  UISprite_o *v57; // x22
  int32_t v58; // w23
  __int64 v59; // x2
  __int64 v60; // x3
  QuestInformationListViewItem_o *v61; // x20
  System_Action_o *v62; // x22

  if ( (byte_4B12CE8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__, v15, v16);
    sub_1BCA7E0(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo, v17, v18);
    byte_4B12CE8 = 1;
  }
  v19 = sub_1BCAA2C(
          BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo,
          item,
          *(_QWORD *)&mode,
          method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_54;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = item;
  v28 = v19 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)item, v29, v30, v31, v32, v33, v34);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v35);
  v36 = *(QuestInformationListViewItem_o **)(v19 + 24);
  if ( !v36 )
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
  if ( mode && v36->fields.infoType == 1 )
  {
    if ( QuestInformationListViewItem__isEnemyUnknown(v36, 0LL) )
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
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
              if ( !byte_4B10F83 )
              {
                sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v21, v37);
                byte_4B10F83 = 1;
              }
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
                SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              }
              v39 = **(_QWORD **)&SvtImg[7].fields.m_CachedPtr;
              if ( v39 && enemySp )
              {
                UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v39 + 304), 0LL);
                v40 = (UISprite_o *)this->fields.enemySp;
                SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItemDraw_TypeInfo;
                if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, v21);
                if ( v40 )
                {
                  UISprite__set_spriteName(
                    v40,
                    QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                    0LL);
                  v42 = this->fields.enemySp;
                  v43 = 1;
LABEL_52:
                  BoardOptionEventTargetListViewItemDraw__SetDispType(this, v43, v42, v41);
                  return;
                }
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
    SvtImg = *(UnityEngine_Component_o **)v28;
    if ( !*(_QWORD *)v28 )
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
      v45 = *(UnityEngine_Component_o **)v28;
      if ( !*(_QWORD *)v28 )
        goto LABEL_54;
      v46 = *p_SvtImg;
      klass_high = HIDWORD(v45[5].klass);
      monitor = (int32_t)v45[5].monitor;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v21);
      Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v46, klass_high, monitor, monitor, 0LL);
      *p_SvtImg = Manager__loadCommandCard;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.SvtImg,
        (int64_t)Manager__loadCommandCard,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      if ( !*(_QWORD *)v28 )
        goto LABEL_54;
      BoardOptionEventTargetListViewItemDraw__SetDispType_34146852(
        this,
        *(_DWORD *)(*(_QWORD *)v28 + 140LL),
        this->fields.SvtImg,
        v56);
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
    if ( !*(_QWORD *)v28 )
      goto LABEL_54;
    v57 = (UISprite_o *)this->fields.enemySp;
    v58 = *(_DWORD *)(*(_QWORD *)v28 + 132LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
    if ( AtlasManager__SetEnemy(v57, v58, 0LL) )
    {
      SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( SvtImg )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
        SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
        if ( SvtImg )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
          if ( *(_QWORD *)v28 )
          {
            v43 = *(_DWORD *)(*(_QWORD *)v28 + 140LL);
            v42 = this->fields.enemySp;
            goto LABEL_52;
          }
        }
      }
LABEL_54:
      sub_1BCAA3C(SvtImg, v21);
    }
    v61 = *(QuestInformationListViewItem_o **)(v19 + 24);
    v62 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v59, v60);
    System_Action___ctor(
      v62,
      (Il2CppObject *)v19,
      Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
      0LL);
    QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v61, v62, 0LL);
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
    sub_1BCAA3C(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].fields.__4__this,
    0LL);
}