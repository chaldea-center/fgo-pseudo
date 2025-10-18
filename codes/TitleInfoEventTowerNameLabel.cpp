void TitleInfoEventTowerNameLabel___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C4194B & 1) == 0 )
  {
    sub_1C37058(&TitleInfoEventTowerNameLabel_TypeInfo);
    sub_1C37058(&StringLiteral_24144/*"tower_img_title{0:00}"*/);
    byte_4C4194B = 1;
  }
  TitleInfoEventTowerNameLabel_TypeInfo->static_fields->SPRITE_NAME_NAME = (struct System_String_o *)StringLiteral_24144/*"tower_img_title{0:00}"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields,
    StringLiteral_24144/*"tower_img_title{0:00}"*/,
    v1,
    v2);
}


void TitleInfoEventTowerNameLabel___ctor(TitleInfoEventTowerNameLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.towerNameLabelPosX = 0xC39D800042240000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


TitleInfoEventTowerNameLabel_TowerData_o *TitleInfoEventTowerNameLabel__GetTowerData(
        TitleInfoEventTowerNameLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v10; // x20
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  System_Object_array *v12; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4C4194A & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
    sub_1C37058(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
    sub_1C37058(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    sub_1C37058(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
    sub_1C37058(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__);
    sub_1C37058(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__);
    sub_1C37058(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
    byte_4C4194A = 1;
  }
  v7 = sub_1C372A4(TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    0);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         towerEventInfoList,
                                                         (System_Func_T__bool__o *)v10,
                                                         (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v12 = *(System_Object_array **)&result->fields.NamePosition.fields.y;
    v13 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      0);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         v12,
                                                         (System_Func_T__bool__o *)v13,
                                                         (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
  }
  return result;
}


void TitleInfoEventTowerNameLabel__SetTowerNameLabel(
        TitleInfoEventTowerNameLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  TitleInfoEventTowerNameLabel_TowerData_o *TowerData; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  Il2CppObject *Component_object; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  TitleInfoEventTowerNameLabel_c *v17; // x8
  UISprite_o *v18; // x20
  System_String_o *SPRITE_NAME_NAME; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x19
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C41949 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&TitleInfoEventTowerNameLabel_TypeInfo);
    byte_4C41949 = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
    *(struct UnityEngine_Vector2_o *)&this->fields.towerNameLabelPosX = TowerData->fields.NamePosition;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition_36132496(
    gameObject,
    this->fields.towerNameLabelPosX,
    this->fields.towerNameLabelPosY,
    0.0,
    0);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v9 )
    sub_1C372B4(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v17 = TitleInfoEventTowerNameLabel_TypeInfo;
  v18 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo);
    v17 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  SPRITE_NAME_NAME = v17->static_fields->SPRITE_NAME_NAME;
  v22 = towerId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v11, v12, v13, v14, v15, v16);
  v21 = System_String__Format(SPRITE_NAME_NAME, v20, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v18, v21, 0);
}


void TitleInfoEventTowerNameLabel_TowerData___ctor(
        TitleInfoEventTowerNameLabel_TowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTowerNameLabel_TowerEventInfo___ctor(
        TitleInfoEventTowerNameLabel_TowerEventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTowerNameLabel___c__DisplayClass7_0___ctor(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__0(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C372B4(this);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C372B4(this);
  return data->fields.TowerId == this->fields.towerId;
}