void __fastcall BoardOptionEventTargetListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E8642 & 1) == 0 )
  {
    sub_B5D5C4(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_20809/*"missiontarget_bg"*/, v8, v9, v10);
    byte_42E8642 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_20809/*"missiontarget_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20809/*"missiontarget_bg"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall BoardOptionEventTargetListViewItemDraw___ctor(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8641 & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8641 = 1;
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
    sub_B5D69C(0LL, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0
  intptr_t m_CachedPtr; // s0
  int v12; // s1
  int klass; // s2
  int klass_high; // s3
  struct UnityEngine_Material_o *mChocoMaterialSp; // x8
  int v16; // s0
  UnityEngine_Material_o *v20; // x20
  UnityEngine_Material_o *v21; // x21

  if ( (byte_42E863E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, dispTp, (_DWORD)sp, method);
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, v7, v8, v9);
    byte_42E863E = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v16, 0LL);
        eventTargetComponent = this->fields.eventTargetComponent;
        if ( eventTargetComponent )
        {
          v20 = BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
                  eventTargetComponent,
                  *(const MethodInfo **)&dispTp);
          v21 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_41620632(v21, v20, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v21, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B5D69C(eventTargetComponent, *(_QWORD *)&dispTp);
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
        v12 = *((_DWORD *)&mChocoMaterialSp[1].fields + 1);
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
void __fastcall BoardOptionEventTargetListViewItemDraw__SetDispType_24906000(
        BoardOptionEventTargetListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0
  int v11; // s0
  System_String_o *v15; // x20
  QuestInformationListViewItemDraw_c *v16; // x0
  int v17; // s0
  UnityEngine_Material_o *v21; // x20
  UnityEngine_Shader_o *v22; // x1

  if ( (byte_42E863F & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, dispTp, (_DWORD)texture, method);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v7, v8, v9);
    byte_42E863F = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v17, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      eventTargetComponent = this->fields.eventTargetComponent;
      if ( eventTargetComponent )
      {
        v21 = BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
                eventTargetComponent,
                *(const MethodInfo **)&dispTp);
        eventTargetComponent = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                                      texture,
                                                                      texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v21 )
        {
          UnityEngine_Material__SetTexture(
            v21,
            (System_String_o *)StringLiteral_16205/*"_MainTex"*/,
            (UnityEngine_Texture_o *)eventTargetComponent,
            0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v21,
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
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v11, 0LL);
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
        v15 = (System_String_o *)eventTargetComponent;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v15 )
        {
          if ( !System_String__Equals_44565128(
                  v15,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v16 = QuestInformationListViewItemDraw_TypeInfo;
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
    sub_B5D69C(eventTargetComponent, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_44565128(
          (System_String_o *)eventTargetComponent,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v16 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_31;
    }
LABEL_30:
    j_il2cpp_runtime_class_init_0(v16);
    v16 = QuestInformationListViewItemDraw_TypeInfo;
LABEL_31:
    v22 = UnityEngine_Shader__Find(v16->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v22,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall BoardOptionEventTargetListViewItemDraw__SetFrame(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UISprite_o *iconBaseSprite; // x20
  BoardOptionEventTargetListViewItemDraw_c *v9; // x0
  System_String_o *BASE_SPRITE_NAME; // x21
  __int64 v11; // x1
  struct UISprite_o *v12; // x0

  if ( (byte_42E8640 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v5, v6, v7);
    byte_42E8640 = 1;
  }
  iconBaseSprite = this->fields.iconBaseSprite;
  v9 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  if ( (BYTE3(BoardOptionEventTargetListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BoardOptionEventTargetListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BoardOptionEventTargetListViewItemDraw_TypeInfo);
    v9 = BoardOptionEventTargetListViewItemDraw_TypeInfo;
  }
  BASE_SPRITE_NAME = v9->static_fields->BASE_SPRITE_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(iconBaseSprite, BASE_SPRITE_NAME, 0LL);
  v12 = this->fields.iconBaseSprite;
  if ( !v12 )
    sub_B5D69C(0LL, v11);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
    v12,
    v12->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall BoardOptionEventTargetListViewItemDraw__SetItem(
        BoardOptionEventTargetListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x21
  UnityEngine_Component_o *SvtImg; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  QuestInformationListViewItem_o *v42; // x0
  int v43; // w2
  __int64 v44; // x3
  UISprite_o *enemySp; // x20
  __int64 v46; // x8
  UISprite_o *v47; // x20
  const MethodInfo *v48; // x3
  UISpriteAltMat_o *v49; // x2
  int32_t v50; // w1
  struct UITexture_o **p_SvtImg; // x22
  char v52; // w23
  UnityEngine_Component_o *v53; // x8
  UITexture_o *v54; // x24
  int32_t monitor; // w21
  int32_t klass_high; // w23
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  const MethodInfo *v64; // x3
  UISprite_o *v65; // x22
  int32_t v66; // w23
  QuestInformationListViewItem_o *v67; // x20
  System_Action_o *v68; // x22

  if ( (byte_42E863D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&AtlasManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__, v19, v20, v21);
    sub_B5D5C4(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo, v22, v23, v24);
    byte_42E863D = 1;
  }
  v25 = sub_B5D694(BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo);
  BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0___ctor(
    (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_57;
  *(_QWORD *)(v25 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 24) = item;
  v34 = v25 + 24;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)item, v35, v36, v37, v38, v39, v40);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v41);
  v42 = *(QuestInformationListViewItem_o **)(v25 + 24);
  if ( !v42 )
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
  if ( !mode || v42->fields.infoType != 1 )
    return;
  if ( QuestInformationListViewItem__isEnemyUnknown(v42, 0LL) )
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
            if ( !byte_42E4B1E )
            {
              sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v27, v43, v44);
              byte_42E4B1E = 1;
            }
            SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            }
            v46 = **(_QWORD **)&SvtImg[7].fields.m_CachedPtr;
            if ( v46 && enemySp )
            {
              UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v46 + 296), 0LL);
              v47 = (UISprite_o *)this->fields.enemySp;
              SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItemDraw_TypeInfo;
              if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
              }
              if ( v47 )
              {
                UISprite__set_spriteName(
                  v47,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                  0LL);
                v49 = this->fields.enemySp;
                v50 = 1;
LABEL_27:
                BoardOptionEventTargetListViewItemDraw__SetDispType(this, v50, v49, v48);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_57;
  }
  SvtImg = *(UnityEngine_Component_o **)v34;
  if ( !*(_QWORD *)v34 )
    goto LABEL_57;
  SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__isEnemyServant(
                                        (QuestInformationListViewItem_o *)SvtImg,
                                        0LL);
  p_SvtImg = &this->fields.SvtImg;
  if ( !this->fields.SvtImg )
    goto LABEL_57;
  v52 = (char)SvtImg;
  SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.SvtImg,
                                        0LL);
  if ( !SvtImg )
    goto LABEL_57;
  if ( (v52 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
    v53 = *(UnityEngine_Component_o **)v34;
    if ( !*(_QWORD *)v34 )
      goto LABEL_57;
    v54 = *p_SvtImg;
    klass_high = HIDWORD(v53[5].klass);
    monitor = (int32_t)v53[5].monitor;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                        v54,
                                                        klass_high,
                                                        monitor,
                                                        monitor,
                                                        0LL);
    *p_SvtImg = (struct UITexture_o *)Manager__loadCommandCard;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.SvtImg,
      Manager__loadCommandCard,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    if ( !*(_QWORD *)v34 )
      goto LABEL_57;
    BoardOptionEventTargetListViewItemDraw__SetDispType_24906000(
      this,
      *(_DWORD *)(*(_QWORD *)v34 + 140LL),
      this->fields.SvtImg,
      v64);
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
  if ( !*(_QWORD *)v34 )
    goto LABEL_57;
  v65 = (UISprite_o *)this->fields.enemySp;
  v66 = *(_DWORD *)(*(_QWORD *)v34 + 132LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEnemy(v65, v66, 0LL) )
  {
    SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( SvtImg )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
      SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
      if ( SvtImg )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
        if ( *(_QWORD *)v34 )
        {
          v50 = *(_DWORD *)(*(_QWORD *)v34 + 140LL);
          v49 = this->fields.enemySp;
          goto LABEL_27;
        }
      }
    }
LABEL_57:
    sub_B5D69C(SvtImg, v27);
  }
  v67 = *(QuestInformationListViewItem_o **)(v25 + 24);
  v68 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v68,
    (Il2CppObject *)v25,
    Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
    0LL);
  QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v67, v68, 0LL);
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
    sub_B5D69C(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].monitor,
    0LL);
}