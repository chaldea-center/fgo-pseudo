void EventDelegate___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4CBAA60 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&StringLiteral_6200/*"EventDelegate"*/);
    byte_4CBAA60 = 1;
  }
  if ( !StringLiteral_6200/*"EventDelegate"*/ )
    sub_1C6BC60(0, v1);
  EventDelegate_TypeInfo->static_fields->s_Hash = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)StringLiteral_6200/*"EventDelegate"*/
                                                                                            + 344LL))(
                                                    StringLiteral_6200/*"EventDelegate"*/,
                                                    *(_QWORD *)(*(_QWORD *)StringLiteral_6200/*"EventDelegate"*/ + 352LL));
}


void EventDelegate___ctor(EventDelegate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventDelegate___ctor_49576072(EventDelegate_o *this, EventDelegate_Callback_o *call, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  System_Object___ctor((Il2CppObject *)this, 0);
  EventDelegate__Set(this, call, v5);
}


void EventDelegate___ctor_49576560(
        EventDelegate_o *this,
        UnityEngine_MonoBehaviour_o *target,
        System_String_o *methodName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  EventDelegate__Set_49576612(this, target, methodName, v7);
}


EventDelegate_o *EventDelegate__Add(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_Callback_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CBAA5A & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    byte_4CBAA5A = 1;
  }
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  return EventDelegate__Add_49580732(list, callback, 0, v3);
}


EventDelegate_o *EventDelegate__Add_49580732(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_Callback_o *callback,
        bool oneShot,
        const MethodInfo *method)
{
  int32_t size; // w24
  int32_t v8; // w23
  Il2CppObject *Item; // x0
  __int64 v10; // x22
  const MethodInfo *v11; // x2
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct EventDelegate_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4CBAA5B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_1C6BA08(&StringLiteral_2454/*"Attempting to add a callback to a list that's null"*/);
    byte_4CBAA5B = 1;
  }
  if ( list )
  {
    size = list->fields._size;
    if ( size < 1 )
    {
LABEL_9:
      v10 = sub_1C6BC54(EventDelegate_TypeInfo);
      System_Object___ctor((Il2CppObject *)v10, 0);
      EventDelegate__Set((EventDelegate_o *)v10, callback, v11);
      if ( !v10
        || (*(_BYTE *)(v10 + 40) = oneShot,
            items = list->fields._items,
            v17 = Method_System_Collections_Generic_List_EventDelegate__Add__,
            ++list->fields._version,
            !items) )
      {
        sub_1C6BC60(v12, v13);
      }
      v18 = list->fields._size;
      if ( (unsigned int)v18 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)list,
          (Il2CppObject *)v10,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + v18;
        list->fields._size = v18 + 1;
        v19[4] = (Il2CppClass *)v10;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), v10, v14, v15);
      }
    }
    else
    {
      v8 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)list,
                 v8,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
        if ( Item )
        {
          v10 = (__int64)Item;
          if ( (((__int64 (__fastcall *)(Il2CppObject *, EventDelegate_Callback_o *, const MethodInfo *))Item->klass->vtable[0].methodPtr)(
                  Item,
                  callback,
                  Item->klass->vtable[0].method)
              & 1) != 0 )
            break;
        }
        if ( size == ++v8 )
          goto LABEL_9;
      }
    }
  }
  else
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_2454/*"Attempting to add a callback to a list that's null"*/, 0);
    return 0;
  }
  return (EventDelegate_o *)v10;
}


void EventDelegate__Add_49581168(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *ev,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_EventDelegate__o *v5; // x20
  _BOOL4 oneShot; // w21

  v5 = list;
  if ( (byte_4CBAA5C & 1) == 0 )
  {
    list = (System_Collections_Generic_List_EventDelegate__o *)sub_1C6BA08(&EventDelegate_TypeInfo);
    byte_4CBAA5C = 1;
  }
  if ( !ev )
    sub_1C6BC60(list, ev);
  oneShot = ev->fields.oneShot;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add_49581280(v5, ev, oneShot, v3);
}


void EventDelegate__Add_49581280(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *ev,
        bool oneShot,
        const MethodInfo *method)
{
  EventDelegate_o *v5; // x20
  System_Collections_Generic_List_EventDelegate__o *v6; // x19
  UnityEngine_Object_o *mTarget; // x22
  EventDelegate_Callback_o *mCachedCallback; // x20
  int size; // w23
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  UnityEngine_MonoBehaviour_o *v12; // x23
  System_String_o *mMethodName; // x24
  __int64 v14; // x22
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct EventDelegate_Parameter_array *mParameters; // x8
  __int64 v19; // x0
  unsigned int **v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct EventDelegate_Parameter_array *v23; // x8
  unsigned __int64 v24; // x24
  __int64 v25; // x25
  unsigned __int64 max_length_low; // x9
  unsigned int *v27; // x26
  EventDelegate_Parameter_o *v28; // x23
  struct EventDelegate_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x0

  v5 = ev;
  v6 = list;
  if ( (byte_4CBAA5D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&EventDelegate_Parameter___TypeInfo);
    list = (System_Collections_Generic_List_EventDelegate__o *)sub_1C6BA08(&StringLiteral_2454/*"Attempting to add a callback to a list that's null"*/);
    byte_4CBAA5D = 1;
  }
  if ( !v5 )
    goto LABEL_30;
  if ( v5->fields.mRawDelegate )
    goto LABEL_9;
  mTarget = (UnityEngine_Object_o *)v5->fields.mTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTarget, 0, 0) || System_String__IsNullOrEmpty(v5->fields.mMethodName, 0) )
  {
LABEL_9:
    mCachedCallback = v5->fields.mCachedCallback;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add_49580732(v6, mCachedCallback, oneShot, method);
    return;
  }
  if ( !v6 )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_2454/*"Attempting to add a callback to a list that's null"*/, 0);
    return;
  }
  size = v6->fields._size;
  if ( size < 1 )
  {
LABEL_18:
    v12 = v5->fields.mTarget;
    mMethodName = v5->fields.mMethodName;
    v14 = sub_1C6BC54(EventDelegate_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    EventDelegate__Set_49576612((EventDelegate_o *)v14, v12, mMethodName, v15);
    if ( !v14 )
      goto LABEL_30;
    *(_BYTE *)(v14 + 40) = oneShot;
    mParameters = v5->fields.mParameters;
    if ( mParameters )
    {
      ev = (EventDelegate_o *)mParameters->max_length;
      if ( ev )
      {
        v19 = sub_1C6BAB0(EventDelegate_Parameter___TypeInfo, ev);
        *(_QWORD *)(v14 + 32) = v19;
        v20 = (unsigned int **)(v14 + 32);
        sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 32), v19, v21, v22);
        v23 = v5->fields.mParameters;
        if ( !v23 )
          goto LABEL_30;
        v24 = 0;
        v25 = 8;
        while ( 1 )
        {
          max_length_low = LODWORD(v23->max_length);
          if ( (__int64)v24 >= (int)max_length_low )
            break;
          if ( v24 >= max_length_low )
            goto LABEL_39;
          v27 = *v20;
          if ( *v20 )
          {
            v28 = v23->m_Items[v24];
            if ( v28 )
            {
              list = (System_Collections_Generic_List_EventDelegate__o *)sub_1C6BB44(
                                                                           v28,
                                                                           *(_QWORD *)(*(_QWORD *)v27 + 64LL));
              if ( !list )
              {
                v33 = sub_1C6BC84(0);
                sub_1C6BB30(v33, 0);
              }
            }
            if ( v24 >= v27[6] )
LABEL_39:
              sub_1C6BC68(list);
            *(_QWORD *)&v27[v25] = v28;
            sub_1C6B9AC((CGThumbnailListItem_o *)&v27[v25], (int32_t)v28, v16, v17);
            v23 = v5->fields.mParameters;
            ++v24;
            v25 += 2;
            if ( v23 )
              continue;
          }
          goto LABEL_30;
        }
      }
    }
    items = v6->fields._items;
    v30 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++v6->fields._version;
    if ( items )
    {
      v31 = v6->fields._size;
      if ( (unsigned int)v31 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v6,
          (Il2CppObject *)v14,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + v31;
        v6->fields._size = v31 + 1;
        v32[4] = (Il2CppClass *)v14;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 4), v14, v16, v17);
      }
      return;
    }
LABEL_30:
    sub_1C6BC60(list, ev);
  }
  v10 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)v6,
             v10,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    if ( Item )
    {
      if ( (((__int64 (__fastcall *)(Il2CppObject *, EventDelegate_o *, const MethodInfo *))Item->klass->vtable[0].methodPtr)(
              Item,
              v5,
              Item->klass->vtable[0].method)
          & 1) != 0 )
        break;
    }
    if ( size == ++v10 )
      goto LABEL_18;
  }
}


void EventDelegate__Cache(EventDelegate_o *this, const MethodInfo *method)
{
  _BOOL4 mRawDelegate; // w8
  struct EventDelegate_Callback_o *mCachedCallback; // x8
  struct EventDelegate_Callback_o **p_mCachedCallback; // x20
  Il2CppObject *m_target; // x22
  UnityEngine_Object_o *mTarget; // x21
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v9; // x0
  const MethodInfo *v10; // x1
  EventDelegate_Callback_o *v11; // x21
  System_String_o *MethodName; // x0
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x1
  System_Reflection_MethodInfo_o *v15; // x0
  System_Type_o *Type; // x0
  System_Reflection_MethodInfo_o **p_mMethod; // x21
  System_Type_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Reflection_MethodInfo_o *Method_65592088; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_String_o *mMethodName; // x20
  System_Type_o *v27; // x0
  __int64 v28; // x21
  __int64 v29; // x22
  System_String_o *v30; // x3
  System_Type_o *v31; // x22
  Il2CppType *v32; // x23
  System_RuntimeTypeHandle_o v33; // x0
  System_Type_o *TypeFromHandle; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x1
  struct System_Reflection_ParameterInfo_array *v38; // x0
  __int64 *p_mParameterInfos; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  EventDelegate_c *klass; // x22
  struct EventDelegate_Parameter_array *mParameters; // t1
  __int64 v46; // x8
  System_String_o *v47; // x0
  UnityEngine_Object_o *v48; // x19
  Il2CppObject *v49; // x20
  System_RuntimeTypeHandle_o v50; // x0
  System_Type_o *v51; // x0
  System_Delegate_o *Delegate_65790856; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  EventDelegate_Callback_c *v55; // x1
  EventDelegate_c *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  unsigned __int64 v59; // x23
  __int64 v60; // x24
  __int64 v61; // x25
  EventDelegate_Parameter_o *v62; // x20
  const MethodInfo *v63; // x1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int namespaze; // w23
  unsigned int v67; // w8
  __int64 v68; // x9
  unsigned int v69; // w24
  __int64 v70; // x20
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  __int64 v77; // x0

  if ( (byte_4CBAA53 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_var);
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&UnityEngine_Debug_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&EventDelegate_Parameter___TypeInfo);
    sub_1C6BA08(&EventDelegate_Parameter_TypeInfo);
    sub_1C6BA08(&System_Type_TypeInfo);
    sub_1C6BA08(&void_var);
    sub_1C6BA08(&StringLiteral_550/*"' on "*/);
    sub_1C6BA08(&StringLiteral_279/*" must have a 'void' return type."*/);
    sub_1C6BA08(&StringLiteral_4779/*"Could not find method '"*/);
    sub_1C6BA08(&StringLiteral_981/*"."*/);
    byte_4CBAA53 = 1;
  }
  mRawDelegate = this->fields.mRawDelegate;
  this->fields.mCached = 1;
  if ( mRawDelegate )
    return;
  p_mCachedCallback = &this->fields.mCachedCallback;
  mCachedCallback = this->fields.mCachedCallback;
  if ( !mCachedCallback )
    goto LABEL_18;
  m_target = mCachedCallback->fields.m_target;
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( !m_target )
      goto LABEL_10;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !m_target )
      goto LABEL_10;
  }
  naturalAligment = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment;
  if ( m_target->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
  {
    if ( (UnityEngine_MonoBehaviour_c *)m_target->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MonoBehaviour_TypeInfo )
      v9 = (UnityEngine_Object_o *)m_target;
    else
      v9 = 0;
    goto LABEL_14;
  }
LABEL_10:
  v9 = 0;
LABEL_14:
  if ( UnityEngine_Object__op_Inequality(v9, mTarget, 0) )
    goto LABEL_18;
  v11 = *p_mCachedCallback;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  MethodName = EventDelegate__GetMethodName(v11, v10);
  if ( System_String__op_Inequality(MethodName, this->fields.mMethodName, 0) )
  {
LABEL_18:
    v13 = (UnityEngine_Object_o *)this->fields.mTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v13, 0, 0) || System_String__IsNullOrEmpty(this->fields.mMethodName, 0) )
      return;
    v15 = (System_Reflection_MethodInfo_o *)this->fields.mTarget;
    if ( !v15 )
      goto LABEL_82;
    Type = System_Object__GetType((Il2CppObject *)v15, 0);
    this->fields.mMethod = 0;
    p_mMethod = &this->fields.mMethod;
    v18 = Type;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMethod, 0, v19, v20);
    while ( 1 )
    {
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v21 = System_Type__op_Inequality(v18, 0, 0);
      if ( !v21 )
        break;
      if ( !v18 )
        sub_1C6BC60(v21, v22);
      Method_65592088 = System_Type__GetMethod_65592088(v18, this->fields.mMethodName, 52, 0);
      *p_mMethod = Method_65592088;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMethod, (int32_t)Method_65592088, v24, v25);
      if ( System_Reflection_MethodInfo__op_Inequality(*p_mMethod, 0, 0) )
        break;
      v18 = (System_Type_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))v18->klass->vtable._115_unknown.methodPtr)(
                               v18,
                               v18->klass->vtable._115_unknown.method);
    }
    if ( System_Reflection_MethodInfo__op_Equality(*p_mMethod, 0, 0) )
    {
      v15 = (System_Reflection_MethodInfo_o *)this->fields.mTarget;
      if ( v15 )
      {
        mMethodName = this->fields.mMethodName;
        v27 = System_Object__GetType((Il2CppObject *)v15, 0);
        v28 = StringLiteral_550/*"' on "*/;
        v29 = StringLiteral_4779/*"Could not find method '"*/;
        if ( v27 )
          v30 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))v27->klass->vtable._3_ToString.methodPtr)(
                                     v27,
                                     v27->klass->vtable._3_ToString.method);
        else
          v30 = 0;
        v35 = (System_String_o *)v29;
        v37 = mMethodName;
        v36 = (System_String_o *)v28;
LABEL_53:
        v47 = System_String__Concat_64007060(v35, v37, v36, v30, 0);
        v48 = (UnityEngine_Object_o *)this->fields.mTarget;
        v49 = (Il2CppObject *)v47;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError_71471368(v49, v48, 0);
        return;
      }
      goto LABEL_82;
    }
    v15 = *p_mMethod;
    if ( !*p_mMethod )
      goto LABEL_82;
    v31 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, const MethodInfo *))v15->klass->vtable._40_get_ReturnType.methodPtr)(
                             v15,
                             v15->klass->vtable._40_get_ReturnType.method);
    v32 = void_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v33.fields.value = (intptr_t)v32;
    TypeFromHandle = System_Type__GetTypeFromHandle(v33, 0);
    if ( System_Type__op_Inequality(v31, TypeFromHandle, 0) )
    {
      v15 = (System_Reflection_MethodInfo_o *)this->fields.mTarget;
      if ( v15 )
      {
        v35 = (System_String_o *)System_Object__GetType((Il2CppObject *)v15, 0);
        if ( v35 )
          v35 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))v35->klass->vtable._3_ToString.methodPtr)(
                                     v35,
                                     v35->klass->vtable._3_ToString.method);
        v36 = this->fields.mMethodName;
        v37 = (System_String_o *)StringLiteral_981/*"."*/;
        v30 = (System_String_o *)StringLiteral_279/*" must have a 'void' return type."*/;
        goto LABEL_53;
      }
LABEL_82:
      sub_1C6BC60(v15, v14);
    }
    v15 = *p_mMethod;
    if ( !*p_mMethod )
      goto LABEL_82;
    v38 = (struct System_Reflection_ParameterInfo_array *)((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, const MethodInfo *))v15->klass->vtable._16_unknown.methodPtr)(
                                                            v15,
                                                            v15->klass->vtable._16_unknown.method);
    this->fields.mParameterInfos = v38;
    p_mParameterInfos = (__int64 *)&this->fields.mParameterInfos;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParameterInfos, (int32_t)v38, v40, v41);
    if ( !this->fields.mParameterInfos )
      goto LABEL_82;
    if ( this->fields.mParameterInfos->max_length )
    {
      this->fields.mCachedCallback = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mCachedCallback, 0, v42, v43);
      mParameters = this->fields.mParameters;
      this = (EventDelegate_o *)((char *)this + 32);
      klass = (EventDelegate_c *)mParameters;
      v46 = *(_QWORD *)&this->fields.oneShot;
      if ( mParameters )
      {
        if ( !v46 )
          goto LABEL_82;
        if ( LODWORD(klass->_1.namespaze) == *(_DWORD *)(v46 + 24) )
        {
LABEL_72:
          namespaze = (int)klass->_1.namespaze;
          if ( namespaze < 1 )
            return;
          if ( klass )
          {
            v67 = 0;
            while ( v67 < LODWORD(klass->_1.namespaze) )
            {
              v68 = *p_mParameterInfos;
              if ( !*p_mParameterInfos )
                goto LABEL_82;
              v69 = v67;
              if ( v67 >= *(_DWORD *)(v68 + 24) )
                break;
              v15 = *(System_Reflection_MethodInfo_o **)(v68 + 8LL * (int)v67 + 32);
              if ( v15 )
              {
                v70 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v67);
                v15 = (System_Reflection_MethodInfo_o *)((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, const MethodInfo *))v15->klass->vtable._11_get_Module.methodPtr)(
                                                          v15,
                                                          v15->klass->vtable._11_get_Module.method);
                if ( v70 )
                {
                  *(_QWORD *)(v70 + 40) = v15;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 40), (int32_t)v15, v71, v72);
                  v67 = v69 + 1;
                  if ( namespaze == v69 + 1 )
                    return;
                  klass = this->klass;
                  if ( this->klass )
                    continue;
                }
              }
              goto LABEL_82;
            }
LABEL_85:
            sub_1C6BC68(v15);
          }
          goto LABEL_82;
        }
LABEL_63:
        v56 = (EventDelegate_c *)sub_1C6BAB0(EventDelegate_Parameter___TypeInfo, *(unsigned int *)(v46 + 24));
        this->klass = v56;
        sub_1C6B9AC((CGThumbnailListItem_o *)this, (int32_t)v56, v57, v58);
        klass = this->klass;
        if ( !this->klass )
          goto LABEL_82;
        if ( (int)klass->_1.namespaze >= 1 )
        {
          v59 = 0;
          v60 = (unsigned int)klass->_1.namespaze;
          v61 = 32;
          do
          {
            v62 = (EventDelegate_Parameter_o *)sub_1C6BC54(EventDelegate_Parameter_TypeInfo);
            EventDelegate_Parameter___ctor(v62, v63);
            if ( !klass )
              goto LABEL_82;
            if ( v62 )
            {
              v15 = (System_Reflection_MethodInfo_o *)sub_1C6BB44(v62, *((_QWORD *)klass->_1.image + 8));
              if ( !v15 )
              {
                v77 = sub_1C6BC84(0);
                sub_1C6BB30(v77, 0);
              }
            }
            if ( v59 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_85;
            *(void **)((char *)&klass->_1.image + v61) = v62;
            sub_1C6B9AC((CGThumbnailListItem_o *)((char *)klass + v61), (int32_t)v62, v64, v65);
            klass = this->klass;
            ++v59;
            v61 += 8;
          }
          while ( v60 != v59 );
          if ( !klass )
            goto LABEL_82;
        }
        goto LABEL_72;
      }
LABEL_62:
      if ( !v46 )
        goto LABEL_82;
      goto LABEL_63;
    }
    p_mParameterInfos = (__int64 *)EventDelegate_Callback_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v50.fields.value = (intptr_t)p_mParameterInfos;
    v51 = System_Type__GetTypeFromHandle(v50, 0);
    Delegate_65790856 = System_Delegate__CreateDelegate_65790856(
                          v51,
                          (Il2CppObject *)this->fields.mTarget,
                          this->fields.mMethodName,
                          0);
    if ( Delegate_65790856 )
    {
      v55 = EventDelegate_Callback_TypeInfo;
      if ( (EventDelegate_Callback_c *)Delegate_65790856->klass != EventDelegate_Callback_TypeInfo
        || (*p_mCachedCallback = (struct EventDelegate_Callback_o *)Delegate_65790856,
            (EventDelegate_Callback_c *)Delegate_65790856->klass != v55) )
      {
        sub_1C6BFFC(Delegate_65790856);
        goto LABEL_62;
      }
    }
    else
    {
      *p_mCachedCallback = 0;
    }
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mCachedCallback, (int32_t)Delegate_65790856, v53, v54);
    this->fields.mArgs = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mArgs, 0, v73, v74);
    this->fields.mParameters = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParameters, 0, v75, v76);
  }
}


void EventDelegate__Clear(EventDelegate_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  this->fields.mTarget = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, 0, v2, v3);
  this->fields.mMethodName = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMethodName, 0, v5, v6);
  this->fields.mRawDelegate = 0;
  this->fields.mCachedCallback = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mCachedCallback, 0, v7, v8);
  this->fields.mParameters = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParameters, 0, v9, v10);
  this->fields.mCached = 0;
  this->fields.mMethod = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMethod, 0, v11, v12);
  this->fields.mParameterInfos = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParameterInfos, 0, v13, v14);
  this->fields.mArgs = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mArgs, 0, v15, v16);
}


bool EventDelegate__Equals(EventDelegate_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *mTarget; // x21
  Il2CppClass *v8; // x22
  System_String_o *mMethodName; // x0
  System_String_o *monitor; // x1
  Il2CppClass *v12; // x8
  __int64 v13; // x11
  Il2CppClass *v14; // x21
  UnityEngine_Object_o *v15; // x22
  const MethodInfo *v16; // x1
  struct System_String_o *v17; // x20

  if ( (byte_4CBAA50 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA50 = 1;
  }
  if ( obj )
  {
    klass = obj->klass;
    if ( (EventDelegate_Callback_c *)obj->klass != EventDelegate_Callback_TypeInfo )
    {
      naturalAligment = EventDelegate_TypeInfo->_2.naturalAligment;
      if ( klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (EventDelegate_c *)klass->_2.typeHierarchy[naturalAligment - 1] == EventDelegate_TypeInfo )
      {
        mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
        v8 = obj[1].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(mTarget, (UnityEngine_Object_o *)v8, 0) )
        {
          mMethodName = this->fields.mMethodName;
          monitor = (System_String_o *)obj[1].monitor;
          return System_String__Equals_64002840(mMethodName, monitor, 0);
        }
      }
      return 0;
    }
    if ( (((__int64 (__fastcall *)(Il2CppObject *, struct EventDelegate_Callback_o *, const MethodInfo *))EventDelegate_Callback_TypeInfo->vtable._0_Equals.methodPtr)(
            obj,
            this->fields.mCachedCallback,
            EventDelegate_Callback_TypeInfo->vtable._0_Equals.method)
        & 1) == 0 )
    {
      v12 = obj[2].klass;
      if ( v12
        && (v13 = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment,
            *((unsigned __int8 *)v12->_1.image + 304) >= (unsigned int)v13) )
      {
        if ( *(UnityEngine_MonoBehaviour_c **)(*((_QWORD *)v12->_1.image + 25) + 8 * v13 - 8) == UnityEngine_MonoBehaviour_TypeInfo )
          v14 = obj[2].klass;
        else
          v14 = 0;
      }
      else
      {
        v14 = 0;
      }
      v15 = (UnityEngine_Object_o *)this->fields.mTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v15, (UnityEngine_Object_o *)v14, 0) )
      {
        v17 = this->fields.mMethodName;
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        monitor = EventDelegate__GetMethodName((EventDelegate_Callback_o *)obj, v16);
        mMethodName = v17;
        return System_String__Equals_64002840(mMethodName, monitor, 0);
      }
      return 0;
    }
    return 1;
  }
  else
  {
    return !EventDelegate__get_isValid(this, (const MethodInfo *)obj);
  }
}


bool EventDelegate__Execute(EventDelegate_o *this, const MethodInfo *method)
{
  struct EventDelegate_Callback_o *mCachedCallback; // x8
  __int64 IsOut; // x0
  const MethodInfo *max_length_low; // x1
  struct EventDelegate_Parameter_array *mParameters; // x8
  struct System_Object_array *mArgs; // x9
  struct System_Object_array **p_mArgs; // x20
  struct System_Object_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int max_length; // w22
  unsigned int v14; // w9
  __int64 v15; // x23
  struct System_Object_array *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x21
  Il2CppClass **v20; // x0
  System_Reflection_MethodBase_o *mMethod; // x0
  int v22; // w21
  unsigned int v23; // w22
  struct System_Reflection_ParameterInfo_array *mParameterInfos; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Reflection_ParameterInfo_array *v27; // x8
  struct EventDelegate_Parameter_array *v28; // x8
  struct System_Object_array *v29; // x9
  Il2CppObject *v30; // x1
  struct System_Object_array *v31; // x8
  Il2CppClass **v32; // x0
  __int64 v33; // x0

  if ( (byte_4CBAA54 & 1) == 0 )
  {
    sub_1C6BA08(&object___TypeInfo);
    byte_4CBAA54 = 1;
  }
  if ( !this->fields.mCached )
    EventDelegate__Cache(this, method);
  mCachedCallback = this->fields.mCachedCallback;
  if ( mCachedCallback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))mCachedCallback->fields.invoke_impl)(
      mCachedCallback->fields.method_code,
      mCachedCallback->fields.method);
    return 1;
  }
  IsOut = System_Reflection_MethodInfo__op_Inequality(this->fields.mMethod, 0, 0);
  if ( (IsOut & 1) != 0 )
  {
    mParameters = this->fields.mParameters;
    if ( mParameters && (max_length_low = (const MethodInfo *)LODWORD(mParameters->max_length), (_DWORD)max_length_low) )
    {
      p_mArgs = &this->fields.mArgs;
      mArgs = this->fields.mArgs;
      if ( mArgs && LODWORD(mArgs->max_length) == (_DWORD)max_length_low
        || (v10 = (struct System_Object_array *)sub_1C6BAB0(object___TypeInfo, max_length_low),
            this->fields.mArgs = v10,
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mArgs, (int32_t)v10, v11, v12),
            (mParameters = this->fields.mParameters) != 0) )
      {
        max_length = mParameters->max_length;
        if ( max_length < 1 )
        {
LABEL_28:
          mMethod = (System_Reflection_MethodBase_o *)this->fields.mMethod;
          if ( !mMethod )
            sub_1C6BC60(0, max_length_low);
          IsOut = (__int64)System_Reflection_MethodBase__Invoke(
                             mMethod,
                             (Il2CppObject *)this->fields.mTarget,
                             this->fields.mArgs,
                             0);
          if ( *p_mArgs )
          {
            v22 = (*p_mArgs)->max_length;
            if ( v22 < 1 )
              return 1;
            v23 = 0;
            while ( 1 )
            {
              mParameterInfos = this->fields.mParameterInfos;
              if ( !mParameterInfos )
                break;
              if ( v23 >= LODWORD(mParameterInfos->max_length) )
                goto LABEL_52;
              IsOut = (__int64)mParameterInfos->m_Items[v23];
              if ( !IsOut )
                break;
              IsOut = System_Reflection_ParameterInfo__get_IsIn((System_Reflection_ParameterInfo_o *)IsOut, 0);
              if ( (IsOut & 1) != 0 )
                goto LABEL_40;
              v27 = this->fields.mParameterInfos;
              if ( !v27 )
                break;
              if ( v23 >= LODWORD(v27->max_length) )
                goto LABEL_52;
              IsOut = (__int64)v27->m_Items[v23];
              if ( !IsOut )
                break;
              IsOut = System_Reflection_ParameterInfo__get_IsOut((System_Reflection_ParameterInfo_o *)IsOut, 0);
              if ( (IsOut & 1) != 0 )
              {
LABEL_40:
                v28 = this->fields.mParameters;
                if ( !v28 )
                  break;
                if ( v23 >= LODWORD(v28->max_length) )
                  goto LABEL_52;
                v29 = *p_mArgs;
                if ( !*p_mArgs )
                  break;
                if ( v23 >= LODWORD(v29->max_length) )
                  goto LABEL_52;
                IsOut = (__int64)v28->m_Items[v23];
                if ( !IsOut )
                  break;
                v30 = v29->m_Items[v23];
                *(_QWORD *)(IsOut + 32) = v30;
                sub_1C6B9AC((CGThumbnailListItem_o *)(IsOut + 32), (int32_t)v30, v25, v26);
              }
              v31 = *p_mArgs;
              if ( !*p_mArgs )
                break;
              if ( v23 >= LODWORD(v31->max_length) )
                goto LABEL_52;
              v32 = &v31->obj.klass + (int)v23;
              v32[4] = 0;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v32 + 4), 0, v25, v26);
              if ( v22 == ++v23 )
                return 1;
            }
          }
        }
        else
        {
          v14 = 0;
          do
          {
            if ( v14 >= LODWORD(mParameters->max_length) )
              goto LABEL_52;
            v15 = (int)v14;
            IsOut = (__int64)mParameters->m_Items[v14];
            if ( !IsOut )
              break;
            v16 = *p_mArgs;
            IsOut = (__int64)EventDelegate_Parameter__get_value((EventDelegate_Parameter_o *)IsOut, max_length_low);
            if ( !v16 )
              break;
            v19 = IsOut;
            if ( IsOut )
            {
              IsOut = sub_1C6BB44(IsOut, v16->obj.klass->_1.element_class);
              if ( !IsOut )
              {
                v33 = sub_1C6BC84(0);
                sub_1C6BB30(v33, 0);
              }
            }
            if ( (unsigned int)v15 >= LODWORD(v16->max_length) )
LABEL_52:
              sub_1C6BC68(IsOut);
            v20 = &v16->obj.klass + v15;
            v20[4] = (Il2CppClass *)v19;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 4), v19, v17, v18);
            v14 = v15 + 1;
            if ( max_length == (_DWORD)v15 + 1 )
              goto LABEL_28;
            mParameters = this->fields.mParameters;
          }
          while ( mParameters );
        }
      }
    }
    else
    {
      IsOut = (__int64)this->fields.mMethod;
      if ( IsOut )
      {
        System_Reflection_MethodBase__Invoke(
          (System_Reflection_MethodBase_o *)IsOut,
          (Il2CppObject *)this->fields.mTarget,
          0,
          0);
        return 1;
      }
    }
    sub_1C6BC60(IsOut, max_length_low);
  }
  return 0;
}


void EventDelegate__Execute_49522624(System_Collections_Generic_List_EventDelegate__o *list, const MethodInfo *method)
{
  int32_t v3; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x23
  int32_t size; // w8

  if ( (byte_4CBAA56 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_4CBAA56 = 1;
  }
  if ( list && list->fields._size >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v3,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
      if ( !Item )
        break;
      v6 = Item;
      EventDelegate__Execute((EventDelegate_o *)Item, v5);
      if ( v3 >= list->fields._size )
        return;
      if ( System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             v3,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__) == v6 )
      {
        if ( !LOBYTE(v6[2].monitor) )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)list,
          v3,
          (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
      }
      size = list->fields._size;
LABEL_12:
      if ( v3 >= size )
        return;
    }
    size = list->fields._size;
    ++v3;
    goto LABEL_12;
  }
}


int32_t EventDelegate__GetHashCode(EventDelegate_o *this, const MethodInfo *method)
{
  EventDelegate_c *v2; // x0

  if ( (byte_4CBAA51 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    byte_4CBAA51 = 1;
  }
  v2 = EventDelegate_TypeInfo;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    v2 = EventDelegate_TypeInfo;
  }
  return v2->static_fields->s_Hash;
}


System_String_o *EventDelegate__GetMethodName(EventDelegate_Callback_o *callback, const MethodInfo *method)
{
  if ( !callback
    || (callback = (EventDelegate_Callback_o *)System_Delegate__get_Method((System_Delegate_o *)callback, 0)) == 0 )
  {
    sub_1C6BC60(callback, method);
  }
  return (System_String_o *)((__int64 (__fastcall *)(EventDelegate_Callback_o *, const MethodInfo *))callback->klass->vtable._8_GetObjectData.methodPtr)(
                              callback,
                              callback->klass->vtable._8_GetObjectData.method);
}


bool EventDelegate__IsValid(EventDelegate_Callback_o *callback, const MethodInfo *method)
{
  System_Reflection_MethodInfo_o *v2; // x0

  if ( callback )
  {
    v2 = System_Delegate__get_Method((System_Delegate_o *)callback, 0);
    LOBYTE(callback) = System_Reflection_MethodInfo__op_Inequality(v2, 0, 0);
  }
  return (char)callback;
}


bool EventDelegate__IsValid_49551196(System_Collections_Generic_List_EventDelegate__o *list, const MethodInfo *method)
{
  int32_t size; // w21
  int32_t v4; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CBAA57 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_4CBAA57 = 1;
  }
  if ( !list )
    return 0;
  size = list->fields._size;
  if ( size < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             v4,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    if ( Item )
    {
      if ( EventDelegate__get_isValid((EventDelegate_o *)Item, v6) )
        break;
    }
    if ( size == ++v4 )
      return 0;
  }
  return 1;
}


bool EventDelegate__Remove(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_Callback_o *callback,
        const MethodInfo *method)
{
  int32_t size; // w22
  int32_t v6; // w21
  Il2CppObject *Item; // x0

  if ( (byte_4CBAA5E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_4CBAA5E = 1;
  }
  if ( !list )
    return 0;
  size = list->fields._size;
  if ( size < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             v6,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    if ( Item )
    {
      if ( (((__int64 (__fastcall *)(Il2CppObject *, EventDelegate_Callback_o *, const MethodInfo *))Item->klass->vtable[0].methodPtr)(
              Item,
              callback,
              Item->klass->vtable[0].method)
          & 1) != 0 )
        break;
    }
    if ( size == ++v6 )
      return 0;
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)list,
    v6,
    (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
  return 1;
}


bool EventDelegate__Remove_49582116(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *ev,
        const MethodInfo *method)
{
  int32_t size; // w22
  int32_t v6; // w21
  Il2CppObject *Item; // x0

  if ( (byte_4CBAA5F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_4CBAA5F = 1;
  }
  if ( !list )
    return 0;
  size = list->fields._size;
  if ( size < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             v6,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    if ( Item )
    {
      if ( (((__int64 (__fastcall *)(Il2CppObject *, EventDelegate_o *, const MethodInfo *))Item->klass->vtable[0].methodPtr)(
              Item,
              ev,
              Item->klass->vtable[0].method)
          & 1) != 0 )
        break;
    }
    if ( size == ++v6 )
      return 0;
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)list,
    v6,
    (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
  return 1;
}


void EventDelegate__Set(EventDelegate_o *this, EventDelegate_Callback_o *call, const MethodInfo *method)
{
  System_Reflection_MethodInfo_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *m_target; // x8
  UnityEngine_MonoBehaviour_c *v9; // x9
  __int64 naturalAligment; // x10
  Il2CppObject *v11; // x11
  int32_t v12; // w1
  CGThumbnailListItem_o *p_fields; // x21
  UnityEngine_Object_o *klass; // x21
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_String_o *MethodName; // x0
  struct System_String_o **p_mMethodName; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4CBAA52 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA52 = 1;
  }
  EventDelegate__Clear(this, (const MethodInfo *)call);
  if ( call )
  {
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    v5 = System_Delegate__get_Method((System_Delegate_o *)call, 0);
    if ( System_Reflection_MethodInfo__op_Inequality(v5, 0, 0) )
    {
      m_target = call->fields.m_target;
      if ( m_target )
      {
        v9 = UnityEngine_MonoBehaviour_TypeInfo;
        naturalAligment = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment;
        if ( m_target->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_MonoBehaviour_c *)m_target->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MonoBehaviour_TypeInfo )
            v11 = call->fields.m_target;
          else
            v11 = 0;
        }
        else
        {
          v11 = 0;
        }
        this->fields.mTarget = (struct UnityEngine_MonoBehaviour_o *)v11;
        p_fields = (CGThumbnailListItem_o *)&this->fields;
        if ( m_target->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_MonoBehaviour_c *)m_target->klass->_2.typeHierarchy[naturalAligment - 1] == v9 )
            v12 = (int)m_target;
          else
            v12 = 0;
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
        v12 = 0;
        this->fields.mTarget = 0;
        p_fields = (CGThumbnailListItem_o *)&this->fields;
      }
      sub_1C6B9AC(p_fields, v12, v6, v7);
      klass = (UnityEngine_Object_o *)p_fields->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(klass, 0, 0) )
      {
        this->fields.mRawDelegate = 1;
        this->fields.mCachedCallback = call;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mCachedCallback, (int32_t)call, v16, v17);
        this->fields.mMethodName = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMethodName, 0, v18, v19);
      }
      else
      {
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        MethodName = EventDelegate__GetMethodName(call, v15);
        this->fields.mMethodName = MethodName;
        p_mMethodName = &this->fields.mMethodName;
        sub_1C6B9AC((CGThumbnailListItem_o *)p_mMethodName, (int32_t)MethodName, v22, v23);
        *((_BYTE *)p_mMethodName + 32) = 0;
      }
    }
  }
}


EventDelegate_o *EventDelegate__Set_49560744(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_Callback_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int size; // w2
  int version; // w9
  int32_t v12; // w8
  struct EventDelegate_array *items; // x10
  _QWORD *v14; // x11
  Il2CppClass **v15; // x0

  if ( (byte_4CBAA58 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4CBAA58 = 1;
  }
  if ( !list )
    return 0;
  v5 = (Il2CppObject *)sub_1C6BC54(EventDelegate_TypeInfo);
  System_Object___ctor(v5, 0);
  EventDelegate__Set((EventDelegate_o *)v5, callback, v6);
  size = list->fields._size;
  version = list->fields._version + 1;
  list->fields._size = 0;
  list->fields._version = version;
  if ( size < 1 )
  {
    v12 = 0;
  }
  else
  {
    System_Array__Clear((System_Array_o *)list->fields._items, 0, size, 0);
    v12 = list->fields._size;
    version = list->fields._version;
  }
  items = list->fields._items;
  v14 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  list->fields._version = version + 1;
  if ( !items )
    sub_1C6BC60(v7, v8);
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)list,
      v5,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + v12;
    list->fields._size = v12 + 1;
    v15[4] = (Il2CppClass *)v5;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v5, size, v9);
  }
  return (EventDelegate_o *)v5;
}


void EventDelegate__Set_49576612(
        EventDelegate_o *this,
        UnityEngine_MonoBehaviour_o *target,
        System_String_o *methodName,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  EventDelegate__Clear(this, (const MethodInfo *)target);
  this->fields.mTarget = target;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)target, v7, v8);
  this->fields.mMethodName = methodName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMethodName, (int32_t)methodName, v9, v10);
}


void EventDelegate__Set_49580500(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *del,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_EventDelegate__o *v5; // x20
  int32_t size; // w2
  int version; // w9
  int32_t v8; // w8
  struct EventDelegate_array *items; // x10
  _QWORD *v10; // x11
  Il2CppClass **v11; // x0

  v5 = list;
  if ( (byte_4CBAA59 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    list = (System_Collections_Generic_List_EventDelegate__o *)sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4CBAA59 = 1;
  }
  if ( v5 )
  {
    size = v5->fields._size;
    version = v5->fields._version + 1;
    v5->fields._size = 0;
    v5->fields._version = version;
    if ( size < 1 )
    {
      v8 = 0;
    }
    else
    {
      System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
      v8 = v5->fields._size;
      version = v5->fields._version;
    }
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    v5->fields._version = version + 1;
    if ( !items )
      sub_1C6BC60(list, del);
    if ( (unsigned int)v8 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v5,
        (Il2CppObject *)del,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v11 = &items->obj.klass + v8;
      v5->fields._size = v8 + 1;
      v11[4] = (Il2CppClass *)del;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 4), (int32_t)del, size, v3);
    }
  }
}


System_String_o *EventDelegate__ToString(EventDelegate_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20
  __int64 v4; // x1
  Il2CppObject *Type; // x0
  System_String_o *v6; // x20
  int32_t IndexOf; // w0

  if ( (byte_4CBAA55 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_15967/*"[delegate]"*/);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    sub_1C6BA08(&StringLiteral_1086/*"/[delegate]"*/);
    byte_4CBAA55 = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mTarget, 0, 0) )
  {
    Type = (Il2CppObject *)this->fields.mTarget;
    if ( !Type
      || (Type = (Il2CppObject *)System_Object__GetType(Type, 0)) == 0
      || (Type = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Type->klass->vtable[3].methodPtr)(
                                   Type,
                                   Type->klass->vtable[3].method)) == 0 )
    {
      sub_1C6BC60(Type, v4);
    }
    v6 = (System_String_o *)Type;
    IndexOf = System_String__LastIndexOf((System_String_o *)Type, 0x2Eu, 0);
    if ( IndexOf >= 1 )
      v6 = System_String__Substring(v6, IndexOf + 1, 0);
    if ( System_String__IsNullOrEmpty(this->fields.mMethodName, 0) )
      return System_String__Concat_63966792(v6, (System_String_o *)StringLiteral_1086/*"/[delegate]"*/, 0);
    else
      return System_String__Concat_64005056(v6, (System_String_o *)StringLiteral_1041/*"/"*/, this->fields.mMethodName, 0);
  }
  else if ( this->fields.mRawDelegate )
  {
    return (System_String_o *)StringLiteral_15967/*"[delegate]"*/;
  }
  else
  {
    return 0;
  }
}


bool EventDelegate__get_isEnabled(EventDelegate_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20
  UnityEngine_Object_o *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CBAA4F & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA4F = 1;
  }
  if ( !this->fields.mCached )
    EventDelegate__Cache(this, method);
  if ( this->fields.mRawDelegate && this->fields.mCachedCallback )
    return 1;
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTarget, 0, 0) )
    return 0;
  v5 = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( v6 )
    return 1;
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v5, 0);
}


bool EventDelegate__get_isValid(EventDelegate_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20

  if ( (byte_4CBAA4E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAA4E = 1;
  }
  if ( !this->fields.mCached )
    EventDelegate__Cache(this, method);
  if ( this->fields.mRawDelegate && this->fields.mCachedCallback )
  {
    return 1;
  }
  else
  {
    mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    return UnityEngine_Object__op_Inequality(mTarget, 0, 0)
        && !System_String__IsNullOrEmpty(this->fields.mMethodName, 0);
  }
}


System_String_o *EventDelegate__get_methodName(EventDelegate_o *this, const MethodInfo *method)
{
  return this->fields.mMethodName;
}


EventDelegate_Parameter_array *EventDelegate__get_parameters(EventDelegate_o *this, const MethodInfo *method)
{
  if ( !this->fields.mCached )
    EventDelegate__Cache(this, method);
  return this->fields.mParameters;
}


UnityEngine_MonoBehaviour_o *EventDelegate__get_target(EventDelegate_o *this, const MethodInfo *method)
{
  return this->fields.mTarget;
}


void EventDelegate__set_methodName(EventDelegate_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  this->fields.mMethodName = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMethodName, (int32_t)value, (int32_t)method, v3);
  this->fields.mCachedCallback = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mCachedCallback, 0, v5, v6);
  *(_WORD *)&this->fields.mRawDelegate = 0;
  this->fields.mMethod = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMethod, 0, v7, v8);
  this->fields.mParameterInfos = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParameterInfos, 0, v9, v10);
  this->fields.mParameters = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParameters, 0, v11, v12);
}


void EventDelegate__set_target(EventDelegate_o *this, UnityEngine_MonoBehaviour_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  this->fields.mTarget = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
  this->fields.mCachedCallback = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mCachedCallback, 0, v5, v6);
  *(_WORD *)&this->fields.mRawDelegate = 0;
  this->fields.mMethod = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMethod, 0, v7, v8);
  this->fields.mParameterInfos = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParameterInfos, 0, v9, v10);
  this->fields.mParameters = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mParameters, 0, v11, v12);
}


void EventDelegate_Callback___ctor(
        EventDelegate_Callback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA8FB8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA8F78;
}


System_IAsyncResult_o *EventDelegate_Callback__BeginInvoke(
        EventDelegate_Callback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v5, callback, object);
}


void EventDelegate_Callback__EndInvoke(
        EventDelegate_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void EventDelegate_Callback__Invoke(EventDelegate_Callback_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void EventDelegate_Parameter___ctor(EventDelegate_Parameter_o *this, const MethodInfo *method)
{
  Il2CppType *v3; // x20
  System_RuntimeTypeHandle_o v4; // x0
  struct System_Type_o *TypeFromHandle; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CBAA61 & 1) == 0 )
  {
    sub_1C6BA08(&System_Type_TypeInfo);
    sub_1C6BA08(&void_var);
    byte_4CBAA61 = 1;
  }
  v3 = void_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  this->fields.expectedType = TypeFromHandle;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.expectedType, (int32_t)TypeFromHandle, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventDelegate_Parameter___ctor_49582440(
        EventDelegate_Parameter_o *this,
        UnityEngine_Object_o *obj,
        System_String_o *field,
        const MethodInfo *method)
{
  Il2CppType *v7; // x22
  System_RuntimeTypeHandle_o v8; // x0
  struct System_Type_o *TypeFromHandle; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4CBAA62 & 1) == 0 )
  {
    sub_1C6BA08(&System_Type_TypeInfo);
    sub_1C6BA08(&void_var);
    byte_4CBAA62 = 1;
  }
  v7 = void_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = (intptr_t)v7;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  this->fields.expectedType = TypeFromHandle;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.expectedType, (int32_t)TypeFromHandle, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.obj = obj;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)obj, v12, v13);
  this->fields.field = field;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.field, (int32_t)field, v14, v15);
}


void EventDelegate_Parameter___ctor_49582636(
        EventDelegate_Parameter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  Il2CppType *v5; // x21
  System_RuntimeTypeHandle_o v6; // x0
  struct System_Type_o *TypeFromHandle; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CBAA63 & 1) == 0 )
  {
    sub_1C6BA08(&System_Type_TypeInfo);
    sub_1C6BA08(&void_var);
    byte_4CBAA63 = 1;
  }
  v5 = void_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = (intptr_t)v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  this->fields.expectedType = TypeFromHandle;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.expectedType, (int32_t)TypeFromHandle, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.mValue = val;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)val, v10, v11);
}


System_Type_o *EventDelegate_Parameter__get_type(EventDelegate_Parameter_o *this, const MethodInfo *method)
{
  Il2CppObject *mValue; // x0
  UnityEngine_Object_o *obj; // x20
  __int64 v5; // x1
  Il2CppType *v6; // x19
  System_RuntimeTypeHandle_o v7; // x0

  if ( (byte_4CBAA65 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Type_TypeInfo);
    sub_1C6BA08(&void_var);
    byte_4CBAA65 = 1;
  }
  mValue = this->fields.mValue;
  if ( mValue )
    return System_Object__GetType(mValue, 0);
  obj = this->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(obj, 0, 0) )
  {
    mValue = (Il2CppObject *)this->fields.obj;
    if ( !mValue )
      sub_1C6BC60(0, v5);
    return System_Object__GetType(mValue, 0);
  }
  v6 = void_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v7.fields.value = (intptr_t)v6;
  return System_Type__GetTypeFromHandle(v7, 0);
}


Il2CppObject *EventDelegate_Parameter__get_value(EventDelegate_Parameter_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Il2CppObject *result; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *obj; // x22
  __int64 v9; // x1
  Il2CppObject *Type; // x0
  System_Type_o *v11; // x22
  struct System_Reflection_PropertyInfo_o *Property; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Reflection_FieldInfo_o *Field; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *v18; // x20
  System_Type_o *expectedType; // x20
  bool IsValueType; // w8
  System_Type_o *v21; // x19

  if ( (byte_4CBAA64 & 1) == 0 )
  {
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CBAA64 = 1;
  }
  result = this->fields.mValue;
  if ( !result )
  {
    if ( !this->fields.cached )
    {
      this->fields.cached = 1;
      this->fields.fieldInfo = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fieldInfo, 0, v2, v3);
      this->fields.propInfo = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.propInfo, 0, v6, v7);
      obj = this->fields.obj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(obj, 0, 0) && !System_String__IsNullOrEmpty(this->fields.field, 0) )
      {
        Type = (Il2CppObject *)this->fields.obj;
        if ( !Type )
          goto LABEL_32;
        Type = (Il2CppObject *)System_Object__GetType(Type, 0);
        if ( !Type )
          goto LABEL_32;
        v11 = (System_Type_o *)Type;
        Property = System_Type__GetProperty((System_Type_o *)Type, this->fields.field, 0);
        this->fields.propInfo = Property;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.propInfo, (int32_t)Property, v13, v14);
        if ( System_Reflection_PropertyInfo__op_Equality(this->fields.propInfo, 0, 0) )
        {
          Field = System_Type__GetField(v11, this->fields.field, 0);
          this->fields.fieldInfo = Field;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fieldInfo, (int32_t)Field, v16, v17);
        }
      }
    }
    if ( System_Reflection_PropertyInfo__op_Inequality(this->fields.propInfo, 0, 0) )
    {
      Type = (Il2CppObject *)this->fields.propInfo;
      if ( Type )
        return (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, struct UnityEngine_Object_o *, _QWORD, const MethodInfo *))Type->klass->vtable[25].methodPtr)(
                                 Type,
                                 this->fields.obj,
                                 0,
                                 Type->klass->vtable[25].method);
    }
    else
    {
      if ( !System_Reflection_FieldInfo__op_Inequality(this->fields.fieldInfo, 0, 0) )
      {
        v18 = this->fields.obj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
          return (Il2CppObject *)this->fields.obj;
        expectedType = this->fields.expectedType;
        if ( !System_Type_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
        if ( System_Type__op_Inequality(expectedType, 0, 0) )
        {
          Type = (Il2CppObject *)this->fields.expectedType;
          if ( !Type )
            goto LABEL_32;
          IsValueType = System_Type__get_IsValueType((System_Type_o *)Type, 0);
          result = 0;
          if ( IsValueType )
            return result;
        }
        v21 = this->fields.expectedType;
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        return System_Convert__ChangeType_65040668(0, v21, 0);
      }
      Type = (Il2CppObject *)this->fields.fieldInfo;
      if ( Type )
        return (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, struct UnityEngine_Object_o *, const MethodInfo *))Type->klass->vtable[25].methodPtr)(
                                 Type,
                                 this->fields.obj,
                                 Type->klass->vtable[25].method);
    }
LABEL_32:
    sub_1C6BC60(Type, v9);
  }
  return result;
}


void EventDelegate_Parameter__set_value(EventDelegate_Parameter_o *this, Il2CppObject *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mValue = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)value, (int32_t)method, v3);
}