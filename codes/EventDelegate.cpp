void EventDelegate___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4CCBBB9 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&StringLiteral_6202/*"EventDelegate"*/);
    byte_4CCBBB9 = 1;
  }
  if ( !StringLiteral_6202/*"EventDelegate"*/ )
    sub_1C71608(0, v1);
  EventDelegate_TypeInfo->static_fields->s_Hash = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)StringLiteral_6202/*"EventDelegate"*/
                                                                                            + 344LL))(
                                                    StringLiteral_6202/*"EventDelegate"*/,
                                                    *(_QWORD *)(*(_QWORD *)StringLiteral_6202/*"EventDelegate"*/ + 352LL));
}


void EventDelegate___ctor(EventDelegate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventDelegate___ctor_49641004(EventDelegate_o *this, EventDelegate_Callback_o *call, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  System_Object___ctor((Il2CppObject *)this, 0);
  EventDelegate__Set(this, call, v5);
}


void EventDelegate___ctor_49641492(
        EventDelegate_o *this,
        UnityEngine_MonoBehaviour_o *target,
        System_String_o *methodName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  EventDelegate__Set_49641544(this, target, methodName, v7);
}


EventDelegate_o *EventDelegate__Add(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_Callback_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CCBBB3 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    byte_4CCBBB3 = 1;
  }
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  return EventDelegate__Add_49645664(list, callback, 0, v3);
}


EventDelegate_o *EventDelegate__Add_49645664(
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct EventDelegate_array *items; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4CCBBB4 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Debug_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_1C713B0(&StringLiteral_2456/*"Attempting to add a callback to a list that's null"*/);
    byte_4CCBBB4 = 1;
  }
  if ( list )
  {
    size = list->fields._size;
    if ( size < 1 )
    {
LABEL_9:
      v10 = sub_1C715FC(EventDelegate_TypeInfo);
      System_Object___ctor((Il2CppObject *)v10, 0);
      EventDelegate__Set((EventDelegate_o *)v10, callback, v11);
      if ( !v10
        || (*(_BYTE *)(v10 + 40) = oneShot,
            items = list->fields._items,
            v21 = Method_System_Collections_Generic_List_EventDelegate__Add__,
            ++list->fields._version,
            !items) )
      {
        sub_1C71608(v12, v13);
      }
      v22 = list->fields._size;
      if ( (unsigned int)v22 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)list,
          (Il2CppObject *)v10,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + v22;
        list->fields._size = v22 + 1;
        v23[4] = (Il2CppClass *)v10;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 4), v10, v14, v15, v16, v17, v18, v19);
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
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_2456/*"Attempting to add a callback to a list that's null"*/, 0);
    return 0;
  }
  return (EventDelegate_o *)v10;
}


void EventDelegate__Add_49646100(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *ev,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_EventDelegate__o *v5; // x20
  _BOOL4 oneShot; // w21

  v5 = list;
  if ( (byte_4CCBBB5 & 1) == 0 )
  {
    list = (System_Collections_Generic_List_EventDelegate__o *)sub_1C713B0(&EventDelegate_TypeInfo);
    byte_4CCBBB5 = 1;
  }
  if ( !ev )
    sub_1C71608(list, ev);
  oneShot = ev->fields.oneShot;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add_49646212(v5, ev, oneShot, v3);
}


void EventDelegate__Add_49646212(
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct EventDelegate_Parameter_array *mParameters; // x8
  __int64 v23; // x0
  unsigned int **v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct EventDelegate_Parameter_array *v31; // x8
  unsigned __int64 v32; // x24
  __int64 v33; // x25
  unsigned __int64 max_length_low; // x9
  unsigned int *v35; // x26
  EventDelegate_Parameter_o *v36; // x23
  struct EventDelegate_array *items; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x0

  v5 = ev;
  v6 = list;
  if ( (byte_4CCBBB6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Debug_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&EventDelegate_Parameter___TypeInfo);
    list = (System_Collections_Generic_List_EventDelegate__o *)sub_1C713B0(&StringLiteral_2456/*"Attempting to add a callback to a list that's null"*/);
    byte_4CCBBB6 = 1;
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
    EventDelegate__Add_49645664(v6, mCachedCallback, oneShot, method);
    return;
  }
  if ( !v6 )
  {
    if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
    UnityEngine_Debug__LogWarning((Il2CppObject *)StringLiteral_2456/*"Attempting to add a callback to a list that's null"*/, 0);
    return;
  }
  size = v6->fields._size;
  if ( size < 1 )
  {
LABEL_18:
    v12 = v5->fields.mTarget;
    mMethodName = v5->fields.mMethodName;
    v14 = sub_1C715FC(EventDelegate_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    EventDelegate__Set_49641544((EventDelegate_o *)v14, v12, mMethodName, v15);
    if ( !v14 )
      goto LABEL_30;
    *(_BYTE *)(v14 + 40) = oneShot;
    mParameters = v5->fields.mParameters;
    if ( mParameters )
    {
      ev = (EventDelegate_o *)mParameters->max_length;
      if ( ev )
      {
        v23 = sub_1C71458(EventDelegate_Parameter___TypeInfo, ev);
        *(_QWORD *)(v14 + 32) = v23;
        v24 = (unsigned int **)(v14 + 32);
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 32), v23, v25, v26, v27, v28, v29, v30);
        v31 = v5->fields.mParameters;
        if ( !v31 )
          goto LABEL_30;
        v32 = 0;
        v33 = 8;
        while ( 1 )
        {
          max_length_low = LODWORD(v31->max_length);
          if ( (__int64)v32 >= (int)max_length_low )
            break;
          if ( v32 >= max_length_low )
            goto LABEL_39;
          v35 = *v24;
          if ( *v24 )
          {
            v36 = v31->m_Items[v32];
            if ( v36 )
            {
              list = (System_Collections_Generic_List_EventDelegate__o *)sub_1C714EC(
                                                                           v36,
                                                                           *(_QWORD *)(*(_QWORD *)v35 + 64LL));
              if ( !list )
              {
                v41 = sub_1C7162C(0);
                sub_1C714D8(v41, 0);
              }
            }
            if ( v32 >= v35[6] )
LABEL_39:
              sub_1C71610(list);
            *(_QWORD *)&v35[v33] = v36;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v35[v33], (int32_t)v36, v16, v17, v18, v19, v20, v21);
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
    v38 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++v6->fields._version;
    if ( items )
    {
      v39 = v6->fields._size;
      if ( (unsigned int)v39 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v6,
          (Il2CppObject *)v14,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + v39;
        v6->fields._size = v39 + 1;
        v40[4] = (Il2CppClass *)v14;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v40 + 4), v14, v16, v17, v18, v19, v20, v21);
      }
      return;
    }
LABEL_30:
    sub_1C71608(list, ev);
  }
  v10 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)v6,
             v10,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  _BOOL8 v25; // x0
  __int64 v26; // x1
  System_Reflection_MethodInfo_o *Method_65657020; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_String_o *mMethodName; // x20
  System_Type_o *v35; // x0
  __int64 v36; // x21
  __int64 v37; // x22
  System_String_o *v38; // x3
  System_Type_o *v39; // x22
  Il2CppType *v40; // x23
  System_RuntimeTypeHandle_o v41; // x0
  System_Type_o *TypeFromHandle; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x1
  struct System_Reflection_ParameterInfo_array *v46; // x0
  __int64 *p_mParameterInfos; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  EventDelegate_c *klass; // x22
  struct EventDelegate_Parameter_array *mParameters; // t1
  __int64 v62; // x8
  System_String_o *v63; // x0
  UnityEngine_Object_o *v64; // x19
  Il2CppObject *v65; // x20
  System_RuntimeTypeHandle_o v66; // x0
  System_Type_o *v67; // x0
  System_Delegate_o *Delegate_65855788; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  EventDelegate_Callback_c *v75; // x1
  EventDelegate_c *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  unsigned __int64 v83; // x23
  __int64 v84; // x24
  __int64 v85; // x25
  EventDelegate_Parameter_o *v86; // x20
  const MethodInfo *v87; // x1
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  int namespaze; // w23
  unsigned int v95; // w8
  __int64 v96; // x9
  unsigned int v97; // w24
  __int64 v98; // x20
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  __int64 v117; // x0

  if ( (byte_4CCBBAC & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_var);
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&UnityEngine_Debug_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&EventDelegate_Parameter___TypeInfo);
    sub_1C713B0(&EventDelegate_Parameter_TypeInfo);
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&void_var);
    sub_1C713B0(&StringLiteral_550/*"' on "*/);
    sub_1C713B0(&StringLiteral_279/*" must have a 'void' return type."*/);
    sub_1C713B0(&StringLiteral_4782/*"Could not find method '"*/);
    sub_1C713B0(&StringLiteral_981/*"."*/);
    byte_4CCBBAC = 1;
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mMethod, 0, v19, v20, v21, v22, v23, v24);
    while ( 1 )
    {
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v25 = System_Type__op_Inequality(v18, 0, 0);
      if ( !v25 )
        break;
      if ( !v18 )
        sub_1C71608(v25, v26);
      Method_65657020 = System_Type__GetMethod_65657020(v18, this->fields.mMethodName, 52, 0);
      *p_mMethod = Method_65657020;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.mMethod,
        (int32_t)Method_65657020,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
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
        v35 = System_Object__GetType((Il2CppObject *)v15, 0);
        v36 = StringLiteral_550/*"' on "*/;
        v37 = StringLiteral_4782/*"Could not find method '"*/;
        if ( v35 )
          v38 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, const MethodInfo *))v35->klass->vtable._3_ToString.methodPtr)(
                                     v35,
                                     v35->klass->vtable._3_ToString.method);
        else
          v38 = 0;
        v43 = (System_String_o *)v37;
        v45 = mMethodName;
        v44 = (System_String_o *)v36;
LABEL_53:
        v63 = System_String__Concat_64071992(v43, v45, v44, v38, 0);
        v64 = (UnityEngine_Object_o *)this->fields.mTarget;
        v65 = (Il2CppObject *)v63;
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogError_71536300(v65, v64, 0);
        return;
      }
      goto LABEL_82;
    }
    v15 = *p_mMethod;
    if ( !*p_mMethod )
      goto LABEL_82;
    v39 = (System_Type_o *)((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, const MethodInfo *))v15->klass->vtable._40_get_ReturnType.methodPtr)(
                             v15,
                             v15->klass->vtable._40_get_ReturnType.method);
    v40 = void_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v41.fields.value = (intptr_t)v40;
    TypeFromHandle = System_Type__GetTypeFromHandle(v41, 0);
    if ( System_Type__op_Inequality(v39, TypeFromHandle, 0) )
    {
      v15 = (System_Reflection_MethodInfo_o *)this->fields.mTarget;
      if ( v15 )
      {
        v43 = (System_String_o *)System_Object__GetType((Il2CppObject *)v15, 0);
        if ( v43 )
          v43 = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))v43->klass->vtable._3_ToString.methodPtr)(
                                     v43,
                                     v43->klass->vtable._3_ToString.method);
        v44 = this->fields.mMethodName;
        v45 = (System_String_o *)StringLiteral_981/*"."*/;
        v38 = (System_String_o *)StringLiteral_279/*" must have a 'void' return type."*/;
        goto LABEL_53;
      }
LABEL_82:
      sub_1C71608(v15, v14);
    }
    v15 = *p_mMethod;
    if ( !*p_mMethod )
      goto LABEL_82;
    v46 = (struct System_Reflection_ParameterInfo_array *)((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, const MethodInfo *))v15->klass->vtable._16_unknown.methodPtr)(
                                                            v15,
                                                            v15->klass->vtable._16_unknown.method);
    this->fields.mParameterInfos = v46;
    p_mParameterInfos = (__int64 *)&this->fields.mParameterInfos;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.mParameterInfos,
      (int32_t)v46,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    if ( !this->fields.mParameterInfos )
      goto LABEL_82;
    if ( this->fields.mParameterInfos->max_length )
    {
      this->fields.mCachedCallback = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mCachedCallback, 0, v54, v55, v56, v57, v58, v59);
      mParameters = this->fields.mParameters;
      this = (EventDelegate_o *)((char *)this + 32);
      klass = (EventDelegate_c *)mParameters;
      v62 = *(_QWORD *)&this->fields.oneShot;
      if ( mParameters )
      {
        if ( !v62 )
          goto LABEL_82;
        if ( LODWORD(klass->_1.namespaze) == *(_DWORD *)(v62 + 24) )
        {
LABEL_72:
          namespaze = (int)klass->_1.namespaze;
          if ( namespaze < 1 )
            return;
          if ( klass )
          {
            v95 = 0;
            while ( v95 < LODWORD(klass->_1.namespaze) )
            {
              v96 = *p_mParameterInfos;
              if ( !*p_mParameterInfos )
                goto LABEL_82;
              v97 = v95;
              if ( v95 >= *(_DWORD *)(v96 + 24) )
                break;
              v15 = *(System_Reflection_MethodInfo_o **)(v96 + 8LL * (int)v95 + 32);
              if ( v15 )
              {
                v98 = *((_QWORD *)&klass->_1.byval_arg.data + (int)v95);
                v15 = (System_Reflection_MethodInfo_o *)((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, const MethodInfo *))v15->klass->vtable._11_get_Module.methodPtr)(
                                                          v15,
                                                          v15->klass->vtable._11_get_Module.method);
                if ( v98 )
                {
                  *(_QWORD *)(v98 + 40) = v15;
                  sub_1C71354(
                    (GrandQuestFolderBoardItem_o *)(v98 + 40),
                    (int32_t)v15,
                    v99,
                    v100,
                    v101,
                    v102,
                    v103,
                    v104);
                  v95 = v97 + 1;
                  if ( namespaze == v97 + 1 )
                    return;
                  klass = this->klass;
                  if ( this->klass )
                    continue;
                }
              }
              goto LABEL_82;
            }
LABEL_85:
            sub_1C71610(v15);
          }
          goto LABEL_82;
        }
LABEL_63:
        v76 = (EventDelegate_c *)sub_1C71458(EventDelegate_Parameter___TypeInfo, *(unsigned int *)(v62 + 24));
        this->klass = v76;
        sub_1C71354((GrandQuestFolderBoardItem_o *)this, (int32_t)v76, v77, v78, v79, v80, v81, v82);
        klass = this->klass;
        if ( !this->klass )
          goto LABEL_82;
        if ( (int)klass->_1.namespaze >= 1 )
        {
          v83 = 0;
          v84 = (unsigned int)klass->_1.namespaze;
          v85 = 32;
          do
          {
            v86 = (EventDelegate_Parameter_o *)sub_1C715FC(EventDelegate_Parameter_TypeInfo);
            EventDelegate_Parameter___ctor(v86, v87);
            if ( !klass )
              goto LABEL_82;
            if ( v86 )
            {
              v15 = (System_Reflection_MethodInfo_o *)sub_1C714EC(v86, *((_QWORD *)klass->_1.image + 8));
              if ( !v15 )
              {
                v117 = sub_1C7162C(0);
                sub_1C714D8(v117, 0);
              }
            }
            if ( v83 >= LODWORD(klass->_1.namespaze) )
              goto LABEL_85;
            *(void **)((char *)&klass->_1.image + v85) = v86;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)((char *)klass + v85),
              (int32_t)v86,
              v88,
              v89,
              v90,
              v91,
              v92,
              v93);
            klass = this->klass;
            ++v83;
            v85 += 8;
          }
          while ( v84 != v83 );
          if ( !klass )
            goto LABEL_82;
        }
        goto LABEL_72;
      }
LABEL_62:
      if ( !v62 )
        goto LABEL_82;
      goto LABEL_63;
    }
    p_mParameterInfos = (__int64 *)EventDelegate_Callback_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v66.fields.value = (intptr_t)p_mParameterInfos;
    v67 = System_Type__GetTypeFromHandle(v66, 0);
    Delegate_65855788 = System_Delegate__CreateDelegate_65855788(
                          v67,
                          (Il2CppObject *)this->fields.mTarget,
                          this->fields.mMethodName,
                          0);
    if ( Delegate_65855788 )
    {
      v75 = EventDelegate_Callback_TypeInfo;
      if ( (EventDelegate_Callback_c *)Delegate_65855788->klass != EventDelegate_Callback_TypeInfo
        || (*p_mCachedCallback = (struct EventDelegate_Callback_o *)Delegate_65855788,
            (EventDelegate_Callback_c *)Delegate_65855788->klass != v75) )
      {
        sub_1C719A4(Delegate_65855788);
        goto LABEL_62;
      }
    }
    else
    {
      *p_mCachedCallback = 0;
    }
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.mCachedCallback,
      (int32_t)Delegate_65855788,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    this->fields.mArgs = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mArgs, 0, v105, v106, v107, v108, v109, v110);
    this->fields.mParameters = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mParameters, 0, v111, v112, v113, v114, v115, v116);
  }
}


void EventDelegate__Clear(EventDelegate_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  this->fields.mTarget = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, 0, v2, v3, v4, v5, v6, v7);
  this->fields.mMethodName = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mMethodName, 0, v9, v10, v11, v12, v13, v14);
  this->fields.mRawDelegate = 0;
  this->fields.mCachedCallback = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mCachedCallback, 0, v15, v16, v17, v18, v19, v20);
  this->fields.mParameters = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mParameters, 0, v21, v22, v23, v24, v25, v26);
  this->fields.mCached = 0;
  this->fields.mMethod = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mMethod, 0, v27, v28, v29, v30, v31, v32);
  this->fields.mParameterInfos = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mParameterInfos, 0, v33, v34, v35, v36, v37, v38);
  this->fields.mArgs = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mArgs, 0, v39, v40, v41, v42, v43, v44);
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

  if ( (byte_4CCBBA9 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBBA9 = 1;
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
          return System_String__Equals_64067772(mMethodName, monitor, 0);
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
        return System_String__Equals_64067772(mMethodName, monitor, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int max_length; // w22
  unsigned int v18; // w9
  __int64 v19; // x23
  struct System_Object_array *v20; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x21
  Il2CppClass **v28; // x0
  System_Reflection_MethodBase_o *mMethod; // x0
  int v30; // w21
  unsigned int v31; // w22
  struct System_Reflection_ParameterInfo_array *mParameterInfos; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_Reflection_ParameterInfo_array *v39; // x8
  struct EventDelegate_Parameter_array *v40; // x8
  struct System_Object_array *v41; // x9
  Il2CppObject *v42; // x1
  struct System_Object_array *v43; // x8
  Il2CppClass **v44; // x0
  __int64 v45; // x0

  if ( (byte_4CCBBAD & 1) == 0 )
  {
    sub_1C713B0(&object___TypeInfo);
    byte_4CCBBAD = 1;
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
        || (v10 = (struct System_Object_array *)sub_1C71458(object___TypeInfo, max_length_low),
            this->fields.mArgs = v10,
            sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mArgs, (int32_t)v10, v11, v12, v13, v14, v15, v16),
            (mParameters = this->fields.mParameters) != 0) )
      {
        max_length = mParameters->max_length;
        if ( max_length < 1 )
        {
LABEL_28:
          mMethod = (System_Reflection_MethodBase_o *)this->fields.mMethod;
          if ( !mMethod )
            sub_1C71608(0, max_length_low);
          IsOut = (__int64)System_Reflection_MethodBase__Invoke(
                             mMethod,
                             (Il2CppObject *)this->fields.mTarget,
                             this->fields.mArgs,
                             0);
          if ( *p_mArgs )
          {
            v30 = (*p_mArgs)->max_length;
            if ( v30 < 1 )
              return 1;
            v31 = 0;
            while ( 1 )
            {
              mParameterInfos = this->fields.mParameterInfos;
              if ( !mParameterInfos )
                break;
              if ( v31 >= LODWORD(mParameterInfos->max_length) )
                goto LABEL_52;
              IsOut = (__int64)mParameterInfos->m_Items[v31];
              if ( !IsOut )
                break;
              IsOut = System_Reflection_ParameterInfo__get_IsIn((System_Reflection_ParameterInfo_o *)IsOut, 0);
              if ( (IsOut & 1) != 0 )
                goto LABEL_40;
              v39 = this->fields.mParameterInfos;
              if ( !v39 )
                break;
              if ( v31 >= LODWORD(v39->max_length) )
                goto LABEL_52;
              IsOut = (__int64)v39->m_Items[v31];
              if ( !IsOut )
                break;
              IsOut = System_Reflection_ParameterInfo__get_IsOut((System_Reflection_ParameterInfo_o *)IsOut, 0);
              if ( (IsOut & 1) != 0 )
              {
LABEL_40:
                v40 = this->fields.mParameters;
                if ( !v40 )
                  break;
                if ( v31 >= LODWORD(v40->max_length) )
                  goto LABEL_52;
                v41 = *p_mArgs;
                if ( !*p_mArgs )
                  break;
                if ( v31 >= LODWORD(v41->max_length) )
                  goto LABEL_52;
                IsOut = (__int64)v40->m_Items[v31];
                if ( !IsOut )
                  break;
                v42 = v41->m_Items[v31];
                *(_QWORD *)(IsOut + 32) = v42;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(IsOut + 32), (int32_t)v42, v33, v34, v35, v36, v37, v38);
              }
              v43 = *p_mArgs;
              if ( !*p_mArgs )
                break;
              if ( v31 >= LODWORD(v43->max_length) )
                goto LABEL_52;
              v44 = &v43->obj.klass + (int)v31;
              v44[4] = 0;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v44 + 4), 0, v33, v34, v35, v36, v37, v38);
              if ( v30 == ++v31 )
                return 1;
            }
          }
        }
        else
        {
          v18 = 0;
          do
          {
            if ( v18 >= LODWORD(mParameters->max_length) )
              goto LABEL_52;
            v19 = (int)v18;
            IsOut = (__int64)mParameters->m_Items[v18];
            if ( !IsOut )
              break;
            v20 = *p_mArgs;
            IsOut = (__int64)EventDelegate_Parameter__get_value((EventDelegate_Parameter_o *)IsOut, max_length_low);
            if ( !v20 )
              break;
            v27 = IsOut;
            if ( IsOut )
            {
              IsOut = sub_1C714EC(IsOut, v20->obj.klass->_1.element_class);
              if ( !IsOut )
              {
                v45 = sub_1C7162C(0);
                sub_1C714D8(v45, 0);
              }
            }
            if ( (unsigned int)v19 >= LODWORD(v20->max_length) )
LABEL_52:
              sub_1C71610(IsOut);
            v28 = &v20->obj.klass + v19;
            v28[4] = (Il2CppClass *)v27;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v28 + 4), v27, v21, v22, v23, v24, v25, v26);
            v18 = v19 + 1;
            if ( max_length == (_DWORD)v19 + 1 )
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
    sub_1C71608(IsOut, max_length_low);
  }
  return 0;
}


void EventDelegate__Execute_49587556(System_Collections_Generic_List_EventDelegate__o *list, const MethodInfo *method)
{
  int32_t v3; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *v6; // x23
  int32_t size; // w8

  if ( (byte_4CCBBAF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_4CCBBAF = 1;
  }
  if ( list && list->fields._size >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)list,
               v3,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
      if ( !Item )
        break;
      v6 = Item;
      EventDelegate__Execute((EventDelegate_o *)Item, v5);
      if ( v3 >= list->fields._size )
        return;
      if ( System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             v3,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__) == v6 )
      {
        if ( !LOBYTE(v6[2].monitor) )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)list,
          v3,
          (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
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

  if ( (byte_4CCBBAA & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    byte_4CCBBAA = 1;
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
    sub_1C71608(callback, method);
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


bool EventDelegate__IsValid_49616128(System_Collections_Generic_List_EventDelegate__o *list, const MethodInfo *method)
{
  int32_t size; // w21
  int32_t v4; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CCBBB0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_4CCBBB0 = 1;
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
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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

  if ( (byte_4CCBBB7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_4CCBBB7 = 1;
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
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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
    (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
  return 1;
}


bool EventDelegate__Remove_49647048(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *ev,
        const MethodInfo *method)
{
  int32_t size; // w22
  int32_t v6; // w21
  Il2CppObject *Item; // x0

  if ( (byte_4CCBBB8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__get_Item__);
    byte_4CCBBB8 = 1;
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
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventDelegate__get_Item__);
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
    (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_EventDelegate__RemoveAt__);
  return 1;
}


void EventDelegate__Set(EventDelegate_o *this, EventDelegate_Callback_o *call, const MethodInfo *method)
{
  System_Reflection_MethodInfo_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *m_target; // x8
  UnityEngine_MonoBehaviour_c *v13; // x9
  __int64 naturalAligment; // x10
  Il2CppObject *v15; // x11
  int32_t v16; // w1
  GrandQuestFolderBoardItem_o *p_fields; // x21
  UnityEngine_Object_o *klass; // x21
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_String_o *MethodName; // x0
  struct System_String_o **p_mMethodName; // x19
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  if ( (byte_4CCBBAB & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_MonoBehaviour_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBBAB = 1;
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
        p_fields = (GrandQuestFolderBoardItem_o *)&this->fields;
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
        p_fields = (GrandQuestFolderBoardItem_o *)&this->fields;
      }
      sub_1C71354(p_fields, v16, v6, v7, v8, v9, v10, v11);
      klass = (UnityEngine_Object_o *)p_fields->klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(klass, 0, 0) )
      {
        this->fields.mRawDelegate = 1;
        this->fields.mCachedCallback = call;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.mCachedCallback,
          (int32_t)call,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        this->fields.mMethodName = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mMethodName, 0, v26, v27, v28, v29, v30, v31);
      }
      else
      {
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        MethodName = EventDelegate__GetMethodName(call, v19);
        this->fields.mMethodName = MethodName;
        p_mMethodName = &this->fields.mMethodName;
        sub_1C71354((GrandQuestFolderBoardItem_o *)p_mMethodName, (int32_t)MethodName, v34, v35, v36, v37, v38, v39);
        *((_BYTE *)p_mMethodName + 32) = 0;
      }
    }
  }
}


EventDelegate_o *EventDelegate__Set_49625676(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_Callback_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int size; // w2
  int version; // w9
  int32_t v16; // w8
  struct EventDelegate_array *items; // x10
  _QWORD *v18; // x11
  Il2CppClass **v19; // x0

  if ( (byte_4CCBBB1 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4CCBBB1 = 1;
  }
  if ( !list )
    return 0;
  v5 = (Il2CppObject *)sub_1C715FC(EventDelegate_TypeInfo);
  System_Object___ctor(v5, 0);
  EventDelegate__Set((EventDelegate_o *)v5, callback, v6);
  size = list->fields._size;
  version = list->fields._version + 1;
  list->fields._size = 0;
  list->fields._version = version;
  if ( size < 1 )
  {
    v16 = 0;
  }
  else
  {
    System_Array__Clear((System_Array_o *)list->fields._items, 0, size, 0);
    v16 = list->fields._size;
    version = list->fields._version;
  }
  items = list->fields._items;
  v18 = Method_System_Collections_Generic_List_EventDelegate__Add__;
  list->fields._version = version + 1;
  if ( !items )
    sub_1C71608(v7, v8);
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)list,
      v5,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + v16;
    list->fields._size = v16 + 1;
    v19[4] = (Il2CppClass *)v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v5, size, v9, v10, v11, v12, v13);
  }
  return (EventDelegate_o *)v5;
}


void EventDelegate__Set_49641544(
        EventDelegate_o *this,
        UnityEngine_MonoBehaviour_o *target,
        System_String_o *methodName,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  EventDelegate__Clear(this, (const MethodInfo *)target);
  this->fields.mTarget = target;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)target, v7, v8, v9, v10, v11, v12);
  this->fields.mMethodName = methodName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mMethodName,
    (int32_t)methodName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void EventDelegate__Set_49645432(
        System_Collections_Generic_List_EventDelegate__o *list,
        EventDelegate_o *del,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_EventDelegate__o *v9; // x20
  int32_t size; // w2
  int version; // w9
  int32_t v12; // w8
  struct EventDelegate_array *items; // x10
  _QWORD *v14; // x11
  Il2CppClass **v15; // x0

  v9 = list;
  if ( (byte_4CCBBB2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    list = (System_Collections_Generic_List_EventDelegate__o *)sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    byte_4CCBBB2 = 1;
  }
  if ( v9 )
  {
    size = v9->fields._size;
    version = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = version;
    if ( size < 1 )
    {
      v12 = 0;
    }
    else
    {
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
      v12 = v9->fields._size;
      version = v9->fields._version;
    }
    items = v9->fields._items;
    v14 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    v9->fields._version = version + 1;
    if ( !items )
      sub_1C71608(list, del);
    if ( (unsigned int)v12 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v9,
        (Il2CppObject *)del,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + v12;
      v9->fields._size = v12 + 1;
      v15[4] = (Il2CppClass *)del;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)del, size, v3, v4, v5, v6, v7);
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

  if ( (byte_4CCBBAE & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_15974/*"[delegate]"*/);
    sub_1C713B0(&StringLiteral_1041/*"/"*/);
    sub_1C713B0(&StringLiteral_1086/*"/[delegate]"*/);
    byte_4CCBBAE = 1;
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
      sub_1C71608(Type, v4);
    }
    v6 = (System_String_o *)Type;
    IndexOf = System_String__LastIndexOf((System_String_o *)Type, 0x2Eu, 0);
    if ( IndexOf >= 1 )
      v6 = System_String__Substring(v6, IndexOf + 1, 0);
    if ( System_String__IsNullOrEmpty(this->fields.mMethodName, 0) )
      return System_String__Concat_64031724(v6, (System_String_o *)StringLiteral_1086/*"/[delegate]"*/, 0);
    else
      return System_String__Concat_64069988(v6, (System_String_o *)StringLiteral_1041/*"/"*/, this->fields.mMethodName, 0);
  }
  else if ( this->fields.mRawDelegate )
  {
    return (System_String_o *)StringLiteral_15974/*"[delegate]"*/;
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

  if ( (byte_4CCBBA8 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBBA8 = 1;
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
    sub_1C71608(v6, v7);
  return UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v5, 0);
}


bool EventDelegate__get_isValid(EventDelegate_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mTarget; // x20

  if ( (byte_4CCBBA7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBBA7 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  this->fields.mMethodName = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mMethodName,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mCachedCallback = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mCachedCallback, 0, v9, v10, v11, v12, v13, v14);
  *(_WORD *)&this->fields.mRawDelegate = 0;
  this->fields.mMethod = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mMethod, 0, v15, v16, v17, v18, v19, v20);
  this->fields.mParameterInfos = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mParameterInfos, 0, v21, v22, v23, v24, v25, v26);
  this->fields.mParameters = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mParameters, 0, v27, v28, v29, v30, v31, v32);
}


void EventDelegate__set_target(EventDelegate_o *this, UnityEngine_MonoBehaviour_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  this->fields.mTarget = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.mCachedCallback = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mCachedCallback, 0, v9, v10, v11, v12, v13, v14);
  *(_WORD *)&this->fields.mRawDelegate = 0;
  this->fields.mMethod = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mMethod, 0, v15, v16, v17, v18, v19, v20);
  this->fields.mParameterInfos = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mParameterInfos, 0, v21, v22, v23, v24, v25, v26);
  this->fields.mParameters = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mParameters, 0, v27, v28, v29, v30, v31, v32);
}


void EventDelegate_Callback___ctor(
        EventDelegate_Callback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AAE4C0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAE480;
}


System_IAsyncResult_o *EventDelegate_Callback__BeginInvoke(
        EventDelegate_Callback_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void EventDelegate_Callback__EndInvoke(
        EventDelegate_Callback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCBBBA & 1) == 0 )
  {
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&void_var);
    byte_4CCBBBA = 1;
  }
  v3 = void_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  this->fields.expectedType = TypeFromHandle;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.expectedType,
    (int32_t)TypeFromHandle,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventDelegate_Parameter___ctor_49647372(
        EventDelegate_Parameter_o *this,
        UnityEngine_Object_o *obj,
        System_String_o *field,
        const MethodInfo *method)
{
  Il2CppType *v7; // x22
  System_RuntimeTypeHandle_o v8; // x0
  struct System_Type_o *TypeFromHandle; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4CCBBBB & 1) == 0 )
  {
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&void_var);
    byte_4CCBBBB = 1;
  }
  v7 = void_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v8.fields.value = (intptr_t)v7;
  TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
  this->fields.expectedType = TypeFromHandle;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.expectedType,
    (int32_t)TypeFromHandle,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.obj = obj;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)obj, v16, v17, v18, v19, v20, v21);
  this->fields.field = field;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.field, (int32_t)field, v22, v23, v24, v25, v26, v27);
}


void EventDelegate_Parameter___ctor_49647568(
        EventDelegate_Parameter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  Il2CppType *v5; // x21
  System_RuntimeTypeHandle_o v6; // x0
  struct System_Type_o *TypeFromHandle; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CCBBBC & 1) == 0 )
  {
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&void_var);
    byte_4CCBBBC = 1;
  }
  v5 = void_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = (intptr_t)v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  this->fields.expectedType = TypeFromHandle;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.expectedType,
    (int32_t)TypeFromHandle,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.mValue = val;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mValue, (int32_t)val, v14, v15, v16, v17, v18, v19);
}


System_Type_o *EventDelegate_Parameter__get_type(EventDelegate_Parameter_o *this, const MethodInfo *method)
{
  Il2CppObject *mValue; // x0
  UnityEngine_Object_o *obj; // x20
  __int64 v5; // x1
  Il2CppType *v6; // x19
  System_RuntimeTypeHandle_o v7; // x0

  if ( (byte_4CCBBBE & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Type_TypeInfo);
    sub_1C713B0(&void_var);
    byte_4CCBBBE = 1;
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
      sub_1C71608(0, v5);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *result; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *obj; // x22
  __int64 v17; // x1
  Il2CppObject *Type; // x0
  System_Type_o *v19; // x22
  struct System_Reflection_PropertyInfo_o *Property; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Reflection_FieldInfo_o *Field; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UnityEngine_Object_o *v34; // x20
  System_Type_o *expectedType; // x20
  bool IsValueType; // w8
  System_Type_o *v37; // x19

  if ( (byte_4CCBBBD & 1) == 0 )
  {
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Type_TypeInfo);
    byte_4CCBBBD = 1;
  }
  result = this->fields.mValue;
  if ( !result )
  {
    if ( !this->fields.cached )
    {
      this->fields.cached = 1;
      this->fields.fieldInfo = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.fieldInfo, 0, v2, v3, v4, v5, v6, v7);
      this->fields.propInfo = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.propInfo, 0, v10, v11, v12, v13, v14, v15);
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
        v19 = (System_Type_o *)Type;
        Property = System_Type__GetProperty((System_Type_o *)Type, this->fields.field, 0);
        this->fields.propInfo = Property;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.propInfo,
          (int32_t)Property,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        if ( System_Reflection_PropertyInfo__op_Equality(this->fields.propInfo, 0, 0) )
        {
          Field = System_Type__GetField(v19, this->fields.field, 0);
          this->fields.fieldInfo = Field;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.fieldInfo,
            (int32_t)Field,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
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
        v34 = this->fields.obj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
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
        v37 = this->fields.expectedType;
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        return System_Convert__ChangeType_65105600(0, v37, 0);
      }
      Type = (Il2CppObject *)this->fields.fieldInfo;
      if ( Type )
        return (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, struct UnityEngine_Object_o *, const MethodInfo *))Type->klass->vtable[25].methodPtr)(
                                 Type,
                                 this->fields.obj,
                                 Type->klass->vtable[25].method);
    }
LABEL_32:
    sub_1C71608(Type, v17);
  }
  return result;
}


void EventDelegate_Parameter__set_value(EventDelegate_Parameter_o *this, Il2CppObject *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.mValue = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mValue, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}