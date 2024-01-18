void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_41869C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__, v4);
    byte_41869C4 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this[1].klass = (FlashingIconManager_c *)v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
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
  FlashingIconManager_c *klass; // x20
  FlashingIconManager_FlashIconContents_o *v13; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x21
  float v15; // s0
  FlashingIconComponent_o *v16; // x1
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_41869C1 & 1) == 0 )
  {
    sub_B2C35C(&FlashingIconManager_FlashIconContents_TypeInfo, icon);
    sub_B2C35C(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41869C1 = 1;
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
      v13 = (FlashingIconManager_FlashIconContents_o *)sub_B2C42C(FlashingIconManager_FlashIconContents_TypeInfo);
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13;
      v15 = 0.5;
    }
    else
    {
      klass = this[1].klass;
      v13 = (FlashingIconManager_FlashIconContents_o *)sub_B2C42C(FlashingIconManager_FlashIconContents_TypeInfo);
      v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13;
      if ( extraCycleTime > 0.0 )
      {
        v16 = icon;
        v15 = extraCycleTime;
LABEL_13:
        FlashingIconManager_FlashIconContents___ctor(v13, v16, v15, 0LL);
        if ( !klass )
          sub_B2C434(v17, v18);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass,
          v14,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
        return;
      }
      v15 = 1.0;
    }
    v16 = icon;
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

  if ( (byte_41869C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__, method);
    byte_41869C0 = 1;
  }
  klass = this[1].klass;
  LODWORD(this->fields.flashIconList) = 0;
  if ( !klass )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  __int64 v16; // x1
  FlashingIconManager_c *v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41869C2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__,
      icon);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41869C2 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
    if ( !klass )
      sub_B2C434(0LL, v11);
    if ( klass->fields._size )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v18,
        klass,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v18,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v13 )
          break;
        current = v18.fields.current;
        if ( !v18.fields.current )
          sub_B2C434(v13, v14);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v18.fields.current->klass->vtable[0].method)(
                v18.fields.current,
                icon,
                v18.fields.current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v17 = this[1].klass;
          if ( !v17 )
            sub_B2C434(0LL, v16);
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v17,
            (WarBoardManager_TaskList_o *)current,
            (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v18,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
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
  const MethodInfo *v8; // x1
  float deltaTime; // s0
  FlashingIconManager_c *v10; // x23
  int32_t v11; // w20
  __int64 v12; // x21
  __int64 v13; // x23
  float v14; // s9
  float v15; // s0

  if ( (byte_41869C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__, v4);
    byte_41869C3 = 1;
  }
  klass = this[1].klass;
  if ( klass && LODWORD(klass->_1.namespaze) )
  {
    v6 = *(float *)&this->fields.flashIconList;
    deltaTime = RealTime__get_deltaTime(0LL);
    v10 = this[1].klass;
    *(float *)&this->fields.flashIconList = v6 + deltaTime;
    if ( !v10 )
      goto LABEL_19;
    v11 = LODWORD(v10->_1.namespaze) - 1;
    if ( v11 >= 0 )
    {
      v12 = 8LL * v11 + 32;
      do
      {
        if ( LODWORD(v10->_1.namespaze) <= v11 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v13 = *(_QWORD *)&v10->_1.name[v12];
        if ( !v13 )
          break;
        v14 = *(float *)(v13 + 16);
        v15 = fmodf(*(float *)&this->fields.flashIconList, v14 + v14);
        updated = *(FlashingIconManager_c **)(v13 + 24);
        if ( !updated )
          break;
        if ( v15 > v14 )
          v15 = (float)(v14 + v14) - v15;
        updated = (FlashingIconManager_c *)FlashingIconComponent__UpdateIcon(
                                             (FlashingIconComponent_o *)updated,
                                             v15 / v14,
                                             v8);
        if ( ((unsigned __int8)updated & 1) == 0 )
        {
          updated = this[1].klass;
          if ( !updated )
            break;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)updated,
            v11,
            (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v11 < 0 )
          return;
        v10 = this[1].klass;
        v12 -= 8LL;
      }
      while ( v10 );
LABEL_19:
      sub_B2C434(updated, v8);
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
  sub_B2C2F8(v6, icon);
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
  sub_B2C2F8(&this->fields._icon_k__BackingField, value);
}