void __fastcall TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoEventTowerFloorLabel_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43502DB & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventTowerFloorLabel_TypeInfo);
    sub_B70694(&StringLiteral_23121/*"tower_img_floor"*/);
    sub_B70694(&StringLiteral_23122/*"tower_img_floor_clear"*/);
    byte_43502DB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_23122/*"tower_img_floor_clear"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23122/*"tower_img_floor_clear"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_23121/*"tower_img_floor"*/;
  v9->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_23121/*"tower_img_floor"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->SPRITE_NAME_FLOOR, v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall TitleInfoEventTowerFloorLabel___ctor(TitleInfoEventTowerFloorLabel_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.towerEventInfoList) = 1133903872;
  *(_QWORD *)&this->fields.towerFloorInitPosY = 0xC38B800042D40000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


TitleInfoEventTowerFloorLabel_TowerData_o *__fastcall TitleInfoEventTowerFloorLabel__GetTowerData(
        TitleInfoEventTowerFloorLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct UILabel_o *floorLabel; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v13; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_43502DA & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
    sub_B70694(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
    sub_B70694(&Method_System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool___ctor__);
    sub_B70694(&Method_System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool___ctor__);
    sub_B70694(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    sub_B70694(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
    sub_B70694(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__);
    sub_B70694(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__);
    sub_B70694(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
    byte_43502DA = 1;
  }
  v7 = (TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *)sub_B70764(TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
  TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.eventId = eventId;
  v7->fields.towerId = towerId;
  floorLabel = this->fields.floorLabel;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                          (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)floorLabel,
                                                          (System_Func_T__bool__o *)v11,
                                                          (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v13 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.InitPosition.fields.y;
    v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      (const MethodInfo_29AC578 *)Method_System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool___ctor__);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                          v13,
                                                          (System_Func_T__bool__o *)v14,
                                                          (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerFloorLabel__SetFloorLabel(
        TitleInfoEventTowerFloorLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        int32_t towerFloorMax,
        int32_t floor,
        System_String_o *floorLabel,
        bool isTowerClear,
        bool fixedLabel,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *floorNowLabel; // x20
  __int64 v19; // x2
  Il2CppObject *v20; // x0
  const MethodInfo *v21; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v23; // x23
  UnityEngine_GameObject_o *v24; // x0
  float towerFloorInitPosY; // s8
  UnityEngine_GameObject_o *v26; // x24
  float v27; // s2
  UnityEngine_GameObject_o *v28; // x0
  float v29; // s1
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x23
  float v32; // s2
  UISprite_o *Component_srcLineSprite; // x19
  TitleInfoEventTowerFloorLabel_c *v34; // x8
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v36; // x20
  int v37; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_43502D9 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&TitleInfoEventTowerFloorLabel_TypeInfo);
    byte_43502D9 = 1;
  }
  if ( floor >= towerFloorMax )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(gameObject, isTowerClear, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_43;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this[1].klass;
    if ( !gameObject )
      goto LABEL_43;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_43;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this[1].klass;
    if ( !gameObject )
      goto LABEL_43;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    floorNowLabel = this->fields.floorNowLabel;
    v37 = floor + 1;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v19);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v20, 0LL);
    if ( !floorNowLabel )
      goto LABEL_43;
    UILabel__set_text(floorNowLabel, (System_String_o *)gameObject, 0LL);
    isTowerClear = 0;
  }
  if ( fixedLabel )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  else
  {
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v21);
    if ( TowerData )
    {
      v23 = TowerData;
      this->fields.towerFloorInitPosY = TowerData->fields.InitPosition.fields.x;
      this->fields.towerFloorMoveRange = TowerData->fields.InitPosition.fields.y;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosY = this->fields.towerFloorInitPosY;
      v26 = v24;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v27 = (float)System_Math__Min_45556056(floor, towerFloorMax - 1, 0LL);
      v28 = v26;
      v29 = (float)(v23->fields.FloorHeight * v27) + this->fields.towerFloorMoveRange;
    }
    else
    {
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosY = this->fields.towerFloorInitPosY;
      v31 = v30;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v32 = (float)System_Math__Min_45556056(floor, towerFloorMax - 1, 0LL);
      v28 = v31;
      v29 = this->fields.towerFloorMoveRange
          + (float)((float)(*(float *)&this->fields.towerEventInfoList * v32) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_32497428(v28, towerFloorInitPosY, v29, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_43:
    sub_B7076C(gameObject, *(_QWORD *)&eventId);
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            gameObject,
                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v34 = TitleInfoEventTowerFloorLabel_TypeInfo;
  if ( isTowerClear )
  {
    if ( (WORD1(TitleInfoEventTowerFloorLabel_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
      v34 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v34->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  }
  else
  {
    if ( (WORD1(TitleInfoEventTowerFloorLabel_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
      v34 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v34->static_fields->SPRITE_NAME_FLOOR;
  }
  v36 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v36, 0LL);
}


void __fastcall TitleInfoEventTowerFloorLabel_TowerData___ctor(
        TitleInfoEventTowerFloorLabel_TowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerFloorLabel_TowerEventInfo___ctor(
        TitleInfoEventTowerFloorLabel_TowerEventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___ctor(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__0(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_B7076C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B7076C(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}