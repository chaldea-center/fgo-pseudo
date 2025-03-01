void __fastcall TweenSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C00CCE & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_UITweener___ctor__, v1);
    sub_1C2E12C(&System_Collections_Generic_List_UITweener__TypeInfo, v2);
    sub_1C2E12C(&TweenSynchronize_TypeInfo, v3);
    byte_4C00CCE = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_UITweener__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_UITweener___ctor__);
  TweenSynchronize_TypeInfo->static_fields->tweenerList = (struct System_Collections_Generic_List_UITweener__o *)v4;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)TweenSynchronize_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  Il2CppObject *Component_object; // x0
  struct UITweener_o **p_tweener; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *v14; // x1
  TweenSynchronize_c *v15; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  TweenSynchronize_c *v23; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8

  if ( (byte_4C00CCB & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UITweener___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UITweener__Add__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UITweener__Contains__, v4);
    sub_1C2E12C(&TweenSynchronize_TypeInfo, v5);
    byte_4C00CCB = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  this->fields.tweener = (struct UITweener_o *)Component_object;
  p_tweener = &this->fields.tweener;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_tweener, (int64_t)Component_object, v8, v9, v10, v11, v12, v13);
  v15 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v15 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v15->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Contains(
         tweenerList,
         (Il2CppObject *)*p_tweener,
         (const MethodInfo_366BC3C *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  v23 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v23 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v23->static_fields->tweenerList;
  if ( !tweenerList
    || (v14 = (Il2CppObject *)*p_tweener,
        items = tweenerList->fields._items,
        v25 = Method_System_Collections_Generic_List_UITweener__Add__,
        ++tweenerList->fields._version,
        !items) )
  {
LABEL_14:
    sub_1C2E388(tweenerList, v14);
  }
  size = tweenerList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenerList,
      v14,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    tweenerList->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v14;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v14, v17, v18, v19, v20, v21, v22);
  }
}


void __fastcall TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TweenSynchronize_c *v4; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0

  if ( (byte_4C00CCC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_UITweener__Remove__, method);
    sub_1C2E12C(&TweenSynchronize_TypeInfo, v3);
    byte_4C00CCC = 1;
  }
  v4 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v4 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v4->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1C2E388(0LL, method);
  System_Collections_Generic_List_object___Remove(
    tweenerList,
    (Il2CppObject *)this->fields.tweener,
    (const MethodInfo_366CDD4 *)Method_System_Collections_Generic_List_UITweener__Remove__);
}


void __fastcall TweenSynchronize__synchronize(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TweenSynchronize_c *v8; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *tweener; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct UITweener_o *v18; // x8
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C00CCD & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&TweenSynchronize_TypeInfo, v7);
    byte_4C00CCD = 1;
  }
  v8 = TweenSynchronize_TypeInfo;
  memset(&v20, 0, sizeof(v20));
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo);
    v8 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v8->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1C2E388(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    tweenerList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v10 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1C2E388(v10, v11);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20.fields._current, 0LL);
    if ( !gameObject )
      sub_1C2E388(0LL, v14);
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0LL);
      if ( v16 )
      {
        v18 = this->fields.tweener;
        if ( !v18 )
          sub_1C2E388(v16, v17);
        if ( v18->fields.duration == *(float *)&current[3].monitor )
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
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}