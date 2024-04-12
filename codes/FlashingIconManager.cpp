void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AE9E7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
    sub_B52984(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
    byte_42AE9E7 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this[1].klass = (FlashingIconManager_c *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
}


void __fastcall FlashingIconManager__AddIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        bool isFast,
        float extraCycleTime,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  FlashingIconManager_c *klass; // x20
  FlashingIconManager_FlashIconContents_o *v11; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x21
  float v13; // s0
  FlashingIconComponent_o *v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42AE9E4 & 1) == 0 )
  {
    sub_B52984(&FlashingIconManager_FlashIconContents_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE9E4 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v9);
    if ( isFast )
    {
      klass = this[1].klass;
      v11 = (FlashingIconManager_FlashIconContents_o *)sub_B52A54(FlashingIconManager_FlashIconContents_TypeInfo);
      v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)v11;
      v13 = 0.5;
    }
    else
    {
      klass = this[1].klass;
      v11 = (FlashingIconManager_FlashIconContents_o *)sub_B52A54(FlashingIconManager_FlashIconContents_TypeInfo);
      v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)v11;
      if ( extraCycleTime > 0.0 )
      {
        v14 = icon;
        v13 = extraCycleTime;
LABEL_13:
        FlashingIconManager_FlashIconContents___ctor(v11, v14, v13, 0LL);
        if ( !klass )
          sub_B52A5C(v15, v16);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass,
          v12,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
        return;
      }
      v13 = 1.0;
    }
    v14 = icon;
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

  if ( (byte_42AE9E3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
    byte_42AE9E3 = 1;
  }
  klass = this[1].klass;
  LODWORD(this->fields.flashIconList) = 0;
  if ( !klass )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
}


void __fastcall FlashingIconManager__RemoveIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  __int64 v10; // x1
  FlashingIconManager_c *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AE9E5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE9E5 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
    if ( !klass )
      sub_B52A5C(0LL, v5);
    if ( klass->fields._size )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v12,
        klass,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v12,
               (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v7 )
          break;
        current = v12.fields.current;
        if ( !v12.fields.current )
          sub_B52A5C(v7, v8);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v12.fields.current->klass->vtable[0].method)(
                v12.fields.current,
                icon,
                v12.fields.current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v11 = this[1].klass;
          if ( !v11 )
            sub_B52A5C(0LL, v10);
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v11,
            (WarBoardManager_TaskList_o *)current,
            (const MethodInfo_2FF2FB0 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v12,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void __fastcall FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  FlashingIconManager_c *klass; // x8
  float v4; // s8
  FlashingIconManager_c *updated; // x0
  const MethodInfo *v6; // x1
  float deltaTime; // s0
  FlashingIconManager_c *v8; // x23
  int32_t v9; // w20
  __int64 v10; // x21
  __int64 v11; // x23
  float v12; // s9
  float v13; // s0

  if ( (byte_42AE9E6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__);
    byte_42AE9E6 = 1;
  }
  klass = this[1].klass;
  if ( klass && LODWORD(klass->_1.namespaze) )
  {
    v4 = *(float *)&this->fields.flashIconList;
    deltaTime = RealTime__get_deltaTime(0LL);
    v8 = this[1].klass;
    *(float *)&this->fields.flashIconList = v4 + deltaTime;
    if ( !v8 )
      goto LABEL_19;
    v9 = LODWORD(v8->_1.namespaze) - 1;
    if ( v9 >= 0 )
    {
      v10 = 8LL * v9 + 32;
      do
      {
        if ( LODWORD(v8->_1.namespaze) <= v9 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v11 = *(_QWORD *)&v8->_1.name[v10];
        if ( !v11 )
          break;
        v12 = *(float *)(v11 + 16);
        v13 = fmodf(*(float *)&this->fields.flashIconList, v12 + v12);
        updated = *(FlashingIconManager_c **)(v11 + 24);
        if ( !updated )
          break;
        if ( v13 > v12 )
          v13 = (float)(v12 + v12) - v13;
        updated = (FlashingIconManager_c *)FlashingIconComponent__UpdateIcon(
                                             (FlashingIconComponent_o *)updated,
                                             v13 / v12,
                                             v6);
        if ( ((unsigned __int8)updated & 1) == 0 )
        {
          updated = this[1].klass;
          if ( !updated )
            break;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)updated,
            v9,
            (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v9 < 0 )
          return;
        v8 = this[1].klass;
        v10 -= 8LL;
      }
      while ( v8 );
LABEL_19:
      sub_B52A5C(updated, v6);
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
  sub_B52920(v6);
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
  sub_B52920(&this->fields._icon_k__BackingField);
}