void __fastcall TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct TitleInfoEventTowerFloorLabel_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_421308B & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventTowerFloorLabel_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_22820/*"tower_img_floor"*/, v8);
    sub_B0D8A4(&StringLiteral_22821/*"tower_img_floor_clear"*/, v9);
    byte_421308B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_22821/*"tower_img_floor_clear"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22821/*"tower_img_floor_clear"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_22820/*"tower_img_floor"*/;
  v12->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_22820/*"tower_img_floor"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->SPRITE_NAME_FLOOR, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall TitleInfoEventTowerFloorLabel___ctor(TitleInfoEventTowerFloorLabel_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.towerEventInfoList) = 1133903872;
  *(_QWORD *)&this->fields.towerFloorInitPosY = 0xC38B800042D40000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTowerFloorLabel_TowerData_o *__fastcall TitleInfoEventTowerFloorLabel__GetTowerData(
        TitleInfoEventTowerFloorLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct UILabel_o *floorLabel; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v24; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20

  if ( (byte_421308A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___, v7);
    sub_B0D8A4(&Method_System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo, v10);
    sub_B0D8A4(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__, v12);
    sub_B0D8A4(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__, v13);
    sub_B0D8A4(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo, v14);
    byte_421308A = 1;
  }
  v15 = (TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *)sub_B0D974(
                                                                   TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo,
                                                                   *(_QWORD *)&eventId,
                                                                   *(_QWORD *)&towerId);
  TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v15->fields.eventId = eventId;
  v15->fields.towerId = towerId;
  floorLabel = this->fields.floorLabel;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                          (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)floorLabel,
                                                          (System_Func_T__bool__o *)v20,
                                                          (const MethodInfo_170767C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v24 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.InitPosition.fields.y;
    v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo,
                                                                               v22,
                                                                               v23);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v25,
      (Il2CppObject *)v15,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      (const MethodInfo_26189B8 *)Method_System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool___ctor__);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                          v24,
                                                          (System_Func_T__bool__o *)v25,
                                                          (const MethodInfo_170767C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *floorNowLabel; // x20
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v26; // x23
  UnityEngine_GameObject_o *v27; // x0
  float towerFloorInitPosY; // s8
  UnityEngine_GameObject_o *v29; // x24
  float v30; // s2
  UnityEngine_GameObject_o *v31; // x0
  float v32; // s1
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x23
  float v35; // s2
  UISprite_o *Component_srcLineSprite; // x19
  TitleInfoEventTowerFloorLabel_c *v37; // x8
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v39; // x20
  int v40; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4213089 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17);
    sub_B0D8A4(&int_TypeInfo, v18);
    sub_B0D8A4(&System_Math_TypeInfo, v19);
    sub_B0D8A4(&TitleInfoEventTowerFloorLabel_TypeInfo, v20);
    byte_4213089 = 1;
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
    v40 = floor + 1;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v23, 0LL);
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
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v24);
    if ( TowerData )
    {
      v26 = TowerData;
      this->fields.towerFloorInitPosY = TowerData->fields.InitPosition.fields.x;
      this->fields.towerFloorMoveRange = TowerData->fields.InitPosition.fields.y;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosY = this->fields.towerFloorInitPosY;
      v29 = v27;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v30 = (float)System_Math__Min_44514512(floor, towerFloorMax - 1, 0LL);
      v31 = v29;
      v32 = (float)(v26->fields.FloorHeight * v30) + this->fields.towerFloorMoveRange;
    }
    else
    {
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosY = this->fields.towerFloorInitPosY;
      v34 = v33;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v35 = (float)System_Math__Min_44514512(floor, towerFloorMax - 1, 0LL);
      v31 = v34;
      v32 = this->fields.towerFloorMoveRange
          + (float)((float)(*(float *)&this->fields.towerEventInfoList * v35) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_31178688(v31, towerFloorInitPosY, v32, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_43:
    sub_B0D97C(gameObject);
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            gameObject,
                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v37 = TitleInfoEventTowerFloorLabel_TypeInfo;
  if ( isTowerClear )
  {
    if ( (WORD1(TitleInfoEventTowerFloorLabel_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
      v37 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v37->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  }
  else
  {
    if ( (WORD1(TitleInfoEventTowerFloorLabel_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
      v37 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v37->static_fields->SPRITE_NAME_FLOOR;
  }
  v39 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v39, 0LL);
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
    sub_B0D97C(this);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  return data->fields.TowerId == this->fields.towerId;
}