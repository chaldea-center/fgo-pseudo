void UIToggle___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593CDB6 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UIToggle___ctor__);
    sub_21FFC50(&BetterList_UIToggle__TypeInfo);
    sub_21FFC50(&UIToggle_TypeInfo);
    byte_593CDB6 = 1;
  }
  v1 = (BetterList_T__o *)sub_21FFEBC(BetterList_UIToggle__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_3E3C988 *)Method_BetterList_UIToggle___ctor__);
  UIToggle_TypeInfo->static_fields->list = (struct BetterList_UIToggle__o *)v1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)UIToggle_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void UIToggle___ctor(UIToggle_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593CDB5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_21FFC50(&StringLiteral_10218/*"OnActivate"*/);
    byte_593CDB5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onChange, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_10218/*"OnActivate"*/;
  this->fields.functionName = (struct System_String_o *)StringLiteral_10218/*"OnActivate"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.functionName, v10, v11, v12, v13, v14, v15, v16);
  this->fields.mIsActive = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UIToggle_o *UIToggle__GetActiveToggle(int32_t group, const MethodInfo *method)
{
  int32_t i; // w20
  UIToggle_c *v4; // x0
  BetterList_T__o *list; // x8
  __int64 v6; // x1
  Il2CppObject *Item; // x21

  if ( (byte_593CDB0 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UIToggle__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIToggle_TypeInfo);
    byte_593CDB0 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v4 = UIToggle_TypeInfo;
    if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, method);
      v4 = UIToggle_TypeInfo;
    }
    list = (BetterList_T__o *)v4->static_fields->list;
    if ( !list )
LABEL_19:
      sub_21FFECC(v4, method);
    if ( i >= list->fields.size )
      break;
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      list = (BetterList_T__o *)UIToggle_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_19;
    }
    Item = BetterList_object___get_Item(list, i, (const MethodInfo_3E3C040 *)Method_BetterList_UIToggle__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v4 = (UIToggle_c *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_19;
      if ( LODWORD(Item[2].klass) == group && BYTE1(Item[7].klass) )
        return (UIToggle_o *)Item;
    }
  }
  return 0;
}


void UIToggle__OnClick(UIToggle_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x8

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v4 = 113;
    if ( !this->fields.mStarted )
      v4 = 56;
    UIToggle__set_value(this, *((_BYTE *)&this->klass + v4) == 0, v3);
  }
}


void UIToggle__OnDisable(UIToggle_o *this, const MethodInfo *method)
{
  UIToggle_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_593CDB2 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UIToggle__Remove__);
    sub_21FFC50(&UIToggle_TypeInfo);
    byte_593CDB2 = 1;
  }
  v3 = UIToggle_TypeInfo;
  if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, method);
    v3 = UIToggle_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_21FFECC(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_3E3C51C *)Method_BetterList_UIToggle__Remove__);
}


void UIToggle__OnEnable(UIToggle_o *this, const MethodInfo *method)
{
  UIToggle_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_593CDB1 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UIToggle__Add__);
    sub_21FFC50(&UIToggle_TypeInfo);
    byte_593CDB1 = 1;
  }
  v3 = UIToggle_TypeInfo;
  if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, method);
    v3 = UIToggle_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_21FFECC(0, method);
  BetterList_object___Add(list, (Il2CppObject *)this, (const MethodInfo_3E3C260 *)Method_BetterList_UIToggle__Add__);
}


// local variable allocation has failed, the output may be wrong!
void UIToggle__Set(UIToggle_o *this, bool state, const MethodInfo *method)
{
  struct UIToggle_Validate_o *validator; // x8
  _BOOL4 v6; // w23
  __int64 Active; // x0
  __int64 v8; // x8
  int size; // w27
  int32_t v10; // w21
  __int64 v11; // x1
  Il2CppObject *Item; // x22
  const MethodInfo *v13; // x2
  struct BetterList_UIToggle__o *list; // x8
  UnityEngine_Object_o *activeSprite; // x21
  long double v16; // q0
  UnityEngine_GameObject_o *gameObject; // x0
  float v18; // s1
  UnityEngine_Object_o *v19; // x21
  long double v20; // q0
  UIToggle_c *v21; // x0
  UnityEngine_Object_o *current; // x21
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UIToggle_c *v30; // x0
  MissionNaviTransitionBoardItem_o *static_fields; // x0
  struct UIToggle_o *v32; // x21
  struct UIToggle_o *monitor; // t1
  const MethodInfo *v34; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x22
  const MethodInfo *v36; // x1
  System_Collections_Generic_List_EventDelegate__o *v37; // x22
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  UnityEngine_Object_o *eventReceiver; // x22
  UnityEngine_GameObject_o *v46; // x22
  System_String_o *functionName; // x23
  UIToggle_c *v48; // x0
  struct UIToggle_StaticFields *v49; // x0
  UnityEngine_Object_o *activeAnimation; // x21
  const MethodInfo *v51; // x5
  int32_t v52; // w2
  __int64 v53; // x1
  UnityEngine_Object_o *v54; // x20
  bool v55[4]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593CDB4 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_UIToggle__get_Item__);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIToggle_TypeInfo);
    byte_593CDB4 = 1;
  }
  validator = this->fields.validator;
  if ( !validator
    || (((__int64 (__fastcall *)(intptr_t, bool, intptr_t))validator->fields.invoke_impl)(
          validator->fields.method_code,
          state,
          validator->fields.method)
      & 1) != 0 )
  {
    v6 = state;
    if ( this->fields.mStarted )
    {
      if ( this->fields.mIsActive != v6 )
      {
        if ( this->fields.group && state )
        {
          Active = (__int64)UIToggle_TypeInfo;
          if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, state);
            Active = (__int64)UIToggle_TypeInfo;
          }
          v8 = **(_QWORD **)(Active + 184);
          if ( !v8 )
            goto LABEL_92;
          size = *(_DWORD *)(v8 + 24);
          if ( size >= 1 )
          {
            while ( 1 )
            {
              v10 = 0;
              while ( 1 )
              {
                if ( !*(_DWORD *)(Active + 228) )
                {
                  j_il2cpp_runtime_class_init_0(Active, state);
                  Active = (__int64)UIToggle_TypeInfo;
                }
                Active = **(_QWORD **)(Active + 184);
                if ( !Active )
                  goto LABEL_92;
                Item = BetterList_object___get_Item(
                         (BetterList_T__o *)Active,
                         v10,
                         (const MethodInfo_3E3C040 *)Method_BetterList_UIToggle__get_Item__);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
                Active = UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)Item,
                           (UnityEngine_Object_o *)this,
                           0);
                if ( (Active & 1) != 0 )
                {
                  if ( !Item )
                    goto LABEL_92;
                  if ( LODWORD(Item[2].klass) == this->fields.group )
                    UIToggle__Set((UIToggle_o *)Item, 0, v13);
                }
                Active = (__int64)UIToggle_TypeInfo;
                if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, state);
                  Active = (__int64)UIToggle_TypeInfo;
                }
                list = **(struct BetterList_UIToggle__o ***)(Active + 184);
                if ( !list )
                  goto LABEL_92;
                if ( list->fields.size != size )
                  break;
                if ( size == ++v10 )
                  goto LABEL_32;
              }
              if ( !*(_DWORD *)(Active + 228) )
              {
                j_il2cpp_runtime_class_init_0(Active, state);
                Active = (__int64)UIToggle_TypeInfo;
                list = UIToggle_TypeInfo->static_fields->list;
                if ( !list )
                  break;
              }
              size = list->fields.size;
              if ( size <= 0 )
                goto LABEL_32;
            }
LABEL_92:
            sub_21FFECC(Active, state);
          }
        }
LABEL_32:
        activeSprite = (UnityEngine_Object_o *)this->fields.activeSprite;
        this->fields.mIsActive = v6;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, state);
        if ( UnityEngine_Object__op_Inequality(activeSprite, 0, 0) )
        {
          if ( this->fields.instantTween )
            goto LABEL_50;
          if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, state);
          if ( !NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
          {
LABEL_50:
            Active = (__int64)this->fields.activeSprite;
            if ( !Active )
              goto LABEL_92;
            *(_QWORD *)&v16 = 0;
            if ( this->fields.mIsActive )
              *(float *)&v16 = 1.0;
            (*(void (__fastcall **)(long double))(*(_QWORD *)Active + 440LL))(v16);
          }
          else
          {
            Active = (__int64)this->fields.activeSprite;
            if ( !Active )
              goto LABEL_92;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Active, 0);
            v18 = 1.0;
            if ( !this->fields.mIsActive )
              v18 = 0.0;
            TweenAlpha__Begin(gameObject, 0.15, v18, 0);
          }
        }
        v21 = UIToggle_TypeInfo;
        if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, state);
          v21 = UIToggle_TypeInfo;
        }
        current = (UnityEngine_Object_o *)v21->static_fields->current;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, state);
        if ( UnityEngine_Object__op_Equality(current, 0, 0) )
        {
          v30 = UIToggle_TypeInfo;
          if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, v23);
            v30 = UIToggle_TypeInfo;
          }
          static_fields = (MissionNaviTransitionBoardItem_o *)v30->static_fields;
          monitor = (struct UIToggle_o *)static_fields->monitor;
          static_fields = (MissionNaviTransitionBoardItem_o *)((char *)static_fields + 8);
          v32 = monitor;
          static_fields->klass = (MissionNaviTransitionBoardItem_c *)this;
          sub_21FFBF4(static_fields, (int32_t)this, v24, v25, v26, v27, v28, v29);
          onChange = this->fields.onChange;
          if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v34);
          if ( EventDelegate__IsValid_56108212(onChange, v34) )
          {
            v37 = this->fields.onChange;
            if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v36);
            EventDelegate__Execute_56080488(v37, v36);
          }
          else
          {
            eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
            if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
              && !System_String__IsNullOrEmpty(this->fields.functionName, 0) )
            {
              v46 = this->fields.eventReceiver;
              functionName = this->fields.functionName;
              v55[0] = this->fields.mIsActive;
              Active = j_il2cpp_value_box_0(qword_594C050, v55);
              if ( !v46 )
                goto LABEL_92;
              UnityEngine_GameObject__SendMessage_83220264(v46, functionName, (Il2CppObject *)Active, 1, 0);
            }
          }
          v48 = UIToggle_TypeInfo;
          if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, v38);
            v48 = UIToggle_TypeInfo;
          }
          v49 = v48->static_fields;
          v49->current = v32;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->current, (int32_t)v32, v39, v40, v41, v42, v43, v44);
        }
        activeAnimation = (UnityEngine_Object_o *)this->fields.activeAnimation;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
        if ( UnityEngine_Object__op_Inequality(activeAnimation, 0, 0) )
        {
          if ( state )
            v52 = 1;
          else
            v52 = -1;
          v54 = (UnityEngine_Object_o *)ActiveAnimation__Play_56108440(this->fields.activeAnimation, 0, v52, 2, 0, v51);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
          Active = UnityEngine_Object__op_Inequality(v54, 0, 0);
          if ( (Active & 1) != 0 )
          {
            if ( this->fields.instantTween )
              goto LABEL_89;
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, state);
            Active = NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0);
            if ( (Active & 1) == 0 )
            {
LABEL_89:
              if ( !v54 )
                goto LABEL_92;
              ActiveAnimation__Finish((ActiveAnimation_o *)v54, (const MethodInfo *)state);
            }
          }
        }
      }
    }
    else
    {
      v19 = (UnityEngine_Object_o *)this->fields.activeSprite;
      this->fields.mIsActive = v6;
      this->fields.startsActive = v6;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, state);
      if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
      {
        Active = (__int64)this->fields.activeSprite;
        if ( !Active )
          goto LABEL_92;
        *(_QWORD *)&v20 = 0;
        if ( state )
          *(float *)&v20 = 1.0;
        (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)Active + 440LL))(
          Active,
          *(_QWORD *)(*(_QWORD *)Active + 448LL),
          v20);
      }
    }
  }
}


void UIToggle__Start(UIToggle_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  bool startsActive; // w1
  bool instantTween; // w20
  struct UIWidget_o **p_checkSprite; // x20
  UnityEngine_Object_o *checkSprite; // x21
  __int64 v9; // x1
  UnityEngine_Object_o *activeSprite; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UIWidget_o *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UnityEngine_Animation_o **p_checkAnimation; // x20
  UnityEngine_Object_o *checkAnimation; // x21
  __int64 v26; // x1
  UnityEngine_Object_o *activeAnimation; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct UnityEngine_Animation_o *v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  const MethodInfo *v41; // x1
  UnityEngine_Object_o *v42; // x20
  long double v43; // q0
  struct UIWidget_o *v44; // x0
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7

  if ( (byte_593CDB3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CDB3 = 1;
  }
  if ( this->fields.startsChecked )
  {
    this->fields.startsChecked = 0;
    this->fields.startsActive = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    startsActive = this->fields.startsActive;
    instantTween = this->fields.instantTween;
    this->fields.mStarted = 1;
    this->fields.instantTween = 1;
    this->fields.mIsActive = !startsActive;
    UIToggle__Set(this, startsActive, v4);
    this->fields.instantTween = instantTween;
  }
  else
  {
    p_checkSprite = (struct UIWidget_o **)&this->fields.checkSprite;
    checkSprite = (UnityEngine_Object_o *)this->fields.checkSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( UnityEngine_Object__op_Inequality(checkSprite, 0, 0) )
    {
      activeSprite = (UnityEngine_Object_o *)this->fields.activeSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( UnityEngine_Object__op_Equality(activeSprite, 0, 0) )
      {
        v17 = *p_checkSprite;
        this->fields.activeSprite = *p_checkSprite;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.activeSprite,
          (int32_t)v17,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        *p_checkSprite = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.checkSprite, 0, v18, v19, v20, v21, v22, v23);
      }
    }
    p_checkAnimation = &this->fields.checkAnimation;
    checkAnimation = (UnityEngine_Object_o *)this->fields.checkAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(checkAnimation, 0, 0) )
    {
      activeAnimation = (UnityEngine_Object_o *)this->fields.activeAnimation;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      if ( UnityEngine_Object__op_Equality(activeAnimation, 0, 0) )
      {
        v34 = *p_checkAnimation;
        this->fields.activeAnimation = *p_checkAnimation;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.activeAnimation,
          (int32_t)v34,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        *p_checkAnimation = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.checkAnimation, 0, v35, v36, v37, v38, v39, v40);
      }
    }
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v26);
    if ( UnityEngine_Application__get_isPlaying(0) )
    {
      v42 = (UnityEngine_Object_o *)this->fields.activeSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
      if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
      {
        v44 = this->fields.activeSprite;
        if ( !v44 )
          sub_21FFECC(0, v41);
        *(_QWORD *)&v43 = 0;
        if ( this->fields.startsActive )
          *(float *)&v43 = 1.0;
        ((void (__fastcall *)(long double))v44->klass->vtable._8_set_alpha.methodPtr)(v43);
      }
    }
    onChange = this->fields.onChange;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v41);
    if ( EventDelegate__IsValid_56108212(onChange, v41) )
    {
      this->fields.eventReceiver = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventReceiver, 0, v46, v47, v48, v49, v50, v51);
      this->fields.functionName = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.functionName, 0, v52, v53, v54, v55, v56, v57);
    }
  }
}


bool UIToggle__get_isChecked(UIToggle_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 113;
  if ( !this->fields.mStarted )
    v2 = 56;
  return *((_BYTE *)&this->klass + v2);
}


bool UIToggle__get_value(UIToggle_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 113;
  if ( !this->fields.mStarted )
    v2 = 56;
  return *((_BYTE *)&this->klass + v2);
}


void UIToggle__set_value(UIToggle_o *this, bool value, const MethodInfo *method)
{
  if ( this->fields.mStarted )
  {
    if ( !this->fields.group || value || this->fields.optionCanBeNone )
      UIToggle__Set(this, value, method);
  }
  else
  {
    this->fields.startsActive = value;
  }
}


void UIToggle_Validate___ctor(UIToggle_Validate_o *this, Il2CppObject *object, intptr_t method, const MethodInfo *a4)
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2003CF0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2003C9C;
}


System_IAsyncResult_o *UIToggle_Validate__BeginInvoke(
        UIToggle_Validate_o *this,
        bool choice,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = choice;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


bool UIToggle_Validate__EndInvoke(UIToggle_Validate_o *this, System_IAsyncResult_o *result, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  v3 = sub_21FFC08(result, 0, method);
  if ( !v3 )
    sub_21FFECC(0, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3, v4, v5);
}


bool UIToggle_Validate__Invoke(UIToggle_Validate_o *this, bool choice, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           choice,
           this->fields.method);
}