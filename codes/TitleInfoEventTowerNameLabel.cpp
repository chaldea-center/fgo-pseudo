void TitleInfoEventTowerNameLabel___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593719C & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventTowerNameLabel_TypeInfo);
    sub_21FFC50(&StringLiteral_25396/*"tower_img_title{0:00}"*/);
    byte_593719C = 1;
  }
  v7 = StringLiteral_25396/*"tower_img_title{0:00}"*/;
  TitleInfoEventTowerNameLabel_TypeInfo->static_fields->SPRITE_NAME_NAME = (struct System_String_o *)StringLiteral_25396/*"tower_img_title{0:00}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields,
    v7,
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
  System_Object_array *towerEventInfoList; // x21
  System_Func_object__bool__o *v11; // x19
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  System_Object_array *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_593719B & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
    sub_21FFC50(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
    sub_21FFC50(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    sub_21FFC50(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__);
    sub_21FFC50(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__);
    sub_21FFC50(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
    byte_593719B = 1;
  }
  v7 = sub_21FFEBC(TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    0);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         towerEventInfoList,
                                                         (System_Func_T__bool__o *)v11,
                                                         (const MethodInfo_37DD66C *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.NamePosition.fields.y;
    v14 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      0);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_object_(
                                                         v13,
                                                         (System_Func_T__bool__o *)v14,
                                                         (const MethodInfo_37DD66C *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
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
  __int64 v12; // x1
  __int64 v13; // x2
  TitleInfoEventTowerNameLabel_c *v14; // x8
  UISprite_o *v15; // x20
  System_String_o **p_SPRITE_NAME_NAME; // x8
  System_String_o *v17; // x21
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x19
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593719A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&TitleInfoEventTowerNameLabel_TypeInfo);
    byte_593719A = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
    *(struct UnityEngine_Vector2_o *)&this->fields.towerNameLabelPosX = TowerData->fields.NamePosition;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition_42876224(
    gameObject,
    this->fields.towerNameLabelPosX,
    this->fields.towerNameLabelPosY,
    0.0,
    0);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v9 )
    sub_21FFECC(0, v10);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v14 = TitleInfoEventTowerNameLabel_TypeInfo;
  v15 = (UISprite_o *)Component_object;
  if ( !*(&TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo, v12, v13);
    v14 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  p_SPRITE_NAME_NAME = &v14->static_fields->SPRITE_NAME_NAME;
  v22 = towerId;
  v17 = *p_SPRITE_NAME_NAME;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v22);
  v21 = System_String__Format(v17, v18, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19, v20);
  AtlasManager__SetEventUI(v15, v21, 0);
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
    sub_21FFECC(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_21FFECC(this, 0);
  return data->fields.TowerId == this->fields.towerId;
}