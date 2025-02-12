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

  if ( (byte_4BC4532 & 1) == 0 )
  {
    sub_1C1ABD4(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_21850/*"missiontarget_bg"*/, v8);
    byte_4BC4532 = 1;
  }
  BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields->BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_21850/*"missiontarget_bg"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_21850/*"missiontarget_bg"*/,
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
  if ( (byte_4BC4531 & 1) == 0 )
  {
    sub_1C1ABD4(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_4BC4531 = 1;
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
    sub_1C1AE30(0LL, method);
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
  if ( (byte_4BC452E & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    this = (BoardOptionEventTargetListViewItemDraw_o *)sub_1C1ABD4(&QuestInformationListViewItemDraw_TypeInfo, v7);
    byte_4BC452E = 1;
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
          v13 = (UnityEngine_Material_o *)sub_1C1AE20(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_70657684(v13, v12, 0LL);
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
      sub_1C1AE30(this, *(_QWORD *)&dispTp);
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
void __fastcall BoardOptionEventTargetListViewItemDraw__SetDispType_34571428(
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
  if ( (byte_4BC452F & 1) == 0 )
  {
    sub_1C1ABD4(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (BoardOptionEventTargetListViewItemDraw_o *)sub_1C1ABD4(&StringLiteral_16529/*"_MainTex"*/, v7);
    byte_4BC452F = 1;
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
            (System_String_o *)StringLiteral_16529/*"_MainTex"*/,
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
          if ( !System_String__Equals_63048684(
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
    sub_1C1AE30(this, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_63048684(
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

  if ( (byte_4BC4530 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v3);
    byte_4BC4530 = 1;
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
    sub_1C1AE30(0LL, v7);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1
  QuestInformationListViewItem_o *v30; // x0
  UISprite_o *enemySp; // x20
  __int64 v32; // x8
  UISprite_o *v33; // x20
  const MethodInfo *v34; // x3
  UISpriteAltMat_o *v35; // x2
  int32_t v36; // w1
  struct UITexture_o **p_SvtImg; // x21
  UnityEngine_Component_o *v38; // x8
  UITexture_o *v39; // x24
  int32_t monitor; // w22
  int32_t klass_high; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  const MethodInfo *v49; // x3
  UISprite_o *v50; // x22
  int32_t v51; // w23
  QuestInformationListViewItem_o *v52; // x20
  System_Action_o *v53; // x22

  if ( (byte_4BC452D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, item);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v7);
    sub_1C1ABD4(&QuestInformationListViewItemDraw_TypeInfo, v8);
    sub_1C1ABD4(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v10);
    sub_1C1ABD4(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__, v11);
    sub_1C1ABD4(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo, v12);
    byte_4BC452D = 1;
  }
  v13 = sub_1C1AE20(BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_54;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = item;
  v22 = v13 + 24;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)item, v23, v24, v25, v26, v27, v28);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v29);
  v30 = *(QuestInformationListViewItem_o **)(v13 + 24);
  if ( !v30 )
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
  if ( mode && v30->fields.infoType == 1 )
  {
    if ( QuestInformationListViewItem__isEnemyUnknown(v30, 0LL) )
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
              if ( !byte_4BC2713 )
              {
                sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v15);
                byte_4BC2713 = 1;
              }
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
              }
              v32 = **(_QWORD **)&SvtImg[7].fields.m_CachedPtr;
              if ( v32 && enemySp )
              {
                UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v32 + 304), 0LL);
                v33 = (UISprite_o *)this->fields.enemySp;
                SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItemDraw_TypeInfo;
                if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
                if ( v33 )
                {
                  UISprite__set_spriteName(
                    v33,
                    QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                    0LL);
                  v35 = this->fields.enemySp;
                  v36 = 1;
LABEL_52:
                  BoardOptionEventTargetListViewItemDraw__SetDispType(this, v36, v35, v34);
                  return;
                }
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
    SvtImg = *(UnityEngine_Component_o **)v22;
    if ( !*(_QWORD *)v22 )
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
      v38 = *(UnityEngine_Component_o **)v22;
      if ( !*(_QWORD *)v22 )
        goto LABEL_54;
      v39 = *p_SvtImg;
      klass_high = HIDWORD(v38[5].klass);
      monitor = (int32_t)v38[5].monitor;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v39, klass_high, monitor, monitor, 0LL);
      *p_SvtImg = Manager__loadCommandCard;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.SvtImg,
        (int64_t)Manager__loadCommandCard,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      if ( !*(_QWORD *)v22 )
        goto LABEL_54;
      BoardOptionEventTargetListViewItemDraw__SetDispType_34571428(
        this,
        *(_DWORD *)(*(_QWORD *)v22 + 140LL),
        this->fields.SvtImg,
        v49);
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
    if ( !*(_QWORD *)v22 )
      goto LABEL_54;
    v50 = (UISprite_o *)this->fields.enemySp;
    v51 = *(_DWORD *)(*(_QWORD *)v22 + 132LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEnemy(v50, v51, 0LL) )
    {
      SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( SvtImg )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
        SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
        if ( SvtImg )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
          if ( *(_QWORD *)v22 )
          {
            v36 = *(_DWORD *)(*(_QWORD *)v22 + 140LL);
            v35 = this->fields.enemySp;
            goto LABEL_52;
          }
        }
      }
LABEL_54:
      sub_1C1AE30(SvtImg, v15);
    }
    v52 = *(QuestInformationListViewItem_o **)(v13 + 24);
    v53 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(
      v53,
      (Il2CppObject *)v13,
      Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
      0LL);
    QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v52, v53, 0LL);
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
    sub_1C1AE30(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].fields.__4__this,
    0LL);
}