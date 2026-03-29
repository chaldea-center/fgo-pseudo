void UIToggle___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D35152 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIToggle___ctor__);
    sub_1C93AD4(&BetterList_UIToggle__TypeInfo);
    sub_1C93AD4(&UIToggle_TypeInfo);
    byte_4D35152 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C93D20(BetterList_UIToggle__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_33DC638 *)Method_BetterList_UIToggle___ctor__);
  UIToggle_TypeInfo->static_fields->list = (struct BetterList_UIToggle__o *)v1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)UIToggle_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void UIToggle___ctor(UIToggle_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D35151 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C93AD4(&StringLiteral_9887/*"OnActivate"*/);
    byte_4D35151 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onChange, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_9887/*"OnActivate"*/;
  this->fields.functionName = (struct System_String_o *)StringLiteral_9887/*"OnActivate"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.functionName, v10, v11, v12, v13, v14, v15, v16);
  this->fields.mIsActive = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UIToggle_o *UIToggle__GetActiveToggle(int32_t group, const MethodInfo *method)
{
  int32_t i; // w20
  UIToggle_c *v4; // x0
  BetterList_T__o *list; // x8
  Il2CppObject *Item; // x21

  if ( (byte_4D3514C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIToggle__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIToggle_TypeInfo);
    byte_4D3514C = 1;
  }
  for ( i = 0; ; ++i )
  {
    v4 = UIToggle_TypeInfo;
    if ( !UIToggle_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
      v4 = UIToggle_TypeInfo;
    }
    list = (BetterList_T__o *)v4->static_fields->list;
    if ( !list )
LABEL_19:
      sub_1C93D2C(v4, method);
    if ( i >= list->fields.size )
      break;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      list = (BetterList_T__o *)UIToggle_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_19;
    }
    Item = BetterList_object___get_Item(list, i, (const MethodInfo_33DBCE4 *)Method_BetterList_UIToggle__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v4 = 56;
    if ( this->fields.mStarted )
      v4 = 113;
    UIToggle__set_value(this, *((_BYTE *)&this->klass + v4) == 0, v3);
  }
}


void UIToggle__OnDisable(UIToggle_o *this, const MethodInfo *method)
{
  UIToggle_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_4D3514E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIToggle__Remove__);
    sub_1C93AD4(&UIToggle_TypeInfo);
    byte_4D3514E = 1;
  }
  v3 = UIToggle_TypeInfo;
  if ( !UIToggle_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
    v3 = UIToggle_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C93D2C(0, method);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_33DC1C4 *)Method_BetterList_UIToggle__Remove__);
}


void UIToggle__OnEnable(UIToggle_o *this, const MethodInfo *method)
{
  UIToggle_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_4D3514D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIToggle__Add__);
    sub_1C93AD4(&UIToggle_TypeInfo);
    byte_4D3514D = 1;
  }
  v3 = UIToggle_TypeInfo;
  if ( !UIToggle_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
    v3 = UIToggle_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C93D2C(0, method);
  BetterList_object___Add(list, (Il2CppObject *)this, (const MethodInfo_33DBF0C *)Method_BetterList_UIToggle__Add__);
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
  int v11; // w28
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UIToggle_c *v29; // x0
  GrandQuestFolderBoardItem_o *static_fields; // x0
  struct UIToggle_o *v31; // x21
  struct UIToggle_o *monitor; // t1
  const MethodInfo *v33; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x22
  bool IsValid_49972204; // w0
  const MethodInfo *v36; // x1
  struct UIToggle_o *v37; // x25
  System_Collections_Generic_List_EventDelegate__o *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  UnityEngine_Object_o *eventReceiver; // x22
  UnityEngine_GameObject_o *v46; // x21
  System_String_o *functionName; // x22
  UIToggle_c *v48; // x0
  struct UIToggle_StaticFields *v49; // x0
  UnityEngine_Object_o *activeAnimation; // x21
  const MethodInfo *v51; // x5
  int32_t v52; // w2
  UnityEngine_Object_o *v53; // x20
  bool v54[4]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D35150 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UIToggle__get_Item__);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIToggle_TypeInfo);
    byte_4D35150 = 1;
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
          if ( !UIToggle_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
            Active = (__int64)UIToggle_TypeInfo;
          }
          v8 = **(_QWORD **)(Active + 184);
          if ( !v8 )
            goto LABEL_98;
          size = *(_DWORD *)(v8 + 24);
          if ( size >= 1 )
          {
            while ( 1 )
            {
              v10 = 0;
              v11 = size <= 1 ? 1 : size;
              while ( 1 )
              {
                if ( !*(_DWORD *)(Active + 224) )
                {
                  j_il2cpp_runtime_class_init_0(Active);
                  Active = (__int64)UIToggle_TypeInfo;
                }
                Active = **(_QWORD **)(Active + 184);
                if ( !Active )
                  goto LABEL_98;
                Item = BetterList_object___get_Item(
                         (BetterList_T__o *)Active,
                         v10,
                         (const MethodInfo_33DBCE4 *)Method_BetterList_UIToggle__get_Item__);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                Active = UnityEngine_Object__op_Inequality(
                           (UnityEngine_Object_o *)Item,
                           (UnityEngine_Object_o *)this,
                           0);
                if ( (Active & 1) != 0 )
                {
                  if ( !Item )
                    goto LABEL_98;
                  if ( LODWORD(Item[2].klass) == this->fields.group )
                    UIToggle__Set((UIToggle_o *)Item, 0, v13);
                }
                Active = (__int64)UIToggle_TypeInfo;
                if ( !UIToggle_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
                  Active = (__int64)UIToggle_TypeInfo;
                }
                list = **(struct BetterList_UIToggle__o ***)(Active + 184);
                if ( !list )
                  goto LABEL_98;
                if ( list->fields.size != size )
                  break;
                if ( v11 == ++v10 )
                  goto LABEL_34;
              }
              if ( !*(_DWORD *)(Active + 224) )
              {
                j_il2cpp_runtime_class_init_0(Active);
                Active = (__int64)UIToggle_TypeInfo;
                list = UIToggle_TypeInfo->static_fields->list;
                if ( !list )
                  break;
              }
              size = list->fields.size;
              if ( size <= 0 )
                goto LABEL_34;
            }
LABEL_98:
            sub_1C93D2C(Active, state);
          }
        }
LABEL_34:
        this->fields.mIsActive = v6;
        activeSprite = (UnityEngine_Object_o *)this->fields.activeSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(activeSprite, 0, 0) )
        {
          if ( this->fields.instantTween )
            goto LABEL_52;
          if ( !NGUITools_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          if ( !NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
          {
LABEL_52:
            Active = (__int64)this->fields.activeSprite;
            if ( !Active )
              goto LABEL_98;
            LODWORD(v16) = 1.0;
            if ( !this->fields.mIsActive )
              *(float *)&v16 = 0.0;
            (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)Active + 440LL))(
              Active,
              *(_QWORD *)(*(_QWORD *)Active + 448LL),
              v16);
          }
          else
          {
            Active = (__int64)this->fields.activeSprite;
            if ( !Active )
              goto LABEL_98;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Active, 0);
            v18 = 0.0;
            if ( this->fields.mIsActive )
              v18 = 1.0;
            TweenAlpha__Begin(gameObject, 0.15, v18, 0);
          }
        }
        v21 = UIToggle_TypeInfo;
        if ( !UIToggle_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
          v21 = UIToggle_TypeInfo;
        }
        current = (UnityEngine_Object_o *)v21->static_fields->current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(current, 0, 0) )
        {
          v29 = UIToggle_TypeInfo;
          if ( !UIToggle_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
            v29 = UIToggle_TypeInfo;
          }
          static_fields = (GrandQuestFolderBoardItem_o *)v29->static_fields;
          monitor = (struct UIToggle_o *)static_fields->monitor;
          static_fields = (GrandQuestFolderBoardItem_o *)((char *)static_fields + 8);
          v31 = monitor;
          static_fields->klass = (GrandQuestFolderBoardItem_c *)this;
          sub_1C93A78(static_fields, (int32_t)this, v23, v24, v25, v26, v27, v28);
          onChange = this->fields.onChange;
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          IsValid_49972204 = EventDelegate__IsValid_49972204(onChange, v33);
          if ( IsValid_49972204 )
            v37 = 0;
          else
            v37 = v31;
          if ( IsValid_49972204 )
          {
            v38 = this->fields.onChange;
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            EventDelegate__Execute_49943632(v38, v36);
          }
          else
          {
            eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0) )
            {
              if ( !System_String__IsNullOrEmpty(this->fields.functionName, 0) )
              {
                v46 = this->fields.eventReceiver;
                functionName = this->fields.functionName;
                v54[0] = this->fields.mIsActive;
                Active = j_il2cpp_value_box_0(bool_TypeInfo, v54);
                if ( !v46 )
                  goto LABEL_98;
                UnityEngine_GameObject__SendMessage_72100192(v46, functionName, (Il2CppObject *)Active, 1, 0);
              }
              v31 = v37;
            }
          }
          v48 = UIToggle_TypeInfo;
          if ( !UIToggle_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
            v48 = UIToggle_TypeInfo;
          }
          v49 = v48->static_fields;
          v49->current = v31;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v49->current, (int32_t)v31, v39, v40, v41, v42, v43, v44);
        }
        activeAnimation = (UnityEngine_Object_o *)this->fields.activeAnimation;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(activeAnimation, 0, 0) )
        {
          if ( state )
            v52 = 1;
          else
            v52 = -1;
          v53 = (UnityEngine_Object_o *)ActiveAnimation__Play_49972432(this->fields.activeAnimation, 0, v52, 2, 0, v51);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Active = UnityEngine_Object__op_Inequality(v53, 0, 0);
          if ( (Active & 1) != 0 )
          {
            if ( this->fields.instantTween )
              goto LABEL_95;
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            Active = NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0);
            if ( (Active & 1) == 0 )
            {
LABEL_95:
              if ( !v53 )
                goto LABEL_98;
              ActiveAnimation__Finish((ActiveAnimation_o *)v53, (const MethodInfo *)state);
            }
          }
        }
      }
    }
    else
    {
      this->fields.mIsActive = v6;
      this->fields.startsActive = v6;
      v19 = (UnityEngine_Object_o *)this->fields.activeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
      {
        Active = (__int64)this->fields.activeSprite;
        if ( !Active )
          goto LABEL_98;
        LODWORD(v20) = 0;
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
  const MethodInfo *v3; // x2
  bool startsActive; // w1
  bool instantTween; // w20
  struct UIWidget_o **p_checkSprite; // x20
  UnityEngine_Object_o *checkSprite; // x21
  UnityEngine_Object_o *activeSprite; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct UIWidget_o *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct UnityEngine_Animation_o **p_checkAnimation; // x20
  UnityEngine_Object_o *checkAnimation; // x21
  UnityEngine_Object_o *activeAnimation; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UnityEngine_Animation_o *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  const MethodInfo *v38; // x1
  UnityEngine_Object_o *v39; // x20
  long double v40; // q0
  struct UIWidget_o *v41; // x0
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7

  if ( (byte_4D3514F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3514F = 1;
  }
  if ( this->fields.startsChecked )
  {
    this->fields.startsChecked = 0;
    this->fields.startsActive = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    startsActive = this->fields.startsActive;
    instantTween = this->fields.instantTween;
    this->fields.mStarted = 1;
    this->fields.mIsActive = !startsActive;
    this->fields.instantTween = 1;
    UIToggle__Set(this, startsActive, v3);
    this->fields.instantTween = instantTween;
  }
  else
  {
    p_checkSprite = (struct UIWidget_o **)&this->fields.checkSprite;
    checkSprite = (UnityEngine_Object_o *)this->fields.checkSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(checkSprite, 0, 0) )
    {
      activeSprite = (UnityEngine_Object_o *)this->fields.activeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(activeSprite, 0, 0) )
      {
        v15 = *p_checkSprite;
        this->fields.activeSprite = *p_checkSprite;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.activeSprite,
          (int32_t)v15,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        *p_checkSprite = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.checkSprite, 0, v16, v17, v18, v19, v20, v21);
      }
    }
    p_checkAnimation = &this->fields.checkAnimation;
    checkAnimation = (UnityEngine_Object_o *)this->fields.checkAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(checkAnimation, 0, 0) )
    {
      activeAnimation = (UnityEngine_Object_o *)this->fields.activeAnimation;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(activeAnimation, 0, 0) )
      {
        v31 = *p_checkAnimation;
        this->fields.activeAnimation = *p_checkAnimation;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.activeAnimation,
          (int32_t)v31,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        *p_checkAnimation = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.checkAnimation, 0, v32, v33, v34, v35, v36, v37);
      }
    }
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    if ( UnityEngine_Application__get_isPlaying(0) )
    {
      v39 = (UnityEngine_Object_o *)this->fields.activeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v39, 0, 0) )
      {
        v41 = this->fields.activeSprite;
        if ( !v41 )
          sub_1C93D2C(0, v38);
        LODWORD(v40) = 1.0;
        if ( !this->fields.startsActive )
          *(float *)&v40 = 0.0;
        ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, long double))v41->klass->vtable._8_set_alpha.methodPtr)(
          v41,
          v41->klass->vtable._8_set_alpha.method,
          v40);
      }
    }
    onChange = this->fields.onChange;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    if ( EventDelegate__IsValid_49972204(onChange, v38) )
    {
      this->fields.eventReceiver = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventReceiver, 0, v43, v44, v45, v46, v47, v48);
      this->fields.functionName = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.functionName, 0, v49, v50, v51, v52, v53, v54);
    }
  }
}


bool UIToggle__get_isChecked(UIToggle_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 56;
  if ( this->fields.mStarted )
    v2 = 113;
  return *((_BYTE *)&this->klass + v2);
}


bool UIToggle__get_value(UIToggle_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 56;
  if ( this->fields.mStarted )
    v2 = 113;
  return *((_BYTE *)&this->klass + v2);
}


void UIToggle__set_isChecked(UIToggle_o *this, bool value, const MethodInfo *method)
{
  UIToggle__set_value(this, value, method);
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACFEA4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACFE50;
}


System_IAsyncResult_o *UIToggle_Validate__BeginInvoke(
        UIToggle_Validate_o *this,
        bool choice,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = choice;
  if ( (byte_4D35153 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D35153 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


bool UIToggle_Validate__EndInvoke(UIToggle_Validate_o *this, System_IAsyncResult_o *result, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_1C93A8C(result, 0, method);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


bool UIToggle_Validate__Invoke(UIToggle_Validate_o *this, bool choice, const MethodInfo *method)
{
  return ((bool (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           choice,
           this->fields.method);
}