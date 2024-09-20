void __fastcall TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct TitleInfoEventTowerFloorLabel_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A59C50 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventTowerFloorLabel_TypeInfo);
    sub_1B885B0(&StringLiteral_24004/*"tower_img_floor"*/);
    sub_1B885B0(&StringLiteral_24005/*"tower_img_floor_clear"*/);
    byte_4A59C50 = 1;
  }
  TitleInfoEventTowerFloorLabel_TypeInfo->static_fields->SPRITE_NAME_FLOOR_CLEAR = (struct System_String_o *)StringLiteral_24005/*"tower_img_floor_clear"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields,
    StringLiteral_24005/*"tower_img_floor_clear"*/,
    v1,
    v2);
  v3 = StringLiteral_24004/*"tower_img_floor"*/;
  static_fields = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  static_fields->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_24004/*"tower_img_floor"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SPRITE_NAME_FLOOR, v3, v5, v6);
}


void __fastcall TitleInfoEventTowerFloorLabel___ctor(TitleInfoEventTowerFloorLabel_o *this, const MethodInfo *method)
{
  this->fields.towerFloorMoveRange = 300.0;
  *(_QWORD *)&this->fields.towerFloorInitPosX = 0xC38B800042D40000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


TitleInfoEventTowerFloorLabel_TowerData_o *__fastcall TitleInfoEventTowerFloorLabel__GetTowerData(
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

  if ( (byte_4A59C4F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
    sub_1B885B0(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
    sub_1B885B0(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
    sub_1B885B0(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__);
    sub_1B885B0(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__);
    sub_1B885B0(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
    byte_4A59C4F = 1;
  }
  v7 = sub_1B887FC(TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    0LL);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          towerEventInfoList,
                                                          (System_Func_T__bool__o *)v11,
                                                          (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.InitPosition.fields.y;
    v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      0LL);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_object_(
                                                          v13,
                                                          (System_Func_T__bool__o *)v14,
                                                          (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
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
  UILabel_o *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x3
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v25; // x23
  UnityEngine_GameObject_o *v26; // x0
  float towerFloorInitPosX; // s8
  UnityEngine_GameObject_o *v28; // x24
  float v29; // s2
  UnityEngine_GameObject_o *v30; // x0
  float v31; // s1
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x23
  float v34; // s2
  Il2CppObject *Component_object; // x0
  TitleInfoEventTowerFloorLabel_c *v36; // x8
  UISprite_o *v37; // x19
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v39; // x20
  int v40; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A59C4E & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&TitleInfoEventTowerFloorLabel_TypeInfo);
    byte_4A59C4E = 1;
  }
  if ( floor >= towerFloorMax )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, isTowerClear, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.floorNowLabel;
    if ( !gameObject )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v18 = this->fields.floorLabel;
    v40 = floor + 1;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v19, v20, v21);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format(floorLabel, v22, 0LL);
    if ( !v18 )
      goto LABEL_35;
    UILabel__set_text(v18, (System_String_o *)gameObject, 0LL);
    isTowerClear = 0;
  }
  if ( fixedLabel )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  else
  {
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v23);
    if ( TowerData )
    {
      v25 = TowerData;
      *(struct UnityEngine_Vector2_o *)&this->fields.towerFloorInitPosX = TowerData->fields.InitPosition;
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v28 = v26;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v29 = (float)System_Math__Min_62526008(floor, towerFloorMax - 1, 0LL);
      v30 = v28;
      v31 = (float)(v25->fields.FloorHeight * v29) + this->fields.towerFloorInitPosY;
    }
    else
    {
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosX = this->fields.towerFloorInitPosX;
      v33 = v32;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v34 = (float)System_Math__Min_62526008(floor, towerFloorMax - 1, 0LL);
      v30 = v33;
      v31 = this->fields.towerFloorInitPosY
          + (float)((float)(this->fields.towerFloorMoveRange * v34) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_33724120(v30, towerFloorInitPosX, v31, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_35:
    sub_1B8880C(gameObject, *(_QWORD *)&eventId);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v36 = TitleInfoEventTowerFloorLabel_TypeInfo;
  v37 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
    v36 = TitleInfoEventTowerFloorLabel_TypeInfo;
  }
  p_SPRITE_NAME_FLOOR_CLEAR = &v36->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  if ( !isTowerClear )
    ++p_SPRITE_NAME_FLOOR_CLEAR;
  v39 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v37, v39, 0LL);
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
    sub_1B8880C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B8880C(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}