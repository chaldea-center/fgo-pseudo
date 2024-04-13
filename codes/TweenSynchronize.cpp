void __fastcall TweenSynchronize___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42F5BAB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UITweener___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UITweener__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TweenSynchronize_TypeInfo, v7, v8, v9);
    byte_42F5BAB = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UITweener__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UITweener___ctor__);
  static_fields = (BattleServantConfConponent_o *)TweenSynchronize_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall TweenSynchronize___ctor(TweenSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TweenSynchronize__Awake(TweenSynchronize_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewObject_o *Component_WebViewObject; // x0
  struct UITweener_o **p_tweener; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  TweenSynchronize_c *v23; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *tweenerList; // x0
  TweenSynchronize_c *v25; // x0

  if ( (byte_42F5BA8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UITweener___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UITweener__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UITweener__Contains__, v8, v9, v10);
    sub_B5D5C4(&TweenSynchronize_TypeInfo, v11, v12, v13);
    byte_42F5BA8 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  p_tweener = &this->fields.tweener;
  this->fields.tweener = (struct UITweener_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tweener,
    (System_Int32_array **)Component_WebViewObject,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v23 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v23 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_13;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         tweenerList,
         (WarBoardManager_TaskList_o *)*p_tweener,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  v25 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v25 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v25->static_fields->tweenerList;
  if ( !tweenerList )
LABEL_13:
    sub_B5D69C(tweenerList, v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)tweenerList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)*p_tweener,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UITweener__Add__);
}


void __fastcall TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TweenSynchronize_c *v8; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *tweenerList; // x0

  if ( (byte_42F5BA9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UITweener__Remove__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TweenSynchronize_TypeInfo, v5, v6, v7);
    byte_42F5BA9 = 1;
  }
  v8 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v8 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v8->static_fields->tweenerList;
  if ( !tweenerList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    tweenerList,
    (WarBoardManager_TaskList_o *)this->fields.tweener,
    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_UITweener__Remove__);
}


void __fastcall TweenSynchronize__synchronize(TweenSynchronize_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  TweenSynchronize_c *v20; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *tweenerList; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *tweener; // x21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct UITweener_o *v30; // x8
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42F5BAA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TweenSynchronize_TypeInfo, v17, v18, v19);
    byte_42F5BAA = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v20 = TweenSynchronize_TypeInfo;
  if ( (BYTE3(TweenSynchronize_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v20 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v20->static_fields->tweenerList;
  if ( !tweenerList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    tweenerList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v32 = v31;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v22 )
      break;
    current = v32.fields.current;
    if ( !v32.fields.current )
      sub_B5D69C(v22, v23);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v32.fields.current, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v26);
    if ( UnityEngine_GameObject__get_active(gameObject, 0LL) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0LL);
      if ( v28 )
      {
        v30 = this->fields.tweener;
        if ( !v30 )
          sub_B5D69C(v28, v29);
        if ( v30->fields.duration == *(float *)&current[3].klass )
        {
          ((void (__fastcall *)(struct UITweener_o *, Il2CppObject *, void *))v30->klass->vtable._8_SynchronizeTween.method)(
            this->fields.tweener,
            current,
            v30->klass[1]._1.image);
          break;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}