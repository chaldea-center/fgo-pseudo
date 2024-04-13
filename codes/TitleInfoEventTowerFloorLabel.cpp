void __fastcall TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct TitleInfoEventTowerFloorLabel_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E6C31 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTowerFloorLabel_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23049/*"tower_img_floor"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23050/*"tower_img_floor_clear"*/, v11, v12, v13);
    byte_42E6C31 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_23050/*"tower_img_floor_clear"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23050/*"tower_img_floor_clear"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_23049/*"tower_img_floor"*/;
  v16->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_23049/*"tower_img_floor"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->SPRITE_NAME_FLOOR, v17, v18, v19, v20, v21, v22, v23);
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
  TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  struct UILabel_o *floorLabel; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x20
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v37; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x20

  if ( (byte_42E6C30 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___, eventId, towerId, method);
    sub_B5D5C4(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__, v22, v23, v24);
    sub_B5D5C4(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__, v25, v26, v27);
    sub_B5D5C4(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo, v28, v29, v30);
    byte_42E6C30 = 1;
  }
  v31 = (TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *)sub_B5D694(TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
  TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___ctor(v31, 0LL);
  if ( !v31 )
    sub_B5D69C(v32, v33);
  v31->fields.eventId = eventId;
  v31->fields.towerId = towerId;
  floorLabel = this->fields.floorLabel;
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v31,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                          (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)floorLabel,
                                                          (System_Func_T__bool__o *)v35,
                                                          (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v37 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.InitPosition.fields.y;
    v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v38,
      (Il2CppObject *)v31,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool___ctor__);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                          v37,
                                                          (System_Func_T__bool__o *)v38,
                                                          (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *floorNowLabel; // x20
  Il2CppObject *v31; // x0
  const MethodInfo *v32; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v34; // x23
  UnityEngine_GameObject_o *v35; // x0
  float towerFloorInitPosY; // s8
  UnityEngine_GameObject_o *v37; // x24
  float v38; // s2
  UnityEngine_GameObject_o *v39; // x0
  float v40; // s1
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x23
  float v43; // s2
  UISprite_o *Component_srcLineSprite; // x19
  TitleInfoEventTowerFloorLabel_c *v45; // x8
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v47; // x20
  int v48; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E6C2F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, towerId, *(_QWORD *)&towerFloorMax);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Math_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&TitleInfoEventTowerFloorLabel_TypeInfo, v26, v27, v28);
    byte_42E6C2F = 1;
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
    v48 = floor + 1;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v31, 0LL);
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
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v32);
    if ( TowerData )
    {
      v34 = TowerData;
      this->fields.towerFloorInitPosY = TowerData->fields.InitPosition.fields.x;
      this->fields.towerFloorMoveRange = TowerData->fields.InitPosition.fields.y;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosY = this->fields.towerFloorInitPosY;
      v37 = v35;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v38 = (float)System_Math__Min_45104456(floor, towerFloorMax - 1, 0LL);
      v39 = v37;
      v40 = (float)(v34->fields.FloorHeight * v38) + this->fields.towerFloorMoveRange;
    }
    else
    {
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosY = this->fields.towerFloorInitPosY;
      v42 = v41;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v43 = (float)System_Math__Min_45104456(floor, towerFloorMax - 1, 0LL);
      v39 = v42;
      v40 = this->fields.towerFloorMoveRange
          + (float)((float)(*(float *)&this->fields.towerEventInfoList * v43) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_32430496(v39, towerFloorInitPosY, v40, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_43:
    sub_B5D69C(gameObject, *(_QWORD *)&eventId);
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            gameObject,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v45 = TitleInfoEventTowerFloorLabel_TypeInfo;
  if ( isTowerClear )
  {
    if ( (WORD1(TitleInfoEventTowerFloorLabel_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
      v45 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v45->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  }
  else
  {
    if ( (WORD1(TitleInfoEventTowerFloorLabel_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
      v45 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v45->static_fields->SPRITE_NAME_FLOOR;
  }
  v47 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v47, 0LL);
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
    sub_B5D69C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}