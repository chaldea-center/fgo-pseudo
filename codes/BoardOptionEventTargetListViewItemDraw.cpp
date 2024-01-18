void __fastcall BoardOptionEventTargetListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4187DA8 & 1) == 0 )
  {
    sub_B2C35C(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_20546/*"missiontarget_bg"*/, v8);
    byte_4187DA8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_20546/*"missiontarget_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20546/*"missiontarget_bg"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BoardOptionEventTargetListViewItemDraw___ctor(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187DA7 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_4187DA7 = 1;
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
    sub_B2C434(0LL, method);
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
  __int64 v7; // x1
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0
  intptr_t m_CachedPtr; // s0
  int v10; // s1
  int klass; // s2
  int klass_high; // s3
  struct UnityEngine_Material_o *mChocoMaterialSp; // x8
  int v14; // s0
  UnityEngine_Material_o *v18; // x20
  UnityEngine_Material_o *v19; // x21

  if ( (byte_4187DA4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, v7);
    byte_4187DA4 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v14, 0LL);
        eventTargetComponent = this->fields.eventTargetComponent;
        if ( eventTargetComponent )
        {
          v18 = BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
                  eventTargetComponent,
                  *(const MethodInfo **)&dispTp);
          v19 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_40686000(v19, v18, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v19, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B2C434(eventTargetComponent, *(_QWORD *)&dispTp);
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
        v10 = *((_DWORD *)&mChocoMaterialSp[1].fields + 1);
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
void __fastcall BoardOptionEventTargetListViewItemDraw__SetDispType_25537048(
        BoardOptionEventTargetListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0
  int v9; // s0
  System_String_o *v13; // x20
  QuestInformationListViewItemDraw_c *v14; // x0
  int v15; // s0
  UnityEngine_Material_o *v19; // x20
  UnityEngine_Shader_o *v20; // x1

  if ( (byte_4187DA5 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v7);
    byte_4187DA5 = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v15, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      eventTargetComponent = this->fields.eventTargetComponent;
      if ( eventTargetComponent )
      {
        v19 = BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
                eventTargetComponent,
                *(const MethodInfo **)&dispTp);
        eventTargetComponent = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                                      texture,
                                                                      texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v19 )
        {
          UnityEngine_Material__SetTexture(
            v19,
            (System_String_o *)StringLiteral_16013/*"_MainTex"*/,
            (UnityEngine_Texture_o *)eventTargetComponent,
            0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v19,
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
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v9, 0LL);
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
        v13 = (System_String_o *)eventTargetComponent;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v13 )
        {
          if ( !System_String__Equals_44292872(
                  v13,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v14 = QuestInformationListViewItemDraw_TypeInfo;
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
    sub_B2C434(eventTargetComponent, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_44292872(
          (System_String_o *)eventTargetComponent,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v14 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_31;
    }
LABEL_30:
    j_il2cpp_runtime_class_init_0(v14);
    v14 = QuestInformationListViewItemDraw_TypeInfo;
LABEL_31:
    v20 = UnityEngine_Shader__Find(v14->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v20,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall BoardOptionEventTargetListViewItemDraw__SetFrame(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *iconBaseSprite; // x20
  BoardOptionEventTargetListViewItemDraw_c *v5; // x0
  System_String_o *BASE_SPRITE_NAME; // x21
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_4187DA6 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v3);
    byte_4187DA6 = 1;
  }
  iconBaseSprite = this->fields.iconBaseSprite;
  v5 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  if ( (BYTE3(BoardOptionEventTargetListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoardOptionEventTargetListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoardOptionEventTargetListViewItemDraw_TypeInfo);
    v5 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  }
  BASE_SPRITE_NAME = v5->static_fields->BASE_SPRITE_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(iconBaseSprite, BASE_SPRITE_NAME, 0LL);
  v8 = this->fields.iconBaseSprite;
  if ( !v8 )
    sub_B2C434(0LL, v7);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  QuestInformationListViewItem_o *v30; // x0
  UISprite_o *enemySp; // x20
  __int64 v32; // x8
  UISprite_o *v33; // x20
  const MethodInfo *v34; // x3
  UISpriteAltMat_o *v35; // x2
  int32_t v36; // w1
  struct UITexture_o **p_SvtImg; // x22
  char v38; // w23
  UnityEngine_Component_o *v39; // x8
  UITexture_o *v40; // x24
  int32_t monitor; // w21
  int32_t klass_high; // w23
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  const MethodInfo *v50; // x3
  UISprite_o *v51; // x22
  int32_t v52; // w23
  QuestInformationListViewItem_o *v53; // x20
  System_Action_o *v54; // x22

  if ( (byte_4187DA3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, item);
    sub_B2C35C(&AtlasManager_TypeInfo, v7);
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, v8);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v10);
    sub_B2C35C(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__, v11);
    sub_B2C35C(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo, v12);
    byte_4187DA3 = 1;
  }
  v13 = sub_B2C42C(BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
  BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0___ctor(
    (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_57;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = item;
  v22 = v13 + 24;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)item, v23, v24, v25, v26, v27, v28);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v29);
  v30 = *(QuestInformationListViewItem_o **)(v13 + 24);
  if ( !v30 )
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
  if ( !mode || v30->fields.infoType != 1 )
    return;
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
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_4183C65 )
            {
              sub_B2C35C(&TerminalSceneComponent_TypeInfo, v15);
              byte_4183C65 = 1;
            }
            SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            }
            v32 = **(_QWORD **)&SvtImg[7].fields.m_CachedPtr;
            if ( v32 && enemySp )
            {
              UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v32 + 296), 0LL);
              v33 = (UISprite_o *)this->fields.enemySp;
              SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItemDraw_TypeInfo;
              if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
              }
              if ( v33 )
              {
                UISprite__set_spriteName(
                  v33,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                  0LL);
                v35 = this->fields.enemySp;
                v36 = 1;
LABEL_27:
                BoardOptionEventTargetListViewItemDraw__SetDispType(this, v36, v35, v34);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_57;
  }
  SvtImg = *(UnityEngine_Component_o **)v22;
  if ( !*(_QWORD *)v22 )
    goto LABEL_57;
  SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__isEnemyServant(
                                        (QuestInformationListViewItem_o *)SvtImg,
                                        0LL);
  p_SvtImg = &this->fields.SvtImg;
  if ( !this->fields.SvtImg )
    goto LABEL_57;
  v38 = (char)SvtImg;
  SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.SvtImg,
                                        0LL);
  if ( !SvtImg )
    goto LABEL_57;
  if ( (v38 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
    v39 = *(UnityEngine_Component_o **)v22;
    if ( !*(_QWORD *)v22 )
      goto LABEL_57;
    v40 = *p_SvtImg;
    klass_high = HIDWORD(v39[5].klass);
    monitor = (int32_t)v39[5].monitor;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                        v40,
                                                        klass_high,
                                                        monitor,
                                                        monitor,
                                                        0LL);
    *p_SvtImg = (struct UITexture_o *)Manager__loadCommandCard;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.SvtImg,
      Manager__loadCommandCard,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    if ( !*(_QWORD *)v22 )
      goto LABEL_57;
    BoardOptionEventTargetListViewItemDraw__SetDispType_25537048(
      this,
      *(_DWORD *)(*(_QWORD *)v22 + 140LL),
      this->fields.SvtImg,
      v50);
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
  if ( !*(_QWORD *)v22 )
    goto LABEL_57;
  v51 = (UISprite_o *)this->fields.enemySp;
  v52 = *(_DWORD *)(*(_QWORD *)v22 + 132LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEnemy(v51, v52, 0LL) )
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
          goto LABEL_27;
        }
      }
    }
LABEL_57:
    sub_B2C434(SvtImg, v15);
  }
  v53 = *(QuestInformationListViewItem_o **)(v13 + 24);
  v54 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v13,
    Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
    0LL);
  QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v53, v54, 0LL);
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
    sub_B2C434(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].monitor,
    0LL);
}