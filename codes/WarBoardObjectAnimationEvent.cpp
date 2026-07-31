void WarBoardObjectAnimationEvent___ctor(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardObjectAnimationEvent__AllWidgetDepthIncrement(
        WarBoardObjectAnimationEvent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *myWidget; // x21
  struct UIWidget_o *v6; // x0
  __int64 v7; // x1
  struct UIWidget_array *children; // x8
  il2cpp_array_size_t max_length; // x21
  __int64 v10; // x22
  struct UIWidget_array *v11; // x8

  if ( (byte_5935E6F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E6F = 1;
  }
  if ( !this->fields.isInit )
    WarBoardObjectAnimationEvent__Init(this, *(const MethodInfo **)&value);
  myWidget = (UnityEngine_Object_o *)this->fields.myWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value, method);
  v6 = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(myWidget, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v6 = this->fields.myWidget;
    if ( !v6 )
      goto LABEL_19;
    UIWidget__set_depth(v6, v6->fields.mDepth + value, 0);
  }
  children = this->fields.children;
  if ( children )
  {
    max_length = children->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          v11 = this->fields.children;
          if ( !v11 )
            break;
          if ( (unsigned int)v10 >= LODWORD(v11->max_length) )
            sub_21FFED4(v6);
          v6 = v11->m_Items[v10];
          if ( !v6 )
            break;
          UIWidget__set_depth(v6, v6->fields.mDepth + value, 0);
          if ( (_DWORD)max_length == (_DWORD)++v10 )
            return;
        }
LABEL_19:
        sub_21FFECC(v6, v7);
      }
    }
  }
}


void WarBoardObjectAnimationEvent__ForceEndInProgressTask(
        WarBoardObjectAnimationEvent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppClass *klass; // x8

  if ( (byte_5935E71 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E71 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  klass = Instance[63].klass;
  if ( klass )
    BYTE1(klass->_1.namespaze) = 1;
}


void WarBoardObjectAnimationEvent__ForceEndTask(
        WarBoardObjectAnimationEvent_o *this,
        WarBoardTaskBase_o *task,
        const MethodInfo *method)
{
  if ( task )
    task->fields.IsForceEnd = 1;
}


void WarBoardObjectAnimationEvent__ForceEndWallBreakAnimTask(
        WarBoardObjectAnimationEvent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  _BYTE *monitor; // x8

  if ( (byte_5935E72 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E72 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  monitor = Instance[63].monitor;
  if ( monitor )
    monitor[25] = 1;
}


void WarBoardObjectAnimationEvent__Init(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Object_array *ComponentsInChildren_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  UnityEngine_Object_o *myWidget; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5935E6D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E6D = 1;
  }
  if ( !this->fields.isInit )
  {
    if ( !this->fields.children )
    {
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
      this->fields.children = (struct UIWidget_array *)ComponentsInChildren_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.children,
        (int32_t)ComponentsInChildren_object,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
    }
    myWidget = (UnityEngine_Object_o *)this->fields.myWidget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Equality(myWidget, 0, 0) )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.myWidget = (struct UIWidget_o *)Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.myWidget,
        (int32_t)Component_object,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    this->fields.isInit = 1;
  }
}


void WarBoardObjectAnimationEvent__SetDispBgDiff(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  WarBoardObjectAnimationEvent_o *v5; // x19
  WarBoardObjectAnimationEvent_o *v6; // x20
  unsigned __int64 v7; // x22
  __int64 v8; // x23
  __int64 v9; // x25
  char v10; // w21
  const MethodInfo *v11; // x3
  int32_t result; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5935E70 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardObjectAnimationEvent_o *)sub_21FFC50(&StringLiteral_15148/*"True"*/);
    byte_5935E70 = 1;
  }
  result = 0;
  if ( !value || (this = (WarBoardObjectAnimationEvent_o *)System_String__Split(value, 0x2Cu, 0, 0)) == 0 )
LABEL_16:
    sub_21FFECC(this, value);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = this;
  if ( (int)m_CancellationTokenSource >= 2 )
  {
    this = (WarBoardObjectAnimationEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v6 = this;
    v7 = 0;
    v8 = 0;
    v9 = (unsigned int)m_CancellationTokenSource & 0xFFFFFFFE;
    do
    {
      if ( v7 + 1 >= LODWORD(v5->fields.m_CancellationTokenSource)
        || (this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(
                                                       *(System_String_o **)(&v5->fields.isInit
                                                                           + ((v8 + 0x100000000LL) >> 29)),
                                                       (System_String_o *)StringLiteral_15148/*"True"*/,
                                                       0),
            v7 >= LODWORD(v5->fields.m_CancellationTokenSource)) )
      {
        sub_21FFED4(this);
      }
      v10 = (char)this;
      this = (WarBoardObjectAnimationEvent_o *)System_Int32__TryParse(
                                                 *(System_String_o **)(&v5->fields.isInit + (v8 >> 29)),
                                                 &result,
                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_16;
        this = (WarBoardObjectAnimationEvent_o *)v6[6].fields.m_CachedPtr;
        if ( !this )
          goto LABEL_16;
        WarBoardBackgroundComponent__SetDispBgDiff((WarBoardBackgroundComponent_o *)this, result, v10 & 1, v11);
      }
      v7 += 2LL;
      v8 += 0x200000000LL;
    }
    while ( v9 != v7 );
  }
}


void WarBoardObjectAnimationEvent__SetWidgetDepth(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *nameAndDepth,
        const MethodInfo *method)
{
  WarBoardObjectAnimationEvent_o *v4; // x19
  _BOOL4 isInit; // w8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  WarBoardObjectAnimationEvent_o *v7; // x20
  __int64 v8; // x23
  __int64 v9; // x25
  unsigned __int64 m_CancellationTokenSource_low; // x8
  unsigned __int64 v11; // x9
  System_String_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *myWidget; // x22
  System_String_o *name; // x0
  struct UIWidget_array *children; // x8
  il2cpp_array_size_t max_length; // x22
  __int64 v19; // x26
  struct UIWidget_array *v20; // x8
  System_String_o *v21; // x0
  struct UIWidget_array *v22; // x8
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_5935E6E & 1) == 0 )
  {
    this = (WarBoardObjectAnimationEvent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E6E = 1;
  }
  isInit = v4->fields.isInit;
  result = 0;
  if ( !isInit )
    WarBoardObjectAnimationEvent__Init(v4, (const MethodInfo *)nameAndDepth);
  if ( !nameAndDepth )
    goto LABEL_34;
  this = (WarBoardObjectAnimationEvent_o *)System_String__Split(nameAndDepth, 0x2Cu, 0, 0);
  if ( !this )
    goto LABEL_34;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( (int)m_CancellationTokenSource >= 2 )
  {
    v8 = (unsigned int)m_CancellationTokenSource >> 1;
    v9 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource_low = LODWORD(v7->fields.m_CancellationTokenSource);
      if ( 2 * v9 >= m_CancellationTokenSource_low
        || (v11 = (2 * v9) | 1,
            result = 0,
            v12 = *(System_String_o **)(&v7->fields.isInit + (v9 << 33 >> 29)),
            v11 >= m_CancellationTokenSource_low) )
      {
LABEL_35:
        sub_21FFED4(this);
      }
      this = (WarBoardObjectAnimationEvent_o *)System_Int32__TryParse(
                                                 *((System_String_o **)&v7->fields.isInit + (int)v11),
                                                 &result,
                                                 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        myWidget = (UnityEngine_Object_o *)v4->fields.myWidget;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
        this = (WarBoardObjectAnimationEvent_o *)UnityEngine_Object__op_Inequality(myWidget, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (WarBoardObjectAnimationEvent_o *)v4->fields.myWidget;
          if ( !this )
            goto LABEL_34;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
          this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(name, v12, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (WarBoardObjectAnimationEvent_o *)v4->fields.myWidget;
            if ( !this )
              goto LABEL_34;
            UIWidget__set_depth((UIWidget_o *)this, result, 0);
          }
        }
        children = v4->fields.children;
        if ( children )
        {
          max_length = children->max_length;
          if ( max_length )
          {
            if ( (int)max_length >= 1 )
              break;
          }
        }
      }
LABEL_32:
      if ( ++v9 == v8 )
        return;
    }
    v19 = 0;
    while ( 1 )
    {
      v20 = v4->fields.children;
      if ( !v20 )
        break;
      if ( (unsigned int)v19 >= LODWORD(v20->max_length) )
        goto LABEL_35;
      this = (WarBoardObjectAnimationEvent_o *)v20->m_Items[v19];
      if ( !this )
        break;
      v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
      this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(v21, v12, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v22 = v4->fields.children;
        if ( !v22 )
          break;
        if ( (unsigned int)v19 >= LODWORD(v22->max_length) )
          goto LABEL_35;
        this = (WarBoardObjectAnimationEvent_o *)v22->m_Items[v19];
        if ( !this )
          break;
        UIWidget__set_depth((UIWidget_o *)this, result, 0);
      }
      if ( (_DWORD)max_length == (_DWORD)++v19 )
        goto LABEL_32;
    }
LABEL_34:
    sub_21FFECC(this, nameAndDepth);
  }
}