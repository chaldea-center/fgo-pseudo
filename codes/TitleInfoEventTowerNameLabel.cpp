void __fastcall TitleInfoEventTowerNameLabel___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42AE739 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventTowerNameLabel_TypeInfo);
    sub_B52984(&StringLiteral_22936/*"tower_img_title{0:00}"*/);
    byte_42AE739 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22936/*"tower_img_title{0:00}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22936/*"tower_img_title{0:00}"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall TitleInfoEventTowerNameLabel___ctor(TitleInfoEventTowerNameLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.towerNameLabelPosY = 0xC39D800042240000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


TitleInfoEventTowerNameLabel_TowerData_o *__fastcall TitleInfoEventTowerNameLabel__GetTowerData(
        TitleInfoEventTowerNameLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct TitleInfoEventTowerNameLabel_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v13; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_42AE738 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
    sub_B52984(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
    sub_B52984(&Method_System_Func_TitleInfoEventTowerNameLabel_TowerData__bool___ctor__);
    sub_B52984(&Method_System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool___ctor__);
    sub_B52984(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
    sub_B52984(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    sub_B52984(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__);
    sub_B52984(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__);
    sub_B52984(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
    byte_42AE738 = 1;
  }
  v7 = (TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *)sub_B52A54(TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo);
  TitleInfoEventTowerNameLabel___c__DisplayClass7_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.eventId = eventId;
  v7->fields.towerId = towerId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                         (System_Func_T__bool__o *)v11,
                                                         (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v13 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.NamePosition.fields.y;
    v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_TitleInfoEventTowerNameLabel_TowerData__bool___ctor__);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         v13,
                                                         (System_Func_T__bool__o *)v14,
                                                         (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
  }
  return result;
}


void __fastcall TitleInfoEventTowerNameLabel__SetTowerNameLabel(
        TitleInfoEventTowerNameLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  TitleInfoEventTowerNameLabel_TowerData_o *TowerData; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  UISprite_o *Component_srcLineSprite; // x20
  TitleInfoEventTowerNameLabel_c *v12; // x8
  System_String_o *SPRITE_NAME_NAME; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x19
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AE737 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&TitleInfoEventTowerNameLabel_TypeInfo);
    byte_42AE737 = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
  {
    this->fields.towerNameLabelPosY = TowerData->fields.NamePosition.fields.x;
    *((_DWORD *)&this->fields.towerNameLabelPosY + 1) = LODWORD(TowerData->fields.NamePosition.fields.y);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_32085168(
    gameObject,
    this->fields.towerNameLabelPosY,
    *(&this->fields.towerNameLabelPosY + 1),
    0.0,
    0LL);
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v9 )
    sub_B52A5C(0LL, v10);
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v9,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v12 = TitleInfoEventTowerNameLabel_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerNameLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo);
    v12 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  SPRITE_NAME_NAME = v12->static_fields->SPRITE_NAME_NAME;
  v16 = towerId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v15 = System_String__Format(SPRITE_NAME_NAME, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v15, 0LL);
}


void __fastcall TitleInfoEventTowerNameLabel_TowerData___ctor(
        TitleInfoEventTowerNameLabel_TowerData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerNameLabel_TowerEventInfo___ctor(
        TitleInfoEventTowerNameLabel_TowerEventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___ctor(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__0(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_B52A5C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B52A5C(this, 0LL);
  return data->fields.TowerId == this->fields.towerId;
}