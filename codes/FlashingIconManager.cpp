void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F8EB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__, v7);
    byte_40F8EB2 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this[1].klass = (FlashingIconManager_c *)v8;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
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
  __int64 v14; // x3
  __int64 v15; // x4
  FlashingIconManager_c *klass; // x20
  FlashingIconManager_FlashIconContents_o *v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  float v19; // s0
  FlashingIconComponent_o *v20; // x1

  if ( (byte_40F8EAF & 1) == 0 )
  {
    sub_B16FFC(&FlashingIconManager_FlashIconContents_TypeInfo, icon);
    sub_B16FFC(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40F8EAF = 1;
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
      v17 = (FlashingIconManager_FlashIconContents_o *)sub_B170CC(
                                                         FlashingIconManager_FlashIconContents_TypeInfo,
                                                         v12,
                                                         v13,
                                                         v14,
                                                         v15);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v17;
      v19 = 0.5;
    }
    else
    {
      klass = this[1].klass;
      v17 = (FlashingIconManager_FlashIconContents_o *)sub_B170CC(
                                                         FlashingIconManager_FlashIconContents_TypeInfo,
                                                         v12,
                                                         v13,
                                                         v14,
                                                         v15);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v17;
      if ( extraCycleTime > 0.0 )
      {
        v20 = icon;
        v19 = extraCycleTime;
LABEL_13:
        FlashingIconManager_FlashIconContents___ctor(v17, v20, v19, 0LL);
        if ( !klass )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass,
          v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
        return;
      }
      v19 = 1.0;
    }
    v20 = icon;
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

  if ( (byte_40F8EAE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__, method);
    byte_40F8EAE = 1;
  }
  klass = this[1].klass;
  LODWORD(this->fields.flashIconList) = 0;
  if ( !klass )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
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
  Il2CppObject *current; // x21
  FlashingIconManager_c *v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8EB0 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__,
      icon);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__, v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__,
      v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40F8EB0 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
    if ( !klass )
      sub_B170D4();
    if ( klass->fields._size )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v14,
        klass,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v14,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__) )
      {
        current = v14.fields.current;
        if ( !v14.fields.current )
          sub_B170D4();
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v14.fields.current->klass->vtable[0].method)(
                v14.fields.current,
                icon,
                v14.fields.current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v13 = this[1].klass;
          if ( !v13 )
            sub_B170D4();
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v13,
            (WarBoardManager_TaskList_o *)current,
            (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v14,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void __fastcall FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FlashingIconManager_c *klass; // x8
  float v6; // s8
  float deltaTime; // s0
  FlashingIconManager_c *v8; // x23
  int32_t v9; // w20
  __int64 v10; // x21
  __int64 v11; // x23
  float v12; // s9
  const MethodInfo *v13; // x1
  float v14; // s0
  FlashingIconComponent_o *v15; // x0
  FlashingIconManager_c *v16; // x0

  if ( (byte_40F8EB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__, v4);
    byte_40F8EB1 = 1;
  }
  klass = this[1].klass;
  if ( klass && LODWORD(klass->_1.namespaze) )
  {
    v6 = *(float *)&this->fields.flashIconList;
    deltaTime = RealTime__get_deltaTime(0LL);
    v8 = this[1].klass;
    *(float *)&this->fields.flashIconList = v6 + deltaTime;
    if ( !v8 )
      goto LABEL_19;
    v9 = LODWORD(v8->_1.namespaze) - 1;
    if ( v9 >= 0 )
    {
      v10 = 8LL * v9 + 32;
      do
      {
        if ( LODWORD(v8->_1.namespaze) <= v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v11 = *(_QWORD *)&v8->_1.name[v10];
        if ( !v11 )
          break;
        v12 = *(float *)(v11 + 16);
        v14 = fmodf(*(float *)&this->fields.flashIconList, v12 + v12);
        v15 = *(FlashingIconComponent_o **)(v11 + 24);
        if ( !v15 )
          break;
        if ( v14 > v12 )
          v14 = (float)(v12 + v12) - v14;
        if ( !FlashingIconComponent__UpdateIcon(v15, v14 / v12, v13) )
        {
          v16 = this[1].klass;
          if ( !v16 )
            break;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v16,
            v9,
            (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v9 < 0 )
          return;
        v8 = this[1].klass;
        v10 -= 8LL;
      }
      while ( v8 );
LABEL_19:
      sub_B170D4();
    }
  }
}


void __fastcall FlashingIconManager_FlashIconContents___ctor(
        FlashingIconManager_FlashIconContents_o *this,
        FlashingIconComponent_o *icon,
        float cycleTime,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)icon;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 24);
  sub_B16F98(v6, (System_Int32_array **)icon, v7, v8, v9, v10, v11, v12);
  *(float *)&v6[-1].fields.isOpenAfter = cycleTime;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._icon_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._icon_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}