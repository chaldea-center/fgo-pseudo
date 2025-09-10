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
  __int64 v8; // x2
  struct UIWidget_array *children; // x8
  il2cpp_array_size_t max_length; // x21
  unsigned int v11; // w22

  if ( (byte_4C24AFE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24AFE = 1;
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
        v11 = 0;
        do
        {
          if ( v11 >= LODWORD(children->max_length) )
            sub_1C2D6F4(v6, v7, v8);
          v6 = children->m_Items[v11];
          if ( !v6 )
            break;
          UIWidget__set_depth(v6, v6->fields.mDepth + value, 0);
          if ( (_DWORD)max_length == ++v11 )
            return;
          children = this->fields.children;
        }
        while ( children );
LABEL_18:
        sub_1C2D6EC(v6, v7);
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

  if ( (byte_4C24B00 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24B00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
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

  if ( (byte_4C24B01 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24B01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  monitor = Instance[63].monitor;
  if ( monitor )
    monitor[25] = 1;
}


void WarBoardObjectAnimationEvent__Init(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *myWidget; // x21
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C24AFC & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24AFC = 1;
  }
  if ( !this->fields.isInit )
  {
    if ( !this->fields.children )
    {
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
      this->fields.children = (struct UIWidget_array *)ComponentsInChildren_object;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.children, (int32_t)ComponentsInChildren_object, v4, v5);
    }
    myWidget = (UnityEngine_Object_o *)this->fields.myWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(myWidget, 0, 0) )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.myWidget = (struct UIWidget_o *)Component_object;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.myWidget, (int32_t)Component_object, v8, v9);
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
  __int64 v6; // x2
  WarBoardObjectAnimationEvent_o *v7; // x20
  unsigned __int64 v8; // x22
  __int64 v9; // x23
  System_String_o **v10; // x25
  char v11; // w21
  const MethodInfo *v12; // x3
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C24AFF & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardObjectAnimationEvent_o *)sub_1C2D490(&StringLiteral_14579/*"True"*/);
    byte_4C24AFF = 1;
  }
  result = 0;
  if ( !value || (this = (WarBoardObjectAnimationEvent_o *)System_String__Split(value, 0x2Cu, 0, 0)) == 0 )
LABEL_16:
    sub_1C2D6EC(this, value);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = this;
  if ( (int)m_CancellationTokenSource >= 2 )
  {
    this = (WarBoardObjectAnimationEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v7 = this;
    v8 = 0;
    v9 = 2LL * ((unsigned int)m_CancellationTokenSource >> 1);
    do
    {
      if ( v8 + 1 >= LODWORD(v5->fields.m_CancellationTokenSource)
        || (v10 = (System_String_o **)(&v5->klass + v8),
            this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(
                                                       v10[5],
                                                       (System_String_o *)StringLiteral_14579/*"True"*/,
                                                       0),
            v8 >= LODWORD(v5->fields.m_CancellationTokenSource)) )
      {
        sub_1C2D6F4(this, value, v6);
      }
      v11 = (char)this;
      this = (WarBoardObjectAnimationEvent_o *)System_Int32__TryParse(v10[4], &result, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_16;
        this = (WarBoardObjectAnimationEvent_o *)v7[6].fields.m_CachedPtr;
        if ( !this )
          goto LABEL_16;
        WarBoardBackgroundComponent__SetDispBgDiff((WarBoardBackgroundComponent_o *)this, result, v11 & 1, v12);
      }
      v8 += 2LL;
    }
    while ( v9 != v8 );
  }
}


void WarBoardObjectAnimationEvent__SetWidgetDepth(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *nameAndDepth,
        const MethodInfo *method)
{
  WarBoardObjectAnimationEvent_o *v4; // x19
  __int64 v5; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x10
  WarBoardObjectAnimationEvent_o *v7; // x20
  unsigned __int64 m_CancellationTokenSource_low; // x8
  __int64 v9; // x9
  __int64 v10; // x23
  __int64 v11; // x24
  System_String_o *v12; // x21
  unsigned __int64 v13; // x9
  UnityEngine_Object_o *myWidget; // x22
  System_String_o *name; // x0
  struct UIWidget_array *children; // x8
  il2cpp_array_size_t max_length; // x9
  int v18; // w22
  unsigned int v19; // w9
  __int64 v20; // x26
  System_String_o *v21; // x0
  struct UIWidget_array *v22; // x8
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4C24AFD & 1) == 0 )
  {
    this = (WarBoardObjectAnimationEvent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24AFD = 1;
  }
  result = 0;
  if ( !v4->fields.isInit )
    WarBoardObjectAnimationEvent__Init(v4, (const MethodInfo *)nameAndDepth);
  if ( !nameAndDepth || (this = (WarBoardObjectAnimationEvent_o *)System_String__Split(nameAndDepth, 0x2Cu, 0, 0)) == 0 )
LABEL_37:
    sub_1C2D6EC(this, nameAndDepth);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( (int)m_CancellationTokenSource >= 2 )
  {
    m_CancellationTokenSource_low = (unsigned int)this->fields.m_CancellationTokenSource;
    if ( (unsigned int)this->fields.m_CancellationTokenSource )
    {
      v9 = 0;
      v10 = 0;
      v11 = (unsigned int)m_CancellationTokenSource >> 1;
      while ( 1 )
      {
        v12 = *(System_String_o **)(&v7->fields.isInit + (v10 << 33 >> 29));
        v13 = v9 | 1;
        result = 0;
        if ( v13 >= m_CancellationTokenSource_low )
          goto LABEL_35;
        this = (WarBoardObjectAnimationEvent_o *)System_Int32__TryParse(
                                                   *((System_String_o **)&v7->fields.isInit + (int)v13),
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
            this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(name, v12, 0);
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
              v18 = max_length - 1;
              if ( (int)max_length >= 1 )
                break;
            }
          }
        }
LABEL_33:
        if ( ++v10 == v11 )
          return;
        m_CancellationTokenSource_low = LODWORD(v7->fields.m_CancellationTokenSource);
        v9 = 2 * v10;
        if ( 2 * v10 >= m_CancellationTokenSource_low )
          goto LABEL_35;
      }
      v19 = 0;
      while ( v19 < LODWORD(children->max_length) )
      {
        v20 = (int)v19;
        this = (WarBoardObjectAnimationEvent_o *)children->m_Items[v19];
        if ( !this )
          goto LABEL_37;
        v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(v21, v12, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v22 = v4->fields.children;
          if ( !v22 )
            goto LABEL_37;
          if ( (unsigned int)v20 >= LODWORD(v22->max_length) )
            break;
          this = (WarBoardObjectAnimationEvent_o *)v22->m_Items[v20];
          if ( !this )
            goto LABEL_37;
          UIWidget__set_depth((UIWidget_o *)this, result, 0);
        }
        if ( v18 == (_DWORD)v20 )
          goto LABEL_33;
        children = v4->fields.children;
        v19 = v20 + 1;
        if ( !children )
          goto LABEL_37;
      }
    }
LABEL_35:
    sub_1C2D6F4(this, nameAndDepth, v5);
  }
}