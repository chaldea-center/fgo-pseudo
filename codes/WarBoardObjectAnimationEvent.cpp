void __fastcall WarBoardObjectAnimationEvent___ctor(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardObjectAnimationEvent__AllWidgetDepthIncrement(
        WarBoardObjectAnimationEvent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *myWidget; // x21
  struct UIWidget_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UIWidget_array *children; // x8
  __int64 v10; // x21
  il2cpp_array_size_t v11; // w22

  if ( (byte_4B4231C & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    byte_4B4231C = 1;
  }
  if ( !this->fields.isInit )
    WarBoardObjectAnimationEvent__Init(this, *(const MethodInfo **)&value);
  myWidget = (UnityEngine_Object_o *)this->fields.myWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(myWidget, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v6 = this->fields.myWidget;
    if ( !v6 )
      goto LABEL_18;
    UIWidget__set_depth(v6, v6->fields.mDepth + value, 0LL);
  }
  children = this->fields.children;
  if ( children )
  {
    v10 = *(_QWORD *)&children->max_length;
    if ( v10 )
    {
      if ( (int)v10 >= 1 )
      {
        v11 = 0;
        do
        {
          if ( v11 >= children->max_length )
            sub_1BDBADC(v6, v7, v8);
          v6 = children->m_Items[v11];
          if ( !v6 )
            break;
          UIWidget__set_depth(v6, v6->fields.mDepth + value, 0LL);
          if ( (_DWORD)v10 == ++v11 )
            return;
          children = this->fields.children;
        }
        while ( children );
LABEL_18:
        sub_1BDBAD4(v6, v7);
      }
    }
  }
}


void __fastcall WarBoardObjectAnimationEvent__ForceEndInProgressTask(
        WarBoardObjectAnimationEvent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppClass *klass; // x8

  if ( (byte_4B4231E & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B4231E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  klass = Instance[63].klass;
  if ( klass )
    BYTE1(klass->_1.namespaze) = 1;
}


void __fastcall WarBoardObjectAnimationEvent__ForceEndTask(
        WarBoardObjectAnimationEvent_o *this,
        WarBoardTaskBase_o *task,
        const MethodInfo *method)
{
  if ( task )
    task->fields.IsForceEnd = 1;
}


void __fastcall WarBoardObjectAnimationEvent__ForceEndWallBreakAnimTask(
        WarBoardObjectAnimationEvent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  _BYTE *monitor; // x8

  if ( (byte_4B4231F & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B4231F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  monitor = Instance[63].monitor;
  if ( monitor )
    monitor[25] = 1;
}


void __fastcall WarBoardObjectAnimationEvent__Init(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *myWidget; // x21
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B4231A & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77096392, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B4231A = 1;
  }
  if ( !this->fields.isInit )
  {
    if ( !this->fields.children )
    {
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_302AE50 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77096392);
      this->fields.children = (struct UIWidget_array *)ComponentsInChildren_object;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.children, (int32_t)ComponentsInChildren_object, v6, v7);
    }
    myWidget = (UnityEngine_Object_o *)this->fields.myWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(myWidget, 0LL, 0LL) )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this,
                           (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.myWidget = (struct UIWidget_o *)Component_object;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.myWidget, (int32_t)Component_object, v10, v11);
    }
    this->fields.isInit = 1;
  }
}


void __fastcall WarBoardObjectAnimationEvent__SetDispBgDiff(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  WarBoardObjectAnimationEvent_o *v6; // x19
  __int64 v7; // x2
  WarBoardObjectAnimationEvent_o *v8; // x20
  unsigned __int64 v9; // x22
  __int64 v10; // x23
  System_String_o **v11; // x25
  char v12; // w21
  const MethodInfo *v13; // x3
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B4231D & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, value);
    this = (WarBoardObjectAnimationEvent_o *)sub_1BDB878(&StringLiteral_14551/*"True"*/, v4);
    byte_4B4231D = 1;
  }
  result = 0;
  if ( !value || (this = (WarBoardObjectAnimationEvent_o *)System_String__Split(value, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_16:
    sub_1BDBAD4(this, value);
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( (int)m_CancellationTokenSource >= 2 )
  {
    this = (WarBoardObjectAnimationEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v8 = this;
    v9 = 0LL;
    v10 = 2LL * ((unsigned int)m_CancellationTokenSource >> 1);
    do
    {
      if ( v9 + 1 >= LODWORD(v6->fields.m_CancellationTokenSource)
        || (v11 = (System_String_o **)(&v6->klass + v9),
            this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(
                                                       v11[5],
                                                       (System_String_o *)StringLiteral_14551/*"True"*/,
                                                       0LL),
            v9 >= LODWORD(v6->fields.m_CancellationTokenSource)) )
      {
        sub_1BDBADC(this, value, v7);
      }
      v12 = (char)this;
      this = (WarBoardObjectAnimationEvent_o *)System_Int32__TryParse(v11[4], &result, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_16;
        this = *(WarBoardObjectAnimationEvent_o **)&v8[6].fields.m_CachedPtr;
        if ( !this )
          goto LABEL_16;
        WarBoardBackgroundComponent__SetDispBgDiff((WarBoardBackgroundComponent_o *)this, result, v12 & 1, v13);
      }
      v9 += 2LL;
    }
    while ( v10 != v9 );
  }
}


void __fastcall WarBoardObjectAnimationEvent__SetWidgetDepth(
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
  __int64 v17; // x9
  int v18; // w22
  il2cpp_array_size_t v19; // w9
  __int64 v20; // x26
  System_String_o *v21; // x0
  struct UIWidget_array *v22; // x8
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4B4231B & 1) == 0 )
  {
    this = (WarBoardObjectAnimationEvent_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, nameAndDepth);
    byte_4B4231B = 1;
  }
  result = 0;
  if ( !v4->fields.isInit )
    WarBoardObjectAnimationEvent__Init(v4, (const MethodInfo *)nameAndDepth);
  if ( !nameAndDepth
    || (this = (WarBoardObjectAnimationEvent_o *)System_String__Split(nameAndDepth, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_37:
    sub_1BDBAD4(this, nameAndDepth);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( (int)m_CancellationTokenSource >= 2 )
  {
    m_CancellationTokenSource_low = (unsigned int)this->fields.m_CancellationTokenSource;
    if ( (unsigned int)this->fields.m_CancellationTokenSource )
    {
      v9 = 0LL;
      v10 = 0LL;
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
                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          myWidget = (UnityEngine_Object_o *)v4->fields.myWidget;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (WarBoardObjectAnimationEvent_o *)UnityEngine_Object__op_Inequality(myWidget, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (WarBoardObjectAnimationEvent_o *)v4->fields.myWidget;
            if ( !this )
              goto LABEL_37;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(name, v12, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (WarBoardObjectAnimationEvent_o *)v4->fields.myWidget;
              if ( !this )
                goto LABEL_37;
              UIWidget__set_depth((UIWidget_o *)this, result, 0LL);
            }
          }
          children = v4->fields.children;
          if ( children )
          {
            v17 = *(_QWORD *)&children->max_length;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( (int)v17 >= 1 )
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
      while ( v19 < children->max_length )
      {
        v20 = (int)v19;
        this = (WarBoardObjectAnimationEvent_o *)children->m_Items[v19];
        if ( !this )
          goto LABEL_37;
        v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        this = (WarBoardObjectAnimationEvent_o *)System_String__op_Equality(v21, v12, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v22 = v4->fields.children;
          if ( !v22 )
            goto LABEL_37;
          if ( (unsigned int)v20 >= v22->max_length )
            break;
          this = (WarBoardObjectAnimationEvent_o *)v22->m_Items[v20];
          if ( !this )
            goto LABEL_37;
          UIWidget__set_depth((UIWidget_o *)this, result, 0LL);
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
    sub_1BDBADC(this, nameAndDepth, v5);
  }
}