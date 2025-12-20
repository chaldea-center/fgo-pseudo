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
  unsigned int v10; // w22

  if ( (byte_4D2A014 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A014 = 1;
  }
  if ( !this->fields.isInit )
    WarBoardObjectAnimationEvent__Init(this, *(const MethodInfo **)&value);
  myWidget = (UnityEngine_Object_o *)this->fields.myWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(myWidget, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v6 = this->fields.myWidget;
    if ( !v6 )
      goto LABEL_18;
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
        do
        {
          if ( v10 >= LODWORD(children->max_length) )
            sub_1C942F8(v6);
          v6 = children->m_Items[v10];
          if ( !v6 )
            break;
          UIWidget__set_depth(v6, v6->fields.mDepth + value, 0);
          if ( (_DWORD)max_length == ++v10 )
            return;
          children = this->fields.children;
        }
        while ( children );
LABEL_18:
        sub_1C942F0(v6, v7);
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

  if ( (byte_4D2A016 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A016 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
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

  if ( (byte_4D2A017 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A017 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  monitor = Instance[63].monitor;
  if ( monitor )
    monitor[25] = 1;
}


void WarBoardObjectAnimationEvent__Init(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Object_o *myWidget; // x21
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2A012 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79067792);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A012 = 1;
  }
  if ( !this->fields.isInit )
  {
    if ( !this->fields.children )
    {
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_3193628 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79067792);
      this->fields.children = (struct UIWidget_array *)ComponentsInChildren_object;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.children,
        (int32_t)ComponentsInChildren_object,
        v4,
        v5,
        v6,
        v7,
        v8,
        v9);
    }
    myWidget = (UnityEngine_Object_o *)this->fields.myWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(myWidget, 0, 0) )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.myWidget = (struct UIWidget_o *)Component_object;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.myWidget,
        (int32_t)Component_object,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
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
  System_String_o **v9; // x25
  char v10; // w21
  const MethodInfo *v11; // x3
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2A015 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardObjectAnimationEvent_o *)sub_1C94098(&StringLiteral_14637/*"True"*/);
    byte_4D2A015 = 1;
  }
  result = 0;
  if ( !value || (this = (WarBoardObjectAnimationEvent_o *)System_String__Split(value, 0x2Cu, 0, 0)) == 0 )
LABEL_16:
    sub_1C942F0(this, value);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = this;
  if ( (int)m_CancellationTokenSource >= 2 )
  {
    this = (WarBoardObjectAnimationEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v6 = this;
    v7 = 0;
    v8 = 2LL * ((unsigned int)m_CancellationTokenSource >> 1);
    do
    {
      if ( v7 + 1 >= LODWORD(v5->fields.m_CancellationTokenSource)
        || (v9 = (System_String_o **)(&v5->klass + v7),
            this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(
                                                       v9[5],
                                                       (System_String_o *)StringLiteral_14637/*"True"*/,
                                                       0),
            v7 >= LODWORD(v5->fields.m_CancellationTokenSource)) )
      {
        sub_1C942F8(this);
      }
      v10 = (char)this;
      this = (WarBoardObjectAnimationEvent_o *)System_Int32__TryParse(v9[4], &result, 0);
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
    }
    while ( v8 != v7 );
  }
}


void WarBoardObjectAnimationEvent__SetWidgetDepth(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *nameAndDepth,
        const MethodInfo *method)
{
  WarBoardObjectAnimationEvent_o *v4; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x10
  WarBoardObjectAnimationEvent_o *v6; // x20
  unsigned __int64 m_CancellationTokenSource_low; // x8
  __int64 v8; // x9
  __int64 v9; // x23
  __int64 v10; // x24
  System_String_o *v11; // x21
  unsigned __int64 v12; // x9
  UnityEngine_Object_o *myWidget; // x22
  System_String_o *name; // x0
  struct UIWidget_array *children; // x8
  il2cpp_array_size_t max_length; // x9
  int v17; // w22
  unsigned int v18; // w9
  __int64 v19; // x26
  System_String_o *v20; // x0
  struct UIWidget_array *v21; // x8
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4D2A013 & 1) == 0 )
  {
    this = (WarBoardObjectAnimationEvent_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2A013 = 1;
  }
  result = 0;
  if ( !v4->fields.isInit )
    WarBoardObjectAnimationEvent__Init(v4, (const MethodInfo *)nameAndDepth);
  if ( !nameAndDepth || (this = (WarBoardObjectAnimationEvent_o *)System_String__Split(nameAndDepth, 0x2Cu, 0, 0)) == 0 )
LABEL_37:
    sub_1C942F0(this, nameAndDepth);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( (int)m_CancellationTokenSource >= 2 )
  {
    m_CancellationTokenSource_low = (unsigned int)this->fields.m_CancellationTokenSource;
    if ( (unsigned int)this->fields.m_CancellationTokenSource )
    {
      v8 = 0;
      v9 = 0;
      v10 = (unsigned int)m_CancellationTokenSource >> 1;
      while ( 1 )
      {
        v11 = *(System_String_o **)(&v6->fields.isInit + (v9 << 33 >> 29));
        v12 = v8 | 1;
        result = 0;
        if ( v12 >= m_CancellationTokenSource_low )
          goto LABEL_35;
        this = (WarBoardObjectAnimationEvent_o *)System_Int32__TryParse(
                                                   *((System_String_o **)&v6->fields.isInit + (int)v12),
                                                   &result,
                                                   0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          myWidget = (UnityEngine_Object_o *)v4->fields.myWidget;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (WarBoardObjectAnimationEvent_o *)UnityEngine_Object__op_Inequality(myWidget, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (WarBoardObjectAnimationEvent_o *)v4->fields.myWidget;
            if ( !this )
              goto LABEL_37;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
            this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(name, v11, 0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (WarBoardObjectAnimationEvent_o *)v4->fields.myWidget;
              if ( !this )
                goto LABEL_37;
              UIWidget__set_depth((UIWidget_o *)this, result, 0);
            }
          }
          children = v4->fields.children;
          if ( children )
          {
            max_length = children->max_length;
            if ( max_length )
            {
              v17 = max_length - 1;
              if ( (int)max_length >= 1 )
                break;
            }
          }
        }
LABEL_33:
        if ( ++v9 == v10 )
          return;
        m_CancellationTokenSource_low = LODWORD(v6->fields.m_CancellationTokenSource);
        v8 = 2 * v9;
        if ( 2 * v9 >= m_CancellationTokenSource_low )
          goto LABEL_35;
      }
      v18 = 0;
      while ( v18 < LODWORD(children->max_length) )
      {
        v19 = (int)v18;
        this = (WarBoardObjectAnimationEvent_o *)children->m_Items[v18];
        if ( !this )
          goto LABEL_37;
        v20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(v20, v11, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v21 = v4->fields.children;
          if ( !v21 )
            goto LABEL_37;
          if ( (unsigned int)v19 >= LODWORD(v21->max_length) )
            break;
          this = (WarBoardObjectAnimationEvent_o *)v21->m_Items[v19];
          if ( !this )
            goto LABEL_37;
          UIWidget__set_depth((UIWidget_o *)this, result, 0);
        }
        if ( v17 == (_DWORD)v19 )
          goto LABEL_33;
        children = v4->fields.children;
        v18 = v19 + 1;
        if ( !children )
          goto LABEL_37;
      }
    }
LABEL_35:
    sub_1C942F8(this);
  }
}