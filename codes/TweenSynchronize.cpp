void __fastcall TweenSynchronize___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B195DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UITweener___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UITweener__TypeInfo, v4, v5);
    sub_1BCA7E0(&TweenSynchronize_TypeInfo, v6, v7);
    byte_4B195DA = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_UITweener__TypeInfo,
                                                      v1,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UITweener___ctor__);
  TweenSynchronize_TypeInfo->static_fields->tweenerList = (struct System_Collections_Generic_List_UITweener__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TweenSynchronize_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall TweenSynchronize___ctor(TweenSynchronize_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TweenSynchronize__Awake(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x0
  struct UITweener_o **p_tweener; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *v18; // x1
  TweenSynchronize_c *v19; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  TweenSynchronize_c *v27; // x0
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8

  if ( (byte_4B195D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITweener___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UITweener__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UITweener__Contains__, v6, v7);
    sub_1BCA7E0(&TweenSynchronize_TypeInfo, v8, v9);
    byte_4B195D7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITweener___);
  this->fields.tweener = (struct UITweener_o *)Component_object;
  p_tweener = &this->fields.tweener;
  sub_1BCA784((PartyOrganizationUtility_o *)p_tweener, (int64_t)Component_object, v12, v13, v14, v15, v16, v17);
  v19 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo, v18);
    v19 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v19->static_fields->tweenerList;
  if ( !tweenerList )
    goto LABEL_14;
  if ( System_Collections_Generic_List_object___Contains(
         tweenerList,
         (Il2CppObject *)*p_tweener,
         (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_UITweener__Contains__) )
  {
    return;
  }
  v27 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo, v18);
    v27 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v27->static_fields->tweenerList;
  if ( !tweenerList
    || (v18 = (Il2CppObject *)*p_tweener,
        items = tweenerList->fields._items,
        v29 = Method_System_Collections_Generic_List_UITweener__Add__,
        ++tweenerList->fields._version,
        !items) )
  {
LABEL_14:
    sub_1BCAA3C(tweenerList, v18);
  }
  size = tweenerList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      tweenerList,
      v18,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    tweenerList->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v18;
    sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v18, v21, v22, v23, v24, v25, v26);
  }
}


void __fastcall TweenSynchronize__OnDestroy(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TweenSynchronize_c *v6; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0

  if ( (byte_4B195D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UITweener__Remove__, method, v2);
    sub_1BCA7E0(&TweenSynchronize_TypeInfo, v4, v5);
    byte_4B195D8 = 1;
  }
  v6 = TweenSynchronize_TypeInfo;
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo, method);
    v6 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v6->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___Remove(
    tweenerList,
    (Il2CppObject *)this->fields.tweener,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_UITweener__Remove__);
}


void __fastcall TweenSynchronize__synchronize(TweenSynchronize_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  TweenSynchronize_c *v14; // x0
  System_Collections_Generic_List_object__o *tweenerList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_Object_o *tweener; // x21
  _BOOL8 v23; // x0
  __int64 v24; // x1
  struct UITweener_o *v25; // x8
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B195D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UITweener__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UITweener__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&TweenSynchronize_TypeInfo, v12, v13);
    byte_4B195D9 = 1;
  }
  v14 = TweenSynchronize_TypeInfo;
  memset(&v27, 0, sizeof(v27));
  if ( !TweenSynchronize_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TweenSynchronize_TypeInfo, method);
    v14 = TweenSynchronize_TypeInfo;
  }
  tweenerList = (System_Collections_Generic_List_object__o *)v14->static_fields->tweenerList;
  if ( !tweenerList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    tweenerList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UITweener__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UITweener__MoveNext__);
    if ( !v16 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1BCAA3C(v16, v17);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27.fields._current, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v20);
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
    {
      tweener = (UnityEngine_Object_o *)this->fields.tweener;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      v23 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, tweener, 0LL);
      if ( v23 )
      {
        v25 = this->fields.tweener;
        if ( !v25 )
          sub_1BCAA3C(v23, v24);
        if ( v25->fields.duration == *(float *)&current[3].monitor )
        {
          ((void (__fastcall *)(struct UITweener_o *, Il2CppObject *, void *))v25->klass->vtable._8_SynchronizeTween.method)(
            this->fields.tweener,
            current,
            v25->klass[1]._1.image);
          break;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UITweener__Dispose__);
}