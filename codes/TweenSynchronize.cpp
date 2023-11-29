void __fastcall TweenSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4106CCD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UITweener___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_UITweener__TypeInfo, v5);
    sub_B16FFC(&TweenSynchronize_TypeInfo, v6);
    byte_4106CCD = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_UITweener__TypeInfo,
                                                                                                 v1,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UITweener___ctor__);
  static_fields = (BattleServantConfConponent_o *)TweenSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
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
  TweenSynchronize_c *v14; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *tweenerList; // x0
  TweenSynchronize_c *v16; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x0

  if ( (byte_4106CCA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITweener___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UITweener__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UITweener__Contains__, v4);
    sub_B16FFC(&TweenSynchronize_TypeInfo, v5);
    byte_4106CCA = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  p_tweener = &this->fields.tweener;
  this->fields.tweener = (struct UITweener_o *)Component_WebViewObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tweener,
    (System_Int32_array **)Component_WebViewObject,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v14 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v14->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         tweenerList,
         (WarBoardManager_TaskList_o *)*p_tweener,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  v16 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v16 = TweenSynchronize_TypeInfo;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v16->static_fields->tweenerList;
  if ( !v17 )
LABEL_13:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v17,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_tweener,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UITweener__Add__);
}


void __fastcall TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TweenSynchronize_c *v4; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *tweenerList; // x0

  if ( (byte_4106CCB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UITweener__Remove__, method);
    sub_B16FFC(&TweenSynchronize_TypeInfo, v3);
    byte_4106CCB = 1;
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
    sub_B170D4();
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    tweenerList,
    (WarBoardManager_TaskList_o *)this->fields.tweener,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_UITweener__Remove__);
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
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *tweener; // x21
  struct UITweener_o *v13; // x8
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4106CCC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&TweenSynchronize_TypeInfo, v7);
    byte_4106CCC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v8 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v8 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8->static_fields->tweenerList;
  if ( !tweenerList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    tweenerList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__) )
  {
    current = v15.fields.current;
    if ( !v15.fields.current )
      sub_B170D4();
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15.fields.current, 0LL);
    if ( !gameObject )
      sub_B170D4();
    if ( UnityEngine_GameObject__get_active(gameObject, 0LL) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0LL) )
      {
        v13 = this->fields.tweener;
        if ( !v13 )
          sub_B170D4();
        if ( v13->fields.duration == *(float *)&current[3].klass )
        {
          ((void (__fastcall *)(struct UITweener_o *, Il2CppObject *, void *))v13->klass->vtable._8_SynchronizeTween.method)(
            this->fields.tweener,
            current,
            v13->klass[1]._1.image);
          break;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}