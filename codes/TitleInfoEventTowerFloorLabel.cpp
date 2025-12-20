void TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TitleInfoEventTowerFloorLabel_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2B1B6 & 1) == 0 )
  {
    sub_1C94098(&TitleInfoEventTowerFloorLabel_TypeInfo);
    sub_1C94098(&StringLiteral_24381/*"tower_img_floor"*/);
    sub_1C94098(&StringLiteral_24382/*"tower_img_floor_clear"*/);
    byte_4D2B1B6 = 1;
  }
  TitleInfoEventTowerFloorLabel_TypeInfo->static_fields->SPRITE_NAME_FLOOR_CLEAR = (struct System_String_o *)StringLiteral_24382/*"tower_img_floor_clear"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields,
    StringLiteral_24382/*"tower_img_floor_clear"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_24381/*"tower_img_floor"*/;
  static_fields = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_24381/*"tower_img_floor"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->SPRITE_NAME_FLOOR, v7, v9, v10, v11, v12, v13, v14);
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
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v11; // x20
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  System_Object_array *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4D2B1B5 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
    sub_1C94098(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
    sub_1C94098(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
    sub_1C94098(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    sub_1C94098(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__);
    sub_1C94098(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__);
    sub_1C94098(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
    byte_4D2B1B5 = 1;
  }
  v7 = sub_1C942E4(TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    0);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          towerEventInfoList,
                                                          (System_Func_T__bool__o *)v11,
                                                          (const MethodInfo_3186034 *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.InitPosition.fields.y;
    v14 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      0);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          v13,
                                                          (System_Func_T__bool__o *)v14,
                                                          (const MethodInfo_3186034 *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
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
  UILabel_o *v18; // x20
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v22; // x23
  UnityEngine_GameObject_o *v23; // x0
  float towerFloorInitPosX; // s8
  UnityEngine_GameObject_o *v25; // x24
  float v26; // s2
  UnityEngine_GameObject_o *v27; // x0
  float v28; // s1
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x23
  float v31; // s2
  Il2CppObject *Component_object; // x0
  TitleInfoEventTowerFloorLabel_c *v33; // x8
  UISprite_o *v34; // x19
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v36; // x20
  int v37; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D2B1B4 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&TitleInfoEventTowerFloorLabel_TypeInfo);
    byte_4D2B1B4 = 1;
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
    v37 = floor + 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v19, 0);
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
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v20);
    if ( TowerData )
    {
      v22 = TowerData;
      *(struct UnityEngine_Vector2_o *)&this->fields.towerFloorInitPosX = TowerData->fields.InitPosition;
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v25 = v23;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v26 = (float)System_Math__Min_65939892(floor, towerFloorMax - 1, 0);
      v27 = v25;
      v28 = (float)(v22->fields.FloorHeight * v26) + this->fields.towerFloorInitPosY;
    }
    else
    {
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v30 = v29;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v31 = (float)System_Math__Min_65939892(floor, towerFloorMax - 1, 0);
      v27 = v30;
      v28 = this->fields.towerFloorInitPosY
          + (float)((float)(this->fields.towerFloorMoveRange * v31) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_36798812(v27, towerFloorInitPosX, v28, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_35:
    sub_1C942F0(gameObject, *(_QWORD *)&eventId);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v33 = TitleInfoEventTowerFloorLabel_TypeInfo;
  v34 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
    v33 = TitleInfoEventTowerFloorLabel_TypeInfo;
  }
  p_SPRITE_NAME_FLOOR_CLEAR = &v33->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  if ( !isTowerClear )
    ++p_SPRITE_NAME_FLOOR_CLEAR;
  v36 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v34, v36, 0);
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
    sub_1C942F0(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C942F0(this, 0);
  return data->fields.TowerId == this->fields.towerId;
}