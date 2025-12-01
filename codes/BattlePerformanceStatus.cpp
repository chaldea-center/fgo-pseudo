void BattlePerformanceStatus___ctor(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattlePerformanceStatus__AddExtraBattleUiDataAndComponent(
        BattlePerformanceStatus_o *this,
        ExtraBattleUserInterfaceData_o *exUiData,
        const MethodInfo *method)
{
  if ( !exUiData )
    goto LABEL_9;
  if ( exUiData->fields._Assignment_k__BackingField != 1 )
  {
    this = (BattlePerformanceStatus_o *)this->fields.enemyPref;
    if ( this )
    {
      this = (BattlePerformanceStatus_o *)BattlePerformanceEnemy__get_ExUiController(
                                            (BattlePerformanceEnemy_o *)this,
                                            0);
      if ( this )
        goto LABEL_8;
    }
LABEL_9:
    sub_1C71608(this, exUiData);
  }
  this = (BattlePerformanceStatus_o *)this->fields.masterPerf;
  if ( !this )
    goto LABEL_9;
  this = (BattlePerformanceStatus_o *)BattlePerformanceMaster__get_ExUiController(
                                        (BattlePerformanceMaster_o *)this,
                                        (const MethodInfo *)exUiData);
  if ( !this )
    goto LABEL_9;
LABEL_8:
  ExtraBattleUserInterfaceController__AddDataAndComponent((ExtraBattleUserInterfaceController_o *)this, exUiData, 0);
}


void BattlePerformanceStatus__AddSwitchPartyConfirmWindow(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *switchPartyConfirmWindow; // x20
  AssetLoader_LoadEndDataHandler_o *v4; // x20

  if ( (byte_4CCAAD5 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceStatus__AddSwitchPartyConfirmWindow_b__106_0__);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3088/*"Battle/ExBattleUi/Prefab/Window/SwitchPartyConfirmWindow"*/);
    byte_4CCAAD5 = 1;
  }
  switchPartyConfirmWindow = (UnityEngine_Object_o *)this->fields.switchPartyConfirmWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(switchPartyConfirmWindow, 0, 0) )
  {
    v4 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v4,
      (Il2CppObject *)this,
      Method_BattlePerformanceStatus__AddSwitchPartyConfirmWindow_b__106_0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage((System_String_o *)StringLiteral_3088/*"Battle/ExBattleUi/Prefab/Window/SwitchPartyConfirmWindow"*/, v4, 1, 0);
  }
}


void BattlePerformanceStatus__ChangeCriticalLabelColor(
        BattlePerformanceStatus_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  DrumRollLabel_o *criticalpointlabel; // x0

  criticalpointlabel = this->fields.criticalpointlabel;
  if ( !criticalpointlabel )
    sub_1C71608(0, method);
  DrumRollLabel__SetLabelColor(criticalpointlabel, color, 0);
}


void BattlePerformanceStatus__CloseBuffConf(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattleBuffConfWindowComponent_o *buffConfWindow; // x0

  buffConfWindow = this->fields.buffConfWindow;
  if ( !buffConfWindow )
    sub_1C71608(0, method);
  ((void (__fastcall *)(struct BattleBuffConfWindowComponent_o *, _QWORD, const MethodInfo *))buffConfWindow->klass->vtable._12_Close.methodPtr)(
    buffConfWindow,
    0,
    buffConfWindow->klass->vtable._12_Close.method);
}


void BattlePerformanceStatus__CloseSelectCommandWindowAll(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceStatus___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *selectCommandWindowArray; // x19
  System_Action_object__o *_9__81_0; // x20
  Il2CppObject *v6; // x21
  struct BattlePerformanceStatus___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCAACD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_BattleSelectCommandTypeWindow__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___);
    sub_1C713B0(&Method_BattlePerformanceStatus___c__CloseSelectCommandWindowAll_b__81_0__);
    sub_1C713B0(&BattlePerformanceStatus___c_TypeInfo);
    byte_4CCAACD = 1;
  }
  v3 = BattlePerformanceStatus___c_TypeInfo;
  selectCommandWindowArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectCommandWindowArray;
  if ( !BattlePerformanceStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceStatus___c_TypeInfo);
    v3 = BattlePerformanceStatus___c_TypeInfo;
  }
  _9__81_0 = (System_Action_object__o *)v3->static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattlePerformanceStatus___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__81_0 = (System_Action_object__o *)sub_1C715FC(System_Action_BattleSelectCommandTypeWindow__TypeInfo);
    System_Action_object____ctor(
      _9__81_0,
      v6,
      Method_BattlePerformanceStatus___c__CloseSelectCommandWindowAll_b__81_0__,
      0);
    static_fields = BattlePerformanceStatus___c_TypeInfo->static_fields;
    static_fields->__9__81_0 = (struct System_Action_BattleSelectCommandTypeWindow__o *)_9__81_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_object_(
    selectCommandWindowArray,
    (System_Action_T__o *)_9__81_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___);
}


void BattlePerformanceStatus__DeleteEnemyStatusAll(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceEnemy_o *enemyPref; // x0
  int32_t v4; // w20
  struct BattleServantParamComponent_array *svtParamList; // x8

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
LABEL_6:
    sub_1C71608(enemyPref, method);
  v4 = 0;
  while ( 1 )
  {
    svtParamList = enemyPref->fields.svtParamList;
    if ( !svtParamList )
      goto LABEL_6;
    if ( v4 >= SLODWORD(svtParamList->max_length) )
      break;
    BattlePerformanceEnemy__deleteStatus(enemyPref, v4, 0);
    enemyPref = this->fields.enemyPref;
    ++v4;
    if ( !enemyPref )
      goto LABEL_6;
  }
}


void BattlePerformanceStatus__DestroyAndUnloadAllExBattleUserInterface(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0
  const MethodInfo *v4; // x1

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__get_ExUiController(enemyPref, 0)) == 0
    || (ExtraBattleUserInterfaceController__DestroyAndUnloadAllUi((ExtraBattleUserInterfaceController_o *)enemyPref, 0),
        (enemyPref = (BattlePerformanceEnemy_o *)this->fields.masterPerf) == 0)
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceMaster__get_ExUiController(
                                                  (BattlePerformanceMaster_o *)enemyPref,
                                                  method)) == 0 )
  {
    sub_1C71608(enemyPref, method);
  }
  ExtraBattleUserInterfaceController__DestroyAndUnloadAllUi((ExtraBattleUserInterfaceController_o *)enemyPref, 0);
  BattlePerformanceStatus__RemoveSwitchPartyConfirmWindow(this, v4);
}


void BattlePerformanceStatus__DestroySkillSelectAddFuncConfWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillSelectAddFuncConfWindow; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CCAAC8 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAAC8 = 1;
  }
  skillSelectAddFuncConfWindow = (UnityEngine_Object_o *)this->fields.skillSelectAddFuncConfWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillSelectAddFuncConfWindow, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.skillSelectAddFuncConfWindow;
    if ( !v5 )
      sub_1C71608(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
  }
}


System_Collections_IEnumerator_o *BattlePerformanceStatus__DoCreateCriticalEffect(
        BattlePerformanceStatus_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCAAC9 & 1) == 0 )
  {
    sub_1C713B0(&BattlePerformanceStatus__DoCreateCriticalEffect_d__62_TypeInfo);
    byte_4CCAAC9 = 1;
  }
  v5 = sub_1C715FC(BattlePerformanceStatus__DoCreateCriticalEffect_d__62_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamComponent_o *BattlePerformanceStatus__GetEnemySvtParamComponent(
        BattlePerformanceStatus_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0
  UnityEngine_Object_o *SvtParamComponent; // x21

  if ( (byte_4CCAAD3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAAD3 = 1;
  }
  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_10;
  SvtParamComponent = (UnityEngine_Object_o *)BattlePerformanceEnemy__GetSvtParamComponent(enemyPref, uniqueId, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(SvtParamComponent, 0, 0) )
  {
    enemyPref = this->fields.enemyPref;
    if ( enemyPref )
      return BattlePerformanceEnemy__GetSvtSuperBossParamComponent(enemyPref, uniqueId, 0);
LABEL_10:
    sub_1C71608(enemyPref, *(_QWORD *)&uniqueId);
  }
  return (BattleServantParamComponent_o *)SvtParamComponent;
}


UnityEngine_Vector2_o BattlePerformanceStatus__GetExBattleUiOverKillPosAdjust(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o OverKillPosAdjust; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__get_ExUiController(enemyPref, 0)) == 0 )
  {
    sub_1C71608(enemyPref, method);
  }
  OverKillPosAdjust = ExtraBattleUserInterfaceController__GetOverKillPosAdjust(
                        (ExtraBattleUserInterfaceController_o *)enemyPref,
                        0);
  y = OverKillPosAdjust.fields.y;
  x = OverKillPosAdjust.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o BattlePerformanceStatus__GetExBattleUiSkillSkipPosAdjust(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o SkillSkipPosAdjust; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__get_ExUiController(enemyPref, 0)) == 0 )
  {
    sub_1C71608(enemyPref, method);
  }
  SkillSkipPosAdjust = ExtraBattleUserInterfaceController__GetSkillSkipPosAdjust(
                         (ExtraBattleUserInterfaceController_o *)enemyPref,
                         0);
  y = SkillSkipPosAdjust.fields.y;
  x = SkillSkipPosAdjust.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


System_Collections_Generic_IEnumerable_BattleWindowComponent__o *BattlePerformanceStatus__GetExBattleWindows(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  UnityEngine_Object_o *switchPartyConfirmWindow; // x21
  _BOOL8 v5; // x0
  Il2CppObject *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4CCAAD4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleWindowComponent__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleWindowComponent___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleWindowComponent__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAAD4 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleWindowComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleWindowComponent___ctor__);
  switchPartyConfirmWindow = (UnityEngine_Object_o *)this->fields.switchPartyConfirmWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(switchPartyConfirmWindow, 0, 0);
  if ( v5 )
  {
    if ( !v3
      || (v6 = (Il2CppObject *)this->fields.switchPartyConfirmWindow,
          items = v3->fields._items,
          v14 = Method_System_Collections_Generic_List_BattleWindowComponent__Add__,
          ++v3->fields._version,
          !items) )
    {
      sub_1C71608(v5, v6);
    }
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        v6,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v16[4] = (Il2CppClass *)v6;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)v6, v7, v8, v9, v10, v11, v12);
    }
  }
  return (System_Collections_Generic_IEnumerable_BattleWindowComponent__o *)v3;
}


BattleSelectCommandTypeWindow_o *BattlePerformanceStatus__GetSelectCommandWindow(
        BattlePerformanceStatus_o *this,
        int32_t dialogType,
        const MethodInfo *method)
{
  if ( (byte_4CCAACC & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IndexValue_BattleSelectCommandTypeWindow___);
    byte_4CCAACC = 1;
  }
  return (BattleSelectCommandTypeWindow_o *)BasicHelper__IndexValue_object_(
                                              (System_Object_array *)this->fields.selectCommandWindowArray,
                                              dialogType,
                                              0,
                                              (const MethodInfo_31393D4 *)Method_BasicHelper_IndexValue_BattleSelectCommandTypeWindow___);
}


BattleSelectCommandTypeWindow_array *BattlePerformanceStatus__GetSelectCommandWindowAll(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.selectCommandWindowArray;
}


void BattlePerformanceStatus__GorgeousStarCommonFunc(
        BattlePerformanceStatus_o *this,
        UnityEngine_GameObject_o *starEffectPrefab,
        int16_t starCount,
        const MethodInfo *method)
{
  UnityEngine_ParticleSystem_o *ComponentInChildren_object; // x0
  unsigned int v8; // w8
  int16_t v9; // w20
  UnityEngine_ParticleSystem_o *v10; // x22
  UnityEngine_ParticleSystem_MainModule_o v11; // x0
  float constant; // s8
  UnityEngine_ParticleSystem_MainModule_o v13; // x0
  struct UnityEngine_ParticleSystem_Burst_array *tempBurst; // x8
  UnityEngine_ParticleSystem_o *v15; // x21
  struct UnityEngine_ParticleSystem_Burst_array *v16; // x23
  UnityEngine_ParticleSystem_EmissionModule_o v17; // x0
  UnityEngine_ParticleSystem_MinMaxCurve_o v18; // [xsp+8h] [xbp-98h] BYREF
  struct UnityEngine_ParticleSystem_o *v19; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v20; // [xsp+30h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4CCAACA & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4CCAACA = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v19 = 0;
  if ( !byte_4CC1CE4 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC1CE4 = 1;
  }
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( starCount >= 0 )
    v8 = starCount;
  else
    v8 = -starCount;
  if ( v8 >= 0x32 )
    v9 = 50;
  else
    v9 = v8;
  if ( !starEffectPrefab )
    goto LABEL_26;
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                 starEffectPrefab,
                                                                 (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  if ( !ComponentInChildren_object )
    goto LABEL_26;
  v10 = ComponentInChildren_object;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(ComponentInChildren_object, 0).fields.m_ParticleSystem;
  v11.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startDelay(&v18, v11, 0);
  v20 = v18;
  constant = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v20, 0);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v10, 0).fields.m_ParticleSystem;
  v13.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v18, v13, 0);
  v20 = v18;
  this->fields.gorgeousStarEffectTime = constant + UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v20, 0);
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !ComponentInChildren_object )
    goto LABEL_26;
  if ( *((float *)&ComponentInChildren_object[15].klass + 1) < 1.0 )
    return;
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)BaseMonoBehaviour__createObject(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 starEffectPrefab,
                                                                 this->fields.criticalpointTr,
                                                                 0,
                                                                 0);
  if ( !ComponentInChildren_object )
    goto LABEL_26;
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                 (UnityEngine_GameObject_o *)ComponentInChildren_object,
                                                                 (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  tempBurst = this->fields.tempBurst;
  if ( !tempBurst )
    goto LABEL_26;
  if ( !LODWORD(tempBurst->max_length) )
    goto LABEL_27;
  v15 = ComponentInChildren_object;
  UnityEngine_ParticleSystem_Burst__set_time(tempBurst->m_Items, 0.0, 0);
  v16 = this->fields.tempBurst;
  if ( !v16 )
    goto LABEL_26;
  if ( !LODWORD(v16->max_length)
    || (UnityEngine_ParticleSystem_Burst__set_maxCount(v16->m_Items, v9, 0), !LODWORD(v16->max_length)) )
  {
LABEL_27:
    sub_1C71610(ComponentInChildren_object);
  }
  UnityEngine_ParticleSystem_Burst__set_minCount(v16->m_Items, v9, 0);
  if ( !v15 )
LABEL_26:
    sub_1C71608(ComponentInChildren_object, starEffectPrefab);
  v19 = UnityEngine_ParticleSystem__get_emission(v15, 0).fields.m_ParticleSystem;
  v17.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v19;
  UnityEngine_ParticleSystem_EmissionModule__SetBursts(v17, this->fields.tempBurst, 0);
}


void BattlePerformanceStatus__InitSkillSelectAddFuncConfWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x20
  UnityEngine_Transform_o *skillSelectAddFuncParent; // x21
  UnityEngine_GameObject_o *skillSelectAddFuncConfWindow; // x0
  __int64 v9; // x1
  struct BattleSkillSelectAddFuncConfComponent_o **p_skillSelectAddFuncConfWindow; // x20
  Il2CppObject *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CCAAC7 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetManager_TryGetAssetObject_GameObject___);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_TryGetComponent_BattleSkillSelectAddFuncConfComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_12908/*"SkillSelectAddFuncConfWindow"*/);
    byte_4CCAAC7 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  data = 0;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         ASSET_BATTLE_COMMON,
         (System_String_o *)StringLiteral_12908/*"SkillSelectAddFuncConfWindow"*/,
         (const MethodInfo_312C544 *)Method_AssetManager_TryGetAssetObject_GameObject___) )
  {
    BattlePerformanceStatus__DestroySkillSelectAddFuncConfWindow(this, v5);
    v6 = data;
    skillSelectAddFuncParent = this->fields.skillSelectAddFuncParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    skillSelectAddFuncConfWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__52264420(
                                                                 v6,
                                                                 skillSelectAddFuncParent,
                                                                 (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    if ( !skillSelectAddFuncConfWindow )
      goto LABEL_16;
    p_skillSelectAddFuncConfWindow = &this->fields.skillSelectAddFuncConfWindow;
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            skillSelectAddFuncConfWindow,
            (Il2CppObject **)&this->fields.skillSelectAddFuncConfWindow,
            (const MethodInfo_31A4160 *)Method_UnityEngine_GameObject_TryGetComponent_BattleSkillSelectAddFuncConfComponent___) )
      return;
    skillSelectAddFuncConfWindow = (UnityEngine_GameObject_o *)*p_skillSelectAddFuncConfWindow;
    if ( !*p_skillSelectAddFuncConfWindow
      || (BattleSkillSelectAddFuncConfComponent__Init(
            (BattleSkillSelectAddFuncConfComponent_o *)skillSelectAddFuncConfWindow,
            this->fields.data,
            0),
          (skillSelectAddFuncConfWindow = (UnityEngine_GameObject_o *)this->fields.skillSelectAddFuncConfWindow) == 0) )
    {
LABEL_16:
      sub_1C71608(skillSelectAddFuncConfWindow, v9);
    }
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))skillSelectAddFuncConfWindow->klass[1]._1.declaringType)(
      skillSelectAddFuncConfWindow,
      skillSelectAddFuncConfWindow->klass[1]._1.parent);
  }
}


void BattlePerformanceStatus__Initialize(
        BattlePerformanceStatus_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x4
  char *playerPerf; // x0
  const MethodInfo *v27; // x4
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct BattleData_o *data; // x1
  BattlePerformanceStatus___c_c *v35; // x0
  System_Collections_Generic_IEnumerable_T__o *selectCommandWindowArray; // x20
  System_Action_object__o *_9__35_0; // x21
  Il2CppObject *v38; // x22
  struct BattlePerformanceStatus___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  const MethodInfo *v46; // x1
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct UnityEngine_ParticleSystem_Burst_array *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  const MethodInfo *v61; // x1

  if ( (byte_4CCAAC6 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_BattleSelectCommandTypeWindow__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___);
    sub_1C713B0(&UnityEngine_ParticleSystem_Burst___TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceStatus___c__Initialize_b__35_0__);
    sub_1C713B0(&BattlePerformanceStatus___c_TypeInfo);
    byte_4CCAAC6 = 1;
  }
  this->fields.perf = inperf;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)indata, v12, v13, v14, v15, v16, v17);
  this->fields.logic = inlogic;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.logic, (int32_t)inlogic, v18, v19, v20, v21, v22, v23);
  playerPerf = (char *)this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_24;
  BattlePerformancePlayer__Initialize(
    (BattlePerformancePlayer_o *)playerPerf,
    this->fields.perf,
    this->fields.data,
    this->fields.logic,
    v25);
  playerPerf = (char *)this->fields.masterPerf;
  if ( !playerPerf )
    goto LABEL_24;
  BattlePerformanceMaster__Initialize(
    (BattlePerformanceMaster_o *)playerPerf,
    this->fields.perf,
    this->fields.data,
    this->fields.logic,
    v27);
  playerPerf = (char *)this->fields.enemyPref;
  if ( !playerPerf )
    goto LABEL_24;
  BattlePerformanceEnemy__Initialize(
    (BattlePerformanceEnemy_o *)playerPerf,
    this->fields.perf,
    this->fields.data,
    this->fields.logic,
    0);
  playerPerf = (char *)this->fields.enemyMasterPerf;
  if ( !playerPerf )
    goto LABEL_24;
  data = this->fields.data;
  *((_QWORD *)playerPerf + 4) = data;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(playerPerf + 32), (int32_t)data, v28, v29, v30, v31, v32, v33);
  playerPerf = (char *)this->fields.selectSvtWindow;
  if ( !playerPerf )
    goto LABEL_24;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0);
  playerPerf = (char *)this->fields.selectSvtWindow;
  if ( !playerPerf )
    goto LABEL_24;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
    playerPerf,
    *(_QWORD *)(*(_QWORD *)playerPerf + 464LL));
  playerPerf = (char *)this->fields.selectMainSubSvtWindow;
  if ( !playerPerf )
    goto LABEL_24;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0);
  playerPerf = (char *)this->fields.selectMainSubSvtWindow;
  if ( !playerPerf )
    goto LABEL_24;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
    playerPerf,
    *(_QWORD *)(*(_QWORD *)playerPerf + 464LL));
  playerPerf = (char *)this->fields.buffConfWindow;
  if ( !playerPerf )
    goto LABEL_24;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0);
  playerPerf = (char *)this->fields.buffConfWindow;
  if ( !playerPerf )
    goto LABEL_24;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
    playerPerf,
    *(_QWORD *)(*(_QWORD *)playerPerf + 464LL));
  v35 = BattlePerformanceStatus___c_TypeInfo;
  selectCommandWindowArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectCommandWindowArray;
  if ( !BattlePerformanceStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceStatus___c_TypeInfo);
    v35 = BattlePerformanceStatus___c_TypeInfo;
  }
  _9__35_0 = (System_Action_object__o *)v35->static_fields->__9__35_0;
  if ( !_9__35_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BattlePerformanceStatus___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__35_0 = (System_Action_object__o *)sub_1C715FC(System_Action_BattleSelectCommandTypeWindow__TypeInfo);
    System_Action_object____ctor(_9__35_0, v38, Method_BattlePerformanceStatus___c__Initialize_b__35_0__, 0);
    static_fields = BattlePerformanceStatus___c_TypeInfo->static_fields;
    static_fields->__9__35_0 = (struct System_Action_BattleSelectCommandTypeWindow__o *)_9__35_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__35_0,
      (int32_t)_9__35_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  BasicHelper__ForEach_object_(
    selectCommandWindowArray,
    (System_Action_T__o *)_9__35_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___);
  BattlePerformanceStatus__InitSkillSelectAddFuncConfWindow(this, v46);
  playerPerf = (char *)this->fields.InfoComp;
  if ( !playerPerf
    || (BattlePerformanceInfoComponent__Initialize((BattlePerformanceInfoComponent_o *)playerPerf, v24),
        (playerPerf = (char *)this->fields.totalCriticalpointlabel) == 0)
    || (playerPerf = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)playerPerf, 0)) == 0
    || (playerPerf = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)playerPerf, 0)) == 0 )
  {
LABEL_24:
    sub_1C71608(playerPerf, v24);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)playerPerf, 0);
  this->fields.totalCriticalStarObj = gameObject;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.totalCriticalStarObj,
    (int32_t)gameObject,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.lastTotalCriticalPoint = 0;
  v54 = (struct UnityEngine_ParticleSystem_Burst_array *)sub_1C71458(UnityEngine_ParticleSystem_Burst___TypeInfo, 1);
  this->fields.tempBurst = v54;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tempBurst, (int32_t)v54, v55, v56, v57, v58, v59, v60);
  BattlePerformanceStatus__initActionTouch(this, v61);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceStatus__OpenBuffConf(BattlePerformanceStatus_o *this, int32_t Id, const MethodInfo *method)
{
  struct BattlePerformancePlayer_o *playerPerf; // x8
  BattlePerformanceStatus_o *v4; // x19
  struct BattleBuffConfWindowComponent_o *buffConfWindow; // x8
  BattleBuffConfWindowComponent_c *klass; // x9
  void *typeMetadataHandle; // x2
  void (__fastcall *methodPtr)(BattlePerformanceStatus_o *, _QWORD, void *); // x3

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_13;
  v4 = this;
  this = (BattlePerformanceStatus_o *)playerPerf->fields.confwindowComp;
  if ( !this )
    goto LABEL_13;
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0) )
  {
    this = (BattlePerformanceStatus_o *)v4->fields.buffConfWindow;
    if ( this )
    {
      this = (BattlePerformanceStatus_o *)BattleBuffConfWindowComponent__checkBuffId(
                                            (BattleBuffConfWindowComponent_o *)this,
                                            Id,
                                            0);
      buffConfWindow = v4->fields.buffConfWindow;
      if ( buffConfWindow )
      {
        klass = buffConfWindow->klass;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          methodPtr = (void (__fastcall *)(BattlePerformanceStatus_o *, _QWORD, void *))klass->vtable._12_Close.methodPtr;
          typeMetadataHandle = (void *)klass->vtable._12_Close.method;
          this = (BattlePerformanceStatus_o *)v4->fields.buffConfWindow;
LABEL_12:
          methodPtr(this, 0, typeMetadataHandle);
          return;
        }
        ((void (__fastcall *)(struct BattleBuffConfWindowComponent_o *, const MethodInfo *))klass->vtable._9_setClose.methodPtr)(
          v4->fields.buffConfWindow,
          klass->vtable._9_setClose.method);
        this = (BattlePerformanceStatus_o *)v4->fields.buffConfWindow;
        if ( this )
        {
          BattleBuffConfWindowComponent__setData((BattleBuffConfWindowComponent_o *)this, Id, 0);
          this = (BattlePerformanceStatus_o *)v4->fields.buffConfWindow;
          if ( this )
          {
            methodPtr = (void (__fastcall *)(BattlePerformanceStatus_o *, _QWORD, void *))this->klass[1]._1.generic_class;
            typeMetadataHandle = this->klass[1]._1.typeMetadataHandle;
            goto LABEL_12;
          }
        }
      }
    }
LABEL_13:
    sub_1C71608(this, *(_QWORD *)&Id);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceStatus__RemoveExtraBattleUiDataAndComponents(
        BattlePerformanceStatus_o *this,
        int32_t wave,
        bool isResume,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__get_ExUiController(enemyPref, 0)) == 0
    || (ExtraBattleUserInterfaceController__RemoveDataAndComponents(
          (ExtraBattleUserInterfaceController_o *)enemyPref,
          wave,
          isResume,
          0),
        (enemyPref = (BattlePerformanceEnemy_o *)this->fields.masterPerf) == 0)
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceMaster__get_ExUiController(
                                                  (BattlePerformanceMaster_o *)enemyPref,
                                                  *(const MethodInfo **)&wave)) == 0 )
  {
    sub_1C71608(enemyPref, *(_QWORD *)&wave);
  }
  ExtraBattleUserInterfaceController__RemoveDataAndComponents(
    (ExtraBattleUserInterfaceController_o *)enemyPref,
    wave,
    isResume,
    0);
}


void BattlePerformanceStatus__RemoveSwitchPartyConfirmWindow(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_switchPartyConfirmWindow; // x19
  UnityEngine_Object_o *v4; // x20
  struct BattleSwitchPartyConfirmWindow_o *switchPartyConfirmWindow; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CCAAD6 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3088/*"Battle/ExBattleUi/Prefab/Window/SwitchPartyConfirmWindow"*/);
    byte_4CCAAD6 = 1;
  }
  switchPartyConfirmWindow = this->fields.switchPartyConfirmWindow;
  p_switchPartyConfirmWindow = (GrandQuestFolderBoardItem_o *)&this->fields.switchPartyConfirmWindow;
  v4 = (UnityEngine_Object_o *)switchPartyConfirmWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_switchPartyConfirmWindow->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(klass, 0);
    p_switchPartyConfirmWindow->klass = 0;
    sub_1C71354(p_switchPartyConfirmWindow, 0, v7, v8, v9, v10, v11, v12);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_3088/*"Battle/ExBattleUi/Prefab/Window/SwitchPartyConfirmWindow"*/, 0);
  }
}


void BattlePerformanceStatus__SetActiveTotalCriticalStar(
        BattlePerformanceStatus_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *totalCriticalStarObj; // x0

  totalCriticalStarObj = this->fields.totalCriticalStarObj;
  if ( !totalCriticalStarObj )
    sub_1C71608(0, value);
  UnityEngine_GameObject__SetActive(totalCriticalStarObj, value, 0);
}


void BattlePerformanceStatus__SetCloseSelectCommandWindowAll(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceStatus___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *selectCommandWindowArray; // x19
  System_Action_object__o *_9__82_0; // x20
  Il2CppObject *v6; // x21
  struct BattlePerformanceStatus___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCAACE & 1) == 0 )
  {
    sub_1C713B0(&System_Action_BattleSelectCommandTypeWindow__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___);
    sub_1C713B0(&Method_BattlePerformanceStatus___c__SetCloseSelectCommandWindowAll_b__82_0__);
    sub_1C713B0(&BattlePerformanceStatus___c_TypeInfo);
    byte_4CCAACE = 1;
  }
  v3 = BattlePerformanceStatus___c_TypeInfo;
  selectCommandWindowArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectCommandWindowArray;
  if ( !BattlePerformanceStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceStatus___c_TypeInfo);
    v3 = BattlePerformanceStatus___c_TypeInfo;
  }
  _9__82_0 = (System_Action_object__o *)v3->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattlePerformanceStatus___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__82_0 = (System_Action_object__o *)sub_1C715FC(System_Action_BattleSelectCommandTypeWindow__TypeInfo);
    System_Action_object____ctor(
      _9__82_0,
      v6,
      Method_BattlePerformanceStatus___c__SetCloseSelectCommandWindowAll_b__82_0__,
      0);
    static_fields = BattlePerformanceStatus___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Action_BattleSelectCommandTypeWindow__o *)_9__82_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__82_0, (int32_t)_9__82_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_object_(
    selectCommandWindowArray,
    (System_Action_T__o *)_9__82_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___);
}


void BattlePerformanceStatus__ShowCriticalStarEffectForSkill(
        BattlePerformanceStatus_o *this,
        int32_t starCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o **p_effect_increaseGorgeousStar; // x8

  if ( starCount << 16 >= 0x10000 )
  {
    p_effect_increaseGorgeousStar = &this->fields.effect_increaseGorgeousStar;
  }
  else
  {
    if ( !(_WORD)starCount )
      return;
    p_effect_increaseGorgeousStar = &this->fields.effect_reduceGorgeousStar;
  }
  BattlePerformanceStatus__GorgeousStarCommonFunc(this, *p_effect_increaseGorgeousStar, starCount, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceStatus__SwitchDispExtraBattleUiAnimation(
        BattlePerformanceStatus_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__get_ExUiController(enemyPref, 0)) == 0
    || (ExtraBattleUserInterfaceController__SwitchDispAnimation(
          (ExtraBattleUserInterfaceController_o *)enemyPref,
          isDisp,
          0),
        (enemyPref = (BattlePerformanceEnemy_o *)this->fields.masterPerf) == 0)
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceMaster__get_ExUiController(
                                                  (BattlePerformanceMaster_o *)enemyPref,
                                                  (const MethodInfo *)isDisp)) == 0 )
  {
    sub_1C71608(enemyPref, isDisp);
  }
  ExtraBattleUserInterfaceController__SwitchDispAnimation((ExtraBattleUserInterfaceController_o *)enemyPref, isDisp, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceStatus__UpdateExtraBattleUi(
        BattlePerformanceStatus_o *this,
        int32_t addTurn,
        ExtraBattleUserInterfaceData_LabelType_array *updateLabelTypes,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceEnemy__get_ExUiController(enemyPref, 0)) == 0
    || (ExtraBattleUserInterfaceController__UpdateUi(
          (ExtraBattleUserInterfaceController_o *)enemyPref,
          addTurn,
          updateLabelTypes,
          0),
        (enemyPref = (BattlePerformanceEnemy_o *)this->fields.masterPerf) == 0)
    || (enemyPref = (BattlePerformanceEnemy_o *)BattlePerformanceMaster__get_ExUiController(
                                                  (BattlePerformanceMaster_o *)enemyPref,
                                                  *(const MethodInfo **)&addTurn)) == 0 )
  {
    sub_1C71608(enemyPref, *(_QWORD *)&addTurn);
  }
  ExtraBattleUserInterfaceController__UpdateUi(
    (ExtraBattleUserInterfaceController_o *)enemyPref,
    addTurn,
    updateLabelTypes,
    0);
}


void BattlePerformanceStatus__UpdateTotalCriticalPoint(
        BattlePerformanceStatus_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  UILabel_o *totalCriticalpointlabel; // x19
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = totalCount;
  if ( (byte_4CCAACB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_747/*"({0})"*/);
    byte_4CCAACB = 1;
  }
  totalCriticalpointlabel = this->fields.totalCriticalpointlabel;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v8, 0);
  v6 = System_String__Format((System_String_o *)StringLiteral_747/*"({0})"*/, v5, 0);
  if ( !totalCriticalpointlabel )
    sub_1C71608(v6, v7);
  UILabel__set_text(totalCriticalpointlabel, v6, 0);
}


void BattlePerformanceStatus___AddSwitchPartyConfirmWindow_b__106_0(
        BattlePerformanceStatus_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_switchPartyConfirmWindow; // x19
  UnityEngine_Object_o *switchPartyConfirmWindow; // x22
  Il2CppObject *klass; // x0
  __int64 v8; // x1
  Il2CppObject *Object_object__51560868; // x21
  const MethodInfo *v10; // x1
  UnityEngine_Transform_o *windowParentPanel; // x20
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CCAAD7 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_BattleSwitchPartyConfirmWindow___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3126/*"BattleSwitchPartyConfirmWindow(Clone)"*/);
    sub_1C713B0(&StringLiteral_24955/*"window"*/);
    byte_4CCAAD7 = 1;
  }
  p_switchPartyConfirmWindow = (GrandQuestFolderBoardItem_o *)&this->fields.switchPartyConfirmWindow;
  switchPartyConfirmWindow = (UnityEngine_Object_o *)this->fields.switchPartyConfirmWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (Il2CppObject *)UnityEngine_Object__op_Inequality(switchPartyConfirmWindow, 0, 0);
  if ( ((unsigned __int8)klass & 1) == 0 )
  {
    if ( assetData )
    {
      Object_object__51560868 = AssetData__GetObject_object__51560868(
                                  assetData,
                                  (System_String_o *)StringLiteral_24955/*"window"*/,
                                  (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51560868, 0, 0) )
        return;
      windowParentPanel = BattlePerformanceStatus__get_windowParentPanel(this, v10);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      klass = UnityEngine_Object__Instantiate_object__52264420(
                Object_object__51560868,
                windowParentPanel,
                (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
      if ( klass )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)klass,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleSwitchPartyConfirmWindow___);
        p_switchPartyConfirmWindow->klass = (GrandQuestFolderBoardItem_c *)Component_object;
        sub_1C71354(p_switchPartyConfirmWindow, (int32_t)Component_object, v13, v14, v15, v16, v17, v18);
        klass = (Il2CppObject *)p_switchPartyConfirmWindow->klass;
        if ( p_switchPartyConfirmWindow->klass )
        {
          UnityEngine_Object__set_name((UnityEngine_Object_o *)klass, (System_String_o *)StringLiteral_3126/*"BattleSwitchPartyConfirmWindow(Clone)"*/, 0);
          klass = (Il2CppObject *)p_switchPartyConfirmWindow->klass;
          if ( p_switchPartyConfirmWindow->klass )
          {
            BattleWindowComponent__setInitData((BattleWindowComponent_o *)klass, 2, 0.15, 0, 0);
            klass = (Il2CppObject *)p_switchPartyConfirmWindow->klass;
            if ( p_switchPartyConfirmWindow->klass )
            {
              ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))klass->klass->vtable[9].methodPtr)(
                klass,
                klass->klass->vtable[9].method);
              klass = (Il2CppObject *)p_switchPartyConfirmWindow->klass;
              if ( p_switchPartyConfirmWindow->klass )
              {
                ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))klass->klass->vtable[7].methodPtr)(
                  klass,
                  klass->klass->vtable[7].method);
                return;
              }
            }
          }
        }
      }
    }
    sub_1C71608(klass, v8);
  }
}


void BattlePerformanceStatus__actionTouchEvent(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceStatus_TouchEventDelegate_o *tapEvent; // x8

  tapEvent = this->fields.tapEvent;
  if ( tapEvent )
    ((void (__fastcall *)(intptr_t, intptr_t))tapEvent->fields.invoke_impl)(
      tapEvent->fields.method_code,
      tapEvent->fields.method);
}


void BattlePerformanceStatus__changeLayer(
        BattlePerformanceStatus_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x21
  BattlePerformanceStatus_o *v6; // x20
  struct BattlePerformance_o *v7; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  if ( !obj )
    goto LABEL_9;
  actorcamera = perf->fields.actorcamera;
  v6 = this;
  this = (BattlePerformanceStatus_o *)UnityEngine_GameObject__get_transform(obj, 0);
  if ( !this )
    goto LABEL_9;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  if ( !actorcamera )
    goto LABEL_9;
  v12 = UnityEngine_Camera__WorldToViewportPoint_71529188(actorcamera, position, 0);
  v7 = v6->fields.perf;
  if ( !v7
    || (this = (BattlePerformanceStatus_o *)v7->fields.uicamera) == 0
    || (v13 = UnityEngine_Camera__ViewportToWorldPoint_71529196((UnityEngine_Camera_o *)this, v12, 0),
        x = v13.fields.x,
        y = v13.fields.y,
        z = v13.fields.z,
        (this = (BattlePerformanceStatus_o *)UnityEngine_GameObject__get_transform(obj, 0)) == 0) )
  {
LABEL_9:
    sub_1C71608(this, obj);
  }
  v14.fields.x = x;
  v14.fields.y = y;
  v14.fields.z = z;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v14, 0);
}


bool BattlePerformanceStatus__checkRaidHPUpdate(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, method);
  return BattlePerformanceEnemy__checkRaidUpdateHp(enemyPref, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceStatus__clickServantWindow(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4CCAACF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22582/*"openSvtIndex"*/);
    sub_1C713B0(&StringLiteral_3482/*"CLICK_SVTWINDOW"*/);
    byte_4CCAACF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0)) == 0
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_22582/*"openSvtIndex"*/,
                                  0)) == 0
    || (LODWORD(fsm->fields.addEventHandlers) = index, (fsm = this->fields.fsm) == 0) )
  {
    sub_1C71608(fsm, *(_QWORD *)&index);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3482/*"CLICK_SVTWINDOW"*/, 0);
}


void BattlePerformanceStatus__deleteEnemyStatus(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, index);
  BattlePerformanceEnemy__deleteStatus(enemyPref, index, 0);
}


void BattlePerformanceStatus__deletePlayerStatus(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    sub_1C71608(0, index);
  BattlePerformancePlayer__deleteStatus(playerPerf, index, method);
}


void BattlePerformanceStatus__endSkill(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf
    || (BattlePerformance__changeAttackButton(perf, 1, 1, 1, 0),
        (perf = (BattlePerformance_o *)this->fields.playerPerf) == 0)
    || (BattlePerformancePlayer__endSkill((BattlePerformancePlayer_o *)perf, method),
        (perf = (BattlePerformance_o *)this->fields.enemyPref) == 0)
    || (BattlePerformanceEnemy__endSkill((BattlePerformanceEnemy_o *)perf, 0),
        (perf = (BattlePerformance_o *)this->fields.masterPerf) == 0) )
  {
    sub_1C71608(perf, method);
  }
  BattlePerformanceMaster__endSkill((BattlePerformanceMaster_o *)perf, method);
}


UnityEngine_Transform_o *BattlePerformanceStatus__getCollectDropTransform(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.dropItemTr;
}


BattleSelectMainSubServantWindow_o *BattlePerformanceStatus__getSelectMainSubSvtWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.selectMainSubSvtWindow;
}


BattleSelectServantWindow_o *BattlePerformanceStatus__getSelectSvtWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.selectSvtWindow;
}


int32_t BattlePerformanceStatus__getSelectedUniqueID(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  return 0;
}


int64_t BattlePerformanceStatus__getTurnSituationParam(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, method);
  return BattlePerformanceEnemy__getTurnSituationParam(enemyPref, 0);
}


BattleSkillSelectAddFuncConfComponent_o *BattlePerformanceStatus__get_SkillSelectAddFuncConfWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.skillSelectAddFuncConfWindow;
}


BattleSwitchPartyConfirmWindow_o *BattlePerformanceStatus__get_SwitchPartyConfirmWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.switchPartyConfirmWindow;
}


UnityEngine_Transform_o *BattlePerformanceStatus__get_windowParentPanel(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *selectSvtWindow; // x0

  selectSvtWindow = (UnityEngine_Component_o *)this->fields.selectSvtWindow;
  if ( !selectSvtWindow
    || (selectSvtWindow = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(selectSvtWindow, 0)) == 0 )
  {
    sub_1C71608(selectSvtWindow, method);
  }
  return UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)selectSvtWindow, 0);
}


void BattlePerformanceStatus__initActionTouch(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tapObject; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  tapObject = this->fields.tapObject;
  if ( !tapObject )
    sub_1C71608(0, method);
  UnityEngine_GameObject__SetActive(tapObject, 0, 0);
  this->fields.tapEvent = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tapEvent, 0, v4, v5, v6, v7, v8, v9);
}


void BattlePerformanceStatus__initQuest(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.InfoComp )
    sub_1C71608(this, method);
  BattlePerformanceInfoComponent__setQuest(this->fields.InfoComp, this->fields.data, v2);
}


bool BattlePerformanceStatus__isLoading(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceEnemyMst_o *enemyMasterPerf; // x8

  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    sub_1C71608(this, method);
  return enemyMasterPerf->fields.loadStat != 0;
}


bool BattlePerformanceStatus__isOpenOrOpeningMainWindow(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceStatus_o *v2; // x19
  struct BattlePerformanceMaster_o *masterPerf; // x8
  struct BattlePerformanceMaster_o *v4; // x8
  System_Object_array *selectCommandWindowArray; // x20
  BattlePerformanceStatus___c_c *v6; // x0
  System_Func_object__bool__o *_9__96_0; // x21
  Il2CppObject *v8; // x22
  struct BattlePerformanceStatus___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_BattleWindowComponent__o *v18; // x0
  BattlePerformanceStatus___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_object__bool__o *_9__96_1; // x20
  Il2CppObject *v22; // x21
  struct BattlePerformanceStatus___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  v2 = this;
  if ( (byte_4CCAAD2 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_BattleSelectCommandTypeWindow___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_BattleWindowComponent___);
    sub_1C713B0(&System_Func_BattleSelectCommandTypeWindow__bool__TypeInfo);
    sub_1C713B0(&System_Func_BattleWindowComponent__bool__TypeInfo);
    sub_1C713B0(&Method_BattlePerformanceStatus___c__isOpenOrOpeningMainWindow_b__96_0__);
    sub_1C713B0(&Method_BattlePerformanceStatus___c__isOpenOrOpeningMainWindow_b__96_1__);
    this = (BattlePerformanceStatus_o *)sub_1C713B0(&BattlePerformanceStatus___c_TypeInfo);
    byte_4CCAAD2 = 1;
  }
  masterPerf = v2->fields.masterPerf;
  if ( !masterPerf )
    goto LABEL_28;
  this = (BattlePerformanceStatus_o *)masterPerf->fields.win_Spell;
  if ( !this )
    goto LABEL_28;
  this = (BattlePerformanceStatus_o *)BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v4 = v2->fields.masterPerf;
  if ( !v4 || (this = (BattlePerformanceStatus_o *)v4->fields.win_Menu) == 0 )
LABEL_28:
    sub_1C71608(this, method);
  if ( BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0) )
    return 1;
  this = (BattlePerformanceStatus_o *)v2->fields.selectMainSubSvtWindow;
  if ( !this )
    goto LABEL_28;
  if ( BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0) )
    return 1;
  this = (BattlePerformanceStatus_o *)v2->fields.selectSvtWindow;
  if ( !this )
    goto LABEL_28;
  if ( BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0) )
    return 1;
  selectCommandWindowArray = (System_Object_array *)v2->fields.selectCommandWindowArray;
  v6 = BattlePerformanceStatus___c_TypeInfo;
  if ( !BattlePerformanceStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceStatus___c_TypeInfo);
    v6 = BattlePerformanceStatus___c_TypeInfo;
  }
  _9__96_0 = (System_Func_object__bool__o *)v6->static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattlePerformanceStatus___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__96_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleSelectCommandTypeWindow__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__96_0,
      v8,
      Method_BattlePerformanceStatus___c__isOpenOrOpeningMainWindow_b__96_0__,
      0);
    static_fields = BattlePerformanceStatus___c_TypeInfo->static_fields;
    static_fields->__9__96_0 = (struct System_Func_BattleSelectCommandTypeWindow__bool__o *)_9__96_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__96_0,
      (int32_t)_9__96_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( BasicHelper__Any_object__51593856(
         selectCommandWindowArray,
         (System_Func_T__bool__o *)_9__96_0,
         (const MethodInfo_3134280 *)Method_BasicHelper_Any_BattleSelectCommandTypeWindow___) )
  {
    return 1;
  }
  v18 = BattlePerformanceStatus__GetExBattleWindows(v2, v16);
  v19 = BattlePerformanceStatus___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !BattlePerformanceStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceStatus___c_TypeInfo);
    v19 = BattlePerformanceStatus___c_TypeInfo;
  }
  _9__96_1 = (System_Func_object__bool__o *)v19->static_fields->__9__96_1;
  if ( !_9__96_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BattlePerformanceStatus___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__96_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleWindowComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__96_1,
      v22,
      Method_BattlePerformanceStatus___c__isOpenOrOpeningMainWindow_b__96_1__,
      0);
    v23 = BattlePerformanceStatus___c_TypeInfo->static_fields;
    v23->__9__96_1 = (struct System_Func_BattleWindowComponent__bool__o *)_9__96_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->__9__96_1, (int32_t)_9__96_1, v24, v25, v26, v27, v28, v29);
  }
  return System_Linq_Enumerable__Any_object__51743576(
           v20,
           (System_Func_TSource__bool__o *)_9__96_1,
           (const MethodInfo_3158B58 *)Method_System_Linq_Enumerable_Any_BattleWindowComponent___);
}


void BattlePerformanceStatus__loadEnemyMaster(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemyMst_o *enemyMasterPerf; // x0
  const MethodInfo *v4; // x2

  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    goto LABEL_9;
  BattlePerformanceEnemyMst__loadData(enemyMasterPerf, method);
  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    goto LABEL_9;
  BattlePerformanceEnemyMst__OverwriteEnemyMasterFrame(enemyMasterPerf, method);
  enemyMasterPerf = (BattlePerformanceEnemyMst_o *)this->fields.data;
  if ( !enemyMasterPerf )
    goto LABEL_9;
  enemyMasterPerf = (BattlePerformanceEnemyMst_o *)BattleData__getStageEntity((BattleData_o *)enemyMasterPerf, 0);
  if ( !enemyMasterPerf )
    goto LABEL_9;
  if ( StageEntity__IsShowEnemyMasterIconOnWaveStart((StageEntity_o *)enemyMasterPerf, 0) )
  {
    enemyMasterPerf = this->fields.enemyMasterPerf;
    if ( enemyMasterPerf )
    {
      BattlePerformanceEnemyMst__SetRootActive(enemyMasterPerf, 1, v4);
      return;
    }
LABEL_9:
    sub_1C71608(enemyMasterPerf, method);
  }
}


void BattlePerformanceStatus__loadMaster(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *masterPerf; // x0

  masterPerf = this->fields.masterPerf;
  if ( !masterPerf )
    sub_1C71608(0, method);
  BattlePerformanceMaster__loadData(masterPerf, method);
}


void BattlePerformanceStatus__modeAction(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, method);
  BattlePerformanceEnemy__startAction(enemyPref, 0);
}


void BattlePerformanceStatus__modeCommand(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf
    || (BattlePerformancePlayer__startCommand(playerPerf, method),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.masterPerf) == 0)
    || (BattlePerformanceMaster__startCommand((BattlePerformanceMaster_o *)playerPerf, method),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref) == 0)
    || (BattlePerformanceEnemy__startCommand((BattlePerformanceEnemy_o *)playerPerf, 0),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.perf) == 0) )
  {
    sub_1C71608(playerPerf, method);
  }
  BattlePerformance__changeAttackButton((BattlePerformance_o *)playerPerf, 0, 0, 1, 0);
}


void BattlePerformanceStatus__modeStartWave(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, method);
  BattlePerformanceEnemy__startWave(enemyPref, 0);
}


void BattlePerformanceStatus__modeTactical(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_9;
  BattlePerformancePlayer__startTac(playerPerf, method);
  playerPerf = (BattlePerformancePlayer_o *)this->fields.masterPerf;
  if ( !playerPerf )
    goto LABEL_9;
  BattlePerformanceMaster__startTac((BattlePerformanceMaster_o *)playerPerf, method);
  playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref;
  if ( !playerPerf
    || (BattlePerformanceEnemy__startTac((BattlePerformanceEnemy_o *)playerPerf, 0),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.perf) == 0)
    || (BattlePerformance__changeAttackButton((BattlePerformance_o *)playerPerf, 1, 1, 1, 0),
        (perf = this->fields.perf) == 0)
    || (statusPerf = perf->fields.statusPerf) == 0
    || (playerPerf = (BattlePerformancePlayer_o *)statusPerf->fields.totalCriticalStarObj) == 0 )
  {
LABEL_9:
    sub_1C71608(playerPerf, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playerPerf, 1, 0);
}


void BattlePerformanceStatus__playAttackEffect(
        BattlePerformanceStatus_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    sub_1C71608(0, uniqueID);
  BattlePerformancePlayer__playAttackEffect(playerPerf, uniqueID, method);
}


void BattlePerformanceStatus__setEnemyParam(
        BattlePerformanceStatus_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, index);
  BattlePerformanceEnemy__setParam(enemyPref, index, svtdata, obj, 0);
}


void BattlePerformanceStatus__setEnemyParamPosition(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, method);
  BattlePerformanceEnemy__setParamPosition(enemyPref, 0);
}


void BattlePerformanceStatus__setOffTarget(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, method);
  BattlePerformanceEnemy__setOffTarget(enemyPref, 0);
}


void BattlePerformanceStatus__setPlayerParam(
        BattlePerformanceStatus_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    sub_1C71608(0, index);
  BattlePerformancePlayer__setParam(playerPerf, index, svtdata, method);
}


void BattlePerformanceStatus__setShowTurn(
        BattlePerformanceStatus_o *this,
        BattleData_o *bdata,
        int32_t addTurn,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *InfoComp; // x0

  InfoComp = this->fields.InfoComp;
  if ( !InfoComp )
    sub_1C71608(0, bdata);
  BattlePerformanceInfoComponent__setShowTurn(InfoComp, bdata, addTurn, method);
}


void BattlePerformanceStatus__setShowWave(
        BattlePerformanceStatus_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.InfoComp )
    sub_1C71608(this, now);
  BattlePerformanceInfoComponent__setShowWave(this->fields.InfoComp, now, max, this->fields.data, v4);
}


void BattlePerformanceStatus__setTargetParam(
        BattlePerformanceStatus_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, svtdata);
  BattlePerformanceEnemy__setTarget(enemyPref, svtdata, 0);
}


void BattlePerformanceStatus__setTouchOff(
        BattlePerformanceStatus_o *this,
        BattlePerformanceStatus_TouchEventDelegate_o *inTapEvent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tapObject; // x0
  System_Delegate_o *tapEvent; // x0
  GrandQuestFolderBoardItem_o *p_tapEvent; // x20
  System_Delegate_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Delegate_o *v15; // x8
  BattlePerformanceStatus_TouchEventDelegate_c *v16; // x1

  if ( (byte_4CCAAD1 & 1) == 0 )
  {
    sub_1C713B0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4CCAAD1 = 1;
  }
  tapObject = this->fields.tapObject;
  if ( !tapObject )
    sub_1C71608(0, inTapEvent);
  UnityEngine_GameObject__SetActive(tapObject, 0, 0);
  tapEvent = (System_Delegate_o *)this->fields.tapEvent;
  p_tapEvent = (GrandQuestFolderBoardItem_o *)&this->fields.tapEvent;
  v8 = System_Delegate__Remove(tapEvent, (System_Delegate_o *)inTapEvent, 0);
  v15 = v8;
  if ( !v8 )
    goto LABEL_8;
  v16 = BattlePerformanceStatus_TouchEventDelegate_TypeInfo;
  if ( (BattlePerformanceStatus_TouchEventDelegate_c *)v8->klass != BattlePerformanceStatus_TouchEventDelegate_TypeInfo
    || (p_tapEvent->klass = (GrandQuestFolderBoardItem_c *)v8,
        (BattlePerformanceStatus_TouchEventDelegate_c *)v8->klass != v16) )
  {
    sub_1C719A4(v8);
LABEL_8:
    p_tapEvent->klass = (GrandQuestFolderBoardItem_c *)v15;
  }
  sub_1C71354(p_tapEvent, (int32_t)v15, v9, v10, v11, v12, v13, v14);
}


void BattlePerformanceStatus__setTouchOn(
        BattlePerformanceStatus_o *this,
        BattlePerformanceStatus_TouchEventDelegate_o *inTapEvent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tapObject; // x0
  struct BattlePerformanceStatus_TouchEventDelegate_o **p_tapEvent; // x21
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Delegate_o *v14; // x8
  BattlePerformanceStatus_TouchEventDelegate_c *v15; // x1

  if ( (byte_4CCAAD0 & 1) == 0 )
  {
    sub_1C713B0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4CCAAD0 = 1;
  }
  tapObject = this->fields.tapObject;
  if ( !tapObject )
LABEL_11:
    sub_1C71608(tapObject, inTapEvent);
  UnityEngine_GameObject__SetActive(tapObject, 0, 0);
  p_tapEvent = &this->fields.tapEvent;
  v7 = System_Delegate__Combine((System_Delegate_o *)this->fields.tapEvent, (System_Delegate_o *)inTapEvent, 0);
  v14 = v7;
  if ( !v7 )
    goto LABEL_8;
  v15 = BattlePerformanceStatus_TouchEventDelegate_TypeInfo;
  if ( (BattlePerformanceStatus_TouchEventDelegate_c *)v7->klass != BattlePerformanceStatus_TouchEventDelegate_TypeInfo
    || (*p_tapEvent = (struct BattlePerformanceStatus_TouchEventDelegate_o *)v7,
        (BattlePerformanceStatus_TouchEventDelegate_c *)v7->klass != v15) )
  {
    sub_1C719A4(v7);
LABEL_8:
    *p_tapEvent = (struct BattlePerformanceStatus_TouchEventDelegate_o *)v14;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tapEvent, (int32_t)v14, v8, v9, v10, v11, v12, v13);
  tapObject = this->fields.tapObject;
  if ( !tapObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(tapObject, 1, 0);
}


void BattlePerformanceStatus__setWinView(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, method);
  BattlePerformanceEnemy__setWinView(enemyPref, 0);
}


void BattlePerformanceStatus__showSideEffect(
        BattlePerformanceStatus_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_5;
  if ( BattlePerformancePlayer__showSideEffect(playerPerf, buffData, method) )
    return;
  playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref;
  if ( !playerPerf )
LABEL_5:
    sub_1C71608(playerPerf, buffData);
  BattlePerformanceEnemy__showSideEffect((BattlePerformanceEnemy_o *)playerPerf, buffData, 0);
}


void BattlePerformanceStatus__startSkill(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  const MethodInfo *v4; // x2

  perf = this->fields.perf;
  if ( !perf
    || (BattlePerformance__changeAttackButton(perf, 0, 0, 0, 0),
        (perf = (BattlePerformance_o *)this->fields.playerPerf) == 0)
    || (BattlePerformancePlayer__startSkill((BattlePerformancePlayer_o *)perf, method),
        (perf = (BattlePerformance_o *)this->fields.enemyPref) == 0)
    || (BattlePerformanceEnemy__startSkill((BattlePerformanceEnemy_o *)perf, 0),
        (perf = (BattlePerformance_o *)this->fields.masterPerf) == 0) )
  {
    sub_1C71608(perf, method);
  }
  BattlePerformanceMaster__startSkill((BattlePerformanceMaster_o *)perf, (int32_t)method, v4);
}


void BattlePerformanceStatus__updateBuff(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  if ( !this->fields.playerPerf || (this = (BattlePerformanceStatus_o *)this->fields.enemyPref) == 0 )
    sub_1C71608(this, method);
  BattlePerformanceEnemy__updateBuff((BattlePerformanceEnemy_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceStatus__updateCriticalPoint(
        BattlePerformanceStatus_o *this,
        int32_t maxLabelCont,
        bool isUseEffect,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  int32_t totalCriticalStars; // w21
  int v6; // w20
  BattlePerformanceStatus_o *v8; // x19
  const MethodInfo *v9; // x2
  struct BattleData_o *v10; // x8
  int criticalstars; // w8
  const MethodInfo *v13; // x1
  System_Collections_IEnumerator_o *CriticalEffect; // x1

  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  totalCriticalStars = data->fields.totalCriticalStars;
  v6 = maxLabelCont;
  v8 = this;
  BattlePerformanceStatus__UpdateTotalCriticalPoint(this, totalCriticalStars, (const MethodInfo *)isUseEffect);
  v8->fields.gorgeousStarEffectTime = 0.0;
  if ( isUseEffect )
    BattlePerformanceStatus__ShowCriticalStarEffectForSkill(
      v8,
      totalCriticalStars - v8->fields.lastTotalCriticalPoint,
      v9);
  v10 = v8->fields.data;
  v8->fields.lastTotalCriticalPoint = totalCriticalStars;
  if ( !v10 || (this = (BattlePerformanceStatus_o *)v8->fields.criticalpointlabel) == 0 )
LABEL_16:
    sub_1C71608(this, *(_QWORD *)&maxLabelCont);
  criticalstars = v10->fields.criticalstars;
  if ( criticalstars != HIDWORD(this->fields.playerPerf) )
  {
    if ( criticalstars <= v6 || v6 <= 0 )
      v6 = criticalstars;
    DrumRollLabel__changeParam((DrumRollLabel_o *)this, v6, 0, 0, v8->fields.gorgeousStarEffectTime, 0);
    if ( v6 >= 1 )
    {
      CriticalEffect = BattlePerformanceStatus__DoCreateCriticalEffect(v8, v8->fields.gorgeousStarEffectTime, v13);
      UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)v8, CriticalEffect, 0);
    }
  }
}


void BattlePerformanceStatus__updateDropItemCount(
        BattlePerformanceStatus_o *this,
        bool isPlayChangeEffect,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattlePerformanceInfoComponent_o *InfoComp; // x0

  InfoComp = this->fields.InfoComp;
  if ( !InfoComp )
    sub_1C71608(0, isPlayChangeEffect);
  BattlePerformanceInfoComponent__updateDropItemCount(InfoComp, this->fields.data, isPlayChangeEffect, v3);
}


void BattlePerformanceStatus__updateNokoriEnemyCount(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.InfoComp )
    sub_1C71608(this, method);
  BattlePerformanceInfoComponent__updateNokoriEnemyCount(this->fields.InfoComp, this->fields.data, v2);
}


void BattlePerformanceStatus__updateRaidHp(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, method);
  BattlePerformanceEnemy__updateRaidHp(enemyPref, 0);
}


void BattlePerformanceStatus__updateRaindInfo(
        BattlePerformanceStatus_o *this,
        BattleRaidInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, infos);
  BattlePerformanceEnemy__updateRaidInfos(enemyPref, infos, fixUpdate, 0);
}


void BattlePerformanceStatus__updateStateString(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, method);
  BattlePerformanceEnemy__updateStateString(enemyPref, 0);
}


void BattlePerformanceStatus__updateSuperBossInfo(
        BattlePerformanceStatus_o *this,
        BattleSuperBossInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C71608(0, infos);
  BattlePerformanceEnemy__updateSuperBossInfos(enemyPref, infos, fixUpdate, 0);
}


void BattlePerformanceStatus__updateView(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf
    || (BattlePerformancePlayer__updateView(playerPerf, method),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref) == 0) )
  {
    sub_1C71608(playerPerf, method);
  }
  BattlePerformanceEnemy__updateView((BattlePerformanceEnemy_o *)playerPerf, 0);
}


void BattlePerformanceStatus_TouchEventDelegate___ctor(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAACB0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAAC70;
}


System_IAsyncResult_o *BattlePerformanceStatus_TouchEventDelegate__BeginInvoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void BattlePerformanceStatus_TouchEventDelegate__EndInvoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void BattlePerformanceStatus_TouchEventDelegate__Invoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void BattlePerformanceStatus__DoCreateCriticalEffect_d__62___ctor(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__62_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceStatus__DoCreateCriticalEffect_d__62__MoveNext(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__62_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  bool result; // w0
  struct BattlePerformanceStatus_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *Object; // x0

  if ( (byte_4CCAAD9 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CCAAD9 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      if ( *((float *)&Instance[22].monitor + 1) < 1.0 )
        return 0;
      if ( _4__this )
      {
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)_4__this,
                   _4__this->fields.effect_takecri,
                   _4__this->fields.criticalpointTr,
                   0,
                   0);
        GameObjectHelper__addNguiDepth(Object, 100, 0, 0);
        return 0;
      }
    }
    sub_1C71608(Instance, v15);
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattlePerformanceStatus__DoCreateCriticalEffect_d__62__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__62_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceStatus__DoCreateCriticalEffect_d__62__System_Collections_IEnumerator_Reset(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__62_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattlePerformanceStatus__DoCreateCriticalEffect_d__62_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *BattlePerformanceStatus__DoCreateCriticalEffect_d__62__System_Collections_IEnumerator_get_Current(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__62_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceStatus__DoCreateCriticalEffect_d__62__System_IDisposable_Dispose(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__62_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceStatus___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCAAD8 & 1) == 0 )
  {
    sub_1C713B0(&BattlePerformanceStatus___c_TypeInfo);
    byte_4CCAAD8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattlePerformanceStatus___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePerformanceStatus___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceStatus___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattlePerformanceStatus___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattlePerformanceStatus___c___ctor(BattlePerformanceStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceStatus___c___CloseSelectCommandWindowAll_b__81_0(
        BattlePerformanceStatus___c_o *this,
        BattleSelectCommandTypeWindow_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  ((void (__fastcall *)(BattleSelectCommandTypeWindow_o *, _QWORD, const MethodInfo *))x->klass->vtable._12_Close.methodPtr)(
    x,
    0,
    x->klass->vtable._12_Close.method);
}


void BattlePerformanceStatus___c___Initialize_b__35_0(
        BattlePerformanceStatus___c_o *this,
        BattleSelectCommandTypeWindow_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)x, 2, 0.15, 0, 0);
  ((void (__fastcall *)(BattleSelectCommandTypeWindow_o *, const MethodInfo *))x->klass->vtable._9_setClose.methodPtr)(
    x,
    x->klass->vtable._9_setClose.method);
}


void BattlePerformanceStatus___c___SetCloseSelectCommandWindowAll_b__82_0(
        BattlePerformanceStatus___c_o *this,
        BattleSelectCommandTypeWindow_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  ((void (__fastcall *)(BattleSelectCommandTypeWindow_o *, const MethodInfo *))x->klass->vtable._9_setClose.methodPtr)(
    x,
    x->klass->vtable._9_setClose.method);
}


bool BattlePerformanceStatus___c___isOpenOrOpeningMainWindow_b__96_0(
        BattlePerformanceStatus___c_o *this,
        BattleSelectCommandTypeWindow_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)x, 0);
}


bool BattlePerformanceStatus___c___isOpenOrOpeningMainWindow_b__96_1(
        BattlePerformanceStatus___c_o *this,
        BattleWindowComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return BattleWindowComponent__isOpenOrOpening(x, 0);
}