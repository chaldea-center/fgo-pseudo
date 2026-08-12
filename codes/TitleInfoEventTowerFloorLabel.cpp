void TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoEventTowerFloorLabel_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596F118 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventTowerFloorLabel_TypeInfo);
    sub_2213A60(&StringLiteral_25442/*"tower_img_floor"*/);
    sub_2213A60(&StringLiteral_25443/*"tower_img_floor_clear"*/);
    byte_596F118 = 1;
  }
  v7 = StringLiteral_25443/*"tower_img_floor_clear"*/;
  TitleInfoEventTowerFloorLabel_TypeInfo->static_fields->SPRITE_NAME_FLOOR_CLEAR = (struct System_String_o *)StringLiteral_25443/*"tower_img_floor_clear"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_25442/*"tower_img_floor"*/;
  static_fields = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_25442/*"tower_img_floor"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->SPRITE_NAME_FLOOR, v8, v10, v11, v12, v13, v14, v15);
}


void TitleInfoEventTowerFloorLabel___ctor(TitleInfoEventTowerFloorLabel_o *this, const MethodInfo *method)
{
  this->fields.towerFloorMoveRange = 300.0;
  *(_QWORD *)&this->fields.towerFloorInitPosX = 0xC38B800042D40000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


TitleInfoEventTowerFloorLabel_TowerData_o *TitleInfoEventTowerFloorLabel__GetTowerData(
        TitleInfoEventTowerFloorLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Object_array *towerEventInfoList; // x21
  System_Func_object__bool__o *v11; // x19
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  System_Object_array *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_596F117 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
    sub_2213A60(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
    sub_2213A60(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
    sub_2213A60(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    sub_2213A60(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__);
    sub_2213A60(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__);
    sub_2213A60(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
    byte_596F117 = 1;
  }
  v7 = sub_2213CCC(TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    0);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          towerEventInfoList,
                                                          (System_Func_T__bool__o *)v11,
                                                          (const MethodInfo_3810A1C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.InitPosition.fields.y;
    v14 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      0);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          v13,
                                                          (System_Func_T__bool__o *)v14,
                                                          (const MethodInfo_3810A1C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventTowerFloorLabel__SetFloorLabel(
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
  UILabel_o *v18; // x21
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *v25; // x24
  float towerFloorInitPosX; // s8
  float v27; // s0
  UnityEngine_GameObject_o *v28; // x0
  float v29; // s1
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_GameObject_o *v32; // x23
  float v33; // s0
  Il2CppObject *Component_object; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  TitleInfoEventTowerFloorLabel_c *v37; // x8
  UISprite_o *v38; // x19
  int v39; // w9
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v41; // x20
  int v42; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596F116 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&TitleInfoEventTowerFloorLabel_TypeInfo);
    byte_596F116 = 1;
  }
  if ( floor >= towerFloorMax )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(gameObject, isTowerClear, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorLabel;
    if ( !gameObject )
      goto LABEL_38;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_38;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorLabel;
    if ( !gameObject )
      goto LABEL_38;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_38;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v18 = this->fields.floorLabel;
    v42 = floor + 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v42);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v19, 0);
    if ( !v18 )
      goto LABEL_38;
    UILabel__set_text(v18, (System_String_o *)gameObject, 0);
    isTowerClear = 0;
  }
  if ( fixedLabel )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  else
  {
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v20);
    if ( TowerData )
    {
      v22 = TowerData;
      *(struct UnityEngine_Vector2_o *)&this->fields.towerFloorInitPosX = TowerData->fields.InitPosition;
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23, v24);
      v27 = (float)System_Math__Min_77153596(floor, towerFloorMax - 1, 0);
      v28 = v25;
      v29 = (float)(v22->fields.FloorHeight * v27) + this->fields.towerFloorInitPosY;
    }
    else
    {
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v30, v31);
      v33 = (float)System_Math__Min_77153596(floor, towerFloorMax - 1, 0);
      v28 = v32;
      v29 = this->fields.towerFloorInitPosY
          + (float)((float)(this->fields.towerFloorMoveRange * v33) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_42891516(v28, towerFloorInitPosX, v29, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_38:
    sub_2213CDC(gameObject, *(_QWORD *)&eventId);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v37 = TitleInfoEventTowerFloorLabel_TypeInfo;
  v38 = (UISprite_o *)Component_object;
  v39 = *(&TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished + 1);
  if ( isTowerClear )
  {
    if ( !v39 )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo, v35, v36);
      v37 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v37->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  }
  else
  {
    if ( !v39 )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo, v35, v36);
      v37 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v37->static_fields->SPRITE_NAME_FLOOR;
  }
  v41 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35, v36);
  AtlasManager__SetEventUI(v38, v41, 0);
}


void TitleInfoEventTowerFloorLabel_TowerData___ctor(
        TitleInfoEventTowerFloorLabel_TowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTowerFloorLabel_TowerEventInfo___ctor(
        TitleInfoEventTowerFloorLabel_TowerEventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___ctor(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__0(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_2213CDC(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return data->fields.TowerId == this->fields.towerId;
}