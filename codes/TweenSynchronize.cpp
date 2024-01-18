void __fastcall TweenSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4194AAB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UITweener___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_UITweener__TypeInfo, v2);
    sub_B2C35C(&TweenSynchronize_TypeInfo, v3);
    byte_4194AAB = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UITweener__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UITweener___ctor__);
  static_fields = (BattleServantConfConponent_o *)TweenSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B2C2F8(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall TweenSynchronize___ctor(TweenSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TweenSynchronize__Awake(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewObject_o *Component_WebViewObject; // x0
  struct UITweener_o **p_tweener; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  TweenSynchronize_c *v15; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *tweenerList; // x0
  TweenSynchronize_c *v17; // x0

  if ( (byte_4194AA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UITweener___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UITweener__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UITweener__Contains__, v4);
    sub_B2C35C(&TweenSynchronize_TypeInfo, v5);
    byte_4194AA8 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  p_tweener = &this->fields.tweener;
  this->fields.tweener = (struct UITweener_o *)Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tweener,
    (System_Int32_array **)Component_WebViewObject,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v15 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v15 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v15->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         tweenerList,
         (WarBoardManager_TaskList_o *)*p_tweener,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  v17 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v17 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v17->static_fields->tweenerList;
  if ( !tweenerList )
LABEL_13:
    sub_B2C434(tweenerList, v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tweenerList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_tweener,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UITweener__Add__);
}


void __fastcall TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TweenSynchronize_c *v4; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *tweenerList; // x0

  if ( (byte_4194AA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UITweener__Remove__, method);
    sub_B2C35C(&TweenSynchronize_TypeInfo, v3);
    byte_4194AA9 = 1;
  }
  v4 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v4 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v4->static_fields->tweenerList;
  if ( !tweenerList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    tweenerList,
    (WarBoardManager_TaskList_o *)this->fields.tweener,
    (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_UITweener__Remove__);
}


void __fastcall TweenSynchronize__synchronize(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TweenSynchronize_c *v8; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *tweenerList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *tweener; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct UITweener_o *v18; // x8
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4194AAA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&TweenSynchronize_TypeInfo, v7);
    byte_4194AAA = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v8 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v8 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8->static_fields->tweenerList;
  if ( !tweenerList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    tweenerList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v10 )
      break;
    current = v20.fields.current;
    if ( !v20.fields.current )
      sub_B2C434(v10, v11);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20.fields.current, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v14);
    if ( UnityEngine_GameObject__get_active(gameObject, 0LL) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0LL);
      if ( v16 )
      {
        v18 = this->fields.tweener;
        if ( !v18 )
          sub_B2C434(v16, v17);
        if ( v18->fields.duration == *(float *)&current[3].klass )
        {
          ((void (__fastcall *)(struct UITweener_o *, Il2CppObject *, void *))v18->klass->vtable._8_SynchronizeTween.method)(
            this->fields.tweener,
            current,
            v18->klass[1]._1.image);
          break;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}