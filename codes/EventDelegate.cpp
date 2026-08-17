void EventDelegate___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_59750C6 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&StringLiteral_6470/*"EventDelegate"*/);
    byte_59750C6 = 1;
  }
  if ( !StringLiteral_6470/*"EventDelegate"*/ )
    sub_2213CDC(0, v1);
  EventDelegate_TypeInfo->static_fields->s_Hash = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)StringLiteral_6470/*"EventDelegate"*/
                                                                                            + 344LL))(
                                                    StringLiteral_6470/*"EventDelegate"*/,
                                                    *(_QWORD *)(*(_QWORD *)StringLiteral_6470/*"EventDelegate"*/ + 352LL));
}


void EventDelegate___ctor(EventDelegate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventDelegate___ctor_56337280(EventDelegate_o *this, EventDelegate_Callback_o *call, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  System_Object___ctor((Il2CppObject *)this, 0);
  EventDelegate__Set(this, call, v5);
}


void EventDelegate___ctor_56337752(
        EventDelegate_o *this,
        UnityEngine_MonoBehaviour_o *target,
        System_String_o *methodName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  EventDelegate__Set_56337804(this, target, methodName, v7);
}


EventDelegate_o *EventDelegate__Add(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_Callback_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_59750C0 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    byte_59750C0 = 1;
  }
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, callback);
  return EventDelegate__Add_56341756(list, callback, 0, v3);
}


EventDelegate_o *EventDelegate__Add_56341756(
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t version; // w10
  struct EventDelegate_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0

  if ( (byte_59750C1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_2213A60(&StringLiteral_2569/*"Attempting to add a callback to a list that's null"*/);
    byte_59750C1 = 1;
  }
  if ( list )
  {
    size = list->fields._size;
    if ( size < 1 )
    {
LABEL_9:
      v10 = sub_2213CCC(EventDelegate_TypeInfo);
      System_Object___ctor((Il2CppObject *)v10, 0);
      EventDelegate__Set((EventDelegate_o *)v10, callback, v11);
      if ( !v10
        || (version = list->fields._version,
            items = list->fields._items,
            *(_BYTE *)(v10 + 40) = oneShot,
            v22 = Method_System_Collections_Generic_List_EventDelegate__Add__,
            list->fields._version = version + 1,
            !items) )
      {
        sub_2213CDC(v12, v13);
      }
      v23 = list->fields._size;
      if ( (unsigned int)v23 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)list,
          (Il2CppObject *)v10,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + v23;
        list->fields._size = v23 + 1;
        v24[4] = (Il2CppClass *)v10;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), v10, v14, v15, v16, v17, v18, v19);
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
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, callback);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_2569/*"Attempting to add a callback to a list that's null"*/, 0);
    return 0;
  }
  return (EventDelegate_o *)v10;
}


void EventDelegate__Add_56342192(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *ev,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_EventDelegate__o *v5; // x20
  _BOOL4 oneShot; // w21

  v5 = list;
  if ( (byte_59750C2 & 1) == 0 )
  {
    list = (System_Collections_Generic_List_EventDelegate__o *)sub_2213A60(&EventDelegate_TypeInfo);
    byte_59750C2 = 1;
  }
  if ( !ev )
    sub_2213CDC(list, ev);
  oneShot = ev->fields.oneShot;
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, ev);
  EventDelegate__Add_56342304(v5, ev, oneShot, v3);
}


void EventDelegate__Add_56342304(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct EventDelegate_Parameter_array *mParameters; // x8
  __int64 v23; // x0
  unsigned int **v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct EventDelegate_Parameter_array *v31; // x8
  __int64 v32; // x24
  __int64 v33; // x25
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v35; // x26
  unsigned int *v36; // x27
  __int64 v37; // x23
  __int64 v38; // x1
  struct EventDelegate_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x0

  v5 = ev;
  v6 = list;
  if ( (byte_59750C3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&EventDelegate_Parameter___TypeInfo);
    list = (System_Collections_Generic_List_EventDelegate__o *)sub_2213A60(&StringLiteral_2569/*"Attempting to add a callback to a list that's null"*/);
    byte_59750C3 = 1;
  }
  if ( !v5 )
    goto LABEL_30;
  if ( v5->fields.mRawDelegate )
    goto LABEL_9;
  mTarget = (UnityEngine_Object_o *)v5->fields.mTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ev);
  if ( UnityEngine_Object__op_Equality(mTarget, 0, 0) || System_String__IsNullOrEmpty(v5->fields.mMethodName, 0) )
  {
LABEL_9:
    mCachedCallback = v5->fields.mCachedCallback;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, ev);
    EventDelegate__Add_56341756(v6, mCachedCallback, oneShot, method);
    return;
  }
  if ( !v6 )
  {
    if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, ev);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_2569/*"Attempting to add a callback to a list that's null"*/, 0);
    return;
  }
  size = v6->fields._size;
  if ( size < 1 )
  {
LABEL_18:
    v12 = v5->fields.mTarget;
    mMethodName = v5->fields.mMethodName;
    v14 = sub_2213CCC(EventDelegate_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    EventDelegate__Set_56337804((EventDelegate_o *)v14, v12, mMethodName, v15);
    if ( !v14 )
      goto LABEL_30;
    mParameters = v5->fields.mParameters;
    *(_BYTE *)(v14 + 40) = oneShot;
    if ( mParameters )
    {
      ev = (EventDelegate_o *)mParameters->max_length;
      if ( ev )
      {
        v23 = sub_2213B20(EventDelegate_Parameter___TypeInfo, ev);
        *(_QWORD *)(v14 + 32) = v23;
        v24 = (unsigned int **)(v14 + 32);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 32), v23, v25, v26, v27, v28, v29, v30);
        v31 = v5->fields.mParameters;
        if ( !v31 )
          goto LABEL_30;
        v32 = 4;
        v33 = 8;
        while ( 1 )
        {
          max_length_low = LODWORD(v31->max_length);
          v35 = v32 - 4;
          if ( v32 - 4 >= (int)max_length_low )
            break;
          if ( v35 >= max_length_low )
            goto LABEL_39;
          v36 = *v24;
          if ( *v24 )
          {
            v37 = *((_QWORD *)&v31->obj.klass + v32);
            if ( v37 )
            {
              list = (System_Collections_Generic_List_EventDelegate__o *)sub_2213BB4(
                                                                           v37,
                                                                           *(_QWORD *)(*(_QWORD *)v36 + 64LL));
              if ( !list )
              {
                v43 = sub_2213D00(0, v38);
                sub_2213BA0(v43, 0);
              }
            }
            if ( v35 >= v36[6] )
LABEL_39:
              sub_2213CE4(list);
            *(_QWORD *)&v36[2 * v32] = v37;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36[v33], v37, v16, v17, v18, v19, v20, v21);
            v31 = v5->fields.mParameters;
            ++v32;
            v33 += 2;
            if ( v31 )
              continue;
          }
          goto LABEL_30;
        }
      }
    }
    items = v6->fields._items;
    v40 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++v6->fields._version;
    if ( items )
    {
      v41 = v6->fields._size;
      if ( (unsigned int)v41 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v6,
          (Il2CppObject *)v14,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + v41;
        v6->fields._size = v41 + 1;
        v42[4] = (Il2CppClass *)v14;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), v14, v16, v17, v18, v19, v20, v21);
      }
      return;
    }
LABEL_30:
    sub_2213CDC(list, ev);
  }
  v10 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)v6,
             v10,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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
  EventDelegate_Callback_o *v10; // x21
  System_String_o *MethodName; // x0
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x1
  System_Reflection_MethodInfo_o *v14; // x0
  System_Type_o *Type; // x22
  System_Reflection_MethodInfo_o **p_mMethod; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_Reflection_MethodInfo_o *Method_77257124; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_String_o *mMethodName; // x20
  System_Type_o *v34; // x0
  __int64 v35; // x21
  __int64 v36; // x22
  System_String_o *v37; // x3
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x23
  System_Type_o *v41; // x22
  System_RuntimeTypeHandle_o v42; // x0
  System_Type_o *TypeFromHandle; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x1
  struct System_Reflection_ParameterInfo_array *v47; // x0
  __int64 *p_mParameterInfos; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  EventDelegate_c *v61; // x8
  struct EventDelegate_Parameter_array *mParameters; // t1
  __int64 v63; // x9
  __int64 v64; // x1
  Il2CppObject *v65; // x20
  UnityEngine_Object_o *v66; // x19
  System_RuntimeTypeHandle_o v67; // x0
  System_Type_o *v68; // x0
  System_Delegate_o *Delegate_77450516; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  EventDelegate_Callback_c *v76; // x1
  EventDelegate_c *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  unsigned __int64 v84; // x22
  __int64 v85; // x24
  __int64 v86; // x25
  unsigned int *v87; // x26
  EventDelegate_Parameter_o *v88; // x20
  const MethodInfo *v89; // x1
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  __int64 v96; // x1
  const char *namespaze; // x22
  __int64 v98; // x23
  EventDelegate_c *klass; // x8
  __int64 v100; // x9
  __int64 v101; // x20
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  __int64 v120; // x0

  if ( (byte_59750B9 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_var);
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&EventDelegate_Parameter___TypeInfo);
    sub_2213A60(&EventDelegate_Parameter_TypeInfo);
    sub_2213A60(&StringLiteral_581/*"' on "*/);
    sub_2213A60(&StringLiteral_289/*" must have a 'void' return type."*/);
    sub_2213A60(&StringLiteral_4968/*"Could not find method '"*/);
    sub_2213A60(&StringLiteral_1063/*"."*/);
    byte_59750B9 = 1;
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
  if ( *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( !m_target )
      goto LABEL_10;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  v10 = *p_mCachedCallback;
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, method);
  MethodName = EventDelegate__GetMethodName(v10, method);
  if ( System_String__op_Inequality(MethodName, this->fields.mMethodName, 0) )
  {
LABEL_18:
    v12 = (UnityEngine_Object_o *)this->fields.mTarget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(v12, 0, 0) || System_String__IsNullOrEmpty(this->fields.mMethodName, 0) )
      return;
    v14 = (System_Reflection_MethodInfo_o *)this->fields.mTarget;
    if ( !v14 )
      goto LABEL_84;
    Type = System_Object__GetType((Il2CppObject *)v14, 0);
    this->fields.mMethod = 0;
    p_mMethod = &this->fields.mMethod;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMethod, 0, v17, v18, v19, v20, v21, v22);
    while ( 1 )
    {
      if ( !*(_DWORD *)(qword_59843E0 + 228) )
        j_il2cpp_runtime_class_init_0(qword_59843E0, v23);
      v24 = System_Type__op_Inequality(Type, 0, 0);
      if ( !v24 )
        break;
      if ( !Type )
        sub_2213CDC(v24, v25);
      Method_77257124 = System_Type__GetMethod_77257124(Type, this->fields.mMethodName, 52, 0);
      *p_mMethod = Method_77257124;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mMethod,
        (int32_t)Method_77257124,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      if ( System_Reflection_MethodInfo__op_Inequality(*p_mMethod, 0, 0) )
        break;
      Type = (System_Type_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))Type->klass->vtable._115_unknown.methodPtr)(
                                Type,
                                Type->klass->vtable._115_unknown.method);
    }
    if ( System_Reflection_MethodInfo__op_Equality(*p_mMethod, 0, 0) )
    {
      v14 = (System_Reflection_MethodInfo_o *)this->fields.mTarget;
      if ( v14 )
      {
        mMethodName = this->fields.mMethodName;
        v34 = System_Object__GetType((Il2CppObject *)v14, 0);
        v35 = StringLiteral_581/*"' on "*/;
        v36 = StringLiteral_4968/*"Could not find method '"*/;
        if ( v34 )
          v37 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))v34->klass->vtable._3_ToString.methodPtr)(
                                     v34,
                                     v34->klass->vtable._3_ToString.method);
        else
          v37 = 0;
        v44 = (System_String_o *)v36;
        v46 = mMethodName;
        v45 = (System_String_o *)v35;
LABEL_53:
        v65 = (Il2CppObject *)System_String__Concat_75696856(v44, v46, v45, v37, 0);
        v66 = (UnityEngine_Object_o *)this->fields.mTarget;
        if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v64);
        UnityEngine_Debug__LogError_83208728(v65, v66, 0);
        return;
      }
      goto LABEL_84;
    }
    v14 = *p_mMethod;
    if ( !*p_mMethod )
      goto LABEL_84;
    v38 = ((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, const MethodInfo *))v14->klass->vtable._40_get_ReturnType.methodPtr)(
            v14,
            v14->klass->vtable._40_get_ReturnType.method);
    v40 = qword_5984320;
    v41 = (System_Type_o *)v38;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v39);
    v42.fields.value = v40 + 32;
    TypeFromHandle = System_Type__GetTypeFromHandle(v42, 0);
    if ( System_Type__op_Inequality(v41, TypeFromHandle, 0) )
    {
      v14 = (System_Reflection_MethodInfo_o *)this->fields.mTarget;
      if ( v14 )
      {
        v44 = (System_String_o *)System_Object__GetType((Il2CppObject *)v14, 0);
        if ( v44 )
          v44 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))v44->klass->vtable._3_ToString.methodPtr)(
                                     v44,
                                     v44->klass->vtable._3_ToString.method);
        v45 = this->fields.mMethodName;
        v46 = (System_String_o *)StringLiteral_1063/*"."*/;
        v37 = (System_String_o *)StringLiteral_289/*" must have a 'void' return type."*/;
        goto LABEL_53;
      }
LABEL_84:
      sub_2213CDC(v14, v13);
    }
    v14 = *p_mMethod;
    if ( !*p_mMethod )
      goto LABEL_84;
    v47 = (struct System_Reflection_ParameterInfo_array *)((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, const MethodInfo *))v14->klass->vtable._16_unknown.methodPtr)(
                                                            v14,
                                                            v14->klass->vtable._16_unknown.method);
    this->fields.mParameterInfos = v47;
    p_mParameterInfos = (__int64 *)&this->fields.mParameterInfos;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mParameterInfos,
      (int32_t)v47,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    if ( !this->fields.mParameterInfos )
      goto LABEL_84;
    if ( this->fields.mParameterInfos->max_length )
    {
      this->fields.mCachedCallback = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCachedCallback, 0, v55, v56, v57, v58, v59, v60);
      mParameters = this->fields.mParameters;
      this = (EventDelegate_o *)((char *)this + 32);
      v61 = (EventDelegate_c *)mParameters;
      v63 = *(_QWORD *)&this->fields.oneShot;
      if ( mParameters )
      {
        if ( !v63 )
          goto LABEL_84;
        if ( LODWORD(v61->_1.namespaze) == *(_DWORD *)(v63 + 24) )
        {
LABEL_72:
          namespaze = v61->_1.namespaze;
          if ( (int)namespaze < 1 )
            return;
          v98 = 0;
          while ( 1 )
          {
            klass = this->klass;
            if ( !this->klass )
              goto LABEL_84;
            if ( (unsigned int)v98 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_85;
            v100 = *p_mParameterInfos;
            if ( !*p_mParameterInfos )
              goto LABEL_84;
            if ( (unsigned int)v98 >= *(_DWORD *)(v100 + 24) )
              goto LABEL_85;
            v14 = *(System_Reflection_MethodInfo_o **)(v100 + 8 * v98 + 32);
            if ( !v14 )
              goto LABEL_84;
            v101 = *((_QWORD *)&klass->_1.byval_arg.data + v98);
            v14 = (System_Reflection_MethodInfo_o *)((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, const MethodInfo *))v14->klass->vtable._11_get_Module.methodPtr)(
                                                      v14,
                                                      v14->klass->vtable._11_get_Module.method);
            if ( !v101 )
              goto LABEL_84;
            *(_QWORD *)(v101 + 40) = v14;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v101 + 40),
              (int32_t)v14,
              v102,
              v103,
              v104,
              v105,
              v106,
              v107);
            if ( (_DWORD)namespaze == (_DWORD)++v98 )
              return;
          }
        }
LABEL_63:
        v77 = (EventDelegate_c *)sub_2213B20(EventDelegate_Parameter___TypeInfo, *(unsigned int *)(v63 + 24));
        this->klass = v77;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)this, (int32_t)v77, v78, v79, v80, v81, v82, v83);
        v61 = this->klass;
        if ( !this->klass )
          goto LABEL_84;
        if ( (int)v61->_1.namespaze >= 1 )
        {
          v84 = 0;
          v85 = (unsigned int)v61->_1.namespaze;
          v86 = 8;
          do
          {
            v87 = (unsigned int *)this->klass;
            v88 = (EventDelegate_Parameter_o *)sub_2213CCC(EventDelegate_Parameter_TypeInfo);
            EventDelegate_Parameter___ctor(v88, v89);
            if ( !v87 )
              goto LABEL_84;
            if ( v88 )
            {
              v14 = (System_Reflection_MethodInfo_o *)sub_2213BB4(v88, *(_QWORD *)(*(_QWORD *)v87 + 64LL));
              if ( !v14 )
              {
                v120 = sub_2213D00(0, v96);
                sub_2213BA0(v120, 0);
              }
            }
            if ( v84 >= v87[6] )
LABEL_85:
              sub_2213CE4(v14);
            *(_QWORD *)&v87[v86] = v88;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v87[v86], (int32_t)v88, v90, v91, v92, v93, v94, v95);
            ++v84;
            v86 += 2;
          }
          while ( v85 != v84 );
          v61 = this->klass;
          if ( !this->klass )
            goto LABEL_84;
        }
        goto LABEL_72;
      }
LABEL_62:
      if ( !v63 )
        goto LABEL_84;
      goto LABEL_63;
    }
    p_mParameterInfos = (__int64 *)EventDelegate_Callback_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, v13);
    v67.fields.value = (intptr_t)p_mParameterInfos;
    v68 = System_Type__GetTypeFromHandle(v67, 0);
    Delegate_77450516 = System_Delegate__CreateDelegate_77450516(
                          v68,
                          (Il2CppObject *)this->fields.mTarget,
                          this->fields.mMethodName,
                          0);
    if ( Delegate_77450516 )
    {
      v76 = EventDelegate_Callback_TypeInfo;
      if ( (EventDelegate_Callback_c *)Delegate_77450516->klass != EventDelegate_Callback_TypeInfo
        || (*p_mCachedCallback = (struct EventDelegate_Callback_o *)Delegate_77450516,
            (EventDelegate_Callback_c *)Delegate_77450516->klass != v76) )
      {
        sub_221405C(Delegate_77450516, v76, v70);
        goto LABEL_62;
      }
    }
    else
    {
      *p_mCachedCallback = 0;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mCachedCallback,
      (int32_t)Delegate_77450516,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    this->fields.mArgs = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mArgs, 0, v108, v109, v110, v111, v112, v113);
    this->fields.mParameters = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParameters, 0, v114, v115, v116, v117, v118, v119);
  }
}


void EventDelegate__Clear(EventDelegate_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  this->fields.mTarget = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v2, v3, v4, v5, v6, v7);
  this->fields.mMethodName = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMethodName, 0, v9, v10, v11, v12, v13, v14);
  this->fields.mRawDelegate = 0;
  this->fields.mCachedCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCachedCallback, 0, v15, v16, v17, v18, v19, v20);
  this->fields.mParameters = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParameters, 0, v21, v22, v23, v24, v25, v26);
  this->fields.mCached = 0;
  this->fields.mMethod = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMethod, 0, v27, v28, v29, v30, v31, v32);
  this->fields.mParameterInfos = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParameterInfos, 0, v33, v34, v35, v36, v37, v38);
  this->fields.mArgs = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mArgs, 0, v39, v40, v41, v42, v43, v44);
}


bool EventDelegate__Equals(EventDelegate_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *mTarget; // x21
  Il2CppClass *v8; // x22
  System_String_o *mMethodName; // x0
  System_String_o *monitor; // x1
  __int64 v12; // x1
  Il2CppClass *v13; // x8
  __int64 v14; // x11
  Il2CppClass *v15; // x21
  UnityEngine_Object_o *v16; // x22
  const MethodInfo *v17; // x1
  struct System_String_o *v18; // x20

  if ( (byte_59750B6 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750B6 = 1;
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
        if ( UnityEngine_Object__op_Equality(mTarget, (UnityEngine_Object_o *)v8, 0) )
        {
          mMethodName = this->fields.mMethodName;
          monitor = (System_String_o *)obj[1].monitor;
          return System_String__Equals_75687256(mMethodName, monitor, 0);
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
      v13 = obj[2].klass;
      if ( v13
        && (v14 = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment,
            *((unsigned __int8 *)v13->_1.image + 304) >= (unsigned int)v14) )
      {
        if ( *(UnityEngine_MonoBehaviour_c **)(*((_QWORD *)v13->_1.image + 25) + 8 * v14 - 8) == UnityEngine_MonoBehaviour_TypeInfo )
          v15 = obj[2].klass;
        else
          v15 = 0;
      }
      else
      {
        v15 = 0;
      }
      v16 = (UnityEngine_Object_o *)this->fields.mTarget;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Equality(v16, (UnityEngine_Object_o *)v15, 0) )
      {
        v18 = this->fields.mMethodName;
        if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v17);
        monitor = EventDelegate__GetMethodName((EventDelegate_Callback_o *)obj, v17);
        mMethodName = v18;
        return System_String__Equals_75687256(mMethodName, monitor, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int max_length; // w22
  unsigned int v18; // w23
  __int64 v19; // x24
  struct EventDelegate_Parameter_array *v20; // x8
  struct System_Object_array *v21; // x25
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppClass *v28; // x21
  __int64 v29; // x1
  System_Reflection_MethodBase_o *mMethod; // x0
  int v31; // w21
  unsigned int v32; // w22
  __int64 i; // x23
  struct System_Reflection_ParameterInfo_array *mParameterInfos; // x8
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Reflection_ParameterInfo_array *v41; // x8
  struct EventDelegate_Parameter_array *v42; // x8
  struct System_Object_array *v43; // x9
  __int64 v44; // x1
  struct System_Object_array *v45; // x8
  __int64 v46; // x0

  if ( (byte_59750BA & 1) == 0 )
  {
    sub_2213A60(&object___TypeInfo);
    byte_59750BA = 1;
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
    if ( mParameters
      && (max_length_low = (const MethodInfo *)LODWORD(mParameters->max_length), LODWORD(mParameters->max_length)) )
    {
      p_mArgs = &this->fields.mArgs;
      mArgs = this->fields.mArgs;
      if ( mArgs && LODWORD(mArgs->max_length) == (_DWORD)max_length_low
        || (v10 = (struct System_Object_array *)sub_2213B20(object___TypeInfo, max_length_low),
            this->fields.mArgs = v10,
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.mArgs,
              (int32_t)v10,
              v11,
              v12,
              v13,
              v14,
              v15,
              v16),
            (mParameters = this->fields.mParameters) != 0) )
      {
        max_length = mParameters->max_length;
        if ( max_length < 1 )
        {
LABEL_24:
          mMethod = (System_Reflection_MethodBase_o *)this->fields.mMethod;
          if ( !mMethod )
            sub_2213CDC(0, max_length_low);
          IsOut = (__int64)System_Reflection_MethodBase__Invoke(
                             mMethod,
                             (Il2CppObject *)this->fields.mTarget,
                             this->fields.mArgs,
                             0);
          if ( *p_mArgs )
          {
            v31 = (*p_mArgs)->max_length;
            if ( v31 < 1 )
              return 1;
            v32 = 0;
            for ( i = 32; ; i += 8 )
            {
              mParameterInfos = this->fields.mParameterInfos;
              if ( !mParameterInfos )
                break;
              if ( v32 >= LODWORD(mParameterInfos->max_length) )
                goto LABEL_52;
              IsOut = *(__int64 *)((char *)&mParameterInfos->obj.klass + i);
              if ( !IsOut )
                break;
              IsOut = System_Reflection_ParameterInfo__get_IsIn((System_Reflection_ParameterInfo_o *)IsOut, 0);
              if ( (IsOut & 1) != 0 )
                goto LABEL_36;
              v41 = this->fields.mParameterInfos;
              if ( !v41 )
                break;
              if ( v32 >= LODWORD(v41->max_length) )
                goto LABEL_52;
              IsOut = *(__int64 *)((char *)&v41->obj.klass + i);
              if ( !IsOut )
                break;
              IsOut = System_Reflection_ParameterInfo__get_IsOut((System_Reflection_ParameterInfo_o *)IsOut, 0);
              if ( (IsOut & 1) != 0 )
              {
LABEL_36:
                v42 = this->fields.mParameters;
                if ( !v42 )
                  break;
                if ( v32 >= LODWORD(v42->max_length) )
                  goto LABEL_52;
                v43 = *p_mArgs;
                if ( !*p_mArgs )
                  break;
                if ( v32 >= LODWORD(v43->max_length) )
                  goto LABEL_52;
                IsOut = *(__int64 *)((char *)&v42->obj.klass + i);
                if ( !IsOut )
                  break;
                v44 = *(__int64 *)((char *)&v43->obj.klass + i);
                *(_QWORD *)(IsOut + 32) = v44;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(IsOut + 32), v44, v35, v36, v37, v38, v39, v40);
              }
              v45 = *p_mArgs;
              if ( !*p_mArgs )
                break;
              if ( v32 >= LODWORD(v45->max_length) )
                goto LABEL_52;
              *(Il2CppClass **)((char *)&v45->obj.klass + i) = 0;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v45 + i), 0, v35, v36, v37, v38, v39, v40);
              if ( v31 == ++v32 )
                return 1;
            }
          }
        }
        else
        {
          v18 = 0;
          v19 = 32;
          while ( 1 )
          {
            v20 = this->fields.mParameters;
            if ( !v20 )
              break;
            if ( v18 >= LODWORD(v20->max_length) )
              goto LABEL_52;
            IsOut = *(__int64 *)((char *)&v20->obj.klass + v19);
            if ( !IsOut )
              break;
            v21 = this->fields.mArgs;
            IsOut = (__int64)EventDelegate_Parameter__get_value((EventDelegate_Parameter_o *)IsOut, max_length_low);
            if ( !v21 )
              break;
            v28 = (Il2CppClass *)IsOut;
            if ( IsOut )
            {
              IsOut = sub_2213BB4(IsOut, v21->obj.klass->_1.element_class);
              if ( !IsOut )
              {
                v46 = sub_2213D00(0, v29);
                sub_2213BA0(v46, 0);
              }
            }
            if ( v18 >= LODWORD(v21->max_length) )
LABEL_52:
              sub_2213CE4(IsOut);
            *(Il2CppClass **)((char *)&v21->obj.klass + v19) = v28;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)v21 + v19),
              (int32_t)v28,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            ++v18;
            v19 += 8;
            if ( max_length == v18 )
              goto LABEL_24;
          }
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
    sub_2213CDC(IsOut, max_length_low);
  }
  return 0;
}


void EventDelegate__Execute_56285144(System_Collections_Generic_List_EventDelegate__o *list, const MethodInfo *method)
{
  int32_t v3; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x23
  int32_t size; // w8

  if ( (byte_59750BC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_59750BC = 1;
  }
  if ( list && list->fields._size >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v3,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
      if ( !Item )
        break;
      v6 = Item;
      EventDelegate__Execute((EventDelegate_o *)Item, v5);
      if ( v3 >= list->fields._size )
        return;
      if ( System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             v3,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__) == v6 )
      {
        if ( !LOBYTE(v6[2].monitor) )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)list,
          v3,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
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

  if ( (byte_59750B7 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    byte_59750B7 = 1;
  }
  v2 = EventDelegate_TypeInfo;
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, method);
    v2 = EventDelegate_TypeInfo;
  }
  return v2->static_fields->s_Hash;
}


System_String_o *EventDelegate__GetMethodName(EventDelegate_Callback_o *callback, const MethodInfo *method)
{
  if ( !callback
    || (callback = (EventDelegate_Callback_o *)System_Delegate__get_Method((System_Delegate_o *)callback, 0)) == 0 )
  {
    sub_2213CDC(callback, method);
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


bool EventDelegate__IsValid_56312868(System_Collections_Generic_List_EventDelegate__o *list, const MethodInfo *method)
{
  int32_t size; // w21
  int32_t v4; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v6; // x1

  if ( (byte_59750BD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_59750BD = 1;
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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

  if ( (byte_59750C4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_59750C4 = 1;
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
  return 1;
}


bool EventDelegate__Remove_56343140(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *ev,
        const MethodInfo *method)
{
  int32_t size; // w22
  int32_t v6; // w21
  Il2CppObject *Item; // x0

  if ( (byte_59750C5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_59750C5 = 1;
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
  return 1;
}


void EventDelegate__Set(EventDelegate_o *this, EventDelegate_Callback_o *call, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *m_target; // x8
  UnityEngine_MonoBehaviour_c *v13; // x9
  __int64 naturalAligment; // x10
  Il2CppObject *v15; // x11
  int32_t v16; // w1
  MissionNaviTransitionBoardItem_o *p_fields; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *klass; // x21
  const MethodInfo *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_String_o *MethodName; // x0
  struct System_String_o **p_mMethodName; // x19
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_59750B8 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750B8 = 1;
  }
  EventDelegate__Clear(this, (const MethodInfo *)call);
  if ( call )
  {
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v5);
    if ( EventDelegate__IsValid(call, v5) )
    {
      m_target = call->fields.m_target;
      if ( m_target )
      {
        v13 = UnityEngine_MonoBehaviour_TypeInfo;
        naturalAligment = UnityEngine_MonoBehaviour_TypeInfo->_2.naturalAligment;
        if ( m_target->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_MonoBehaviour_c *)m_target->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MonoBehaviour_TypeInfo )
            v15 = call->fields.m_target;
          else
            v15 = 0;
        }
        else
        {
          v15 = 0;
        }
        this->fields.mTarget = (struct UnityEngine_MonoBehaviour_o *)v15;
        p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
        if ( m_target->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (UnityEngine_MonoBehaviour_c *)m_target->klass->_2.typeHierarchy[naturalAligment - 1] == v13 )
            v16 = (int)m_target;
          else
            v16 = 0;
        }
        else
        {
          v16 = 0;
        }
      }
      else
      {
        v16 = 0;
        this->fields.mTarget = 0;
        p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
      }
      sub_2213A04(p_fields, v16, v6, v7, v8, v9, v10, v11);
      klass = (UnityEngine_Object_o *)p_fields->klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      if ( UnityEngine_Object__op_Equality(klass, 0, 0) )
      {
        this->fields.mRawDelegate = 1;
        this->fields.mCachedCallback = call;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mCachedCallback,
          (int32_t)call,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        this->fields.mMethodName = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMethodName, 0, v27, v28, v29, v30, v31, v32);
      }
      else
      {
        if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v20);
        MethodName = EventDelegate__GetMethodName(call, v20);
        this->fields.mMethodName = MethodName;
        p_mMethodName = &this->fields.mMethodName;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p_mMethodName,
          (int32_t)MethodName,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        *((_BYTE *)p_mMethodName + 32) = 0;
      }
    }
  }
}


EventDelegate_o *EventDelegate__Set_56322328(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_Callback_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *size; // x2
  int version; // w9
  int32_t v16; // w8
  struct EventDelegate_array *items; // x10
  _QWORD *v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_59750BE & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_59750BE = 1;
  }
  if ( !list )
    return 0;
  v5 = (Il2CppObject *)sub_2213CCC(EventDelegate_TypeInfo);
  System_Object___ctor(v5, 0);
  EventDelegate__Set((EventDelegate_o *)v5, callback, v6);
  size = (System_String_o *)(unsigned int)list->fields._size;
  version = list->fields._version + 1;
  list->fields._size = 0;
  list->fields._version = version;
  if ( (int)size < 1 )
  {
    v16 = 0;
  }
  else
  {
    System_Array__Clear((System_Array_o *)list->fields._items, 0, (int32_t)size, 0);
    v16 = list->fields._size;
    version = list->fields._version;
  }
  items = list->fields._items;
  v18 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  list->fields._version = version + 1;
  if ( !items )
    sub_2213CDC(v7, v8);
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)list,
      v5,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + v16;
    list->fields._size = v16 + 1;
    v19[4] = (Il2CppClass *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v5, size, v9, v10, v11, v12, v13);
  }
  return (EventDelegate_o *)v5;
}


void EventDelegate__Set_56337804(
        EventDelegate_o *this,
        UnityEngine_MonoBehaviour_o *target,
        System_String_o *methodName,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  EventDelegate__Clear(this, (const MethodInfo *)target);
  this->fields.mTarget = target;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)target, v7, v8, v9, v10, v11, v12);
  this->fields.mMethodName = methodName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMethodName,
    (int32_t)methodName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void EventDelegate__Set_56341524(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *del,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_List_EventDelegate__o *v9; // x20
  System_String_o *size; // x2
  int version; // w9
  int32_t v12; // w8
  struct EventDelegate_array *items; // x10
  _QWORD *v14; // x11
  Il2CppClass **v15; // x0

  v9 = list;
  if ( (byte_59750BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    list = (System_Collections_Generic_List_EventDelegate__o *)sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_59750BF = 1;
  }
  if ( v9 )
  {
    size = (System_String_o *)(unsigned int)v9->fields._size;
    version = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = version;
    if ( (int)size < 1 )
    {
      v12 = 0;
    }
    else
    {
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, (int32_t)size, 0);
      v12 = v9->fields._size;
      version = v9->fields._version;
    }
    items = v9->fields._items;
    v14 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    v9->fields._version = version + 1;
    if ( !items )
      sub_2213CDC(list, del);
    if ( (unsigned int)v12 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v9,
        (Il2CppObject *)del,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + v12;
      v9->fields._size = v12 + 1;
      v15[4] = (Il2CppClass *)del;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 4), (int32_t)del, size, v3, v4, v5, v6, v7);
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

  if ( (byte_59750BB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16605/*"[delegate]"*/);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    sub_2213A60(&StringLiteral_1169/*"/[delegate]"*/);
    byte_59750BB = 1;
  }
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mTarget, 0, 0) )
  {
    Type = (Il2CppObject *)this->fields.mTarget;
    if ( !Type
      || (Type = (Il2CppObject *)System_Object__GetType(Type, 0)) == 0
      || (Type = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Type->klass->vtable[3].methodPtr)(
                                   Type,
                                   Type->klass->vtable[3].method)) == 0 )
    {
      sub_2213CDC(Type, v4);
    }
    v6 = (System_String_o *)Type;
    IndexOf = System_String__LastIndexOf((System_String_o *)Type, 0x2Eu, 0);
    if ( IndexOf >= 1 )
      v6 = System_String__Substring(v6, IndexOf + 1, 0);
    if ( System_String__IsNullOrEmpty(this->fields.mMethodName, 0) )
      return System_String__Concat_75651716(v6, (System_String_o *)StringLiteral_1169/*"/[delegate]"*/, 0);
    else
      return System_String__Concat_75694928(v6, (System_String_o *)StringLiteral_1123/*"/"*/, this->fields.mMethodName, 0);
  }
  else if ( this->fields.mRawDelegate )
  {
    return (System_String_o *)StringLiteral_16605/*"[delegate]"*/;
  }
  else
  {
    return 0;
  }
}


bool EventDelegate__get_isEnabled(EventDelegate_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_59750B5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750B5 = 1;
  }
  if ( !this->fields.mCached )
    EventDelegate__Cache(this, method);
  if ( this->fields.mRawDelegate && this->fields.mCachedCallback )
    return 1;
  mTarget = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mTarget, 0, 0) )
    return 0;
  v6 = (UnityEngine_Object_o *)this->fields.mTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v7 = UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( v7 )
    return 1;
  if ( !v6 )
    sub_2213CDC(v7, v8);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0);
}


bool EventDelegate__get_isValid(EventDelegate_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20

  if ( (byte_59750B4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750B4 = 1;
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  this->fields.mMethodName = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMethodName,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mCachedCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCachedCallback, 0, v9, v10, v11, v12, v13, v14);
  *(_WORD *)&this->fields.mRawDelegate = 0;
  this->fields.mMethod = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMethod, 0, v15, v16, v17, v18, v19, v20);
  this->fields.mParameterInfos = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParameterInfos, 0, v21, v22, v23, v24, v25, v26);
  this->fields.mParameters = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParameters, 0, v27, v28, v29, v30, v31, v32);
}


void EventDelegate__set_target(EventDelegate_o *this, UnityEngine_MonoBehaviour_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  this->fields.mTarget = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mCachedCallback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCachedCallback, 0, v9, v10, v11, v12, v13, v14);
  *(_WORD *)&this->fields.mRawDelegate = 0;
  this->fields.mMethod = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mMethod, 0, v15, v16, v17, v18, v19, v20);
  this->fields.mParameterInfos = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParameterInfos, 0, v21, v22, v23, v24, v25, v26);
  this->fields.mParameters = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParameters, 0, v27, v28, v29, v30, v31, v32);
}


void EventDelegate_Callback___ctor(
        EventDelegate_Callback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2017138;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20170F8;
}


System_IAsyncResult_o *EventDelegate_Callback__BeginInvoke(
        EventDelegate_Callback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void EventDelegate_Callback__EndInvoke(
        EventDelegate_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EventDelegate_Callback__Invoke(EventDelegate_Callback_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void EventDelegate_Parameter___ctor(EventDelegate_Parameter_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_RuntimeTypeHandle_o v4; // x0
  struct System_Type_o *TypeFromHandle; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v3 = qword_5984320;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, method);
  v4.fields.value = v3 + 32;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  this->fields.expectedType = TypeFromHandle;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.expectedType,
    (int32_t)TypeFromHandle,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventDelegate_Parameter___ctor_56343464(
        EventDelegate_Parameter_o *this,
        UnityEngine_Object_o *obj,
        System_String_o *field,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_RuntimeTypeHandle_o v8; // x0
  struct System_Type_o *TypeFromHandle; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  v7 = qword_5984320;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, obj);
  v8.fields.value = v7 + 32;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  this->fields.expectedType = TypeFromHandle;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.expectedType,
    (int32_t)TypeFromHandle,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.obj = obj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)obj, v16, v17, v18, v19, v20, v21);
  this->fields.field = field;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.field, (int32_t)field, v22, v23, v24, v25, v26, v27);
}


void EventDelegate_Parameter___ctor_56343604(
        EventDelegate_Parameter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_RuntimeTypeHandle_o v6; // x0
  struct System_Type_o *TypeFromHandle; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  v5 = qword_5984320;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, val);
  v6.fields.value = v5 + 32;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  this->fields.expectedType = TypeFromHandle;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.expectedType,
    (int32_t)TypeFromHandle,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.mValue = val;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mValue, (int32_t)val, v14, v15, v16, v17, v18, v19);
}


System_Type_o *EventDelegate_Parameter__get_type(EventDelegate_Parameter_o *this, const MethodInfo *method)
{
  Il2CppObject *mValue; // x0
  UnityEngine_Object_o *obj; // x20
  __int64 v5; // x1
  __int64 v6; // x19
  System_RuntimeTypeHandle_o v7; // x0

  if ( (byte_59750C8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750C8 = 1;
  }
  mValue = this->fields.mValue;
  if ( mValue )
    return System_Object__GetType(mValue, 0);
  obj = this->fields.obj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(obj, 0, 0) )
  {
    mValue = (Il2CppObject *)this->fields.obj;
    if ( !mValue )
      sub_2213CDC(0, v5);
    return System_Object__GetType(mValue, 0);
  }
  v6 = qword_5984320;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, v5);
  v7.fields.value = v6 + 32;
  return System_Type__GetTypeFromHandle(v7, 0);
}


Il2CppObject *EventDelegate_Parameter__get_value(EventDelegate_Parameter_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *result; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  UnityEngine_Object_o *obj; // x22
  __int64 v18; // x1
  Il2CppObject *Type; // x0
  System_Type_o *v20; // x22
  struct System_Reflection_PropertyInfo_o *Property; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Reflection_FieldInfo_o *Field; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  UnityEngine_Object_o *v35; // x20
  __int64 v36; // x1
  System_Type_o *expectedType; // x20
  bool IsValueType; // w8
  System_Type_o *v39; // x19

  if ( (byte_59750C7 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750C7 = 1;
  }
  result = this->fields.mValue;
  if ( !result )
  {
    if ( !this->fields.cached )
    {
      this->fields.fieldInfo = 0;
      this->fields.cached = 1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fieldInfo, 0, v2, v3, v4, v5, v6, v7);
      this->fields.propInfo = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.propInfo, 0, v10, v11, v12, v13, v14, v15);
      obj = this->fields.obj;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      if ( UnityEngine_Object__op_Inequality(obj, 0, 0) && !System_String__IsNullOrEmpty(this->fields.field, 0) )
      {
        Type = (Il2CppObject *)this->fields.obj;
        if ( !Type )
          goto LABEL_32;
        Type = (Il2CppObject *)System_Object__GetType(Type, 0);
        if ( !Type )
          goto LABEL_32;
        v20 = (System_Type_o *)Type;
        Property = System_Type__GetProperty((System_Type_o *)Type, this->fields.field, 0);
        this->fields.propInfo = Property;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.propInfo,
          (int32_t)Property,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        if ( System_Reflection_PropertyInfo__op_Equality(this->fields.propInfo, 0, 0) )
        {
          Field = System_Type__GetField(v20, this->fields.field, 0);
          this->fields.fieldInfo = Field;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.fieldInfo,
            (int32_t)Field,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
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
        v35 = this->fields.obj;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        if ( UnityEngine_Object__op_Inequality(v35, 0, 0) )
          return (Il2CppObject *)this->fields.obj;
        expectedType = this->fields.expectedType;
        if ( !*(_DWORD *)(qword_59843E0 + 228) )
          j_il2cpp_runtime_class_init_0(qword_59843E0, v36);
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
        v39 = this->fields.expectedType;
        if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v18);
        return System_Convert__ChangeType_76675756(0, v39, 0);
      }
      Type = (Il2CppObject *)this->fields.fieldInfo;
      if ( Type )
        return (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, struct UnityEngine_Object_o *, const MethodInfo *))Type->klass->vtable[25].methodPtr)(
                                 Type,
                                 this->fields.obj,
                                 Type->klass->vtable[25].method);
    }
LABEL_32:
    sub_2213CDC(Type, v18);
  }
  return result;
}


void EventDelegate_Parameter__set_value(EventDelegate_Parameter_o *this, Il2CppObject *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mValue = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mValue,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}