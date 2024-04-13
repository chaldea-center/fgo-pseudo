void __fastcall FlashingIconManager___ctor(FlashingIconManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E69F7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FlashingIconManager___ctor__, v8, v9, v10);
    byte_42E69F7 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_FlashingIconManager_FlashIconContents__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents___ctor__);
  this[1].klass = (FlashingIconManager_c *)v11;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_FlashingIconManager___ctor__);
}


void __fastcall FlashingIconManager__AddIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        bool isFast,
        float extraCycleTime,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  const MethodInfo *v15; // x2
  FlashingIconManager_c *klass; // x20
  FlashingIconManager_FlashIconContents_o *v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  float v19; // s0
  FlashingIconComponent_o *v20; // x1
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_42E69F4 & 1) == 0 )
  {
    sub_B5D5C4(&FlashingIconManager_FlashIconContents_TypeInfo, (_DWORD)icon, isFast, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E69F4 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    FlashingIconManager__RemoveIcon(this, icon, v15);
    if ( isFast )
    {
      klass = this[1].klass;
      v17 = (FlashingIconManager_FlashIconContents_o *)sub_B5D694(FlashingIconManager_FlashIconContents_TypeInfo);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v17;
      v19 = 0.5;
    }
    else
    {
      klass = this[1].klass;
      v17 = (FlashingIconManager_FlashIconContents_o *)sub_B5D694(FlashingIconManager_FlashIconContents_TypeInfo);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v17;
      if ( extraCycleTime > 0.0 )
      {
        v20 = icon;
        v19 = extraCycleTime;
LABEL_13:
        FlashingIconManager_FlashIconContents___ctor(v17, v20, v19, 0LL);
        if ( !klass )
          sub_B5D69C(v21, v22);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass,
          v18,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Add__);
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
  int v2; // w2
  __int64 v3; // x3
  FlashingIconManager_c *klass; // x0

  if ( (byte_42E69F3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E69F3 = 1;
  }
  klass = this[1].klass;
  LODWORD(this->fields.flashIconList) = 0;
  if ( !klass )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)klass,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Clear__);
}


void __fastcall FlashingIconManager__RemoveIcon(
        FlashingIconManager_o *this,
        FlashingIconComponent_o *icon,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x21
  __int64 v29; // x1
  FlashingIconManager_c *v30; // x0
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E69F5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__,
      (_DWORD)icon,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    byte_42E69F5 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)icon, 0LL, 0LL) )
  {
    klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this[1].klass;
    if ( !klass )
      sub_B5D69C(0LL, v24);
    if ( klass->fields._size )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v31,
        klass,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__GetEnumerator__);
      while ( 1 )
      {
        v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v31,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__MoveNext__);
        if ( !v26 )
          break;
        current = v31.fields.current;
        if ( !v31.fields.current )
          sub_B5D69C(v26, v27);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, FlashingIconComponent_o *, Il2CppMethodPointer))v31.fields.current->klass->vtable[0].method)(
                v31.fields.current,
                icon,
                v31.fields.current->klass->vtable[1].methodPtr) & 1) != 0 )
        {
          v30 = this[1].klass;
          if ( !v30 )
            sub_B5D69C(0LL, v29);
          System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v30,
            (WarBoardManager_TaskList_o *)current,
            (const MethodInfo_305896C *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__Remove__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v31,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_FlashingIconManager_FlashIconContents__Dispose__);
    }
  }
}


void __fastcall FlashingIconManager__Update(FlashingIconManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FlashingIconManager_c *klass; // x8
  float v12; // s8
  FlashingIconManager_c *updated; // x0
  const MethodInfo *v14; // x1
  float deltaTime; // s0
  FlashingIconManager_c *v16; // x23
  int32_t v17; // w20
  __int64 v18; // x21
  __int64 v19; // x23
  float v20; // s9
  float v21; // s0

  if ( (byte_42E69F6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__get_Item__, v8, v9, v10);
    byte_42E69F6 = 1;
  }
  klass = this[1].klass;
  if ( klass && LODWORD(klass->_1.namespaze) )
  {
    v12 = *(float *)&this->fields.flashIconList;
    deltaTime = RealTime__get_deltaTime(0LL);
    v16 = this[1].klass;
    *(float *)&this->fields.flashIconList = v12 + deltaTime;
    if ( !v16 )
      goto LABEL_19;
    v17 = LODWORD(v16->_1.namespaze) - 1;
    if ( v17 >= 0 )
    {
      v18 = 8LL * v17 + 32;
      do
      {
        if ( LODWORD(v16->_1.namespaze) <= v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v19 = *(_QWORD *)&v16->_1.name[v18];
        if ( !v19 )
          break;
        v20 = *(float *)(v19 + 16);
        v21 = fmodf(*(float *)&this->fields.flashIconList, v20 + v20);
        updated = *(FlashingIconManager_c **)(v19 + 24);
        if ( !updated )
          break;
        if ( v21 > v20 )
          v21 = (float)(v20 + v20) - v21;
        updated = (FlashingIconManager_c *)FlashingIconComponent__UpdateIcon(
                                             (FlashingIconComponent_o *)updated,
                                             v21 / v20,
                                             v14);
        if ( ((unsigned __int8)updated & 1) == 0 )
        {
          updated = this[1].klass;
          if ( !updated )
            break;
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)updated,
            v17,
            (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_FlashingIconManager_FlashIconContents__RemoveAt__);
        }
        if ( --v17 < 0 )
          return;
        v16 = this[1].klass;
        v18 -= 8LL;
      }
      while ( v16 );
LABEL_19:
      sub_B5D69C(updated, v14);
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
  sub_B5D560(v6);
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
  sub_B5D560(&this->fields._icon_k__BackingField);
}