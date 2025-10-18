void UIToggle___cctor(const MethodInfo *method)
{
  BetterList_T__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C47651 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UIToggle___ctor__);
    sub_1C37058(&BetterList_UIToggle__TypeInfo);
    sub_1C37058(&UIToggle_TypeInfo);
    byte_4C47651 = 1;
  }
  v1 = (BetterList_T__o *)sub_1C372A4(BetterList_UIToggle__TypeInfo);
  BetterList_object____ctor(v1, (const MethodInfo_331A714 *)Method_BetterList_UIToggle___ctor__);
  UIToggle_TypeInfo->static_fields->list = (struct BetterList_UIToggle__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UIToggle_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UIToggle___ctor(UIToggle_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C47650 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C37058(&StringLiteral_9832/*"OnActivate"*/);
    byte_4C47650 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onChange, (int32_t)v3, v4, v5);
  v6 = StringLiteral_9832/*"OnActivate"*/;
  this->fields.functionName = (struct System_String_o *)StringLiteral_9832/*"OnActivate"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.functionName, v6, v7, v8);
  this->fields.mIsActive = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UIToggle_o *UIToggle__GetActiveToggle(int32_t group, const MethodInfo *method)
{
  int32_t i; // w20
  UIToggle_c *v4; // x0
  BetterList_T__o *list; // x8
  Il2CppObject *Item; // x21

  if ( (byte_4C4764B & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UIToggle__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIToggle_TypeInfo);
    byte_4C4764B = 1;
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
      sub_1C372B4(v4);
    if ( i >= list->fields.size )
      break;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      list = (BetterList_T__o *)UIToggle_TypeInfo->static_fields->list;
      if ( !list )
        goto LABEL_19;
    }
    Item = BetterList_object___get_Item(list, i, (const MethodInfo_3319DC0 *)Method_BetterList_UIToggle__get_Item__);
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

  if ( (byte_4C4764D & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UIToggle__Remove__);
    sub_1C37058(&UIToggle_TypeInfo);
    byte_4C4764D = 1;
  }
  v3 = UIToggle_TypeInfo;
  if ( !UIToggle_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
    v3 = UIToggle_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C372B4(0);
  BetterList_object___Remove(
    list,
    (Il2CppObject *)this,
    (const MethodInfo_331A2A0 *)Method_BetterList_UIToggle__Remove__);
}


void UIToggle__OnEnable(UIToggle_o *this, const MethodInfo *method)
{
  UIToggle_c *v3; // x0
  BetterList_T__o *list; // x0

  if ( (byte_4C4764C & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UIToggle__Add__);
    sub_1C37058(&UIToggle_TypeInfo);
    byte_4C4764C = 1;
  }
  v3 = UIToggle_TypeInfo;
  if ( !UIToggle_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
    v3 = UIToggle_TypeInfo;
  }
  list = (BetterList_T__o *)v3->static_fields->list;
  if ( !list )
    sub_1C372B4(0);
  BetterList_object___Add(list, (Il2CppObject *)this, (const MethodInfo_3319FE8 *)Method_BetterList_UIToggle__Add__);
}


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
  const MethodInfo *v24; // x3
  UIToggle_c *v25; // x0
  CGThumbnailListItem_o *static_fields; // x0
  struct UIToggle_o *v27; // x21
  struct UIToggle_o *monitor; // t1
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x22
  bool IsValid_49249072; // w0
  const MethodInfo *v32; // x1
  struct UIToggle_o *v33; // x25
  System_Collections_Generic_List_EventDelegate__o *v34; // x22
  __int64 v35; // x2
  const MethodInfo *v36; // x3
  UnityEngine_Object_o *eventReceiver; // x22
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  UnityEngine_GameObject_o *v42; // x21
  System_String_o *functionName; // x22
  UIToggle_c *v44; // x0
  struct UIToggle_StaticFields *v45; // x0
  UnityEngine_Object_o *activeAnimation; // x21
  const MethodInfo *v47; // x5
  int32_t v48; // w2
  UnityEngine_Object_o *v49; // x20
  const MethodInfo *v50; // x1
  bool v51[4]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C4764F & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_UIToggle__get_Item__);
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIToggle_TypeInfo);
    byte_4C4764F = 1;
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
                         (const MethodInfo_3319DC0 *)Method_BetterList_UIToggle__get_Item__);
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
            sub_1C372B4(Active);
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
          v25 = UIToggle_TypeInfo;
          if ( !UIToggle_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
            v25 = UIToggle_TypeInfo;
          }
          static_fields = (CGThumbnailListItem_o *)v25->static_fields;
          monitor = (struct UIToggle_o *)static_fields->monitor;
          static_fields = (CGThumbnailListItem_o *)((char *)static_fields + 8);
          v27 = monitor;
          static_fields->klass = (CGThumbnailListItem_c *)this;
          sub_1C36FFC(static_fields, (int32_t)this, v23, v24);
          onChange = this->fields.onChange;
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          IsValid_49249072 = EventDelegate__IsValid_49249072(onChange, v29);
          if ( IsValid_49249072 )
            v33 = 0;
          else
            v33 = v27;
          if ( IsValid_49249072 )
          {
            v34 = this->fields.onChange;
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            EventDelegate__Execute_49220500(v34, v32);
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
                v42 = this->fields.eventReceiver;
                functionName = this->fields.functionName;
                v51[0] = this->fields.mIsActive;
                Active = j_il2cpp_value_box_0(bool_TypeInfo, v51, v35, v36, v38, v39, v40, v41);
                if ( !v42 )
                  goto LABEL_98;
                UnityEngine_GameObject__SendMessage_71247544(v42, functionName, (Il2CppObject *)Active, 1, 0);
              }
              v27 = v33;
            }
          }
          v44 = UIToggle_TypeInfo;
          if ( !UIToggle_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
            v44 = UIToggle_TypeInfo;
          }
          v45 = v44->static_fields;
          v45->current = v27;
          sub_1C36FFC((CGThumbnailListItem_o *)&v45->current, (int32_t)v27, v35, v36);
        }
        activeAnimation = (UnityEngine_Object_o *)this->fields.activeAnimation;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(activeAnimation, 0, 0) )
        {
          if ( state )
            v48 = 1;
          else
            v48 = -1;
          v49 = (UnityEngine_Object_o *)ActiveAnimation__Play_49249300(this->fields.activeAnimation, 0, v48, 2, 0, v47);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          Active = UnityEngine_Object__op_Inequality(v49, 0, 0);
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
              if ( !v49 )
                goto LABEL_98;
              ActiveAnimation__Finish((ActiveAnimation_o *)v49, v50);
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
  const MethodInfo *v10; // x3
  struct UIWidget_o *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UnityEngine_Animation_o **p_checkAnimation; // x20
  UnityEngine_Object_o *checkAnimation; // x21
  UnityEngine_Object_o *activeAnimation; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UnityEngine_Animation_o *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *v23; // x20
  long double v24; // q0
  struct UIWidget_o *v25; // x0
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C4764E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4764E = 1;
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
        v11 = *p_checkSprite;
        this->fields.activeSprite = *p_checkSprite;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.activeSprite, (int32_t)v11, v9, v10);
        *p_checkSprite = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.checkSprite, 0, v12, v13);
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
        v19 = *p_checkAnimation;
        this->fields.activeAnimation = *p_checkAnimation;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.activeAnimation, (int32_t)v19, v17, v18);
        *p_checkAnimation = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.checkAnimation, 0, v20, v21);
      }
    }
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    if ( UnityEngine_Application__get_isPlaying(0) )
    {
      v23 = (UnityEngine_Object_o *)this->fields.activeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
      {
        v25 = this->fields.activeSprite;
        if ( !v25 )
          sub_1C372B4(0);
        LODWORD(v24) = 1.0;
        if ( !this->fields.startsActive )
          *(float *)&v24 = 0.0;
        ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, long double))v25->klass->vtable._8_set_alpha.methodPtr)(
          v25,
          v25->klass->vtable._8_set_alpha.method,
          v24);
      }
    }
    onChange = this->fields.onChange;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    if ( EventDelegate__IsValid_49249072(onChange, v22) )
    {
      this->fields.eventReceiver = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventReceiver, 0, v27, v28);
      this->fields.functionName = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.functionName, 0, v29, v30);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A823EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A82398;
}


System_IAsyncResult_o *UIToggle_Validate__BeginInvoke(
        UIToggle_Validate_o *this,
        bool choice,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = choice;
  if ( (byte_4C47652 & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C47652 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


bool UIToggle_Validate__EndInvoke(UIToggle_Validate_o *this, System_IAsyncResult_o *result, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_1C37010(result, 0, method);
  if ( !v3 )
    sub_1C372B4(0);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


bool UIToggle_Validate__Invoke(UIToggle_Validate_o *this, bool choice, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           choice,
           this->fields.method);
}