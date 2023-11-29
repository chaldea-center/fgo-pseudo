void __fastcall TitleInfoEventTowerFloorLabel___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct TitleInfoEventTowerFloorLabel_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F83FA & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventTowerFloorLabel_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_22651, v8);
    sub_B16FFC(&StringLiteral_22652, v9);
    byte_40F83FA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_22652;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22652;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = TitleInfoEventTowerFloorLabel_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_22651;
  v12->SPRITE_NAME_FLOOR = (struct System_String_o *)StringLiteral_22651;
  sub_B16F98((BattleServantConfConponent_o *)&v12->SPRITE_NAME_FLOOR, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall TitleInfoEventTowerFloorLabel___ctor(TitleInfoEventTowerFloorLabel_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.towerEventInfoList) = 1133903872;
  *(_QWORD *)&this->fields.towerFloorInitPosY = 0xC38B800042D40000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTowerFloorLabel_TowerData_o *__fastcall TitleInfoEventTowerFloorLabel__GetTowerData(
        TitleInfoEventTowerFloorLabel_o *this,
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
  TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct UILabel_o *floorLabel; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20
  TitleInfoEventTowerFloorLabel_TowerData_o *result; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v28; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20

  if ( (byte_40F83F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___, v8);
    sub_B16FFC(&Method_System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo, v12);
    sub_B16FFC(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__, v13);
    sub_B16FFC(&Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__, v14);
    sub_B16FFC(&TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo, v15);
    byte_40F83F9 = 1;
  }
  v16 = (TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *)sub_B170CC(
                                                                   TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_TypeInfo,
                                                                   *(_QWORD *)&eventId,
                                                                   *(_QWORD *)&towerId,
                                                                   method,
                                                                   v4);
  TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___ctor(v16, 0LL);
  if ( !v16 )
    sub_B170D4();
  v16->fields.eventId = eventId;
  v16->fields.towerId = towerId;
  floorLabel = this->fields.floorLabel;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool__TypeInfo,
                                                                             v17,
                                                                             v18,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_TitleInfoEventTowerFloorLabel_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                          (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)floorLabel,
                                                          (System_Func_T__bool__o *)v22,
                                                          (const MethodInfo_18B650C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerEventInfo___);
  if ( result )
  {
    v28 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.InitPosition.fields.y;
    v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool__TypeInfo,
                                                                               v24,
                                                                               v25,
                                                                               v26,
                                                                               v27);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v29,
      (Il2CppObject *)v16,
      Method_TitleInfoEventTowerFloorLabel___c__DisplayClass11_0__GetTowerData_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_TitleInfoEventTowerFloorLabel_TowerData__bool___ctor__);
    return (TitleInfoEventTowerFloorLabel_TowerData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                          v28,
                                                          (System_Func_T__bool__o *)v29,
                                                          (const MethodInfo_18B650C *)Method_BasicHelper_Find_TitleInfoEventTowerFloorLabel_TowerData___);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UILabel_o *v25; // x20
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *floorNowLabel; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Component_o *klass; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *TowerData; // x0
  TitleInfoEventTowerFloorLabel_TowerData_o *v36; // x23
  UnityEngine_GameObject_o *v37; // x0
  float towerFloorInitPosY; // s8
  UnityEngine_GameObject_o *v39; // x24
  float v40; // s2
  UnityEngine_GameObject_o *v41; // x0
  float v42; // s1
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x23
  float v45; // s2
  UnityEngine_GameObject_o *v46; // x0
  UISprite_o *Component_srcLineSprite; // x19
  TitleInfoEventTowerFloorLabel_c *v48; // x8
  System_String_o **p_SPRITE_NAME_FLOOR_CLEAR; // x8
  System_String_o *v50; // x20
  int v51; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F83F8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v17);
    sub_B16FFC(&int_TypeInfo, v18);
    sub_B16FFC(&System_Math_TypeInfo, v19);
    sub_B16FFC(&TitleInfoEventTowerFloorLabel_TypeInfo, v20);
    byte_40F83F8 = 1;
  }
  if ( floor >= towerFloorMax )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(gameObject, isTowerClear, 0LL);
    floorNowLabel = (UnityEngine_Component_o *)this->fields.floorNowLabel;
    if ( !floorNowLabel )
      goto LABEL_43;
    v31 = UnityEngine_Component__get_gameObject(floorNowLabel, 0LL);
    if ( !v31 )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(v31, 0, 0LL);
    klass = (UnityEngine_Component_o *)this[1].klass;
    if ( !klass )
      goto LABEL_43;
    v33 = UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !v33 )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(v33, 0, 0LL);
  }
  else
  {
    v21 = (UnityEngine_Component_o *)this->fields.floorNowLabel;
    if ( !v21 )
      goto LABEL_43;
    v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !v22 )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(v22, 1, 0LL);
    v23 = (UnityEngine_Component_o *)this[1].klass;
    if ( !v23 )
      goto LABEL_43;
    v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
    if ( !v24 )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(v24, 1, 0LL);
    v25 = this->fields.floorNowLabel;
    v51 = floor + 1;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
    v27 = System_String__Format(floorLabel, v26, 0LL);
    if ( !v25 )
      goto LABEL_43;
    UILabel__set_text(v25, v27, 0LL);
    isTowerClear = 0;
  }
  if ( fixedLabel )
  {
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v34 )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(v34, 0, 0LL);
  }
  else
  {
    TowerData = TitleInfoEventTowerFloorLabel__GetTowerData(this, eventId, towerId, v28);
    if ( TowerData )
    {
      v36 = TowerData;
      this->fields.towerFloorInitPosY = TowerData->fields.InitPosition.fields.x;
      this->fields.towerFloorMoveRange = TowerData->fields.InitPosition.fields.y;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosY = this->fields.towerFloorInitPosY;
      v39 = v37;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v40 = (float)System_Math__Min_44418752(floor, towerFloorMax - 1, 0LL);
      v41 = v39;
      v42 = (float)(v36->fields.FloorHeight * v40) + this->fields.towerFloorMoveRange;
    }
    else
    {
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      towerFloorInitPosY = this->fields.towerFloorInitPosY;
      v44 = v43;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v45 = (float)System_Math__Min_44418752(floor, towerFloorMax - 1, 0LL);
      v41 = v44;
      v42 = this->fields.towerFloorMoveRange
          + (float)((float)(*(float *)&this->fields.towerEventInfoList * v45) / (float)towerFloorMax);
    }
    GameObjectExtensions__SetLocalPosition_27419968(v41, towerFloorInitPosY, v42, 0LL);
  }
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v46 )
LABEL_43:
    sub_B170D4();
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            v46,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v48 = TitleInfoEventTowerFloorLabel_TypeInfo;
  if ( isTowerClear )
  {
    if ( (WORD1(TitleInfoEventTowerFloorLabel_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
      v48 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v48->static_fields->SPRITE_NAME_FLOOR_CLEAR;
  }
  else
  {
    if ( (WORD1(TitleInfoEventTowerFloorLabel_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventTowerFloorLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTowerFloorLabel_TypeInfo);
      v48 = TitleInfoEventTowerFloorLabel_TypeInfo;
    }
    p_SPRITE_NAME_FLOOR_CLEAR = &v48->static_fields->SPRITE_NAME_FLOOR;
  }
  v50 = *p_SPRITE_NAME_FLOOR_CLEAR;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v50, 0LL);
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
    sub_B170D4();
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTowerFloorLabel___c__DisplayClass11_0___GetTowerData_b__1(
        TitleInfoEventTowerFloorLabel___c__DisplayClass11_0_o *this,
        TitleInfoEventTowerFloorLabel_TowerData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B170D4();
  return data->fields.TowerId == this->fields.towerId;
}