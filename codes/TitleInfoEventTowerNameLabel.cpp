void __fastcall TitleInfoEventTowerNameLabel___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F83FD & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventTowerNameLabel_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_22653/*"tower_img_title{0:00}"*/, v8);
    byte_40F83FD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerNameLabel_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22653/*"tower_img_title{0:00}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22653/*"tower_img_title{0:00}"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall TitleInfoEventTowerNameLabel___ctor(TitleInfoEventTowerNameLabel_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.towerNameLabelPosY = 0xC39D800042240000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTowerNameLabel_TowerData_o *__fastcall TitleInfoEventTowerNameLabel__GetTowerData(
        TitleInfoEventTowerNameLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct TitleInfoEventTowerNameLabel_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20
  TitleInfoEventTowerNameLabel_TowerData_o *result; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v28; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20

  if ( (byte_40F83FC & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___, v8);
    sub_B16FFC(&Method_System_Func_TitleInfoEventTowerNameLabel_TowerData__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool___ctor__, v10);
    sub_B16FFC(&System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo, v12);
    sub_B16FFC(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__, v13);
    sub_B16FFC(&Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__, v14);
    sub_B16FFC(&TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo, v15);
    byte_40F83FC = 1;
  }
  v16 = (TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *)sub_B170CC(
                                                                 TitleInfoEventTowerNameLabel___c__DisplayClass7_0_TypeInfo,
                                                                 *(_QWORD *)&eventId,
                                                                 *(_QWORD *)&towerId,
                                                                 method,
                                                                 v4);
  TitleInfoEventTowerNameLabel___c__DisplayClass7_0___ctor(v16, 0LL);
  if ( !v16 )
    sub_B170D4();
  v16->fields.eventId = eventId;
  v16->fields.towerId = towerId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool__TypeInfo,
                                                                             v17,
                                                                             v18,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_TitleInfoEventTowerNameLabel_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                         (System_Func_T__bool__o *)v22,
                                                         (const MethodInfo_18B650C *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerEventInfo___);
  if ( result )
  {
    v28 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.NamePosition.fields.y;
    v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_TitleInfoEventTowerNameLabel_TowerData__bool__TypeInfo,
                                                                               v24,
                                                                               v25,
                                                                               v26,
                                                                               v27);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v29,
      (Il2CppObject *)v16,
      Method_TitleInfoEventTowerNameLabel___c__DisplayClass7_0__GetTowerData_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_TitleInfoEventTowerNameLabel_TowerData__bool___ctor__);
    return (TitleInfoEventTowerNameLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                         v28,
                                                         (System_Func_T__bool__o *)v29,
                                                         (const MethodInfo_18B650C *)Method_BasicHelper_Find_TitleInfoEventTowerNameLabel_TowerData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerNameLabel__SetTowerNameLabel(
        TitleInfoEventTowerNameLabel_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  TitleInfoEventTowerNameLabel_TowerData_o *TowerData; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  UISprite_o *Component_srcLineSprite; // x20
  TitleInfoEventTowerNameLabel_c *v14; // x8
  System_String_o *SPRITE_NAME_NAME; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x19
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F83FB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&TitleInfoEventTowerNameLabel_TypeInfo, v9);
    byte_40F83FB = 1;
  }
  TowerData = TitleInfoEventTowerNameLabel__GetTowerData(this, eventId, towerId, method);
  if ( TowerData )
  {
    this->fields.towerNameLabelPosY = TowerData->fields.NamePosition.fields.x;
    *((_DWORD *)&this->fields.towerNameLabelPosY + 1) = LODWORD(TowerData->fields.NamePosition.fields.y);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_27420076(
    gameObject,
    this->fields.towerNameLabelPosY,
    *(&this->fields.towerNameLabelPosY + 1),
    0.0,
    0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v12 )
    sub_B170D4();
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v12,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v14 = TitleInfoEventTowerNameLabel_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerNameLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerNameLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerNameLabel_TypeInfo);
    v14 = TitleInfoEventTowerNameLabel_TypeInfo;
  }
  SPRITE_NAME_NAME = v14->static_fields->SPRITE_NAME_NAME;
  v18 = towerId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v17 = System_String__Format(SPRITE_NAME_NAME, v16, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v17, 0LL);
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
    sub_B170D4();
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerNameLabel___c__DisplayClass7_0___GetTowerData_b__1(
        TitleInfoEventTowerNameLabel___c__DisplayClass7_0_o *this,
        TitleInfoEventTowerNameLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B170D4();
  return data->fields.TowerId == this->fields.towerId;
}