void TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TitleInfoEventTowerFloorLabel_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C41948 & 1) == 0 )
  {
    sub_1C37058(&TitleInfoEventTowerFloorLabel_TypeInfo);
    sub_1C37058(&StringLiteral_24142/*"tower_img_floor"*/);
    sub_1C37058(&StringLiteral_24143/*"tower_img_floor_clear"*/);
    byte_4C41948 = 1;
  }
  TitleInfoEventTowerFloorLabel_TypeInfo->static_fields->SPRITE_NAME_FLOOR_CLEAR = (struct System_String_o *)StringLiteral_24143/*"tower_img_floor_clear"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields,
    StringLiteral_24143/*"tower_img_floor_clear"*/,
    v1,
    v2);
  v3 = StringLiteral_24142/*"tower_img_floor"*/;
  static_fields = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_24142/*"tower_img_floor"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->SPRITE_NAME_FLOOR, v3, v5, v6);
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
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v10; // x20
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  System_Object_array *v12; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4C41947 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
    sub_1C37058(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
    sub_1C37058(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
    sub_1C37058(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    sub_1C37058(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__);
    sub_1C37058(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__);
    sub_1C37058(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
    byte_4C41947 = 1;
  }
  v7 = sub_1C372A4(TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    0);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          towerEventInfoList,
                                                          (System_Func_T__bool__o *)v10,
                                                          (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v12 = *(System_Object_array **)&result->fields.InitPosition.fields.y;
    v13 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      0);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          v12,
                                                          (System_Func_T__bool__o *)v13,
                                                          (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
  }
  return result;
}


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
  UILabel_o *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v28; // x23
  UnityEngine_GameObject_o *v29; // x0
  float towerFloorInitPosX; // s8
  UnityEngine_GameObject_o *v31; // x24
  float v32; // s2
  UnityEngine_GameObject_o *v33; // x0
  float v34; // s1
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x23
  float v37; // s2
  Il2CppObject *Component_object; // x0
  TitleInfoEventTowerFloorLabel_c *v39; // x8
  UISprite_o *v40; // x19
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v42; // x20
  int v43; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C41946 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&TitleInfoEventTowerFloorLabel_TypeInfo);
    byte_4C41946 = 1;
  }
  if ( floor >= towerFloorMax )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, isTowerClear, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v18 = this->fields.floorLabel;
    v43 = floor + 1;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v19, v20, v21, v22, v23, v24);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v25, 0);
    if ( !v18 )
      goto LABEL_35;
    UILabel__set_text(v18, (System_String_o *)gameObject, 0);
    isTowerClear = 0;
  }
  if ( fixedLabel )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  else
  {
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v26);
    if ( TowerData )
    {
      v28 = TowerData;
      *(struct UnityEngine_Vector2_o *)&this->fields.towerFloorInitPosX = TowerData->fields.InitPosition;
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v31 = v29;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v32 = (float)System_Math__Min_65085416(floor, towerFloorMax - 1, 0);
      v33 = v31;
      v34 = (float)(v28->fields.FloorHeight * v32) + this->fields.towerFloorInitPosY;
    }
    else
    {
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v36 = v35;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v37 = (float)System_Math__Min_65085416(floor, towerFloorMax - 1, 0);
      v33 = v36;
      v34 = this->fields.towerFloorInitPosY
          + (float)((float)(this->fields.towerFloorMoveRange * v37) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_36132392(v33, towerFloorInitPosX, v34, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_35:
    sub_1C372B4(gameObject);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v39 = TitleInfoEventTowerFloorLabel_TypeInfo;
  v40 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
    v39 = TitleInfoEventTowerFloorLabel_TypeInfo;
  }
  p_SPRITE_NAME_FLOOR_CLEAR = &v39->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  if ( !isTowerClear )
    ++p_SPRITE_NAME_FLOOR_CLEAR;
  v42 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v40, v42, 0);
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
    sub_1C372B4(this);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C372B4(this);
  return data->fields.TowerId == this->fields.towerId;
}