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

  if ( (byte_40FB0D7 & 1) == 0 )
  {
    sub_B16FFC(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_20461/*"missiontarget_bg"*/, v8);
    byte_40FB0D7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BoardOptionEventTargetListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_20461/*"missiontarget_bg"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_20461/*"missiontarget_bg"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BoardOptionEventTargetListViewItemDraw___ctor(
        BoardOptionEventTargetListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB0D6 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_40FB0D6 = 1;
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
    sub_B170D4();
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
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  QuestInformationListViewItemDraw_c *v12; // x0
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x8
  int v14; // s0
  const MethodInfo *v18; // x1
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0
  UnityEngine_Material_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Material_o *v25; // x21

  if ( (byte_40FB0D3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, v7);
    byte_40FB0D3 = 1;
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
          v20 = BoardOptionEventTargetComponent__NewChocoMaterialForSprite(eventTargetComponent, v18);
          v25 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v21, v22, v23, v24);
          UnityEngine_Material___ctor_40718828(v25, v20, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v25, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B170D4();
    case 2:
      v12 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v12 = QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        static_fields = v12->static_fields;
        r = static_fields->SHADOW_COLOR.fields.r;
        g = static_fields->SHADOW_COLOR.fields.g;
        b = static_fields->SHADOW_COLOR.fields.b;
        a = static_fields->SHADOW_COLOR.fields.a;
LABEL_13:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&r, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_18;
    case 1:
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( !sp )
        goto LABEL_18;
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetListViewItemDraw__SetDispType_27166784(
        BoardOptionEventTargetListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int v8; // s0
  UnityEngine_Object_o *v12; // x0
  System_String_o *name; // x20
  QuestInformationListViewItemDraw_c *v14; // x0
  QuestInformationListViewItemDraw_c *v15; // x0
  UnityEngine_Object_o *v16; // x0
  System_String_o *v17; // x0
  int v18; // s0
  const MethodInfo *v22; // x1
  BoardOptionEventTargetComponent_o *eventTargetComponent; // x0
  UnityEngine_Material_o *v24; // x20
  UnityEngine_Texture_o *v25; // x0
  UnityEngine_Shader_o *v26; // x1

  if ( (byte_40FB0D4 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    sub_B16FFC(&StringLiteral_15950/*"_MainTex"*/, v7);
    byte_40FB0D4 = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v18, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      eventTargetComponent = this->fields.eventTargetComponent;
      if ( eventTargetComponent )
      {
        v24 = BoardOptionEventTargetComponent__NewChocoMaterialForTexture(eventTargetComponent, v22);
        v25 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v24 )
        {
          UnityEngine_Material__SetTexture(v24, (System_String_o *)StringLiteral_15950/*"_MainTex"*/, v25, 0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v24,
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
      v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                      texture,
                                      texture->klass->vtable._29_set_shader.methodPtr);
      if ( v12 )
      {
        name = UnityEngine_Object__get_name(v12, 0LL);
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( name )
        {
          if ( !System_String__Equals_43731072(
                  name,
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
    sub_B170D4();
  }
  v15 = QuestInformationListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    v15 = QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_32;
  UIWidget__set_color((UIWidget_o *)texture, v15->static_fields->SHADOW_COLOR, 0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                  texture,
                                  texture->klass->vtable._29_set_shader.methodPtr);
  if ( !v16 )
    goto LABEL_32;
  v17 = UnityEngine_Object__get_name(v16, 0LL);
  if ( !v17 )
    goto LABEL_32;
  if ( !System_String__Equals_43731072(
          v17,
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
    v26 = UnityEngine_Shader__Find(v14->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v26,
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
  struct UISprite_o *v7; // x0

  if ( (byte_40FB0D5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&BoardOptionEventTargetListViewItemDraw_TypeInfo, v3);
    byte_40FB0D5 = 1;
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
  v7 = this->fields.iconBaseSprite;
  if ( !v7 )
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
    v7,
    v7->klass->vtable._34_get_minWidth.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetListViewItemDraw__SetItem(
        BoardOptionEventTargetListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  QuestInformationListViewItem_o **v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  QuestInformationListViewItem_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  UISprite_o *v35; // x20
  TerminalSceneComponent_c *v36; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  UISprite_o *v38; // x20
  const MethodInfo *v39; // x3
  UISpriteAltMat_o *v40; // x2
  int32_t dispType; // w1
  UnityEngine_Component_o *SvtImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *enemySp; // x0
  UnityEngine_GameObject_o *v45; // x0
  bool isEnemyServant; // w0
  struct UITexture_o **p_SvtImg; // x22
  bool v48; // w23
  UnityEngine_GameObject_o *v49; // x0
  QuestInformationListViewItem_o *v50; // x8
  UITexture_o *v51; // x24
  int32_t targetCnt; // w21
  int32_t targetId; // w23
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x3
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UISprite_o *v64; // x22
  int32_t iconId; // w23
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  UnityEngine_Behaviour_o *v70; // x0
  UnityEngine_Behaviour_o *enemyTexture; // x0
  QuestInformationListViewItem_o *v72; // x20
  System_Action_o *v73; // x22

  if ( (byte_40FB0D2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, item);
    sub_B16FFC(&AtlasManager_TypeInfo, v8);
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, v9);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v10);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v11);
    sub_B16FFC(&Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__, v12);
    sub_B16FFC(&BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo, v13);
    byte_40FB0D2 = 1;
  }
  v14 = sub_B170CC(
          BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_TypeInfo,
          item,
          *(_QWORD *)&mode,
          method,
          v4);
  BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0___ctor(
    (BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_57;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = item;
  v21 = (QuestInformationListViewItem_o **)(v14 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)item, v22, v23, v24, v25, v26, v27);
  BoardOptionEventTargetListViewItemDraw__SetFrame(this, v28);
  v29 = *(QuestInformationListViewItem_o **)(v14 + 24);
  if ( !v29 )
  {
    SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
    if ( !SvtImg )
      goto LABEL_57;
    gameObject = UnityEngine_Component__get_gameObject(SvtImg, 0LL);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
LABEL_32:
    enemySp = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !enemySp )
      goto LABEL_57;
    v45 = UnityEngine_Component__get_gameObject(enemySp, 0LL);
    if ( !v45 )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive(v45, 0, 0LL);
    return;
  }
  if ( !mode || v29->fields.infoType != 1 )
    return;
  if ( QuestInformationListViewItem__isEnemyUnknown(v29, 0LL) )
  {
    v30 = (UnityEngine_Component_o *)this->fields.SvtImg;
    if ( v30 )
    {
      v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
      if ( v31 )
      {
        UnityEngine_GameObject__SetActive(v31, 0, 0LL);
        v32 = (UnityEngine_Component_o *)this->fields.enemySp;
        if ( v32 )
        {
          v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
          if ( v33 )
          {
            UnityEngine_GameObject__SetActive(v33, 1, 0LL);
            v35 = (UISprite_o *)this->fields.enemySp;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_40F6042 )
            {
              sub_B16FFC(&TerminalSceneComponent_TypeInfo, v34);
              byte_40F6042 = 1;
            }
            v36 = TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              v36 = TerminalSceneComponent_TypeInfo;
            }
            mInstance = v36->static_fields->mInstance;
            if ( mInstance && v35 )
            {
              UISprite__set_atlas(v35, mInstance->fields.mTerminalAtlas, 0LL);
              v38 = (UISprite_o *)this->fields.enemySp;
              if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
              }
              if ( v38 )
              {
                UISprite__set_spriteName(
                  v38,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
                  0LL);
                v40 = this->fields.enemySp;
                dispType = 1;
LABEL_27:
                BoardOptionEventTargetListViewItemDraw__SetDispType(this, dispType, v40, v39);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_57;
  }
  if ( !*v21 )
    goto LABEL_57;
  isEnemyServant = QuestInformationListViewItem__isEnemyServant(*v21, 0LL);
  p_SvtImg = &this->fields.SvtImg;
  if ( !this->fields.SvtImg )
    goto LABEL_57;
  v48 = isEnemyServant;
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.SvtImg, 0LL);
  if ( !v49 )
    goto LABEL_57;
  if ( v48 )
  {
    UnityEngine_GameObject__SetActive(v49, 1, 0LL);
    v50 = *v21;
    if ( !*v21 )
      goto LABEL_57;
    v51 = *p_SvtImg;
    targetId = v50->fields.targetId;
    targetCnt = v50->fields.targetCnt;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                        v51,
                                                        targetId,
                                                        targetCnt,
                                                        targetCnt,
                                                        0LL);
    *p_SvtImg = (struct UITexture_o *)Manager__loadCommandCard;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.SvtImg,
      Manager__loadCommandCard,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    if ( !*v21 )
      goto LABEL_57;
    BoardOptionEventTargetListViewItemDraw__SetDispType_27166784(
      this,
      (*v21)->fields.dispType,
      this->fields.SvtImg,
      v61);
    goto LABEL_32;
  }
  UnityEngine_GameObject__SetActive(v49, 0, 0LL);
  v62 = (UnityEngine_Component_o *)this->fields.enemySp;
  if ( !v62 )
    goto LABEL_57;
  v63 = UnityEngine_Component__get_gameObject(v62, 0LL);
  if ( !v63 )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive(v63, 1, 0LL);
  if ( !*v21 )
    goto LABEL_57;
  v64 = (UISprite_o *)this->fields.enemySp;
  iconId = (*v21)->fields.iconId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEnemy(v64, iconId, 0LL) )
  {
    v70 = (UnityEngine_Behaviour_o *)this->fields.enemySp;
    if ( v70 )
    {
      UnityEngine_Behaviour__set_enabled(v70, 1, 0LL);
      enemyTexture = (UnityEngine_Behaviour_o *)this->fields.enemyTexture;
      if ( enemyTexture )
      {
        UnityEngine_Behaviour__set_enabled(enemyTexture, 0, 0LL);
        if ( *v21 )
        {
          dispType = (*v21)->fields.dispType;
          v40 = this->fields.enemySp;
          goto LABEL_27;
        }
      }
    }
LABEL_57:
    sub_B170D4();
  }
  v72 = *(QuestInformationListViewItem_o **)(v14 + 24);
  v73 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v66, v67, v68, v69);
  System_Action___ctor(
    v73,
    (Il2CppObject *)v14,
    Method_BoardOptionEventTargetListViewItemDraw___c__DisplayClass3_0__SetItem_b__0__,
    0LL);
  QuestInformationListViewItemDraw__LoadEnemyTexture((QuestInformationListViewItemDraw_o *)this, v72, v73, 0LL);
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
  UnityEngine_Behaviour_o *enemySp; // x0
  struct BoardOptionEventTargetListViewItemDraw_o *v5; // x8
  UnityEngine_Behaviour_o *enemyTexture; // x0
  struct QuestInformationListViewItem_o *item; // x8
  QuestInformationListViewItemDraw_o *v8; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (enemySp = (UnityEngine_Behaviour_o *)_4__this->fields.enemySp) == 0LL
    || (UnityEngine_Behaviour__set_enabled(enemySp, 0, 0LL), (v5 = this->fields.__4__this) == 0LL)
    || (enemyTexture = (UnityEngine_Behaviour_o *)v5->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled(enemyTexture, 1, 0LL), (item = this->fields.item) == 0LL)
    || (v8 = (QuestInformationListViewItemDraw_o *)this->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(v8, item->fields.dispType, v8->fields.enemyTexture, 0LL);
}