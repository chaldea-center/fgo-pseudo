void ExtraBattleUserInterfaceComponent___ctor(ExtraBattleUserInterfaceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExtraBattleUserInterfaceComponent__Awake(ExtraBattleUserInterfaceComponent_o *this, const MethodInfo *method)
{
  ;
}


void ExtraBattleUserInterfaceComponent__OnTap(ExtraBattleUserInterfaceComponent_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onTapCallback, 0);
}


void ExtraBattleUserInterfaceComponent__SetActive(
        ExtraBattleUserInterfaceComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, value, 0);
}


void ExtraBattleUserInterfaceComponent__SetOnTapCallback(
        ExtraBattleUserInterfaceComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onTapCallback = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onTapCallback, (int32_t)callback, (int32_t)method, v3);
}


void ExtraBattleUserInterfaceComponent__SetupBattleAssetUiAtlas(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_battleAssetUiAtlas; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIAtlas_o *battleAssetUiAtlas; // t1
  BattleDataDefine_c *v6; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51154888; // x20
  _BOOL8 v10; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C45F33 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&BattleDataDefine_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    byte_4C45F33 = 1;
  }
  battleAssetUiAtlas = this->fields.battleAssetUiAtlas;
  p_battleAssetUiAtlas = (CGThumbnailListItem_o *)&this->fields.battleAssetUiAtlas;
  v4 = (UnityEngine_Object_o *)battleAssetUiAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v6 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v6 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v6->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( AssetStorage )
    {
      Object_object__51154888 = AssetData__GetObject_object__51154888(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51154888, 0, 0);
      if ( !v10 )
      {
        if ( !Object_object__51154888 )
          sub_1C372B4(v10);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__51154888,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        p_battleAssetUiAtlas->klass = (CGThumbnailListItem_c *)Component_object;
        sub_1C36FFC(p_battleAssetUiAtlas, (int32_t)Component_object, v12, v13);
      }
    }
  }
}


void ExtraBattleUserInterfaceComponent__SwitchDispAnimation(
        ExtraBattleUserInterfaceComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct UnityEngine_Animation_array *animations; // x8
  unsigned __int64 v5; // x21
  bool v6; // w20
  unsigned __int64 max_length_low; // x9

  animations = this->fields.animations;
  if ( animations )
  {
    v5 = 0;
    v6 = isDisp;
    while ( 1 )
    {
      max_length_low = LODWORD(animations->max_length);
      if ( (__int64)v5 >= (int)max_length_low )
        break;
      if ( v5 >= max_length_low )
        sub_1C372BC(this);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)animations->m_Items[v5], v6, 0);
      animations = this->fields.animations;
      ++v5;
      if ( !animations )
        sub_1C372B4(this);
    }
  }
}


void ExtraBattleUserInterfaceComponent__UpdateData(
        ExtraBattleUserInterfaceComponent_o *this,
        ExtraBattleUserInterfaceData_o *uiData,
        BattleData_o *battleData,
        int32_t addTurn,
        ExtraBattleUserInterfaceData_LabelType_array *updateLabelTypes,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *IsNullOrEmpty; // x0
  const MethodInfo *v12; // x7
  struct UILabel_array *labels; // x8
  unsigned int v14; // w26
  struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *Labels_k__BackingField; // x8
  unsigned int max_length; // w9
  System_String_o *CurrentAnimationName_k__BackingField; // x24
  struct UILabel_array *v18; // x8
  struct UILabel_array *v19; // x8
  struct UnityEngine_Animation_array *animations; // x8
  unsigned int v21; // w9
  UnityEngine_Object_o *v22; // x25
  System_String_o *b; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *text; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C45F31 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45F31 = 1;
  }
  *(_QWORD *)&color.fields.b = 0;
  text = 0;
  b = 0;
  *(_QWORD *)&color.fields.r = 0;
  ExtraBattleUserInterfaceComponent__UpdateSprites(this, (const MethodInfo *)uiData);
  if ( uiData && uiData->fields._Labels_k__BackingField )
  {
    labels = this->fields.labels;
    if ( !labels )
LABEL_33:
      sub_1C372B4(IsNullOrEmpty);
    v14 = 0;
    while ( (signed int)v14 < SLODWORD(labels->max_length) )
    {
      Labels_k__BackingField = uiData->fields._Labels_k__BackingField;
      if ( !Labels_k__BackingField )
        goto LABEL_33;
      max_length = Labels_k__BackingField->max_length;
      if ( (int)v14 >= (int)max_length )
        break;
      if ( v14 >= max_length )
        goto LABEL_35;
      IsNullOrEmpty = Labels_k__BackingField->m_Items[v14];
      if ( !IsNullOrEmpty )
        goto LABEL_33;
      CurrentAnimationName_k__BackingField = IsNullOrEmpty->fields._CurrentAnimationName_k__BackingField;
      IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)ExtraBattleUserInterfaceData_LabelDataWrapper__LoadTextAndColorByLatestStats(
                                                                           IsNullOrEmpty,
                                                                           battleData,
                                                                           addTurn,
                                                                           &text,
                                                                           &color,
                                                                           &b,
                                                                           updateLabelTypes,
                                                                           v12);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v18 = this->fields.labels;
        if ( !v18 )
          goto LABEL_33;
        if ( v14 >= LODWORD(v18->max_length) )
LABEL_35:
          sub_1C372BC(IsNullOrEmpty);
        IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)v18->m_Items[v14];
        if ( !IsNullOrEmpty )
          goto LABEL_33;
        UILabel__set_text((UILabel_o *)IsNullOrEmpty, text, 0);
        v19 = this->fields.labels;
        if ( !v19 )
          goto LABEL_33;
        if ( v14 >= LODWORD(v19->max_length) )
          goto LABEL_35;
        IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)v19->m_Items[v14];
        if ( !IsNullOrEmpty )
          goto LABEL_33;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, color, 0);
        animations = this->fields.animations;
        if ( animations )
        {
          v21 = animations->max_length;
          if ( (int)v14 < (int)v21 )
          {
            if ( v14 >= v21 )
              goto LABEL_35;
            v22 = (UnityEngine_Object_o *)animations->m_Items[v14];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)UnityEngine_Object__op_Equality(
                                                                                 v22,
                                                                                 0,
                                                                                 0);
            if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
            {
              IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)System_String__op_Equality(
                                                                                   CurrentAnimationName_k__BackingField,
                                                                                   b,
                                                                                   0);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
              {
                IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)System_String__IsNullOrEmpty(
                                                                                     CurrentAnimationName_k__BackingField,
                                                                                     0);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  if ( !v22 )
                    goto LABEL_33;
                  UnityEngine_Animation__Stop_71011180(
                    (UnityEngine_Animation_o *)v22,
                    CurrentAnimationName_k__BackingField,
                    0);
                }
                IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)System_String__IsNullOrEmpty(b, 0);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  if ( !v22 )
                    goto LABEL_33;
                  IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)UnityEngine_Animation__Play_71012036(
                                                                                       (UnityEngine_Animation_o *)v22,
                                                                                       b,
                                                                                       0);
                }
              }
            }
          }
        }
      }
      labels = this->fields.labels;
      ++v14;
      if ( !labels )
        goto LABEL_33;
    }
  }
}


void ExtraBattleUserInterfaceComponent__UpdateSprites(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UISprite_o *v4; // x0
  struct ExtraBattleUserInterfaceComponent_SpriteParam_array *spriteParams; // x21
  int max_length; // w8
  unsigned int v7; // w22
  ExtraBattleUserInterfaceComponent_SpriteParam_o *v8; // x24
  UnityEngine_Object_o *sprite; // x20

  if ( (byte_4C45F32 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45F32 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.spriteParams, 0) )
  {
    ExtraBattleUserInterfaceComponent__SetupBattleAssetUiAtlas(this, v3);
    spriteParams = this->fields.spriteParams;
    if ( !spriteParams )
      goto LABEL_17;
    max_length = spriteParams->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          sub_1C372BC(v4);
        v8 = spriteParams->m_Items[v7];
        if ( !v8 )
          break;
        sprite = (UnityEngine_Object_o *)v8->fields.sprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v4 = (UISprite_o *)UnityEngine_Object__op_Equality(sprite, 0, 0);
        if ( ((unsigned __int8)v4 & 1) == 0 )
        {
          v4 = v8->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_atlas(v4, this->fields.battleAssetUiAtlas, 0);
          v4 = v8->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_spriteName(v4, v8->fields.spriteName, 0);
        }
        max_length = spriteParams->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
LABEL_17:
      sub_1C372B4(v4);
    }
  }
}


bool ExtraBattleUserInterfaceComponent__get_IsToChangeRootExtraPlacement(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.changeRootExtraPlacement;
}


UnityEngine_Vector2_o ExtraBattleUserInterfaceComponent__get_OverKillPositionAdjust(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.overKillPositionAdjust.fields.x;
  y = this->fields.overKillPositionAdjust.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o ExtraBattleUserInterfaceComponent__get_SkillSkipPositionAdjust(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.skillSkipPositionAdjust.fields.x;
  y = this->fields.skillSkipPositionAdjust.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void ExtraBattleUserInterfaceComponent_SpriteParam___ctor(
        ExtraBattleUserInterfaceComponent_SpriteParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}