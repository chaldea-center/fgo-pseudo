void __fastcall TweenSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4221FB5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UITweener___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_List_UITweener__TypeInfo, v3);
    sub_B0D8A4(&TweenSynchronize_TypeInfo, v4);
    byte_4221FB5 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_UITweener__TypeInfo,
                                                                                                 v1,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UITweener___ctor__);
  static_fields = (BattleServantConfConponent_o *)TweenSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B0D840(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4221FB2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITweener___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UITweener__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UITweener__Contains__, v4);
    sub_B0D8A4(&TweenSynchronize_TypeInfo, v5);
    byte_4221FB2 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  p_tweener = &this->fields.tweener;
  this->fields.tweener = (struct UITweener_o *)Component_WebViewObject;
  sub_B0D840(
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
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_UITweener__Contains__) )
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
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v16->static_fields->tweenerList;
  if ( !tweenerList )
LABEL_13:
    sub_B0D97C(tweenerList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tweenerList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_tweener,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UITweener__Add__);
}


void __fastcall TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TweenSynchronize_c *v4; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *tweenerList; // x0

  if ( (byte_4221FB3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UITweener__Remove__, method);
    sub_B0D8A4(&TweenSynchronize_TypeInfo, v3);
    byte_4221FB3 = 1;
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
    sub_B0D97C(0LL);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    tweenerList,
    (WarBoardManager_TaskList_o *)this->fields.tweener,
    (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_UITweener__Remove__);
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
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *tweener; // x21
  _BOOL8 v14; // x0
  struct UITweener_o *v15; // x8
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4221FB4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&TweenSynchronize_TypeInfo, v7);
    byte_4221FB4 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v8 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v8 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v8->static_fields->tweenerList;
  if ( !tweenerList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    tweenerList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v10 )
      break;
    current = v17.fields.current;
    if ( !v17.fields.current )
      sub_B0D97C(v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17.fields.current, 0LL);
    if ( !gameObject )
      sub_B0D97C(0LL);
    if ( UnityEngine_GameObject__get_active(gameObject, 0LL) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0LL);
      if ( v14 )
      {
        v15 = this->fields.tweener;
        if ( !v15 )
          sub_B0D97C(v14);
        if ( v15->fields.duration == *(float *)&current[3].klass )
        {
          ((void (__fastcall *)(struct UITweener_o *, Il2CppObject *, void *))v15->klass->vtable._8_SynchronizeTween.method)(
            this->fields.tweener,
            current,
            v15->klass[1]._1.image);
          break;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}