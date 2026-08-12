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
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, value, 0);
}


void ExtraBattleUserInterfaceComponent__SetOnTapCallback(
        ExtraBattleUserInterfaceComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onTapCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onTapCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExtraBattleUserInterfaceComponent__SetupBattleAssetUiAtlas(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_battleAssetUiAtlas; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIAtlas_o *battleAssetUiAtlas; // t1
  __int64 v6; // x1
  BattleDataDefine_c *v7; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v10; // x1
  Il2CppObject *Object_object__58532980; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_59738F0 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    byte_59738F0 = 1;
  }
  battleAssetUiAtlas = this->fields.battleAssetUiAtlas;
  p_battleAssetUiAtlas = (MissionNaviTransitionBoardItem_o *)&this->fields.battleAssetUiAtlas;
  v4 = (UnityEngine_Object_o *)battleAssetUiAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v7 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v6);
      v7 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v7->static_fields->ASSET_BATTLE_COMMON;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( AssetStorage )
    {
      Object_object__58532980 = AssetData__GetObject_object__58532980(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0);
      if ( !v12 )
      {
        if ( !Object_object__58532980 )
          sub_2213CDC(v12, v13);
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)Object_object__58532980,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        p_battleAssetUiAtlas->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
        sub_2213A04(p_battleAssetUiAtlas, (int32_t)Component_object, v15, v16, v17, v18, v19, v20);
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
  unsigned __int64 i; // x21
  unsigned __int64 max_length_low; // x9
  __int64 v8; // x1

  animations = this->fields.animations;
  if ( animations )
  {
    for ( i = 0; ; ++i )
    {
      max_length_low = LODWORD(animations->max_length);
      if ( (__int64)i >= (int)max_length_low )
        break;
      if ( i >= max_length_low )
        sub_2213CE4(this);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)animations->m_Items[i], isDisp, 0);
      animations = this->fields.animations;
      if ( !animations )
        sub_2213CDC(this, v8);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ExtraBattleUserInterfaceComponent__UpdateData(
        ExtraBattleUserInterfaceComponent_o *this,
        ExtraBattleUserInterfaceData_o *uiData,
        BattleData_o *battleData,
        int32_t addTurn,
        ExtraBattleUserInterfaceData_LabelType_array *updateLabelTypes,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v13; // x1
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *IsNullOrEmpty; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x7
  struct UILabel_array *labels; // x8
  unsigned int v18; // w27
  struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *Labels_k__BackingField; // x8
  unsigned int max_length; // w9
  System_String_o *CurrentAnimationName_k__BackingField; // x24
  struct UILabel_array *v22; // x8
  struct UILabel_array *v23; // x8
  struct UnityEngine_Animation_array *animations; // x8
  unsigned int v25; // w9
  UnityEngine_Object_o *v26; // x25
  System_String_o *b; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *text; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59738EE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59738EE = 1;
  }
  *(_QWORD *)&color.fields.b = 0;
  text = 0;
  b = 0;
  *(_QWORD *)&color.fields.r = 0;
  this->fields.exUiData = uiData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exUiData,
    (int32_t)uiData,
    (System_String_o *)battleData,
    *(System_String_o **)&addTurn,
    (int32_t)updateLabelTypes,
    (int32_t)method,
    v6,
    v7);
  ExtraBattleUserInterfaceComponent__UpdateSprites(this, v13);
  if ( uiData && uiData->fields._Labels_k__BackingField )
  {
    labels = this->fields.labels;
    if ( !labels )
LABEL_33:
      sub_2213CDC(IsNullOrEmpty, v15);
    v18 = 0;
    while ( (signed int)v18 < SLODWORD(labels->max_length) )
    {
      Labels_k__BackingField = uiData->fields._Labels_k__BackingField;
      if ( !Labels_k__BackingField )
        goto LABEL_33;
      max_length = Labels_k__BackingField->max_length;
      if ( (int)v18 >= (int)max_length )
        break;
      if ( v18 >= max_length )
        goto LABEL_35;
      IsNullOrEmpty = Labels_k__BackingField->m_Items[v18];
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
                                                                           v16);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        v22 = this->fields.labels;
        if ( !v22 )
          goto LABEL_33;
        if ( v18 >= LODWORD(v22->max_length) )
LABEL_35:
          sub_2213CE4(IsNullOrEmpty);
        IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)v22->m_Items[v18];
        if ( !IsNullOrEmpty )
          goto LABEL_33;
        UILabel__set_text((UILabel_o *)IsNullOrEmpty, text, 0);
        v23 = this->fields.labels;
        if ( !v23 )
          goto LABEL_33;
        if ( v18 >= LODWORD(v23->max_length) )
          goto LABEL_35;
        IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)v23->m_Items[v18];
        if ( !IsNullOrEmpty )
          goto LABEL_33;
        UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, color, 0);
        animations = this->fields.animations;
        if ( animations )
        {
          v25 = animations->max_length;
          if ( (int)v18 < (int)v25 )
          {
            if ( v18 >= v25 )
              goto LABEL_35;
            v26 = (UnityEngine_Object_o *)animations->m_Items[v18];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
            IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)UnityEngine_Object__op_Equality(
                                                                                 v26,
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
                  if ( !v26 )
                    goto LABEL_33;
                  UnityEngine_Animation__Stop_83075904(
                    (UnityEngine_Animation_o *)v26,
                    CurrentAnimationName_k__BackingField,
                    0);
                }
                IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)System_String__IsNullOrEmpty(b, 0);
                if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
                {
                  if ( !v26 )
                    goto LABEL_33;
                  IsNullOrEmpty = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)UnityEngine_Animation__Play_83078544(
                                                                                       (UnityEngine_Animation_o *)v26,
                                                                                       b,
                                                                                       0);
                }
              }
            }
          }
        }
      }
      labels = this->fields.labels;
      ++v18;
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
  __int64 v5; // x1
  struct ExtraBattleUserInterfaceComponent_SpriteParam_array *spriteParams; // x21
  int max_length; // w8
  unsigned int v8; // w23
  ExtraBattleUserInterfaceComponent_SpriteParam_o *v9; // x24
  UnityEngine_Object_o *sprite; // x20

  if ( (byte_59738EF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59738EF = 1;
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
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          sub_2213CE4(v4);
        v9 = spriteParams->m_Items[v8];
        if ( !v9 )
          break;
        sprite = (UnityEngine_Object_o *)v9->fields.sprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
        v4 = (UISprite_o *)UnityEngine_Object__op_Equality(sprite, 0, 0);
        if ( ((unsigned __int8)v4 & 1) == 0 )
        {
          v4 = v9->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_atlas(v4, this->fields.battleAssetUiAtlas, 0);
          v4 = v9->fields.sprite;
          if ( !v4 )
            break;
          UISprite__set_spriteName(v4, v9->fields.spriteName, 0);
        }
        max_length = spriteParams->max_length;
        if ( (int)++v8 >= max_length )
          return;
      }
LABEL_17:
      sub_2213CDC(v4, v5);
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
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = this->fields.overKillPositionAdjust.fields.x;
  result.fields.y = this->fields.overKillPositionAdjust.fields.y;
  return result;
}


UnityEngine_Vector2_o ExtraBattleUserInterfaceComponent__get_SkillSkipPositionAdjust(
        ExtraBattleUserInterfaceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = this->fields.skillSkipPositionAdjust.fields.x;
  result.fields.y = this->fields.skillSkipPositionAdjust.fields.y;
  return result;
}


void ExtraBattleUserInterfaceComponent_SpriteParam___ctor(
        ExtraBattleUserInterfaceComponent_SpriteParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}