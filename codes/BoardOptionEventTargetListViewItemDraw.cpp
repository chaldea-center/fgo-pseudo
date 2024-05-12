void __fastcall BoardOptionEventTargetListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438AE02 & 1) == 0 )
  {
    sub_B775C4(&BoardOptionEventTargetListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_20965/*"missiontarget_bg"*/);
    byte_438AE02 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_20965/*"missiontarget_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20965/*"missiontarget_bg"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall BoardOptionEventTargetListViewItemDraw___ctor(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_438AE01 & 1) == 0 )
  {
    sub_B775C4(&QuestInformationListViewItemDraw_TypeInfo);
    byte_438AE01 = 1;
  }
  if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  }
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
    sub_B7769C(0LL, method);
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
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0
  intptr_t m_CachedPtr; // s0
  int v9; // s1
  int klass; // s2
  int klass_high; // s3
  struct UnityEngine_Material_o *mChocoMaterialSp; // x8
  int v13; // s0
  UnityEngine_Material_o *v17; // x20
  UnityEngine_Material_o *v18; // x21

  if ( (byte_438ADFE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Material_TypeInfo);
    sub_B775C4(&QuestInformationListViewItemDraw_TypeInfo);
    byte_438ADFE = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v13, 0LL);
        eventTargetComponent = this->fields.eventTargetComponent;
        if ( eventTargetComponent )
        {
          v17 = BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
                  eventTargetComponent,
                  *(const MethodInfo **)&dispTp);
          v18 = (UnityEngine_Material_o *)sub_B77694(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_41464292(v18, v17, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v18, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B7769C(eventTargetComponent, *(_QWORD *)&dispTp);
    case 2:
      eventTargetComponent = (BoardOptionEventTargetComponent_o *)QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        eventTargetComponent = (BoardOptionEventTargetComponent_o *)QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        mChocoMaterialSp = eventTargetComponent[1].fields.mChocoMaterialSp;
        m_CachedPtr = mChocoMaterialSp[1].fields.m_CachedPtr;
        v9 = *((_DWORD *)&mChocoMaterialSp[1].fields + 1);
        klass = (int)mChocoMaterialSp[2].klass;
        klass_high = HIDWORD(mChocoMaterialSp[2].klass);
LABEL_13:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&m_CachedPtr, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_18;
    case 1:
      *(UnityEngine_Color_o *)&m_CachedPtr = UnityEngine_Color__get_white(0LL);
      if ( !sp )
        goto LABEL_18;
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetListViewItemDraw__SetDispType_24814228(
        BoardOptionEventTargetListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0
  int v8; // s0
  System_String_o *v12; // x20
  QuestInformationListViewItemDraw_c *v13; // x0
  int v14; // s0
  UnityEngine_Material_o *v18; // x20
  UnityEngine_Shader_o *v19; // x1

  if ( (byte_438ADFF & 1) == 0 )
  {
    sub_B775C4(&QuestInformationListViewItemDraw_TypeInfo);
    sub_B775C4(&StringLiteral_16311/*"_MainTex"*/);
    byte_438ADFF = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v14, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      eventTargetComponent = this->fields.eventTargetComponent;
      if ( eventTargetComponent )
      {
        v18 = BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
                eventTargetComponent,
                *(const MethodInfo **)&dispTp);
        eventTargetComponent = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                                      texture,
                                                                      texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v18 )
        {
          UnityEngine_Material__SetTexture(
            v18,
            (System_String_o *)StringLiteral_16311/*"_MainTex"*/,
            (UnityEngine_Texture_o *)eventTargetComponent,
            0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v18,
            texture->klass->vtable._26_get_mainTexture.methodPtr);
          ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._30_MarkAsChanged.method)(
            texture,
            texture->klass->vtable._31_Awake.methodPtr);
          return;
        }
      }
    }
    goto LABEL_32;
  }
  if ( dispTp != 2 )
  {
    if ( dispTp != 1 )
      return;
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v8, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      eventTargetComponent = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                                    texture,
                                                                    texture->klass->vtable._29_set_shader.methodPtr);
      if ( eventTargetComponent )
      {
        eventTargetComponent = (BoardOptionEventTargetComponent_o *)UnityEngine_Object__get_name(
                                                                      (UnityEngine_Object_o *)eventTargetComponent,
                                                                      0LL);
        v12 = (System_String_o *)eventTargetComponent;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v12 )
        {
          if ( !System_String__Equals_44889276(
                  v12,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v13 = QuestInformationListViewItemDraw_TypeInfo;
            if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
              || QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              goto LABEL_31;
            }
            goto LABEL_30;
          }
          return;
        }
      }
    }
LABEL_32:
    sub_B7769C(eventTargetComponent, *(_QWORD *)&dispTp);
  }
  eventTargetComponent = (BoardOptionEventTargetComponent_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    eventTargetComponent = (BoardOptionEventTargetComponent_o *)QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_32;
  UIWidget__set_color(
    (UIWidget_o *)texture,
    *(UnityEngine_Color_o *)&eventTargetComponent[1].fields.mChocoMaterialSp[1].fields.m_CachedPtr,
    0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  eventTargetComponent = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                                texture,
                                                                texture->klass->vtable._29_set_shader.methodPtr);
  if ( !eventTargetComponent )
    goto LABEL_32;
  eventTargetComponent = (BoardOptionEventTargetComponent_o *)UnityEngine_Object__get_name(
                                                                (UnityEngine_Object_o *)eventTargetComponent,
                                                                0LL);
  if ( !eventTargetComponent )
    goto LABEL_32;
  if ( !System_String__Equals_44889276(
          (System_String_o *)eventTargetComponent,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v13 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_31;
    }
LABEL_30:
    j_il2cpp_runtime_class_init_0(v13);
    v13 = QuestInformationListViewItemDraw_TypeInfo;
LABEL_31:
    v19 = UnityEngine_Shader__Find(v13->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v19,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall BoardOptionEventTargetListViewItemDraw__SetFrame(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UISprite_o *iconBaseSprite; // x20
  BoardOptionEventTargetListViewItemDraw_c *v4; // x0
  System_String_o *BASE_SPRITE_NAME; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_438AE00 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BoardOptionEventTargetListViewItemDraw_TypeInfo);
    byte_438AE00 = 1;
  }
  iconBaseSprite = this->fields.iconBaseSprite;
  v4 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  if ( (BYTE3(BoardOptionEventTargetListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoardOptionEventTargetListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoardOptionEventTargetListViewItemDraw_TypeInfo);
    v4 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  }
  BASE_SPRITE_NAME = v4->static_fields->BASE_SPRITE_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(iconBaseSprite, BASE_SPRITE_NAME, 0LL);
  v7 = this->fields.iconBaseSprite;
  if ( !v7 )
    sub_B7769C(0LL, v6);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  QuestInformationListViewItem_o *v24; // x0
  UISprite_o *enemySp; // x20
  __int64 v26; // x8
  UISprite_o *v27; // x20
  const MethodInfo *v28; // x3
  UISpriteAltMat_o *v29; // x2
  int32_t v30; // w1
  struct UITexture_o **p_SvtImg; // x22
  char v32; // w23
  UnityEngine_Component_o *v33; // x8
  UITexture_o *v34; // x24
  int32_t monitor; // w21
  int32_t klass_high; // w23
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x3
  UISprite_o *v45; // x22
  int32_t v46; // w23
  QuestInformationListViewItem_o *v47; // x20
  System_Action_o *v48; // x22

  if ( (byte_438ADFD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&QuestInformationListViewItemDraw_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__);
    sub_B775C4(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
    byte_438ADFD = 1;
  }
  v7 = sub_B77694(BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
  BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0___ctor(
    (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_57;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  v16 = v7 + 24;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)item, v17, v18, v19, v20, v21, v22);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v23);
  v24 = *(QuestInformationListViewItem_o **)(v7 + 24);
  if ( !v24 )
  {
    SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
    if ( !SvtImg )
      goto LABEL_57;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
    if ( !SvtImg )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
LABEL_32:
    SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !SvtImg )
      goto LABEL_57;
    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
    if ( !SvtImg )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
    return;
  }
  if ( !mode || v24->fields.infoType != 1 )
    return;
  if ( QuestInformationListViewItem__isEnemyUnknown(v24, 0LL) )
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
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_4387463 )
            {
              sub_B775C4(&TerminalSceneComponent_TypeInfo);
              byte_4387463 = 1;
            }
            SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            }
            v26 = **(_QWORD **)&SvtImg[7].fields.m_CachedPtr;
            if ( v26 && enemySp )
            {
              UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v26 + 296), 0LL);
              v27 = (UISprite_o *)this->fields.enemySp;
              SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItemDraw_TypeInfo;
              if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
              }
              if ( v27 )
              {
                UISprite__set_spriteName(
                  v27,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                  0LL);
                v29 = this->fields.enemySp;
                v30 = 1;
LABEL_27:
                BoardOptionEventTargetListViewItemDraw__SetDispType(this, v30, v29, v28);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_57;
  }
  SvtImg = *(UnityEngine_Component_o **)v16;
  if ( !*(_QWORD *)v16 )
    goto LABEL_57;
  SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__isEnemyServant(
                                        (QuestInformationListViewItem_o *)SvtImg,
                                        0LL);
  p_SvtImg = &this->fields.SvtImg;
  if ( !this->fields.SvtImg )
    goto LABEL_57;
  v32 = (char)SvtImg;
  SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.SvtImg,
                                        0LL);
  if ( !SvtImg )
    goto LABEL_57;
  if ( (v32 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
    v33 = *(UnityEngine_Component_o **)v16;
    if ( !*(_QWORD *)v16 )
      goto LABEL_57;
    v34 = *p_SvtImg;
    klass_high = HIDWORD(v33[5].klass);
    monitor = (int32_t)v33[5].monitor;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                        v34,
                                                        klass_high,
                                                        monitor,
                                                        monitor,
                                                        0LL);
    *p_SvtImg = (struct UITexture_o *)Manager__loadCommandCard;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.SvtImg,
      Manager__loadCommandCard,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    if ( !*(_QWORD *)v16 )
      goto LABEL_57;
    BoardOptionEventTargetListViewItemDraw__SetDispType_24814228(
      this,
      *(_DWORD *)(*(_QWORD *)v16 + 140LL),
      this->fields.SvtImg,
      v44);
    goto LABEL_32;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
  SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
  if ( !SvtImg )
    goto LABEL_57;
  SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
  if ( !SvtImg )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
  if ( !*(_QWORD *)v16 )
    goto LABEL_57;
  v45 = (UISprite_o *)this->fields.enemySp;
  v46 = *(_DWORD *)(*(_QWORD *)v16 + 132LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEnemy(v45, v46, 0LL) )
  {
    SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( SvtImg )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
      SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
      if ( SvtImg )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
        if ( *(_QWORD *)v16 )
        {
          v30 = *(_DWORD *)(*(_QWORD *)v16 + 140LL);
          v29 = this->fields.enemySp;
          goto LABEL_27;
        }
      }
    }
LABEL_57:
    sub_B7769C(SvtImg, v9);
  }
  v47 = *(QuestInformationListViewItem_o **)(v7 + 24);
  v48 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v7,
    Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
    0LL);
  QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v47, v48, 0LL);
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
    sub_B7769C(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].monitor,
    0LL);
}