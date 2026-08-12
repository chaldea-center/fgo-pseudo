void BaseDialog___cctor(const MethodInfo *method)
{
  if ( (byte_5969E63 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5969E63 = 1;
  }
  *BaseDialog_TypeInfo->static_fields = (struct BaseDialog_StaticFields)xmmword_E9DC10;
}


void BaseDialog___ctor(BaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20

  if ( (byte_5969E62 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UIPanel__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_UIPanel__int__TypeInfo);
    byte_5969E62 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_UIPanel__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_UIPanel__int___ctor__);
  this->fields.panelDepthList = (struct System_Collections_Generic_Dictionary_UIPanel__int__o *)v3;
  sub_2213A04(&this->fields.panelDepthList, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BaseDialog__Awake(BaseDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_UIPanel__int__o *panelDepthList; // x0
  __int64 v4; // x2
  struct UIPanel_array *basePanelList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  UIPanel_o *v8; // x20

  if ( (byte_5969E59 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UIPanel__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UIPanel__int__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E59 = 1;
  }
  if ( this->fields.basePanelList )
  {
    panelDepthList = this->fields.panelDepthList;
    if ( !panelDepthList
      || (System_Collections_Generic_Dictionary_object__int___Clear(
            (System_Collections_Generic_Dictionary_object__int__o *)panelDepthList,
            (const MethodInfo_3FF4224 *)Method_System_Collections_Generic_Dictionary_UIPanel__int__Clear__),
          (basePanelList = this->fields.basePanelList) == 0) )
    {
LABEL_17:
      sub_2213CDC(panelDepthList, method);
    }
    max_length = basePanelList->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_2213CE4(panelDepthList);
        v8 = basePanelList->m_Items[i];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v4);
        panelDepthList = (struct System_Collections_Generic_Dictionary_UIPanel__int__o *)UnityEngine_Object__op_Equality(
                                                                                           (UnityEngine_Object_o *)v8,
                                                                                           0,
                                                                                           0);
        if ( ((unsigned __int8)panelDepthList & 1) == 0 )
        {
          if ( !v8 )
            goto LABEL_17;
          panelDepthList = this->fields.panelDepthList;
          if ( !panelDepthList )
            goto LABEL_17;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)panelDepthList,
            (Il2CppObject *)v8,
            v8->fields.mDepth,
            (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_UIPanel__int__Add__);
        }
        LODWORD(max_length) = basePanelList->max_length;
      }
    }
  }
}


void BaseDialog__Close(BaseDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *baseWindow; // x20
  __int64 transform; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  struct UIPanel_array *basePanelList; // x8
  unsigned __int64 v12; // x23
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  BaseDialog_c *v18; // x8
  UnityEngine_GameObject_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *TargetPanel; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *v25; // x20
  BaseDialog_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x20
  BaseDialog_c *v28; // x0
  struct BaseDialog_StaticFields *static_fields; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  TweenScale_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x1
  UnityEngine_Transform_o *v36; // x20
  UnityEngine_Vector3_o v37; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_5969E5C & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6240/*"EndCloseBaseDialog"*/);
    byte_5969E5C = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_2213A04(&this->fields.baseCallbackFunc, callback);
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  transform = UnityEngine_Object__op_Inequality(baseWindow, 0, 0);
  if ( (transform & 1) == 0 )
    goto LABEL_41;
  basePanelList = this->fields.basePanelList;
  if ( basePanelList && basePanelList->max_length )
  {
    v12 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(basePanelList->max_length);
      if ( (__int64)v12 >= (int)max_length_low )
        break;
      if ( v12 >= max_length_low )
        sub_2213CE4(transform);
      v14 = (UnityEngine_Object_o *)basePanelList->m_Items[v12];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      transform = UnityEngine_Object__op_Inequality(v14, 0, 0);
      if ( (transform & 1) != 0 )
      {
        if ( !v14 )
          goto LABEL_20;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
        v18 = BaseDialog_TypeInfo;
        v19 = gameObject;
        if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v16, v17);
          v18 = BaseDialog_TypeInfo;
        }
        transform = (__int64)TweenAlpha__Begin(v19, v18->static_fields->CLOSE_TIME, 0.0, 0);
        if ( !transform )
          goto LABEL_20;
        *(_DWORD *)(transform + 32) = 6;
      }
      basePanelList = this->fields.basePanelList;
      ++v12;
      if ( !basePanelList )
        goto LABEL_20;
    }
  }
  else
  {
    TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel(this, v9);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    transform = UnityEngine_Object__op_Inequality(TargetPanel, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_20;
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TargetPanel, 0);
      v26 = BaseDialog_TypeInfo;
      if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v23, v24);
        v26 = BaseDialog_TypeInfo;
      }
      transform = (__int64)TweenAlpha__Begin(v25, v26->static_fields->CLOSE_TIME, 0.0, 0);
      if ( !transform )
        goto LABEL_20;
      *(_DWORD *)(transform + 32) = 6;
    }
  }
  v27 = this->fields.baseWindow;
  v28 = BaseDialog_TypeInfo;
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v9, v10);
    v28 = BaseDialog_TypeInfo;
  }
  static_fields = v28->static_fields;
  v37.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v37.fields.y = v37.fields.x;
  v37.fields.z = v37.fields.x;
  v32 = TweenScale__Begin(v27, static_fields->CLOSE_TIME, v37, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0, 0);
  if ( (transform & 1) == 0 )
  {
    transform = (__int64)this->fields.baseWindow;
    if ( transform )
    {
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      v36 = (UnityEngine_Transform_o *)transform;
      if ( !byte_5969AE0 )
      {
        transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( v36 )
      {
        UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
LABEL_41:
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_6240/*"EndCloseBaseDialog"*/,
          0.1,
          0);
        goto LABEL_42;
      }
    }
LABEL_20:
    sub_2213CDC(transform, v9);
  }
  if ( !v32 )
    goto LABEL_20;
  v32->fields.method = 6;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v32->fields.eventReceiver = v33;
  sub_2213A04(&v32->fields.eventReceiver, v33);
  v34 = StringLiteral_6240/*"EndCloseBaseDialog"*/;
  v32->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6240/*"EndCloseBaseDialog"*/;
  sub_2213A04(&v32->fields.callWhenFinished, v34);
LABEL_42:
  BaseDialog__ResetPanelDepth(this, v35);
}


void BaseDialog__EndCloseBaseDialog(BaseDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_baseCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  BaseDialog__Init(this, method);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = &this->fields.baseCallbackFunc;
  v4 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    *p_baseCallbackFunc = 0;
    sub_2213A04(p_baseCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void BaseDialog__EndOpenBaseDialog(BaseDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_baseCallbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = &this->fields.baseCallbackFunc;
  v3 = baseCallbackFunc;
  *((_DWORD *)p_baseCallbackFunc + 6) = 2;
  if ( baseCallbackFunc )
  {
    *p_baseCallbackFunc = 0;
    sub_2213A04(p_baseCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


void BaseDialog__Init(BaseDialog_o *this, const MethodInfo *method)
{
  _BOOL4 refuseInit; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  refuseInit = this->fields.refuseInit;
  this->fields.baseState = 0;
  if ( !refuseInit )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_2213CDC(0, v4);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}


bool BaseDialog__IsInputState(BaseDialog_o *this, const MethodInfo *method)
{
  return this->fields.baseState == 2;
}


void BaseDialog__OnEnable(BaseDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *v5; // x20
  System_String_o *v6; // x0
  UnityEngine_Transform_o *transform; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0

  if ( (byte_5969E61 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E61 = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BaseDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_closeBtnObject.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
    goto LABEL_14;
  v6 = (System_String_o *)((__int64 (__fastcall *)(BaseDialog_o *, const MethodInfo *))this->klass->vtable._6_get_closeBtnPath.methodPtr)(
                            this,
                            this->klass->vtable._6_get_closeBtnPath.method);
  if ( System_String__IsNullOrEmpty(v6, 0) )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v8 = (System_String_o *)((__int64 (__fastcall *)(BaseDialog_o *, const MethodInfo *))this->klass->vtable._6_get_closeBtnPath.methodPtr)(
                            this,
                            this->klass->vtable._6_get_closeBtnPath.method);
  if ( !transform )
LABEL_15:
    sub_2213CDC(v8, v9);
  v12 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v8, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  v8 = (System_String_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( v12 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
      ((void (__fastcall *)(BaseDialog_o *, UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
        this,
        gameObject,
        this->klass->vtable._5_set_closeBtnObject.method);
LABEL_14:
      v14 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BaseDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                          this,
                                          this->klass->vtable._4_get_closeBtnObject.method);
      AndroidBackKeyManager__AddBackBtn(v14, 0);
      return;
    }
    goto LABEL_15;
  }
}


void BaseDialog__Open(
        BaseDialog_o *this,
        System_Action_o *callback,
        int32_t type,
        bool isLateScale,
        const MethodInfo *method)
{
  __int64 v9; // x21
  UnityEngine_GameObject_o *transform; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *baseWindow; // x24
  __int64 v15; // x2
  UnityEngine_Transform_o *v16; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_c *v19; // x0
  UnityEngine_Object_o *maskSprite; // x23
  __int64 v21; // x2
  __int64 *v22; // x8
  UnityEngine_Object_o *v23; // x22
  __int64 v24; // x2
  struct UIPanel_array *basePanelList; // x8
  unsigned __int64 v26; // x23
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v28; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  BaseDialog_c *v32; // x8
  UnityEngine_GameObject_o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  UnityEngine_Object_o *TargetPanel; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_GameObject_o *v39; // x22
  BaseDialog_c *v40; // x8
  System_Action_o *v41; // x20
  System_Collections_IEnumerator_o *v42; // x0
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5969E5B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BaseDialog___c__DisplayClass24_0__Open_g__TweenScaleWindow_0__);
    sub_2213A60(&BaseDialog___c__DisplayClass24_0_TypeInfo);
    sub_2213A60(&StringLiteral_22527/*"mask00"*/);
    sub_2213A60(&StringLiteral_18037/*"black00"*/);
    sub_2213A60(&StringLiteral_18793/*"clear00"*/);
    byte_5969E5B = 1;
  }
  v9 = sub_2213CCC(BaseDialog___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_44;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04(v9 + 16, this);
  if ( isLateScale )
  {
    baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
    if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
    {
      transform = this->fields.baseWindow;
      if ( !transform )
        goto LABEL_44;
      transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
      v16 = (UnityEngine_Transform_o *)transform;
      if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11, v15);
      if ( !v16 )
        goto LABEL_44;
      v43.fields.x = BaseDialog_TypeInfo->static_fields->DIALOG_INITIAL_SCALE;
      v43.fields.y = v43.fields.x;
      v43.fields.z = v43.fields.x;
      UnityEngine_Transform__set_localScale(v16, v43, 0);
    }
  }
  transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(transform, 1, 0);
  this->fields.baseCallbackFunc = callback;
  sub_2213A04(&this->fields.baseCallbackFunc, callback);
  v19 = UnityEngine_Object_TypeInfo;
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  *(_BYTE *)(v9 + 24) = 1;
  if ( !*(&v19->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v19, v17, v18);
  if ( !UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
    goto LABEL_27;
  if ( type == 2 )
  {
    transform = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !transform )
      goto LABEL_44;
    v22 = &StringLiteral_18037/*"black00"*/;
  }
  else if ( type == 1 )
  {
    transform = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !transform )
      goto LABEL_44;
    v22 = &StringLiteral_22527/*"mask00"*/;
  }
  else
  {
    if ( type )
      goto LABEL_27;
    transform = (UnityEngine_GameObject_o *)this->fields.maskSprite;
    if ( !transform )
      goto LABEL_44;
    v22 = &StringLiteral_18793/*"clear00"*/;
  }
  UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v22, 0);
LABEL_27:
  v23 = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v21);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v23, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    basePanelList = this->fields.basePanelList;
    if ( basePanelList && basePanelList->max_length )
    {
      v26 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(basePanelList->max_length);
        if ( (__int64)v26 >= (int)max_length_low )
          goto LABEL_53;
        if ( v26 >= max_length_low )
          sub_2213CE4(transform);
        v28 = (UnityEngine_Object_o *)basePanelList->m_Items[v26];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v24);
        transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_44;
          ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v28->klass[1]._1.element_class)(
            v28,
            v28->klass[1]._1.castClass,
            0.005);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0);
          v32 = BaseDialog_TypeInfo;
          v33 = gameObject;
          if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v30, v31);
            v32 = BaseDialog_TypeInfo;
          }
          transform = (UnityEngine_GameObject_o *)TweenAlpha__Begin(v33, v32->static_fields->OPEN_TIME, 1.0, 0);
          if ( !transform )
            goto LABEL_44;
          LODWORD(transform[1].monitor) = 6;
        }
        basePanelList = this->fields.basePanelList;
        ++v26;
        if ( !basePanelList )
          goto LABEL_44;
      }
    }
    TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel(this, v11);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(TargetPanel, 0, 0);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
LABEL_53:
      if ( isLateScale )
      {
        v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v41,
          (Il2CppObject *)v9,
          Method_BaseDialog___c__DisplayClass24_0__Open_g__TweenScaleWindow_0__,
          0);
        v42 = BasicHelper__DelayCall(0.0, v41, 1, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v42, 0);
      }
      else
      {
        BaseDialog___c__DisplayClass24_0___Open_g__TweenScaleWindow_0((BaseDialog___c__DisplayClass24_0_o *)v9, v11);
      }
      goto LABEL_56;
    }
    if ( TargetPanel )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))TargetPanel->klass[1]._1.element_class)(
        TargetPanel,
        TargetPanel->klass[1]._1.castClass,
        0.005);
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TargetPanel, 0);
      v40 = BaseDialog_TypeInfo;
      if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v37, v38);
        v40 = BaseDialog_TypeInfo;
      }
      transform = (UnityEngine_GameObject_o *)TweenAlpha__Begin(v39, v40->static_fields->OPEN_TIME, 1.0, 0);
      if ( transform )
      {
        LODWORD(transform[1].monitor) = 6;
        goto LABEL_53;
      }
    }
LABEL_44:
    sub_2213CDC(transform, v11);
  }
LABEL_56:
  if ( *(_BYTE *)(v9 + 24) )
    BaseDialog__EndOpenBaseDialog(this, v11);
}


void BaseDialog__ResetPanelDepth(BaseDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_o *v3; // x19
  struct UIPanel_array *basePanelList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  if ( (byte_5969E5E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UIPanel__int__TryGetValue__);
    this = (BaseDialog_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E5E = 1;
  }
  basePanelList = v3->fields.basePanelList;
  value = 0;
  if ( !basePanelList )
LABEL_17:
    sub_2213CDC(this, method);
  max_length = basePanelList->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v7 = (UnityEngine_Object_o *)basePanelList->m_Items[v6];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      this = (BaseDialog_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BaseDialog_o *)v3->fields.panelDepthList;
        if ( !this )
          goto LABEL_17;
        this = (BaseDialog_o *)System_Collections_Generic_Dictionary_object__int___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__int__o *)this,
                                 (Il2CppObject *)v7,
                                 &value,
                                 (const MethodInfo_3FF5BC4 *)Method_System_Collections_Generic_Dictionary_UIPanel__int__TryGetValue__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_17;
          UIPanel__set_depth((UIPanel_o *)v7, value, 0);
        }
      }
      LODWORD(max_length) = basePanelList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)max_length );
  }
}


void BaseDialog__SafeClose(BaseDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  if ( this->fields.baseState == 2 )
  {
    this->fields.baseState = 3;
    BaseDialog__Close(this, callback, method);
  }
}


void BaseDialog__SafeOpen(BaseDialog_o *this, System_Action_o *callback, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.baseState )
  {
    this->fields.baseState = 1;
    BaseDialog__Open(this, callback, type, 0, v4);
  }
}


void BaseDialog__SetMask(BaseDialog_o *this, bool forceMaskClear, const MethodInfo *method)
{
  __int64 gameObject; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v10; // x2
  __int64 *v11; // x8
  struct UIPanel_array *basePanelList; // x8
  unsigned __int64 v13; // x21
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *TargetPanel; // x20
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Transform_o *v20; // x19

  if ( (byte_5969E5A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_22527/*"mask00"*/);
    sub_2213A60(&StringLiteral_18793/*"clear00"*/);
    byte_5969E5A = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  gameObject = UnityEngine_Object__op_Inequality(maskSprite, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.maskSprite;
    if ( forceMaskClear )
    {
      if ( !gameObject )
        goto LABEL_24;
      v11 = &StringLiteral_18793/*"clear00"*/;
    }
    else
    {
      if ( !gameObject )
        goto LABEL_24;
      v11 = &StringLiteral_22527/*"mask00"*/;
    }
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v11, 0);
  }
  basePanelList = this->fields.basePanelList;
  if ( basePanelList && basePanelList->max_length )
  {
    v13 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(basePanelList->max_length);
      if ( (__int64)v13 >= (int)max_length_low )
        break;
      if ( v13 >= max_length_low )
        sub_2213CE4(gameObject);
      v15 = (UnityEngine_Object_o *)basePanelList->m_Items[v13];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v10);
      gameObject = UnityEngine_Object__op_Inequality(v15, 0, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_24;
        gameObject = ((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v15->klass[1]._1.element_class)(
                       v15,
                       v15->klass[1]._1.castClass,
                       0.005);
      }
      basePanelList = this->fields.basePanelList;
      ++v13;
      if ( !basePanelList )
        goto LABEL_24;
    }
  }
  else
  {
    TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel(this, v6);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    gameObject = UnityEngine_Object__op_Inequality(TargetPanel, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_24;
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))TargetPanel->klass[1]._1.element_class)(
        TargetPanel,
        TargetPanel->klass[1]._1.castClass,
        0.005);
    }
  }
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v10);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseWindow;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
      v20 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_5969AE0 )
      {
        gameObject = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( v20 )
      {
        UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        return;
      }
    }
LABEL_24:
    sub_2213CDC(gameObject, v6);
  }
}


void BaseDialog__SetMaskAlpha(BaseDialog_o *this, float alpha, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v7; // x1
  struct UISprite_o *v8; // x0

  if ( (byte_5969E5F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E5F = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( !UnityEngine_Object__op_Equality(maskSprite, 0, 0) )
  {
    v8 = this->fields.maskSprite;
    if ( !v8 )
      sub_2213CDC(0, v7);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))v8->klass->vtable._8_set_alpha.methodPtr)(
      v8,
      v8->klass->vtable._8_set_alpha.method,
      alpha);
  }
}


void BaseDialog__SetMaskSpritePosition(BaseDialog_o *this, UnityEngine_Vector3_o pos, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_2213CDC(0, method);
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  GameObjectExtensions__SetLocalPosition(gameObject, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void BaseDialog__SetMaskTouchCloseEnabled(BaseDialog_o *this, bool canClose, const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_5969E5D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E5D = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, canClose, method);
  if ( !UnityEngine_Object__op_Equality(maskSprite, 0, 0) )
  {
    v7 = this->fields.maskSprite;
    if ( v7 )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v7,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      v7 = (struct UISprite_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        return;
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, canClose, 0);
        return;
      }
    }
    sub_2213CDC(v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void BaseDialog__SetPanelDepth(BaseDialog_o *this, int32_t depth, const MethodInfo *method)
{
  struct UIPanel_array *basePanelList; // x20
  int max_length; // w8
  __int64 v6; // x21

  basePanelList = this->fields.basePanelList;
  if ( !basePanelList )
    goto LABEL_8;
  max_length = basePanelList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_2213CE4(this);
      this = (BaseDialog_o *)basePanelList->m_Items[v6];
      if ( !this )
        break;
      UIPanel__set_depth((UIPanel_o *)this, depth, 0);
      max_length = basePanelList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_2213CDC(this, *(_QWORD *)&depth);
  }
}


int32_t BaseDialog__get_GetState(BaseDialog_o *this, const MethodInfo *method)
{
  return this->fields.baseState;
}


bool BaseDialog__get_IsBusy(BaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


UIPanel_o *BaseDialog__get_TargetPanel(BaseDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *basePanel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1

  if ( (byte_5969E58 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5969E58 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(basePanel, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_17;
    basePanel = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                          gameObject,
                                          (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIPanel___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Equality(basePanel, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0);
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
            return (UIPanel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                  gameObject,
                                  (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIPanel___);
        }
      }
    }
LABEL_17:
    sub_2213CDC(gameObject, v8);
  }
  return (UIPanel_o *)basePanel;
}


UnityEngine_GameObject_o *BaseDialog__get_closeBtnObject(BaseDialog_o *this, const MethodInfo *method)
{
  return this->fields._closeBtnObject;
}


System_String_o *BaseDialog__get_closeBtnPath(BaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5969E60 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969E60 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void BaseDialog__set_closeBtnObject(BaseDialog_o *this, UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  this->fields._closeBtnObject = value;
  sub_2213A04(&this->fields._closeBtnObject, value);
}


void BaseDialog___c__DisplayClass24_0___ctor(BaseDialog___c__DisplayClass24_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BaseDialog___c__DisplayClass24_0___Open_g__TweenScaleWindow_0(
        BaseDialog___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  BaseDialog___c__DisplayClass24_0_o *v2; // x19
  struct BaseDialog_o *_4__this; // x8
  __int64 v4; // x2
  BaseDialog___c__DisplayClass24_0_o *v5; // x20
  struct BaseDialog_o *v6; // x8
  UnityEngine_GameObject_o *baseWindow; // x20
  float OPEN_TIME; // s8
  __int64 v9; // x1
  __int64 v10; // x2
  TweenScale_o *v11; // x20
  struct BaseDialog_o *v12; // x8
  __int64 v13; // x2
  BaseDialog___c__DisplayClass24_0_o *v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  BaseDialog___c__DisplayClass24_0_o *v17; // x19
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5969E64 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BaseDialog___c__DisplayClass24_0_o *)sub_2213A60(&StringLiteral_6272/*"EndOpenBaseDialog"*/);
    byte_5969E64 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  this = (BaseDialog___c__DisplayClass24_0_o *)_4__this->fields.baseWindow;
  if ( !this )
    goto LABEL_28;
  this = (BaseDialog___c__DisplayClass24_0_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
  v5 = this;
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v4);
  if ( !v5 )
    goto LABEL_28;
  v18.fields.x = BaseDialog_TypeInfo->static_fields->DIALOG_INITIAL_SCALE;
  v18.fields.y = v18.fields.x;
  v18.fields.z = v18.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v5, v18, 0);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_28;
  baseWindow = v6->fields.baseWindow;
  OPEN_TIME = BaseDialog_TypeInfo->static_fields->OPEN_TIME;
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  v11 = TweenScale__Begin(baseWindow, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  this = (BaseDialog___c__DisplayClass24_0_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
  v12 = v2->fields.__4__this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v12 )
    {
      this = (BaseDialog___c__DisplayClass24_0_o *)v12->fields.baseWindow;
      if ( this )
      {
        this = (BaseDialog___c__DisplayClass24_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0);
        v14 = this;
        if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v13);
        if ( v14 )
        {
          v19.fields.x = BaseDialog_TypeInfo->static_fields->DIALOG_INITIAL_SCALE;
          v19.fields.y = v19.fields.x;
          v19.fields.z = v19.fields.x;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v14, v19, 0);
          if ( v11 )
          {
            this = (BaseDialog___c__DisplayClass24_0_o *)v2->fields.__4__this;
            v11->fields.method = 6;
            if ( this )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              v11->fields.eventReceiver = gameObject;
              sub_2213A04(&v11->fields.eventReceiver, gameObject);
              v16 = StringLiteral_6272/*"EndOpenBaseDialog"*/;
              v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6272/*"EndOpenBaseDialog"*/;
              sub_2213A04(&v11->fields.callWhenFinished, v16);
              v2->fields.isCallback = 0;
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_2213CDC(this, method);
  }
  if ( !v12 )
    goto LABEL_28;
  this = (BaseDialog___c__DisplayClass24_0_o *)v12->fields.baseWindow;
  if ( !this )
    goto LABEL_28;
  this = (BaseDialog___c__DisplayClass24_0_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
  v17 = this;
  if ( !byte_5969AE5 )
  {
    this = (BaseDialog___c__DisplayClass24_0_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v17 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v17,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
}