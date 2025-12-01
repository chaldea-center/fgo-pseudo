void TitleInfoEventTowerNameLabel___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CC5D62 & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventTowerNameLabel_TypeInfo);
    sub_1C713B0(&StringLiteral_24262/*"tower_img_title{0:00}"*/);
    byte_4CC5D62 = 1;
  }
  TitleInfoEventTowerNameLabel_TypeInfo->static_fields->SPRITE_NAME_NAME = (struct System_String_o *)StringLiteral_24262/*"tower_img_title{0:00}"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields,
    StringLiteral_24262/*"tower_img_title{0:00}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  __int64 v9; // x1
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v11; // x20
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  System_Object_array *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4CC5D61 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
    sub_1C713B0(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
    sub_1C713B0(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    sub_1C713B0(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
    sub_1C713B0(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__);
    sub_1C713B0(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__);
    sub_1C713B0(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
    byte_4CC5D61 = 1;
  }
  v7 = sub_1C715FC(TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    0);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         towerEventInfoList,
                                                         (System_Func_T__bool__o *)v11,
                                                         (const MethodInfo_3134DA0 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.NamePosition.fields.y;
    v14 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      0);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         v13,
                                                         (System_Func_T__bool__o *)v14,
                                                         (const MethodInfo_3134DA0 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
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
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  TitleInfoEventTowerNameLabel_c *v12; // x8
  UISprite_o *v13; // x20
  System_String_o *SPRITE_NAME_NAME; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x19
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC5D60 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&TitleInfoEventTowerNameLabel_TypeInfo);
    byte_4CC5D60 = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
    *(struct UnityEngine_Vector2_o *)&this->fields.towerNameLabelPosX = TowerData->fields.NamePosition;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition_36390080(
    gameObject,
    this->fields.towerNameLabelPosX,
    this->fields.towerNameLabelPosY,
    0.0,
    0);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v9 )
    sub_1C71608(0, v10);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v12 = TitleInfoEventTowerNameLabel_TypeInfo;
  v13 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo);
    v12 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  SPRITE_NAME_NAME = v12->static_fields->SPRITE_NAME_NAME;
  v17 = towerId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = System_String__Format(SPRITE_NAME_NAME, v15, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v13, v16, 0);
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
    sub_1C71608(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C71608(this, 0);
  return data->fields.TowerId == this->fields.towerId;
}