void __fastcall TweenSynchronize___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4398813 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UITweener___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UITweener__TypeInfo);
    sub_B775C4(&TweenSynchronize_TypeInfo);
    byte_4398813 = 1;
  }
  v1 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UITweener__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v1,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UITweener___ctor__);
  static_fields = (BattleServantConfConponent_o *)TweenSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall TweenSynchronize___ctor(TweenSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TweenSynchronize__Awake(TweenSynchronize_o *this, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  struct UITweener_o **p_tweener; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  TweenSynchronize_c *v12; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *tweenerList; // x0
  TweenSynchronize_c *v14; // x0

  if ( (byte_4398810 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UITweener___);
    sub_B775C4(&Method_System_Collections_Generic_List_UITweener__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UITweener__Contains__);
    sub_B775C4(&TweenSynchronize_TypeInfo);
    byte_4398810 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  p_tweener = &this->fields.tweener;
  this->fields.tweener = (struct UITweener_o *)Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tweener,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v12 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         tweenerList,
         (WarBoardManager_TaskList_o *)*p_tweener,
         (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  v14 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v14 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v14->static_fields->tweenerList;
  if ( !tweenerList )
LABEL_13:
    sub_B7769C(tweenerList, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tweenerList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_tweener,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UITweener__Add__);
}


void __fastcall TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  TweenSynchronize_c *v3; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *tweenerList; // x0

  if ( (byte_4398811 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UITweener__Remove__);
    sub_B775C4(&TweenSynchronize_TypeInfo);
    byte_4398811 = 1;
  }
  v3 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v3 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v3->static_fields->tweenerList;
  if ( !tweenerList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    tweenerList,
    (WarBoardManager_TaskList_o *)this->fields.tweener,
    (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_UITweener__Remove__);
}


void __fastcall TweenSynchronize__synchronize(TweenSynchronize_o *this, const MethodInfo *method)
{
  TweenSynchronize_c *v3; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *tweenerList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *tweener; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  struct UITweener_o *v13; // x8
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4398812 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TweenSynchronize_TypeInfo);
    byte_4398812 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v3 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v3 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v3->static_fields->tweenerList;
  if ( !tweenerList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    tweenerList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v15,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v5 )
      break;
    current = v15.fields.current;
    if ( !v15.fields.current )
      sub_B7769C(v5, v6);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15.fields.current, 0LL);
    if ( !gameObject )
      sub_B7769C(0LL, v9);
    if ( UnityEngine_GameObject__get_active(gameObject, 0LL) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0LL);
      if ( v11 )
      {
        v13 = this->fields.tweener;
        if ( !v13 )
          sub_B7769C(v11, v12);
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
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}