void __fastcall QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v30; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct QuestInformationListViewItemDraw_StaticFields *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct QuestInformationListViewItemDraw_StaticFields *v47; // x0
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  QuestInformationListViewItemDraw_c *v55; // x8
  float v56; // s4
  float v57; // s5
  float v58; // s6
  float v59; // s7
  QuestInformationListViewItemDraw_c *v60; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v61; // x0
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Array_o *v69; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct UnityEngine_Color_o v77; // [xsp+0h] [xbp-20h] BYREF
  System_RuntimeFieldHandle_o v78; // 0:w1.4
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E8AF8 & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&float___TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58,
      v11,
      v12,
      v13);
    sub_B5D5C4(&StringLiteral_18599/*"enemy_icon_"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21935/*"questinfo_enemy_brank"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15172/*"Unlit/Transparent Colored"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_24288/*"？？？"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_6079/*"Enemys/Icon/"*/, v26, v27, v28);
    byte_42E8AF8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v30 = (System_Int32_array **)StringLiteral_21935/*"questinfo_enemy_brank"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21935/*"questinfo_enemy_brank"*/;
  sub_B5D560(static_fields, v30, v2, v3, v4, v5, v6, v7);
  v31 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_24288/*"？？？"*/;
  v31->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_24288/*"？？？"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v31->ENEMY_UNKNOWN_NAME, v32, v33, v34, v35, v36, v37, v38);
  v39 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v40 = (System_Int32_array **)StringLiteral_6079/*"Enemys/Icon/"*/;
  v39->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6079/*"Enemys/Icon/"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v39->ENEMY_ICON_TEXTURE_PATH, v40, v41, v42, v43, v44, v45, v46);
  v47 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v48 = (System_Int32_array **)StringLiteral_18599/*"enemy_icon_"*/;
  v47->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18599/*"enemy_icon_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v47->ENEMY_ICON_TEXTURE_PREFIX, v48, v49, v50, v51, v52, v53, v54);
  v55 = QuestInformationListViewItemDraw_TypeInfo;
  v79.fields.a = 1.0;
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID = 12;
  v55->static_fields->DEF_FONT_SIZE = 15;
  v79.fields.r = 0.05;
  v77 = (struct UnityEngine_Color_o)0LL;
  v79.fields.g = 0.05;
  v79.fields.b = 0.05;
  UnityEngine_Color___ctor(v79, v56, v57, v58, v59, (const MethodInfo *)&v77);
  v60 = QuestInformationListViewItemDraw_TypeInfo;
  QuestInformationListViewItemDraw_TypeInfo->static_fields->SHADOW_COLOR = v77;
  v61 = v60->static_fields;
  v62 = (System_Int32_array **)StringLiteral_15172/*"Unlit/Transparent Colored"*/;
  v61->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15172/*"Unlit/Transparent Colored"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v61->DEFAULT_SHADER, v62, v63, v64, v65, v66, v67, v68);
  v69 = (System_Array_o *)sub_B5D5DC(float___TypeInfo, 4LL);
  v78.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v69, v78, 0LL);
  v70 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v70->TARGET_POSITION = (struct System_Single_array *)v69;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v70->TARGET_POSITION,
    (System_Int32_array **)v69,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
}


void __fastcall QuestInformationListViewItemDraw___ctor(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestInformationListViewItemDraw__LoadEnemyTexture(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        System_Action_o *callback,
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
  CommonUI_o *Instance; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  int32_t iconId; // w9
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v43; // x0
  struct System_String_o *v44; // x0
  struct System_String_o **p_enemyIconName; // x19
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *v52; // x19
  AssetLoader_LoadEndDataHandler_o *v53; // x20
  int32_t v54; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8AF5 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)item, (_DWORD)callback, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&Method_QuestInformationListViewItemDraw___c__DisplayClass31_0__LoadEnemyTexture_b__0__, v19, v20, v21);
    sub_B5D5C4(&QuestInformationListViewItemDraw___c__DisplayClass31_0_TypeInfo, v22, v23, v24);
    byte_42E8AF5 = 1;
  }
  v25 = sub_B5D694(QuestInformationListViewItemDraw___c__DisplayClass31_0_TypeInfo);
  QuestInformationListViewItemDraw___c__DisplayClass31_0___ctor(
    (QuestInformationListViewItemDraw___c__DisplayClass31_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_16;
  *(_QWORD *)(v25 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v40);
  Instance = (CommonUI_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  }
  if ( !item )
    goto LABEL_16;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v54 = iconId;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  v44 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v43, 0LL);
  this->fields.enemyIconName = v44;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_B5D560((BattleServantConfConponent_o *)p_enemyIconName, (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
  v52 = System_String__Concat_44577788(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v53 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v53,
    (Il2CppObject *)v25,
    Method_QuestInformationListViewItemDraw___c__DisplayClass31_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v52, v53, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(Instance, v27);
  }
}


// attributes: thunk
void __fastcall QuestInformationListViewItemDraw__OnDestroy(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, method);
}


void __fastcall QuestInformationListViewItemDraw__ReleaseEnemyTexture(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o **p_enemyIconName; // x20
  QuestInformationListViewItemDraw_c *v9; // x0
  System_String_o *v10; // x21
  BattleServantConfConponent_o *p_enemyIconAssetData; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E8AF6 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, v5, v6, v7);
    byte_42E8AF6 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v9 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v9 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v10 = System_String__Concat_44577788(v9->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v10, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (BattleServantConfConponent_o *)&this->fields.enemyIconAssetData;
    sub_B5D560(p_enemyIconAssetData, 0LL, v12, v13, v14, v15, v16, v17);
    p_enemyIconAssetData->monitor = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_enemyIconName, 0LL, v18, v19, v20, v21, v22, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewItemDraw__SetDispType(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  QuestInformationListViewItemDraw_c *v11; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x8
  int v17; // s0
  UnityEngine_Material_o *v21; // x20
  UnityEngine_Material_o *v22; // x21

  if ( (byte_42E8AF2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, dispTp, (_DWORD)sp, lManager);
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, v8, v9, v10);
    byte_42E8AF2 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v17, 0LL);
        if ( lManager )
        {
          v21 = QuestInformationListViewManager__NewChocoMaterialForSprite(lManager, *(const MethodInfo **)&dispTp);
          v22 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_41620632(v22, v21, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v22, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B5D69C(v11, *(_QWORD *)&dispTp);
    case 2:
      v11 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v11 = QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        static_fields = v11->static_fields;
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
void __fastcall QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_c *v6; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_42E8AF4 & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, dispTp, (_DWORD)texture, method);
    byte_42E8AF4 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      v6 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v6 = QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( !texture )
LABEL_15:
        sub_B5D69C(v6, *(_QWORD *)&dispTp);
      static_fields = v6->static_fields;
      r = static_fields->SHADOW_COLOR.fields.r;
      g = static_fields->SHADOW_COLOR.fields.g;
      b = static_fields->SHADOW_COLOR.fields.b;
      a = static_fields->SHADOW_COLOR.fields.a;
      goto LABEL_13;
    case 1:
LABEL_6:
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( !texture )
        goto LABEL_15;
LABEL_13:
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&r, 0LL);
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewItemDraw__SetDispType_25436512(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Texture_o *name; // x0
  int v12; // s0
  System_String_o *v16; // x20
  QuestInformationListViewItemDraw_c *v17; // x0
  int v18; // s0
  UnityEngine_Material_o *v22; // x20
  UnityEngine_Shader_o *v23; // x1

  if ( (byte_42E8AF3 & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, dispTp, (_DWORD)texture, lManager);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v8, v9, v10);
    byte_42E8AF3 = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v18, 0LL);
      name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                        texture,
                                        0LL,
                                        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( lManager )
      {
        v22 = QuestInformationListViewManager__NewChocoMaterialForTexture(lManager, *(const MethodInfo **)&dispTp);
        name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                          texture,
                                          texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v22 )
        {
          UnityEngine_Material__SetTexture(v22, (System_String_o *)StringLiteral_16205/*"_MainTex"*/, name, 0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v22,
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
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v12, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                        texture,
                                        texture->klass->vtable._29_set_shader.methodPtr);
      if ( name )
      {
        name = (UnityEngine_Texture_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0LL);
        v16 = (System_String_o *)name;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v16 )
        {
          if ( !System_String__Equals_44565128(
                  v16,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v17 = QuestInformationListViewItemDraw_TypeInfo;
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
    sub_B5D69C(name, *(_QWORD *)&dispTp);
  }
  name = (UnityEngine_Texture_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    name = (UnityEngine_Texture_o *)QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_32;
  UIWidget__set_color(
    (UIWidget_o *)texture,
    *(UnityEngine_Color_o *)(*(_QWORD *)&name[7].fields.m_CachedPtr + 40LL),
    0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                    texture,
                                    texture->klass->vtable._29_set_shader.methodPtr);
  if ( !name )
    goto LABEL_32;
  name = (UnityEngine_Texture_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0LL);
  if ( !name )
    goto LABEL_32;
  if ( !System_String__Equals_44565128(
          (System_String_o *)name,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v17 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_31;
    }
LABEL_30:
    j_il2cpp_runtime_class_init_0(v17);
    v17 = QuestInformationListViewItemDraw_TypeInfo;
LABEL_31:
    v23 = UnityEngine_Shader__Find(v17->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v23,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall QuestInformationListViewItemDraw__SetEnemyName(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestInformationListViewItemDraw_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v17; // x22

  v5 = this;
  if ( (byte_42E8AF7 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__33_0__, v9, v10, v11);
    this = (QuestInformationListViewItemDraw_o *)sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v12, v13, v14);
    byte_42E8AF7 = 1;
  }
  if ( !item )
    goto LABEL_14;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v17 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__33_0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(NameEffectPath, v17, 1, 0LL);
  }
  this = (QuestInformationListViewItemDraw_o *)v5->fields.textLb;
  if ( !this )
LABEL_14:
    sub_B5D69C(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0LL);
}


void __fastcall QuestInformationListViewItemDraw__SetItem(
        QuestInformationListViewItemDraw_o *this,
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
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  __int64 v58; // x22
  int64_t Instance; // x0
  QuestInformationListViewManager_c *v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  QuestInformationListViewItem_o **v67; // x20
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Object_o *completeMissionTarget; // x21
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int v76; // w8
  int64_t v77; // x24
  unsigned int v78; // w26
  __int64 v79; // x8
  __int64 v80; // x8
  __int64 v81; // x8
  QuestInformationListViewItem_o *v82; // x8
  struct ListViewObject_o *viewObject; // x9
  QuestInformationListViewManager_o *manager; // x21
  __int64 v85; // x10
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v87; // x8
  int32_t v88; // w1
  bool v89; // w1
  int32_t mEnemyType; // w24
  struct UITexture_o **p_SvtImg; // x23
  QuestInformationListViewItem_o *v92; // x8
  UITexture_o *v93; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  const MethodInfo *v103; // x4
  const MethodInfo *v104; // x2
  ItemMaster_o *v105; // x21
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  TerminalSceneComponent_c *v109; // x0
  UnityEngine_Object_o *mInstance; // x22
  int v111; // w2
  __int64 v112; // x3
  UISprite_o *enemySp; // x22
  __int64 v114; // x8
  UISprite_o *v115; // x22
  QuestInformationListViewItemDraw_o *v116; // x0
  const MethodInfo *v117; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v119; // w1
  UISprite_o *v120; // x23
  int32_t iconId; // w24
  const MethodInfo *v122; // x4
  QuestInformationListViewItem_o *v123; // x21
  System_Action_o *v124; // x23
  const MethodInfo *v125; // x3
  const MethodInfo *v126; // x1
  int32_t *v127; // x8
  UserItemMaster_o *v128; // x21
  int32_t v129; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21
  __int64 v132; // x0
  QuestInformationListViewItemDraw_o *v133; // x0
  int32_t v134; // w1
  UISpriteAltMat_o *v135; // x2
  QuestInformationListViewManager_o *v136; // x3
  const MethodInfo *v137; // x4

  if ( (byte_42E8AF0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&AtlasManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MstMissionMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&QuestInformationListViewManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__, v46, v47, v48);
    sub_B5D5C4(&QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_12264/*"SHOP_BUY_ITEM_HOLD"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_1/*""*/, v55, v56, v57);
    byte_42E8AF0 = 1;
  }
  v58 = sub_B5D694(QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  QuestInformationListViewItemDraw___c__DisplayClass26_0___ctor(
    (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v58,
    0LL);
  if ( !v58 )
    goto LABEL_176;
  *(_QWORD *)(v58 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v58 + 16), (System_Int32_array **)this, v61, v62, v63, v64, v65, v66);
  *(_QWORD *)(v58 + 24) = item;
  v67 = (QuestInformationListViewItem_o **)(v58 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v58 + 24), (System_Int32_array **)item, v68, v69, v70, v71, v72, v73);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_176;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_176;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_176;
    Instance = (int64_t)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_176;
    v76 = *(_DWORD *)(Instance + 24);
    v77 = Instance;
    if ( v76 >= 1 )
    {
      v78 = 0;
      while ( 1 )
      {
        if ( v78 >= v76 )
          goto LABEL_177;
        v79 = *(_QWORD *)(v77 + 8LL * (int)v78 + 32);
        if ( !v79 )
          goto LABEL_176;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_176;
        Instance = (int64_t)EventMissionMaster__getCompleteMissionList(
                              MasterData_WarQuestSelectionMaster,
                              *(_DWORD *)(v79 + 20),
                              0LL);
        if ( !Instance )
          goto LABEL_176;
        v80 = *(_QWORD *)(Instance + 24);
        if ( v80 )
          break;
        v76 = *(_DWORD *)(v77 + 24);
        if ( (int)++v78 >= v76 )
          goto LABEL_25;
      }
      if ( !(_DWORD)v80 )
      {
LABEL_177:
        v132 = sub_B5D6C8(Instance);
        sub_B5D668(v132, 0LL);
      }
      v81 = *(_QWORD *)(Instance + 32);
      if ( !v81 )
        goto LABEL_176;
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v81 + 28), 0LL);
    }
  }
LABEL_25:
  v82 = *v67;
  if ( !*v67 )
    goto LABEL_176;
  viewObject = v82->fields.viewObject;
  if ( !viewObject )
    goto LABEL_176;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager
    && ((v60 = QuestInformationListViewManager_TypeInfo,
         v85 = *(&QuestInformationListViewManager_TypeInfo->_2.bitflags2 + 1),
         *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v85)
     || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[v85 - 1] != QuestInformationListViewManager_TypeInfo) )
  {
    v133 = (QuestInformationListViewItemDraw_o *)sub_B5D990(manager);
    QuestInformationListViewItemDraw__SetDispType(v133, v134, v135, v136, v137);
  }
  else if ( mode )
  {
    infoType = v82->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v82->fields.mEnemyType;
      if ( !mEnemyType )
      {
        Instance = (int64_t)this->fields.SvtImg;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v106, v107, v108);
          byte_42E4B1E = 1;
        }
        v109 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v109 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v109->static_fields->mInstance;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
        {
          enemySp = (UISprite_o *)this->fields.enemySp;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v60, v111, v112);
            byte_42E4B1E = 1;
          }
          Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          }
          v114 = **(_QWORD **)(Instance + 184);
          if ( !v114 || !enemySp )
            goto LABEL_176;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v114 + 296), 0LL);
        }
        v115 = (UISprite_o *)this->fields.enemySp;
        Instance = (int64_t)QuestInformationListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v115 )
        {
          UISprite__set_spriteName(
            v115,
            QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
            0LL);
          QuestInformationListViewItemDraw__SetDispType(v116, 1, this->fields.enemySp, manager, v117);
          Instance = (int64_t)this->fields.textLb;
          if ( Instance )
          {
            UILabel__set_text(
              (UILabel_o *)Instance,
              QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
              0LL);
            Instance = (int64_t)this->fields.classComp;
            if ( Instance )
            {
              ServantClassIconComponent__Set(
                (ServantClassIconComponent_o *)Instance,
                QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
                0LL);
              classComp = this->fields.classComp;
              if ( classComp )
              {
                Instance = (int64_t)classComp->fields.nameLabel;
                if ( Instance )
                {
                  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  Instance = (int64_t)this->fields.weeklyMissionTarget;
                  if ( Instance )
                  {
                    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      Instance = (int64_t)this->fields.limitMissionTarget;
                      if ( Instance )
                      {
                        Instance = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0LL);
                        if ( Instance )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                          Instance = (int64_t)this->fields.eventMissionTarget;
                          if ( Instance )
                          {
                            Instance = (int64_t)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Instance,
                                                  0LL);
                            if ( *v67 )
                            {
                              if ( Instance )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (*v67)->fields.eventMissionTarget,
                                  0LL);
                                Instance = (int64_t)this->fields.completeMissionTarget;
                                if ( Instance )
                                {
LABEL_116:
                                  Instance = (int64_t)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                                  if ( !Instance )
                                    goto LABEL_176;
                                  v119 = 0;
                                  goto LABEL_118;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_176:
        sub_B5D69C(Instance, v60);
      }
      p_SvtImg = &this->fields.SvtImg;
      Instance = (int64_t)this->fields.SvtImg;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_176;
      if ( mEnemyType == 1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v92 = *v67;
        if ( !*v67 )
          goto LABEL_176;
        v93 = *p_SvtImg;
        targetId = v92->fields.targetId;
        targetCnt = v92->fields.targetCnt;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                            v93,
                                                            targetId,
                                                            targetCnt,
                                                            targetCnt,
                                                            0LL);
        *p_SvtImg = (struct UITexture_o *)Manager__loadCommandCard;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.SvtImg,
          Manager__loadCommandCard,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        if ( !*v67 )
          goto LABEL_176;
        QuestInformationListViewItemDraw__SetDispType_25436512(
          (QuestInformationListViewItemDraw_o *)Instance,
          (*v67)->fields.dispType,
          this->fields.SvtImg,
          manager,
          v103);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( !*v67 )
          goto LABEL_176;
        v120 = (UISprite_o *)this->fields.enemySp;
        iconId = (*v67)->fields.iconId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEnemy(v120, iconId, 0LL) )
        {
          Instance = (int64_t)this->fields.enemySp;
          if ( !Instance )
            goto LABEL_176;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.enemyTexture;
          if ( !Instance )
            goto LABEL_176;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
          if ( !*v67 )
            goto LABEL_176;
          QuestInformationListViewItemDraw__SetDispType(
            (QuestInformationListViewItemDraw_o *)Instance,
            (*v67)->fields.dispType,
            this->fields.enemySp,
            manager,
            v122);
        }
        else
        {
          v123 = *(QuestInformationListViewItem_o **)(v58 + 24);
          v124 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v124,
            (Il2CppObject *)v58,
            Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__,
            0LL);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v123, v124, v125);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v67, v104);
      if ( !*v67 )
        goto LABEL_176;
      Instance = (int64_t)this->fields.classComp;
      if ( !Instance )
        goto LABEL_176;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v67)->fields.targetId,
        (*v67)->fields.targetCnt,
        (*v67)->fields.classId,
        0LL);
      Instance = (int64_t)this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v67 )
        goto LABEL_176;
      if ( !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v67)->fields.weeklyMissionTarget, 0LL);
      Instance = (int64_t)this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v67 )
        goto LABEL_176;
      if ( !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v67)->fields.limitMissionTarget, 0LL);
      Instance = (int64_t)this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v67 )
        goto LABEL_176;
      if ( !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v67)->fields.eventMissionTarget, 0LL);
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v67 || !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v67)->fields.completeMissionTarget, 0LL);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v126);
    }
    else if ( !infoType )
    {
      Instance = (int64_t)this->fields.blankImg;
      if ( !Instance )
        goto LABEL_176;
      if ( v82->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        v87 = *v67;
        if ( !*v67 )
          goto LABEL_176;
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_176;
        v88 = v87->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v88, v87->fields.targetId, -1, 0, 0LL);
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        v89 = 1;
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        v89 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v89, 0LL);
      if ( !*v67 )
        goto LABEL_176;
      if ( (*v67)->fields.mRewardType != 2 )
        goto LABEL_69;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( *v67 )
        {
          v105 = (ItemMaster_o *)Instance;
          if ( Instance )
          {
            Instance = ItemMaster__isQP((ItemMaster_o *)Instance, (*v67)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_69;
            if ( !*v67 )
              goto LABEL_176;
            Instance = ItemMaster__isFriendPoint(v105, (*v67)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_69;
            if ( !*v67 )
              goto LABEL_176;
            Instance = ItemMaster__isEventPoint(v105, (*v67)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
            {
LABEL_69:
              Instance = (int64_t)this->fields.holdNumTitleLb;
              if ( !Instance )
                goto LABEL_176;
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_176;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              Instance = (int64_t)this->fields.holdNumCntLb;
              if ( !Instance )
                goto LABEL_176;
              goto LABEL_116;
            }
            if ( !*v67 )
              goto LABEL_176;
            Instance = ItemMaster__isMana(v105, (*v67)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_176;
              v127 = (int32_t *)(Instance + 176);
            }
            else
            {
              if ( !*v67 )
                goto LABEL_176;
              Instance = ItemMaster__isRarePri(v105, (*v67)->fields.targetId, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( !Instance )
                  goto LABEL_176;
                v127 = (int32_t *)(Instance + 180);
              }
              else
              {
                if ( !*v67 )
                  goto LABEL_176;
                if ( ItemMaster__isStone(v105, (*v67)->fields.targetId, 0LL) )
                {
                  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                  if ( !Instance )
                    goto LABEL_176;
                  v127 = (int32_t *)(Instance + 168);
                }
                else
                {
                  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_176;
                  v128 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*v67 )
                    goto LABEL_176;
                  if ( !v128 )
                    goto LABEL_176;
                  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v128, Instance, (*v67)->fields.targetId, 0LL);
                  if ( !Instance )
                    goto LABEL_176;
                  v127 = (int32_t *)(Instance + 28);
                }
              }
            }
            v129 = *v127;
            holdNumTitleLb = this->fields.holdNumTitleLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12264/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
            if ( holdNumTitleLb )
            {
              UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
              holdNumCntLb = this->fields.holdNumCntLb;
              Instance = (int64_t)LocalizationManager__GetNumberFormat(v129, 0LL);
              if ( holdNumCntLb )
              {
                UILabel__set_text(holdNumCntLb, (System_String_o *)Instance, 0LL);
                Instance = (int64_t)this->fields.holdNumTitleLb;
                if ( Instance )
                {
                  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                    Instance = (int64_t)this->fields.holdNumCntLb;
                    if ( Instance )
                    {
                      Instance = (int64_t)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
                      if ( Instance )
                      {
                        v119 = 1;
LABEL_118:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v119, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_176;
    }
  }
}


void __fastcall QuestInformationListViewItemDraw__UpdateTargetPosition(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *completeMissionTarget; // x0
  UnityEngine_GameObject_o *v6; // x20
  QuestInformationListViewItemDraw_c *v7; // x8
  struct System_Single_array *TARGET_POSITION; // x8
  unsigned int v9; // w21
  UnityEngine_GameObject_o *v10; // x20
  QuestInformationListViewItemDraw_c *v11; // x8
  struct System_Single_array *v12; // x8
  UnityEngine_GameObject_o *v13; // x20
  QuestInformationListViewItemDraw_c *v14; // x8
  struct System_Single_array *v15; // x8
  UnityEngine_GameObject_o *v16; // x19
  QuestInformationListViewItemDraw_c *v17; // x8
  struct System_Single_array *v18; // x8
  __int64 v19; // x0

  if ( (byte_42E8AF1 & 1) == 0 )
  {
    sub_B5D5C4(&QuestInformationListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8AF1 = 1;
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_45;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_45;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
    v6 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v7 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v7 = QuestInformationListViewItemDraw_TypeInfo;
    }
    TARGET_POSITION = v7->static_fields->TARGET_POSITION;
    if ( !TARGET_POSITION )
      goto LABEL_45;
    if ( !TARGET_POSITION->max_length )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPositionY(v6, TARGET_POSITION->m_Items[1], 0LL);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_45;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_45;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
    v10 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v11 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v11 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v12 = v11->static_fields->TARGET_POSITION;
    if ( !v12 )
      goto LABEL_45;
    if ( v9 >= v12->max_length )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPositionY(v10, v12->m_Items[++v9], 0LL);
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_45;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_45;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
    v13 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v14 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v14 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v15 = v14->static_fields->TARGET_POSITION;
    if ( !v15 )
      goto LABEL_45;
    if ( v9 >= v15->max_length )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPositionY(v13, v15->m_Items[++v9], 0LL);
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_45;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
    if ( completeMissionTarget )
    {
      completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           completeMissionTarget,
                                                           0LL);
      v16 = (UnityEngine_GameObject_o *)completeMissionTarget;
      v17 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v17 = QuestInformationListViewItemDraw_TypeInfo;
      }
      v18 = v17->static_fields->TARGET_POSITION;
      if ( v18 )
      {
        if ( v9 < v18->max_length )
        {
          GameObjectExtensions__SetLocalPositionY(v16, v18->m_Items[v9 + 1], 0LL);
          return;
        }
LABEL_46:
        v19 = sub_B5D6C8(completeMissionTarget);
        sub_B5D668(v19, 0LL);
      }
    }
LABEL_45:
    sub_B5D69C(completeMissionTarget, method);
  }
}


void __fastcall QuestInformationListViewItemDraw___SetEnemyName_b__33_0(
        QuestInformationListViewItemDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestInformationListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Component_o *textLb; // x8
  UILabel_o *v16; // x19
  UnityEngine_Transform_o *transform; // x20

  v5 = this;
  if ( (byte_42E8AF9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (QuestInformationListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_21915/*"quest_info"*/, v12, v13, v14);
    byte_42E8AF9 = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_21915/*"quest_info"*/,
                                                       (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504),
        (textLb = (UnityEngine_Component_o *)v5->fields.textLb) == 0LL) )
  {
    sub_B5D69C(this, assetData);
  }
  v16 = (UILabel_o *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    v16,
    transform,
    (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass26_0___ctor(
        QuestInformationListViewItemDraw___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass26_0___SetItem_b__0(
        QuestInformationListViewItemDraw___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct QuestInformationListViewItemDraw_o *_4__this; // x8
  QuestInformationListViewItemDraw___c__DisplayClass26_0_o *v3; // x19
  struct QuestInformationListViewItemDraw_o *v4; // x8
  struct QuestInformationListViewItem_o *item; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v4->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL), (item = v3->fields.item) == 0LL)
    || (this = (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v3->fields.__4__this) == 0LL )
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


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass31_0___ctor(
        QuestInformationListViewItemDraw___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass31_0___LoadEnemyTexture_b__0(
        QuestInformationListViewItemDraw___c__DisplayClass31_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v26; // x21
  UnityEngine_Material_o *v27; // x20
  struct QuestInformationListViewItemDraw_o *v28; // x8
  struct QuestInformationListViewItemDraw_o *v29; // x8
  struct QuestInformationListViewItemDraw_o *v30; // x8
  AssetData_o *enemyIconAssetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_42E7EF4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_16326/*"_alpha"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v22, v23, v24);
    byte_42E7EF4 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].fields.attrib = (struct System_String_o *)assetData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&_4__this[1].fields.attrib,
    (System_Int32_array **)assetData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v26 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
  v27 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v27, v26, 0LL);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v28->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v27,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_13;
  _4__this = v29->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                              _4__this,
                              v29->fields.enemyIconName,
                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v27
    || (UnityEngine_Material__set_mainTexture(v27, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v30 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v30->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_44577788(
                                    v30->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16326/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    enemyIconAssetData,
                                                                    (System_String_o *)_4__this,
                                                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528),
        UnityEngine_Material__SetTexture(
          v27,
          (System_String_o *)StringLiteral_16207/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}