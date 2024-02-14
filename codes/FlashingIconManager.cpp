void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_421326B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__, v5);
    byte_421326B = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this[1].klass = (FlashingIconManager_c *)v6;
  sub_B0D840((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
}


void __fastcall FlashingIconManager__AddIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        bool isFast,
        float extraCycleTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  FlashingIconManager_c *klass; // x20
  FlashingIconManager_FlashIconContents_o *v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x21
  float v17; // s0
  FlashingIconComponent_o *v18; // x1
  __int64 v19; // x0

  if ( (byte_4213268 & 1) == 0 )
  {
    sub_B0D8A4(&FlashingIconManager_FlashIconContents_TypeInfo, icon);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_4213268 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v11);
    if ( isFast )
    {
      klass = this[1].klass;
      v15 = (FlashingIconManager_FlashIconContents_o *)sub_B0D974(
                                                         FlashingIconManager_FlashIconContents_TypeInfo,
                                                         v12,
                                                         v13);
      v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
      v17 = 0.5;
    }
    else
    {
      klass = this[1].klass;
      v15 = (FlashingIconManager_FlashIconContents_o *)sub_B0D974(
                                                         FlashingIconManager_FlashIconContents_TypeInfo,
                                                         v12,
                                                         v13);
      v16 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
      if ( extraCycleTime > 0.0 )
      {
        v18 = icon;
        v17 = extraCycleTime;
LABEL_13:
        FlashingIconManager_FlashIconContents___ctor(v15, v18, v17, 0LL);
        if ( !klass )
          sub_B0D97C(v19);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass,
          v16,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
        return;
      }
      v17 = 1.0;
    }
    v18 = icon;
    goto LABEL_13;
  }
}


float __fastcall FlashingIconManager__CalcAlpha(
        FlashingIconManager_o *this,
        float targetCycleTime,
        const MethodInfo *method)
{
  float v3; // s9
  float v5; // s0

  v3 = targetCycleTime + targetCycleTime;
  v5 = fmodf(*(float *)&this->fields.flashIconList, targetCycleTime + targetCycleTime);
  if ( v5 > targetCycleTime )
    v5 = v3 - v5;
  return v5 / targetCycleTime;
}


void __fastcall FlashingIconManager__Reboot(FlashingIconManager_o *this, const MethodInfo *method)
{
  FlashingIconManager_c *klass; // x0

  if ( (byte_4213267 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__, method);
    byte_4213267 = 1;
  }
  klass = this[1].klass;
  LODWORD(this->fields.flashIconList) = 0;
  if ( !klass )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
}


void __fastcall FlashingIconManager__RemoveIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  FlashingIconManager_c *v14; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4213269 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__,
      icon);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__, v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__,
      v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_4213269 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
    if ( !klass )
      sub_B0D97C(0LL);
    if ( klass->fields._size )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v15,
        klass,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v15,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v12 )
          break;
        current = v15.fields.current;
        if ( !v15.fields.current )
          sub_B0D97C(v12);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v15.fields.current->klass->vtable[0].method)(
                v15.fields.current,
                icon,
                v15.fields.current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v14 = this[1].klass;
          if ( !v14 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v14,
            (WarBoardManager_TaskList_o *)current,
            (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v15,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void __fastcall FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FlashingIconManager_c *klass; // x8
  float v6; // s8
  FlashingIconManager_c *updated; // x0
  float deltaTime; // s0
  FlashingIconManager_c *v9; // x23
  int32_t v10; // w20
  __int64 v11; // x21
  __int64 v12; // x23
  float v13; // s9
  const MethodInfo *v14; // x1
  float v15; // s0

  if ( (byte_421326A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__, v4);
    byte_421326A = 1;
  }
  klass = this[1].klass;
  if ( klass && LODWORD(klass->_1.namespaze) )
  {
    v6 = *(float *)&this->fields.flashIconList;
    deltaTime = RealTime__get_deltaTime(0LL);
    v9 = this[1].klass;
    *(float *)&this->fields.flashIconList = v6 + deltaTime;
    if ( !v9 )
      goto LABEL_19;
    v10 = LODWORD(v9->_1.namespaze) - 1;
    if ( v10 >= 0 )
    {
      v11 = 8LL * v10 + 32;
      do
      {
        if ( LODWORD(v9->_1.namespaze) <= v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v12 = *(_QWORD *)&v9->_1.name[v11];
        if ( !v12 )
          break;
        v13 = *(float *)(v12 + 16);
        v15 = fmodf(*(float *)&this->fields.flashIconList, v13 + v13);
        updated = *(FlashingIconManager_c **)(v12 + 24);
        if ( !updated )
          break;
        if ( v15 > v13 )
          v15 = (float)(v13 + v13) - v15;
        updated = (FlashingIconManager_c *)FlashingIconComponent__UpdateIcon(
                                             (FlashingIconComponent_o *)updated,
                                             v15 / v13,
                                             v14);
        if ( ((unsigned __int8)updated & 1) == 0 )
        {
          updated = this[1].klass;
          if ( !updated )
            break;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)updated,
            v10,
            (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v10 < 0 )
          return;
        v9 = this[1].klass;
        v11 -= 8LL;
      }
      while ( v9 );
LABEL_19:
      sub_B0D97C(updated);
    }
  }
}


void __fastcall FlashingIconManager_FlashIconContents___ctor(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *icon,
        float cycleTime,
        const MethodInfo *method)
{
  FlashingIconManager_FlashIconContents_o *v6; // x20

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._icon_k__BackingField = icon;
  v6 = (FlashingIconManager_FlashIconContents_o *)((char *)v6 + 24);
  sub_B0D840(v6, icon);
  *(float *)&v6[-1].fields._icon_k__BackingField = cycleTime;
}


float __fastcall FlashingIconManager_FlashIconContents__get_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._cycleTime_k__BackingField;
}


FlashingIconComponent_o *__fastcall FlashingIconManager_FlashIconContents__get_icon(
        FlashingIconManager_FlashIconContents_o *this,
        const MethodInfo *method)
{
  return this->fields._icon_k__BackingField;
}


void __fastcall FlashingIconManager_FlashIconContents__set_cycleTime(
        FlashingIconManager_FlashIconContents_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._cycleTime_k__BackingField = value;
}


void __fastcall FlashingIconManager_FlashIconContents__set_icon(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *value,
        const MethodInfo *method)
{
  this->fields._icon_k__BackingField = value;
  sub_B0D840(&this->fields._icon_k__BackingField, value);
}